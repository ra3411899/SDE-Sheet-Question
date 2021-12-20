#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {2, 1, 5, 8, 2, 9};
    int n = 6, k = 3;
    int i = 0, j = 0, sum = INT_MIN, current_sum = 0;
    while (j < n){
        current_sum+=v[j];
        if(j - i + 1 == k){
            sum = max(current_sum, sum);
            sum-=v[i];
            i++, j++;
        }
        else{
            j++;
        }
    }
    cout << sum;
    return 0;
}