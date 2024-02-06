// Write a program of to swap the two values using template
#include <iostream>
using namespace std;
template <typename T>

class Swapper
{
public:
    
    Swapper(T &x, T &y)
    {
        T z = x;
        x = y;
        y = z;
    }
};

int main()
{
    int a = 5, b = 10;
    cout << "Before swapping: " << a << " " << b << endl;

   
    Swapper<int>(a, b);

    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}

