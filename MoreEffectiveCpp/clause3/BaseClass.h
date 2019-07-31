#ifndef BASECLASS_H
#define BASECLASS_H
#include<iostream>
#include <ostream>


class BaseClass
	{
	public:
		BaseClass();
		BaseClass(int a,int b);
		~BaseClass();
		void FuncPub();
		friend std::ostream &operator<<(std::ostream & os,const BaseClass &bas);

	private:
		void FuncPri();

	private:
		int numA;
		int numB;

	};


#endif