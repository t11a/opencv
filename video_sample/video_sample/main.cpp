//
//  main.cpp
//  video_sample
//
//  Created by Tsuyoshi Ogawa on 5/14/14.
//  Copyright (c) 2014 Tsuyoshi Ogawa. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, const char * argv[])
{
  VideoCapture cap(0);
    
  Mat frame;
    
  while (waitKey(1) != 'q') {
    cap >> frame;
    imshow("sample", frame);
  }
  return 0;
}

