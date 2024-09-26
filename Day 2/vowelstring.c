#include<stdio.h>
int main()
{
	char name[100]="adamasuniversity";
	int i,vowel=0,consonant=0;
	for(i=0;name[i]!='\0';i++){
		char c=name[i];
		switch(c){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			vowel++;
			break;
			default:
				consonant++;
		}
	}
	printf("Total vowel is %d\n",vowel);
	printf("Total consonant is %d\n",consonant);
	return 0;
}
