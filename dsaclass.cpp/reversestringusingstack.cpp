#include <iosteam>
#include<stack>
using namespace std;
int main(){
string s;
stack<ch>st;
cin>>s;
for(ch:s)
st.push(ch);
while(!st.empty()){
cout<<st.pop();
}
return 0;
}
