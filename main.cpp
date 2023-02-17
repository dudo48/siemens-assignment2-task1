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

int getMin(std::vector<int> vec)
{
    int min = vec[0];
    for (int i = 1; i < vec.size(); ++i)
    {
        min = (vec[i] < min) ? vec[i] : min;
    }
    return min;
}

double getAverage(std::vector<int> vec)
{
    double sum = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        sum += vec[i];
    }
    return sum / vec.size();
}

int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << getSum(vec) << '\n';
    std::cout << getMin(vec) << '\n';
    std::cout << getAverage(vec) << '\n';
}