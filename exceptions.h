#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>

class NoAvailableSlotException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Tidak ada slot tersedia!";
    }
};

class InvalidTicketException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Ticket tidak valid!";
    }
};

class ReservationException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Reservasi VIP gagal!";
    }
};

#endif
