#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
//dev by frdskndr
 int saldo = 1000000;

void projek1(){          
    //menghitung umur seseorang
    int tahun_lahir;
    int tahun_sekarang = 2023;
    string nama;
    cout<<"==================================="<<endl;
    cout<<"----menghitung umur seseorang------"<<endl;
    cout<<"==================================="<<endl;
    cout<<"masukan nama anda: "<<endl;cin>>nama;
    cout<<"masukan tahun lahir anda: "<<endl;cin>>tahun_lahir;

    int umur = tahun_sekarang - tahun_lahir;
    cout<<"nama anda adalah: "<<nama<<endl;
    cout<<"umur anda adalah: "<<umur<<endl;
    if(umur <10){
        cout<<"anda anak-anak"<<endl;
    }else if (umur < 20){
        cout<<"anda remaja"<<endl;
    }else if(umur < 50){
        cout<<"anda dewasa"<<endl;
    }else{
        cout<<"anda lansia"<<endl;
    }
    cout<<"-------program sukses-------"<<endl;
}

void akar(){
    float akar;
    cout<<"==================================="<<endl;
    cout<<"---------MENCARI AKAR DARI---------"<<endl;
    cout<<"==================================="<<endl;
    cout<<"masukan akar: "; cin>>akar;
    cout<<"akar dari: "<<akar<<" = "<<sqrt(akar)<<endl;
}
void kalkulator(){
    
    //membuat kalkulator sederhana
    int a,b;
    char c;
    cout<<"==================================="<<endl;
    cout<<"------------KALKULATOR-------------"<<endl;
    cout<<"==================================="<<endl;
    cout<<"masukan nilai : "<<endl; cin>>a;
    cout<<"masukan char(+,-,*,/)"<<endl; cin>>c;
    cout<<"masukan nilai : "<<endl; cin>>b;
    cout<<"-----------------------------------"<<endl;

    if(c=='+'){
        cout<<"hasilnya adalah: "<<a+b<<endl;
    }else if(c=='-'){
        cout<<"hasilnya adalah: "<<a-b<<endl;
    }else if(c=='*'){
        cout<<"hasilnya adalah: "<<a*b<<endl;
    }else if(c=='/'){
        cout<<"hasilnya adalah: "<<a/b<<endl;
        if(b==0){
            cout<<"nilai b tidak boleh 0"<<endl;
        }
    }else{cout<<"char yang anda masukan tidak ada"<<endl;}
    cout<<"----------------selesai---------------"<<endl;
    
}
void projek2(){

    while(true){
int pilihan;
    cout<<"1.Kalkulator"<<endl;
    cout<<"2.mencari nilai akar"<<endl;
    cout<<"3.keluar"<<endl;
    cout<<"pilihan: "; cin >> pilihan;

    switch(pilihan){
        case 1:
        kalkulator();
        break;

        case 2:
        akar();
        break;

        case 3: 
        return;
    }
    }
}

void projek3(){
//mengulang pemrograman
int nilai;
string a;
int i;
cout<<"============================"<<endl;
cout<<"    mengulang sesuatu"<<endl;
cout<<"============================"<<endl;
cout<<"masukan berapa x pengulangan: "<<endl; cin>>nilai;
cout<<"masukan kata yg mau diulang: "<<endl; cin>>a;
cout<<"----------------------------"<<endl;

for(i=0;i<=nilai;i++){
    cout<<i<<a<<endl;

}
}

void kasir(){
  float tagihan = 0;
  while(true){
 int belanja,jumlah_belanjaan;
 
  int susu=5000,ayam=25000,beras=10000,garam=2000;

  cout<<"=================="<<endl;
  cout<<"MENU BELANJAAN"<<endl;
  cout<<"=================="<<endl;
  cout<<"1.susu: rp.5000"<<endl;
  cout<<"2.garam: rp.2000"<<endl;
  cout<<"3.beras: rp.10,000"<<endl;
  cout<<"4.ayam: rp.25,000"<<endl;
  cout<<"5.tampilkan tagihan"<<endl;
  cout<<"masukan angka untuk memilih menu: "; cin>>belanja;
  cout<<"masukan jumlah belanjaan anda: "; cin>>jumlah_belanjaan;

  switch(belanja){
    case 1:
    tagihan += susu * jumlah_belanjaan;
    break;

    case 2:
    tagihan += garam * jumlah_belanjaan;
    break;

    case 3:
    tagihan += beras * jumlah_belanjaan;
    break;

    case 4:
    tagihan += ayam * jumlah_belanjaan;
    break;

    case 5: 
    cout<<"jumlah tagihan: Rp."<<tagihan<<endl;
    return;
    break;

    default:
    cout<<"pilihan tidak falid"<<endl;
  }
  }
}
void projek4(){
    // kasir
    while(true){
    int pilihan;
  cout<<"1.mulai"<<endl;
  cout<<"2.keluar"<<endl;
  cout<<"masukan pilihan: "; cin>>pilihan;

  switch(pilihan){
    case 1:
    kasir();
    break;

    case 2:
    cout<<"terimakasihhh"<<endl;
    return;
    break;

    default:
    cout<<"pilihan tidak ada"<<endl;
  }
    }
}

