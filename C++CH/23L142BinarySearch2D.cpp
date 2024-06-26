#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix,int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col-1;
    int mid = start +(end-start)/2;

    while(start<=end) {
        int element = matrix[mid/col][mid%col];
        if(element == target) {
            return 1;
        }
        else if(element<target) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return 0;
}

int main() {
    int row,col,target;
    cin>>row>>col;
    
    vector<vector<int>> matrix(row,vector<int>(col));
    cout<<"Enter the elements of matrix"<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>matrix[i][j];
        }
    }
    cout<<"Enter the target"<<endl;
    cin>>target;
    cout<<searchMatrix(matrix,target);
}
