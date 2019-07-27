#include <stdio.h>
#include <iostream>
#include <vector>

#include "clause1.h"


int main()
{
	//int	&rNum;					// syntax error,reference can't declare withn't init 
	//int	&rNum	=	NULL;		// syntax error£¬reference can¡®t be null
	int	a	=	0;
	int b	=	1;
	int	&rA	=	a;
	//int	&rA	=	b;				// syntax error,reference can't be redefine

	int	*pNum;
	pNum	=	NULL;
	

	std::cout << "a = "<< a 
		<< std::endl
		<< std::endl;

	a	=	PointerAsArgument(pNum);
	std::cout << "when input pointer is NULL,a = "<< a 
		<< std::endl 
		<< std::endl;

	pNum	=	&a;
	a	=	PointerAsArgument(pNum);
	std::cout << "when input pointer is not NULL,a = "<< a 
		<< std::endl 
		<<std::endl;

	ReferenceAsArgument(rA);


	getchar();
	return	0;
}