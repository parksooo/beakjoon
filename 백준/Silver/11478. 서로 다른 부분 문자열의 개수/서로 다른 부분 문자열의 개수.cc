#include<iostream>
#include<string>
#include<set>

using namespace std;
set<string> S;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        for(int j = 0; j < str.length(); j++)
            S.insert(str.substr(i, j));
    }
    cout << S.size();
    return 0;
}