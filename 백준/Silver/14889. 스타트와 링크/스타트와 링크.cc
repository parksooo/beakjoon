#include<iostream>
#include<math.h>

using namespace std;

int N, result = 1000000000;

int arr[21][21];
bool team[21];

void teammatch(int num, int pos)
{
    if(num == N/2)
    {
        int a = 0, b = 0;
        for(int i = 0; i < N; i++){
            if(team[i]){
                for(int j = i + 1; j < N; j++){
                    if(team[j])
                        a += arr[i][j] + arr[j][i];
                }
            }else{
                for(int j = i + 1; j < N; j++){
                    if(!team[j])
                        b += arr[i][j] + arr[j][i];
                }
            }
        }
        if(result > abs(a - b))
            result = abs(a - b);
    }else{
        for(int i = pos; i < N; i++){
            team[i] = true;
            teammatch(num + 1, i + 1);
            team[i] = false;
        }
    }
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> N;
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> arr[i][j];
    teammatch(0, 0);
    cout << result;
    return 0;
}

