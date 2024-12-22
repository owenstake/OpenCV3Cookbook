# OpenCV3Cookbook
《opencv计算机视觉编程攻略》第3版的代码
Source code for the book OpenCV3 Computer Vision Application Programming Cookbook 2016 (Third Edition).
Current code is for opencv-3.4.18 and vtk-8.2.0 .

# Usage in windows10 with MinGW compiler
```powershell
cd ./src/Chapter0X
mkdir build; cd build

# Generate makefile
cmake .. -DCMAKE_PREFIX_PATH="E:\owen\work\opencv-3.4.18-vtk-8.2.0-mingw\build\install" -G"MinGW Makefiles"

# Compile
make -j8

# Running
$env:path="$env:path;E:\owen\work\opencv-3.4.18-vtk-8.2.0-mingw\build\install\x64\mingw\bin;E:\owen\work\vtk-8.2.0-mingw\build\install\bin"

# Reset ENV
$env:Path = [System.Environment]::GetEnvironmentVariable("Path","Machine") + ";" + [System.Environment]::GetEnvironmentVariable("Path","User")
```

# Reference
https://github.com/opencv/opencv
https://github.com/opencv/opencv_contrib
https://github.com/Kitware/VTK
https://github.com/PacktPublishing/OpenCV-4-Computer-Vision-Application-Programming-Cookbook-Fourth-Edition

