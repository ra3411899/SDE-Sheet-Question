#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {1, 4, 5, 2, 6, 3, 9};
    int k = 3, sum = 0;
    // for (int i = 0; i < k; i++)
    //     sum += v[i];
    // // cout  << sum << endl;
    // int current_sum = sum;
    // for (int i = 0, j = i + k + 1; j < v.size(); i++, j++){
    //     current_sum = (current_sum + v[j]) - v[i];
    //     sum = max(sum,current_sum);
    //     // cout << "+" << v[j] << "-" << v[i];
    // }
    int current_count = 0, count = INT_MIN, i = 0, j = 0, n = v.size();
    while(j < n){
        current_count+=v[j];
        if(j - i + 1 == k){
            count = max(current_count, count);
            current_count-=v[i];
            i++, j++;
        }
        else{
            j++;
        }
    }
    cout << endl <<  count;
    
    
    return 0;
}