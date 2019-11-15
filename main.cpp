#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int count =0;

///////// Сортировка вставкой \\\\\\\\\\\\\\

int main()
{
    int size = 10000;

    int *a = new int[size];
    int *base = new int [size]; // Исходный массив

    srand (time (NULL));

    for (int i = 0; i < size; i++)
    {
        a[i] = base [i] =  rand()%999;
    }
    float cl = 0;

    /// Большой цикл
    int centre = size;
    for (int r = 0; r < 200; r++)
    {

        for (int i = 0; i < size; i++) a[i] = base[i];
        count = 0;
        cl = clock();


        for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
            if (a[j] < a[min]) min=j;
        }

        swap (a[i], a[min]);
    }

    cout << " Time " << ( clock()- cl ) << endl;

    ///cout << " Number of operation = " << count<< endl ;


    for (int y = 0; y < 10000; y++) {
    for (int i = 0; i < size; i++)
    {
        if (base[i] > base[i+1])
        {
            swap (base[i], base[i+1]);
        }
    }
    }



    }

    return 0;
}
