#include <gtest/gtest.h>

#include "SomeFunctions/SumArray.hpp"

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
	ASSERT_NEAR(std::sin(0), 1, tol);
	//  GTEST_ASSERT_TRUE(SumArray(ar), ar.sum()+1, 1e-6);
}

int main(int argc, char **argv)
{

	std::cout << "wowowowowoowwoowowowowowow" << std::endl;
	float t = 0;
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}