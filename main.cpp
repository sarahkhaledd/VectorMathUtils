#include <iostream>

int getSum(const std::vector<int>& vector){
    int summation = 0;
    for(int i : vector){
        summation+=i;
    }
    return summation;
}


int main() {
    std::vector<int> myVector{1,4,3,2,5,6,8,7,9,10};
    int sum = getSum(myVector);

    std::cout << "the sum of vector elements.: " << sum << std::endl;
    return 0;
}
