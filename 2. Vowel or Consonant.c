//2. Vowel or Consonant using switch case 
#include<stdio.h>
main()
{
	char vowel,consoant;
	printf("Enter your alpabet :");
	scanf("%c",&vowel);
	switch(vowel)
	{
		case 'a': printf("a is vowel number");
		    break;
		case 'e': printf("e is vowel number");
		    break;
		case 'i': printf("i is vowel number");
		    break;
		case 'o': printf("o is vowel number");
		    break;
		case 'u': printf("u is vowel number");
		    break;
		    default:printf("%c is consonent");
	}
}
