//rearrange array given and array of integer ARR having  your task is to print array in the following order
#include <iostream>
using namespace std;

int main() {
int n;
cout<<"enter the element of array:";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n-1;i++){
int min_index=i;
for(int j=i+1;j<n;j++){
if(arr[j]<arr[min_index]){
    min_index=j;


}
}
swap(arr[i],arr[min_index]);


}
for (int i = 0, j = n - 1; i < j; i++, j--) {
        cout << arr[i] << " " << arr[j] << " ";
        if (i == j)
            cout << arr[i];
    }
}