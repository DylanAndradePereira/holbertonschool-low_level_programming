#include <stdio.h>
int main(void)
{        
	char charType;
        int integerType;
        long int longType;
        long long int longlongType;
        float floatType;


	printf("Size of char: %ld byte\n",sizeof(charType),"(s)");
	printf("Size of int: %ld bytes\n",sizeof(integerType)"(s)");
        printf("Size of long int: %ld bytes\n",sizeof(longType)"(s)");
        printf("Size of long long int: %ld bytes\n",sizeof(longlongType)"(s)");
        printf("Size of float: %ld bytes\n",sizeof(floatType)"(s)");

        return 0;
}
