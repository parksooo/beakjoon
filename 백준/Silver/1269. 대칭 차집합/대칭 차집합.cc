#include<iostream>
#include<string>
#include<set>

using namespace std;
int n;
int m;
set<string> S;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
       cin >> s;
       S.insert(s);
    }
    for(int i = 0; i < m; i++){
        cin >> s;
        if(S.count(s))
            S.erase(s);
        else
            S.insert(s);
    }
    cout << S.size();
    return 0;
}