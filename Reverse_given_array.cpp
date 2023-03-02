#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
int main(){
    int l1;
    cin>>l1;
    vector<int> arr(l1);
    for(int i=0;i<l1;i++)
    cin>>arr[i];

    int start=0,end=arr.size()-1;
    while(start<end){
      int temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      start++;
      end--;
    }
    for(int i:arr)
    cout<<i<<" ";
   
}
    