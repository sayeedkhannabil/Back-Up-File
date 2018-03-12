#include "DynamicArray.h"


DynamicArray::DynamicArray(int size)
{
    data = new int[size];
}

DynamicArray::~DynamicArray()
{
    delete [] data;
}

void DynamicArray:: insertItem(int index, int item)
{
    data[index] = item;
}

int DynamicArray:: getItem(int index)
{
    return data[index];
}



