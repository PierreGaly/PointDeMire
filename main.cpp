#include <iostream>
#include <vector>

using namespace std;

//Affichage du résultat
int max(int reponses[], int length)
{
    int max = reponses[0];

    for(int i = 1; i < 4; i++)
    {
        if(reponses[i] > max)
            max = reponses[i];
    }
    return max;
}

int main() {
    const int nb_reponses = 4;
    int reponses[nb_reponses];

    std::cout << "Quelle est ta couleur préférée ?" << std::endl;

    int answer;
    int question;

    cin >> answer;
    cout << answer << endl;

    //Récupération de la valeur max depuis la fonction max
    max(reponses, 4);



}