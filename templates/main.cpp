#include <iostream>

using namespace std;

template <typename T>
T sum(T a, T b) = delete;

template <>
int sum(int a, int b)
{
    return a + b;
}

template <>
float sum(float a, float b)
{
    return a + b;
}

class Complex
{
public:
    int real;
    int im;
    Complex(const int r, const int i) : real(r), im(i) {}

    void print()
    {
        cout << real << " + " << im << "i\n";
    }

    Complex operator+(const Complex &c)
    {
        return Complex(this->real + c.real, this->im + c.im);
    }
};

int main()
{
    Complex a(9, 8);
    Complex b(2, 4);

    sum(a, b);
}
