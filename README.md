# STOS
## Stos
Napisz program, który w 10-elementowej tablicy symuluje działanie stosu. Na początku stos jest pusty, a następnie ma się zapełniać lub opróżniać zgodnie z wczytanymi z wejścia poleceniami.

### Wejście
Na wejście programu podana zostanie pewna nieokreślona liczba zestawów danych. Zestawy składają się albo z jednej linii zawierającej znak - (polecenie zdjęcia liczby ze stosu i wypisania jej na wyjście), albo dwóch linii, z których pierwsza zawiera znak + (polecenie wstawienia liczby na stos), a druga niewielką liczbę całkowitą. Poszczególne zestawy zostaną rozdzielone znakiem nowej linii.

### Wyjście
Na wyjściu programu ma się pojawić ciąg napisów będących rezultatem wykonania pojawiających się na wejściu poleceń (jeżeli polecenie udało się wykonać, to wypisujemy jego rezultat: w przypadku wstawienia liczby na stos wypisujemy ':)'; w przypadku zdjęcia liczby jej wartość; w przypadku błędu ':('). Poszczególne napisy należy rozdzielić znakami nowej linii.

### Przykład
**Wejście:**
+
1
+
2
+
3
+
4
+
5
+
6
+
7
+
8
+
9
+
0
+
1
-
-
-
-
-
-
-
-
-
-
-

**Wyjście:**
:)
:)
:)
:)
:)
:)
:)
:)
:)
:)
:(
0
9
8
7
6
5
4
3
2
1
:(
