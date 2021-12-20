// Minimum Jumps to Reach End - Dynamic Programming | C++

#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;

int Solution(vector<int> &v){
    vector<int> jumps(inf);
    int n = v.size();
    jumps[0] = 0;
    for (int i = 1; i < n; i++){
        jumps[i] = inf;
        for (int j = 0; j < i; j++){
            if(i <= (j + v[j])){
                jumps[i] = min(jumps[i], jumps[j] + 1);
            }
        }
        
    }
    return jumps[n-1];
    
}

int main(int argc, char const *argv[])
{
    vector<int> v = {1, 3, 5, 8, 9, 2, 9, 8, 1, 2};
    cout << Solution(v);
    
    return 0;
}