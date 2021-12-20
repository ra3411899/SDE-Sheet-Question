#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {-1, 4, -2, 5, -4};
    int k = 2, i = 0, j = 0, n = v.size();
    // for (int a = 0; a < n - k + 1; a++){
    //     for (int b = a; b < a + k; b++){
    //         if(v[b] < 0){
    //             cout << v[b] << " ";
    //             break;
    //         }
    //     }
    // }
    queue<int> q;
    while (j < n){
        if(v[j] < 0)
            q.push(v[j]);
        if(j - i + 1 == k){
            if(q.empty()){
                cout << "0" << " ";
            }
            else{
                if(v[i] == q.front()){
                    cout << q.front() << " ";
                    q.pop();
                }
                else{
                    cout << q.front() << " ";
                }
            }
            i++, j++;
        }
        else{
            j++;
        }
    }
    return 0;
}