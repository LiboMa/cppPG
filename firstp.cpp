#include <iostream>
int main() {
     std::cout << "Enter two numbers:" << std::endl;
     int v1 = 0, v2 = 0, v3 = 0;
     (std::cin >> v1 >> v2)>> v3;
     std::cout << "The sum of " << v1 << " and " << v2
     << " and " << v3 << " is " << v1 + v2 +v3 << std::endl;
     return 0;
}
