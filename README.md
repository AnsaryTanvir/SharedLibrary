# Shared Library/Dynamic Library in C

### What are shared/dynamic libraries?
Shared/Dynamic libraries are libraries that are not linked at compile time but are linked dynamically at runtime. Therefore, they are not included in the executable.

They are loaded into the memory at runtime and a link is established with the executable programs.

### Why do we need a shared/dynamic library?

It's easier to maintain a single library than to maintain multiple applications. So, if multiple applications use the same library, then it's better to make the library shared/dynamic.

Shared/dynamic libraries contain several lines of code. Using shared/dynamic library help reduce the size of applications, since these libraries are not bundled with the executables. In addition to that, if we need to upgrade the library, we don't need to recompile all the applications.

#### Dependency:
*  gcc must be installed in order to use Makefile.

#### How to Build:
*  make

#### How to Use:
*  ./Program

### Screenshots:
![Program](Linux/program.png)
