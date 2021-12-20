#include <bits/stdc++.h>
// #define loop(i, n) for(int i = 0; i < n; i++)
using namespace std;

void Solution(int n){
    vector<int> temp;
    temp.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        int carry = 0;
        for (int j = 0; j < temp.size(); j++)
        {
            int current = temp[j] * i + carry;
            temp[j] = current % 10;
            carry = current / 10;
        }
        while (carry != 0)
        {
            temp.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(temp.begin(), temp.end());
    for (auto &&i : temp)
    {
        cout << i;
    }
    
    
}

int main(int argc, char const *argv[])
{
    Solution(10);
    
    return 0;
}