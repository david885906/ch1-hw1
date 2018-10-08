#include<stdio.h>
#include<stdlib.h>
float w, h, bmi;
int main(void)
{
	printf("請輸入身高(m)和體重(kg)");
	scanf_s("%f%f",&h,&w);
	bmi = w / (h*h);
	
	if (bmi < 18.5)printf("BMI is %f , underweight",bmi);
	if (bmi >= 18.5 && bmi <24.9)printf("BMI is %f , normal", bmi);
	if (bmi >= 24.9 && bmi<29.9)printf("BMI is %f , overweight", bmi);
	if (bmi >= 29.9)printf("BMI is %f , obese", bmi);
	system("pause");
	return 0;
}