#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int ans = 0;
    int count = 0;
    bool flag = false;
    for(int i=0;i<s.length();i++){
        if (s[i] == 'U') count++;
        if (s[i] == 'D') count --;
        if(count < 0 ) flag = true;
        if(flag == true && count >= 0){
            ans++;
            flag=false;
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
