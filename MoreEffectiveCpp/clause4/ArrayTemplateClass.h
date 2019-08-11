#ifndef ARRAYTEMPLATECLASS_H
#define ARRAYTEMPLATECLASS_H

template<class T>
class ArrayTemplateClass
{
public:
	ArrayTemplateClass(int size);

private:
	T *data;

};

#endif