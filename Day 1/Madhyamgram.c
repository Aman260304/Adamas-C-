// C program to check whether Madhyamgram lies between Sealdah and Barasat or not
#include<stdio.h>
int main(){
	int source,destination;
	printf("Select source station(0=Sealdah,1=Dum Dum,2=Birati,3=Madhyamgram,4=Barasat):");
	scanf("%d",&source);
	printf("Select destination station(0=Sealdah,1=Dum Dum,2=Birati,3=Madhyamgram,4=Barasat):");
	scanf("%d",&destination);
	if(source<destination){
		if(source<3&&destination>3){
			printf("Madhyamgram is present in between/n");
		}
		else{
			printf("Madhyamgram is not present in between/n");
		}
	}
		else{
			printf("Invalid input. The destination should be after the source./n");
		}
	return 0;
}
