#include<iostream>
#include <stdio.h>

#include "BaseClass.h"
#include "derivedClass.h"
#include "VerifyFunc.h"


int doSmoething()
{
	return 0;
}

void main()
{
	typedef void (* FuncPtr)();
	FuncPtr funcptrArray[10] = {NULL};

	int numA = 2;
	int numB = 3;
	double numC;
	DerivedClass son1;
	DerivedClass son2;
	BaseClass *pFather = &son1;
	const BaseClass *pCFather = &son2;

	// C cast
	std::cout<< "******* C cast ******" <<std::endl;
	numC = numA/numB;
	std::cout << "double type numC = " << numC << std::endl;

	numC = (double)numA/numB;
	std::cout << "double type numC = " << numC << std::endl;

	numC = numA/numB;
	std::cout << "double type numC = " << numC << std::endl;

	//VerifyBaseFunc(pCFather);   // syntax error,this function can only accept non-const
									// BaseClass pointer
	//VerifyBaseFuncConst(pFather);   // syntax error,this function can only accept const
									// BaseClass pointer

	VerifyBaseFunc((BaseClass*)pCFather);	// cast const type to none_const type
	VerifyBaseFuncConst((const BaseClass*)pFather); // cast none_const type to const type
	VerifyDerivedFunc((DerivedClass *)pFather);		// downward cast
	VerifyDerivedFuncConst((const DerivedClass *)pCFather);		// downward cast

	//funcptrArray[0] = &doSmoething();		// syntax error,funcptrArray only accept FuncPtr pointer;
	funcptrArray[0] = (FuncPtr)&doSmoething;	// right
	for (int iloop1 = 0; iloop1 < 10;iloop1 ++)
	{
		std::cout << *funcptrArray[iloop1] << " ," ;
	}
	std::cout << std::endl;




	// CPP cast
	// static_cast/const_cast/dynamic _cast/reinterpret_cast
	std::cout << std::endl << "******* CPP cast ******" <<std::endl;
	numC = static_cast<double>(numA)/numB;
	std::cout << "double type numC = " << numC << std::endl;

	
	VerifyBaseFunc(const_cast<BaseClass*>(pCFather));	// cast const type to none_const type
	VerifyBaseFuncConst(const_cast<const BaseClass*>(pFather)); // cast none_const type to const type
	VerifyDerivedFunc(dynamic_cast<DerivedClass *>(pFather));		// downward cast
	VerifyDerivedFuncConst(dynamic_cast<const DerivedClass *>(pCFather));		// downward cast
	// CPP dynamic_cast need a virtual member in the base class as a downward necessary flag
	funcptrArray[1] = reinterpret_cast<FuncPtr>(&doSmoething);
	for (int iloop1 = 0; iloop1 < 10;iloop1 ++)
	{
		std::cout << *funcptrArray[iloop1] << " ," ;
	}
	std::cout << std::endl;
	


	getchar();
	return;
}