
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ID_Data {
	int ival = 0;
	float fval = 0.0;
	bool bval = false;
	string sval = "";
	char cval;
};

enum type {
	intType,
	realType,
	boolType,
	charType,
	strType,
	arrayType,
	voidType,
	None,
};

enum idFlag {
	constValueFlag,
	constVariableFlag,
	variableFlag,
	functionFlag,
	objectFlag
};


class IDclass
{
public:
	string id;
	ID_Data idData;
	int idType;
	int idFlag;
	int idIndex;
	bool init;
	vector<IDclass> arrayValue;

	IDclass() {
		idType = intType;
		idFlag = variableFlag;
		idIndex = 0;
		init = false;
	}
	IDclass(const IDclass& c) {
		idType = c.idType;
		idFlag = c.idFlag;
		
		id = c.id;
		init = c.init;
		setValue(c);
	}

	IDclass(int idF, int idT, bool idInit) {		
		idFlag = idF;
		idType = idT;
		init = idInit;
	}
	~IDclass() {};
	void setValue(const IDclass &c) {
		idData.ival = c.idData.ival;
		idData.fval = c.idData.fval;
		idData.bval = c.idData.bval;
		idData.sval = c.idData.sval;
		idData.cval = c.idData.cval;
		arrayValue = c.arrayValue;
	}
	int getValue(){
		if(idType == boolType){
			return idData.bval;
		}else if(idType == charType){
			return idData.cval;
		}

		return idData.ival;
	}
};

bool isConst(IDclass c)
{
  if (c.idFlag == constValueFlag || c.idFlag == constVariableFlag) return true;
  else return false;
}

IDclass *intConst(int val)
{
	IDclass* c = new IDclass(constValueFlag, intType, true);
	
	c->idData.ival = val;
	return c;
}

IDclass *realConst(float val)
{
	IDclass* c = new IDclass(constValueFlag, realType, true);
	
	c->idData.fval = val;
	return c;
}

IDclass *boolConst(bool val)
{
	IDclass* c = new IDclass(constValueFlag, boolType, true);

	c->idData.bval = val;
	return c;
}

IDclass *strConst(string *val)
{
	IDclass* c = new IDclass(constValueFlag, strType, true);
	
	c->idData.sval = *val;
	return c;
}

IDclass *charConst(char cc)
{
	IDclass* c = new IDclass(constValueFlag, charType, true);

	c->idData.cval = cc;
	return c;
}

IDclass operator + (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = lhs.idType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case intType:  c.idData.ival = (lhs.idData.ival + rhs.idData.ival); break;
		case realType: c.idData.fval = (lhs.idData.fval + rhs.idData.fval); break;
	}
	c.init = true;
	return c;
}

IDclass operator - (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = lhs.idType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case intType:  c.idData.ival=(lhs.idData.ival - rhs.idData.ival); break;
		case realType: c.idData.fval=(lhs.idData.fval - rhs.idData.fval); break;
	}
	c.init = true;
	return c;
}

IDclass operator * (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = lhs.idType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case intType:  c.idData.ival=(lhs.idData.ival * rhs.idData.ival); break;
		case realType: c.idData.fval=(lhs.idData.fval * rhs.idData.fval); break;
	}
	c.init = true;
	return c;
}

IDclass operator / (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = lhs.idType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case intType:  c.idData.ival=(lhs.idData.ival / rhs.idData.ival); break;
		case realType: c.idData.fval=(lhs.idData.fval / rhs.idData.fval); break;
	}
	c.init = true;
	return c;
}

IDclass operator < (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = lhs.idType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case intType:  c.idData.bval=(lhs.idData.ival < rhs.idData.ival); break;
		case realType: c.idData.bval=(lhs.idData.fval < rhs.idData.fval); break;
	}
	c.idType = boolType;
	return c;
}

IDclass operator > (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = lhs.idType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case intType:  c.idData.bval=(lhs.idData.ival > rhs.idData.ival); break;
		case realType: c.idData.bval=(lhs.idData.fval > rhs.idData.fval); break;
	}
	c.idType = boolType;
	return c;
}

IDclass operator <= (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = lhs.idType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case intType:  c.idData.bval=(lhs.idData.ival <= rhs.idData.ival); break;
		case realType: c.idData.bval=(lhs.idData.fval <= rhs.idData.fval); break;
		case charType: c.idData.cval = ((int)lhs.idData.cval <= (int)rhs.idData.cval); break;
	}
	c.idType = boolType;
	return c;
}



IDclass operator >= (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = lhs.idType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case intType: c.idData.bval=(lhs.idData.ival >= rhs.idData.ival); break;
		case realType: c.idData.bval=(lhs.idData.fval >= rhs.idData.fval); break;
		case charType: c.idData.cval = ((int)lhs.idData.cval >= (int)rhs.idData.cval); break;
	}
	c.idType = boolType;
	return c;
}


IDclass operator && (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = boolType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case boolType: c.idData.bval=(lhs.idData.bval && rhs.idData.bval); break;
	}
	c.idType = boolType;
	return c;
}

IDclass operator || (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = boolType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case boolType: c.idData.bval=(lhs.idData.bval || rhs.idData.bval); break;
	}
	c.idType = boolType;
	return c;
}

IDclass operator == (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = lhs.idType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case intType:  c.idData.bval=(lhs.idData.ival == rhs.idData.ival); break;
		case realType: c.idData.bval=(lhs.idData.fval == rhs.idData.fval); break;
		case boolType: c.idData.bval=(lhs.idData.bval == rhs.idData.bval); break;
		case charType: c.idData.bval=(lhs.idData.cval == rhs.idData.cval); break;
		case strType: c.idData.bval= (lhs.idData.sval == rhs.idData.sval); break;
	}
	c.idType = boolType;
	return c;
}

IDclass operator != (IDclass lhs, const IDclass& rhs)
{
	IDclass c = IDclass();
	c.idType = lhs.idType;
	if(!(lhs.init && rhs.init))
		return c;
	switch(c.idType)
	{
		case intType: c.idData.bval=(lhs.idData.ival != rhs.idData.ival); break;
		case realType: c.idData.bval=(lhs.idData.fval != rhs.idData.fval); break;
		case boolType: c.idData.bval=(lhs.idData.bval != rhs.idData.bval); break;
		case charType: c.idData.bval=(lhs.idData.cval != rhs.idData.cval); break;
		case strType: c.idData.bval=(lhs.idData.sval != rhs.idData.sval); break;
	}
	c.idType = boolType;
	return c;
}
