#pragma once
#include "responses.h"
class BusManager {
public:
    void AddBus(const string& bus, const vector<string>& stops); //Add new bus with stops

BusesForStopResponse GetBusesForStop(const string& stop) const; //Print the names of all bus routes passing through the stop.

StopsForBusResponse GetStopsForBus(const string& bus) const; // Print the names of all stops on the bus route with a list of buses that you can change to at each of the stops.

AllBusesResponse GetAllBuses() const; // Print list of all routes with stops.

private:
    map<string, vector<string>> buses_to_stops;
    map<string, vector<string>> stops_to_buses;
};
