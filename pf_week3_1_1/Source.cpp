//64010846
#include <stdio.h>
int main()
{
	float w, h;
	printf("BMI CALCULATOR\nEnter Weight (kg.) : ");
	scanf_s("%f", &w);
	printf("Enter Height (m.) : ");
	scanf_s("%f", &h);

	float bmi = w / (h * h);
	printf("%.1f ", bmi);
	if (bmi < 18.5)
		printf("UNDERWEIGHT");
	else if (bmi <= 24.9)
		printf("NORMAL");
	else if (bmi <= 29.9)
		printf("OVERWEIGHT");
	else
		printf("OBESE");
	return 0;
	
}
