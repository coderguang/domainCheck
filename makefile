file filecn: file.o filecn.cpp
	clang++ -o file -g file.o
	clang++ -o filecn -g filecn.cpp
file.o filecn.o: file.cpp filecn.cpp
	clang++ -c -g file.cpp filecn.cpp
clean :
	rm *.o file filecn
