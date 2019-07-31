#include<iostream>
//#include <ostream>
#include "BaseClass.h"
#include "DerivedClass.h"

void printBaseArray(std::ostream& s,const BaseClass array[],int numElement);

void main()
{
	BaseClass baseObj0(2,3);
	DerivedClass derivedObj3(1,2,3);
	BaseClass baseObj9(1,5);
	BaseClass baseArray[10];
	DerivedClass derivedArray[10];

	baseArray[0] = baseObj0;
	baseArray[3] = derivedObj3;
	baseArray[9] = baseObj9;

	derivedArray[0] = derivedObj3;
	derivedArray[3] = derivedObj3;
	derivedArray[9] = derivedObj3;
	
	std::cout << "**** baseArray ****" << std::endl;
	printBaseArray(std::cout,baseArray,10);
	std::cout << "\n**** derivedArray ****" << std::endl;
	printBaseArray(std::cout,derivedArray,10);		// build ok,but will get unexpected result

	getchar();
	return;
}

void printBaseArray(std::ostream &s, const BaseClass array[],int numElement)
{
	for (int iloop1 = 0; iloop1 < numElement;iloop1 ++)
	{
		s << "array" << iloop1 << ":   " << array[iloop1] << "\n";
	}
}
