#include <iostream>
#include "StackType.cpp"

using namespace std;

int sumOdd(StackType<int> stack);

int main() {
    StackType<int> st;
    if(st.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }
    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);

    if(st.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }

    if(st.IsFull())
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        cout << "Stack is not Full" << endl;
    }

    StackType<int> stCopy;
    int a;
    for(int i=0;i<4;i++)
    {
        a=st.Top();
        cout << a << " ";
        stCopy.Push(a);
        st.Pop();
    }
    cout << endl;

    st.Push(3);

    for(int i=0;i<4;i++)
    {
        st.Push(stCopy.Top());
        stCopy.Pop();
    }

    for(int i=0;i<5;i++)
    {
        a=st.Top();
        cout << a << " ";
        stCopy.Push(a);
        st.Pop();
    }
    cout << endl;

    for(int i=0;i<5;i++)
    {
        st.Push(stCopy.Top());
        stCopy.Pop();
    }

    if(bool b=st.IsFull())
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        cout << "Stack is not Full" << endl;
    }

    st.Pop();
    st.Pop();

    cout << st.Top()<< endl;

    StackType<int> st2;
    for (int i = 0 ; i < 5; i++){
        cin >> a;
        st2.Push(a);
    }

    int sum=sumOdd(st2);

    cout << "Sum is " << sum << endl;

    return 0;
}

int sumOdd(StackType<int> stack)
{
    int sum=0;
    while (!stack.IsEmpty())
    {
        if(stack.Top()%2==1)
        {
            sum=sum+stack.Top();
        }
        stack.Pop();
    }
    return sum;
}