
#include <iostream>

#include <Eigen/Core>
#include <Eigen/Dense>



int main()
{

    Eigen::ArrayXf v = Eigen::ArrayXf::Random(10);

	std::cout << "Here is the vector v:\n";
	for (auto x : v)
		std::cout << x << " ";
	std::cout << "\n";

    return 0;
}