# Programos galutinė versija v1.0

## v0.1
V0.1 programos versija,kuri buvo pildoma is programos Pradine. Pakeitimai nuo Pradine versijos - vartotojas gali pasirinkti, ar nori, kad duomenys butu skaitomi is failo. Isvedami duomenys surusiuoti pagal studentu vardus ir sulygiuoti pagal pateikta pavyzdi reikalavimuose. Papildyta isimciu valdymu tikrinti, ar atidaromas failas egzistuoja, ar eilute, kuria norime paimti, nera tuscia. Taip pat tikrinant ar ivestas pazymys yra tarp 0 ir 10, ar pasirinkimo metu yra irasoma tik 0 arba 1, ar ivestas studentu skaicius/pazymiu skaicius daugiau uz 0. Idetas pasirinkimas isvesti duomenis i faila. Pagreitintas rusiavimas (prideta sort komanda vietoj rusiavimo algoritmo).

Pradine programos versija, kuri buvo pildoma is siu daliniu versiju: v.pradine.v.0.1 - Programa leidzianti ivesti naudotojui studento duomenis ranka ir pateikia suskaiciuota vidurki. Naudojami struct, vector, .h ir papildomas .cpp failas. v.pradine.v.0.2 - Programa papildyta medianos skaiciavimo funkcija, vartotojas gali pasirinkti ar nori matyti galutini pazymi suskaiciuota su mediana ar vidurkiu. Prideta nth_element funkcija jos skaiciavimui. v.pradine.v.0.3 - Programa papildyta galimybe vesti pazymius nezinant ju kieko is anksto, vartotojo yra klausiama, ar jau ivesti visi duomenys, ir jei taip, stabdoma programa. v.pradine.v.0.4 - Programa papildyta galimybe atsitiktinai generuoti studento namu darbu ir egzamino pazymius. Vartojo yra klausia pries ivedant bet kurio studento pazymius, ar jis noretu, kad jie butu generuoti atsitiktinai.

## v0.2
Programos v0.2 versija. Pridėta galimybė automatiškai sugeneruoti duomenų failus, studentų sarašas padalijmas į dvi grupes prieš išvedant į failus. Taip pat įdėtos laiko matavimo funkcijos tirti kiek užtrunka šios programos veiksmai: skaitymas iš failo, rušiavimas pagal vardus, skirstymas į dvi grupes, vienos grupės išvedimas į faila, antros grupės išvedimas į failą. Tai veikia su 1000, 10000, 100000,1000000 ir 10000000 įrašų failais. Programos veikimo laikai matomi v0.2 release readme faile.

## v0.3
Programa papildyta galimybe naudoti std::list vietoj std::vector studentu duomenim. Taip pat papildyta isvedimu adreso, kur atmintyje yra saugomas studento objektas (rankinio ivedimo atvejui).

Naudotos testavimui sistemos parametrai: CPU - Intel(R) Core(TM) i5-1035GZ CPU @ 1.20GHz, 1498Mhz; RAM - 8.00 GB HDD - 236 GB;
|Duomenu kiekis|	List	|Vector|
|---|---|---|
|1000	|0.0879302 s	|0.0425344 s|
|10000	|0.172178 s	|0.161486 s|
|100000	|1.59597 s	|1.37253 s|
|1000000	|18.3753 s	|15.5712 s|
|10000000	|210.203 s	|154.854 s|
