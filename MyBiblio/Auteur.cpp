#include "Auteur.h"
#include <iostream>
using namespace std;
int Auteur::compteur = 0;
Auteur::Auteur(string fname, string lname, Date born, string bio) :id_auteur(++compteur),fname(fname),lname(lname),born_date(born),bio(bio)
{
}

void Auteur::DetailsAuth() const
{
	cout << "Author ID: " << this->id_auteur << endl;
	cout << "Author first-name: " << this->fname << endl;
	cout << "Author last-name: " << this->lname << endl;
	cout << "Author born-date: " ;
     this->born_date.Print_date();
	cout << "Author biography: " << this->bio << endl;
}
