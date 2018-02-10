KOMENDY GIT
=============

    git init
Inicjalizuje repozytorium GIT w danym katalogu
    
    git add [nazwa_pliku]
Dodaje zmiany we wskazanym pliku do commita
    
    git add .
Dodaje wszystkie zmienione pliki do commita
    
    git add -p [nazwa_pliku]
Udostępnia możliwość dodania wybranych linii w zmodyfikowanym pliku do commita

    git commit -m "[treść_commita]"
Dodaje opis do commita. Dobrym zwyczajem jest opisanie co ta zmiana wprowadza do kodu w zakresie funkcjonalnym

    git add origin [adres_repozytorium, np.https://github.com/username/moje-repozytorium.git]
Ustawia konkretny adres zdalnego repozytorium jako główne repozytorium

    git push origin master
Wysłanie zmian do branacha zdalnego

    git push -f
Wysłanie zmian do zdalnego repozytorium ignorując konflikty, to znaczy, że jeśli wystapią konflikty to pliki zostaną nadpisane właśnie wysłaną wersją. Trzeba stosować to bardzo ostrożnie.

    git checkout [nazwa_brancha]
Zmienia aktywny branch na wybrany przez użytkownika

    git checkout [nazwa_pliku]
Usuwa zmiany w wybranym pliku

    git checkout .
Usuwa zmiany we wszystkich zmienionych plikach

    git checkout -b [nazwa_brancha]
Tworzenie nowego brancha z aktywnego brancha i przełączenie się na niego
    
    git rebase master
Zaciągnięcie zmian z brancha głównego do brancha aktywnego

    git push origin :[nazwa_brancha]
Usunięcie zdalnego brancha

    git branch -d [nazwa_brancha]
Usuwanie brancha lokalnie. Nie można usunąć w ten sposób aktywnego brancha

    git stash
Dodanie zmienonych plików do pamięci/stosu i usunięcie ich z aktywnego brancha

    git pull --rebase
Pobranie najnowszych zmian z aktywnego brancha zdalnego

    git stash pop
Przywrócenie zmodyfikowanych plików z pamięci/stosu

    git stash clear
Czyszczenie pamięci/stosu

    git remote prune origin
Pobranie aktualizacji o usuniętych branchach zdalnych

    git fetch --all
Pobranie listy zdalnych branchy
    
    git branch
Wyświetlenie listy lokalnych branchy

    git branch -r
Wyświetlenie listy zdalnych branchy

    git status
Wyświetlenie listy zmienionych plików

    git diff [nazwa_pliku]
Szczegółowe wyświetlenie zmian w wybranym pliku

    git reset HEAD
Resetowanie przygotowanych commitów (przed wysłaniem). Zmodyfikowane pliki są dostępne do ponownego dodania.

    git reset HEAD --hard
usuwanie wszystkich zmian z brancha lokalnego i przywrócenie zmian z brancha zdalnego

    git reset HEAD^ --hard
Usuwanie ostatniego commita z brancha

    git reset HEAD^^
    git reset HEAD~2
Obydwie komendy usuwają ostatnie 2 zmiany z brancha. Im więcej daszków (^) tym więcej commitów zostanie usuniętych.

    git rebase -i HEAD~3
Interaktywne zmienianie zawartości, opisów commitów. Commity mozna łączyć wtedy w jeden duży, zmienić jego opis, itd.

GITHUB
===========

Github jest serwisem internetowym działającym od kwietnia 2008r. z siedzibą w San Francisco, Kalifornia, USA. Przeznaczony dla projektów programistycznych wykorzystujących system kontroli wersji Git.
## Zakładanie konta.  
  
  https://github.com/signup/free

Po podaniu podtsawowych danych wybraniu loginu i hasła mamy już aktywne konto, dzięki któremu będziemy mogli tworzyć własne repozytoria, a także przeglądać i edytować inne. Wybrane konto jest darmowe, a więc nasze projekty będą typu Open Source i będą publicznie dostępne dla wszystkich odwiedzających. Jeśli natomiast zależy nam bardzo na ukryciu naszego konta należy zapłacić.
Teraz możemy przeglądać repezytoria innych osób aktualnie ok 31 milonów, lub stworzyć swoje własne. 
## Tworzenie reposytorium
    
    New repository
wpisujemy nazwę nowego projektu, opcjonalnie inne danne, zatwierdzamy i zostaniemy przeniesieni na stronę projektu, gdzie naszym oczom ukaże się strona z pomocą, dzięki której przejdziemy krok po kroku przez etapy konfiguracji wstępnej. 

    mkdir nazwa_projektu
    cd nazwa_projektu
    git init
    touch README
    git add README
    git commit -m 'nazwa zmian'
    git remote add origin git@github.com:USER/nazwa_projektu.git
    git push -u origin master
Dzięki tym poleceniom utworzymy na dysku w danym miejscu folder o nazwie naszego projektu, wejdziemy do niego, zainicjujemy GITa, stworzymy plik README, dodamy go do wysłania i zatwierdzamy z odpowiednim komentarzem. Następnie dodajemy ścieżkę do naszego źródła na serwerze (zamieniając USER na naszą nazwę użytkownika), a następnie wysyłamy kod na serwer za pomocą polecenia push. 
Możemy dodać program napisany wcześniej na naszym komputerze, wystarczy wpisać:

    cd nazwa_projektu
    git remote add origin git@github.com:USER/nazwa_projektu.git
    git push -u origin master
Wchodzimy do folderu z projektem, inicjujemy połączenie z reposytorium na serwerze i wysyłamy tam kod źródłowy

## Praca z repozytorium
Projekty możemy pobrać zarówno ze swojego konta lub innych osób. Możemy to zrobić na 3 sposoby:

    Clone in Desktop 
służacy do sklonowania przez aplikację GitHUB-a, o ile taką posiadamy

    Download ZIP 
zwykłe pobranie repozytorium w postaci archiwum zip

        copy to clipboard
Kopiujemy link do repozytorium, przechodzimy w kosoli do folderu w którym chcemy sklonować interesujące nas dane. Używamy polecenia:

    git clone 
i kopiujemy link:

    git clone https://github.com/nazwa_użytkownika/nazwa_projektu.git
możemy teraz pracować na pobranym repozytorium.

 
