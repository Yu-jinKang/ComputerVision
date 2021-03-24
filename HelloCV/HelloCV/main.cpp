#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int main() {
	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;

	cv::Mat img;
	img = cv::imread("lenna.bmp");

	if (img.empty()) {
		std::cerr << "Image Error" << std::endl;
		return -1;
	}

	namedWindow("image");
	cv::imshow("image", img);

	namedWindow("image2", WINDOW_NORMAL);
	moveWindow("image2", 100, 100);
	cv::imshow("image2", img);


	waitKey();
	return 0;
}