#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
        cin>>i;
    int sum=accumulate(begin(v),end(v),0);
    cout<<sum;
    
}