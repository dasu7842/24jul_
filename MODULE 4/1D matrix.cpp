// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;

class matrix
{
public:
    
    int a1[5];
    int i;


    void get()
    {
        cout << "Enter array elements: ";
        for (i = 0; i < 5; i++)
        {
            cin >> a1[i];
        }
    }

   
    matrix operator+(matrix &m2)
    {
        matrix m3;
        for (int i = 0; i < 5; i++)
        {
            m3.a1[i] = a1[i] + m2.a1[i];
        }
        return m3;
    }

    
    void display()
    {
        cout << "Addition: ";
        for (int i = 0; i < 5; i++)
        {
            cout << a1[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    matrix M1, M2, M3; 

    cout << "Enter elements for the first matrix:" << endl;
    M1.get(); 

    cout << "Enter elements for the second matrix:" << endl;
    M2.get(); 


    M3 = M1 + M2;

    
    M3.display();

    return 0;
}
