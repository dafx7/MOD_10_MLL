#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#define next(P) P->next
#define info(P) P->info
#define first(L) L.first
using namespace std;
struct jadwalPenerbangan {
    string Kode;
    string Jenis;
    string Tanggal;
    string Waktu;
    string Asal;
    string Tujuan;
    int Kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;

typedef jadwalPenerbangan infotype;

struct elemenJadwal {
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal {
    adr_jadwalP first;
};

void createListJadwal_103012300198(ListJadwal &L);
adr_jadwalP createElemenJadwal_103012300198(infotype X);
void InsertLastJ_103012300198(ListJadwal &L, adr_jadwalP P);
void ShowJadwal_103012300198(ListJadwal L);
void DeleteFirstJ_103012300198(ListJadwal &L, adr_jadwalP &P);
adr_jadwalP SearchJ_103012300198(ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
