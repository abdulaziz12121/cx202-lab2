#include <stdio.h>

int main() {
	char ch; 
	printf("plase enter the character");
	scanf("%c",&ch);
	
	if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'|| ch=='o'||ch=='U'||ch=='u'){
	printf("it is a vowel");
	
	}
	else{
	printf("It is a consonant");
	}


    return 0;
}