void projek5(){
//mesin pom bensin
while(true){
int bensin_pertalet = 10000;
int bensin_pertamax = 12500;
int bensin_pertamaxturbo = 15000;
int bensin;
int uang;
int metode_pembayaran;
int persetujuan;

cout<<"==================="<<endl;
cout<<"---menu bensin--- "<<endl;
cout<<"==================="<<endl;
cout<<"1.pertalet"<<endl;
cout<<"2.pertamax"<<endl;
cout<<"3.pertamax turbo"<<endl;
cout<<"4.keluar"<<endl;
cout<<"-----------------------"<<endl;
cout<<"pilih bensin yg mau dibeli: "<<endl;cin>>bensin;
if(bensin == 4){
    return ;
}
cout<<"berapa bensin yg dibeli: "<<endl;cin>>uang;
cout<<"pilih metode pembayaran:"<<endl;
cout<<"1. cast"<<endl;
cout<<"2. Mbank"<<endl; cin>>metode_pembayaran;
if (metode_pembayaran == 1){
    cout<<"metode pembayaran cast: Rp."<<uang<<endl;
}else if (metode_pembayaran == 2){
    cout<<"metode pembayaran Mbank: Rp."<<uang<<endl;
    cout<<"ketik '1' jika setuju dan '2' jika tidak setuju"<<endl;cin>>persetujuan;
    if(persetujuan == 1){
        cout<<"sukses"<<endl;
        int sisa = saldo -= uang;
        cout<<"sisa saldo anda: Rp."<<sisa <<endl;
    }else{
        cout<<"silahkan membayar menggunakan cast"<<endl;
    }
}
 switch(bensin){
    case 1 : 
    cout<<"bensin yg didapat: "<<uang/bensin_pertalet<<"L"<<endl;
    break;

    case 2 :
    cout<<"bensin yg didapat: "<<uang/bensin_pertamax<<"L"<<endl;
    break;

    case 3 :
    cout<<"bensin yg didapat: "<<uang/bensin_pertamaxturbo<<"L"<<endl;
    break;

    case 4 :
    cout<<"keluar"<<endl;
    return;

    default:
    cout<<"bensin tidak ada"<<endl;
    
 }

   cout<<"------------------------"<<endl;
   cout<<"terimakasihhh"<<endl;
   cout<<"------------------------"<<endl;
}

}

