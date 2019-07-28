#ifndef BASECLASS_H
#define BASECLASS_H


class BaseClass
	{
	public:
		void FuncPub();

	private:
		void FuncPri();
		virtual void FuncPri2() = 0; // this virtual function is necessary for dynamic_cast

	};


#endif