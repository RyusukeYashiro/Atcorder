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
    int a , b ,c , x; cin >> a >> b >> c >> x;
    int count = 0;
    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++){
            for(int z = 0; z <= c; z++){
                int sum = i * 500 + j * 100 + z * 50;
                if(sum == x)count++;
            }
        }
    }
    cout << count << endl;
}