//menghitung nilai mahasiswa
void nilai(){
   int jumlah_mahasiswa = 0;
   cout<<"masukan jumlah mahasiswa: "; cin>>jumlah_mahasiswa;
   
   string nama[jumlah_mahasiswa];
   int nim[jumlah_mahasiswa];
   int nilai_tugas[jumlah_mahasiswa];
   int nilai_uts[jumlah_mahasiswa];
   int nilai_uas[jumlah_mahasiswa];
   float nilai_akhir[jumlah_mahasiswa];
   char grade[jumlah_mahasiswa];


       for(int i=0; i< jumlah_mahasiswa; i++){
        cout<<"===================== data ke: "<<i<<endl;
        cout<<"masukan nama: "; cin.ignore(); getline(cin, nama[i]);
        cout<<"masukan nim: "; cin>>nim[i];
        cout<<"masukan nilai tugas: "; cin>>nilai_tugas[i];
        cout<<"masukan nilai uts: "; cin>>nilai_uts[i];
        cout<<"masukan nilai uas: "; cin>>nilai_uas[i];

        nilai_akhir[i] = 0.3* nilai_tugas[i] + 0.3 * nilai_uts[i]+ 0.4 * nilai_uas[i]; 

        if(nilai_akhir[i] >80) grade[i]='A';
        else if(nilai_akhir[i] >70) grade[i]='B';
        else if(nilai_akhir[i] > 60) grade[i]='C';
        else if(nilai_akhir[i] > 50) grade[i]='D';
        else grade[i]='E';
       }
cout<<"========================================================================================================="<<endl; 
cout<<setw(3)<<"|No"<<" "<<setw(3)<<"|Nama"<<" "<<setw(20)<<"|Nim"<<" "<<setw(18)<<"|Nilai tugas"<<" "<<setw(10)<<"|nilai uts"<<" "
    <<setw(10)<<"|Nilai uas"<<" "<<setw(10)<<"|Nilai akhir"<<" "<<setw(10)<<"|Grade"<<"|"<<endl;
       for(int i=0;i< jumlah_mahasiswa; i++){
        cout<<"|"<<i+1<<" "<<setw(3)<<"|"<<nama[i]<<" "<<setw(20)<<"|"<<nim[i]<<" "<<setw(18)<<"|"<<nilai_tugas[i]<<" "<<setw(10)<<"|"<<nilai_uts[i]<<" "
    <<setw(10)<<"|"<<nilai_uas[i]<<" "<<setw(10)<<"|"<<nilai_akhir[i]<<" "<<setw(10)<<"|"<<grade[i]<<"|"<<endl;
       }
    }

void projek6(){
    //menghitung nilai mahasiswa
    while(true){
        int pil;
        cout<<"1.MULAI"<<endl;
        cout<<"2.KELUAR"<<endl;
        cout<<"masukan pilihan: "; cin>>pil;

        switch(pil){
            case 1:
            nilai();
            break;

            case 2: 
            return;
            break;

            default:
            cout<<"pilihan tidak ada"<<endl;
        }
    }
}


void projek7(){
    // projek mesin atm
    while(true){
    int admin_bank = 2500;
    int pilih;
    int Tf;
    int rek;
    int jumTf;
    int uang;
    int transfer;
    int tarik_tunai;

    cout<<"====================="<<endl;
    cout<<"|-----Mesin atm-----|"<<endl;
    cout<<"====================="<<endl;
    cout<<"1.transfer uang"<<endl;
    cout<<"2.deposit uang"<<endl;
    cout<<"3.cek saldo"<<endl;
    cout<<"4.Tarik tunai"<<endl;
    cout<<"5.kembali"<<endl;
    cout<<"masukan pilihan anda: "; cin>>pilih;

        switch(pilih){
            case 1: //transfer
            cout<<"masukan no rek: "; cin>>rek;
            cout<<"masuka  jumlah transfer: "; cin>>jumTf;
            if(jumTf < saldo){
            transfer = saldo -= jumTf -= admin_bank;
            cout<<"transfer ke: "<<rek<<endl<<"sebesar: "<<jumTf;
            cout<<"sisa saldo: "<<saldo<<endl;
            }else{
                cout<<"saldo anda tidak cukup"<<endl;
            }
            break;
        
            case 2: //deposit
            cout<<"masukan jumlah uang: "; cin>>uang;
            saldo = saldo += uang;
            cout<<"berhasil deposit sebesar: "<<uang<<endl;
            cout<<"sisa saldo: "<<saldo<<endl;
            break;

            case 3://cek saldo
            cout<<"saldo anda sebesar : RP."<<saldo<<endl;
            break;

            case 4: //terik tunai
            cout<<"masukan nominal tarik tunai: "; cin>>tarik_tunai;
            if(tarik_tunai < saldo){
            saldo = saldo -= tarik_tunai -= admin_bank;
            cout<<"ditarik sebesar: Rp."<<tarik_tunai<<endl;
            }else{
                cout<<"saldo tidak cukup"<<endl;
            }
            break;

            case 5:
            cout<<"keluar"<<endl;
            return;

            default:
            cout<<"pilihan tidak ada"<<endl;
            

        }
    }

}

void atm(){
    int pilih;
    cout<<"====================="<<endl;
    cout<<"|-----Mesin atm-----|"<<endl;
    cout<<"====================="<<endl;
    cout<<"1.MULAI"<<endl;
    cout<<"2.KELUAR"<<endl;
    cout<<"pilih: "; cin>>pilih;

    switch(pilih){
        case 1:
        projek7();
        break;

        case 2:
        return;
        break;

        default:
        cout<<"pilihan tidak valid"<<endl;
    }
}

