//pair of vector is given you have to print all pair which are symmetric.
#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
void  pairs(vector<pair<int,int>> &p){
  
  for(int i=0;i<p.size();i++){
    for(int j=i+1;j<p.size();j++){
      if(p[i].first==p[j].second && p[i].second==p[j].first)
         cout<<p[i].first<<" "<<p[i].second<<endl;
    }
  }
}
int main(){
  int n;cin>>n;
  vector<pair<int,int>>p(n);
  for(int i=0;i<n;i++)
  cin>>p[i].first>>p[i].second;
  pairs(p);
  // for(int i=0;i<n;i++)
  // cout<<p[i].first<<" "<<p[i].second<<endl;
}