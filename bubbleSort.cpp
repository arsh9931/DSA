#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
  for(int items = 1 ; items <= n-1 ; items++){
    for(int j = 0 ; j <= n-items-1 ; j++){
      if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
    }
  }
}
int main(){
  int a[]={-2,1,-12,10,4,6,8,-5};
  int n = sizeof(a)/sizeof(int);
  bubbleSort(a,n);
  for(auto x : a)
    cout<<x<<",";
    return 0;
}
