// calculate sqrt using bablonia method for finding sqrt

#include <bits/stdc++.h>
using namespace std;

int solution(int n){
    int x = n, y = 1;
    while(x > y){
        x = (x + y) / 2;
        y = n / x;
    }
    return y;
}

int main(int argc, char const *argv[])
{
    int n = 225;
    cout << floor(log10(225))+ 1;
    cout << solution(n);
    return 0;
}