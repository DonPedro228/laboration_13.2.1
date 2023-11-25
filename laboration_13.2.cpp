#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cmath>

using namespace std;

#define z 2
#define KUB(a)  ((a) * (a) * (a))
#define MAX(b,c) ((b)>(c))?(b):(c) 
#define MIN(b,c) ((b)<(c))?(b):(c) 
#define KVAD(x) ((x) * (x))
#define MODULE(x) ((x) < 0 ? -(x) : (x))

#define PRINTI(w) puts("control output"); \
        printf(#w"=%d\n",w) 
#define PRINTR(w) puts("result:"); \
        printf(#w"=%f\n",(float)w)


void main() {
    puts("Lab 13.2. Using macros and preprocessing directive");
    int x, y,
        abs_x,
        abs_y,
        abs_z,
        cub_x,
        sum_x_y_z,
        mini,
        maxi,
        dobut_2x_sum_y,
        dobut_2y_minus_z;
    float W;
    char ch;
    puts("Input 3 integer numbers");
    scanf("%d", &x);
    PRINTI(x);
    scanf("%d", &y);
    PRINTI(y);
    

    do
    {
#if z == 2
        abs_x = MODULE(x);
        abs_y = MODULE(y);
        abs_z = MODULE(z);
        cub_x = KUB(x);
        sum_x_y_z = abs_x + abs_y + abs_z;
        mini = MIN(sum_x_y_z, cub_x);
        W = mini;
        PRINTR(W);


#elif z > 3
        dobut_2x_sum_y = 2 * x + y;
        dobut_2y_minus_z = KVAD(2 * y - z);
        maxi = MAX(dobut_2x_sum_y, dobut_2y_minus_z);
        W = maxi;
        PRINTR(W);

#else
        PRINTR(0);
#endif
        puts("Repeat? y /n "); ch = _getch();
    } while (ch == 'y');
}
