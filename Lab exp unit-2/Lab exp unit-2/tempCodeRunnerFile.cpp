#include <bits/stdc++.h>
using namespace std;

int precedence(char ch)
{
if (ch=='^')
return 3;
else if(ch=='*'|| ch=='/')
return 2;
else if (ch=='+'||ch=='-')
return 1;
else
return -1;
}
string infixToPostfix(string s)
{
stack<char<st;
string ans ="";
for(int i=0;i<s.length();i++)
{
char ch=s[i];

if((ch>='A' && ch<='Z')|| (ch>='a' && ch<='z')||(ch>='0' && ch<='9'))
{

ans +=ch;

}
else if (ch=='(')
{
st.push(ch)
}
// right paranthesis
else if(ch== ')')
{
while(!st.empty()&& st.top() !='(')
{
ans +=st.top();
st.pop();

}
if(! st.empty())
st.pop();

}
//operator
else
{
while(! st.empty()&& precedence(st.top())>=precedence(ch))
{
ans +=st.top();
st.pop();
}
st.push(ch);
    }
}

//pop remaining operators
while(!st.empty())
{
ans += st.top();
st.pop();
}
return ans;

}
int main()
{
string infix;
cout<<"enter Infix expression:";
cin>>infix;
cout<<"Postfix Expression:"<<infixToPostfix(infix);
return 0;




}