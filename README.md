# OpenCV3Cookbook
《opencv计算机视觉编程攻略》的代码

# Usage
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
