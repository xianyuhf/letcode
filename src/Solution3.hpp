#ifndef SOLUTION3_HPP
#define SOLUTION3_HPP
#include "pch.h"
class Solution3
{
private:
    /* data */
public:
    Solution3();
    //(/* args */)
    ~Solution3();
public:
    int lengthOfLongestSubstring(string s){
        unordered_set<char> occ;
        int n=s.size();
        int rk=-1,ans =0;
        for (int i=0;i<n;i++){
            if(i!=0){
                occ.erase(s[i-1]);
            }
            while(rk+1<n && !occ.count(s[rk+1])){
                occ.insert(s[rk+1]);
                rk++;
            }
            ans=max(ans,rk-i+1);
        }
        return ans;
    }
};

Solution3::Solution3(/* args */)
{
}

Solution3::~Solution3()
{
}


#endif