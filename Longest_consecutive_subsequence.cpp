#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {100, 1, 200, 4, 2, 3};
    set<int> hashSet;
    for (auto i : v)
        hashSet.insert(i);

    int count = 1, current_Count = 0, temp_num;
    for(int i = 0; i < hashSet.size(); i++){
        if(hashSet.count(i) == i + 1){
            current_Count+=1;
        }
        else{
            current_Count = 1;
        }
        count = max(current_Count, count);
    }
    cout << count << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (!hashSet.count(v[i] - 1))
    //     {
    //         temp_num = v[i];
    //         current_Count = 1;
    //         while (hashSet.count(temp_num + 1))
    //         {
    //             current_Count += 1;
    //             temp_num += 1;
    //         }
    //     }
    //     count = max(count, current_Count);
    // }
    cout << count;
    return 0;
}