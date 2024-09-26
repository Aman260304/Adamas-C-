#include<stdio.h>
struct distance{
	int feet,inches;
};
int main(){
	struct distance dist1,dist2,result;
	printf("Enter the first distance in feet: ");
	scanf("%d",&dist1.feet);
	printf("Enter the first distance in inches: ");
	scanf("%d",&dist1.inches);
	printf("Enter the second distance in feet: ");
	scanf("%d",&dist2.feet);
	printf("Enter the second distance in inches: ");
	scanf("%d",&dist2.inches);
	result.feet=dist1.feet+dist2.feet;
	result.inches=dist1.inches+dist2.inches;
	if(result.inches>=12){
		result.feet+=result.inches/12;
		result.inches=result.inches%12;
	}
	printf("The total distance is %d feet %d",result.feet,result.inches);
	return 0;
}
