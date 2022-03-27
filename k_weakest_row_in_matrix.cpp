// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &a, int k)
    {
        int n = a.size();
        int m = a[0].size();
        vector<pair<int,int>>v;
        map<int, int> ma;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    cnt++;
                }
            }
            v.emplace_back(cnt, i);
        }  

        sort(v.begin() , v.end());
        vector<int>u;
        for (int i = 0; i < k; i++)
        {
             u.push_back(v[i].second);
        }
        return u;
    }
};