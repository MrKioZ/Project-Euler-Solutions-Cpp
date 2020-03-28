#include <iostream>

int main()
{
	auto Total = 0;

	auto integier = 1000;

	for (auto i = 1; i < integier; i++) {

		if ((i % 5 == 0) || (i % 3 == 0)) {
			//std::cout << i << std::endl;
			Total = Total + i;
		}
	}

	std::cout << "\nTotal: " << Total << std::endl;

}
