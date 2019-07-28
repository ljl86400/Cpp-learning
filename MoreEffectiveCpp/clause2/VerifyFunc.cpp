#include "VerifyFunc.h"
#include <iostream>

void VerifyBaseFuncConst(const BaseClass *pCBobj )
{
	std::cout << "VerifyBaseFuncConst execute successful!!" << std::endl;
	return;
}
void VerifyBaseFunc(BaseClass *pBobj)
{
	std::cout << "VerifyBaseFunc execute successful!!" << std::endl;
	return;
}
void VerifyDerivedFuncConst(const DerivedClass *pCDobj)
{
	std::cout << "VerifyDerivedFuncConst execute successful!!" << std::endl;
	return;
}
void VerifyDerivedFunc(DerivedClass *pDobj)
{
	std::cout << "VerifyDerivedFunc execute successful!!" << std::endl;
	return;
}