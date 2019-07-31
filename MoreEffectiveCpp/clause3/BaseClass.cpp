#include "BaseClass.h"


BaseClass::BaseClass()
{
	numA = 0;
	numB = 0;
}

BaseClass::BaseClass(int a,int b)
{
	numA = a;
	numB = b;
}

BaseClass::~BaseClass()
{

}

std::ostream &operator<<(std::ostream & os,const BaseClass &bas)
{
	os << "numA = " << bas.numA << ";  numB = " << bas.numB;
	return os;
}

void BaseClass::FuncPri()
{
	return;
}

void BaseClass::FuncPub()
{
	return;
}
