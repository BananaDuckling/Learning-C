#include <stdio.h>


int main()
{
	int length, width, height;
	printf("Enter the value of length: ");
	scanf("%d",&length);

	printf("Enter the value of width: ");
	scanf("%d",&width);

	printf("Enter the value of height: ");
	scanf("%d",&height);

	int volume = length * width * height;
	int weight = (volume + 165) / 166;

	printf("The volume is %d units.\n", volume);
	printf("The height is %d units.\n", height);


}

