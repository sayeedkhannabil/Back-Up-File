#include <bits/stdc++.h>
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    UnsortedType<int> list;
    UnsortedType<int> listReverse;

    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(6);
    list.InsertItem(9);

    cout << "The length of the list: " << list.LengthIs() << endl;

    list.InsertItem(1);

    int temp;

    for (int i = 0; i < list.LengthIs(); i++){
        list.GetNextItem(temp);
        listReverse.InsertItem(temp);
    }
    cout << endl;
    list.ResetList();

    for (int i = 0; i < list.LengthIs(); i++){
        listReverse.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    list.ResetList();
    listReverse.ResetList();
    listReverse.MakeEmpty();


    bool found;
    temp = 4;
    list.RetrieveItem(temp, found);
    if (found)
        cout << temp << " is found" << endl;

    else
        cout << temp << " is not found" << endl;

    temp = 5;
    list.RetrieveItem(temp, found);
    if (found)
        cout << temp << " is found" << endl;

    else
        cout << temp << " is not found" << endl;

    temp = 9;
    list.RetrieveItem(temp, found);
    if (found)
        cout << temp << " is found" << endl;

    else
        cout << temp << " is not found" << endl;


    if (list.IsFull())
        cout << "The list is full" << endl;

    else
        cout << "The list is not full" << endl;

    list.DeleteItem(5);
    if (list.IsFull())
        cout << "The list is full" << endl;

    else
        cout << "The list is not full" << endl;


    list.DeleteItem(1);
    for (int i = 0; i < list.LengthIs(); i++){
        list.GetNextItem(temp);
        listReverse.InsertItem(temp);
    }
    cout << endl;
    list.ResetList();

    for (int i = 0; i < list.LengthIs(); i++){
        listReverse.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    list.ResetList();
    listReverse.ResetList();
    listReverse.MakeEmpty();

    list.DeleteItem(6);
    for (int i = 0; i < list.LengthIs(); i++){
        list.GetNextItem(temp);
        listReverse.InsertItem(temp);
    }
    cout << endl;
    list.ResetList();

    for (int i = 0; i < list.LengthIs(); i++){
        listReverse.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    list.ResetList();
    listReverse.ResetList();
    listReverse.MakeEmpty();
    cout << endl;
    list.ResetList();

}
