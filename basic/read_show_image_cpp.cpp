#include <opencv/cv.h>
#include <opencv/highgui.h>

using namespace cv;

int main () {
  Mat image = imread("../test_data/lena.bmp");
  namedWindow("OpenCV");
  imshow("OpenCV", image);
  waitKey();
  return 0;
}
