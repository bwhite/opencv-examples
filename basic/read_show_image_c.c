#include <opencv/cv.h>
#include <opencv/highgui.h>

int main () {
  IplImage *image = cvLoadImage("../test_data/lena.bmp", CV_LOAD_IMAGE_COLOR);
  cvNamedWindow("OpenCV", CV_WINDOW_AUTOSIZE);
  cvShowImage("OpenCV", image);
  cvWaitKey(-1);
  cvReleaseImage(&image);
  return 0;
}
