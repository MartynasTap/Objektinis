# Objektinis
Programa papildyta galimybe naudoti std::list vietoj std::vector studentu duomenim. Taip pat papildyta isvedimu adreso, kur atmintyje yra saugomas studento objektas (rankinio ivedimo atvejui).

Naudotos testavimui sistemos parametrai:
CPU -  Intel(R) Core(TM) i5-1035GZ CPU @ 1.20GHz, 1498Mhz;
RAM - 8.00 GB
HDD - 236 GB;
Laikai lenteleje pakeiti kaip 3 atliktu bandymu laiku vidurkiai.
---
| Duomenu kiekis|List|Vector|
|---|---|---|
| 1000  | 0.0506 s | 0.0623 s |
| 10000 | 0.1464 s | 0.1424  s |
| 100000  |1.3552 s | 1.2644 s |
| 1000000  | 14.9634 s | 14.8051 s |
| 10000000  | 166.7486 s | 153.9346 s |
---

Issamus duomenys pateikti zemiau

std::list operaciju trukmes:
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/c275debb-d89b-4bce-9305-501490bc6399)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/6ba8f083-1e65-4679-862b-d677cf06c97f)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/57a29c4a-1295-48a7-8e01-42efde27159c)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/590bbd1d-fd83-4a30-8aad-e0e59de337c5)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/1a484f77-8610-4475-8398-3266ab662cbc)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/e0251c63-5286-4314-b7c8-67831ce43880)

std::vector operaciju trukmes:
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/3532e406-7f8b-4e41-8e51-07cef50ee07a)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/71f5b4b8-d4e5-4c54-829a-e2e718edb5e5)
![image](https://github.com/MartynasTap/Objektinis/assets/145481815/479bc492-8059-4e2b-ab55-c027226640fe)

