#include "clause1.h"

int PointerAsArgument(int *arg)
{
	// if use the pointer as an argument 
	// judge if the pointer point to NULL is necessary
	// or program maybe crash
	if (!arg)
	{
		return -1;
	}

	std::cout << "PoiterAsArgument input pointer point to "<< *arg <<std::endl;
	
	return 0;
}

void ReferenceAsArgument(int &arg)
{
	// for reference can't be NULL
	// so the NULL judgment is not necessary
	std::cout << "ReferenceAsArgument input reference point to " << arg << std::endl;
}