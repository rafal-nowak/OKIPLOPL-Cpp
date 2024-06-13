# Podstawy języka C++

## Wprowadzenie do wczytywania i wyświetlania danych

### Różnice między scanf/printf a cin/cout:

- `scanf` i `printf` pochodzą z języka C i są częścią biblioteki `stdio.h`. Są one bardziej wydajne niż `cin` i `cout`,
  ponieważ nie wykonują buforowania strumieniowego.
- `cin` i `cout` pochodzą z języka C++ i są częścią biblioteki `iostream`. Są one bardziej przyjazne dla użytkownika,
  ale mniej wydajne domyślnie ze względu na synchronizację z buforem C.

### Optymalizacja wejścia/wyjścia:

- `ios_base::sync_with_stdio(false);` wyłącza synchronizację cin/cout z stdio dla szybszego przetwarzania.
- `cin.tie(0);` odłącza strumień wejściowy cin od strumienia wyjściowego cout, co pozwala na szybsze operacje wejściowe
  bez czekania na zakończenie operacji wyjściowych.

### Ostrzeżenie przed mieszaniem metod:

- Gdy wyłączymy synchronizację za pomocą `ios_base::sync_with_stdio(false);`, nie wolno mieszać `cin`/`cout`
  z `scanf`/`printf`, ponieważ może to prowadzić do nieprzewidywalnego zachowania programu.

## Typy danych i ich właściwości

### Typy danych:

- `int`: Całkowita liczba o standardowej wielkości, zwykle 32-bitowa.
- `long`: Całkowita liczba o większej wielkości, zwykle 64-bitowa.
- `float`: Liczba zmiennoprzecinkowa pojedynczej precyzji, 32-bitowa.
- `double`: Liczba zmiennoprzecinkowa podwójnej precyzji, 64-bitowa.
- `long double`: Liczba zmiennoprzecinkowa zwiększonej precyzji, może mieć 80 lub 128 bitów.
- `char`: Pojedynczy znak, zazwyczaj 8 bitów.
- `bool` : Typ logiczny przechowujący wartość true lub false, zazwyczaj 8 bitów.

### Zakresy i maksymalne wartości:

- Omówienie zakresów poszczególnych typów danych oraz ich maksymalnych wartości dostępnych w bibliotece <climits> dla
  liczb całkowitych i <cfloat> dla liczb zmiennoprzecinkowych.

### String

#### Inicjalizacja i konkatenacja:

- Łańcuchy znaków można inicjalizować przy użyciu operatora `=`.
- Łańcuchy znaków można łączyć przy użyciu operatora `+`.

#### Długość łańcucha:

- Metoda `length()` zwraca liczbę znaków w łańcuchu.

#### Dostęp do poszczególnych znaków:

- Znaki w łańcuchu można uzyskać za pomocą operatora indeksowania `[]`.

#### Znajdowanie podłańcucha:

- Metoda `find()` zwraca pozycję pierwszego wystąpienia podłańcucha, lub `std::string::npos` jeśli podłańcuch nie został
  znaleziony.

#### Zamienianie podłańcucha:

- Metoda `replace()` zamienia część łańcucha na inny łańcuch.

#### Usuwanie znaków:

- Metoda `erase()` usuwa określoną część łańcucha.

#### Wstawianie podłańcucha:

- Metoda `insert()` wstawia podłańcuch w określonej pozycji.

#### Podłańcuch (substring):

- Metoda `substr()` zwraca podłańcuch zaczynający się od określonej pozycji i mający określoną długość.

#### Porównywanie łańcuchów:

- Łańcuchy można porównywać za pomocą operatorów porównania (`==`, `!=`).

#### Konwersja liczby do łańcucha i odwrotnie:

- Funkcja `std::to_string()` konwertuje liczbę na łańcuch.
- Funkcja `std::stoi()` konwertuje łańcuch na liczbę całkowitą.

## Podstawy programowania obiektowego

### Klasy i obiekty:

- Klasa to szablon definiujący właściwości (pola) i zachowania (metody) obiektów.
- Obiekt to instancja klasy.

### Elementy klasy:

- **Deklaracja**: Definicja klasy z polami i metodami.
- **Konstruktor**: Specjalna metoda wywoływana podczas tworzenia obiektu, służąca do inicjalizacji pól.
- **Destruktor**: Specjalna metoda wywoływana podczas niszczenia obiektu, służąca do zwalniania zasobów.

### Tworzenie własnych struktur danych:

- Definiowanie własnych typów danych (struktur) przy użyciu klas.
- **Dziedziczenie**: Mechanizm pozwalający jednej klasie dziedziczyć właściwości i metody innej klasy.
- **Polimorfizm**: Możliwość używania obiektów różnych klas poprzez wspólny interfejs bazowy.

## Instrukcje sterujące w C++

### Instrukcja warunkowa `if-else`:

- Umożliwia wykonanie różnych bloków kodu w zależności od spełnienia określonych warunków. Można użyć dodatkowych
  klauzul `else if`, aby sprawdzić kolejne warunki, oraz klauzuli `else`, aby wykonać kod, jeśli żaden z wcześniejszych
  warunków nie został spełniony.

