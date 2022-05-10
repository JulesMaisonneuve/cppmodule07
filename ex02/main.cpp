# include "Array.hpp"

template <typename T>
void print_array(Array <T> &array)
{
	std::cout << "Array: ";
	for (unsigned int i = 0; i < array.size(); i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

int main(void)
{
	Array<int> test(5);

	std::cout << test.size() << std::endl;
	for (unsigned int i = 0; i < test.size(); i++)
	{
		test[i] = i;
	}
	print_array(test);
	// std::cout << test[1] << std::endl;
	return (0);
}
