#include <stdio.h>
	int main(){
		float salary[5];
		int i;
        printf("Enter the elements of the array here: \n");
		for(i=0; i<5; i++){
            scanf("%f", &salary[i]);
		}
		//Printing Elements of the array
		for(i=0; i<5; i++){
			printf("%f", salary[i]);
		}
		return 0;
	}
