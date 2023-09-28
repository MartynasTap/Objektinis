#include "mylib.h"

void ivedimas(studentas &Temp){
    cout << "Iveskite varda ir pavarde: ";
    cin >> Temp.var >> Temp.pav;
    int i=0;
    while(1){
        int paz,n;
        cout << "Iveskite " << i+1 << " pazymi: ";
        try{
        cin >> paz;
        if (paz>=1 && paz<=10){
        Temp.paz.push_back(paz);
        cout << "Jei viska ivedete, parasykite 1: ";
        cin >> n;
        if (n==1){break;}
        i++;}
        else {throw(paz);}}
        catch(...){
        cout << "Neteisinga ivestis, pazymis turi buti sveikas skaicius tarp 1 ir 10" << endl;}}
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
void atsitiktiniai(studentas &Temp){
    cout << "Iveskite varda ir pavarde: ";
    cin >> Temp.var >> Temp.pav;
    int n;
    cout << "Iveskite, kiek studentas turejo namu darbu: ";
    cin >> n;
    srand((unsigned) time(NULL));
    for (int i=0;i<n;i++){
        int k = 1 + (rand() % 10);
        Temp.paz.push_back(k);
    }
    Temp.egz=1 + (rand() % 10);
}

unsigned int zodziai(std::string const& str)
{
    std::stringstream stream(str);
    return std::distance(std::istream_iterator<std::string>(stream), std::istream_iterator<std::string>());
}
void skaitymas (vector<studentas> &Temp, int nd){
        int temp;
        int stud = 0;
        string buff;
        ifstream fr;
        try
        {
            fr.open("kursiokai.txt");
            if(!fr)
                throw std::runtime_error("FAILAS NERASTAS!");
                getline(fr >> std::ws, buff);
                nd = zodziai(buff) - 3;
                while(true)
                {
                    Temp.resize(Temp.size()+1);
                    fr >> Temp.at(stud).var;
                    if(fr.eof())
                {
                    Temp.pop_back();
                    break;
                }
                fr >> Temp.at(stud).pav;
                for(int i=0; i<nd; i++)
                {
                    fr >> temp;
                    Temp.at(stud).paz.push_back(temp);
                }
                fr >> Temp.at(stud).egz;
                stud += 1;
            }
            fr.close();
    }
    catch(int e){}
}
void rusiavimas(vector<studentas> &Temp){
     for(int j=0;j<Temp.size();j++){
        for (int i=j+1;i<Temp.size();i++)
        {
            if (Temp.at(j).var>Temp.at(i).var)
            {
                string ct=Temp.at(i).var;
                Temp.at(i).var=Temp.at(j).var;
                Temp.at(j).var=ct;
            }
        }
     }
}
void isvedimas_sufailu(vector<studentas> &Temp){
    printf("%-15s%-15s%-17s%-17s\n", "Vardas", "Pavarde", "Galutinis (Vid.)","Galutinis (Med.)");
    printf("----------------------------------------------------------------\n");
    for (auto &a: Temp){
    cout << setw(15) << left <<a.var << setw(15) << left << a.pav;
    printf("%-17.2f%-17.2f\n", a.rez_vid, a.rez_med);
    }

}
