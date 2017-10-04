#include <stdlib.h>
#include <stdio.h>
#include <string.h>



void indentificateur(char *str){

	int taille;
//je vais retourner la taille de la chaine donné
	taille = strlen(str);
	int i=0;
	int verif = 0;

	// 1: avant de commecer je dois tester si la chaine entrer commence bien par une lettre
	if( ( (str[0] >= 'a') && (str[0] <= 'z') ) || ( (str[0]>='A') && (str[0]<='Z') ) ) {
		i++;
				while(i<taille){
						if((((str[i] >= 'a') && (str[i] <='z'))||((str[i] >= 'A')
							&& (str[i] <= 'Z'))||((str[i]>='0')&&(str[i]<='9')) || (str[i]<='-'))){
								i++;

						}else{
							// j'incrémente le i pr qu'il ne reste pas dans la boucle
							i++;
							// si verif !=0 ie que la chaine d'entré n'est pas verifié
							verif++;

						}

						}

//le teste pour les nombre ( soit il commence par un - soit par un + soit par un numéro)
	}else if((str[0] == '+')||(str[0] == '-')||((str[0]>= '0')&&(str[0]<='9'))){
		while(i<taille){
				if(((str[i]>='0')&&(str[i]<='9')) || (str[i] == '+')||(str[i] == '-')){
						i++;
				}
				else{
					i++;
					verif++;
				}

	}

	}

					// verdict
					if (verif == 0)
						printf(" VALIDE \n" );
					else
						printf("NON VALIDE ! \n" );
				}


					int main()
					{
						char entree[100];

						printf("\t\t ~~~~~~~~ AUTOMATE PAR Fatima YOUCEF~~~~~~~~  \n\n");
							printf("Veuillez entrez la chaine ou le numéro que vous souhaiter tester ");

							scanf("%s", entree);

							indentificateur(entree);

							return 0;
						}
