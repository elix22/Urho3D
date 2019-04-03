//#if

// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

#include "GPUTestConfig.h"

#include <stddef.h>
#include <stdint.h>

#include "GPUInfo.h"
#include "GPUTestExpectationsParser.h"

#if defined(ANGLE_PLATFORM_APPLE)
#    include "GPUTestConfig_mac.h"
#endif

#if !defined(ANGLE_PLATFORM_ANDROID)
#    include "gpu_info_util/SystemInfo.h"
#endif

#if defined(ANGLE_PLATFORM_WINDOWS)

namespace base
{
namespace
{

// Disable the deprecated function warning for GetVersionEx
#    pragma warning(disable : 4996)

class SysInfo
{
  public:
    static void OperatingSystemVersionNumbers(int32_t *major_version,
                                              int32_t *minor_version,
                                              int32_t *bugfix_version);
};

// static
void SysInfo::OperatingSystemVersionNumbers(int32_t *major_version,
                                            int32_t *minor_version,
                                            int32_t *bugfix_version)
{
    OSVERSIONINFOEX version_info = {sizeof version_info};
    ::GetVersionEx(reinterpret_cast<OSVERSIONINFO *>(&version_info));
    *major_version  = version_info.dwMajorVersion;
    *minor_version  = version_info.dwMinorVersion;
    *bugfix_version = version_info.dwBuildNumber;
}

}  // anonymous namespace
}  // namespace base

#endif  // defined(ANGLE_PLATFORM_WINDOWS)

