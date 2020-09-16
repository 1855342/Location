//But : Écrire un programme pour calculer le montant qu'un individu devra débourser pour faire un voyage dans une automobile louée. L'algorithme tient compte du kilométrage
//         parcouru et de la durée du voyage qui sont soumises par le requérant. 
//Auteur: Charles St-VIncent   
//Date: 20/09/16


#include <iostream>

int main()
{

    setlocale(LC_ALL, "");       
    //initialiser les variables 
    float kmt;
    int nbj;
    int loc;
    float ess;
    float resultat;

    //Déclaration des constantes
    loc = 45;
    ess = 0.95;


    std::cout << "Donne nous les km : ";
    std::cin >> kmt; 
    std::cout << "Veuillez entrer le nombre de jour : ";
    std::cin >> nbj;
    std::cout << std::endl;

    if(kmt >= 0 && nbj >= 1)
    {
        if (kmt / nbj <= 250)
        {
            std::cout << "Le prix : " << (nbj * loc) + (kmt * ess) << "$" << std::endl << std::endl << std::endl;
         
        }
        else
        {
            resultat = (nbj * loc) + (kmt * ess) + (kmt - nbj * 250 * 0.05);
            std::cout << "Le prix : " << resultat << "$" << std::endl << std::endl << std::endl;
        }
        
    
    }
        
    else
    { 
        std::cout << "Les informations ne peuvent pas être négative" << std::endl << std::endl << std::endl;

     
    }


}


/*Plan de test
Nombre de journée          Kilomètres(Km)          Totale($)
1                           0                      45
0                           0                      Message erreur
0                           500                    Message erreur
1                           500                    1007.5
1                           22                     65.90
*/