#include "iter.hpp"

template<typename T>
void fill_array(T & array)
{
    array = "test";
}

template<typename T>
void print_array(T & array)
{
    std::cout << array;
}

int main(void)
{
    std::string tab[3] = {"will", "be", "replaced"};
    // iter(tab, 3, &print_array);
    iter(tab, 3, &fill_array);
    iter(tab, 3, &print_array);
    std::cout << std::endl;
    return (0);
}
