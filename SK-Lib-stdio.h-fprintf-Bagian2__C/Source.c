#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	int i, n = 2;
	char str[50];

	FILE* fptr = fopen("sample.txt", "w");
	
	if (fptr == NULL) {
		printf("Could not open file");
		return 0;
	}

	for (i = 0; i < n; i++) {
		puts("Enter a name");
		scanf("%[^\n]%*c", str);
		fprintf(fptr, "%d.%s\n", i, str);
	}

	fclose(fptr);

	_getch();
	return 0;
}
