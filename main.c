#include <stdlib.h>
#include <stdint.h>

/* take a number & return its number of
"1"'s in its binary representation */

int hammingWeight(uint32_t n);  //prototype

int hammingWeight(uint32_t n)   //definition
{
    int counter = 0;    //answer returned
    uint32_t biggestFit = 1 << 31; //2^32

    while (n > 0)
    {
        while (biggestFit > n)
        {
            biggestFit >>= 1;
        }

        n -= biggestFit;
        counter++;
    }

    return counter;
}

int main()
{
    printf("%d\n", hammingWeight(127));
    return 0;
}
