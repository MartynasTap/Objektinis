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

## v1.0
Programos veikimo spartos analizei isbandytos 3 duomenu rusiavimo i dvi grupes strategijos. 1 - skaidymas i dvi grupes paliekant pradinius duomenis grupe konteineryje. 2 - perkelimas studento duomenu i vargsiuku konteineri ji iskart panaikinant is pradines. 3 - 4 strategija pridejus remove_if() ir list.remove_if() duomenu salinimui is pradinio konteinerio, 4 - studento duomenu perkelimas i vargsiuku konteineri ir ju kopijas istrinant is studento konteinerio vienu kartu.

Zemiau pateikiamoje lenteleje yra rusiavimo i dvi grupes trukme priklausomai nuo naudotos strategijos. 

Naudotos testavimui sistemos parametrai: CPU - Intel(R) Core(TM) i5-1035GZ CPU @ 1.20GHz, 1498Mhz; RAM - 8.00 GB HDD - 236 GB;
|Duomenu kiekis|	1 strategija Vector	| 1 strategija List|	2 strategija Vector	| 2 strategija List|	3 strategija Vector	| 3 strategija List| 4 strategija Vector | 4 strategija List|
|---|---|---|---|---|---|---|---|---|
|1000| 0 s|0.0025248 s|0.0473961 s|0.000993 s|0 s|0.0009905 s|0.0506 s | 0.0623 s |
|10000| 0.0156885 s|0.0146857 s|2.67553 s|0.0049632 s|0.0019951 s|0.0073684 s|0.1464 s | 0.1424  s |
|100000|0.0477145 s|0.142187 s|525.383 s|0.0577773 s|0.0172618 s|0.0840933 s|1.3552 s | 1.2644 s |
|1000000|0.504343 s|1.48332 s|>10 min|0.635827 s|0.19523 s|0.957471 s|14.9634 s | 14.8051 s |
|10000000|6.22116 s|33.8217 s|>10 min|11.177 s|2.21647 s|20.3378 s| 166.7486 s | 153.9346 s |
