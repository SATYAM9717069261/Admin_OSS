#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	//long *ptr=(long*)malloc(1000*sizeof(long));
//	long double sum=0;
//	for(int i=0; i<1000 ; i++)
//		*(ptr+i)=rand();
//	for(int i=0;i<1000 ; i++)
//		sum+=*(ptr+i);
//	printf("SUM => %Lf",sum);
//	free(ptr);
//	return 0;


int *arr1=(int*)malloc(1000*1000*sizeof(int));
int *arr2=(int*)malloc(1000*1000*sizeof(int));
int *result=(int*)malloc(1000*1000*sizeof(int));
float start,end;
for(int i=0; i<1000;i++)
	for(int j=0;i<1000;i++){
		*(arr1+i*1000+j)=rand();
		*(arr2+i*1000+j)=rand();
	}
long double sum=0;
start=clock();
for(int i=0; i<1000;i++)
	for(int j=0;j<1000;j++){
		for(int k=0;k<1000;k++){
		sum+=( *(arr1+i*1000+k) ) * (*(arr2+k*1000+j) );
		}
	*(result+i*1000+j)=sum;
	sum=0;
	}
end=(float)clock()-start;
printf("Total Time Taken=%f sec\n",(end/CLOCKS_PER_SEC) );
return 0;
}
