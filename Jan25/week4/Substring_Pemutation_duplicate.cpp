#include <bits/stdc++.h>
using namespace std;

void permuteRec(string& s, int idx, map<string, bool>& printed) {
    if (idx == s.size() - 1) {
        if (!printed[s]) {
            cout << s << endl;
            printed[s] = true;
        }
        return;
    }

    for (int i = idx; i < s.size(); i++) {
        swap(s[idx], s[i]);
        permuteRec(s, idx + 1, printed);
        swap(s[idx], s[i]);
    }
}

void permute(string& s) {
    map<string, bool> printed;
    permuteRec(s, 0, printed); 
}

int main() {
    string s;
    cin >> s;
    permute(s);
    return 0;
}

/* Penjelasan untuk:
1. Program ini digunakan untuk mencetak semua permutasi unik dari sebuah string.
2. Fungsi `permuteRec` adalah fungsi rekursif yang mencari semua permutasi dengan mencoba menukar karakter di string.
3. Jika indeks terakhir sudah tercapai (base case), string dicek apakah sudah pernah dicetak menggunakan map `printed`.
4. Jika belum pernah dicetak, string ditampilkan di layar dan ditandai di map `printed`.
5. Proses "swap" digunakan untuk mengubah urutan karakter, dan "backtrack" mengembalikan string ke urutan awal setelah rekursi selesai.
6. Fungsi `permute` adalah pembungkus untuk memulai proses permutasi, sekaligus membuat map kosong untuk melacak hasil yang sudah dicetak.
7. Map `printed` digunakan untuk memastikan bahwa setiap permutasi hanya dicetak satu kali.
8. Input string diberikan oleh pengguna, dan hasilnya ditampilkan di layar.
*/
