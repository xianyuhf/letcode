#ifndef Solution733_HPP
#define Solution733_HPP
#include "pch.h"
/**
 * @brief 733 图像渲染
 * 有一幅以 m x n 的二维整数数组表示的图画 image ，其中 image[i][j] 表示该图画的像素值大小。
    你也被给予三个整数 sr ,  sc 和 newColor 。你应该从像素 image[sr][sc] 开始对图像进行 上色填充 。
    为了完成 上色工作 ，从初始像素开始，记录初始坐标的 上下左右四个方向上 像素值与初始坐标相同的相连像素点，接着再记录这四个方向上符合条件的像素点与他们对应 四个方向上 像素值与初始坐标相同的相连像素点，……，重复该过程。将所有有记录的像素点的颜色值改为 newColor 。
    最后返回 经过上色渲染后的图像 。
 */
#include <queue>

class Solution{
public:
    const int dx[4]={1,0,0,-1}; 
    const int dy[4]={0,1-1,0};
public:           
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
            int currColor=image[sr][sc];
            if(currColor==newColor) return image;
            int n = image.size(),m=image[0].size();
            queue<pair<int,int >> que;
            que.emplace(sr,sc);
            image[sr][sc]=newColor;
            while(!que.empty()){
                int x= que.front().first;
                int y =que.front().second;
                que.pop();
                for(int i=0;i<4;i++){
                    int mx= x+dx[i],my=y+dy[i];
                     if (mx >= 0 && mx < n && my >= 0 && my < m && image[mx][my] == currColor) {
                        que.emplace(mx,my);
                        image[mx][my]=newColor;
                     }
                }
            }
    }
};
#endif