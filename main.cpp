#include <iostream>
#include <vector>


int getSum(std::vector<int> vec)
{
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        sum += vec[i];
    }
    return sum;
}

int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};
    std::cout << getSum(vec) << '\n';
}