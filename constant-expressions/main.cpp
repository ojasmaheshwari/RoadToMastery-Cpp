#include <iostream>

using namespace std;

constexpr int sum(int a, int b)
{
    return a + b;
}

int main()
{
    // const keyword - can create constant expressions but may be a little difficult to judge
    // Only const integral variables with initializer containing a constant expression are constant expressions

    const int d{5};      // Is a constant expression
    const double e{5.0}; // Not a constant expression

    // constexpr - explicitly tell the compiler that it's a constant expression
    constexpr double f{5.0};

    int a;
    cin >> a;
    int b;
    cin >> b;

    // constexpr int c = sum(a, b); Not allowed as a and b are non-const
    constexpr int c = sum(5, 6); // Allowed, will be eval at compile time
}