namespace angle
{

namespace
{

GPUTestConfig::OS GetCurrentOS()
{
#if defined(ANGLE_PLATFORM_LINUX)
    return GPUTestConfig::kOsLinux;
#elif defined(ANGLE_PLATFORM_WINDOWS)
    int32_t major_version  = 0;
    int32_t minor_version  = 0;
    int32_t bugfix_version = 0;
    base::SysInfo::OperatingSystemVersionNumbers(&major_version, &minor_version, &bugfix_version);
    if (major_version == 5)
        return GPUTestConfig::kOsWinXP;
    if (major_version == 6 && minor_version == 0)
        return GPUTestConfig::kOsWinVista;
    if (major_version == 6 && minor_version == 1)
        return GPUTestConfig::kOsWin7;
    if (major_version == 6 && (minor_version == 2 || minor_version == 3))
        return GPUTestConfig::kOsWin8;
    if (major_version == 10)
        return GPUTestConfig::kOsWin10;
#elif defined(ANGLE_PLATFORM_APPLE)
    int32_t major_version  = 0;
    int32_t minor_version  = 0;
    int32_t bugfix_version = 0;
    angle::GetOperatingSystemVersionNumbers(&major_version, &minor_version, &bugfix_version);
    if (major_version == 10)
    {
        switch (minor_version)
        {
            case 5:
                return GPUTestConfig::kOsMacLeopard;
            case 6:
                return GPUTestConfig::kOsMacSnowLeopard;
            case 7:
                return GPUTestConfig::kOsMacLion;
            case 8:
                return GPUTestConfig::kOsMacMountainLion;
            case 9:
                return GPUTestConfig::kOsMacMavericks;
            case 10:
                return GPUTestConfig::kOsMacYosemite;
            case 11:
                return GPUTestConfig::kOsMacElCapitan;
            case 12:
                return GPUTestConfig::kOsMacSierra;
            case 13:
                return GPUTestConfig::kOsMacHighSierra;
            case 14:
                return GPUTestConfig::kOsMacMojave;
        }
    }
#elif defined(ANGLE_PLATFORM_ANDROID)
    return GPUTestConfig::kOsAndroid;
#elif defined(ANGLE_PLATFORM_FUCHSIA)
    return GPUTestConfig::kOsFuchsia;
#endif
    return GPUTestConfig::kOsUnknown;
}

#if !defined(ANGLE_PLATFORM_ANDROID)
bool CollectBasicGraphicsInfo(GPUInfo *gpu_info)
{
    angle::SystemInfo info;
    if (!angle::GetSystemInfo(&info))
    {
        return false;
    }
    const angle::GPUDeviceInfo &gpu = info.gpus[info.primaryGPUIndex];
    gpu_info->gpu.vendor_id         = gpu.vendorId;
    gpu_info->gpu.device_id         = gpu.deviceId;
    gpu_info->gpu.active            = true;
    return true;
}
#else
bool CollectBasicGraphicsInfo(GPUInfo *gpu_info)
{
    gpu_info->gpu.vendor_id = 0;
    gpu_info->gpu.device_id = 0;
    gpu_info->gpu.active = true;
    return false;
}
#endif  // defined(ANGLE_PLATFORM_ANDROID)
}  // namespace

GPUTestConfig::GPUTestConfig()
    : validate_gpu_info_(true),
      os_(kOsUnknown),
      gpu_device_id_(0),
      build_type_(kBuildTypeUnknown),
      api_(kAPIUnknown)
{}

GPUTestConfig::GPUTestConfig(const GPUTestConfig &other) = default;

GPUTestConfig::~GPUTestConfig() = default;

void GPUTestConfig::set_os(int32_t os)
{
    ASSERT((0) == (os & ~(kOsAndroid | kOsWin | kOsMac | kOsLinux | kOsFuchsia)));
    os_ = os;
}

void GPUTestConfig::AddGPUVendor(uint32_t gpu_vendor)
{
    ASSERT((0u) != (gpu_vendor));
    for (size_t i = 0; i < gpu_vendor_.size(); ++i)
        ASSERT((gpu_vendor_[i]) != (gpu_vendor));
    gpu_vendor_.push_back(gpu_vendor);
}

void GPUTestConfig::set_gpu_device_id(uint32_t id)
{
    gpu_device_id_ = id;
}

void GPUTestConfig::set_build_type(int32_t build_type)
{
    ASSERT((0) == (build_type & ~(kBuildTypeRelease | kBuildTypeDebug)));
    build_type_ = build_type;
}

void GPUTestConfig::set_api(int32_t api)
{
    ASSERT((0) == (api & ~(kAPID3D9 | kAPID3D11 | kAPIGLDesktop | kAPIGLES | kAPIVulkan)));
    api_ = api;
}

bool GPUTestConfig::IsValid() const
{
    if (!validate_gpu_info_)
        return true;
    if (gpu_device_id_ != 0 && (gpu_vendor_.size() != 1 || gpu_vendor_[0] == 0))
        return false;
    return true;
}

bool GPUTestConfig::OverlapsWith(const GPUTestConfig &config) const
{
    ASSERT(IsValid());
    ASSERT(config.IsValid());
    if (config.os_ != kOsUnknown && os_ != kOsUnknown && (os_ & config.os_) == 0)
        return false;
    if (config.gpu_vendor_.size() > 0 && gpu_vendor_.size() > 0)
    {
        bool shared = false;
        for (size_t i = 0; i < config.gpu_vendor_.size() && !shared; ++i)
        {
            for (size_t j = 0; j < gpu_vendor_.size(); ++j)
            {
                if (config.gpu_vendor_[i] == gpu_vendor_[j])
                {
                    shared = true;
                    break;
                }
            }
        }
        if (!shared)
            return false;
    }
    if (config.gpu_device_id_ != 0 && gpu_device_id_ != 0 &&
        gpu_device_id_ != config.gpu_device_id_)
        return false;
    if (config.build_type_ != kBuildTypeUnknown && build_type_ != kBuildTypeUnknown &&
        (build_type_ & config.build_type_) == 0)
        return false;
    if (config.api() != kAPIUnknown && api_ != kAPIUnknown && api_ != config.api_)
        return false;
    return true;
}

void GPUTestConfig::DisableGPUInfoValidation()
{
    validate_gpu_info_ = false;
}

void GPUTestConfig::ClearGPUVendor()
{
    gpu_vendor_.clear();
}

GPUTestBotConfig::~GPUTestBotConfig() = default;

void GPUTestBotConfig::AddGPUVendor(uint32_t gpu_vendor)
{
    ASSERT((0u) == (GPUTestConfig::gpu_vendor().size()));
    GPUTestConfig::AddGPUVendor(gpu_vendor);
}

bool GPUTestBotConfig::SetGPUInfo(const GPUInfo &gpu_info)
{
    ASSERT(validate_gpu_info_);
    if (gpu_info.gpu.device_id == 0 || gpu_info.gpu.vendor_id == 0)
        return false;
    ClearGPUVendor();
    AddGPUVendor(gpu_info.gpu.vendor_id);
    set_gpu_device_id(gpu_info.gpu.device_id);
    return true;
}

bool GPUTestBotConfig::IsValid() const
{
    switch (os())
    {
        case kOsWinXP:
        case kOsWinVista:
        case kOsWin7:
        case kOsWin8:
        case kOsWin10:
        case kOsMacLeopard:
        case kOsMacSnowLeopard:
        case kOsMacLion:
        case kOsMacMountainLion:
        case kOsMacMavericks:
        case kOsMacYosemite:
        case kOsMacElCapitan:
        case kOsMacSierra:
        case kOsMacHighSierra:
        case kOsMacMojave:
        case kOsLinux:
        case kOsAndroid:
        case kOsFuchsia:
            break;
        default:
            return false;
    }
    if (validate_gpu_info_)
    {
        if (gpu_vendor().size() != 1 || gpu_vendor()[0] == 0)
            return false;
        if (gpu_device_id() == 0)
            return false;
    }
    switch (build_type())
    {
        case kBuildTypeRelease:
        case kBuildTypeDebug:
            break;
        default:
            return false;
    }
    return true;
}

bool GPUTestBotConfig::Matches(const GPUTestConfig &config) const
{
    ASSERT(IsValid());
    ASSERT(config.IsValid());
    if (config.os() != kOsUnknown && (os() & config.os()) == 0)
        return false;
    if (config.gpu_vendor().size() > 0)
    {
        bool contained = false;
        for (size_t i = 0; i < config.gpu_vendor().size(); ++i)
        {
            if (!gpu_vendor().empty() && config.gpu_vendor()[i] == gpu_vendor()[0])
            {
                contained = true;
                break;
            }
        }
        if (!contained)
            return false;
    }
    if (config.gpu_device_id() != 0 && gpu_device_id() != config.gpu_device_id())
        return false;
    if (config.build_type() != kBuildTypeUnknown && (build_type() & config.build_type()) == 0)
        return false;
    if (config.api() != 0 && (api() & config.api()) == 0)
        return false;
    return true;
}

bool GPUTestBotConfig::Matches(const std::string &config_data) const
{
    GPUTestExpectationsParser parser;
    GPUTestConfig config;

    if (!parser.ParseConfig(config_data, &config))
        return false;
    return Matches(config);
}

bool GPUTestBotConfig::LoadCurrentConfig(const GPUInfo *gpu_info)
{
    bool rt;
    if (!gpu_info)
    {
        GPUInfo my_gpu_info;
        if (!CollectBasicGraphicsInfo(&my_gpu_info))
        {
            std::cerr << "Fail to identify GPU\n";
            DisableGPUInfoValidation();
            rt = true;
        }
        else
        {
            rt = SetGPUInfo(my_gpu_info);
        }
    }
    else
    {
        rt = SetGPUInfo(*gpu_info);
    }
    set_os(GetCurrentOS());
    if (os() == kOsUnknown)
    {
        std::cerr << "Unknown OS\n";
        rt = false;
    }
#if defined(NDEBUG)
    set_build_type(kBuildTypeRelease);
#else
    set_build_type(kBuildTypeDebug);
#endif
    return rt;
}

// static
bool GPUTestBotConfig::CurrentConfigMatches(const std::string &config_data)
{
    GPUTestBotConfig my_config;
    if (!my_config.LoadCurrentConfig(nullptr))
        return false;
    return my_config.Matches(config_data);
}

// static
bool GPUTestBotConfig::CurrentConfigMatches(const std::vector<std::string> &configs)
{
    GPUTestBotConfig my_config;
    if (!my_config.LoadCurrentConfig(nullptr))
        return false;
    for (size_t i = 0; i < configs.size(); ++i)
    {
        if (my_config.Matches(configs[i]))
            return true;
    }
    return false;
}

// static
bool GPUTestBotConfig::GpuBlacklistedOnBot()
{
    return false;
}

}  // namespace angle
