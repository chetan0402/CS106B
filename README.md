# CS106B

## Lecture 1

### Misc

- Use `cout << "stuff" + endl;` to print
- Use `cin >> variable` to take input

## Lecture 2

### [lec2quad.cpp](/lec2quad.cpp)

- Use `array<datatype,quantity>` to return array data, use this by including `<array>` header

### [lec2stringexercise.cpp](/lec2stringexercise.cpp)

- C++ has mutuable strings
- `#include<string>`
- Use `getline(cin,variable)` to take the whole line as input

### Misc

- Use `? functionName(datatype& variable)` to edit the memory space directly inside a function

## Lecture 3

### [lec3readfile.cpp](/lec3readfile.cpp)
- `getline(stream,variable)` returns true if it is able to read

### [lec3gridexercise.cpp](/lec3gridexercise.cpp)
- Be careful about types while using `==`

### Misc
- `ifstream.fail()` return true if the last operation done by the ifstream object has failed
- `ifstream >> variable` sets value of variable as "words" from the ifstream object(ignores whitespace), return true if successful
- `vector<datatype>` from `#include<vector>` is a dynamically-resizing array

## Other stuff

### Course link

https://www.youtube.com/playlist?list=PLoCMsyE1cvdWiqgyzwAz_uGLSHsuYZlMX

### [delFiles.bat](/delFiles.bat)

- Used to delete all the files created by `cl.exe` while building and running scripts