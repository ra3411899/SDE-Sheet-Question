#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &v){
    reverse(v.begin(), v.end());
    return v;
}

int main(int argc, char const *argv[])
{
    vector<int> v = {1,2, 3, 4, 5};
    solution(v);
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}
    
    