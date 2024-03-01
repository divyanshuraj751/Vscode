//Online compiler correct other wise wrong

#include <iostream>
#include <cmath>
using namespace std;

void arrayAdder(int arr1[],int size1,int arr2[],int size2) {
    int num=0,num1=0; 
    for(int i=0;i<size1;i++) {
        num = num+(arr1[i]*pow(10,size1-i-1));           //num = num * 10 + arr1[i];                                                                                                                                                                                                                                          
    }
    for(int i=0;i<size2;i++) {
        num1 = num1 + (arr2[i]*pow(10,size2-i-1));
    }
    cout<<num+num1<<endl;
}

int main() {
    int size1,size2,arr1[100],arr2[100];
    cin>>size1>>size2;
    for(int i=0;i<size1;i++) {
        cin>>arr1[i];
    }
    for(int i=0;i<size2;i++) {
        cin>>arr2[i];
    }
    arrayAdder(arr1,size1,arr2,size2);
}