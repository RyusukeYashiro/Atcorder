#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main() {
    string s;
    cin >> s;
    int maxLength = 0;
    int len = s.length();
    
    for (int i = 0; i < len; i++) {
        if (s[i] == 'A') {
            //お尻をつける
            int j = len - 1;
            while (j > i && s[j] != 'Z') {
                j--;
            }
            if (j > i && s[j] == 'Z') {
                int currentLength = j - i + 1;
                maxLength = max(maxLength, currentLength);
            }
        }
    }
    
    cout << maxLength << endl;
    return 0;
}