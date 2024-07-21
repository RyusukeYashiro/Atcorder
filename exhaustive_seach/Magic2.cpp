#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    int a , b , c , k;
    int flag = false;
    cin >> a >> b >> c >> k;

    for(int i = 0; i <= k; i++)
    {
        for(int j = 0; j <= k; j++)
        {
            for(int v = 0; v <= k; v++)
            {
                int x = a * (1 << i);
                int y = b * (1 << j);
                int z = c * (1 << v);
                if(i + j + v <= k && x < y && y < z) flag = true;
            }
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return (0);
}