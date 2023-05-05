#include<iostream>
using namespace std;

#define n 100
class stack
{
    int* arr;
    int top;
    public:
        stack(){
            arr = new int[n];
            top = -1;
        }

    //Pushing value onto stack
    void push(int x)
    {
        if(top == n-1){
            cout<<"Stack Overflow";
            return;
        }
        top++;
        arr[top] = x;
    }

    //popping value from stack top
    void pop()
    {
        if(top==-1)
        {
            cout<<"\nStack is Empty";
            return;
        }
        top--;
    }

    //top of stack
    int Top()
    {
        if(top==-1)
        {
            cout<<"\nStack is empty";
            return -1;
        }
        return arr[top];
    }

    //stack is empty ot not
    bool empty()
    {
        return top==-1;
    }
};

int main()
{
    stack s1 ;
    cout<<s1.Top()<<endl;;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout<<s1.Top()<<endl;;
    s1.pop();
    cout<<s1.Top()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<s1.empty();
    return 0;
}