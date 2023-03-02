
//an array is sebset of another array or not

#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
vector<int> rotate_by_k(vector<int>&v, int k){
  int n=v.size();
  int j=0;
  while(j<k){
    int temp1=v[j];
    for(int i=0;i<n;i++){
      int temp2=v[i+1];
      v[(i+1)%n]=temp1;
      temp1=temp2;
    }
    k--;
  }
  return v;

}
int main(){
  int n1;
  cin>>n1;
  vector<int> v1(n1);
  for(int i=0;i<n1;i++)
  cin>>v1[i];
  int k;cin>>k;
  vector<int>r=rotate_by_k(v1,k);
  for(int i:r)
  cout<<i<<" ";

}