#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

int main(void){
    int n , m , x , y;
    cin >> n >> m >> x >> y;
    vector<int> hold_x(n);
    vector<int> hold_y(m);
    for(int i = 0; i < n; i++)
    {
        cin >> hold_x[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> hold_y[i];
    }

    for(int i = x + 1; i <= y; i++)
    {
        bool flag_x = true;
        bool flag_y = true;
        for(int ni = 0; ni < n; ni++)
        {
            if(hold_x[ni] >= i)
            {
               flag_x = false;               
               break;
            }
        }
        for(int mi = 0; mi < m; mi++)
        {
            if(hold_y[mi] < i)
            {
                flag_y = false;
                break;
            }
        }
        if(flag_x && flag_y)
        {
            cout << "No War" << endl;
            return (0);
        }
    }
    cout << "War" << endl;
}