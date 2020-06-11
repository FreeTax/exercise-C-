#include <iostream>
int main()
{
    int a = 0; // stack: {a}
    {
        int b = a + 1; // stack: {b} {a}
        {
            int c = b + 1; // stack: {c} {b} {a}
        } // stack: {b} {a}
    } // stack: {a}
    return 0;
}