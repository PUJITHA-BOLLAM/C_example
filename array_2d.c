#include<stdio.h>
int main(){
	int r,c,i,j,a[6][6];
	printf("Enter the no.of rows r");
	scanf("%d",&r);
	printf("Enter the no.of columns c");
	scanf("%d",&c);
	printf("Enter %d elements\n",r*c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("2-D ARRAY\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}


	return 0;
}