#include "mylib.h"


int main()
{
    studentas laikinas;
    vector<studentas> grupe;
    int l;
    cout << "Jei norite, kad duomenys butu nuskaitomi is failo, iveskite 2, jei ne, iveskite 1: ";
    cin >> l;
    if (l==2){
            int nd;
            skaitymas(grupe,nd);
            rusiavimas(grupe);
            for(auto &a: grupe){galutinis_vid(a);
            galutinis_med(a);}
            isvedimas_sufailu(grupe);
            }
    else if (l==1) {
    int g;
    cout << "Iveskite, kiek studentu: ";
    cin >> g;
    for (int j=0; j<g;j++){
        int k;
        cout << "Jei norite, kad sio studento pazymiai butu generuojami atsitiktinai, iveskite 1, jei ne - 2: ";
        cin >> k;
        if (k==1){
            atsitiktiniai(laikinas);
            galutinis_vid(laikinas);
            galutinis_med(laikinas);
            grupe.push_back(laikinas);
            laikinas.paz.clear();
        }
        else if (k==2){
            ivedimas(laikinas);
            galutinis_vid(laikinas);
            galutinis_med(laikinas);
            grupe.push_back(laikinas);
            laikinas.paz.clear();
        }
    }

    int n;
    cout << "Jeigu norite galutinio pazymio su vidurkiu iveskite 1, jei su mediana - 2: ";
    cin >> n;
    if (n == 1){
        printf("%-15s%-15s%-16s\n", "Vardas", "Pavarde", "Galutinis (Vid.)");
        printf("----------------------------------------------\n");
        for (auto &a: grupe)
        {
            isvedimas(a,a.rez_vid);
        }
    }
    else if (n == 2){
        printf("%-15s%-15s%-16s\n", "Vardas", "Pavarde", "Galutinis (Med.)");
        printf("----------------------------------------------\n");
        for (auto &a: grupe)
        {
            isvedimas(a,a.rez_med);
        }
    }
    }
    return 0;
}
