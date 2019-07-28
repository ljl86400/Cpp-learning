#ifndef VERIFYFUNC_H
#define VERIFYFUNC_H

#include "BaseClass.h"
#include "DerivedClass.h"

void VerifyBaseFuncConst(const BaseClass *pCBobj );
void VerifyBaseFunc(BaseClass *pBobj);
void VerifyDerivedFuncConst(const DerivedClass *pCDobj);
void VerifyDerivedFunc(DerivedClass *pDobj);

#endif