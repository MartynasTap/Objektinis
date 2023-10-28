# Objektinis
Programa papildyta galimybe naudoti std::list vietoj std::vector studentu duomenim. Taip pat papildyta isvedimu adreso, kur atmintyje yra saugomas studento objektas (rankinio ivedimo atvejui).

Naudotos testavimui sistemos parametrai:
CPU -  Intel(R) Core(TM) i5-1035GZ CPU @ 1.20GHz, 1498Mhz;
RAM - 8.00 GB
HDD - 236 GB;
---
| Duomenu kiekis|List|Vector|
|---|---|---|
| 1000  | 0.0879302 s | 0.0425344 s |
| 10000 | 0.172178 s | 0.161486  s |
| 100000  | 1.59597 s | 1.37253 s |
| 1000000  | 18.3753 s | 15.5712 s |
| 10000000  | 210.203 s | 154.854 s |
---

Issamus duomenys pateikti zemiau

std::list operaciju trukmes:
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/c275debb-d89b-4bce-9305-501490bc6399)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/6ba8f083-1e65-4679-862b-d677cf06c97f)

std::vector operaciju trukmes:
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/3532e406-7f8b-4e41-8e51-07cef50ee07a)

