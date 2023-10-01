#include "mylib.h"

int main()
{
    studentas laikinas;
    vector<studentas> grupe;
    int l;
    cout << "Jei norite, kad duomenys butu nuskaitomi is failo, iveskite 1, jei norite ivesti ranka, iveskite 0: ";
    iv_ir_tikr(l);
    l = ar_tinkamas_pasirinkimas(l);
    if (l==1){
            int nd;
            skaitymas(grupe,nd);
            sort(grupe.begin(),grupe.end(),compareElement);
            for(auto &a: grupe){galutinis_vid(a);galutinis_med(a);}
            int h;
            cout << "Jei norite, kad duomenys butu isvedami i faila, iveskite 1, jei i konsoles langa, iveskite 0: ";
            iv_ir_tikr(h);
            h = ar_tinkamas_pasirinkimas(h);
            if (h==1){isvedimas_i_faila(grupe);}
            else{isvedimas_sufailu(grupe);}
            }
    else{
    int g;
    cout << "Iveskite, kiek studentu: ";
    iv_ir_tikr(g);
    g = ar_daugiau0(g);
    for (int j=0; j<g;j++){
        int k;
        cout << "Jei norite, kad sio studento pazymiai butu generuojami atsitiktinai, iveskite 1, jei norite irasyti pats iveskite 0: ";
        iv_ir_tikr(k);
        k = ar_tinkamas_pasirinkimas(k);
        if (k==1){
            atsitiktiniai(laikinas);
            galutinis_vid(laikinas);
            galutinis_med(laikinas);
            grupe.push_back(laikinas);
            laikinas.paz.clear();
        }
        else{
            ivedimas(laikinas);
            galutinis_vid(laikinas);
            galutinis_med(laikinas);
            grupe.push_back(laikinas);
            laikinas.paz.clear();}
            }

    int n;
    cout << "Jeigu norite galutinio pazymio su vidurkiu iveskite 1, jei su mediana - 0: ";
    iv_ir_tikr(n);
    n = ar_tinkamas_pasirinkimas(n);
    if (n == 1){
        printf("%-15s%-15s%-16s\n", "Vardas", "Pavarde", "Galutinis (Vid.)");
        printf("----------------------------------------------\n");
        for (auto &a: grupe)
        {
            isvedimas(a,a.rez_vid);
        }
    }
    else{
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
