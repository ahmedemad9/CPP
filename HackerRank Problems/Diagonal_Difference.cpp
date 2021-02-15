#include <iostream>
#include <cstdlib>
#include <vector>
int main() {
    int n;
    std::cin >> n;
    int incA = 0;
    int incB = n - 1;
    std::vector<int> myvec;
    int sumA = 0;
    int sumB = 0;
    int input;

    for (int i = 0; i < (n*n); i++) {
        std::cin >> input;
        myvec.push_back(input);
    }

   for (int j = 0; j < n; j++) {
        sumA += myvec.at(incA);
        sumB += myvec.at(incB);
        incA =incA+ (n + 1);
        incB =incB+ (n - 1);
    }

   std::cout <<abs(sumA - sumB);
    return 0;
}
