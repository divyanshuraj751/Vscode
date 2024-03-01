#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums,int k,int size) {
    vector<int> temp(nums.size());

    for(int i=0;i<nums.size();i++) {
        temp[(i+k)%nums.size()] = nums[i];
    }
    nums = temp;

    for(auto &p : nums) {
        cout<<p<<" ";
    }
}

int main() {
    int k,size,a;
    vector<int> nums;
    cin>>k>>size;
    for(int i=0;i<size;i++) {
        cin>>a;
        nums.push_back(a);
    }
    rotate(nums,k,size);
}