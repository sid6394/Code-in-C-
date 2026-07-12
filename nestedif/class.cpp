#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];}
int position_to_erase;
std::cin >> position_to_erase;
position_to_erase--;
vec.erase(vec.begin() + position_to_erase);
int a, b;
std::cin >> a >> b;
a--;
b--;
if (a < vec.size()) {
if (b >= vec.size()) {b = vec.size();
        }
        vec.erase(vec.begin() + a, vec.begin() + b);
    }

    std::cout << vec.size() << std::endl;

    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}