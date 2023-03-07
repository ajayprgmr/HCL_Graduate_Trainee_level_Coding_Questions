#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
int maximum_product_subarray(vector<int> &nums){
 int maxprod =nums[0],cp=nums[0]; //cs stands for current product
    for (int i = 1; i < nums.size(); i++) {
        cp=max(cp*nums[i],nums[i]);
        maxprod=max(maxprod,cp);
    }
    return maxprod;
}
int main(){
  int n;cin>>n;
  vector<int> v(n);
  for(int &i:v)
  cin>>i;
  cout<<maximum_product_subarray(v);
 
}