#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	//载入原图
	Mat srcImage = imread("1.jpg");
	//显示效果
	imshow("【原图】均值滤波",srcImage);
	//机型均值滤波操作
	Mat dstImage;
	blur(srcImage,dstImage,Size(7,7));
	//显示效果图
    imshow("【效果图】均值滤波",dstImage);
	waitKey(0);
	return 0;
}

