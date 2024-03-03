#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int count = 0;
    int n=nums.size();
    for(int i=0;i<n;i++) {
       if(nums[i-1]>nums[i]) {
        count++;
       }
    }

    if(nums[n-1]>nums[0]) {
        count++;
    }
    return count<=1;
}

int main() {
    int n,a;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>a;
        nums.push_back(a);
    }
    cout<<check(nums);
}