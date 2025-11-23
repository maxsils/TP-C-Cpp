# TP6-7

1. Classe Personne

La classe Personne contient les attributs nom, prénom, adresse et téléphone. Le constructeur initialise ces valeurs (avec valeurs par défaut pour adresse et téléphone). Des getters, setters et une méthode affiche() permettent d’accéder aux données et de les afficher. Cette classe sert de classe de base commune aux classes Eleve et Personnel.

2. Classe Eleve

La classe Eleve hérite publiquement de Personne et ajoute les attributs promotion, groupeDeTD et GPA. Elle possède un constructeur avec valeurs par défaut, des getters/setters et une méthode affiche(). L’héritage public est cohérent car un élève est une personne, et les méthodes de Personne sont réutilisées et complétées.

3. Classe Personnel

La classe Personnel hérite également de Personne et ajoute l’attribut salaire. Elle fournit une méthode calculsalaire() qui retourne ce salaire, ainsi que les getters, setters et la méthode affiche(). À ce stade, Personnel reste une classe concrète, et calculsalaire() est destinée à être redéfinie dans les sous-classes.

4. Classe PersonnelAdmin

PersonnelAdmin hérite de Personnel et ajoute les attributs heuresSup et taux. Elle redéfinit la méthode calculsalaire() en renvoyant salaire + heuresSup * taux. La méthode affiche() est également adaptée pour inclure ces attributs. L’objectif est de représenter le personnel administratif rémunéré en partie via des heures supplémentaires.

5. Classe EnseignantPermanent

EnseignantPermanent hérite de Personnel et ajoute bureau, grade et primeMensuelle. La méthode calculsalaire() est redéfinie pour renvoyer salaire + (grade * primeMensuelle) / 100. Chaque enseignant permanent reçoit ainsi un salaire de base plus une prime dépendant du grade.

6. Classe EnseignantVacataire

EnseignantVacataire hérite de Personnel et ajoute casier, nbHeures et taux. Elle redéfinit calculsalaire() pour renvoyer taux * nbreHeures. Le vacataire est payé à l’heure, indépendamment du salaire de base. La méthode affiche() est ajustée pour inclure ces informations.

7. Classe ListePersonnel

La classe ListePersonnel contient un tableau de pointeurs vers Personnel (tab[100]) et un entier nb. La méthode ajoutPersonnel() ajoute un nouvel élément si l’espace est disponible. La méthode afficherSalaires() affiche pour chaque élément son nom et le résultat de calculsalaire(). Le polymorphisme n’est pas encore activé tant que calculsalaire() n’est pas virtuelle.

8. Gestion dynamique du tableau

Pour rendre la liste dynamique, le tableau statique est remplacé par un tableau alloué dynamiquement et un attribut taille est ajouté. Lorsque nb atteint taille, la méthode doubleTableau() réalloue un tableau deux fois plus grand et recopie les éléments. L’ajout d’un nouvel élément vérifie donc nb < taille, et non plus une limite fixe de 100.

9. Fonction virtuelle

En testant calculsalaire() via un pointeur de type Personnel*, on observe deux comportements :
a: en appel direct, la méthode correspondant à la classe réelle de l'objet est utilisée ;
b: via un pointeur Personnel*, la méthode de Personnel est appelée.
Cela s’explique par l’absence de polymorphisme dynamique. En déclarant calculsalaire() comme virtuelle dans Personnel, l’appel via un pointeur de base utilisera désormais la version redéfinie dans la classe dérivée.

10. Classe abstraite

La classe Personnel doit être abstraite car elle ne représente pas un type d’employé réel : tout salarié appartient à l’une des classes dérivées. Pour cela, calculsalaire() est déclarée virtuelle pure (= 0). Personnel devient non-instanciable, ce qui correspond à son rôle de classe commune abstraite aux trois types de salariés.

