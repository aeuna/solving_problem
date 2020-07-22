#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long ans =0;
    int a_count = 0;
    if(s == "a"){
        if(n==0) return 0;
        else return n;
    }
    for(auto i : s){
        if( i == 'a') a_count ++;
    }
    for(int i=0; i< n%(int)s.length(); i++){
        if(s[i] == 'a') ans ++;
    }
    ans += a_count*(n/(int)s.length());
    return ans;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
