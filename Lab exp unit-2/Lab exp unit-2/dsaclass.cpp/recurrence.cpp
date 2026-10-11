#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
if(n<=1)
return;
fun(n/2);
fun(n/2);
for(int i=0;i<n;i++){
cout<<"i";
}
cout<<endl;
}
int main(){
int n;
cin>>n;
fun(n);
return 0;
}