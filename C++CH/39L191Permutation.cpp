#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums,vector<vector<int>>& ans,int index) {
    if(index>=nums.size()) {
        ans.push_back(nums);
        return ;
    }    
    for(int j =index;j<nums.size();j++) {
        swap(nums[index],nums[j]);
        solve(nums,ans,index+1);
        //backtrack
        swap(nums[index],nums[j]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    int index=0;
    solve(nums,ans,index);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3}; // Example input
    vector<vector<int>> permutations = permute(nums);
    for(const auto& permutation : permutations) {
        for(int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}