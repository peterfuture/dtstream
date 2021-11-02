# dtcodec

stream wrapper collection both for Linux & Android

## Feature

* rtmp - comming
* rtsp - comming

## Installation

### Linux
* Install rtmpLinux Version
* mkdir build & cd build
* cmake..
* make -j8

### Android
* Install [NDK](https://github.com/peterfuture/dttv-android/wiki/1-%E5%AE%89%E8%A3%85android-arm%E4%BA%A4%E5%8F%89%E7%BC%96%E8%AF%91%E9%93%BE)
* Install rtmp Android Version
* mkdir build & cd build
* cmake -DCMAKE_TOOLCHAIN_FILE=../android_toolchain.cmake ..
* make -j8

## TEST

[rtmp测试服务器部署] (https://github.com/void-retire/dtlive_android/wiki/1-如何源码编译并部署red5)

# Licence

GPL v3.0
