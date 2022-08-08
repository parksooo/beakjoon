#include<iostream>
#include<string>
#include<map>
#include<stdio.h>

using namespace std;

int main()
{
    int t, n;
    map<string, int> :: iterator it;
    string name, type;
    int answer;
    
    scanf("%d", &t);
 
    for(int i = 0; i < t; i++){
        map<string, int> m;
        scanf("%d", &n);
        
        for(int i = 0; i < n; i++){
            cin >> name >> type;
            m[type]++;
        }
        answer = 1;
        for(it = m.begin(); it != m.end(); it++){
            answer *= (it->second + 1);
        }
        printf("%d\n", answer - 1);
    }
    return 0;
}