#include<stdio.h>
#include<stdlib.h>
 

  
   
int main(int argc, char** argv)
{
	FILE *fp=fopen(argv[1],"r");
	
	char number[100];
	int array[1000]={0};

	int firstSize=0;
	int secondSize=0;
	
	fscanf(fp, "%s", number);
	
	firstSize=atoi(number);
	
	fscanf(fp, "%s", number);
	
	secondSize=atoi(number);
	
	int counter=0;
	
	while (fscanf(fp, "%s", number)!=EOF)
	{
		array[counter]=atoi(number);
		counter++;
	}

	int rCounter=0;
	int i;	
	for (i=0; i<firstSize; i++)
	{
		int y;
		for (y=0; y<secondSize;y++)
		{
			
				
			int a=array[rCounter];
			int b=array[(rCounter)+(firstSize*secondSize)];
			printf("%d\t",a+b);

			rCounter++;
		}
		printf("\n");
	}
	
	fclose(fp);

	return 0;
	
}


