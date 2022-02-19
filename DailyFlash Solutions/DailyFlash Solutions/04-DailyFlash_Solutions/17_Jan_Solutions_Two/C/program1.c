
int printf(char const *, ...);
int scanf(char const *, ...);

void main () {
	
	float r;
	printf("Enter radius : ");
	scanf("%f", &r);

	if(r >= 0)
		printf("Area of circle : %f \n", 3.14 * r * r);
	else
		printf("radius can't be negative\n");
	return;
}
