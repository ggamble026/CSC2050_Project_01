#include <stdio.h>
#include <stdlib.h>

/*Takes the command line inputs as arguments*/
int main(int argc, char *argv[]) {
        int num;
	/*Used a long to allow for larger numbers*/
        long result = 1;

	/*Check number of arguments provided*/
	if (argc != 2){
		printf("Wrong number of command line arguments provided\n");
		return -1;
	}

	/*Convert the char command line argument to an integer before operations, I included <stdlib.h> at the top to allow this to work*/
	num = atol(argv[1]);

	/*Factorial calculation starts here*/
	if (num<0){
                return -1;
       }
	/*Multiplies 1 by the number, and each number before it*/
        for (long i=1; i<=num; i++){
                result *= i;
        }
	printf("%ld\n" ,result);
        return 0;
	
}

		

