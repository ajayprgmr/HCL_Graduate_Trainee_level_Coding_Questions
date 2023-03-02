
//an array is sebset of another array or not

#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
void remove_duplicates(vector<int> &v){
  
  for(int i=0;i<=v.size()-2;i++)
    if((v[i]^v[i+1])==0){
      v.erase(v.begin()+i);
    }

  }
int main(){
  int n1;
  cin>>n1;
  vector<int> v1(n1);
  for(int i=0;i<n1;i++)
  cin>>v1[i];
  remove_duplicates(v1);
  for(int i:v1)
  cout<<i<<" ";
  
}