#include<iostream>
#include "EquipementPiece.h"
#include "ArrayTemplateClass.h"
#include "EquipmentPiece_3.h"


int main()
{


	/** instance an object array with None Default ctor Class **/
	
	//EquipementPiece eqPiece1;				// error ,need default ctor
	//EquipementPiece bestPieces[10];		// error,need default ctor
	//EquipementPiece *bestPieces
	//	= new EquipementPiece[10];			// error,need default ctor
	EquipementPiece eqPiece1(10);			// work without De-ctor
	EquipementPiece **bestPieces			// work without De-ctor:must delete obj in the end for resource leaking
			= new EquipementPiece*[10];
	for (int iloop1 = 0; iloop1 < 10 ;iloop1 ++)
	{
		bestPieces[iloop1] = new EquipementPiece(iloop1);
	}
	for (int iloop1 = 0; iloop1 < 10 ;iloop1 ++)
	{
		delete bestPieces[iloop1];
	}

	// method a.1 ==> non-heap array:must delete obj in finally
	int inA[3] = {9,5,1};

	EquipementPiece bestPieces1[3] = {
	EquipementPiece(inA[0]),
	EquipementPiece(inA[1]),
	EquipementPiece(inA[2])
	};

	
	// method a.2.1 ==> pointer array:must delete obj in the end for resource leaking
	typedef EquipementPiece *PEP1;
	PEP1 bestPieces2[3];
	for (int iloop1 = 0; iloop1 < 3 ;iloop1 ++)
	{
		bestPieces2[iloop1] = new EquipementPiece(inA[3 - iloop1]);
	}
	for (int iloop1 = 0; iloop1 < 3 ;iloop1 ++)
	{
		delete bestPieces2[iloop1];
	}

	
	// method a.2.2 ==> pointer array:must delete obj in the end for resource leaking
	typedef EquipementPiece *PEP2;
	PEP2 *bestPieces3 = 
		new PEP2[3];
	for (int iloop1 = 0; iloop1 < 3 ;iloop1 ++)
	{
		bestPieces3[iloop1] = new EquipementPiece(inA[iloop1]);
	}
	for (int iloop1 = 0; iloop1 < 3 ;iloop1 ++)
	{
		delete bestPieces3[iloop1];
	}

	// method a.3 ==> placement new
	// special attention to the difference between "operator new" and "new operator" 
	void *rawMemory = 
		operator new[](5*sizeof(EquipementPiece));
	EquipementPiece *bestPieces4 = 
		static_cast<EquipementPiece*>(rawMemory);
	for (int iloop1 = 0 ;iloop1 < 5; iloop1 ++)
	{
		new(&bestPieces4) EquipementPiece(iloop1);
	}
	for (int iloop1 = 0 ;iloop1 < 5; iloop1 ++)
	{
		bestPieces4[iloop1].~EquipementPiece();
	}
	operator delete[](rawMemory);




	/** instance an object array with template Class **/
	//ArrayTemplateClass<int> arrayObj;	// Error ,need De-ctor



	/** instance an object with virtual Class **/
	EquipmentPiece_3 eqPiece2;
	

	return 0;
}