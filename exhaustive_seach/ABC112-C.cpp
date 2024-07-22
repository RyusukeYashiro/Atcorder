#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

// 全探索Bパターン1 : 既知のものは探索しない->一部探索すると他が一意に定まる

int main(void){
    int n; cin >> n;
    vector<long long> x(n) , y(n) , h(n);
    
    int set_i = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> h[i];
        if(h[i] > 0) set_i = i;
    }

    long long result_x = -1;
    long long result_y = -1;
    long long result_h = -1;
    for(long long xn = 0; xn < 101; xn++)
    {
        for(long long yn = 0; yn < 101; yn++)
        {
            long long height = h[set_i] + abs(xn - x[set_i]) + abs(yn - y[set_i]);
            bool flag = true;
            for(int i = 0; i < n; i++)
            {
                if(h[i] > 0 && height - h[i] != abs(xn - x[i]) + abs(yn - y[i]))
                {
                    flag = false;
                }
                if (h[i] == 0 && height >  abs(xn - x[i]) + abs(yn - y[i])) {
                    flag = false;
                }
            }
            if(flag) result_x = xn , result_y = yn, result_h = height;
        } 
    }
    cout << result_x << " " << result_y << " " << result_h << endl;
}