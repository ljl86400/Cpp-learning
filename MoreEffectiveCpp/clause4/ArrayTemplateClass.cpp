#include "ArrayTemplateClass.h"

template<class T>
ArrayTemplateClass<T>::ArrayTemplateClass(int size)
{
	data = new T(size);
}