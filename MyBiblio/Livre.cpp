#include "Livre.h"

Livre::Livre(string ISBM, int nb_pg, string title, Auteur* auth, Date pub_date):Ressource(title,auth,pub_date),ISBM(ISBM),nb_pages(nb_pg)
{}

void Livre::Print() const
{
    
    cout << "ISMB: " << this->ISBM<<endl;
    Ressource::Print();
    cout << "Nombre de pages: " << this->nb_pages<<endl;
    cout << "@rsc: " << &this->prix << endl;
  
}

void Livre::calculer_prix(float unit)
{
   // cout << "Prix Livre " << endl;
    this->prix *= unit;
  
}

Livre::~Livre()
{
    std::cout << "Destruction de Livre" << std::endl;

}


