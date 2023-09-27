#include "mylib.h"

void ivedimas(studentas &Temp){
    cout << "Iveskite varda ir pavarde: ";
    cin >> Temp.var >> Temp.pav;
    int i=0;
    while(1){
        int k,n;
        cout << "Iveskite " << i+1 << " pazymi: ";
        cin >> k;
        Temp.paz.push_back(k);
        cout << "Jei viska ivedete, parasykite 1: ";
        cin >> n;
        if (n==1){break;}
        i++;
        }
    cout << "Iveskite egzamina: ";
    cin >> Temp.egz;
}
void galutinis_vid(studentas &Temp){
    float k=0,j=0;
    for(auto a: Temp.paz){k=k+a; j++;}
    Temp.rez_vid=(k/j)*0.4+Temp.egz*0.6;
}
void isvedimas(studentas &Temp, float galutinis){
    cout << setw(15) << left <<Temp.var << setw(15) << left << Temp.pav;
    printf("%-16.2f\n", galutinis);
}
void galutinis_med(studentas &Temp){
    if (Temp.paz.size()%2==0){
         nth_element(Temp.paz.begin(),Temp.paz.begin() + Temp.paz.size()/2,Temp.paz.end());
         nth_element(Temp.paz.begin(),Temp.paz.begin() + (Temp.paz.size()-1)/2,Temp.paz.end());
         Temp.rez_med=(Temp.paz[Temp.paz.size()/2]+Temp.paz[(Temp.paz.size()-1)/2])/2;
    }
    else {
        nth_element(Temp.paz.begin(),Temp.paz.begin() + Temp.paz.size()/2,Temp.paz.end());
        Temp.rez_med=Temp.paz[Temp.paz.size()/2];
    }
    Temp.rez_med=(Temp.rez_med*0.4)+(Temp.egz*0.6);
}
