#include <opencv2\opencv.hpp>  
using namespace cv;  

//-----------------------------------��main( )������--------------------------------------------
//		����������̨Ӧ�ó������ں��������ǵĳ�������￪ʼ
//-------------------------------------------------------------------------------------------------
int main( )  
{  
	//��1��������ͷ������Ƶ
	VideoCapture capture(0);
	Mat edges;

	//��2��ѭ����ʾÿһ֡
	while(1)  
	{  
		Mat frame;  //����һ��Mat���������ڴ洢ÿһ֡��ͼ��
		capture>>frame;  //��ȡ��ǰ֡
		cvtColor(frame,edges,COLOR_BGR2GRAY);
		/*3*3�ں˽��루2*3+1 =7��*/
		blur(edges,edges,Size(7,7));
		Canny(edges,edges,0,30,3);
	    imshow("��ȡ��Ƶ",edges);  //��ʾ��ǰ֡
		if(waitKey(30) >= 0) break;
		
	}  
	return 0;     
}  
