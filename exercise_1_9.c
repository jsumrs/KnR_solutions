#include <stdio.h>

int main(){
	int c, lastchar;
	while ((c = getchar()) != EOF){
		if (c != lastchar) {
			printf("%c", c);
		}
		lastchar = c;
	}
}
