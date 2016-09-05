#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	//载入原图
	Mat srcImage = imread("1.jpg");
	//显示效果
	imshow("【原图】Canny边缘检测",srcImage);
	//机型均值滤波操作
	Mat edge,grayImage;
	//[1]将原图像转换为灰度图像
	cvtColor(srcImage,grayImage,CV_BGR2GRAY);
	//[2]先用3x3的北河来降噪
	blur(grayImage,edge,Size(3,3));
	//[3] 运行Canny 算子
	Canny(edge,edge,3,9,3);
	//[4]显示效果图
    imshow("【效果图】Canny边缘检测",edge);

	waitKey(0);

	return 0;
}


