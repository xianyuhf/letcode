#ifndef SOLUTION704_HPP
#define SOLUTION704_HPP
/**
 * @file Solution704.hpp
 * @author your name (you@domain.com)
 * @brief 704. 二分查找
 * @version 0.1
 * @date 2022-06-04
    给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
 * @copyright Copyright (c) 2022
 * 
 */
#include <vector>
#include <algorithm>
class Solution{
public:
     int search(vector<int>& nums, int target);
};
int Solution::search(vector<int>& nums, int target){
    int low=0;int high= nums.size()-1;
    while(low<=high){
        int mid = (high-low)/2 +low;
        int cache=nums[mid];
        if(cache == target){
            return mid;
        }
        if(cache > target){
            high = mid-1;
        }else{
            low = mid+1;
        }
        return -1;
    }
}
int main(){
   
    
    return 0;
}
#endif