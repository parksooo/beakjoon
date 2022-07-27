#include<iostream>
#include<set>
#include<string>

using namespace std;
int n;
int m;
set<string> S;

int main()
{
    string s;
    int count = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        S.insert(s);
    }
    for(int i = 0; i < m; i++)
    {
        cin >> s;
        if(S.find(s) != S.end())
            count++;
    }
    cout << count << endl;
    return 0;
}