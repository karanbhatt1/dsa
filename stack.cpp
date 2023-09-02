#include <iostream>
using namespace std;
struct stack{
    int size;
    int* s;
    int top;
}st;
void push(stack *st,int x)
{
    if(st->top==st->size-1)
    {
        cout<<"stack overflow";
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}
int main() {
    st.top=-1;
    cout<<"Enter the size of stack:";
    cin>>st.size;
    st.s = new int[st.size-1];
    cout<<"Enter the elements of stack:\n";
	int a;
    for(int i=0;i<=st.size;i++)
    {
    	cin>>a;
        push(&st,a);
    }
    cout<<"The elements in the stack are :\n";
    for(int j=st.top;j>=0;j--)
    {
    	cout<<st.s[j]<<"\n";
	}
    return 0;
}
