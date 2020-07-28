#include "stdfx.h"
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\imgproc\imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
	Mat src = imread("HoaSen.jpg");
	Mat dst = src.clone();

	double angle = 45.0;
	double scale = 1.5;
	Point2f center(src.cols / 2, src.rows / 2);
	Mat mat_rot = getRotationMatrix2(center, angle, scale);
	warpAffine(src, dst, mat_rot, src.size());
	imshow("Anh goc", src);
	imshow("Anh sau phep bien doi", dst);
	waitKey(0);
	return 0;

	double I[2][3] = {1, 0.5, 0, 0, 1, 0};
	Mat mat_rot(2, 3, CV_64F, I);
	warpAffine(src, dst, mat_rot, src.size());
}