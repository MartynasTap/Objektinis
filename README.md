# Objektinis
Programa papildyta galimybe naudoti std::list vietoj std::vector studentu duomenim. Taip pat papildyta isvedimu adreso, kur atmintyje yra saugomas studento objektas (rankinio ivedimo atvejui).
Sios versijos spartos analizei naudotas kitas kompiuteris, nei 0.2V, todel vektoriaus programos laikas siek tiek didesnis. Duomenu failai isliko tie patys.
Naudotos testavimo sistemos parametrai: 
CPU - Intel(R) Core(TM) i5-1035G1 CPU @ 1.00GHz   1.19 GHz
RAM - 8.00 GB
---
| Duomenu kiekis|List|Vector|
|---|---|---|
| 1000  | 0.0879302 s |
| 10000 | 0.172178  |
| 100000  | 1.59597  |
| 1000000  | 18.3753  |
| 10000000  | 210.203  |
---

Issamus duomenys pateikti zemiau

std::list operaciju trukmes:
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/c275debb-d89b-4bce-9305-501490bc6399)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/6ba8f083-1e65-4679-862b-d677cf06c97f)

std::vector operaciju trukmes:

