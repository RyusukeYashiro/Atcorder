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

int main(void){
    int n; cin >> n;
    vector<int>hold(n);
    for(int i = 0; i < n; i++)
    {
        cin >> hold[i];
    }
    int mn = INT_MAX;
    int sum = 0;
    for(int i = 1; i < 101; i++)
    {
        sum = 0;
        for(int j = 0; j < n; j++)
        {
            int num = hold[j] - i;
            num *= num;
            sum += num;
        }
        if(sum < mn) mn = sum;
    }
    cout << mn << endl;
}