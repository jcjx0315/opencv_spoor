#include<iostream>  
#include <opencv2/opencv.hpp>  
//#include <opencv2/highgui/highgui.hpp>  
  
  
using namespace cv;  
  
  
int main()  
{  
    // 读入一张图片（游戏原画）  /
    Mat img=imread("2.jpg");  
    // 创建一个名为 "游戏原画"窗口  
    cvNamedWindow("游戏原画");  
    // 在窗口中显示游戏原画  
    imshow("游戏原画",img);  
    // 等待6000 ms后窗口自动关闭  
    waitKey(6000);  
} 