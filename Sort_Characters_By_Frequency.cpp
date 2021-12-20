#include <bits/stdc++.h>
using namespace std;

string frequency_Sort(string s)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]]++;

    s.clear();

    vector<pair<int, int>> v(mp.begin(), mp.end());
    for(auto i : v){
        cout << i.first << " " << i.second << endl;
    }
    sort(v.begin(), v.end(), [&](pair<int, int> &a, pair<int, int> &b)
         { return a.second > b.second; });

    for (auto i : v)
    {
        for (int j = 0; j < i.second; j++)
        {
            s += i.first;
        }
    }
    return s;
}

string frequencySort(string s)
{
    int sz = s.size();
    unordered_map<char, int> umap;
    for (auto c : s)
    {
        umap[c]++;
    }

    priority_queue<pair<int, char>> maxh;

    for (auto i : umap)
    {
        maxh.push({i.second, i.first});
        cout << maxh.top().first << " " << maxh.top().second << endl;
    }

    char ch;
    s.clear();
    while (!maxh.empty())
    {
        ch = maxh.top().second;
        cout << maxh.top().second << endl;

        for (int i = 0; i < maxh.top().first; i++)
        {
            s += ch;
        }
        maxh.pop();
    }
    return s;
}

int main(int argc, char const *argv[])
{
    string s = "abcccacs";
    cout << frequencySort(s);
    return 0;
}