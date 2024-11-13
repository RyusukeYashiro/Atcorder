#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <climits>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define ll long long
#define mp map<int, int>
#define mpl map<long long, long long>
#define vv vector<vector<int>>

void quick_sort(vector<int> &hold , int left , int right)
{
    if(right - left <= 1) return;
    int pivot_index = (right + left) / 2;
    int pivot = hold[pivot_index];
    swap(hold[pivot_index] , hold[right - 1]);

    int i = left;
    for(int j = left; j < right - 1; j++)
    {
        if(hold[j] < pivot)
        {
            swap(hold[i] , hold[j]);
                i++;
        }
    }
    swap(hold[i] , hold[right - 1]);
    quick_sort(hold , left , i);
    quick_sort(hold , i + 1, right);
}

int main(void){
    int n; cin >> n;
    vector<int> hold(n);
    for(int i = 0; i < n; i++)
        cin >> hold[i];
    quick_sort(hold , 0 , n);
    for(int i = 0; i < n; i++)
        cout << hold[i] << " ";
}   