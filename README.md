# PBO-Simulasi-Sistem-Parkir
Soal no. 3: Simulasi Sistem Manajemen Parkir Multilapis (Advanced Parking Management System)

## Cara Compile & Run

Program dapat dijalankan di **Windows, macOS, dan Linux**.  
Pastikan compiler **g++** sudah terpasang.

---

## 1. Windows

### A. Compile langsung dengan g++ (tanpa CMake)
Buka **Command Prompt / PowerShell**, lalu masuk ke folder project.

```bash
g++ *.cpp -o parking
```
Jalankan program:
```bash
parking.exe
```

### B. Menggunakan CMake
Pastikan **CMake** sudah terinstall dan terdaftar di PATH.

```bash
mkdir build
cd build
cmake ..
cmake --build .
parking.exe
```

---

## 2. Linux

### A. Compile langsung dengan g++
```bash
g++ *.cpp -o parking
./parking
```

### B. Menggunakan CMake
```bash
mkdir build
cd build
cmake ..
cmake --build .
./parking
```

---

## 3. macOS

### A. Compile langsung dengan g++ (clang)
```bash
g++ *.cpp -o parking
./parking
```

### B. Menggunakan CMake
```bash
mkdir build
cd build
cmake ..
cmake --build .
./parking
```

---

## Asumsi yang Digunakan
1. Durasi parkir dihitung dalam satuan jam dan dibulatkan ke atas (minimal 1 jam).
2. Waktu masuk dan keluar kendaraan menggunakan waktu sistem (`time_t`).
3. Setiap slot hanya dapat menampung satu kendaraan.
4. Jumlah slot bersifat tetap (1 Regular, 1 EV, 1 VIP).
5. Diskon diterapkan jika durasi parkir lebih dari 24 jam.

---

## Konfigurasi Tarif
Tarif parkir yang digunakan:

- Motorcycle : Rp 2.000 / jam  
- Car        : Rp 5.000 / jam  
- EV         : Rp 4.000 / jam  
- Charging EV: Tambahan Rp 3.000 (jika chargingRequired = true)  
- Diskon     : 10% untuk durasi parkir > 24 jam  

Tarif diatur pada method `calculateRate()` di masing-masing kelas kendaraan.

---
