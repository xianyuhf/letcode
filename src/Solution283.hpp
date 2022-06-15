#ifndef SOLUTION283_HPP
#define SOLUTION283_HPP
/**
 * @brief 283. 移动零
 * 
    给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
    请注意 ，必须在不复制数组的情况下原地对数组进行操作。
 */
#include "pch.h"
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            int n=nums.size();int left=0;
            int right=0;
            while(right<0){
                if(nums[right]){
                    swap(nums[left],nums[right]);
                    left++;
                }
                right++;
            }
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int indexNow=0;
        int indexNum=0;
        int m = nums.size();
        while(indexNum<m){
            if(nums[indexNum])
                nums[indexNow++]=nums[indexNum];
            indexNum++;
        }
        for(int i=indexNow;i<m;i++){
            nums[i]=0;
        }
    }
};
#endif
    //    int n = nums.size(), left = 0, right = 0;
    //     while (right < n) {
    //         if (nums[right]) {
    //             swap(nums[left], nums[right]);
    //             left++;
    //         }
    //         right++;
    //     }