void game(){
    srand(time(0));
    int random_angka = rand() % 3+1;
    int pil;

    cout<<"=============="<<endl;
    cout<<"start"<<endl;
    cout<<"=============="<<endl;
    cout<<"1.gunting, 2.kertas 3.batu"<<endl; 
    cout<<"masukan pilihan: "; cin>>pil;


    if(pil==2 && random_angka == 1){
        cout<<"kalah"<<endl;
    }else if(pil ==2 && random_angka == 2){
        cout<<"seri"<<endl;
    }else if (pil == 2 && random_angka == 3){
        cout<<"menang"<<endl;
    }

    if(pil==3 && random_angka == 1){
        cout<<"menang"<<endl;
    }else if(pil ==3 && random_angka == 2){
        cout<<"kalah"<<endl;
    }else if (pil == 3 && random_angka == 3){
        cout<<"seri"<<endl;
    }

    if(pil == 1){
        cout<<"anda memilih gunting"<<endl;
    }else if (pil == 2){
        cout<<"anda memilih kertas"<<endl;
    }else if(pil ==3){
        cout<<"anda memilih batu"<<endl;
    }

    if(random_angka == 1){
        cout<<"komputer memilih gunting"<<endl;
    }else if(random_angka== 2){
        cout<<"komputer memilih kertas"<<endl;
    }else if(random_angka == 3){
        cout<<"komputer memilih batu"<<endl;
    }

    if (pil==1 && random_angka == 1){
        cout<<"seri"<<endl;
    }else if(pil ==1 && random_angka == 2){
        cout<<"menang"<<endl;
    }else if (pil == 1 && random_angka == 3){
        cout<<"kalah"<<endl;
    }

}
void projek8(){
    //GAME GUNTING KERTAS BATU
    while(true){
    int pilihan;
    cout<<"======================="<<endl;
    cout<<"GAME GUTING KERTAS BATU"<<endl;
    cout<<"======================="<<endl;
    cout<<"1.mulai"<<endl;
    cout<<"2.keluar"<<endl;
    cout<<"masukan pilihan: "; cin>>pilihan;

    switch(pilihan){
        case 1:
        game();
        break;

        case 2:
        return;
        break;

        default:
        cout<<"pilihan tidak valid";
        break;
    }
    }
    
}
void segitiga(){
    int i,j,z;
    int n;

    cout<<"masukan besar segitiga"; cin>>n;

 for(i=1;i<=n;i++){
    for(z=n;z>=i;z--){
        cout<<" ";
    }
    
    for(j=1;j<=i;j++){
        cout<<" *";
    }
    cout<<"\n";
    
 }
}

void segitiga_terbalik(){
    int i,j,z;
    int n;
    cout<<"masukan besar gravik: "; cin>>n;

 for(i=1;i<=n;i++){
    for(z=1;z<=i;z++){
        cout<<" ";
    }

    for(j=n;j>=i;j--){
        cout<<" *";
    }
    cout<<"\n";
    
 }
}
void setengah_segitiga(){

int n=0;
int i,j;

cout<<"MASUKAN BESAR SEGITIGA: "; cin>>n;

 for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<" *";
    }
    cout<<"\n";
 }
}

void setengah_segitiga_terbalik(){
    int n=0;
int i,j;

cout<<"MASUKAN BESAR SEGITIGA: "; cin>>n;

 for(i=1;i<=n;i++){
    for(j=n;j>=i;j--){
        cout<<" *";
    }
    cout<<"\n";
 }
}

void diamon(){
    int i,j,z;
int a,b,c;
int n;

cout<<"Masukan jumlah baris: "; cin>>n;

for(a=1;a<=n;a++){
    for(b=n;b>=a;b--){
        cout<<" ";
    }

    for(c=1;c<=a;c++){
        cout<<" *";
    }
    cout<<"\n";
}

 for(i=1;i<=n;i++){
    for(z=1;z<=i;z++){
        cout<<" ";
    }

    for(j=n;j>=i;j--){
        cout<<" *";
    }
    cout<<"\n";
    
 }
}

