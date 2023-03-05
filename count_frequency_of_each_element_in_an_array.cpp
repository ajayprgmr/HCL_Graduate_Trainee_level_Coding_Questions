#include<bits/stdc++.h>
// #include "Myutilities.h"
using namespace std;
map<int,int> frequency(vector<int> &v){
          map<int,int>m;
          int s=v.size();
          for(int i=0;i<s;i++){
            if(m.find(v[i])==m.end()){
                m[v[i]]=1;
            }
            else{
                m[v[i]]=m[v[i]]+1;
            }
          }
          return m;
}

int main(){
    int l1;
    cin>>l1;
    vector<int> v1(l1);
    for(int i=0;i<l1;i++)
    cin>>v1[i];
    map<int,int> res=frequency(v1);
    for(auto i=res.begin();i!=res.end();i++)
    cout<<i->first<<" "<<i->second<<endl;


    
}
    