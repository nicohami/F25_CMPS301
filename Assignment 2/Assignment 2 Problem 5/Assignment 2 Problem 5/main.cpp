//
//  main.cpp
//  Assignment 2 Problem 5
//
//  Created by Nico  Hamilton  on 10/4/25.
//

#include <iostream>
#include <string>
using namespace std;
int main ()

{
    // Declare and initialize var
    string cname, movie, showtime, theaternum, seatnum, location;
    double ticketprice = 0.0, numtickets = 0.0;
    
    // Collecting inputs
    cout << "******* Welcome to Cinemagic Booking System *******" << endl;
    cout << "Enter customer name: " << endl;
    getline(cin, cname);
    cout << "Enter movie title: " << endl;
    getline(cin, movie);
    cout << "Enter showtime: " << endl;
    getline(cin, showtime);
    cout << "Enter theater number: " << endl;
    getline(cin, theaternum);
    cout << "Enter seat number: " << endl;
    getline(cin, seatnum);
    
    cout << "Enter number of tickets: " << endl;
    cin >> numtickets;
    cout << "Enter ticket price per person: " << endl;
    cin >> ticketprice;
    
    cout << "Enter theater location: " << endl;
    getline(cin, location);
    
    // Calulations
    double total = ticketprice * numtickets;
    
    // Displaying
    cout << "========== CINEMAGIC TICKET CONFIRMATION ==========" << endl;
    cout << "Customer: " << cname << endl;
    cout << "Movie: " << movie << endl;
    cout << "Showtime: " << showtime << endl;
    cout << "Theater: " << theaternum << endl;
    cout << "Seat: " << seatnum << endl;
    cout << "Location: " << location << endl;
    cout << "Tickets: " << numtickets << endl;
    cout << "Price per tickets: " << ticketprice << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total: " << total << endl;
    cout << "====================================================" << endl;
    cout << "Enjoy your movie!" << endl;
    
    return 0;
}
