//
// Created by sayeed on 3/7/2018.
//

#ifndef UNSORTEDLL_UNSORTEDTYPE_H
#define UNSORTEDLL_UNSORTEDTYPE_H


template <class ItemType>
class UnsortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    UnsortedType();
    ~UnsortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType&, bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};


#endif //UNSORTEDLL_UNSORTEDTYPE_H
