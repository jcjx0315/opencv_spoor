#include<iostream>  
#include <opencv2/opencv.hpp>  
//#include <opencv2/highgui/highgui.hpp>  
  
  
using namespace cv;  
  
  
int main()  
{  
    // ����һ��ͼƬ����Ϸԭ����  /
    Mat img=imread("2.jpg");  
    // ����һ����Ϊ "��Ϸԭ��"����  
    cvNamedWindow("��Ϸԭ��");  
    // �ڴ�������ʾ��Ϸԭ��  
    imshow("��Ϸԭ��",img);  
    // �ȴ�6000 ms�󴰿��Զ��ر�  
    waitKey(6000);  
} 