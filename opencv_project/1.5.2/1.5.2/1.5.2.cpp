#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	//载入原图
	Mat srcImage = imread("1.jpg");
	//显示效果
	imshow("【原图】腐蚀操作",srcImage);
	//运行腐蚀操作
	Mat element = getStructuringElement(MORPH_RECT,Size(15,15));
	Mat dstImage;
	erode(srcImage,dstImage,element);
	//显示效果图
    imshow("【效果图】腐蚀操作",dstImage);
	waitKey(0);
	return 0;
}

