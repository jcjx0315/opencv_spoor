#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	//����ԭͼ
	Mat srcImage = imread("1.jpg");
	//��ʾЧ��
	imshow("��ԭͼ����ֵ�˲�",srcImage);
	//���;�ֵ�˲�����
	Mat dstImage;
	blur(srcImage,dstImage,Size(7,7));
	//��ʾЧ��ͼ
    imshow("��Ч��ͼ����ֵ�˲�",dstImage);
	waitKey(0);
	return 0;
}

