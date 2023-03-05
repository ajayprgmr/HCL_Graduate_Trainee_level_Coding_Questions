#include<bits/stdc++.h>
// #include "Myutilities.h"
using namespace std;
int main(){
    int l1;
    cin>>l1;
    vector<int> arr(l1);
    for(int i=0;i<l1;i++)
    cin>>arr[i];
   int smallest=INT_MAX,second_smallest=INT_MAX;
   int largest=INT_MIN,second_largest=INT_MIN;
   int n=arr.size();
   for(int i=0;i<n;i++){
    if(arr[i]<smallest){
      second_smallest=smallest;
      smallest=arr[i];
    }
    else{
      if(arr[i]<second_smallest)
      second_largest=arr[i];
    }
    if(arr[i]>largest){
      second_largest=largest;
      largest=arr[i];
    }
    else{
      if(arr[i]>second_largest)
      second_largest=arr[i];
    }
   }
   cout<<smallest<<" "<<second_smallest<<endl;
   cout<<largest<<" "<<second_largest<<endl;
}
    