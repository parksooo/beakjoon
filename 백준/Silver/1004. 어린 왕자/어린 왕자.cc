#include<iostream>
using namespace std;

int main()
{
    int n, T;
    int x1, x2 ,y1, y2;
    int x, y, r;
    int enter, depature;
    
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        enter = 0;
        depature = 0;
        for(int i = 0; i < n; i++){
            cin >> x >> y >> r;
            if((x - x1)*(x - x1) + (y - y1)*(y - y1) < r*r)
                if((x - x2)*(x - x2) + (y - y2)*(y - y2) > r*r)
                    depature++;
            if((x - x1)*(x - x1) + (y - y1)*(y - y1) > r*r)
                if((x - x2)*(x - x2) + (y - y2)*(y - y2) < r*r)
                    enter++;
        }
        cout << enter + depature << '\n';
    }
    return 0;
}