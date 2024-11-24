#include "RessourceNumerique.h"

RessourceNumerique::RessourceNumerique(string title, Auteur* auth, Date pub_date, string format, float size) :Ressource(title, auth, pub_date),format(format),taille(size)
{
}

void RessourceNumerique::Print( )const
{
	 Ressource::Print();
	 cout << "Format: " << this->format << endl;
	 cout << "Taille en octet: " << this->taille << endl;
	 cout << "@rsc: " << &this->prix << endl;
}
