targets: CompileSharedLibrary CompileProgramExecutable

CompileSharedLibrary: SharedLibrary.c
	gcc -shared -fPIC SharedLibrary.c -o SharedLibrary.so

CompileProgramExecutable: Program.c
	gcc Program.c -o Program -ldl