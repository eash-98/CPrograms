#include<stdio.h>
void main()
{
	int r,c,key,i,j,chk=0;
	printf(" enter the no: of rows and columns of the array\n");
	scanf("%d %d", &r,&c);
	int arr[r][c];
	printf(" Enter the elements into the array\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d", &arr[i][j]);
	printf("\n\n The Array Entered is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t", arr[i][j]);
		printf("\n");
	}
	printf("\n Enter the number to be searched\n");
	scanf("%d", &key);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
			if(arr[i][j]==key)
			{
				printf(" %d found at (%d,%d) position ", key,(i+1),(j+1));
				chk=chk+1;
			}
			else
			continue;
		}
	}
	if(chk==0)
	printf(" %d could not be found in the array\n",key);
}

