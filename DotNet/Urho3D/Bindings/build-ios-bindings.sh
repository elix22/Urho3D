mkdir ../Bin/iOS
mcs /target:library /out:../Bin/iOS/UrhoDotNet.dll /platform:arm /unsafe -define:__IOS__ /reference:/Library/Frameworks/Xamarin.iOS.framework/Versions/14.6.0.15/lib/64bits/Xamarin.iOS.dll iOS/*.cs Portable/*.cs Portable/Actions/*.cs Portable/Actions/Base/*.cs Portable/Actions/Ease/*.cs Portable/Actions/Instants/*.cs Portable/Actions/Instants/Callfunc/*.cs  Portable/Actions/Intervals/*.cs  Portable/External/*.cs Portable/Math/*.cs Portable/Runtime/*.cs Portable/Shapes/*.cs   Portable/Generated/*.cs
