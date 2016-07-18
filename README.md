# Course_Compilation_AST
A three-address code compiler using AST for Mr. Gadi Pessah's Compilation course @ Afeka College


It recognizes the following syntax commands:
```
+
-
*
/
<
>
<=
>=
==
!=
(
)
=
;
:
{    
}
if
else
while
int
float
or
and
not
=>
for
switch
case
default
break
read
do
```

## Built With

* Visual Studio Code
* flex
* bison
* g++

## Building


```
flex  ast.lex
bison –d ast.y'''
g++ -o myprog.exe ast.tab.c lex.yy.c gen.cpp symtab.cpp ast.cpp
```

## Running

To run you must first create a code input file according to the supported syntax.
One of the basic examples under "examples" can be used.

Run: `myprog  <input.txt>`

## Authors

* **Gadi Pessah**  - *Initial work*
* **Omer Elgrably** ( @omerel) - *Updates according to requests*
* **Barr Inbar** (@barrinbar) - *Updates according to requests*

