//check if number is even or odd
#include <iostream>

using namespace std;

int main()
{
    int num;

    cout <<"enter number: ";
    cin >> num;

    if ((num % 2 ) == 0)
    {
        cout << "number is even";
    }
    else
    {
        cout<< "number is odd";
    }
}
