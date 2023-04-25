#CALIZ DEL MAKEFILE

bin/prog.exe: src/main.cpp src/metodos.cpp 
	clang++ -Wall -Wextra -Wpedantic -Werror \
	-std=c++20 src/main.cpp src/metodos.cpp -o bin/prog.exe

.PHONY: clean
clean:
	rm bin/* main.obj