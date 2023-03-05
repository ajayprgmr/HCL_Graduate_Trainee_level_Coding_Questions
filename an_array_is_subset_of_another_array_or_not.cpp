
//an array is sebset of another array or not

#include<bits/stdc++.h>
// #include "Myutilities.h"
using namespace std;
bool issubset(vector<int>&v1,vector<int> &v2){
  // i want to check whether v1 is subset of v2 or not
  unordered_set<int> hash;
  int n1=v1.size();
  int n2=v2.size();
  for(int i=0;i<n2;i++)
  hash.insert(v2[i]);
  for(int i=0;i<n1;i++){
    if(hash.find(v1[i])==hash.end()){
      return false;
    }
  }
  return true;
}
int main(){
  int n1;
  cin>>n1;
  vector<int> v1(n1);
  for(int i=0;i<n1;i++)
  cin>>v1[i];
  int n2;
  cin>>n2;
  vector<int> v2(n2);
  for(int i=0;i<n2;i++)
  cin>>v2[i];
  bool r=issubset(v1,v2);
  cout<<r;

}