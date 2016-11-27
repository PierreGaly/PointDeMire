#include <iostream>
#include <vector>

class SyntheseReponses
{
public:
    SyntheseReponses();
    void Assigner(std::string reponse);
    void AfficherBilan();
    void Resultat();
private:
    int rep1;
    int rep2;
    int rep3;
    int rep4;

};


using namespace std;

//Déclaration des variables réponses: c'est mal!
string reponse;

//Constructeur
SyntheseReponses::SyntheseReponses(){
    rep1 = rep2 = rep3 = rep4 = 0;
}

void SyntheseReponses::AfficherBilan(){
    std::cout << "nbRep1:" << rep1 << std::endl;
    std::cout << "nbRep2:" << rep2 << std::endl;
    std::cout << "nbRep3:" << rep3 << std::endl;
    std::cout << "nbRep4:" << rep4 << std::endl;
}

//Méthode assigner réponse
void SyntheseReponses::Assigner (string reponse) {
    if (reponse == "1") {
        rep1++;
    } else if (reponse == "2") {
        rep2++;
    } else if (reponse == "3") {
        rep3++;
    } else if (reponse == "4") {
        rep4++;
    } else {
        std::cout << "Non !" << std::endl;
    }
    return;

}

void SyntheseReponses::Resultat(){
    if (rep1 > rep2 || rep3 || rep4) {
        std::cout << "Vous etes Trump" << std::endl;
    } else if (rep2 > rep1 || rep3 || rep4) {
        std::cout << "Vous etes Obama" << std::endl;
    } else if (rep3 > rep1 || rep2 || rep4) {
        std::cout << "Vous etes Hollande" << std::endl;
    } else if (rep4 > rep1 || rep2 || rep3) {
        std::cout << "Vous etes un Gangster !" << std::endl;
}


//Affichage du résultat/ insérer dans la class
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
    SyntheseReponses sr;

    //Question 1
    std::cout << "Quelle est ta couleur préférée ?" << std::endl;
    std::cout << "1: Bleue" << std::endl;
    std::cout << "2: Rouge" << std::endl;
    std::cout << "3: Black" << std::endl;
    std::cout << "4: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    sr.Assigner(reponse);

    //Question 2
    std::cout << "Tu croises un Méxicain dans la rue:" << std::endl;
    std::cout << "1: Tu lui offre une Fajitas" << std::endl;
    std::cout << "2: T'appelle l'immigration" << std::endl;
    std::cout << "3: Tu continu ton chemin" << std::endl;
    std::cout << "4: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    sr.Assigner(reponse);

    //Question 3
    std::cout << "Selon toi l'environnement:" << std::endl;
    std::cout << "1: Important" << std::endl;
    std::cout << "2: C'est une grosse blague inventé par les chinnois" << std::endl;
    std::cout << "3: Rien foutre je roule en Hummer" << std::endl;
    std::cout << "4: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    sr.Assigner(reponse);

    //Question 4
    std::cout << "Es-tu la personne la plus intellignete dans la pièce ?" << std::endl;
    std::cout << "1: Je n'ai pas de temps a accorder a ça" << std::endl;
    std::cout << "2: Être intéligent c'est surfait" << std::endl;
    std::cout << "3: Bien sure" << std::endl;
    std::cout << "4: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    sr.Assigner(reponse);

    //Question 5
    std::cout << "Que choisit tu entre:" << std::endl;
    std::cout << "1: Le pouvoir" << std::endl;
    std::cout << "2: La peur" << std::endl;
    std::cout << "3: L'argent" << std::endl;
    std::cout << "4: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    sr.Assigner(reponse);

    //Question 6
    std::cout << "Lors d'un meeting un mec d'insulte de connard:" << std::endl;
    std::cout << "1: Tu va le voir pour savoir pourquoi il pense ça" << std::endl;
    std::cout << "2: Tu prend l'insulte avec le sourire mais tu t'arranges pour qu'on filme ta réaction" << std::endl;
    std::cout << "3: Tu essaye de savoir pourquoi il pense ça, car tu veux t'améliorer" << std::endl;
    std::cout << "4: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    sr.Assigner(reponse);

    //Question 7
    std::cout << "Tu es élu président, quelle est ta première action:" << std::endl;
    std::cout << "1: J'augmente mon salaire !" << std::endl;
    std::cout << "2: Je fais une grande en mon honneur" << std::endl;
    std::cout << "3: J'ouvre des usines de charbon et je baisse les impôts" << std::endl;
    std::cout << "4: Je sort mon .44 Magnum" << std::endl;
    std::cout << "Réponse:" << std::endl;

    cin >> reponse;
    sr.Assigner(reponse);

    sr.AfficherBilan();
    sr.Resultat();


}
