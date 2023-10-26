#include <iostream>
using namespace std;

int divide(int dividend, int divisor)
{
    if (divisor == 0 || dividend < -231 || dividend > 231 - 1 || divisor < -231 || divisor > 231 - 1)
    {
        return -1;
    }

    int quotient = dividend / divisor;
    return quotient;
}

int main()
{
    int dividend, divisor;

    cout << "Input: dividend = ";
    cin >> dividend;
    cout << "divisor = ";
    cin >> divisor;

    int result = divide(dividend, divisor);

    if (result == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << "Output: " << result << endl;
        cout << "Explanation: " << dividend << " / " << divisor << " = " << static_cast<double>(dividend) / divisor << " which is truncated to " << result << " ." << endl;
    }

    return 0;
}
