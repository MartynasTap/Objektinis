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
Programos veikimo spartos analizei isbandytos 3 duomenu rusiavimo i dvi grupes strategijos. 1 - skaidymas i dvi grupes paliekant pradinius duomenis grupe konteineryje. 2 - perkelimas studento duomenu i vargsiuku konteineri ji iskart panaikinant is pradines. 3 - 4 strategija pridejus remove_if() ir list.remove_if() duomenu salinimui is pradinio konteinerio, 4 - studento duomenu perkelimas i vargsiuku konteineri ir ju kopijas istrinant is studento konteinerio vienu kartu (mano naudota strategija, kuri nesutapo su 1 ar 2).

Zemiau pateikiamoje lenteleje yra rusiavimo i dvi grupes trukme priklausomai nuo naudotos strategijos. 

Naudotos testavimui sistemos parametrai: CPU - Intel(R) Core(TM) i5-1035GZ CPU @ 1.20GHz, 1498Mhz; RAM - 8.00 GB HDD - 236 GB;
|Duomenu kiekis|	1 strategija Vector	| 1 strategija List|	2 strategija Vector	| 2 strategija List|	3 strategija Vector	| 3 strategija List| 4 strategija Vector | 4 strategija List|
|---|---|---|---|---|---|---|---|---|
|1000| 0 s|0.0025248 s|0.0473961 s|0.000993 s|0 s|0.0009905 s|0 s | 0.0156233 s |
|10000| 0.0156885 s|0.0146857 s|2.67553 s|0.0049632 s|0.0019951 s|0.0073684 s|0 s | 0  s |
|100000|0.0477145 s|0.142187 s|525.383 s|0.0577773 s|0.0172618 s|0.0840933 s| 0.0323181 s | 0.0781924 s |
|1000000|0.504343 s|1.48332 s|>10 min|0.635827 s|0.19523 s|0.957471 s|0.245965 s | 0.865573 s |
|10000000|6.22116 s|33.8217 s|>10 min|11.177 s|2.21647 s|20.3378 s| 3.09857 s | 10.4231 s |

Remiantis siais duomenimis galima padaryti kelias isvadas:
1. 1 strategija smarkiai paveikia list veikimo laika, del papildomai naudojamos atminties triju uzpildytu konteineriu islaikymui.
2. 2 strategija labai smarkiai paveikia vector konteinerio veikimo laika, kadangi siais strukturai sunku naikinti po viena elementa, todel rusiavimo laikas smarkiai isaugo. Si strategija list nepaveike.
3. 4 strategija veikia greciausiai is 1,2,3, o prie jos pridejus remove_if() ir list.remove_if(), rusiavimo sparta pagreiteja vector atveju, bet suleteja list atveju. Taigi vector veikia greiciau naudojant remove_if(), o list veikia greiciau naudojant list.erase().

Pilnu veikimo laiku nuotraukos pateikiamos zemiau:

vector

![image](https://github.com/MartynasTap/Objektinis/assets/145481815/2371c4c2-db21-46a8-8f71-57d174415374)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/456305c5-651f-4089-aefc-86443e45b5a5)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/c039221d-8fce-4d6f-9154-812f7763896c)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/f88f1bdf-9500-44e7-8c23-c72e6c2f0844)

list

![image](https://github.com/MartynasTap/Objektinis/assets/145481815/f78d974c-1d1a-4ef6-9780-b5cdf5ec8af0)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/2bff0815-fe00-4254-8b1f-3ebe1adaba48)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/bbeaff25-c2c9-4d5d-986e-750bd86d0e3c)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/367d982e-d72c-417d-87cd-bb9a83189937)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/421a0e60-a3c6-4fcd-9ca3-b6031c4f3f83)

