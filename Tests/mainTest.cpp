#include <gtest/gtest.h>

#include <Eigen/Core>
#include <Eigen/Dense>

#include "SaySomething/eigenTest.h"



TEST(eigenTest, vector)
{

	Eigen::ArrayXf ar = Eigen::ArrayXf::Random(10);


	 GTEST_ASSERT_TRUE(SumArray(ar), ar.sum(), 1e-6);

}




int main(int argc, char **argv)
{

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();

}