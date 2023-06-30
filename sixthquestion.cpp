#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums){
    vector<int> duplicates;
        for(int i = 0; i < nums.size(); i++){ 
            // evaluate index of selected element if array would have been sorted..
            int indexOfElem = abs(nums[i]) - 1;
            // negate the element
            nums[indexOfElem] = - nums[indexOfElem];
            // if this element is positive means double negation had happened which 
            // means we editied this element twice.
            if(nums[indexOfElem] > 0){
                duplicates.push_back(indexOfElem + 1);
            }
        }
        return duplicates;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> ans = findDuplicates(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}
