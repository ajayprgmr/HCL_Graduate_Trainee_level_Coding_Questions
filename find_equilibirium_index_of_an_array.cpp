#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
int equilibirium_index(vector<int> & nums){
  int total_sum=accumulate(nums.begin(),nums.end(),0);
  int left_sum=0;
  for(int i=0;i<nums.size();i++){
    if(left_sum==total_sum-left_sum-nums[i])
    return i;
    left_sum+=nums[i];
  }
  return -1;
}
int main(){
  int n;cin>>n;
  vector<int> v(n);
  for(int &i:v)
  cin>>i;
  cout<<equilibirium_index(v);
}