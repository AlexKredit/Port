#pragma once
#include <iostream>
#include <string>
#include "UserInterface.h"
#include "Vehicle.h"

class Train : public Vehicle
{
private:
    double weight;
    double max_speed;
    double avg_speed;
    double price_moving;
    int passengers_number;
    double max_luggage;
    double max_volume;
    bool conditioner;
    bool reclining_seat;
    double max_luggage_pass;
    std::string vehicle_segment;
    std::string seat_type;
    const std::string train{ "Потяг" };
public:
    Train();
    int count_comfort() override;
    std::string vehicle_name() override;
    void print(UserInterface* ui) override;
    double get_weight() const override;
    void set_weight(const double weight) override;
    double get_max_speed() const override;
    void set_max_speed(const double max_speed) override;
    double get_avg_speed() const override;
    void set_avg_speed(const double avg_speed) override;
    double get_price_moving() const override;
    void set_price_moving(const double price_moving) override;
    double get_max_luggage() const override;
    void set_max_luggage(const double max_luggage) override;
    double get_max_volume() const override;
    void set_max_volume(const double volume) override;
    int get_passengers_number() const override;
    void set_passengers_number(const int passengers_number) override;
    std::string get_vehicle_segment() const override;
    void set_vehicle_segment(const std::string& vehicle_segment) override;
    std::string get_seat_type() const override;
    void set_seat_type(const std::string& seat_type) override;
    bool get_conditioner() const;
    void set_conditioner(const bool conditioner);
    bool get_reclining_seat() const;
    void set_reclining_seat(const bool reclining_seat);
    double get_max_luggage_pass() const;
    void set_max_luggage_pass(const double max_luggage_pass);
};
