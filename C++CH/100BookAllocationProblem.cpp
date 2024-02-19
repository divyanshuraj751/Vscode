#include <iostream>
using namespace std;

bool isPossible(int arr[],int size, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
  
    for (int i=0;i<size;i++ ) {
        if(pageSum + arr[i] <=mid)  {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount>m || arr[i]>mid) {
                return false;
            }
            pageSum = 0;
            pageSum += arr[i];

        }
    }
    return true;
}

int bookAlloc(int arr[],int size,int m) {
    for(int i=0;i<size-1;i++) {
        int s =0;
        int sum = 0;

        for(int i = 0 ;i<size;i++) {
            sum +=arr[i];
        }
        int e = sum;
        int ans = -1;
        int mid = s + (e-s)/2;

        while(s<=e) {
           if(isPossible(arr,size,m,mid)) {
            ans = mid;
            e = mid-1;
           }
           else {
            s = mid + 1;
           }
           mid = s + (e-s)/2;
        }
        return ans;
    }
}

int main() {
    int arr[100];
    int size;
    cin>>size;
    int m;
    cout<<"Enter the number of students"<<endl;
    cin>>m;
    for(int i=0;i<size;i++ ) {
        cin>>arr[i];
    }
    cout<<bookAlloc(arr,size,m);
    return 0;
}
