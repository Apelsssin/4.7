
#include <iostream>
#include <set>
#include <algorithm>
#include <array>

int main()
{
    std::cout << "[IN]:\n";
    int size;
    std::cin >> size;
    std::set<int, std::greater<int>> set_;
    int n;
    for (int i = 0; i < size; ++i) {
        std::cin >> n;
        set_.insert(n);
    }
    std::cout << "[OUT]:\n";
    for (auto& it : set_) {
        std::cout << it << std::endl;
    }
}
