//
// Created by quan on 2021/12/14.
//

#ifndef SLAM_CORNER_HARRIS_H
#define SLAM_CORNER_HARRIS_H

#include "opencv2/opencv.hpp"
#include "glog/logging.h"

namespace slam {
namespace opencv {

class CornerHarris
{
public:
    void CornerDetect(const std::string& filename);
};

} // namespace opencv
} // namespace slam

#endif //SLAM_CORNER_HARRIS_H
