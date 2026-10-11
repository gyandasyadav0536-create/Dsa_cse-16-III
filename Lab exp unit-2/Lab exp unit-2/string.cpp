#include <iostream>
using namespace std;

int main()
{
	string s="book";
	int n= sizeof(s);
	string r="y";
	
	int x;
	cin>>x;
	for(int i=0;i<n;i++){
	    if(i%x==0){
	        s.insert(r);
	        
	    }
	}
	for(char ch:s){
	    cout<<ch;
	}
}