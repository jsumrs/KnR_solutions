#include <stdio.h>

int main(){
	float celsius;
	float farenheit;

	int step = 20;
	int lower = 0;
	int upper = 400;
	
	celsius = upper;

	printf("Celsius Farenheit\n");
	while (celsius >= lower* 1.0){
		farenheit = ((9.0 * celsius) / 5.0) + 32;
		printf("%7.2f %9.0f\n", celsius, farenheit);
		celsius -= step;
	}
}
