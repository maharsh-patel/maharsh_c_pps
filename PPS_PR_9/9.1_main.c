#include <stdio.h>

struct Student {
	int rollNo;
	char name[50];
	float subject1;
	float subject2;
	float total;
	float percentage;
};

int main() {
	struct Student students[3];

	// Reading data for 3 students
	for (int i = 0; i < 3; i++) {
		printf("Enter details for Student %d:\n", i + 1);
		printf("Roll No: ");
		scanf("%d", &students[i].rollNo);

		printf("Name: ");
		scanf(" %[^\n]", students[i].name); // To read full name with spaces

		printf("Marks in Subject 1: ");
		scanf("%f", &students[i].subject1);

		printf("Marks in Subject 2: ");
		scanf("%f", &students[i].subject2);

		// Compute total and percentage
		students[i].total = students[i].subject1 + students[i].subject2;
		students[i].percentage = students[i].total / 2;
		printf("\n");
	}
#include <stdio.h>

struct Student {
	int rollNo;
	char name[50];
	float subject1;
	float subject2;
	float total;
	float percentage;
};

int main() {
	struct Student students[3];

	// Reading data for 3 students
	for (int i = 0; i < 3; i++) {
		printf("Enter details for Student %d:\n", i + 1);
		printf("Roll No: ");
		scanf("%d", &students[i].rollNo);

		printf("Name: ");
		scanf(" %[^\n]", students[i].name); // To read full name with spaces

		printf("Marks in Subject 1: ");
		scanf("%f", &students[i].subject1);

		printf("Marks in Subject 2: ");
		scanf("%f", &students[i].subject2);

		// Compute total and percentage
		students[i].total = students[i].subject1 + students[i].subject2;
		students[i].percentage = students[i].total / 2;
		printf("\n");
	}
