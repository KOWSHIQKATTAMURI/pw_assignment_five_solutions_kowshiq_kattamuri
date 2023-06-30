#include<bits/stdc++.h>
using namespace std;

int pivot_finder(vector<int>& nums){
        int low = 0, high = nums.size() - 1, x = high;
        while(low <= high){
            int mid = low + ((high - low) >> 2);
            if(nums[mid] <= nums[x]){
                high = mid - 1;
            }else{
                if(nums[mid] > nums[mid + 1]){
                    return mid;
                }else{
                    low = mid + 1;
                }
            }
        }
        return -1;
    }
    int findMin(vector<int>& nums){
        int pivot = pivot_finder(nums);
        return nums.size() == 1 ? nums[0] : (pivot == -1 ? nums[0] : nums[pivot + 1]); 
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << findMin(nums) << endl;
}
