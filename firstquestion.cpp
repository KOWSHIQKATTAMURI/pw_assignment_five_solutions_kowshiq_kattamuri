#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    if(original.size() != m*n){
        return {};
    }
    vector<vector<int>> ans(m, vector<int>(n, 0));
    int k = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            ans[i][j] = original[k++];
        }
    }
    return ans;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<vector<int>> ans = construct2DArray(nums, a, b);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
