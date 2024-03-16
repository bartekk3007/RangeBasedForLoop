#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (auto elem : v1)
	{
		std::cout << elem << ' ';
		elem *= 2;
	}
	std::cout << '\n';

	for (auto& elem : v1)
	{
		std::cout << elem << ' ';
		elem *= 2;
	}
	std::cout << '\n';

	for (int i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << ' ';
		v1[i] *= 2;
	}
	std::cout << '\n';

	for (int i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << ' ';
	}
	std::cout << '\n';

	return 0;
}