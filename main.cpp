#include "mylib.h"


int main()
{
    studentas laikinas;
    vector<studentas> grupe;
    for (int j=0; j<2;j++){
        ivedimas(laikinas);
        galutinis_vid(laikinas);
        galutinis_med(laikinas);
        grupe.push_back(laikinas);
        laikinas.paz.clear();
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
    if (n==2){
        printf("%-15s%-15s%-16s\n", "Vardas", "Pavarde", "Galutinis (Med.)");
        printf("----------------------------------------------\n");
        for (auto &a: grupe)
        {
            isvedimas(a,a.rez_med);
        }
    }
    return 0;
}
