#include <iostream>
using namespace std;
int main() {
    int num;
    cin>>num;

    //100,50,20,1
    int hun = num/100;   //a>100
    int b = (num-(hun*100));   // b >50
    int fif = b/50;
    int c = (num-(hun*100+fif*50)); //c>20
    int twe = c/20;
    int d = (num -(hun*100+fif*50+twe*20)); //d>1


    switch(num >= 100) {
        case 1: cout<<"The number of Hundred rupee note is "<<hun<<endl;
        break;
        default :cout<<"The number of Hundred rupee note is zero"<<endl;
    }
    switch(b>=50) {
        case 1: cout<<"The number of fifty rupee note is "<<fif<<endl;
        break;
        default : cout<<"The number of fifty rupee note is zero"<<endl;
    }
    switch(c>=20) {
        case 1: cout<<"The number of Twenty rupee note is "<<twe<<endl;
        break;
        default :cout<<"The number of Twenty rupee note is zero"<<endl;
    }
    switch(d>=1) {
        case 1: cout<<"The number of one rupee note is "<<d<<endl;
        break;
        default : cout<<"The number of one rupee note is zero"<<endl;
    }
    return 0;
}