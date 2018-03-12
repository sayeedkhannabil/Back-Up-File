#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H


class DynamicArray
{
private:
    int *data;

public:
    DynamicArray(int);
    ~DynamicArray();
    void insertItem(int, int);
    int getItem(int);
};

#endif // DYNAMICARRAY_H
