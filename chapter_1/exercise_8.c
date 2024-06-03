#include <stdio.h>

int main(){
	int c, b, t, n;
	b = t = n = 0;
	while ((c = getchar()) != EOF){
		if (c == ' '){
			b++;
		} else if (c == '\n'){
			n++;
		} else if (c == '\t'){
			t++;
		}
	}
	printf("Blanks: %d\nNewlines: %d\nTabs: %d", b, n, t);
}
