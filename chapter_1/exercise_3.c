#include <stdio.h>

int main(){
	float celsius;
	float farenheit;

	int step = 20;
	int lower = 0;
	int upper = 400;
	
	farenheit = lower;

	printf("Farenheit Celsius\n");
	while (farenheit <= upper * 1.0){
		celsius = (5.0 / 9.0) * (farenheit - 32);
		printf("%9.0f %7.2f\n", farenheit, celsius);
		farenheit += step;
	}
}
