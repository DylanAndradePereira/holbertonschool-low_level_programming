#include <stdio.h>
int main(void)
{        
	char charType;
        int integerType;
        long int longType;
        long long int longlongType;
        float floatType;


	printf("Size of char: %ld byte\n",sizeof(charType));
	printf("Size of int: %ld bytes\n",sizeof(integerType));
        printf("Size of float: %ld bytes\n",sizeof(longType));
        printf("Size of float: %ld bytes\n",sizeof(longlongType));
        printf("Size of float: %ld bytes\n",sizeof(floatType));

        return 0;
}
