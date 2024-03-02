#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int,string>m;

    m[1]="Mango";
    m[8]="Banana";
    m[12]="Apple";
    m[15]="Pineapple";

    m.insert({5,"Avacado"});

    cout<<"Before erase"<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding -12  "<<m.count(-12)<<endl;

    m.erase(13);

    cout<<"After erase "<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it = m.find(5);

    for(auto i=it;i!=m.end();i++) {
        cout<<(*i).first<<endl;
    }
}