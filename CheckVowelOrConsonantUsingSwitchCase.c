/* Write a C Program to check whether an inputted alphabet is an vowel or consonant using switch case ? */

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter an Alphabet :\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a': printf("The Inputted Alphabet %c is an Vowel \n",ch);
                  break;
        case 'e': printf("The Inputted Alphabet %c is an Vowel \n",ch);
                  break;
        case 'i': printf("The Inputted Alphabet %c is an Vowel \n",ch);
                  break;
        case 'o': printf("The Inputted Alphabet %c is an Vowel \n",ch);
                  break;
        case 'u': printf("The Inputted Alphabet %c is an Vowel \n",ch);
                  break;
        default: printf("The Inputted Alphabet %c is an Consonant \n",ch);
                  break;
    }
}
