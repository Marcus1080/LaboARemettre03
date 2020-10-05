//But:Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
//L’utilisateur a un maximum de 5 chances.Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
//100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
//nombre.
//Date: 04-10-2020
//Auteur: Marcus Asfaw


#include<iostream>//Pour inclure la bibliothèque

#include<time.h>

using namespace std;//Pour pas être obliger de rajouter std:: après chaque cout cin....


int main()//porte d'entrée du programme
{

	setlocale(LC_ALL, " ");

	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	//on créer cinq "guess" pour chacune des chances de l'utilisateur 
	int guess;
	int guess2;
	int guess3;
	int guess4;
	int guess5;
	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom


	cout << " Veuillez deviner le nombre generer entre 0 et 100 (vous avez 5 chances) --> ";//Premier message que l'utilisateur voit on demande de rentrer un chiffre
	cin >> guess;//Cin pour le chiffre choisis


	while (guess != iRandom && guess >= 0 && guess <= 100)//Si la réponse n'égale toujours pas au chiffre générer et est compris entre 0 et 100
	{
		cout << " Pas la bonne reponse 2ieme chance ! --> ";
		cin >> guess2;
		while (guess2 != iRandom && guess >= 0 && guess <= 100)//Ici on fait plusieurs boucles while pareille comme la première pour chacun des essaies
		{
			cout << " Pas la bonne reponse 3ieme chance ! --> ";//Pour chacune des 5 chances on vérifie et si ce n'est pas la bonne réponse on affiche ceci
			cin >> guess3; //avec le cin pour le numéro auquel nous sommes rendu 

			while (guess3 != iRandom && guess >= 0 && guess <= 100)// et on répète pour chacune des chances 
			{
				cout << " Pas la bonne reponse 4ieme chance ! --> "; //En changeant les chiffres pour chaque 
				cin >> guess4;

				while (guess4 != iRandom && guess >= 0 && guess <= 100)
				{
					cout << " Pas la bonne reponse Derniere chance ! --> ";
					cin >> guess5;

					while (guess5 != iRandom && guess >= 0 && guess <= 100) //Jusqu'a ce qu'on arrive au dernier while qui explique
					{
						cout << " Desolee ! vous avez pas reussi " << endl;//Qui nous reste plus de chance et que nous avons pas réussi
						system("pause");//suivi d'un système pause pour que l'utilisateur puisse lire le message 
						return 0; // et un return 0 pour quitter le programme
					}




				}




			}



		}



	}



	if (guess < 0 || guess > 100)//Si le chiffre entrer est plus petit que 0U plus grand que 100
	{
		cout << " Erreur veuillez entrer un chiffre compris entre 0 et 100! " << endl; //On affiche ce message d'erreur 
		system("pause");//Suivi par une pause 
		return 0;//pour ensuite sortir du programme
	}


	if (guess == iRandom)//Si l'utilisateur devine le chiffre générer
	{
		cout << " Bravo! vous avez devinez :) " << endl;//On affiche ce message qui explique qu'on a réussi
		system("pause");//et on sort du programme après une pause
		return 0; //(sort avec le return 0)
	}

	return 0;
}
/*
Plan de test :
somme :			résulat obtenue :						Vrai résultat:							 Vrai ou Faux :
40			    pas la bonne reponse					pas la bonne reponse						Vrai
	            2ieme chance							2ieme chance				
-20				Erreur veuillez entrer un				Erreur veuillez entrer un					Vrai
				chiffre compris entre 0 et 100			chiffre compris entre 0 et 100				
				
5000			Erreur veuillez entrer un				Erreur veuillez entrer un					Vrai
				chiffre compris entre 0 et 100			chiffre compris entre 0 et 100				
					
0			    pas la bonne reponse					pas la bonne reponse						Vrai
	            2ieme chance							2ieme chance				


*/