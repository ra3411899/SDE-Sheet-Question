#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &v){
    int i = 0, j = v.size() - 1, l = 0;
    vector<int> ans(j);
    for (int i = 0; i < v.size(); i++){
        if(v[i] < 0){
            swap(v[i], v[l]);
            l++;
        }
    }
    return v;
}

int main(int argc, char const *argv[])
{
    vector<int> input = {9, 8, -1, -2, 1, 3};
    input = solution(input);
    for (int i = 0; i < input.size(); i++)
    {
        cout << " " << input[i];
    }
    
    return 0;
}