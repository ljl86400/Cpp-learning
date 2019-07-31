#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H
#include "BaseClass.h"

class DerivedClass : public BaseClass
{
public:
	DerivedClass();
	DerivedClass(int cd);
	DerivedClass(int ad,int bd,int cd);
	~DerivedClass();
	void DerivedClass::FuncPri2();

public:
	int numC;

};

#endif