### Operator warunkowy (ternary operator):

- Umożliwia przypisanie wartości na podstawie warunku w jednej linijce.
  Składnia: `(warunek) ? wartość_jeśli_true : wartość_jeśli_false;`.

### Operatory logiczne:

- Służą do łączenia wyrażeń logicznych. Najczęściej używane to `&&` (AND), `||` (OR) oraz `!` (NOT). Umożliwiają
  tworzenie złożonych warunków logicznych.

### Pętla `for`:

- Umożliwia iterowanie przez blok kodu określoną liczbę razy. Składa się z trzech części: inicjalizacji, warunku
  kontynuacji oraz inkrementacji/dekrementacji. Jest często używana, gdy liczba iteracji jest znana z góry.

### Pętla `while`:

- Umożliwia iterowanie przez blok kodu tak długo, jak warunek jest prawdziwy. Jest używana, gdy liczba iteracji nie jest
  znana z góry, ale zależy od warunku sprawdzanego przed każdą iteracją.

### Pętla `do-while`:

- Podobna do pętli `while`, ale gwarantuje, że blok kodu zostanie wykonany przynajmniej raz, ponieważ warunek jest
  sprawdzany po wykonaniu bloku kodu.

### Pętla `range-based for`:

- Umożliwia iterowanie przez elementy kolekcji (takiej jak tablica lub kontener STL) bez konieczności posługiwania się
  indeksami. Jest bardziej czytelna i mniej podatna na błędy niż klasyczna pętla `for`.

### Instrukcja `switch-case`:

- Umożliwia wykonanie różnych bloków kodu w zależności od wartości zmiennej. Każda gałąź `case` odpowiada jednej
  możliwej wartości zmiennej. Instrukcja break jest używana do zakończenia każdej gałęzi case, aby zapobiec "
  przepływowi" do następnych przypadków. `default` jest opcjonalną gałęzią, która zostanie wykonana, jeśli żadna z
  wartości `case` nie pasuje.

## Wskaźniki i iteratory

### Podstawy wskaźników:

- Wskaźniki są zmiennymi przechowującymi adresy innych zmiennych.
- Deklaracja wskaźnika: `int *p;`.
- Inicjalizacja wskaźnika: `p = &a;`.
- Dereferencja wskaźnika: `*p` daje dostęp do wartości, na którą wskazuje wskaźnik.

### Iteratory:

- Iteratory są wskaźnikami używanymi do przeglądania elementów w kontenerach STL.
- Typowe metody iteracyjne: `begin()`, `end()`, `rbegin()`, `rend()`.
- Przykłady użycia iteratorów w kontenerach takich jak vector, list, set.
- **Deklaracja**: `vector<int>::iterator it;` - iterator do wektora typu int.
- **Inkrementacja**: `++it;` - przesunięcie iteratora do następnego elementu.
- **Dereferencja**: `*it` - dostęp do wartości, na którą wskazuje iterator.

## Funkcje i algorytmy

### sort:

- Algorytm sortowania w STL, który sortuje elementy w przedziale określonym przez iteratory.
- Funkcja sort z biblioteki standardowej C++ sortuje elementy w kontenerze w porządku rosnącym.
- Sygnatura: `sort(begin, end);` - sortuje elementy od `begin` do `end`.

### min, max:

- Funkcje znajdujące minimalną i maksymalną wartość z dwóch lub więcej wartości.
- Sygnatura: `min(a, b);`, `max(a, b);`

### binary_search:

- Funkcja sprawdzająca, czy dany element znajduje się w posortowanej kolekcji.
- Sygnatura: `binary_search(begin, end, value);`

### lower_bound, upper_bound:

- **lower_bound**: Znajduje pierwszy element, który nie jest mniejszy od zadanego.
- Sygnatura: `lower_bound(begin, end, value);`
- **upper_bound**: Znajduje pierwszy element, który jest większy od zadanego.
- Sygnatura: `upper_bound(begin, end, value);`

## Struktury danych

### Tablica:

- Stała struktura danych o ustalonej wielkości.
- Przechowuje elementy tego samego typu w sąsiadujących miejscach w pamięci.
- Oferuje szybki dostęp do elementów przez indeksowanie.

### Vector:

- Dynamiczna tablica, której rozmiar może być zmieniany w trakcie działania programu.
- Często używana ze względu na elastyczność i wygodę w zarządzaniu pamięcią.
- Oferuje wszystkie zalety tablicy oraz dodatkowe funkcje zarządzania pamięcią.

### List:

- Dwukierunkowa lista, która umożliwia szybkie wstawianie i usuwanie elementów w dowolnym miejscu, ale ma wolniejszy
  dostęp do elementów przez indeksowanie.

### Stack:

- Struktura danych typu LIFO (Last In, First Out), gdzie elementy są dodawane i usuwane tylko na jednym końcu (
  wierzchołku).
- Operacje: `push` (dodanie elementu), `pop` (usunięcie elementu), `top` (dostęp do ostatniego elementu).

### Queue:

