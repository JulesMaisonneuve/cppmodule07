#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter(T*  tab, size_t tabsize, void(*func)(T&))
{
    for (size_t i = 0; i < tabsize; i++)
    {
        func(tab[i]);
    }
    return ;
}

#endif
