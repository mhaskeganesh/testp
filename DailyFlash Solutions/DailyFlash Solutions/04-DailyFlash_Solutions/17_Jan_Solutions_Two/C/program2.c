
int printf(char const *, ...);
int scanf(char const *, ...);

void main () {
	
	int u;
	printf("Enter Number of Units : ");
	scanf("%d", &u);

	if(u >= 0 && u <= 50)
		printf("Electricity Bill : %f\n" , 0.50 * u);
	else if(u > 50 && u <= 150)
		printf("Electricity Bill : %f\n" , 0.75 * u);
	else if(u > 150 && u <= 250)
		printf("Electricity Bill : %f\n" , 1.20 * u);
	else if(u > 250)
		printf("Electricity Bill : %f\n" , 1.50 * u);
	else
		printf("Units can't be negative\n");
	return;
}
