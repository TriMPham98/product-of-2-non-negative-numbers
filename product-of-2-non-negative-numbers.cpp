#include <iostream>
using namespace std;

int product(int num1, int num2)
{
    if (num2 == 0)
    {
        return 0;
    }

    return num1 + product(num1, num2 - 1);
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = product(num1, num2);

    cout << "Product is: " << result << std::endl;

    return 0;
}