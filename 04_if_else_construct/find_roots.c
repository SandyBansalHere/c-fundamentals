#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, y, w;
    scanf("%f%f%f", &a, &b, &c);
    delta = b * b - 4 * a * c;
    y = 2 * a;

    if (delta == 0)
        printf("Equal roots = %f \n", -b / y);
    else if (delta < 0)
        printf("Complex roots \n");
    else
    {
        w = sqrt(delta);
        printf("root1 = %f, root2 = %f \n", (-b + w) / y, (-b - w) / y);
    }
}
