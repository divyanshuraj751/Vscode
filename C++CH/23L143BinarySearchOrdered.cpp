#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix,int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col-1;

    while(rowIndex<row && colIndex>=0) {
        int element = matrix[rowIndex][colIndex];

        if(element == target) {
            return 1;
        }
        else if(element<target) {
            rowIndex++;
        }
        else {
            colIndex--;
        }
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

//3 5 
//1 4 7 11 15 2 5 8 12 19 3 6 9 16 22