#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <sstream>
#include <climits>
#include <limits>
#include <cctype>
#include <cmath>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define ORANGE "\033[1;38;2;255;165;0m"
# define RESET "\033[0m"

//template<typename T> = un modele (template) qui prend un parametre generique de type T
// Un template est une fonction ou une classe generique qui peut fonctionner avec differents
//types de donnees. Il est defini en utilisant le mot clef "template" suivi des parametres
//de modele, qui peuvent etre des types ou des valeurs. Lors de l utilisation du template,
//le compilateur genere automatiquement des versions specifiques du code pour chaque type
//avec lequel le template est utilise, ce qui permet de creer des fonctions et des classes
//flexibles et reutilisables.

template<typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T& min(const T& a, const T& b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
const T& max(const T& a, const T& b)
{
	if (a > b)
		return a;
	return b;
}

#endif
