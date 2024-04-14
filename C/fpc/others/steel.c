#include <stdio.h>

int main()
{
int h, ts;
float cc;

printf("Enter hardness: ");
scanf("%d",&h);

printf("Enter carbon content: ");
scanf("%f",&cc);

printf("Enter tensile strength: ");
scanf("%d",&ts);

if (h==50 && cc==0.7 && ts==5600){
    printf("Grade is 5");
}

else if (h>50 && cc<0.7 && ts>5600){
	  printf("Grade is 10");
}

else if (h>50 && cc<0.7){
      printf("Grade is 9");
    }

else if (ts>5600 && cc<0.7){
      printf("Grade is 8");
    }

else if (h>50 && ts>5600){
      printf("Grade is 7");
    }

else if (h>50 || cc<0.7 || ts>5600){
      printf("Grade is 6");
    }

else if (h<=50 && cc>=0.7 && ts<=5600) {
      printf("Grade is 5");
    }

else {
  printf("Invalid Input");
}
  }