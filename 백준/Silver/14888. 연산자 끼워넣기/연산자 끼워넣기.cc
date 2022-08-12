#include<iostream>
#include<algorithm>
#define MAX 1000000000
using namespace std;

int N;
int num[12];
int oper[4];

int m = MAX;
int M = -MAX;

void carcul(int result, int count)
{
    if(count == N)
    {
        if(m > result)
            m = result;
        if(M < result)
            M = result;
        return;
    }
    if(oper[0] > 0)
    {
        oper[0]--;
        carcul(result + num[count], count + 1);
        oper[0]++;
    }
    if(oper[1] > 0)
    {
        oper[1]--;
        carcul(result - num[count], count + 1);
        oper[1]++;
    }
    if(oper[2] > 0)
    {
        oper[2]--;
        carcul(result*num[count], count + 1);
        oper[2]++;
    }
    if(oper[3] > 0)
    {
        oper[3]--;
        carcul(result/num[count], count + 1);
        oper[3]++;
    }
}
int main()
{
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> num[i];
    for(int i = 0; i < 4; i++)
        cin >> oper[i];
    
    carcul(num[0], 1);
    
    cout << M << '\n' << m << '\n';
    return 0;
}
