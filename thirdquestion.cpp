#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums){
    multiset<int> kow;
    for(auto i : nums){
        kow.insert(pow(i, 2));
    }
    vector<int> res(kow.begin(), kow.end());
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> ans = sortedSquares(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}
