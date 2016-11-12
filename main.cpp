#include <iostream>
#include <vector>

using namespace std;

//Déclaration des variables réponses
string reponse;
int A;
int B;
int C;
int D;

//Assignantion de la réponse
int assignReponse (string reponse) {
    if (reponse == "A") {
        A++;
    } else if (reponse == "B") {
        B++;
    } else if (reponse == "C") {
        C++;
    } else if (reponse == "D") {
        D++;
    } else {
        std::cout << "Non !" << std::endl;
    }
}

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

    //Question 1
    std::cout << "Quelle est ta couleur préférée ?" << std::endl;
    std::cout << "A: Bleue" << std::endl;
    std::cout << "B: Rouge" << std::endl;
    std::cout << "C: Black" << std::endl;
    std::cout << "D: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    assignReponse(reponse);

    //Question 2
    std::cout << "Tu croises un Méxicain dans la rue:" << std::endl;
    std::cout << "A: Tu lui offre une Fajitas" << std::endl;
    std::cout << "B: T'appelle l'immigration" << std::endl;
    std::cout << "C: Tu continu ton chemin" << std::endl;
    std::cout << "D: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    assignReponse(reponse);

    //Question 3
    std::cout << "Selon toi l'environnement:" << std::endl;
    std::cout << "A: Important" << std::endl;
    std::cout << "B: C'est une grosse blague inventé par les chinnois" << std::endl;
    std::cout << "C: Rien foutre je roule en Hummer" << std::endl;
    std::cout << "D: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    assignReponse(reponse);

    //Question 4
    std::cout << "Es-tu la personne la plus intellignete dans la pièce ?" << std::endl;
    std::cout << "A: Je n'ai pas de temps a accorder a ça" << std::endl;
    std::cout << "B: Être intéligent c'est surfait" << std::endl;
    std::cout << "C: Bien sure" << std::endl;
    std::cout << "D: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    assignReponse(reponse);

    //Question 5
    std::cout << "Que choisit tu entre:" << std::endl;
    std::cout << "A: Le pouvoir" << std::endl;
    std::cout << "B: La peur" << std::endl;
    std::cout << "C: L'argent" << std::endl;
    std::cout << "D: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    assignReponse(reponse);

    //Question 6
    std::cout << "Lors d'un meeting un mec d'insulte de connard:" << std::endl;
    std::cout << "A: Tu va le voir pour savoir pourquoi il pense ça" << std::endl;
    std::cout << "B: Tu prend l'insulte avec le sourire mais tu t'arranges pour qu'on filme ta réaction" << std::endl;
    std::cout << "C: Tu essaye de savoir pourquoi il pense ça, car tu veux t'améliorer" << std::endl;
    std::cout << "D: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    assignReponse(reponse);

    //Question 7
    std::cout << "Tu es élu président, quelle est ta première action:" << std::endl;
    std::cout << "A: J'augmente mon salaire !" << std::endl;
    std::cout << "B: Je fais une grande en mon honneur" << std::endl;
    std::cout << "C: J'ouvre des usines de charbon et je baisse les impôts" << std::endl;
    std::cout << "D: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    assignReponse(reponse);

    std::cout << "A:" << A << std::endl;
    std::cout << "B:" << B << std::endl;
    std::cout << "C:" << C << std::endl;
    std::cout << "D:" << D << std::endl;





}