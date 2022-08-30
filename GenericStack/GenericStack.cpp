//Generic stack - here stack is implemented using array and linked list with template for reusability
#include <iostream>
using namespace std;


template <class T>
class stack
{
    T st[100];
    int top;
public:
    stack();
    void push(T x);
    T pop();

};

//constructor

template <class T>
stack<T> ::stack()
{
    top = -1;
}


//push
template <class T> 
void stack<T>:: push(T x)
{
    st[++top] = x;

}


//pop
template <class T>
T stack<T>:: pop()
{
    return st[top--];
}



int main()
{
    
    stack<int> int_stack;
    stack<char> char_stack;
    stack<string> string_stack;

    int_stack.push(20);
    char_stack.push('a');
    string_stack.push("keerthana");

    cout << int_stack.pop() << endl;
    cout << char_stack.pop() << endl;
    cout << string_stack.pop() << endl;



    return 0;
    
}
