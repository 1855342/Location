//But : �crire un programme pour calculer le montant qu'un individu devra d�bourser pour faire un voyage dans une automobile lou�e. L'algorithme tient compte du kilom�trage
//         parcouru et de la dur�e du voyage qui sont soumises par le requ�rant. 
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

    //D�claration des constantes
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
        std::cout << "Les informations ne peuvent pas �tre n�gative" << std::endl << std::endl << std::endl;

     
    }


}


/*Plan de test
Nombre de journ�e          Kilom�tres(Km)          Totale($)
1                           0                      45
0                           0                      Message erreur
0                           500                    Message erreur
1                           500                    1007.5
1                           22                     65.90
*/