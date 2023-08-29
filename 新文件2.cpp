#include <stdio.h>

int main() {
	int HOUR, MINUTE;
	scanf("%d:%d", &HOUR, &MINUTE);
	if (HOUR == 12) {
		printf("%d:%d PM", HOUR, MINUTE);
	} else {
		if (HOUR > 12) {
			HOUR = HOUR - 12;
			printf("%d:%d PM", HOUR, MINUTE);
		} else {
			printf("%d:%d AM", HOUR, MINUTE);
		}
	}
	return 0;
}