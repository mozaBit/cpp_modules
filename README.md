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