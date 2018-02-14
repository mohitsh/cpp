#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int checkInt(string &s){

    if (s.empty()) return false;

    char *p;
    strtol(s.c_str(), &p, 10);
    
    return (*p == 0);

}

int main(){

    string a = "11";
    string b = "dude";

    cout << a << " " << checkInt(a) << endl;
    cout << b << " " << checkInt(b) << endl;
}
