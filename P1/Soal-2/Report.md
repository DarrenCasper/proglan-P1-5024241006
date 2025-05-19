# Report untuk soal 2

- Soal ke 2 meminta kita untuk melengkapi fungsi di main dibandingkan menyelesaikan class.

## Main Function

- Perhatiin Input yang diminta dia meminta hp dan attack power, serta dengan nama p1 finn, dan p2 Iceking
- Membuat deklarasi int dari hp1, hp2, atk power 1, dan atk power 2, serta string name untuk tau siapa yang start awal.
- Membuat constructor P1 dan P2 yang berisi Nama, Hp, dan attack power. tetapi P1 nama harus finn, dan P2 harus Ice King.
- Mebuat class Character yang pointer terhadap first dan second sebagai tambaan untuk mengetahui siapa yang start duluan.
- memakai if condition untuk pengecekan nama. assign first = &p1 jika nama finn, dan second = &p2.
- Membuat kondition looping bedasarkan hp P1 dan P2. tetapi dalam looping menggunakan first dan second karena dari urutan.
- sehingga tinggal mendisplay status awal dari input (dari first dan second bukan P1 atau P2 karena urutan attack).
- tinggal membuat fungsi first->attack(*second). dan sebelum attack bisa membuat cout untuk menampilkan siapa yang attack siapa.
- saat menampilkan siapa yang attack siapa bisa menggunakan fungsi getName dari public class Character.
- baru menambahkan fungsi jika player 2 itu not alive, maka break dari loopnya. sehingga melakukan if condition pengecekan akhir.
- untuk pengecekan akhir tinggal di lihat siapa yang masih is alive dengan bool condition dan di output siapa yang menang.