void gambar_langka(){
    int i,j;
    for(i=1;i<=3;i++){
        cout<<" * * * * * * * * * * * * * * * * *\n";
    }for(j=1;j<=3;j++){
        cout<<" * * *  * * *\n";
    }
}
void projek9(){
    while(true){
    int pilihan;
    cout<<"============================="<<endl;
    cout<<"      MEMBUAT GRAFIK"<<endl;
    cout<<"============================="<<endl;
    cout<<"1.segitiga"<<endl;
    cout<<"2.segitiga terbalik"<<endl;
    cout<<"3.setengah segitiga"<<endl;
    cout<<"4.setengah segitiga terbalik"<<endl;
    cout<<"5.Diamon   "<<endl;
    cout<<"6.gambar langka"<<endl;
    cout<<"7.keluar"<<endl;
    cout<<"pilihan: "; cin>>pilihan;

    switch(pilihan){
        case 1:
        segitiga();
        break;

        case 2:
        segitiga_terbalik();
        break;

        case 3:
        setengah_segitiga();
        break;

        case 4:
        setengah_segitiga_terbalik();
        break;

        case 5:
        diamon();
        break;

        case 6:
        gambar_langka();
        break;
        
        case 7:
        return;
        break;

        default:
        cout<<"pilihan tidak valid";
        break;
    }

    }
}

void projek10(){ //penggunaan rumus einstain e=mc^2 untuk menghitung energi suatu masa
const float kec_cahaya = 3*10*10*10*10*10*10*10*10; //kec cahaya m/detik
float masa; //masa dalam Kg
cout<<"masukan masa dalam(Kg): "; cin>>masa;
float energi= masa * kec_cahaya * kec_cahaya;  //rumus energi e=mc^2
cout<<"maka energi yang dihasilkan dari masa tersebut adalah: "<<energi<<" Joul"<<endl;
}

void projek11(){

int jumlahfibonachi;
    cout << " masukan jumlah fibonacci yang mau ditampilkan: "; cin >> jumlahfibonachi;

    int f_n;
    int f_n1 = 1;
    int f_n2 = 0;

    for (int i = 0; i<jumlahfibonachi; i++){
        f_n = f_n1 + f_n2;
        cout << f_n << " ";
        f_n2 = f_n1;
        f_n1 = f_n;

    }

}


   


int main(){

while (true){

    int pilihan;
    cout<<"\n"<<endl;
    cout<<"[====================================]"<<endl;
    cout<<"======================================"<<endl; 
    cout<<"||=~~~~~~~~~~PROJEK SAYA~~~~~~~~~~~=||"<<endl;
    cout<<"======================================"<<endl;
    cout<<"||                                  ||"<<endl;
    cout<<"||1. projek menghitung umur         ||"<<endl;
    cout<<"||2. projek kalkulator sederhana    ||"<<endl;
    cout<<"||3. projek mengulang sesuatu       ||"<<endl;
    cout<<"||4. projek kasir sederhana         ||"<<endl;
    cout<<"||5. projek pom bensin              ||"<<endl;
    cout<<"||6. projek menghitung nilai MHSW   ||"<<endl;
    cout<<"||7. projek mesin ATM               ||"<<endl;
    cout<<"||8. game gunting,kertas,batu       ||"<<endl;
    cout<<"||9. projek gmbr gravik             ||"<<endl;
    cout<<"||10.menghitung energi suatu masa   ||"<<endl;
    cout<<"||11. fibonacci                     ||"<<endl;
    cout<<"||12.keluar                         ||"<<endl;
    cout<<"||                                  ||"<<endl;
    cout<<"||----------------------------------||"<<endl;
    cout<<"||       -MASUKAN PILIHAN-          ||"<<endl;
    cout<<"||==================================||"<<endl;
    cout<<"||Pilih: "; cin>>pilihan;
    //bisa karena terbiasa!
    switch(pilihan){

        case 1:
        projek1();
        break;
    
        case 2:
        projek2();
        break;

        case 3:
        projek3();
        break;

        case 4:
        projek4();
        break;

        case 5:
        projek5();
        break;

        case 6:
        projek6();
        break;

        case 7:
        atm();
        break;

        case 8:
        projek8();
        break;

        case 9:
        projek9();
        break;

        case 10:
        projek10();
        break;

        case 11:
        projek11();
        break;

        case 12:
        cout<<"terimakasih telah  melihat projek saya"<<endl;
        return 0; 
        break;

        case 260705: //copyright
        cout<<"projek ini dibuat oleh MUHAMMAD FARIED ISKANDAR"<<endl;
        break;

        default:
        cout<<"pillihan tidak valid"<<endl;
    }
}

return 0;
}