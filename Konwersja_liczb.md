KONWERSJA LICZB Z RÓŻNYCH SYSTEMÓW LICZBOWYCH
===========================================
Konwersja liczb z systemu 10 na 2.
---------------------------------------------
## 1 metoda(dzielenie) liczbe zapisaną w systemie dziesiętnym dzielimy przez 2 jeśli wynik jest bez reszty piszemy 0 jeśli z resztą 1 tak do końca

| liczba dziesiętna |wynik dzielenia przez 2 |reszta 0 V 1|
| ------ | ------ |  ------ |
|251 |125| 1|
| 125|62|1|
| 62 |31|0|
| 31| 15|1|
|15 | 7|1 |
| 7| 3| 1 |
| 3| 1| 1 |
| 1| 0| 1 |

Wynik odczytujemy od dołu do góry 11111011

251(<sub>10</sub>)=11111011(<sub>2</sub>)

## 2 metoda (odejmowanie) to wykorzystanie tabelki z kolejnymi potęgami liczby 2. 
>Polega na tym, że znajdujemy w górnej pozycji potęgę liczby 2 o największej wartości która mieści się w szukanej liczbie dziesiętnej i odejmuje je od siebie:

    251 - 128 = 123

>szukamy kolejnej potegi liczby  o największej wartości która mieści się w 123 i odejmujemy:
    
    123 - 64 = 59

>szukamy kolejnej potegi liczby  o największej wartości która mieści się w 59 i odejmujemy:
    
    59 - 32 = 27

>szukamy kolejnej potegi liczby  o największej wartości która mieści się w 32 i odejmujemy:
    
    27 - 16 = 11

>szukamy kolejnej potegi liczby  o największej wartości która mieści się w 11 i odejmujemy:
    
    11 - 8 = 3

>szukamy kolejnej potegi liczby  o największej wartości która mieści się w 3 i odejmujemy:
    
    3 - 2 = 1

>szukamy kolejnej potegi liczby  o największej wartości która mieści się w 1 i odejmujemy:
    
     1 - 1 = 0

Otrzymujwynik zero koniec operacji. Teraz w tabelce wpisujemy 1 po tymi potęgami których używaliśmy do odejmowania, pozostałe pozycje wpisujemy 0. Pomijamy zera z lewej strony. Odczytujemy wynik z tabeli dolnej:

    11111011
    
251(<sub>10</sub>)=11111011(<sub>2</sub>)

8192 |4096 |2048|1024 |512 |256 |128 |64 | 32 |16 | 8 |4|2|1|
| - | - | - | - | - | -| - | - | - | - | - | - |  -| - |  
|2<sup>13</sup>|2<sup>12</sup>|2<sup>11</sup>|2<sup>10</sup>|2<sup>9</sup>|2<sup>8</sup>|2<sup>7</sup>|2<sup>6</sup>|2<sup>5</sup>|2<sup>4</sup>|2<sup>3</sup>|2<sup>2</sup>|2<sup>1</sup>|2<sup>0</sup>|
 | 0 |0 | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 0 | 1| 1 |
 
 Konwersja liczb z systemu 2 na 10.
---------------------------------------------
## 1 metoda (potęgowanie) polega na dodawaniu potęg:
11111011(<sub>2</sub>)
