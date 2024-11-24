#include "pch.h"
#include "Auteur.h"
#include "Livre.h"
#include "Ressouce.h"
#include "LivreAudio.h"
#include "RessourceNumerique.h"
#include "Video.h"
#include "Resolution.h"
#include "Biblio.h"
int main()
{
   
    Date d(21, 11, 2024);
    
    Biblio B;
   
    Auteur A1("Binta","TRAORE",d,"b d vs cbvd v cddbsvdvghvhgvhv");
    Auteur A2("Joe", "Doe", d, "b d vs cbvd v cddbsvdvghvhgvhv");
    Auteur A3("Camal", "KADI", d, "b d vs cbvd v cddbsvdvghvhgvhv");
    Resolution rs(400, 450);
   
    Ressource *LA = new LivreAudio("785", 200, "La sagesse", &A1, d, "mpm", 200);

    Ressource*RS= new Video("L'epope Mading", &A2, d, "mp4", 200,rs,5);
    
    Ressource *R = new Livre("785", 200, "Le roi lion", &A3, d);

    B.AddRsc(RS); 
    B.AddRsc(LA);
    B.AddRsc(R);
    B.Print();
    

    delete(LA);
    delete RS;
    delete R;
   
}

