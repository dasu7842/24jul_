//Write a program of to find out the Area of Triangle, Rectangle and Circle using Switch Case.
#include<stdio.h>

void main()
{
	float l,b,h,r,tr,ci,rec;
	printf("Enter length,breadth,radius and hight:\n");

	scanf("%f,%f,%f,%f",&l,&b,&h,&r);
	
	ci=3.14*r*r;//circle formula
	rec=l*b;    //rectangle formula
	tr=l*b*h;   //tringle formula
	
	printf("Area of circle is:%f\n",ci);
	printf("Rectangle=%f\n",rec);
	printf("Tringle=%f\n",tr);
	}	

