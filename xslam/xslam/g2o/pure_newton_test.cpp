#include "xslam/g2o/pure_newton.h"

#include "gtest/gtest.h"
#include "glog/logging.h"

namespace xslam {
namespace g2o {

TEST(PureNewtonSolver, demo)
{
    PureNewtonSolver demo;
    demo.RunDemo();
}

} // namespace g2o
} // namespace xslam