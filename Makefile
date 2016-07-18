# note: bison and flex think they are  generating C files  but here all files
# are compiled with g++ (the C++ compiler)
 
objects = ast.tab.o lex.yy.o gen.o symtab.o ast.o  

myprog.exe: $(objects)
	g++ -o myprog.exe $(objects)

ast.tab.o : ast.tab.c ast.h gen.h symtab.h
	g++ -c ast.tab.c


lex.yy.o : lex.yy.c ast.tab.h ast.h gen.h
	g++ -c lex.yy.c

gen.o : gen.cpp ast.h gen.h 
	g++ -c gen.cpp
	
symtab.o : symtab.cpp symtab.h gen.h
	g++ -c symtab.cpp

ast.o: ast.cpp gen.h symtab.h ast.h
	g++ -c ast.cpp
	
ast.tab.c: ast.y
	bison -d ast.y

ast.tab.h : ast.y
	bison -d ast.y
	
lex.yy.c : ast.lex
	flex ast.lex
	
clean :
	rm $(objects) myprog.exe


	


