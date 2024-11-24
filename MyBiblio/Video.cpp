#include "Video.h"

Video::Video(string title, Auteur* auth, Date pub_date, string format, float size, Resolution rsl, int duree)
	:Ressource(title, auth, pub_date), RessourceNumerique(title,auth,pub_date,format,size),rsl(rsl),duree(duree)
{}

void Video::calculer_prix(float unit)
{
	//cout << "Calculer prix video" << endl;
	this->duree *= unit;
}

void Video::Print() const
{
	RessourceNumerique::Print();
	cout << "Resolution: ";
	this->rsl.Print();
	cout << "Duree: " << this->duree << "h" << endl;
}
