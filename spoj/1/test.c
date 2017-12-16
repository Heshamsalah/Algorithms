#include <stdio.h>

int main() {
int i = 0;
scanf("%d", &i);

while(1) {
	if(i != 42) {
		printf("%d\n", i);
	} else {
		break;
	}
	scanf("%d", &i);
}
return 0;
}
