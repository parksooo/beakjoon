#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int lcs[1001][1001];

string arr1, arr2;

int main()
{
    string tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    
    arr1 = '0' + tmp1;
    arr2 = '0' + tmp2;
    
    int len1 = arr1.size();
    int len2 = arr2.size();
    
    for(int i = 0; i < len1; i++)
    {
        for(int j = 0; j < len2; j++)
        {
            if(i == 0 || j == 0)
            {
                lcs[i][j] = 0;
                continue;
            }
            else
            {
                if(arr1[i] == arr2[j])
                    lcs[i][j] = lcs[i - 1][j - 1] + 1;
                else
                    lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }
    cout << lcs[len1 -1][len2 - 1] << '\n';
    return 0;
}