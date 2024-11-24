#include "Biblio.h"
int Biblio:: cmpt = 0;
Biblio::Biblio() :num_biblio(++cmpt), creat_date(Date()), capacity(2), nb_rsc(0)
{
	this->biblioRsc = new Ressource * [this->capacity];
	for (int i = 0; i < this->capacity; i++) this->biblioRsc[i] = nullptr;
}

void Biblio::Print() const
{
	cout << "Num_biblio: " << this->num_biblio << endl;
	cout << "Create_date: ";
	this->creat_date.Print_date();
	cout << "Ressource_Biblio: "<<endl;
	for (int i = 0; i < this->nb_rsc; i++)
	{
		this->biblioRsc[i]->Print();
		cout << "**********************************" << endl;
	}

}

void Biblio::AddRsc(Ressource* r)
{
	if (Isfull()) this->ResizeBiblio();
	this->biblioRsc[this->nb_rsc++] = r;
}

bool Biblio::Isfull() const
{
	return this->capacity==this->nb_rsc;
}

void Biblio::ResizeBiblio()
{
	this->capacity *= 2;
	Ressource** temp = new Ressource * [capacity];
	for (int i = 0; i < nb_rsc; i++) temp[i] = this->biblioRsc[i];
	
	delete [] this->biblioRsc ;
	this->biblioRsc = temp;
}

Biblio::~Biblio()
{
	//delete[] this->biblioRsc;
}
