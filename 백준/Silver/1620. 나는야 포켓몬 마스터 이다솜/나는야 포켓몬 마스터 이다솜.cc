#include <bits/stdc++.h>

using namespace std;

int n , m;
map<string, int> countmap;
map<int, string> charmap;

int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    
    string name, question;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        cin >> name;
        countmap.insert(pair<string, int>(name, i));
        charmap.insert(pair<int, string>(i, name));
    }
    
    for(int i = 0; i < m; i++){
        cin >> question;
        if(isdigit(question[0]))
            cout << charmap[atoi(question.c_str())] << '\n';
        else
            cout << countmap[question] << '\n';
    }
    return 0;
}