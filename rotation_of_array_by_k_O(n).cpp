
//an array is sebset of another array or not

#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
void rotate_by_k(vector<int>&v, int k){
  int n = v.size();
    k %= n;
    if (k == 0) return;
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
 
}
int main(){
  int n1;
  cin>>n1;
  vector<int> v1(n1);
  for(int i=0;i<n1;i++)
  cin>>v1[i];
  int k;cin>>k;
  rotate_by_k(v1,k);
  for(int i:v1)
  cout<<i<<" ";

}