- Struktura danych typu FIFO (First In, First Out), gdzie elementy są dodawane na końcu i usuwane z początku.
- Operacje: `push` (dodanie elementu), `pop` (usunięcie elementu), `front` (dostęp do pierwszego elementu).

### Priority_queue:

- Specjalna wersja kolejki, gdzie każdy element ma przypisany priorytet, a element o najwyższym priorytecie jest usuwany
  jako pierwszy.
- Implementowana najczęściej jako kopiec binarny.

### Deque:

- Dwukierunkowa kolejka, która umożliwia szybkie wstawianie i usuwanie elementów na obu końcach.

### Set:

- Kontener przechowujący unikalne elementy w uporządkowany sposób.
- Umożliwia szybkie wyszukiwanie, dodawanie i usuwanie elementów.
- Operacje są wykonywane w czasie O(log n).

### Bitset:

- Specjalna struktura przechowująca zbiór bitów, oferująca operacje na poziomie bitowym.

### Pair:

- Struktura przechowująca dwie wartości jako parę, często używana w połączeniu z innymi strukturami danych, takimi jak
  mapy.

### Map:

- Kontener przechowujący pary klucz-wartość, gdzie każdy klucz jest unikalny.
- Umożliwia szybkie wyszukiwanie wartości na podstawie klucza.
- Operacje są wykonywane w czasie O(log n).

### Unordered_map:

- Niezuporządkowana wersja mapy, która oferuje średnio szybsze operacje wstawiania, wyszukiwania i usuwania dzięki
  użyciu tabeli haszującej.
- Operacje są wykonywane w czasie średnio O(1).

### Różnica między strukturami danych `std::list` i `std::deque` w C++

#### `std::list`

- Implementacja: `std::list` jest implementacją dwukierunkowej listy powiązanej (doubly linked list). Każdy element
  przechowuje wskaźniki do następnego i poprzedniego elementu.
- Wydajność:
    - Operacje wstawiania i usuwania elementów (na początku, w środku i na końcu) są szybkie i mają złożoność czasową O(
      1), ponieważ wymagają jedynie zmiany wskaźników.
    - Dostęp do elementów (indeksowanie) jest wolny i ma złożoność czasową O(n), ponieważ trzeba przejść przez elementy
      jeden po drugim.
- Funkcjonalność: `std::list` pozwala na:
    - Wstawianie i usuwanie elementów w środku listy za pomocą iteratorów.
    - Przechodzenie przez listę w obu kierunkach.

#### `std::deque`

- Implementacja: `std::deque` (double-ended queue) jest implementacją dynamicznej tablicy o dwóch końcach. Jest to
  kolekcja bloków pamięci, które mogą być łatwo rozszerzane na obu końcach.
- Wydajność:
    - Operacje wstawiania i usuwania elementów na początku i na końcu mają złożoność czasową amortyzowaną O(1).
    - Dostęp do elementów (indeksowanie) jest szybki i ma złożoność czasową O(1), ponieważ `std::deque` wspiera losowy
      dostęp do elementów.
- Funkcjonalność: std::deque pozwala na:
    - Wstawianie i usuwanie elementów na obu końcach (początek i koniec).
    - Losowy dostęp do elementów za pomocą operatora `[]`.
    - Działania na elementach za pomocą iteratorów podobnych do `std::vector`.

#### Porównanie i Scenariusze Użycia

- `std::list`:

    - Używaj, gdy musisz często wstawiać lub usuwać elementy w środku listy, ponieważ operacje te są bardzo szybkie.
    - Przykłady zastosowań: algorytmy sortowania i inne operacje wymagające częstego wstawiania/usuwania elementów.

- `std::deque`:

    - Używaj, gdy potrzebujesz efektywnego dostępu losowego do elementów oraz szybkiego wstawiania i usuwania elementów
      na obu końcach.
    - Przykłady zastosowań: implementacje kolejek i stosów, gdzie operacje na obu końcach są częste, a także gdy
      potrzebujesz losowego dostępu do elementów.

#### Unikalne Funkcjonalności

- `std::list`:

    - Unikalna funkcjonalność: `std::list` umożliwia wstawianie/usuwanie elementów w dowolnym miejscu listy za pomocą
      iteratorów w czasie O(1).

- `std::deque`:

    - Unikalna funkcjonalność: `std::deque` umożliwia szybki dostęp swobodny do elementów za pomocą operatora `[]`, co
      jest niedostępne w `std::list`.

### Różnice między `std::map` a `std::unordered_map`

- Porządek elementów:

    - `std::map` przechowuje elementy w posortowanej kolejności według kluczy.
    - `std::unordered_map` przechowuje elementy w nieuporządkowanej kolejności, ponieważ używa tablicy haszującej.
- Czas operacji:

    - Operacje takie jak wstawianie, usuwanie i wyszukiwanie w `std::map` mają złożoność czasową O(log n), ponieważ są
      oparte na drzewie czerwono-czarnym.
    - Operacje te w `std::unordered_map` mają średnią złożoność czasową O(1), ale w najgorszym przypadku mogą wynosić O(
      n) z powodu kolizji w tablicy haszującej.
