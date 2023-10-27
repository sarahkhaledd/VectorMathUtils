#include <iostream>

int getSum(const std::vector<int>& vector){
    int summation = 0;
    for(int i : vector){
        summation+=i;
    }
    return summation;
}

double getAverage(const std::vector<int>& vector){
    if (vector.empty()) {
        return 0.0;
    }
    double average = static_cast<double>(getSum(vector)) / vector.size();
    return average;
}

int getMinimum(const std::vector<int>& vector){
    if (vector.empty()) {
        return std::numeric_limits<int>::max();
    }
    int minimum = vector[0];
    for(int i : vector){
        if(minimum > i)
            minimum = i;
    }
    return minimum;
}


int main() {
    std::vector<int> myVector{1,4,3,2,5,6,8,7,9,10};
    int sum = getSum(myVector);
    double average = getAverage(myVector);
    int minimum = getMinimum(myVector);
    std::cout << "the sum of vector elements.: " << sum << std::endl;
    std::cout << "the average of vector elements: " << average << std::endl;
    std::cout << "the minimum of vector elements: " << minimum << std::endl;

    return 0;
}
