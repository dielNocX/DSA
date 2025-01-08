#include <iostream>

#include <bits/stdc++.h>


// https://codeforces.com/contest/2057/problem/B
using namespace std;
#define se second
#define fi first 
typedef long long ll;


long long calculateScore(string s) {
    unordered_map<char,char> rev;

    for()
    for (long long i=0;i<n;i++){
        if ()
    } 
}   

    int main() {
        ll t,n,k;
        cin >> t;
        while (t--){
            cin >> n>>k;
            cout << solve(n,k)<<'\n';
        }
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
