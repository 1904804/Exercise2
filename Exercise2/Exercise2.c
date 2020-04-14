#include <stdio.h>

//intialize constant variable
#define PI 3.142

//Exercise2

void main()
{
	//initialize variables and set memory
	//rectangle variables
	float recWidth;
	float recHeight;
	float recArea;

	//circle variables
	float cirRadius;
	float cirArea;
	float cirDiameter;

	//box variables
	float boxWidth;
	float boxHight;
	float boxArea;

	float shadedArea;


	printf_s("Please enter the width for the overall rectangle - \n");
	scanf_s("%f", &recWidth);

	//while loop to check for zero or a function 

	printf_s("Please enter the height for the overall rectangle - \n");
	scanf_s("%f", &recHeight);

	recArea = recHeight * recWidth;

	//printf_s("%f", recArea);//testing

	printf_s("Please enter the radius for the circle - \n");
	scanf_s("%f", &cirRadius);

	
	cirDiameter = cirRadius * 2;

	//printf_s("Area - %f \n", cirArea);//testing
	//printf_s("Diameter - %f \n", cirDiameter);//testing


	while (cirDiameter > recHeight | cirDiameter > recWidth)
	{
		if (cirDiameter > recHeight)
		{
			printf_s("The diameter of the circle is larger than the Height of the overall rectangle \n");
			printf_s("Please enter a value below %.2f - \n", recHeight / 2);
			scanf_s("%f", &cirRadius);
			cirDiameter = cirRadius * 2;
		}
		else if (cirDiameter > recWidth)
		{
			printf_s("The diameter of the circle is larger than the Width of the overall rectangle \n");
			printf_s("Please enter a value below %.2f - \n", recWidth / 2);
			scanf_s("%f", &cirRadius);
			cirDiameter = cirRadius * 2;
		}
		
	}

	printf_s("Please enter the width of you box - \n");
	scanf_s("%f", &boxWidth);

	

	//printf_s("Box area = %f", boxArea);//Testing

	while (boxWidth> recHeight | boxWidth > recWidth)
	{
		if (boxWidth > recHeight)
		{
			printf_s("The length of the box is larger than the Height of the overall rectangle \n");
			printf_s("Please enter a value below %.2f - \n", recHeight);
			scanf_s("%f", &boxWidth);
			
		}
		else if (boxWidth> recWidth)
		{
			printf_s("The length of the box is larger than the width of the overall rectangle \n");
			printf_s("Please enter a value below %.2f - \n", recWidth);
			scanf_s("%f", &boxWidth);
		}

	}


	
	//perform calculations
	recArea = recHeight * recWidth;

	cirArea = PI * cirRadius * cirRadius;
	
	
	boxHight = boxWidth;
	boxArea = boxHight * boxWidth;

	printf_s("Total are of the overall Rectangle - %.2f \n", recArea);
	printf_s("The area of the Circle is %.2f \n", cirArea);
	printf_s("The area of the Box is %.2f \n", boxArea);

	shadedArea = recArea - (boxArea + cirArea);

	printf_s("The area of the shaded ares is - %.2f", shadedArea);


}