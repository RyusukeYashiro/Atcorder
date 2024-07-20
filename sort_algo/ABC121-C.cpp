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
    long n,m; cin >> n >> m;
    vector<pair<long ,  long >> hold(n);
    for(int i = 0; i < n; i++)
    {
        long a , b;
        cin >> a >> b;
        hold[i] =  make_pair(a , b);
    }

    sort(hold.begin() , hold.end());
    
    long result = 0;
    for(auto num : hold)
    {
        if(m == 0) break;
        long count = min(m , num.second);
        m -= count;
        result += num.first * count;
    }
    cout << result << endl;
}