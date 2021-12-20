#include <bits/stdc++.h>
using namespace std;

auto solution(int N){
    int count = 0;
    for(int i = 5; i <= N; i*=5){
        count+=N/i;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    cout << solution(10);
    return 0;
}