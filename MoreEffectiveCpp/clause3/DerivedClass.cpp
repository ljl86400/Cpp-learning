#include "DerivedClass.h"

DerivedClass::DerivedClass():BaseClass()
{
	numC = 0;
}

DerivedClass::DerivedClass(int cd):BaseClass()
{
	numC = cd;
}

DerivedClass::DerivedClass(int ad,int bd,int cd):BaseClass(ad,bd)
{
	numC = cd;
}

DerivedClass::~DerivedClass()
{

}

void DerivedClass::FuncPri2()
{
	return;
}

