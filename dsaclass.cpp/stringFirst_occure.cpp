#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
for(int i=0;i<s.length();i++){
int count=0;
for(int j=i+1;j<s.length()){
if(s[i]==s[j]){
count++;
}
else if(s[i]!=s[j]){
cout<<i<<endl;
}
}
}
return 0;
}