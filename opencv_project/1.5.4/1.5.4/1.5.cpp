#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	//����ԭͼ
	Mat srcImage = imread("1.jpg");
	//��ʾЧ��
	imshow("��ԭͼ��Canny��Ե���",srcImage);
	//���;�ֵ�˲�����
	Mat edge,grayImage;
	//[1]��ԭͼ��ת��Ϊ�Ҷ�ͼ��
	cvtColor(srcImage,grayImage,CV_BGR2GRAY);
	//[2]����3x3�ı���������
	blur(grayImage,edge,Size(3,3));
	//[3] ����Canny ����
	Canny(edge,edge,3,9,3);
	//[4]��ʾЧ��ͼ
    imshow("��Ч��ͼ��Canny��Ե���",edge);

	waitKey(0);

	return 0;
}


