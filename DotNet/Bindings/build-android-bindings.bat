mkdir ..\UrhoDotNet\mobile\android
mcs /target:library /out:../UrhoDotNet/mobile/android/UrhoDotNet.dll /unsafe -define:__ANDROID__  Android/DroidPlatformInitializer.cs  Portable/*.cs Portable/Actions/*.cs Portable/Actions/Base/*.cs Portable/Actions/Ease/*.cs Portable/Actions/Instants/*.cs Portable/Actions/Instants/Callfunc/*.cs  Portable/Actions/Intervals/*.cs  Portable/External/*.cs Portable/Math/*.cs Portable/Runtime/*.cs Portable/Shapes/*.cs   Portable/Generated/*.cs
