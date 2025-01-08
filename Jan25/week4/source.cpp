    #include <iostream>
    
    #include <bits/stdc++.h>
    
    using namespace std;
    #define se second
    #define fi first 
    typedef long long ll;
bool sortFrekuensi(const pair<ll, ll> &x, const pair<ll, ll> &y) {
    if (x.second == y.second) {
        return x.first < y.first; // kalau elemen sama maka berdasarkan nilai bilangan
    }
    return x.second < y.second; //descending frekuensi


    }

ll solve(ll n,ll k) {
        vector<ll> A(n); ll count =k;
        unordered_map<ll,ll> m;

        for (ll i=0;i<n;i++){
            cin >>A[i];
            m[A[i]]++;

        }

        vector<pair<ll,ll>> v(m.begin(),m.end());
        sort(v.begin(), v.end(), sortFrekuensi);

    /*tes
    for (const auto& p : v) {
        cout << "(" << p.fi << ", " << p.se << ")\n";
    }*/


        ll j=0;
        while (j < static_cast<ll>(v.size()) && count - v[j].se>=0){
            count -= v[j].se;
            j++;
        }
        return max(static_cast<ll>(v.size())-j,1LL);


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
