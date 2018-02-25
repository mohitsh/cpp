#include<iostream>
#include<vector>

using namespace std;

void toggle(int &flag){
    flag =false;
}


void toggle_v(vector<int> &v){
    v[0] = 10000;
}

int main(){
    int flag = true;
    cout << flag << endl;
    toggle(flag);
    cout << flag << endl;


    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    cout << "before: " << endl;
    for (auto x: v)
        cout << x << endl;

    toggle_v(v);

    cout << "after: " << endl;
    for (auto x: v)
        cout << x << endl;


    return 0;
}

