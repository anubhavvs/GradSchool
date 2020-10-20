#include<iostream>

using namespace std;

class test 
{ 
    int a, b, result;
public:
    void get();
    void sum();
};
inline void test :: get()
{
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
}
inline void test :: sum()
{
    result = a+b;
    cout << "Addition of two numbers: " << a+b << "\n";
}

int main()
{
    test s;
    s.get();
    s.sum();
    return 0; 
}
