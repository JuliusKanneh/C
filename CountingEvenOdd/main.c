#include <stdio.h>
#include <stdlib.h>

int main()
{
    int even_counter, odd_counter, start_num, end_num;
    even_counter = 0;
    odd_counter = 0;
    printf("Enter start number: ");
    scanf("%d", &start_num);
    printf("Enter end number: ");
    scanf("%d", &end_num);

    if(start_num <= end_num){
        for(int i=start_num; i<=end_num; i++){
            if(i%2==0){
                even_counter = even_counter + 1;
            }else{
                odd_counter = odd_counter + 1;
            }
        }
    }

    if(even_counter != 0 & odd_counter != 0){
        printf("The number of even numbers from %d to %d is: %d \n",start_num, end_num, even_counter);
        printf("The number of odd numbers from %d to %d is: %d \n",start_num, end_num, odd_counter);
    }else{
        printf("Invalid sequence of numbers entered. Start number %d is greater than end number %d",start_num, end_num);
    }

    return 0;
}
