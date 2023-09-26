#include "mylib.h"

void ivedimas(studentas &Temp){
    cout << "Iveskite varda ir pavarde: ";
        cin >> Temp.var >> Temp.pav;
        cout << "Kiek pazymiu turi studentas: ";
        int n;
        cin >> n;
        for (int i=0;i<n;i++)
        {
            int k;
            cout << "Iveskite " << i+1 << " pazymi: ";
            cin >> k;
            Temp.paz.push_back(k);
        }
        cout << "Iveskite egzamina: ";
        cin >> Temp.egz;
}
void vidurkis(studentas &Temp){
    float k=0,j=0;
    for(auto a: Temp.paz){k=k+a; j++;}
    Temp.rez=(Temp.egz+k)/(j+1);
}
void isvedimas(studentas &Temp){
    cout << setw(15) << left <<Temp.var << setw(15) << left << Temp.pav;
    printf("%-16.2f\n", Temp.rez);
}
