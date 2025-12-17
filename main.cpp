#include <iostream>
#include "parkinggarage.h"
#include "motorcycle.h"
#include "car.h"
#include "ev.h"

int main() {
    ParkingGarage garage;
    int menu;

    while (true) {
        std::cout << "\n=== PARKING SYSTEM ===\n";
        std::cout << "1. Park Kendaraan\n";
        std::cout << "2. Unpark Kendaraan\n";
        std::cout << "3. Keluar\n";
        std::cout << "Pilih: ";
        std::cin >> menu;

        try {
            if (menu == 1) {
                int type;
                std::string plate;

                std::cout << "1. Motor\n2. Car\n3. EV\nPilih: ";
                std::cin >> type;

                std::cout << "Plat nomor: ";
                std::cin >> plate;

                if (type == 1) {
                    int t = garage.park(new Motorcycle(plate));
                    std::cout << "Motor diparkir. Ticket: " << t << std::endl;
                }
                else if (type == 2) {
                    int vip;
                    std::cout << "VIP? (1=Ya, 0=Tidak): ";
                    std::cin >> vip;
                    int t = garage.park(new Car(plate, vip));
                    std::cout << "Car diparkir. Ticket: " << t << std::endl;
                }
                else if (type == 3) {
                    int ch;
                    std::cout << "Butuh charging? (1=Ya, 0=Tidak): ";
                    std::cin >> ch;
                    int t = garage.park(new EV(plate, ch));
                    std::cout << "EV diparkir. Ticket: " << t << std::endl;
                }
            }
            else if (menu == 2) {
                int ticket;
                std::cout << "Masukkan ticket: ";
                std::cin >> ticket;

                double cost = garage.unpark(ticket);
                std::cout << "Biaya parkir: Rp " << cost << std::endl;
            }
            else if (menu == 3) {
                break;
            }
        }
        catch (std::exception& e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
    return 0;
}
