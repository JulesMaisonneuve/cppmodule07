# include "Array.hpp"
#include <cstdlib>
// template <typename T>
// void print_array(Array <T> &array)
// {
// 	std::cout << "Array: ";
// 	for (unsigned int i = 0; i < array.size(); i++)
// 	{
// 		std::cout << array[i] << " ";
// 	}
// 	std::cout << std::endl;
// }

// int main(void)
// {
// 	Array<int> test(5);

// 	std::cout << test.size() << std::endl;
// 	for (unsigned int i = 0; i < test.size(); i++)
// 	{
// 		test[i] = i;
// 	}
// 	print_array(test);
// 	// std::cout << test[1] << std::endl;
// 	return (0);
// }
#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << "mirror[i]: " << mirror[i] << std::endl;
		std::cout << "numbers[i]: " << numbers[i] << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		std::cout << "All good" << std::endl;
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "numbers[0] before replacing values in array: "<< numbers[0] << std::endl;
	std::cout << "mirror[0] before replacing values in array: "<< mirror[0] << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	std::cout << "numbers[0] after replacing values in array: "<< numbers[0] << std::endl;
	std::cout << "mirror[0] after replacing values in array: "<< mirror[0] << std::endl;
    delete [] mirror;//
    return 0;
}
