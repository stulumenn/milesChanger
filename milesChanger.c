#include <stdio.h>
#define KMS_PER_MILE 1.609
#define print printf("hello")


int main(){
	double milesPerKm;
	float a;
	int b;
	char c;
	double kms;
	printf("Hello World!");

	printf("Enter the distance in miles:");
	scanf("%lf", &miles);
	printf("hello");

	kms = KMS_PER_MILE * miles;

	printf("Your miles value %f \t that equals %f kilometers.\n", miles, kms);


	return 0;
}
