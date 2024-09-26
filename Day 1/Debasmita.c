//C program to check whether Debasmita is present in the class or not
#include<stdio.h>
int main(){
	int totalstudents;
	printf("Enter the total number of students in the class: ");
	scanf("%d",&totalstudents);
	int rollnumbers[totalstudents];
	printf("Enter the roll numbers of the students:\n");
	int i=0;
	for(i=0;i<totalstudents;i++){
		printf("Roll numbers of students %d:",i+1);
		scanf("%d",&rollnumbers[i]);
	}
	int targetrollno=27;
	int found=0;
	for(i=0;i<totalstudents;i++){
		if(rollnumbers[i]==targetrollno){
			found=1;
			break;
		}
	}
	if(found){
		printf("Debasmita is present in the class(Roll no:27)\n");
	}
	else{
		printf("Not present");
	}
	return 0;
}
