#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int num[],int n) {
    int max = INT_MIN;

    for(int i=0;i<n;i++) {
        if(num[i]>max){      //maxi = max(maxi,num[i]) in place
            max = num[i];    //of if statement
        }
    }
    return max;
}

int getMin(int num[],int n) {
    int min = INT_MAX;
    for(int i=0;i<n;i++) {
        if(num[i]<min){      //mini = max(mini,num[i]) in place
            min = num[i];    //of if statement
        }
    }
    return min;
}
int main() {
    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++) {
        cin>>num[i];
    }

    cout<<getMin(num,size)<<endl;
    cout<<getMax(num,size)<<endl;

    return 0;
}