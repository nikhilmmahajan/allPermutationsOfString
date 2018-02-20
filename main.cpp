#include <iostream>
#include <string>
using namespace std;


void permute( string soFar, string rest)
{
    if(rest =="")
        cout<<"\n"<<soFar;
    else {
        for (int i = 0; i < rest.size(); i++) {
            string next = soFar + rest[i];
            string remaining = rest.substr(0, i) + rest.substr(i + 1, rest.size());
            permute(next, remaining);
        }

    }
}


int main() {
    string s;
    std::cout << "Hello, World! Enter the String to find its permutations " << std::endl;
    cin >> s;
    string empty ="";
    permute(empty,s);

    return 0;
}