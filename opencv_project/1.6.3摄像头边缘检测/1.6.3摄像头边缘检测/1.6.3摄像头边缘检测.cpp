#include <opencv2\opencv.hpp>  
using namespace cv;  

//-----------------------------------【main( )函数】--------------------------------------------
//		描述：控制台应用程序的入口函数，我们的程序从这里开始
//-------------------------------------------------------------------------------------------------
int main( )  
{  
	//【1】从摄像头读入视频
	VideoCapture capture(0);
	Mat edges;

	//【2】循环显示每一帧
	while(1)  
	{  
		Mat frame;  //定义一个Mat变量，用于存储每一帧的图像
		capture>>frame;  //读取当前帧
		cvtColor(frame,edges,COLOR_BGR2GRAY);
		/*3*3内核降噪（2*3+1 =7）*/
		blur(edges,edges,Size(7,7));
		Canny(edges,edges,0,30,3);
	    imshow("读取视频",edges);  //显示当前帧
		if(waitKey(30) >= 0) break;
		
	}  
	return 0;     
}  
