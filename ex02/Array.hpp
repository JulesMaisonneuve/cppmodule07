#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
	private:
		T * array;
		unsigned int tab_size;
	public:
		Array(void)
		{
			this->tab_size = 0;
			this->array = NULL;
		}
		Array(unsigned int n)
		{
			this->tab_size = n;
			this->array = new T[n];
		}
		Array &operator=(const Array &other)
		{
			if (this == other)
				return (*this);
			this->tab_size = other.tab_size;
			this->array = new T[this->tab_size];
			for (unsigned int i = 0; i < this->tab_size; i++)
				this->array[i] = other.array[i];
			return (*this);
		}
		Array(const Array &other) : array(NULL)
		{
			this->tab_size = other.tab_size;
			this->array = new T[this->tab_size];
			for (unsigned int i = 0; i < tab_size; ++i)
				array[i] = other.array[i];
		}
		T &operator[](unsigned int index)
		{
			if (index >= this->tab_size)
			{
				throw std::exception();
			}
			else
				return this->array[index];
		}
		unsigned int size(void)
		{
			return (this->tab_size);
		}
		~Array(void)
		{
			delete [] this->array;
		}
};

#endif
