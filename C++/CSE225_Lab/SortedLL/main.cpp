#include <bits/stdc++.h>
#include "SortedType.cpp"

using namespace std;

int main()
{
    SortedType<int> st;

    cout << "The length is : " << st.LengthIs() << endl;

    st.InsertItem(5);
    st.InsertItem(7);
    st.InsertItem(4);
    st.InsertItem(2);
    st.InsertItem(1);

    int temp;
    bool found;


    for (int i = 0; i < st.LengthIs(); i++) {
        temp;
        st.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    st.ResetList();


    temp = 6;
    st.RetrieveItem(temp, found);
    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;


    temp = 5;
    st.RetrieveItem(temp, found);
    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;


    if(st.IsFull())
        cout << "List is full" << endl;

    else
        cout << "List is not full" << endl;


    st.DeleteItem(1);
    for (int i = 0; i < st.LengthIs(); i++) {
        temp;
        st.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    st.ResetList();


    if(st.IsFull())
        cout << "List is full" << endl;

    else
        cout << "List is not full" << endl;


    cout << "The length is : " << st.LengthIs() << endl;

}