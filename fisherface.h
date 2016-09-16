#pragma once

#include "opencv2/core.hpp"
#include "opencv2/face.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/objdetect.hpp"

using namespace cv;
using namespace cv::face;
using namespace std;

int fisher(Mat img, CascadeClassifier face_cascade, vector<Mat>& images, vector<int>& labels);