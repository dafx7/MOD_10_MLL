#include <iostream>
#include "flight.h"

void createListJadwal_103012300198(ListJadwal &L)
{
    first(L) = NULL;
}

adr_jadwalP createElemenJadwal_103012300198(infotype X)
{
    adr_jadwalP P = new elemenJadwal;
    info(P) = X;
    next(P) = NULL;
    return P;
}

void InsertLastJ_103012300198(ListJadwal &L, adr_jadwalP P)
{
    if (first(L) == NULL)
    {
        first(L) = P;
    }
    else
    {
        adr_jadwalP tmp = first(L);
        while (next(tmp) != NULL)
        {
            tmp = next(tmp);
        }
        next(tmp) = P;
    }
}
void ShowJadwal_103012300198(ListJadwal L)
{
    adr_jadwalP P = first(L);
    if (P == NULL) {
        cout << "List Kosong" << endl;
        return;
    }
    while (P != NULL) {
        cout << "[Kode: " << info(P).Kode
             << ", Jenis: " << info(P).Jenis
             << ", Tanggal: " << info(P).Tanggal
             << ", Waktu: " << info(P).Waktu
             << ", Asal: " << info(P).Asal
             << ", Tujuan: " << info(P).Tujuan
             << ", Kapasitas: " << info(P).Kapasitas
             << "] ";
        P = next(P);
    }
    cout << endl;
}

void DeleteFirstJ_103012300198(ListJadwal &L, adr_jadwalP &P)
{
    P = first(L);
    if (P == NULL)
    {
        cout << "List Kosong" << endl;
    }
    else if (next(P) == NULL)
    {
        first(L) = NULL;
    }
    else
    {
        first(L) = next(P);
        next(P) = NULL;
    }
}
adr_jadwalP SearchJ_103012300198(ListJadwal L, string dari, string ke, string tanggal)
{
    adr_jadwalP P = first(L);
    if (P == NULL)
    {
        cout << "List Kosong" << endl;
    }
    else
    {
        while (P != NULL)
        {
            if (info(P).Asal == dari && info(P).Tujuan == ke && info(P).Tanggal == tanggal)
            {
                return P;
            }
            P = next(P);
        }
    }
    return NULL;
}
