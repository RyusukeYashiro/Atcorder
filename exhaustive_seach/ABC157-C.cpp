#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    int n , m;
    cin >> n >> m;
    vector<pair<int , int>> hold(m);
    for(int i = 0; i < m; i++)
    {
        cin >> hold[i].first >> hold[i].second;
    }
    for(int i = 0; i < 1000; i++)
    {
        int num = i / 10;
        vector<int> d(1 , i % 10);
        while(num > 0)
        {
            d.push_back(num % 10);
            num /= 10;
        }
        int d_len = d.size();
        if(d_len != n) continue;
        bool flag = true;
        reverse(d.begin() , d.end());
        for(int j = 0; j <m; j++)
        {
            if(d[hold[j].first - 1] != hold[j].second) flag = false;
        }
        if(flag)
        {
            cout <<  i << endl;
            return (0);
        }
    }
    cout << -1 << endl;
    return (0);
}