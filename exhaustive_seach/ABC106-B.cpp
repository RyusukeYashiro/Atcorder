#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

bool ft_solve(int num) {
    int count = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0) count++;
    }
    if( count == 8 && num % 2 == 1) return true;
    return false;
}

int main(void){
    int num; cin >> num;
    int ans = 0;
    for(int i = 1; i <= num; i++)
    {
        if(ft_solve(i)) ans++;
    }
    cout << ans << endl;
    return (0);
}