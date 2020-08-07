# PlayGroundEnea

Problema 1: Fixati erorile de compilare astfel incat linia 22 din fisierul PlayGround.cpp (nemodificata) sa se execute cu succes. 
Comentariile, explicatiile sau imbunatatirile de orice fel sunt incurajate. Apreciem un stil consistent de coding (aliniere, ordonare etc.)


Problema 2
Creati o coada async de evenimente. Evenimentele sunt stringuri. Se pot 'posta' evenimente in coada si se pot inregistra 'listeneri' care asculta la evenimente.
Listenerii pot alege sa se inregistreze in 3 feluri: sa fie notificati cand un anumit substring pe care il specifica la inregistrare este
substring al unui eveniment, sa fie notificati pt toate evenimentele dar pana la un numar maxim de evenimente pe care il specifica la 
inregistrare sau la un interval regulat de timp, specificat la inregistrare (valorile pt interval de timp sunt specificate folosind un enum: 50ms, 100ms, 150ms).