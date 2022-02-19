#include <stdio.h>
#include <math.h>

void main(){

	float x1 = 0,y1 = 0,x2 = 0,y2 = 0,x3 = 0,y3 = 0;
	float base = 0,height = 0,area = 0;

	printf("Enter X and Y Cords of 3 Vertices of Triangle\n");
	printf("Enter X and Y Co-ordinates of Point-1\n");
	scanf("%f %f",&x1,&y1);
	printf("Enter X and Y Co-ordinates of Point-2\n");
	scanf("%f %f",&x2,&y2);
	printf("Enter X and Y Co-ordinates of Point-3\n");
	scanf("%f %f",&x3,&y3);

	float s1 = sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
	float s2 = sqrt((pow((x2-x3),2))+(pow((y2-y3),2)));
	float s3 = sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
	s1 < 0 ? s1*=-1 : 1;
	s2 < 0 ? s2*=-1 : 1;
	s3 < 0 ? s3*=-1 : 1;
	
	float sp = (s1+s2+s3)/2;	
	area = sp*(sp-s1)*(sp-s2)*(sp-s3);
	area < 0 ? area*=-1 : 1;
	area = sqrt(area);
	base = s3;
	
	height = (2*area)/base;

	printf("Height Of Triangle = %.2f\n",height);

}
