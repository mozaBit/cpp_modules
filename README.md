## cpp_modules
#### Documentation et solutions des exercices C++ de l'école 42.


* Ce repo est dédié à la documentation et aux solutions des sujets C++ de l'école 42. Vous y trouverez une collection de ressources visant à faciliter la compréhension du langage C++ ainsi que des solutions pratiques pour les exercices et projets enseignés dans le cadre du programme. Que vous soyez étudiant cherchant à approfondir vos connaissances ou simplement curieux d'en apprendre davantage sur le C++, ce dépôt est fait pour vous. N'hésitez pas à explorer, contribuer et partager vos propres solutions !

### Authors

Ce projet a été réalisé par [Bamhammed METEHRI](https://github.com/mozaBit)

[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/bamhammedmetehri)
[![gmail](https://img.shields.io/badge/Gmail-EA4335?style=for-the-badge&logo=gmail&logoColor=white)](mailto:Bamhammedmetehri@gmail.com)


## Déclaration des variables en C++

En C++, la déclaration des variables permet de définir des espaces en mémoire pour stocker des données. Il existe deux manières principales de déclarer une variable :

#### Déclaration simple de la variable :
```c++
<type_de_la_variable> <nom_de_la_variable>;

int a;
```

#### Déclaration et initialisation de la variable :
```c++
<type_de_la_variable> <nom_de_la_variable> = <valeur_de_la_variable>;

int a = 42;
```

#### Remarques:

- Le nom de la variable doit respecter les règles d'identification de C++. Il ne peut pas commencer par un chiffre et ne peut contenir que des lettres, des chiffres, des traits de soulignement (_) et des caractères accentués.
- Le type de la variable doit être un type de données valide en C++, tels que int, float, char, double, etc.
- Il est recommandé d'initialiser les variables lors de leur déclaration pour éviter qu'elles ne contiennent des valeurs indéterminées.
En suivant ces directives, vous pouvez déclarer et utiliser efficacement des variables dans vos programmes C++.
- Une variable ne peut pas etre utilise sans avoir etre declare et initialize prealablement.

--------------------------------------------------------------------------------------------------------------------------------


## La syntaxe des fonctions en C++

En C++, il existe deux manières de déclarer des fonctions :

### Ancienne syntaxe (héritée du C) :
```
<type_de_retour> <nom_de_la_fonction>(<liste_des_paramètres>);

```
```c++
int main(int argc, char* argv[]);
```

### Nouvelle syntaxe (introduite par C++11) :
```
auto <nom_de_la_fonction>(<liste_des_paramètres>) -> <type_de_retour>;
```
```c++
auto main(int argc, char* argv[]) -> int;
```
#### Remarques:
- La déclaration d'une fonction doit précéder son utilisation.
- Il est possible d'omettre le mot-clé auto si le type de retour peut être déduit du contexte.
- Les paramètres formels de la fonction doivent correspondre aux arguments lors de l'appel.
- Le mot-clé auto introduit dans C++11 permet de déduire automatiquement le type d'une variable ou du résultat d'une expression.

--------------------------------------------------------------------------------------------------------------------------------

## L'inférence de type de variable en C++ :
Le C++ permet de déduire automatiquement le type d'une variable lors de sa déclaration grâce au mot-clé `auto`. Cette fonctionnalité, introduite en C++11, améliore la lisibilité et la concision de votre code.

```c++
	int		age = 42;
	std::string	hello{ "hello Wrold, c++\n" }; // c++11
	int		a{ 43 }; // c++11
	int		b{ 444 }; // c++11
	int		k( a );
```

```c++
	auto		age = 42;
	auto 		hello{ "hello Wrold, c++\n" };
	auto		a{ 43 };
	auto		b{ 444 };
	auto		k( a );
```
#### Remarques:
Dans les deux cas, les variables `age` et `hello` ont respectivement le type `int` et `std::string`. En utilisant `auto`, on évite de répéter le type explicitement, ce qui peut être utile pour les types longs ou complexes.

Cependant, il y a quelques points à garder à l'écart :

- **Lisibilité:** Si le type déduit par le compilateur n'est pas évident, il peut être préférable d'être explicite pour améliorer la clarté du code.
- **Cas complexes:** `auto` peut parfois mener à des types de variables imbriqués et difficiles à lire. Dans ce cas, il vaut mieux expliciter le type.


--------------------------------------------------------------------------------------------------------------------------------

## Types de données fondamentaux en C++ :
En C++, les types de données fondamentaux constituent la base pour la manipulation des données élémentaires. Ils représentent des valeurs simples et sont utilisés pour construire des types de données plus complexes.

### Types entiers:
- `char`: Un caractère sur un octet, avec des valeurs possibles de 0 à 255 (incluant le caractère nul '\0').
```c++
char			a = 'A';
```
   - `signed char`: Peut représenter des entiers signés dans la plage [-128, 127].
```c++
signed char		sa = -42;
```
   - `unsigned char`: Peut représenter des entiers non signés dans la plage [0, 255].
```c++
unsigned char	ua = 42;
```
- `short int`: Un entier court sur 16 bits, avec une plage de valeurs typique de [-32768, 32767].
```c++
short int		si = 42;
```
- `int`: Un entier sur 32 bits, avec une plage de valeurs typique de [-2147483648, 2147483647].
```c++
int				i = 42;
```
- `long int`: Un entier long sur 32 bits, avec une plage de valeurs typique de [-2147483648, 2147483647]. (Identique à int sur la plupart des plateformes modernes).
```c++
long int		li = 42;
```
- `long long int`: Un entier long long sur 64 bits, avec une plage de valeurs typique de [-9223372036854775808, 9223372036854775807].
```c++
long long int	lli = 42;
```

### Types à virgule flottante:

- `float`: Un nombre à virgule flottante simple précision sur 32 bits, pouvant représenter des valeurs approximatives avec une plage typique de [-3.402823e+38, 3.402823e+38].
```c++
float	ff = 2.1f;
```
- `double`: Un nombre à virgule flottante double précision sur 64 bits, pouvant représenter des valeurs approximatives avec une plage typique de [-1.797693e+308, 1.797693e+308].
```c++
double	df = 14.3;
double	edf = 1e5;
double	edf2 = 1e-4;
```
- `long double`: Un nombre à virgule flottante étendue précision sur 80 bits (selon l'implémentation), offrant une plus grande précision que `float` et `double`
```c++
long double	ldf = 12.2;
```
### Types booléens:
- `bool`: Représente une valeur booléenne, true ou false. Utilisé pour les tests de condition et la logique booléenne.
```c++
bool	boolean = true;
```
### Types de caractères étendus:

- `wchar_t`: Un caractère sur 16 bits, permettant de représenter des caractères beyond the ASCII table, comme les caractères accentués ou les symboles Unicode.
```c++
wchar_t	sfd = 'B';
```
- `char16_t`: Un caractère Unicode sur 16 bits, conforme à la norme UTF-16.
```c++
char16_t	c16;
```
- `char32_t`: Un caractère Unicode sur 32 bits, conforme à la norme UTF-32.
```c++
char32_t	c32;
```
#### Remarques:
- La taille et la plage de valeurs des types de données peuvent varier en fonction de la plateforme et de l'implémentation du compilateur.
-

--------------------------------------------------------------------------------------------------------------------------------

## Transtypages en C++ :
En C++, le transtypage permet de convertir explicitement une valeur d'un type vers un autre. Voici les différents types de transtypages en C++:

### Cast Explicite :
- Le cast explicite permet de convertir une valeur d'un type vers un autre type, sans aucune vérification.
```c++
int	nbr = 13;
float nbrf = (float) nbr;
```

### stitic_cast :
- `static_cast` permet des conversions sûres entre types compatibles. Il effectue des vérifications au moment de la compilation pour s'assurer que la conversion est possible. Utilisez-le pour les conversions "logiques" entre types étroitement liés.

```c++
char	charactere = 'c';
int		asccii_val = static_cast<int>charactere; // c++11

```

### const_cast :
- `const_cast` permet de modifier l'attribut const d'un pointeur ou d'une référence. Attention, cela peut entraîner un comportement indéfini si vous essayez de modifier une variable constante.

```c++
int			nombre = 132;
const int*	pointeurConstante = &nombre;
int*		pointeurModifiable = const_cast<int*>(pointeurConstante); // c++11
*pointeurModifiable = 20; // Modifie la valeur de la variable 'nombre', ce qui peut être dangereux

```
### dynamic_cast :
- `dynamic_cast` est utilisé pour les conversions entre classes et leurs classes dérivées dans une hiérarchie d'héritage. Il effectue une vérification dynamique au moment de l'exécution pour s'assurer que la conversion est possible.
```c++
class Animal { /* ... */ };
class Chat : public Animal { /* ... */ };

Animal* animal = new Chat;
Chat* chat = dynamic_cast<Chat*>(animal); // c++11
```

### reinterpret_cast :
- `reinterpret_cast` effectue une conversion de bits brute d'un type à un autre. Il ne tient pas compte de la compatibilité des types et peut entraîner des comportements inattendus et dangereux.

```c++
int nombre = 10;
char* pointeurCaractere = reinterpret_cast<char*>(nombre); // pointeurCaractere pointe vers les octets de la représentation mémoire de 'nombre'

```
#### Remarques:
- Il est important de l'utiliser (le transtypage) avec précaution car il peut entraîner des erreurs si la conversion n'est pas valide.

--------------------------------------------------------------------------------------------------------------------------------

## les cycles de vie des variables :
En C++, le cycle de vie d'une variable dépend du type de mémoire dans laquelle elle est stockée.

### Variables statiques :
Les variables statiques sont des variables globales déclarées en dehors des fonctions. Elles sont accessibles à tous les blocs de code du programme. Leur cycle de vie s'étend sur toute la durée d'exécution du programme.
```c++
int g_variable_globale = 42; // Déclaration d'une variable statique

void maFonction() {
  // g_variable_globale est accessible ici
}

```

### Variables automatiques :
Les variables automatiques sont des variables déclarées de manière statique dans les fonctions. Leur cycle de vie est lié à la portée de la fonction dans laquelle elles sont déclarées. Elles sont créées lors de l'entrée dans la fonction et détruites à la sortie de la fonction.
```c++
void maFonction() {
  int variable_automatique = 21; // Déclaration d'une variable automatique
}

// variable_automatique n'est pas accessible en dehors de maFonction

```

### Variables dynamiques :
Les variables dynamiques sont des variables dont la mémoire est allouée dynamiquement pendant l'exécution du programme. Elles sont généralement stockées dans le tas (heap). Leur cycle de vie n'est pas lié à une portée particulière et elles doivent être désallouées explicitement à l'aide de l'opérateur `delete`.

```c++
int* nbr_ptr = new int(42); // Allocation dynamique de mémoire pour une variable
// nbr_ptr pointe vers une variable stockée dans le tas

delete nbr_ptr; // Désallocation de la mémoire allouée à la variable

```

#### Remarques:
- Il est important de bien gérer la mémoire allouée dynamiquement pour éviter les fuites de mémoire.

--------------------------------------------------------------------------------------------------------------------------------

## Manipulation des Tableaux en C++:
En C++, les tableaux sont des structures de données qui permettent de stocker une collection d'éléments du même type. La syntaxe pour déclarer, initialiser et manipuler des tableaux en C++ est similaire à celle du langage C, avec quelques ajouts introduits en C++11.

#### Déclaration des tableaux:

##### Déclaration classique:
La manière la plus simple de déclarer un tableau en C++ est d'utiliser la syntaxe suivante:
```c++
type_donnees nom_tableau[taille];
```
Où:
- **type_donnees** est le type des éléments du tableau (par exemple, int, float, char).
- **nom_tableau** est le nom du tableau.
- **taille** est la taille du tableau, c'est-à-dire le nombre d'éléments qu'il peut contenir.

Par exemple, la déclaration suivante crée un tableau nommé `tab` pouvant stocker `255` entiers:
```c++
int	tab[255];
```
##### Déclaration avec std::array (C++11):
En C++11, une nouvelle fonctionnalité a été introduite pour la gestion des tableaux : la classe `std::array`. Cette classe offre des fonctionnalités supplémentaires par rapport aux tableaux classiques, telles que la vérification de la taille du tableau à l'exécution et l'accès aux éléments par des itérateurs.

Pour déclarer un tableau avec `std::array`, on utilise la syntaxe suivante:
```c++
#include <array>

std::array<type_donnees, taille> nom_tableau;
```

```c++
#include <array>

std::array<int, 6> tab;
int	taille = tab.size(); // c++11
```
Par exemple, la déclaration suivante crée un tableau nommé `tab` pouvant stocker 6 entiers à l'aide de `std::array`:

#### Initialisation des tableaux:

##### Initialisation individuelle:
Les éléments d'un tableau peuvent être initialisés individuellement en affectant des valeurs à chaque élément en utilisant son indice entre crochets. Par exemple:
```c++
int tab[5]

tab[0] = 10;
tab[1] = 20;
tab[2] = 30;
tab[3] = 40;
tab[4] = 50;
```

Cette déclaration crée un tableau `tab` de 5 entiers et initialise ses éléments avec les valeurs 10, 20, 30, 40 et 50.

##### Initialisation par liste de valeurs (C++11):
En C++11, il est possible d'initialiser un tableau en utilisant une liste de valeurs entre accolades, sans avoir à spécifier explicitement la taille du tableau. La taille du tableau sera déduite automatiquement en fonction du nombre de valeurs dans la liste. Par exemple:
```c++
int tab[] = {10, 20, 30, 40, 50};
```

Cette déclaration est équivalente à la déclaration précédente avec la taille explicite.

#### Accès aux éléments d'un tableau:
On accède aux éléments d'un tableau en utilisant son nom suivi de l'indice de l'élément entre crochets. L'indice commence à 0, donc pour accéder au premier élément du tableau, on utilise l'indice 0, pour le deuxième élément, l'indice 1, et ainsi de suite. Par exemple:

```c++

```

On peut également utiliser l'opérateur `ptr` pour accéder aux éléments d'un tableau. L'expression `tab + indice` renvoie un pointeur vers l'élément d'indice `indice`. En déréférençant ce pointeur avec l'opérateur `*`, on obtient la valeur de l'élément. Par exemple:


```c++
int tab[5] = {10, 20, 30, 40, 50};

int premier_element = *(tab + 0); // premier_element vaut 10
int dernier_element = *(tab + 4); // dernier_element vaut 50
```

#### Remarques :
- La taille d'un tableau déclaré statiquement ne peut pas être modifiée pendant l'exécution du programme.
- Il est important de ne pas dépasser la taille du tableau lors de l'accès aux éléments, car cela peut entraîner des dépassements de mémoire et des comportements non désirés.
- les tableaux dynamiques, que nous verrons plus tard, permettent d'allouer la mémoire de manière dynamique pendant l'exécution du programme. Cela offre plus de flexibilité, mais nécessite une gestion manuelle de la mémoire à l'aide d'opérateurs comme `new` et `delete` pour éviter les fuites de mémoire.
- Les tableaux en C++ peuvent être multidimensionnels, ce qui signifie qu'ils peuvent stocker une collection d'éléments organisés en plusieurs dimensions, comme des lignes et des colonnes dans une matrice.


--------------------------------------------------------------------------------------------------------------------------------


## Les enum et les enum class en C++:
En C++, les énumérations (enum) et les énumérations avec classe (enum class) permettent de créer des types de données définis par l'utilisateur pour représenter un ensemble de valeurs constantes nommées. Elles offrent un moyen d'améliorer la lisibilité et la maintenabilité du code en remplaçant des valeurs numériques par des noms significatifs.


#### Déclaration d'une énumération:
La syntaxe de base pour déclarer une énumération est la suivante:
```c++
enum nom_enumeration {
  valeur1,
  valeur2,
  ...
  valeurN
};

```
Où:
- `nom_enumeration` est le nom de l'énumération.
- `valeur1`, `valeur2`, ..., `valeurN` sont les identificateurs (noms) des valeurs constantes de l'énumération.

Par exemple, la déclaration suivante crée une énumération nommée `Jour` pour représenter les jours de la semaine:

```c++
enum Jour { LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE };
```
#### Utilisation d'une énumération:
Une fois déclarée, une énumération peut être utilisée pour déclarer des variables, passer des arguments à des fonctions et effectuer des comparaisons. Les valeurs d'une énumération sont généralement représentées par des entiers, en commençant par 0 pour la première valeur et en augmentant de 1 pour chaque valeur suivante.

Par exemple, le code suivant déclare une variable `jour` de type `Jour` et lui affecte la valeur `LUNDI`:
```c++
Jour jour = LUNDI;
```
On peut également utiliser les opérateurs de comparaison pour comparer des valeurs d'énumération:

```c++
if (jour == LUNDI) {
  std::cout << "C'est lundi !" << std::endl;
}
```

### Enum class:
Introduite en C++11, l'énumération avec classe (`enum class`) offre des fonctionnalités supplémentaires par rapport aux énumérations classiques:

* **Portée forte**: Les noms des valeurs d'énumération sont protégés dans leur propre espace de noms, ce qui évite les conflits de noms avec d'autres identificateurs dans le même portée.
* **Type fort**: Les valeurs d'énumération sont considérées comme un type distinct, ce qui permet de les utiliser avec des modèles et des algorithmes génériques.
* **Sécurité des conversions**: Les conversions implicites entre les valeurs d'énumération et les entiers sont interdites, ce qui permet d'éviter les erreurs de type involontaires.

La syntaxe pour déclarer une énumération avec classe est similaire à celle d'une énumération classique, mais avec le mot-clé class ajouté:

```c++
enum class Jour { LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE };
```
L'utilisation d'une énumération avec classe est similaire à celle d'une énumération classique:

```c++
Jour jour = Jour::LUNDI;

if (jour == Jour::LUNDI) {
  std::cout << "C'est lundi !" << std::endl;
}
```

#### Remraques :
- Les énumérations classiques et les énumérations avec classe sont compatibles entre elles.
- Il est généralement recommandé d'utiliser des énumérations avec classe pour les nouveaux projets C++ en raison de leurs avantages en matière de sécurité et de lisibilité du code.

--------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------



--------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------


## L'instruction IF et ELSE en C++
En C++, Les instructions `if` et `else` sont des éléments fondamentaux du contrôle du flux d'un programme en C++. Elles permettent aux programmeurs d'exécuter différents blocs de code en fonction de conditions spécifiques. Elles sont essentielles pour prendre des décisions et orienter le chemin d'exécution du programme.

### Instruction if de base:
L'instruction `if` de base a la syntaxe suivante :
```c++
if (expression_booléenne) {
  // Code à exécuter si la condition est vraie
}
```
Dans cette structure, l'expression_booléenne est évaluée. Si elle donne true (`vrai`), le bloc de code entre les accolades (`{}`) est exécuté. Si l'expression_booléenne donne false (`faux`), le bloc de code est ignoré.

#### Exemple :
```c++
int age = 25;

if (age >= 18) {
  std::cout << "Vous êtes un adulte." << std::endl;
}
```
Dans cet exemple, si la valeur de `age` est 18 ou plus, l'instruction `std::cout << "Vous êtes un adulte." << std::endl;` sera exécutée, indiquant que la personne est adulte.

### Instruction else:
L'instruction `else` est utilisée conjointement avec l'instruction `if` pour fournir un bloc de code alternatif à exécuter lorsque la condition `if` est `false` (fausse).

```c++
if (expression_booléenne) {
  // Code à exécuter si la condition est vraie
} else {
  // Code à exécuter si la condition est fausse
}
```

#### Exemple :
```c++
int age = 15;

if (age >= 18) {
  std::cout << "Vous êtes un adulte." << std::endl;
} else {
  std::cout << "Vous êtes mineur." << std::endl;
}
```
Dans cet exemple, si la valeur de `age` est inférieure à 18, l'instruction `std::cout << "Vous êtes mineur." << std::endl;` sera exécutée, indiquant que la personne est mineure.

### Instruction else if:
L'instruction `else if` permet d'effectuer des vérifications conditionnelles multiples au sein d'un bloc if. Elle a la syntaxe suivante :

```c++
if (condition1) {
  // Code à exécuter si condition1 est vraie
} else if (condition2) {
  // Code à exécuter si condition2 est vraie
} else {
  // Code à exécuter si aucune des conditions n'est vraie
}
```
Dans cette structure, `condition1` est évaluée en premier. Si elle donne `true` (vrai), le bloc de code correspondant est exécuté, et les instructions `else if` et `else` restantes sont ignorées. Si `condition1` est `false` (faux), la condition `else if` suivante (`condition2`) est évaluée, et ainsi de suite. Si aucune des conditions n'est `true` (vraie), le bloc `else` final est exécuté.

#### Exemple :
```c++
int note = 85;

if (note >= 90) {
  std::cout << "Mention A" << std::endl;
} else if (note >= 80) {
  std::cout << "Mention B" << std::endl;
} else if (note >= 70) {
  std::cout << "Mention C" << std::endl;
} else {
  std::cout << "Échec" << std::endl;
}
```
Dans cet exemple, en fonction de la valeur de `note`, la mention correspondante sera affichée.

--------------------------------------------------------------------------------------------------------------------------------

## Le mot-clé switch en C++:
Le mot-clé `switch` en C++ permet d'exécuter un bloc de code spécifique en fonction de la valeur d'une expression. Il offre une alternative plus structurée aux instructions `if imbriquées` pour gérer des choix multiples.

```c++
switch (expression) {
  case valeur1:
    // Code à exécuter si l'expression correspond à valeur1
    break;
  case valeur2:
    // Code à exécuter si l'expression correspond à valeur2
    break;
  ...
  default:
    // Code à exécuter si aucune valeur ne correspond
}
```
#### Explication :
* `expression`: Une expression dont la valeur sera comparée aux valeurs des case.
* `case`: Des blocs de code spécifiques à exécuter en fonction de la valeur correspondante de l'expression.
* `break`: Indique la fin d'un bloc case et empêche l'exécution des blocs suivants.
* `default`: Un bloc de code optionnel à exécuter si aucune valeur case ne correspond.

### Exemple :
```c++
int jour = 3;

switch (jour) {
  case 1:
    std::cout << "Lundi" << std::endl;
    break;
  case 2:
    std::cout << "Mardi" << std::endl;
    break;
  case 3:
    std::cout << "Mercredi" << std::endl;
    break;
  case 4:
    std::cout << "Jeudi" << std::endl;
    break;
  case 5:
    std::cout << "Vendredi" << std::endl;
    break;
  case 6:
    std::cout << "Samedi" << std::endl;
    break;
  case 7:
    std::cout << "Dimanche" << std::endl;
    break;
  default:
    std::cout << "Jour invalide" << std::endl;
}
```
Dans cet exemple, le programme affichera le jour de la semaine correspondant à la valeur de la variable jour.Dans cet exemple, le programme affichera le jour de la semaine correspondant à la valeur de la variable jour.

#### Avantages du `switch`:
- Structure claire et organisée pour gérer des choix multiples.
- Plus lisible et plus facile à maintenir que les if imbriquées pour des cas complexes.
- Exécution plus efficace grâce au saut direct au bloc correspondant.

#### Remarques :

* Le `break` est **crucial** après chaque bloc case pour éviter l'exécution des blocs suivants.
* Le `default` est facultatif mais recommandé pour gérer les valeurs non attendues.
* Le `switch` peut également être utilisé avec des chaînes de caractères et des énumérations.


--------------------------------------------------------------------------------------------------------------------------------

## Les boucles WHILE en C++:
En C++, les boucles `while` **permettent d'exécuter un bloc de code de manière répétée** tant qu'une condition donnée reste vraie. Elles sont utiles pour des tâches répétitives ou des itérations basées sur une condition.

#### Syntaxe de base:
```c++
while (condition) {
  // Code à exécuter tant que la condition est vraie
}
```
- `condition`: Une expression booléenne qui détermine la poursuite de l'itération de la boucle.
- `Code à exécuter`: Le bloc de code à répéter tant que la condition est vraie.

#### Exemple:
```c++
int i = 0;

while (i < 10) {
  std::cout << i << " ";
  i++;
}
```
Dans cet exemple, la boucle affichera les nombres de 0 à 9 inclusivement. La condition `i < 10` devient fausse après la dixième itération, ce qui entraîne la sortie de la boucle.

#### Remarques:

- La condition est évaluée avant chaque itération de la boucle.
- La boucle s'exécute tant que la condition est vraie.
- Il est crucial d'éviter les boucles infinies en s'assurant que la condition change et finit par devenir fausse.
- Les boucles while sont souvent utilisées avec des compteurs ou des itérations basées sur des conditions.

--------------------------------------------------------------------------------------------------------------------------------

## Les boucles FOR en C++:
En C++, Les boucles `for` (comme les boucles `while`) permettent d'exécuter un bloc de code de manière répétée, généralement pour un nombre défini d'itérations ou pour parcourir des séquences de données. Elles offrent une structure concise et efficace pour les boucles itératives.

#### Syntaxe de base:
```c++
for (initialisation; condition; incrémentation) {
  // Code à exécuter à chaque itération
}
```

- `initialisation`: Expression initialisée avant la boucle.
- `condition`: Expression booléenne évaluée avant chaque itération. La boucle s'exécute tant que la condition est vraie.
- `incrémentation`: Expression exécutée après chaque itération.
- `Code à exécuter`: Le bloc de code à répéter à chaque itération.

#### Exemples:
```c++
for (int i = 0; i < 10; i++) {
  std::cout << i << " ";
}
```
Dans cet exemple, la boucle affichera les nombres de 0 à 9 inclusivement. L'initialisation `int i = 0` définit une variable de comptoir `i` à 0. La condition `i < 10` vérifie si `i` est inférieur à 10. L'incrémentation `i++` augmente la valeur de `i` de 1 après chaque itération.

### Boucle `for` étendue:
```c++
for (type_variable nom_variable : expression_range) {
  // Code à exécuter pour chaque élément de la plage
}
```
- `type_variable:` Type de la variable d'itération.
- `nom_variable:` Nom de la variable d'itération.
- `expression_range:` Expression définissant la plage d'éléments à parcourir.

#### Exemple:
```c++
std::string prenoms[] = {"Alice", "Bob", "Charlie"};

for (std::string prenom : prenoms) {
  std::cout << prenom << " " << std::endl;
}
```
Dans cet exemple, la boucle affichera chaque prénom du tableau `prenoms`. La variable d'itération `prenom` de type `std::string` parcourt chaque élément du tableau.

#### Remarques:

- Les trois parties de la boucle `for` (initialisation, condition, incrémentation) peuvent être omises ou modifiées selon les besoins.
- Les boucles `for` sont souvent utilisées pour parcourir des tableaux, des listes ou d'autres séquences de données.
- Elles offrent une structure plus concise et plus lisible pour les itérations prévisibles.

--------------------------------------------------------------------------------------------------------------------------------

## Les mots-clés `break` et `continue` et `return` en C++:
En C++ les mots-clés `break` et `continue` et `return` **sont utilisés pour contrôler le flux d'exécution des boucles en C++**. Ils permettent de modifier le comportement normal des boucles en fonction de conditions spécifiques.

1. `break`:
	* **Fonctionnement**:
		- Fait sortir de la boucle en cours d'exécution.
		- Transfère le contrôle du programme à l'instruction suivant la boucle.
	* **Utilisations**:
		- Sortir d'une boucle lorsqu'une condition spécifique est rencontrée.
		- Quitter une boucle itérative avant la fin de la séquence.
	* **Exemple**:
```c++
for (int i = 0; i < 10; i++) {
  if (i == 5) {
    break; // Sortir de la boucle lorsque i atteint 5
  }
  std::cout << i << " ";
}
```

2. `continue`:
	* **Fonctionnement**:
		- Omet l'itération actuelle de la boucle en cours..
		- Passe à l'itération suivante de la boucle.
	* **Utilisations**:
		- Ignorer certaines itérations spécifiques dans une boucle.
		- Exécuter uniquement certaines parties d'une boucle.
	* **Exemple**:
```c++
for (int i = 0; i < 10; i++) {
  if (i % 2 == 0) {
    continue; // Ignorer les itérations pour les nombres pairs
  }
  std::cout << i << " ";
}
```

3. `return`:
	* **Fonctionnement**:
		- Fait sortir de la fonction en cours d'exécution.
		- Transfère le contrôle du programme à l'instruction qui a appelé la fonction.
		- **Peut optionnellement renvoyer une valeur** à la fonction appelante.
	* **Utilisations**:
		- Signaler la fin de l'exécution d'une fonction.
		- Renvoyer des données ou des résultats d'une fonction.
		- Quitter une fonction prématurément en cas d'erreur ou de condition spécifique.
	* **Exemple**:
```c++
int calcul_fact(int n) {
  if (n == 0) {
    return 1; // Renvoyer 1 si n est 0
  }
  return n * calcul_fact(n - 1); // Renvoyer le factoriel de n
}
```

#### Remarques:

- `break` et `continue` s'utilisent uniquement dans les boucles.
- `return` s'utilise dans les fonctions et les boucles.
- L'utilisation de `return` avec une valeur implique de la recevoir dans la fonction appelante.

--------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------



--------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------

## Les fonctions en C++:
Les fonctions sont des blocs de code réutilisables qui effectuent des tâches spécifiques. Elles permettent d'organiser le code, de le rendre plus modulaire et d'éviter les redondances.

### Déclaration d'une fonction:
La déclaration d'une fonction indique au compilateur le nom de la fonction, le type de retour et les paramètres attendus. Elle permet d'utiliser la fonction avant sa définition complète.

#### Syntaxe de base:
```c++
type_retour nom_fonction(liste_parametres);
auto nom_fonction(liste_parametres) -> type_retour; //c++11
```
#### Exemple:
```c++
int additionner(int a, int b); // Déclaration de la fonction "additionner"
auto additionner(int a, int b) -> int; //c++11
```

### Définition d'une fonction:
La définition d'une fonction fournit le corps du code qui sera exécuté lorsque la fonction est appelée. Elle comprend les instructions nécessaires pour accomplir la tâche de la fonction.

#### Syntaxe de base:
```c++
type_retour nom_fonction(liste_parametres) {
  // Corps de la fonction
  return valeur_retour;
}
```
#### Exemple:
```c++
int additionner(int a, int b) {
  return a + b; // Définition de la fonction "additionner"
}
```

### Fonctions membre (méthodes):
Les fonctions membre, appelées aussi méthodes, sont des fonctions associées à une classe ou à un objet. Elles permettent d'accéder aux données membres et d'opérer sur l'état de l'objet.


#### Déclaration et définition:
```c++
class NomClasse {
public:
  type_retour nom_methode(liste_parametres); // Déclaration
  // ...
  type_retour nom_methode(liste_parametres) {
    // Corps de la méthode
    // ...
  } // Définition
};
```

#### Exemple:
```c++
class Point {
public:
  int x, y;
  double distanceOrigine() { // Déclaration de la méthode "distanceOrigine"
    return sqrt(x * x + y * y); // Définition de la méthode
  }
};
```
#### Utilisation:
```c++
Point p1(3, 4);
double distance = p1.distanceOrigine(); // Appel de la méthode
```

#### Remarques:
- Une fonction peut être déclarée plusieurs fois, mais définie une seule fois.
- Les fonctions membre peuvent accéder aux données membres de la classe.
- Les fonctions non-membres n'ont pas d'accès direct aux données membres des classes.
- Le choix entre une fonction membre et une fonction non-membre dépend de la relation avec les données et la classe.

--------------------------------------------------------------------------------------------------------------------------------

## Surcharge de fonctions, Passage de paramètres et Types de paramètres en C++:

**En C++, La surcharge de fonctions permet de créer plusieurs fonctions avec le même nom mais des paramètres ou des types de retour différents.** Cela offre une flesxibilité et une lisibilité accrues au code.

### Syntaxe de base:
```c++
type_retour nom_fonction(liste_parametres1);
type_retour nom_fonction(liste_parametres2);
...
```
### Exemple:
```c++
int additionner(int a, int b); // Surcharge pour des entiers
double additionner(double a, double b); // Surcharge pour des flottants
```

### Passage de paramètres:
Lorsqu'une fonction est appelée, des valeurs sont transmises aux paramètres de la fonction. Le passage de paramètres peut se faire de différentes manières:

1. Passage par valeur:
- La valeur réelle de l'argument est copiée dans le paramètre de la fonction.
- Toute modification apportée au paramètre n'affecte pas l'argument d'origine.

#### Exemple:
```c++
void echanger(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

int x = 5, y = 10;
echanger(x, y); // x est toujours 5, y est toujours 10
```

2. Passage par pointeur:
- L'adresse mémoire de l'argument est transmise à la fonction.
- La fonction peut modifier la valeur de la variable d'origine en utilisant l'adresse mémoire.

#### Exemple:
```c++
void echanger(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int x = 5, y = 10;
echanger(&x, &y); // x vaut maintenant 10, y vaut maintenant 5
```

3. Passage par référence:
- Une référence à l'argument est transmise à la fonction.
- La fonction a un accès direct à la variable d'origine et peut la modifier.

#### Exemple:
```c++
void echanger(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int x = 5, y = 10;
echanger(x, y); // x vaut maintenant 10, y vaut maintenant 5
```
### Paramètres par défaut:
Les paramètres par défaut permettent d'attribuer des valeurs initiales aux paramètres d'une fonction. Si aucune valeur n'est fournie lors de l'appel de la fonction, la valeur par défaut est utilisée.

#### Syntaxe de base:
```c++
type_retour nom_fonction(param1=valeur_par_defaut1, param2=valeur_par_defaut2, ...);
```
#### Exemple:
```c++
int multiplier(int a, int b = 2) {
  return a * b;
}

int resultat1 = multiplier(5); // resultat1 vaut 10 (b utilise la valeur par défaut 2)
int resultat2 = multiplier(5, 3); // resultat2 vaut 15
```

### Différences et impacts:
- Passage par valeur:
	* Simple et efficace pour les petites valeurs.
	* Ne modifie pas les arguments d'origine.
	* Peut créer des copies inutiles pour les gros types de données.
- Passage par pointeur:
	* Permet une modification directe des arguments d'origine.
	* Plus efficace pour les gros types de données.
	* Exige une gestion rigoureuse des pointeurs pour éviter les fuites de mémoire et les erreurs de segmentation.
- Passage par référence:
	* Offre une modification directe des arguments d'origine comme le passage par pointeur.
	* Plus lisible et plus sûr que le passage par pointeur.
	* Peut avoir un impact sur les performances pour les fonctions complexes.

  --------------------------------------------------------------------------------------------------------------------------------

  ## Utilisation de CONST et mutable en C++:

### Le mot-clé `const` en C++:
Le mot-clé `const` est utilisé en C++ pour indiquer qu'une valeur ne doit pas être modifiée. Il sert à améliorer la sécurité du code, à prévenir les erreurs accidentelles et à optimiser le code.

### `const` dans les paramètres de fonctions:

- **Protection des données:** En déclarant un paramètre comme `const`, on garantit que la fonction ne modifiera pas la valeur de l'argument passé. Cela évite les modifications inattendues et les erreurs de programmation.
- **Optimisation:** Le compilateur peut effectuer des optimisations lorsque les paramètres sont déclarés const, car il sait que leur valeur ne changera pas.
- **Amélioration de la lisibilité:** Le mot-clé `const` rend le code plus clair et plus explicite en indiquant clairement l'intention du programmeur.

#### Exemple:
```c++
void afficher(const int x) {
  std::cout << x << std::endl; // x ne peut pas être modifié dans cette fonction
}
```

### Membres `const` d'une classe ou d'une structure:

- **Objets constants:** Lorsqu'un objet est déclaré comme `const`, toutes ses données membres sont également constantes. Cela signifie qu'aucune de ses données ne peut être modifiée après la création de l'objet.

- **Fonctions membres `const`:** Une fonction membre déclarée `const` garantit qu'elle ne modifiera pas l'état de l'objet. Elle peut être appelée sur des objets constants.

#### Exemple:
```c++
class Point {
public:
  int x, y;
  void afficher() const { // Fonction membre const
    std::cout << "(" << x << ", " << y << ")" << std::endl;
  }
};

const Point p(3, 4);
p.afficher(); // Appel de la fonction membre const sur un objet const
```

### Le mot-clé `mutable`:
Le mot-clé `mutable` permet de marquer un membre de données d'une classe comme modifiable, même si l'objet est déclaré const. Il est généralement utilisé pour des membres qui représentent des états internes ou des caches.

#### Exemple:

```c++
class Point {
public:
  int x, y;
  mutable int compteur_acces; // Compteur d'accès, modifiable même si l'objet est const

  void afficher() const {
    compteur_acces++; // Incrémente le compteur, autorisé car mutable
    std::cout << "(" << x << ", " << y << ")" << std::endl;
  }
};
```

#### En résumé:
- `const` est un mot-clé puissant pour garantir l'immuabilité des données et améliorer la sécurité du code.
- Les paramètres de fonctions, les objets et les fonctions membres peuvent être déclarés `const`.
- `mutable` permet de marquer des membres de données comme modifiables, même dans un contexte const, pour des cas spécifiques.
- L'utilisation judicieuse de `const` et `mutable` contribue à un code plus sûr, plus lisible et plus maintenable.

#### Cas d'utilisation courants de `const`:
- **Paramètres de fonctions:** Pour protéger les données passées en argument.
- **Retour de fonctions:** Pour indiquer que la valeur retournée ne sera pas modifiée.
- **Pointeurs:** Pour indiquer qu'un pointeur pointe vers une donnée constante.
- **Références:** Pour indiquer qu'une référence ne peut pas être utilisée pour modifier la valeur sous-jacente.

  --------------------------------------------------------------------------------------------------------------------------------

## Fonctions `inline` et les espaces de nommage en C++:

### Fonctions `inline`:
Le mot-clé `inline` est une suggestion au compilateur pour qu'il insère le corps d'une fonction directement à l'endroit de chaque appel, plutôt que de générer un appel de fonction traditionnel.

- **Avantages**:
  * Performance: Peut améliorer les performances en évitant le coût d'appel de fonction, surtout pour les petites fonctions appelées fréquemment.
  * Lisibilité: Rend le code plus compact pour certaines opérations simples.
- **Utilisation:**
  * Petites fonctions: Les fonctions `inline` sont particulièrement efficaces pour les fonctions de quelques lignes.
  * Accesseurs et mutateurs: Les getters et setters sont souvent déclarés `inline` pour optimiser l'accès aux membres d'une classe.
- **Limitations**
  * Taille du code: Un usage excessif peut augmenter la taille du code exécutable.

#### Exemple:
```c++
inline int square(int x) {
    return x * x;
}
```

### Les espaces de nommage:
Les espaces de noms servent à organiser le code en regroupant des entités (variables, fonctions, classes) sous un nom spécifique. Cela permet d'éviter les conflits de noms, surtout dans les grands projets.

- **Avantages**:
  * Organisation: Structure le code en modules logiques, améliorant la maintenabilité.
  * Évitement des conflits: Permet d'utiliser le même nom pour des entités différentes dans des contextes différents.

#### Exemple:
```c++
namespace Geometry {
    inline double area(double radius) {
        return 3.14159 * radius * radius;
    }
}
```

#### Remarques:
- Les fonctions `inline` et les espaces de noms sont des outils précieux pour améliorer la qualité et la performance de votre code C++. Ils permettent d'optimiser le code et d'organiser votre projet de manière plus efficace.
- L'efficacité de l'inlining dépend de nombreux facteurs, notamment du compilateur et de l'architecture du processeur. Il est donc important d'utiliser cette fonctionnalité avec discernement.

--------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------



--------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------


## Déclaration d'une classe en C++:
Une classe en C++ est un plan qui définit les propriétés (données membres) et les comportements (fonctions membres) d'un objet. La déclaration d'une classe introduit un nouveau type de données personnalisé.
#### Syntaxe de base:
```c++
class NomDeLaClasse {
    // Données membres (attributs)
    type nom_attribut1;
    type nom_attribut2;
    // ...

    // Fonctions membres (méthodes)
    type nom_methode1(liste_parametres);
    type nom_methode2(liste_parametres);
    // ...
};
```
#### Exemlpes:
```c++
class Point {
public:
    int x, y; // Données membres (coordonnées)

    // Fonction membre pour afficher les coordonnées
    void afficher() {
        std::cout << "Coordonnées : (" << x << ", " << y << ")" << std::endl;
    }
};
```
Dans cet exemple:
- `Point` est le nom de la classe.
- `x` et `y` sont les données membres de type `int` qui représentent les coordonnées d'un point.
- `afficher` est une fonction membre qui permet d'afficher les coordonnées d'un point.

### Création d'objets (instanciation):
Pour utiliser une classe, il faut créer des objets de cette classe. On appelle cela l'instanciation.

```c++
Point p1; // Création d'un objet de la classe Point
p1.x = 3;
p1.y = 4;
p1.afficher(); // Affiche les coordonnées du point
```

### Données membres et fonctions membres:

- **Données membres:** Ce sont les variables associées à une classe. Elles représentent les attributs ou les propriétés d'un objet de cette classe.

- **Fonctions membres:** Ce sont les fonctions associées à une classe. Elles définissent les actions que les objets de cette classe peuvent effectuer. On les appelle aussi méthodes.

### Mots-clés public et private:
Les mots-clés `public` et `private` contrôlent l'accessibilité aux membres d'une classe depuis l'extérieur de celle-ci.

* **public**: Les membres déclarés public sont accessibles depuis n'importe où dans le programme.

* **private**: Les membres déclarés private ne sont accessibles qu'à l'intérieur de la classe elle-même.

#### Exemple:
```c++
class Personne {
public:
    std::string nom; // Accessible de l'extérieur
    int age;

private:
    std::string adresse; // Inaccessible de l'extérieur
};
```
Dans cet exemple:
- `nom` et `age` peuvent être modifiés ou consultés depuis n'importe où dans le programme.
- `adresse` ne peut être modifiée ou consultée qu'à l'intérieur de la classe `Personne`.

* **Anvatages de l'utilisation de `private`:**
  - **Encapsulation:** Protéger les données internes de la classe contre les modifications accidentelles.
  - **Sécurité:** Empêcher un accès non autorisé aux données sensibles.
  - **Modularité:** Faciliter la maintenance et la réutilisation du code.

--------------------------------------------------------------------------------------------------------------------------------

  ## Les Struct en C++:
En C++, la Struct est exactement comme une classe a une différence:
#### Accessibilité par défaut :
  * **Struct:**  Les membres d'une structure sont publics par défaut. Cela signifie qu'ils sont accessibles de n'importe où où la structure est visible.
  * **Class:** Les membres d'une classe sont privés par défaut. Pour les rendre accessibles, il faut les déclarer explicitement comme `public`.

Historiquement, les structures étaient utilisées principalement pour regrouper des données simples, tandis que les classes étaient plus orientées vers la modélisation de concepts complexes. L'accessibilité publique par défaut des structures reflétait cette utilisation plus simple. Cependant, en C++, les deux peuvent être utilisés de manière interchangeable.

--------------------------------------------------------------------------------------------------------------------------------

## Utilisation des objets : Variables, références et pointeurs:
Une fois qu'une classe ou une structure est définie, on peut créer des instances de cette classe, c'est-à-dire des objets. Ces objets peuvent être utilisés comme des variables, des références ou des pointeurs.

- **Variables:**
  * L'objet est créé et stocké dans une variable.
  * Les modifications apportées à l'objet affectent uniquement cette variable.
  * Exemple:
```c++
struct Point {
    int x, y;
};

Point p1; // Création d'un objet Point
p1.x = 3; // Modification de la coordonnée x
```

- **Références:**
  * La référence est un alias pour l'objet.
  * Toute modification apportée à la référence affecte directement l'objet.
  * Exemple:
```c++
Point p2;
Point& ref = p2; // ref est une référence à p2
ref.x = 5; // Modifie également p2.x
```

- **Pointeurs:**
  * Le pointeur stocke l'adresse mémoire de l'objet.
  * Il permet d'accéder aux membres de l'objet en utilisant l'opérateur `->`.
  * Exemple:
```c++
Point* ptr = &p1; // ptr pointe vers p1
ptr->y = 10; // Modifie la coordonnée y de p1
```

### Quand utiliser quoi ?
 - **Variable:** Pour une utilisation simple et directe d'un objet.
 - **Références:** Pour éviter de créer des copies d'objets volumineux et pour passer des objets en argument de fonction sans risque de modification accidentelle.
 - **Pointeurs:** Pour une flexibilité maximale, notamment pour gérer des tableaux dynamiques, des structures de données complexes et pour implémenter des concepts comme l'héritage et le polymorphisme.

--------------------------------------------------------------------------------------------------------------------------------

## Les constructeurs en C++ :
En C++, le constructeur est une méthode spéciale d'une classe qui est appelée automatiquement lorsqu'un objet de cette classe est créé. Il sert à initialiser les membres de l'objet.

### Syntaxe de base:
```c++
class NomDeLaClasse {
public:
    NomDeLaClasse() { // Constructeur par défaut
        // Initialisation des membres
    }
    NomDeLaClasse(type param1, type param2) { // Constructeur avec paramètres
        // Initialisation des membres avec les paramètres
    }
    // ... Autres constructeurs
};
```

### Caractéristiques des constructeurs :
- **Même nom que la classe:** Le nom du constructeur doit être identique au nom de la classe.
- **Pas de type de retour:** Un constructeur ne retourne rien, pas même `void`.
- **Peut avoir des paramètres:** Les constructeurs peuvent prendre des paramètres pour initialiser les membres de l'objet.

### Types de constructeurs:
- **Constructeur par défaut:**
  * N'a aucun paramètre.
  * Initialise les membres à leurs valeurs par défaut.
- **Constructeur paramétré:**
  * Prend des paramètres pour initialiser les membres de l'objet.
- **Constructeur de copie:**
  * Initialise un objet à partir d'un autre objet de la même classe.
- **Constructeur de déplacement:**
  * Déplace les ressources d'un objet vers un autre.

### Chaînage des constructeurs:
Le chaînage de constructeurs permet d'appeler un constructeur à partir d'un autre constructeur de la même classe. Cela est utile pour éviter la duplication de code et pour fournir des constructeurs avec des niveaux d'initialisation différents.

```c++
class Personne {
  int age;
  std::string nom;
public:
    Personne(std::string nom) : nom(nom) {} // Constructeur par default + ZIM
    Personne(std::string nom, int age) : Personne(nom), age(age) {} // Chaînage de deux constructeurs
    // ...
};
```

### La Zone d'Initialisation des Membres (ZIM)

La ZIM est une partie essentielle de la déclaration d'un constructeur. Elle permet d'initialiser les membres d'une classe avant que le corps du constructeur ne soit exécuté. Cela garantit que les membres sont dans un état valide dès le début de la construction de l'objet.

### Syntaxe de ZIM:
```c++
class MaClasse {
public:
    MaClasse(type param1, type param2) : membre1(param1), membre2(param2) {
        // Corps du constructeur
    }
private:
    type membre1;
    type membre2;
};
```

#### Avantages de la ZIM:
-   Ordre d'initialisation garanti: Les membres sont initialisés dans l'ordre de leur déclaration dans la classe, même si leur ordre d'initialisation dans la liste d'initialisation est différent.
-   Initialisation de membres const: Les membres constants doivent être initialisés dans la ZIM.
-   Initialisation de références: Les références doivent être initialisées dans la ZIM.

### Le Constructeur de Copie:
Le constructeur de copie est un constructeur spécial qui est appelé lorsqu'un objet est créé en copiant un objet existant. Il est utilisé pour créer une copie d'un objet.

#### Syntaxe de base:
```c++
MaClasse(const MaClasse& autre);
```
#### Exemple:
```c++
class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
    Point(const Point& autre) : x(autre.x), y(autre.y) {}
};
```
#### l'intérêt du constructeur de copie:

- **Copie profonde:** Pour les classes qui contiennent des pointeurs ou d'autres ressources, il est souvent nécessaire de redéfinir le constructeur de copie pour effectuer une copie profonde, c'est-à-dire copier les données pointées par les pointeurs plutôt que de copier simplement les pointeurs eux-mêmes. Cela évite les problèmes de partage de ressources entre les objets.

- **Personnalisation:** Pour ajouter un comportement personnalisé lors de la copie d'un objet.

### Constructeur de Déplacement(move):
Le constructeur de déplacement est un mécanisme optimisé pour déplacer les ressources d'un objet à un autre, plutôt que de les copier. Il est particulièrement utile lorsque l'on travaille avec des objets volumineux ou des ressources coûteuses à copier (comme des tableaux dynamiques ou des descripteurs de fichiers).

#### Syntaxe:
```c++
MaClasse(MaClasse&& autre) noexcept;
```
#### Exemple:
```c++
#include <iostream>
#include <vector>

class Vecteur {
public:
    std::vector<int> data;

    Vecteur(std::vector<int>&& v) noexcept : data(std::move(v)) {}
    // ... autres constructeurs et méthodes
};

int main() {
    Vecteur v1 = {1, 2, 3};
    Vecteur v2 = std::move(v1); // Déplacement de v1 vers v2

    // Après le déplacement, v1 est dans un état valide mais indéfini
    // Il est généralement préférable de ne plus utiliser v1 après un déplacement
}
```
### Le Destructeur en C++ :
Le destructeur est une méthode spéciale d'une classe qui est appelée automatiquement lorsqu'un objet est détruit. Il sert à libérer les ressources allouées par l'objet, telles que la mémoire, les fichiers, les connexions réseau, etc.

#### Syntaxe:
```c++
~NomDeLaClasse() {
    // Code de destruction
}
```
#### Exemple:
```c++
#include <iostream>

class Ressource {
public:
    Ressource() {
        std::cout << "Ressource créée" << std::endl;
    }
    ~Ressource() {
        std::cout << "Ressource détruite" << std::endl;
    }
};

int main() {
    Ressource res; // Création d'un objet
}
```
