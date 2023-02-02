#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Useless comment again
int binsearch(int [], int, int, int);
int str_int(char []);
int main(int argc, char* argv[]){
	int i,n;
	int ar[argc-2];
	for(i=0;i<argc-2;i++)
		ar[i]=str_int(argv[i+1]);
	n=str_int(argv[argc-1]);
	
	for(i=0;i<argc-2;i++)
	printf("%d\t",ar[i]);
	printf("\n");
	i=binsearch(ar,n,0,argc-2-1);
	//printf("%d\n\n",str_int(argv[1]));
	//printf("%d\n\n",strlen(argv[1]));
	if(i==-1)
		printf("%d not found in array\n",n);
	else
		printf("%d found at position %d\n",n,i+1);
	
	return 0;
}
int str_int(char ar[]){
	int i=0,num=0;
	while(ar[i]!='\0'){
		num*=10;
		num+=ar[i]-'0';
		i++;
	}
	return num;
}
int binsearch(int ar[], int n, int lo, int hi){
	int mid= (lo+hi)/2;
	if(lo>hi)
	return -1;
	if(n==ar[mid])
	return mid;
	if(n<ar[mid])
	return binsearch(ar,n,lo,mid-1);
	if(n>ar[mid])
	return binsearch(ar,n,mid+1,hi);
}
