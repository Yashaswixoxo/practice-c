//perfect square 
// the perfect squares are the squares of the whole numbers
#include <stdio.h>



#include <math.h>
 
int main()
{
    int num;
    int initial;
    float final;
  
    printf("Enter an integer number: ");
    scanf("%d",&num);
  
    final=sqrt((double)num);
   initial=final;
 
    if(initial==final )
        printf("%d is a perfect square.",num);
    else
        printf("%d is not a perfect square.",num);
      
    return 0;
}