// header files
#include <stdio.h>
#include <stdlib.h>

// main function
int main()
{
int array[100], n, c, d, swap;

// taking array size as input 
printf("------------------------------------------------\n");
printf("Please Enter the size of array :\n");
scanf("%d", &n);   // n = length of array
printf("------------------------------------------------\n");

// entering values inside array
printf("\n------------------------------------------------\n");
printf("Enter %d integers\n", n);
for (c = 0; c < n; c++)
{
scanf("%d", &array[c]);
}
printf("\n------------------------------------------------\n");

// unsorted array
printf("\n------------------------------------------------\n");
printf("\nUn-Sorted array :\n");
for (c = 0; c < n; c++)
printf("%d\n", array[c]);
printf("\n------------------------------------------------\n");


// Bubble sort algorithm
for (c = 0 ; c < n - 1; c++)
{
    for (d = 0 ; d < n - c - 1; d++)
    {
        if (array[d] > array[d+1]) // For decreasing order we can use less than sign "<" 
        {
            swap = array[d];
            array[d] = array[d+1];
            array[d+1] = swap;
        }
    }
}
// end of algorithm


printf("\n\t..........................\n\t applying Bubble Sort\n\t..........................\n");
printf("\n------------------------------------------------\n");


// printing sorted array
printf("\nSorted array :\n");
for (c = 0; c < n; c++)
printf("%d\n", array[c]);
return 0;
}
// main end
