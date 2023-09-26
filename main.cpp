#include "mylib.h"


int main()
{
    studentas laikinas;
    vector<studentas> grupe;
    for (int j=0; j<2;j++){
        ivedimas(laikinas);
        vidurkis(laikinas);
        grupe.push_back(laikinas);
        laikinas.paz.clear();
    }
    printf("%-15s%-15s%-16s\n", "Vardas", "Pavarde", "Galutinis (Vid.)");
    printf("----------------------------------------------\n");
    for (auto &a: grupe)
    {
        isvedimas(a);
    }
    return 0;
}
