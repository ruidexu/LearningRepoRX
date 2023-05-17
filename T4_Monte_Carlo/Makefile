all: compile_file1 compile_file2 link

compile_file1:	
	g++ MC.cpp -o MC.o -c

compile_file2:	
	g++ helper.cpp -o helper.o -c

link:
	g++ helper.o MC.o -o run

clean:
	rm -f *.o *.txt run