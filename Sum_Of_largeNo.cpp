#include <bits/stdc++.h>
#include <assert.h>
// #define BOOST_TEST_MODULE Simple testcases 2
// #include <boost/test/unit_test.hpp>
using namespace std;
string solution(int no1, int no2)
{
    string s1 = to_string(no1), s2 = to_string(no2);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int size1 = s1.length(), size2 = s2.length(), i, j;
    string ans = "";
    int carry = 0;
    // cout << s1 << " "<< s2 << endl;
    for (i = 0, j = 0; i < size1 && j < size2; i++, j++)
    {
        int sum = carry + s1[i] - '0' + s2[j] - '0';
        carry = sum >= 10 ? 1 : 0;
        ans.push_back(sum % 10 + '0');
    }
    while (i < size1)
    {
        int sum = carry + s1[i] - '0';
        carry = sum >= 10 ? 1 : 0;
        ans.push_back(sum % 10 + '0');
        i++;
    }
    while (j < size2)
    {
        int sum = carry + s2[j] - '0';
        carry = sum >= 10 ? 1 : 0;
        ans.push_back(sum % 10 + '0');
        j++;
    }
    if (carry)
    {
        ans.push_back(carry + '0');
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(int argc, char const *argv[])
{
    assert(solution(1,3) == "4");
    cout << "True\n";
    assert(solution(INT_MAX,INT_MAX) == "4");
        cout << "True\n";
    assert(solution(121, 119) == "240");
        cout << "True\n";

    return 0;
}