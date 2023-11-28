#include <stdio.h>

int main()
{
    int vector[5] = {11,13,17, 23 , 31};

    int* address = vector;

    printf ( "\nAddress[0] = %d\n\n", *address);

    printf ( "\nAddress[1] = %d\n\n", *address++);

    printf ("\n Address[2] = %d\n\n", *++address);

    printf ("\n \n What is happening here?");

    return 0;
} //should we leave anytime soon
//pourquoi c'est important?
//Non mais c'est pire aujourd'hui parce que j'ai que dormi 2heures.
//je suis dans un debat avec moi-meme sur ce qu'on devrait faire
//parce que je suis dans la merde a cause des devoirs mais aussi parce que je suis en retard dans le contenu des cours 
//Mais si je vais dans la librairie c'est pour faire les devoirs pour demain, pas pour rattraper les cours