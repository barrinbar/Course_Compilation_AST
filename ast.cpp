#include "symtab.h"
#include "ast.h"

IdNode::IdNode (char *name, int line) 
{
    myType t = getSymbol (name);
	if (t == UNKNOWN) { 
	    errorMsg ("line %d: variable %s is undefined\n", line, name);
		t = _INT;
    }
    _type = t;
	strcpy (this->_name, name); 
	_line = line;
}

BinaryOp::BinaryOp (enum op op, Exp *left, Exp *right, int line) 
{
    this->_op = op; 
	this->_left = left; 
	this->_right = right;
	_line = line;

	if (left->_type != right->_type) {
	    errorMsg ("line %d: operator %s applied to operands\
 having different types\n", line, opName (op, _INT));
		_type = _FLOAT;
	}
	else
        _type = left->_type;

    if (left->_type != right->_type)
	    _type = _FLOAT;
	else
	    _type = left->_type;
}

AssignStmt::AssignStmt (IdNode *lhs, Exp *rhs, int line) 
   : Stmt ()  // call base class (super class) constructor
{
   _lhs = lhs; 
   _rhs = rhs; 
   _line = line; 

    if (lhs->_type != _rhs->_type && lhs->_type != UNKNOWN)
       errorMsg ("line %d: left hand side and right hand side\
 of assignment have different types\n", _line);

}


SwitchStmt::SwitchStmt (Exp *exp, Case *caselist, Stmt *default_stmt, int line) {
	       _exp = exp; _caselist = caselist; _default_stmt = default_stmt; _line = line; 
}

