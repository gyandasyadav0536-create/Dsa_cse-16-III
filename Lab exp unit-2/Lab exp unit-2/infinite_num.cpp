#include<bits/stdc++.h>
using namespace std;
int minsteps(int d){
d=abs(d);
int sum=0,steps=0;
while(sum>=d||(sum-d)%2==0){
}
return steps;
}
int main(){
int d;
cin>>d;
cout<<minsteps(d)<<endl;
}