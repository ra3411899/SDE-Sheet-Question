#include <bits/stdc++.h>
using namespace std;

pair<int, int> Solution(vector<int> &v, int k){
    pair<int, int> ans;
    sort(v.begin(), v.end());
    ans.first = v[k - 1];
    ans.second = v[v.size() - k];
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> v = {3, 2, 9, 11, 4};
    pair<int, int> ans = Solution(v, 2);
    cout << ans.first << " " <<  ans.second;
    return 0;
}