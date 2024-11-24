#include "Ressouce.h"

Ressource::Ressource(string s, Auteur *a, Date d) :title(s),auth(a),pub_date(d),prix(0)
{
}

void Ressource::Print() const
{
	cout << "Title: " << this->title<<endl;
	this->auth->DetailsAuth();
	cout << "Date de publication:";
	this->pub_date.Print_date();
	cout << "Prix: " << this->prix << endl;
}

Ressource::~Ressource()
{
	std::cout << "Destruction de Ressource" << std::endl;

}
