#include "LivreAudio.h"

LivreAudio::LivreAudio(string ISBM, int nb_pg, string title, Auteur* auth, Date pub_date, string format, float size)
	:Ressource(title, auth, pub_date), Livre(ISBM, nb_pg, title, auth, pub_date), RessourceNumerique(title, auth, pub_date,format, size)
{}

void LivreAudio::Print() const
{
	Livre::Print();
	RessourceNumerique::Print();
}
