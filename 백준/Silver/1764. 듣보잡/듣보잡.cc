#include<iostream>
#include<set>
#include<string>

using namespace std;
int n;
int m;
set<string> S, ans;

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
        if(S.find(s) != S.end())
            ans.insert(s);
    }
    cout << ans.size() << '\n';
    for(auto i: ans){
        cout << i << '\n';
    }
    return 0;
}