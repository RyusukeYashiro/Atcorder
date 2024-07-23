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
    int n;
    cin >> n;
    vector<int> hold(n);
    for(int i = 0; i < n; i++)
    {
        cin >> hold[i];
    }
    int dif = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        int pre = 0;
        int after = 0;
        for(int j = 0; j <= i; j++)
        {
            pre += hold[j];
        }
        for(int j = i + 1; j < n; j++)
        {
            after += hold[j];
        }
        if(dif > abs(pre - after))
        {
            dif = abs(pre - after);
        }
    }
    cout << dif << endl;
}