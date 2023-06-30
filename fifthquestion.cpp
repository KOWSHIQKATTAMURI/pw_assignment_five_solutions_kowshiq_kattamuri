#include<bits/stdc++.h>
using namespace std;

int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d){
    int m = arr1.size(), n = arr2.size(), ans = 0;
        sort(arr2.begin(), arr2.end());
        for(int i = 0; i < m; i++){
            int l = 0, r = n - 1, x = arr1[i] - d, y = arr1[i] + d;
            while(l <= r){
                int mid = l + (r - l)/2;
                if(arr2[mid] < x){
                    l = mid + 1;
                }else if(arr2[mid] > y){
                    r = mid - 1;
                }else{
                    ans++;
                    break;
                }
            }
        }
        return m - ans;
}

int main(){
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> nums1(n), nums2(m);
    for(int i = 0; i < n; i++){
        cin >> nums1[i];
    }
    for(int i = 0; i < m; i++){
        cin >> nums2[i];
    }
    cout << findTheDistanceValue(nums1, nums2, d) << endl;
}
