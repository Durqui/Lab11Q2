// Search for "WRITE YOUR CODE" to complete this program
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename ElementType, typename ContainerType>
ElementType maxElement(const ContainerType& container)
{
	ElementType max = container[0];
	auto it = container.begin();

	while (it != container.end())
	{
		if (*it > max)
			max = *it;
		it++;
	}
	return max;

}

template<typename ElementType, typename ContainerType>
ElementType minElement(const ContainerType& container)
{
	ElementType min;
	min = container[0];
	auto it = container.begin();

	while (it != container.end())
	{
		if (*it < min)
			min = *it;
		it++;
	}

	return min;
}

template<typename ElementType, typename ContainerType>
int countElement(const ContainerType& container, ElementType val)
{
	int count = 0;
	auto it = container.begin();

	while (it != container.end())
	{
		if (*it == val)
			count++;
		it++;
	}

	return count;
}

int main()
{
	int val = 8;
	int list1[] = { 3, 5, 1, 8, 2, 8, 7, 6, 8 };
	vector<int> intVector(list1, list1 + 9);
	cout << "The maximum value of " << val << " in list1: " 
		<< (countElement<int, vector<int> >(intVector, val));

	return 0;
}