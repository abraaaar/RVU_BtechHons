/*
Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies. 
Test Data : 7 9
Expected Output : The coordinate point (7,9) lies in the First quadrant.             */
#include <stdio.h>
int main(){
  int x,y;
  printf("Enter x coordinate: ");
  scanf("%d",&x);
  printf("Enter y coordinate: ");
  scanf("%d",&y);
  if (x>0)          {
    if (y>0){
      printf(" The coordinate point (%d,%d) lies in the First quadrant.",x,y);
    }else if (y==0){
      printf(" The coordinate point (%d,%d) lies on the X-Axis between First quadrant and Fourth quadrant.",x,y);
    }else {
      printf(" The coordinate point (%d,%d) lies in the Fourth quadrant.",x,y);
    }
                    }
  else if (x==0)   {
    if (y>0){
      printf("The coordinate point (%d,%d) lies on the Y-Axis between First quadrant and Second quadrant.",x,y);
    }else if (y==0){
      printf(" The coordinate point (%d,%d) lies on the Origin.",x,y);
    }else {
      printf("The coordinate point (%d,%d) lies on the Y-Axis between Third quadrant and Fourth quadrant.",x,y);
    }
                    }
  else {
    if (y>0){
      printf("The coordinate point (%d,%d) lies in the Second Quadrant.",x,y);
    }else if (y==0){
      printf("The coordinate point (%d,%d) lies on the X-Axis between Second quardrant and Third quadrant.",x,y);
    }else {
      printf("The coordinate point (%d,%d) lies in Third quadrant.",x,y);
    }
  }
} 

