
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>


std::map <char, int> m {};
bool compare(std::pair<char, int>& a, std::pair<char, int>& b)
{
    return a.second > b.second;
}

void fill_map(std::string str) {
    for (int i = 0; i < str.length(); ++i) {
        m[str[i]] = 0;
    }
    for (int i = 0; i < str.length(); ++i) {
        m[str[i]] += 1;
    }
}

void sort_map(std::vector<std::pair<char, int> > * v) {
    
    for (auto& el : m) {
        (*v).push_back(el);
    }
    std::sort((*v).begin(), (*v).end(), compare);
}

void print_map(std::vector<std::pair<char, int> >* v) {
    for (auto& el : *v) {
        std::cout << el.first << " " << el.second << std::endl; 
    }
}

int main()
{
    std::string str;
    std::cout << "[IN]: ";
    //std::getline(std::cin, str); 
    str = "Hello world!!"; //
    std::cout << str << std::endl; //
    fill_map(str);
    std::vector<std::pair<char, int> > v;
    sort_map(&v);
    std::cout << "[OUT]: " << std::endl;
    print_map(&v);
    
}
