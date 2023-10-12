#include "mylib.h"

int main()
{
    studentas laikinas;
    vector<studentas> grupe;
    int l, k;
    cout <<"Jei norite automatinio failu generavimo, dvieju grupiu surusiavimo ir laiko matavimo iveskite 1. Jei ne, iveskite 0: ";
    iv_ir_tikr(k);
    k = ar_tinkamas_pasirinkimas(k);
    if (k==0){
    cout << "Jei norite, kad duomenys butu nuskaitomi is failo, iveskite 1, jei norite ivesti ranka, iveskite 0: ";
    iv_ir_tikr(l);
    l = ar_tinkamas_pasirinkimas(l);
    if (l==1){
            int nd;
            skaitymas(grupe,nd,"studentai10000.txt");
            sort(grupe.begin(),grupe.end(),compareElement);
            for(auto &a: grupe){galutinis_vid(a);galutinis_med(a);}
            int h;
            cout << "Jei norite, kad duomenys butu isvedami i faila, iveskite 1, jei i konsoles langa, iveskite 0: ";
            iv_ir_tikr(h);
            h = ar_tinkamas_pasirinkimas(h);
            if (h==1){isvedimas_i_faila(grupe,"rez1.txt");}
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
    }}
    if (k==1){
        int d;
        cout << "Jei tikrai reikia sugeneruoti visus naujus duomenu failus, iveskite 1. Jei ne, iveskite 0: ";
        iv_ir_tikr(d);
        d = ar_tinkamas_pasirinkimas(d);
        cout << endl;
        if (d==1){
            generavimas(1000,5,"stud1000.txt");
            generavimas(10000,5,"stud10000.txt");
            generavimas(100000,5,"stud100000.txt");
            generavimas(1000000,5,"stud1000000.txt");
            generavimas(10000000,5,"stud10000000.txt");}
        if(d==0){
            vector<studentas> vargsiukai;
            vector<studentas> kietekai;
            int nd;

            auto start_viso = std::chrono::high_resolution_clock::now();
            auto start = std::chrono::high_resolution_clock::now();
            skaitymas(grupe,nd,"stud1000.txt");
            std::chrono::duration<double> diff = std::chrono::high_resolution_clock::now()-start;
            cout << "Duomenu nuskaitymas is 1000 irasu failo uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            sort(grupe.begin(),grupe.end(),compareElement);
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "1000 irasu rusiavimas pagal varda uztruko: "<< diff.count() << endl;
            for(auto &a: grupe){galutinis_vid(a);galutinis_med(a);}
            start = std::chrono::high_resolution_clock::now();
            rusiavimas(grupe,vargsiukai,kietekai);
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "1000 irasu dalijimas i dvi grupes uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            isvedimas_i_faila(vargsiukai,"rez_stud1000_vargsiukai.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "1000 irasu vargsiukai irasymas i faila uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            isvedimas_i_faila(kietekai,"rez_stud1000_kietekai.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "1000 irasu kietekai irasymas i faila uztruko: "<< diff.count() << endl;
            cout << endl;
            std::chrono::duration<double> diff_viso = std::chrono::high_resolution_clock::now()-start_viso;
            cout << "1000 irasu testo visa trukme: "<< diff_viso.count() << endl;
            kietekai.clear();
            kietekai.shrink_to_fit();
            vargsiukai.clear();
            vargsiukai.shrink_to_fit();
            cout << endl;

            start_viso = std::chrono::high_resolution_clock::now();
            start = std::chrono::high_resolution_clock::now();
            skaitymas(grupe,nd,"stud10000.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "Duomenu nuskaitymas is 10000 eiluciu failo uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            sort(grupe.begin(),grupe.end(),compareElement);
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "10000 irasu rusiavimas pagal varda uztruko: "<< diff.count() << endl;
            for(auto &a: grupe){galutinis_vid(a);galutinis_med(a);}
            start = std::chrono::high_resolution_clock::now();
            rusiavimas(grupe,vargsiukai,kietekai);
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "10000 eiluciu dalijimas i dvi grupes uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            isvedimas_i_faila(vargsiukai,"rez_stud10000_vargsiukai.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "10000 irasu vargsiukai irasymas i faila uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            isvedimas_i_faila(kietekai,"rez_stud10000_kietekai.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "10000 irasu kietekai irasymas i faila uztruko: "<< diff.count() << endl;
            cout << endl;
            diff_viso = std::chrono::high_resolution_clock::now()-start_viso;
            cout << "10000 irasu testo visa trukme "<< diff_viso.count() << endl;
            kietekai.clear();
            kietekai.shrink_to_fit();
            vargsiukai.clear();
            vargsiukai.shrink_to_fit();
            cout << endl;

            start_viso = std::chrono::high_resolution_clock::now();
            start = std::chrono::high_resolution_clock::now();
            skaitymas(grupe,nd,"stud100000.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "Duomenu nuskaitymas is 100000 eiluciu failo uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            sort(grupe.begin(),grupe.end(),compareElement);
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "100000 irasu rusiavimas pagal varda uztruko: "<< diff.count() << endl;
            for(auto &a: grupe){galutinis_vid(a);galutinis_med(a);}
            start = std::chrono::high_resolution_clock::now();
            rusiavimas(grupe,vargsiukai,kietekai);
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "100000 eiluciu dalijimas i dvi grupes uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            isvedimas_i_faila(vargsiukai,"rez_stud100000_vargsiukai.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "100000 irasu vargsiukai irasymas i faila uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            isvedimas_i_faila(kietekai,"rez_stud100000_kietekai.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "100000 irasu kietekai irasymas i faila uztruko: "<< diff.count() << endl;
            cout << endl;
            diff_viso = std::chrono::high_resolution_clock::now()-start_viso;
            cout << "100000 irasu testo visa trukme "<< diff_viso.count() << endl;
            kietekai.clear();
            kietekai.shrink_to_fit();
            vargsiukai.clear();
            vargsiukai.shrink_to_fit();
            cout << endl;

            start_viso = std::chrono::high_resolution_clock::now();
            start = std::chrono::high_resolution_clock::now();
            skaitymas(grupe,nd,"stud1000000.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "Duomenu nuskaitymas is 1000000 eiluciu failo uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            sort(grupe.begin(),grupe.end(),compareElement);
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "1000000 irasu rusiavimas pagal varda uztruko: "<< diff.count() << endl;
            for(auto &a: grupe){galutinis_vid(a);galutinis_med(a);}
            start = std::chrono::high_resolution_clock::now();
            rusiavimas(grupe,vargsiukai,kietekai);
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "1000000 eiluciu dalijimas i dvi grupes uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            isvedimas_i_faila(vargsiukai,"rez_stud1000000_vargsiukai.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "1000000 irasu vargsiukai irasymas i faila uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            isvedimas_i_faila(kietekai,"rez_stud1000000_kietekai.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "1000000 irasu kietekai irasymas i faila uztruko: "<< diff.count() << endl;
            cout << endl;
            diff_viso = std::chrono::high_resolution_clock::now()-start_viso;
            cout << "1000000 irasu testo visa trukme "<< diff_viso.count() << endl;
            kietekai.clear();
            kietekai.shrink_to_fit();
            vargsiukai.clear();
            vargsiukai.shrink_to_fit();
            cout << endl;

            start_viso = std::chrono::high_resolution_clock::now();
            start = std::chrono::high_resolution_clock::now();
            grupe.reserve(10000000);
            skaitymas(grupe,nd,"stud10000000.txt");
            cout << grupe.size() << " " << grupe.capacity() << endl;
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "Duomenu nuskaitymas is 10000000 eiluciu failo uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            sort(grupe.begin(),grupe.end(),compareElement);
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "10000000 irasu rusiavimas pagal varda uztruko: "<< diff.count() << endl;
            for(auto &a: grupe){galutinis_vid(a);galutinis_med(a);}
            start = std::chrono::high_resolution_clock::now();
            rusiavimas(grupe,vargsiukai,kietekai);
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "10000000 eiluciu dalijimas i dvi grupes uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            isvedimas_i_faila(vargsiukai,"rez_stud10000000_vargsiukai.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "10000000 irasu vargsiukai irasymas i faila uztruko: "<< diff.count() << endl;
            start = std::chrono::high_resolution_clock::now();
            isvedimas_i_faila(kietekai,"rez_stud10000000_kietekai.txt");
            diff = std::chrono::high_resolution_clock::now()-start;
            cout << "10000000 irasu kietekai irasymas i faila uztruko: "<< diff.count() << endl;
            cout << endl;
            diff_viso = std::chrono::high_resolution_clock::now()-start_viso;
            cout << "10000000 irasu testo visa trukme "<< diff_viso.count() << endl;
            kietekai.clear();
            kietekai.shrink_to_fit();
            vargsiukai.clear();
            vargsiukai.shrink_to_fit();
            cout << endl;
        }
    }
    return 0;
}
