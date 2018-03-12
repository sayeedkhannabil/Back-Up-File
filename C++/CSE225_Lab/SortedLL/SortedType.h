//
// Created by sayeed on 3/12/2018.
//

#ifndef SORTEDLL_SORTEDTYPE_H
#define SORTEDLL_SORTEDTYPE_H


template <class ItemType>
class SortedType
{
struct NodeType
{
ItemType info;
NodeType* next;
};
public:
SortedType();
~SortedType();
bool IsFull();
int LengthIs();
void MakeEmpty();
void RetrieveItem(ItemType&,
bool&);
void InsertItem(ItemType);
void DeleteItem(ItemType);
void ResetList();
void GetNextItem(ItemType&);
private:
NodeType* listData;
int length;
NodeType* currentPos;
};


#endif //SORTEDLL_SORTEDTYPE_H
