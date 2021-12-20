#include <bits/stdc++.h>
using namespace std;

pair<int, int> solution(vector<int> &v){
    int min_element = v[0], max_element = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        if(min_element > v[i])
            min_element = v[i];
        if(max_element < v[i])
            max_element = v[i];
    }
    return {min_element, max_element};
    
}

int main(int argc, char const *argv[])
{
    vector<int> v = {2, 1, 4, 8, 5};
    pair<int, int> ans = solution(v);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}