#include<bits/stdc++.h>
using namespace std;
void sort_by_frequency(vector<int>& v) {
    map<int, int> freq;
    for (int i : v) {
        freq[i]++;
    }
    sort(v.begin(), v.end(), [&](int a, int b) {
        return freq[a] > freq[b] || (freq[a] == freq[b] && a < b);
    });
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
        cin>>i;
    sort_by_frequency(v);
    for_each(begin(v),end(v),[](int n){cout<<n<<" ";});
}