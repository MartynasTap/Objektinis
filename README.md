# Objektinis
Programos v0.2 versija.
Pridėta galimybė automatiškai sugeneruoti duomenų failus, studentų sarašas padalijmas į dvi grupes prieš išvedant į failus. Taip pat įdėtos laiko matavimo funkcijos tirti kiek užtrunka šios programos veiksmai: skaitymas iš failo, rušiavimas pagal vardus, skirstymas į dvi grupes, vienos grupės išvedimas į faila, antros grupės išvedimas į failą. Tai veikia su 1000, 10000 ir 100000 įrašų failais.

Programa papildyta, dabar veikia ir su 1000000, 10000000 įrašų failais. Isvedami programos kompiliavimo laikai. Atliktus testus 3 kartus visu laiku vidurkiai atrode taip:

Duomenu nuskaitymas is 1000 irasu failo uztruko: (0.016226 + 0.0155871 + 0.0309056)/3 = 0.020906
1000 irasu rusiavimas didejimo tvarka uztruko: (0 + 0 + 0)/3=0
1000 irasu dalijimas i dvi grupes uztruko: (0.0156452 + 0 + 0.0240136)/3 = 0.013219
1000 irasu vargsiukai irasymas i faila uztruko: (0.0156675 + 0.0156553 + 0) = 0.010440
1000 irasu kietekai irasymas i faila uztruko: (0.0176673 + 0 + 0.0075109)/3 = 0.008392

1000 irasu testo visa trukme: (0.065206 + 0.0312424 + 0.0624301)/3 = 0.052959

Duomenu nuskaitymas is 10000 eiluciu failo uztruko: (0.045623 + 0.0472405 + 0.0468854)/3 = 0.046582
10000 irasu rusiavimas didejimo tvarka uztruko: (0.0155838 + 0.0156668 + 0.0157087)/3 = 0.015653
10000 eiluciu dalijimas i dvi grupes uztruko: (0 + 0 + 0.015575)/3 = 0.005191
10000 irasu vargsiukai irasymas i faila uztruko: (0.03874 + 0.0312174 + 0.0161004)/3 = 0.028685
10000 irasu kietekai irasymas i faila uztruko: (0.0475057 + 0.0475057 + 0.0468914)/3 = 0.047300

10000 irasu testo visa trukme (0.14163 + 0.14163 + 0.141161)/3 = 0.141473

Duomenu nuskaitymas is 100000 eiluciu failo uztruko: (0.267138 + 0.266668 + 0.252327)/3 = 0.262044
100000 irasu rusiavimas didejimo tvarka uztruko: (0.126377 + 0.11001 + 0.125628)/3 = 0.120671
100000 eiluciu dalijimas i dvi grupes uztruko: (0.0629509 + 0.0645179 + 0.0479184)/3 = 0.058462
100000 irasu vargsiukai irasymas i faila uztruko: (0.250767 + 0.377143 + 0.251068)/3 = 0.292992
100000 irasu kietekai irasymas i faila uztruko: (0.424824 + 0.431727 + 0.361743)/3 = 0.406098

100000 irasu testo visa trukme (1.16363 + 1.28239 + 1.07)/3 = 1.172006

Duomenu nuskaitymas is 1000000 eiluciu failo uztruko: (3.06971 + 3.12348 + 2.84526)/3 = 3.012816
1000000 irasu rusiavimas didejimo tvarka uztruko: (1.49569 + 2.29747 + 1.47652)/3 = 1.75656
1000000 eiluciu dalijimas i dvi grupes uztruko: (0.487536 + 0.622785 + 0.518402)/3 = 1.628723
1000000 irasu vargsiukai irasymas i faila uztruko: (2.56377 + 3.56476 + 2.59396)/3 = 2.907496
1000000 irasu kietekai irasymas i faila uztruko:(3.79307 + 6.56515 + 3.69886)/3 = 4.685693

1000000 irasu testo visa trukme (11.6627 + 16.4952 + 11.4158)/3 = 13.191233

Duomenu nuskaitymas is 10000000 eiluciu failo uztruko: (26.5271 + 33.719 + 25.6026)/3 = 28.616233
10000000 irasu rusiavimas didejimo tvarka uztruko: (17.7877 + 22.3294 + 18.1971)/3 = 19.438066
10000000 eiluciu dalijimas i dvi grupes uztruko: (6.21287 + 7.90872 + 5.92573)/3 = 6.68244
10000000 irasu vargsiukai irasymas i faila uztruko: (27.5498 + 32.3476 + 27.2697)/3 = 29.0557
10000000 irasu kietekai irasymas i faila uztruko: (37.6719 + 44.1623 + 38.093)/3 = 39.975733

10000000 irasu testo visa trukme (118.218 + 143.478 + 117.71)/3= 126.468666

Papildyta kuriamu duomenu failu greicio analize:

Failo kurimas su 1000 irasu failo uztruko: 0.085811
Failo kurimas su 10000 irasu failo uztruko: 0.349229
Failo kurimas su 100000 irasu failo uztruko: 3.28032
Failo kurimas su 1000000 irasu failo uztruko: 72.0516
Failo kurimas su 10000000 irasu failo uztruko: 304.045



