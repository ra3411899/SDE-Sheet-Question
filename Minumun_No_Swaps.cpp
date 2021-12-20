#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {2, 7, 9, 5, 8, 7, 4};
    int count = 0, k = 6;
    for (int i = 0; i < v.size(); i++){
        if(v[i] <= k){
            count++;
        }
    }
    int not_required = 0;
    // int min_swaps = INT_MAX;
    // for (int i = 0; i < v.size() - count; i++){
    //     int swaps = 0;
    //     for (int j = i; j < count + i; j++)
    //     {
    //         if(v[j] > k){
    //             swaps++;                
    //         } 
    //     }
    //     min_swaps = min(swaps, min_swaps);
    // }
    // cout << min_swaps  << " ";
    //2nd Approach
    for (int i = 0; i < count; i++){
        if(v[i] > k) not_required++;
    }
    int ans = not_required;
    for (int i = 0, j = count; j < v.size(); i++, j++){
        if(v[i] > k) not_required--;
        if(v[j] > k) not_required++;
        ans = min(ans, not_required);
    }
    
    cout << ans << endl;
    return 0;
}