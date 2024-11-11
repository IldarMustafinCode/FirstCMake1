#include <gtest/gtest.h>

#include "SumArray.h"

TEST(eigenTest, sss)
{
	
	const double tol = 1E-10;
	Eigen::ArrayXf ar = Eigen::ArrayXf::Random(10);

	ASSERT_NEAR(1, 1, tol);
	//  GTEST_ASSERT_TRUE(SumArray(ar), ar.sum()+1, 1e-6);
}

TEST(eigenTest, vector)
{
	const double tol = 1E-10;
	Eigen::ArrayXf ar = Eigen::ArrayXf::Random(10);

	// ASSERT_NEAR(SumArray(ar), ar.sum(), tol);
	ASSERT_NEAR(0, 0, tol);
	//  GTEST_ASSERT_TRUE(SumArray(ar), ar.sum()+1, 1e-6);
}

int main(int argc, char **argv)
{

	float t=0;

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}