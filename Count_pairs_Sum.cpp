// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        unordered_map<int, int> mpp;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (mpp.find(k - arr[i]) != mpp.end())
            {
                count += mpp[k - arr[i]];
            }
            mpp[arr[i]]++;
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{

    int n = 4, k = 6;
    int arr[] = {1, 5, 7, 1};
    Solution ob;
    assert((ob.getPairsCount(arr, n, k) == 3));
    cout << "True";
    // cout << ans << "\n";

    return 0;
} // } Driver Code Ends