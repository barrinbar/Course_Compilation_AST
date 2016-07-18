#ifndef __GEN_H
#define __GEN_H 1

void emit (const char *format, ...); 
extern int errors;

void errorMsg (const char *format, ...);

enum myType { _INT, _FLOAT, UNKNOWN };
enum op { PLUS = 0, MINUS, MUL, DIV, LT, GT, LE, GE, EQ, NE };

/* convert operator  to  string  suitable for the given type
  e.g  opName (PLUS, _INT)  returns "+"
       opName (PLUS, _FLOAT) returns  "plus"
*/
const char *opName (enum op, myType t);

#endif // not defined __GEN_H
