#include <stdio.h>

union test {
	int x;
int y;// initialize required variables
};

	// write your code here
int main()
{
	union test u;
	printf("x: ");
	scanf("%d",&u.x);
	//accept user input for x and assign it to the union variable x 
	
	
	printf("After making x = %d:\nx= %d y= %d\n",u.x,u.x,u.y          );
	printf("y: ");
	scanf("%d",&u.x);//accept user input for y and assign it to the union variable y



	printf("After making y = %d:\nx= %d y= %d", u.y,u.x,u.y           );
 	return 0;
}
