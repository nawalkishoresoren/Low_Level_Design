class Movie:
    def __init__(self,movie_name:str,total_seats:int,ticket_price:int,booked_seats:int):
        self.movie_name = movie_name
        self.total_seats = total_seats
        self.ticket_price = ticket_price
        self.booked_seats = booked_seats
    
    def show_status(self) ->None:
        print(f"Movie Name: {self.movie_name}")
        print(f"Total Seats: {self.total_seats}")
        print(f"Ticket Price: {self.ticket_price}")
        print(f"Booked Seats: {self.booked_seats}")
        print(f"Available Seats: {self.total_seats - self.booked_seats}")

    def book_tickets(self, num_of_tickets:int) -> None:
        if num_of_tickets > self.total_seats - self. booked_seats:
            print("Sorry, not enough seats available.")
        else:
            self.booked_seats += num_of_tickets
            print(f"{num_of_tickets} tickets booked successfully.")
            print(f"Total Price: {num_of_tickets * self.ticket_price}")
 
movie = Movie("Inception", 100, 499, 0)
movie.show_status()
movie.book_tickets(5)
movie.show_status()