#include <stdio.h>
int main() {
    int side1,side2,side3;
    do{
    printf("To find the type of triangle with the given side\n") ;   
    printf("Enter the value of side1:\n");
    scanf("%d",&side1);
     printf("Enter the value of side2:\n");
    scanf("%d",&side2);
    printf("Enter the value of side3:\n");
    scanf("%d",&side3);
    if(side1==side2 && side2==side3 && side3==side1) {
        printf("Equilateraltriangle\n");
    }else if(side1==side2 || side2==side3 || side3==side1) {
        printf("Isoscelestriangle\n");
    }else {
        printf("Scalenetriangle\n");
    }
    
    }while(1==1);    
  return 0;

}
 





