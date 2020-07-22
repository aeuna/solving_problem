#include <bits/stdc++.h>

using namespace std;

int main()
{   
    char result[3]={};
    for (int j = 0; j < 3; j++)
    {
        int cnt = 0;
        for (int i = 0; i < 4; i++)
        {
            int num;
            cin >> num;
            if (num == 1)
            {
                cnt++;
            }
        }
        if (cnt == 3)
        {
            result[j] = 'A';
        }
        if (cnt == 2)
        {
            result[j]= 'B';
        }
        if (cnt == 1)
        {
            result[j]= 'C';
        }
        if (cnt == 0)
        {
            result[j]= 'D';
        }
        if (cnt == 4)
        {
            result[j]= 'E';
        }
    }
    for(int i=0;i<3;i++){
        cout << result[i] << '\n';
    }

}