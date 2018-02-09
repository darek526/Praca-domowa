Linux podstawowe komendy
=========================
    cd
 – zmienia aktualny katalog (od 'change directory')
   
    cd dirname 
  – zmienia aktualny katalog na 'dirname'

    cd dir1/dir2/dir3 
– wchodzi do katalogu 'dir3', który jest w katalogu 'dir2', który jest w 'dir1'
    
    cd  
– z dowolnego miejsca, zmienia katalog na domowy
    
    cd ..
– przechodzi do katalogu o jeden wyższego w drzewie katalogów niż obecny

    cd /home/dir 
– z dowolnego miejsca, przechodzi do katalogu zaczynając od początku drzewa: /
        
    cd -  
– przechodzi do poprzedniego katalogu

    pwd 
– wypisuje scieżkę obecnego katalogu (od 'print working directory')

    ls 
– listuje katalog
    
    ls 
– listuje katalog . (ls .)

    ls plik1 plik2 plik3 
– listuje tylko wymienione pliki

    ls *.txt 
– wypisze wszystkie pliki o nazwie konczącej się na '.txt'

    ls katalog1 katalog2 
– listuje wymienione katalogi

    ls -l 
– szczegółowa lista

    ls -a 
– wypisuje również ukryte pliki (czyli te których nazwa zaczyna się kropką)

    ls -R 
– listuje katalogi rekursywnie (czyli wyświetla również zawartość podkatalógow)

    ls -d 
– wyświetla tylko nazwy katalogow, tak jak zwyczajnych plików, czyli nie listuje ich zawartości

    cat 
– wypisuje wszystkie podane mu pliki na standardowe wyjście

    cat plik 
– jeśli nie przekierujemy standardowego wyjścia do innego pliku (>, >>) lub programu (|), to wypisze plik na ekran

    cat plik1 plik2 plik3 
– wypisze po kolei zawartość wszystkich plików

    tac 
– wypisuje wszystkie podane mu pliki na standardowe wyjście, ale w odwraca kolejność linii

    tac plik1 plik2 
– wypisze połączone oba pliki, od ostatniej do pierwszej lini

    echo 
– powtarza na standardowym wyjściu słowa podane w argumencie

    echo costam wypisz, czy echo "costam wypisz" 
– wypisze 'costam wypisz' i zakończy znakiem nowej linii

    echo -n "costam wypisz" 
– po wypisaniu argumentów, nie wypisze znaku nowej linii

    wc 
– liczy linie, słowa, i znaki w pliku
gdy nie podamy argumentu, czyta ze standardowego wejścia

    cat plik1 plik2 | wc -l 
– policzy wszystkie linie z połączonych plików plik1 plik2
    
    wc plik 
– wypisze linie słowa i znaki oraz nazwe pliku

    wc -m 
– tylko znaki (lub --chars)

    wc -l 
– tylko linie (lub --lines)

    wc -w 
– tylko słowa (lib --words)
    
    less 
– wygodne i szybkie przegladanie plikow tekstowych
    
    less plik 
– wyświetla zawartośc pliku i pozwa przewijac strony (q-wyjscie)

Pliki i katalogi
================
    touch 
– zmienia czas dostępu i modyfikacji pliku, lub jeśli plik nie istnieje - tworzy go.

    cp 
– kopiuje plik

    cp plik1 plik2 
– stworzy ./plik2 identyczny z plik1

    cp plik3 ../katalog/jakis/ 
– stworzy plik ../katalog/jakis/plik3

    cp pom.* podkatalog/ 
– skopiuje wszystkie pliki zaczynające się na 'pom.' do ./podkatalog/

    cp plik5 ~/katalog/jakis/pliczek 
– stworzy plik ~/katalog/jakis/pliczek

    mv 
– przesuwa plik (tym samym służy również do zmiany nazwy)

    mv plik1 plik2 
– zmieni nazwę pliku z ./plik1 na plik2

    mv plik3 ../katalog/jakis/ 
– przesunie plik do ../katalog/jakis/plik3

    mv plik4 podkatalog/ 
– przesunie plik ./podkatalog/plik4

    mv plik5 ~/katalog/jakis/pliczek 
– przesunie i zmieni nazwę ~/katalog/jakis/pliczek

    rm 
– kasuje plik

    rm -r katalog 
– kasuje wszystko w katalogu i wszystkie jego podkatalogi (--recursive)

    rm -f plik 
– nie pyta się czy skasować (--force)

    mkdir 
– tworzy katalog

    rmdir 
– usuwa pusty katalog

    chmod 
– zmienia prawa dostępu do pliku
grupy użytkowników: u - user, g - group, o - others, a - all
prawa dostępu: r - read, w - write, x - execute

    chmod o+r plik 
– udziel innym prawo do czytania pliku

    chmod a-x plik 
– zabierz wszystkim prawo do wykonywania pliku

    chmod g=rw plik 
– ustaw prawa do czytania i pisania dla swojej grupy

    chmod -R go+w katalog 
– ustawia prawa wszystkim plikom w katalogu i jego podkatalogach 

    locate 
– wypisuje gdzie ostatnio, na tym komputerze, był widziany plik o podanej nazwie (lub fragmencie nazwy)
locate raport.txt – locate pdf

    find 
– przejrzyj katalog w poszukiwaniu danego pliku
find . -name raport.txt
find /home/user -name "rap*xt"
