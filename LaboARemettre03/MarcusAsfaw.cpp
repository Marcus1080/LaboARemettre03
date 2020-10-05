//But:D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
//affiche son salaire
//Date: 03-10-2020
//Auteur: Marcus Asfaw


#include<iostream> //Pour la bibloth�que


using namespace std; //Pour pas �tre obliger d'�crire std:: a toute les commandes cout cin etc.

int main() { //Porte d'entr�e du programme

	setlocale(LC_ALL, " ");//Pour les caract�res accentu�s

	int vente; //Premi�re variable pour l'argent fait en vente
	float pourcentage = 7.5; //Variable pour le pourcentage que nous allons prendre des ventes totales


	cout << " 1- Quelle est la somme de vente cette semaine ? " << endl;//Premier cout qui demande le nombre d'argent en vente
	cout << " 2- Ou entre -1 pour quitter le programme -->  ";//Ou demande si on veut quitter le programme
	cin >> vente;//La r�ponse de l'utilisateur


	while (vente != -1 && vente > 0)//Un while pour dire que pendant que la somme d'argent des ventes est pas �gale a -1 et est plus grand que 0
	{
		cout << " Votre somme d'argent fait cette semaine sera de " << (vente / pourcentage) + 250 << " $ ";//Alors on fait le calcule pour trouver la somme d'argent en enlevant le pourcentage
		//                                                           et en rajoutant le 250.
		return 0; //On termine par un return 0 pour pas que la boucle continue a l'infini.
	}

	while (vente == -1) //Un autre while si jamais l'utilisateur entre -1 pour sortir du programme
	{
		cout << "D'accord bonne journn�e ! " << endl;//On affiche ce message
		system("pause");//fait une pause pour que l'utilisateur puisse prendre le temps de lire le message
		system("clear");//et on efface tout ce qui est a l'�cran
		return 0;// On fini avec un return 0 pour fermer le programme

	}
		
		return 0;
}
/*
Plan de test :
somme :			r�sulat obtenue :		Vrai r�sultat:     Vrai ou Faux : 
500				316.67$					316.67				Vrai
7000			1183.33$				1183.33$			Vrai
400				303.33$					303.33$				Vrai
4500			850						850					Vrai
-1				Affiche message			Affiche message		Vrai
				et sortie				et sortie				




*/