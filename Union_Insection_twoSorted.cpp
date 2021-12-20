//  AB.reserve(A.size() + B.size());                // preallocate memory
//     AB.insert(AB.end(), A.begin(), A.end());        // add A;
//     AB.insert(AB.end(), B.begin(), B.end());        // add B;




#include <bits/stdc++.h>
using namespace std;

set<int> Union(vector<int> v, vector<int> v1){
    vector<int> s = v;
    merge(v.begin(), v.end(), v1.begin(),v1.end(), s);
    set<int> ans;
    ans.insert(s.begin(), s.end());
    return ans;
}

vector<int> Intersaction(vector<int> v){
    
}

int main(int argc, char const *argv[])
{
    vector<int> input1 = {1, 2, 5, 3, 6}, input2 = {1, 4, 9, 10, 2};
    set<int> a = Union(input1, input2);
    auto itr = a.begin();
    for(itr = a.begin();itr != a.end();itr++){
        cout << *itr << " ";
    }
    return 0;
}