Sortowanie.
======
Polega na uporządkowaniu zbioru danych względem pewnych cech charakteryzujących każdy elementu tego zbioru, biorąc pod uwagę wartość klucza elementu.

Sortowanie bąbelkowe (Bubble Sort):
---------------
Jest to jeden z prostszych algorytmów sortowania. Sprawdzamy całą tablicę od końca, jeżeli trafimy na parę elementów, w której większy poprzedza mniejszy to zamieniamy je miejscami. Po przejściu całej tablicy znów zaczynamy przeszukiwać tą tablicę od końca. 
Czynność powtarzamy tak długo aż podczas sprawdzania całej tablicy, nie zajdzie ani jedna zamiana elementów. Realizuje się to najczęściej za pomocą zmiennej logicznej.  Aby posortować dane, algorytm bąbelkowy wykonuje n-1 porównań, a więc np. dla tablicy w kórej mamy 9 elementów posortuje ją przechodząc 8 razy.
Algorytm nosi nazwę bąbelkowego, gdyż najmniejsze liczby "wypływają" z dołu tablicy na jej szczyt, podobnie jak bąbelki powietrza w wodzie.
Za jego pomocą możemy sortować tablice liczb a także tablice zawierające litery. Wynika to z faktu, że każdej literze odpowiada jakiś kod ASCII, więc kompilator automatycznie bierze pod uwagę te kody podczas sortowania.

Sortowanie przez wstawianie (Insertion sort):
----------------------------------------
Jeden z najprostszych algorytmów sortowania, którego zasada działania odzwierciedla sposób w jaki ludzie ustawiają karty – kolejne elementy wejściowe są ustawiane na odpowiednie miejsca docelowe. Jest efektywny dla niewielkiej liczby elementów, jego złożoność wynosi O(n2). Pomimo tego, że jest znacznie mniej wydajny od innych posiada zalety:
liczba wykonanych porównań jest zależna od liczby inwersji w permutacji, dlatego algorytm jest wydajny dla danych wstępnie posortowanych, jest wydajny dla zbiorów o niewielkiej liczebności, jest stabilny.

Sortowanie przez wybieranie (selection sort):
-----------------------------------------------
Jedna z prostszych metod sortowania o złożoności O(n2). Polega na wyszukaniu elementu mającego się znaleźć na żądanej pozycji i zamianie miejscami z tym, który jest tam obecnie. Operacja jest wykonywana dla wszystkich indeksów sortowanej tablicy.


| Algorytm | Złożoność                | Stabilny | Metoda |
|----------|--------------------------|----------|--------|
|           |średnia--najgorsz-  pamięciowa   |
| bubble-sort| O(n<sup>2</sup>) ---- O(n<sup>2</sup>) ------- O(1) |tak| zamiana|
| insert-sort| O(n + inv)- O(n<sup>2</sup>)------- O(1)| tak|wstawianie|
| select-sort| O(n<sup>2</sup>)------ O(n<sup>2</sup>)-------- O(1) |nie  |  selekcja|

Sortowanie przez proste wstawianie jest najbardziej efektywne i najczęściej stosowane dla małych ciągów. Z trzech przedstawionych prostych algorytmów ten jest najlepszy. Jest to także algorytm często stosowany w normalnym życiu, chociażby przy układaniu na ręce kart przy grze w brydża.

