/*in order array elements are unique, but in nums elements can repeate ,our job is
is to sort the nums according to appearance of numbers in order array*/

#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;

vector<int> custom_sorting(vector<int> &order, vector<int> &nums){
    map<int,int> hash;
    int n = nums.size();
    int m = order.size();
    for(int i = 0; i < n; i++){
        if(hash.find(nums[i]) == hash.end()){
            hash[nums[i]] = 1;
        }
        else{
            hash[nums[i]]++;
        }
    }
    vector<int> result;
    for(int j = 0; j < m; j++){
        int temp = hash[order[j]];
        while(temp > 0){
            result.push_back(order[j]);
            temp--;
        }
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    vector<int> order(n);
    for(int &i : order){
        cin >> i;
    }
    int m;
    cin >> m;
    vector<int> nums(m);
    for(int &j : nums){
        cin >> j;
    }
    vector<int> result = custom_sorting(order, nums);
    for(int i : result){
        cout << i << ' ';
    }
    return 0;
}
