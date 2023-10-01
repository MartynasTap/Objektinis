#include "mylib.h"

void iv_ir_tikr(auto &a){
    cin >>a;
    do{
        try{
            if(cin.fail()){throw std::runtime_error("Ivedete netinkama duomeni");}
        }
        catch(const std::runtime_error& e){
            std::cout <<e.what();
            std::cin.clear();
            std::cin.ignore(256,'\n');
            cout << endl << "Veskite duomeni dar karta: ";
            cin >>a;        }
    } while(std::cin.fail()==true);
}
int ar_tinkamas_paz(int a){
    do{
        try{
            if(a<0 || a>10){throw std::invalid_argument("Pazymiai gali buti tik tarp 0 ir 10");}
        }
        catch(const std::invalid_argument &e){
            std::cout <<e.what();
            cout << endl << "Veskite pazymi dar karta: ";
            iv_ir_tikr(a);
        }} while((a<0 || a>10)==true);
        return a;
}

int ar_tinkamas_pasirinkimas(int a){
    do{
        try{
            if(a==1 || a==0){break;}
            else {throw std::invalid_argument("Pasirinkimai yra tik 1 arba 0");}
        }
        catch(const std::invalid_argument &e){
            std::cout <<e.what();
            std::cin.clear();
            std::cin.ignore(256,'\n');
            cout << endl << "Veskite pasirinkima dar karta: ";
            iv_ir_tikr(a);
            }} while((a==1 || a==0)==false);
            return a;
}
int ar_daugiau0(int a){
    do{
        try{
            if(a>0){break;}
            else {throw std::invalid_argument("Turi buti bent 1");}
        }
        catch(const std::invalid_argument &e){
            std::cout <<e.what();
            std::cin.clear();
            std::cin.ignore(256,'\n');
            cout << endl << "Veskite skaiciu dar karta: ";
            iv_ir_tikr(a);
        }} while(a>0==false);
        return a;
}
bool compareElement(studentas &Temp1, studentas &Temp2)
{
    return (Temp1.var < Temp2.var);
}

void ivedimas(studentas &Temp){
    cout << "Iveskite varda ir pavarde: ";
    cin >> Temp.var >> Temp.pav;
    int i=0;
    while(1){
        int paz,n;
        cout << "Iveskite " << i+1 << " pazymi: ";
        iv_ir_tikr(paz);
        paz = ar_tinkamas_paz(paz);
        Temp.paz.push_back(paz);
        cout << "Jei viska ivedete, parasykite 1: ";
        iv_ir_tikr(n);
        if (n==1){break;}
        i++;}
        cout << "Iveskite egzamina: ";
        iv_ir_tikr(Temp.egz);
        Temp.egz = ar_tinkamas_paz(Temp.egz);
}
void galutinis_vid(studentas &Temp){
    float k=0,j=0;
    for(auto a: Temp.paz){k=k+a;j++;}
    Temp.rez_vid=((k/j)*0.4)+(Temp.egz*0.6);
}
void isvedimas(studentas &Temp, float galutinis){
    cout << setw(15) << left <<Temp.var << setw(15) << left << Temp.pav;
    printf("%-16.2f\n", galutinis);
}
void galutinis_med(studentas &Temp){
    if (Temp.paz.size()==1){Temp.rez_med=Temp.paz[0];}
    else {if(Temp.paz.size()%2==0){
         nth_element(Temp.paz.begin(),Temp.paz.begin() + Temp.paz.size()/2,Temp.paz.end());
         nth_element(Temp.paz.begin(),Temp.paz.begin() + (Temp.paz.size()-1)/2,Temp.paz.end());
         Temp.rez_med=(Temp.paz[Temp.paz.size()/2]+Temp.paz[(Temp.paz.size()-1)/2])/2;
    }
    else {
        nth_element(Temp.paz.begin(),Temp.paz.begin() + Temp.paz.size()/2,Temp.paz.end());
        Temp.rez_med=Temp.paz[Temp.paz.size()/2];
    }}
    Temp.rez_med=(Temp.rez_med*0.4)+(Temp.egz*0.6);
}
void atsitiktiniai(studentas &Temp){
    cout << "Iveskite varda ir pavarde: ";
    cin >> Temp.var >> Temp.pav;
    int n;
    cout << "Iveskite, kiek studentas turejo namu darbu: ";
    iv_ir_tikr(n);
    ar_daugiau0(n);
    srand((unsigned) time(NULL));
    for (int i=0;i<n;i++){
        int k = 1 + (rand() % 10);
        Temp.paz.push_back(k);
    }
    Temp.egz=1 + (rand() % 10);
}

unsigned int zodziai(string const& str)
{
    std::stringstream stream(str);
    return std::distance(std::istream_iterator<string>(stream), std::istream_iterator<string>());
}
void skaitymas (vector<studentas> &Temp, int nd){
        int temp;
        int stud = 0;
        string buff;
        ifstream fr;
        try
        {
            fr.open("studentai1000000.txt");
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
    catch(...){}
}

void isvedimas_sufailu(vector<studentas> &Temp){
    printf("%-15s%-15s%-17s%-17s\n", "Vardas", "Pavarde", "Galutinis (Vid.)","Galutinis (Med.)");
    printf("----------------------------------------------------------------\n");
    for (auto &a: Temp){
    cout << setw(15) << left <<a.var << setw(15) << left << a.pav;
    printf("%-17.2f%-17.2f\n", a.rez_vid, a.rez_med);
    }
}

void isvedimas_i_faila(vector <studentas> &Temp){
    std::ofstream fr;
    try
        {
            fr.open("rezultatas.txt");
            if(!fr)throw std::runtime_error("FAILAS NERASTAS!");
            fr << setw(15) << left << "Vardas" << setw(15) << left << "Pavarde" << setw(17) << left << "Galutinis (Vid.)" << setw(17) << left << "Galutinis (Med.)" << endl;
            fr << "----------------------------------------------------------------" << endl;
            for (auto &a: Temp) { fr << setw(15) << left <<a.var << setw(15) << left << a.pav;
            fr << std::fixed;
            fr << setw(17) << left << setprecision(2) << a.rez_vid << setw(17) << left << setprecision(2) << a.rez_med << endl;}
            }
    catch(int e){};
    fr.close();
}


