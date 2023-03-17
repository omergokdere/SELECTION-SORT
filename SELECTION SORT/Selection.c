#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ALL 50

void selectionSort (int a[], int xsize);
void selectionSortD (int a[], int xsize);

int main(void)
{
	int a[ ALL ];

	int i;
	int num;
	int randomNumber;
	int size;
	srand(time(NULL));


	printf("How many number you have: ");
	scanf("%d", &size);

	for(i=0; i<size; i++){
		randomNumber = rand() % 100; 
		a[i]= randomNumber;
	}
	
	printf("Data items in orginal orders\n");

	for(i=0; i<size; i++){
		printf("%4d", a[i]);
	}

	do{
		printf("\n\n\nIf you want ordering ascending press 1, ordering decending press 2, "
			"\nto quit press -1:  ");
		scanf("%d", &num);


		if(num==1){

			printf("\n\nData items in ascending order\n");
			selectionSort( a, size );
	
			for(i=0; i<size; i++){
				printf("%4d", a[i]);
			}
		}else if(num==2){

			printf("\n\nData items in decending order\n");

			selectionSortD( a, size );
			for(i=0; i<size; i++){
				printf("%4d", a[i]);
			}
		}

		if(num!=1 && num!= 2 && num!=-1){
			printf("\n\nThere is something wrong! You entered different number!\n");
		}
	}while(num != -1);


	printf("\n");

	return 0;
}

void selectionSort (int a[], int xsize)
{
    int i, j, min, hold;
    for (i=0; i<xsize-1; i++){

       min = i;

       for (j=i+1; j<xsize; j++){

           if (a[j] < a[min])
           min = j;
       }
       hold = a[i];
       a[i] = a[min];
       a[min] = hold;
    }
}

void selectionSortD (int a[], int xsize)
{
    int i, j, min, hold;
    for (i=0; i<xsize-1; i++){

       min = i;

       for (j=i+1; j<xsize; j++){

           if (a[j] > a[min])
           min = j;
       }
       hold = a[i];
       a[i] = a[min];
       a[min] = hold;
    }
}