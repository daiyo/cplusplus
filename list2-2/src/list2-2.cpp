#include <stdio.h>
#include <string.h>

void dispString(const char *ptr) {
	strcpy(ptr, "dog");
}

int main() {
	char *buf = "cat";
	dispString(buf);
	return 0;
}
