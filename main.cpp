#include "circle.h"
#include "iostream"
#include "complexShape.h"
#include "myExceptions.h"
#include "shape.h"
#include "textDisplay.h"
#include "triangle.h"
#include "circle.h"
#include "graphicalDisplay.h"
using namespace std;

void drawTriangle(int a, int b, int c, int d)
{
    for (int i = b; i >= 0; i--)
    {

        for (int k = 0; k <= i; k++)
        {
            if (i!=0) {
             cout << " ";
            }
        }

        for (int j = i; j < a; j++)
        {
            cout << "t";
        }
        cout << endl;
    }

    for (int i = abs(d)-1; i >= 0; i--)
    {
        for (int k = i; k < abs(d); k++)
        {
            cout << " ";
        }

        for (int j = 0; j < c+i-1 ;j++)
        {
            cout << "t";
        }
        cout << endl;
    }
}

int main()
{
    drawTriangle(3, 2, 2, -2);
}