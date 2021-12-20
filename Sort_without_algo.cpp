// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <bits/stdc++.h>
using namespace std;

vector<int> Soluion(vector<int> &v){
    vector<int> ans(v.size(), 0);
    int n = v.size() - 1;
    for (auto &&i : v)
    {
        if(i == 2){
            ans[n] = 2;
            n--;
        }
    }
    for (auto &&i : v)
    {
        if(i == 1){
            ans[n] = 1;
            n--;
        }
    }
    return ans;

}

int main(int argc, char const *argv[])
{
    vector<int> v = {0, 1, 1, 2, 0, 1, 2, 0, 1, 2};
    v = Soluion(v);
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    
    return 0;
}