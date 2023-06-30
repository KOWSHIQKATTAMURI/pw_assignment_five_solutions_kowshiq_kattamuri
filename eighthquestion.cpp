#include<bits/stdc++.h>
using namespace std;

vector<int> findOriginalArray(vector<int>& changed){
        if(changed.size()%2 == 1){
            return {};
        }
        unordered_map<int, int> kow;
        for(auto i : changed){
            kow[i]++;
        }
        vector<int> x;
        sort(changed.begin(), changed.end());
        for(auto i : changed){
            if(kow[i] == 0){
                continue;
            }
            if(kow[2*i] == 0){
                return {};
            }
            kow[i]--;
            kow[2*i]--;
            x.push_back(i);
        }
        return x;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> ans = findOriginalArray(nums);
    for(auto i : ans){
        cout << i << " ";
    }
}
