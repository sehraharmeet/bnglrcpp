#include <iostream>
using namespace std;

 
class MovieBooking
{
public:
    MovieBooking()
    {
        cout << "Const";
    }
    ~MovieBooking()
    {
        cout << "Dest";
    }
    void selectMovie(string movieName)
    {
        cout << "Movie Selected: " << movieName << endl;
        processMovieSelection();
    }

    void selectSeat(int seatNo)
    {
        cout << "Seat Number Selected: " << seatNo << endl;
        allocateSeat();
    }

    void makePayment(double amount)
    {
        cout << "Payment Received: Rs." << amount << endl;
        processPayment();
    }

    void getTicket()
    {
        generateTicket();
    }

private:
 
    void processMovieSelection()
    {
        cout << "Movie database searched and matched.\n";
    }

    void allocateSeat()
    {
        cout << "Seat locked for user temporarily.\n";
    }

    void processPayment()
    {
        cout << "Payment gateway encryption and verification done.\n";
    }

    void generateTicket()
    {
        cout << "Ticket generated successfully.\n";
    }
};

class MovieBooking2
{
public:
    void listMovies()
    {
        loadMovies();
    }
    void selectMovie(string movieName)
    {
        cout << "Movie Selected: " << movieName << endl;
        processMovieSelection();
    }

    void selectSeat(int seatNo)
    {
        cout << "Seat Number Selected: " << seatNo << endl;
        allocateSeat();
    }

    void makePayment(double amount)
    {
        cout << "Payment Received: Rs." << amount << endl;
        processPayment();
    }

    void getTicket()
    {
        generateTicket();
    }

private:
    char movieList[4][20];  

    void loadMovies()
    {
        const int SIZE = 20;
        strcpy_s(movieList[0], SIZE, "Avengers fjk hduihf dhfdh");
        strcpy_s(movieList[1], SIZE, "Batman");
        strcpy_s(movieList[2], SIZE, "SpiderMan");
        strcpy_s(movieList[3], sizeof(movieList[3]), "Interstellar");
        cout << "Available Movies:\n";

        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << ". " << movieList[i] << endl;
        }
    }
    void processMovieSelection()
    {
        cout << "Movie database searched and matched.\n";
    }

    void allocateSeat()
    {
        cout << "Seat locked for user temporarily.\n";
    }

    void processPayment()
    {
        cout << "Payment gateway encryption and verification done.\n";
    }

    void generateTicket()
    {
        cout << "Ticket generated successfully.\n";
    }
};

void moviefunction()
{
    MovieBooking user;    
    user.selectMovie("Avengers");
    user.selectSeat(25);
    user.makePayment(250);
    user.getTicket();
   /*MovieBooking2 user;
    user.listMovies();
    cout << "enter the movie";
    string mvname;  
    cin >> mvname;
    user.selectMovie(mvname);
    user.selectSeat(25);
    user.makePayment(250);
    user.getTicket();*/

}