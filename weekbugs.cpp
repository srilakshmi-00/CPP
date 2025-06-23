#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
int main() {
// std::vector<int> marks = {30, 40, 10, 20, 35, 50}; 
std::vector<int> marks = {30, 40, 10, 20, 35, 50}; 
std::inplace_merge(marks.begin(), marks.begin()+ 2, marks.end());
std::cout << "Merged Marks: ";
for (int m : marks)
std::cout << m << " ";
std::cout << "\n";

std::vector<int> passedMaths = {1, 3, 5, 7};
std::vector<int> passedScience = {2, 3, 4, 5};
std::vector<int> commonPassed(passedMaths.size()+ passedScience.size());

auto it = std::set_intersection(
        passedMaths.begin(), passedMaths.end(),
        passedScience.begin(), passedScience.end(),
        commonPassed.begin());
commonPassed.resize(it - commonPassed.begin());

std::cout << "Students who passed both: ";
for (auto id  : commonPassed)
std::cout << id << " ";
std::cout << "\n";

std::vector<int> marksList = {12,43,55,50,27};
int itm = *min_element(marksList.begin(), marksList.end());
std::cout << "Lowest Mark: " << itm << "\n";
return 0;
}