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
    int a , b;
    cin >> a >> b;
    int c = a * b;
    if(c % 2 == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;
}