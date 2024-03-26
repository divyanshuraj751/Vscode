#include <iostream>
#include <vector>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
    vector<int> result; // Create a vector to store the wave-printed elements
    for (int col = 0; col < mCols; col++) {
        if (col & 1) {
            for (int row = nRows - 1; row >= 0; row--) {
                result.push_back(arr[row][col]); // Add element to result vector
            }
        } else {
            for (int row = 0; row < nRows; row++) {
                result.push_back(arr[row][col]); // Add element to result vector
            }
        }
    }
    return result; // Return the result vector
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }

    vector<int> result = wavePrint(arr, rows, cols); // Store the result of wavePrint

    cout << "Wave printed elements: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
