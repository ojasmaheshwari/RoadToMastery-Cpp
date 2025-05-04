#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    int8_t x{65};
    cout << static_cast<int>(x) << '\n';
}