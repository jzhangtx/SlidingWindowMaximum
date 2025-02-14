// SlidingWindowMaximum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<int> MaxSlidingWindow(std::vector<int>& A, int k)
{
    std::vector<int> result;
    result.reserve(A.size() - k + 1);
    for (size_t i = 0; i < A.size()-k+1; ++i)
    {
        int max = A[i];
        size_t up = i + k;
        for (size_t j = i+1; j < up; ++j)
        {
            max = std::max(max, A[j]);
        }
        result.push_back(max);
    }

    return result;
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The numbers in the array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        int k = 0;
        std::cout << "The Width of the window: ";
        std::cin >> k;

        std::vector<int> v = MaxSlidingWindow(vec, k);
        std::cout << v[0];
        for (auto i = v.cbegin() + 1; i != v.cend(); ++i)
            std::cout << ", " << *i;

        std::cout << std::endl;
    }
}
