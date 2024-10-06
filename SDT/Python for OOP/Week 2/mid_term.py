from time import sleep

"""
NOTE: Ekhane code e sundor dekhanor jnno kichu funtion and text add korechi.

egula bade Code Module er moto kore korechi.....

"""

emni_variable = 0
def printSymble(): # function print symble
    global emni_variable
    s = ''
    if not emni_variable % 2:
        s += '('
    s += '-' * 70
    if emni_variable % 2:
        s += ')'

    print(s)
    emni_variable += 1

class Star_Cinema():
    _hall_list = []

    @classmethod
    def entry_hall(self, hall):
        self._hall_list.append(hall)

class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.__seats = {}
        self.__show_list = []
        self.__rows = rows
        self.__cols = cols
        self.__hall_no = hall_no
        Star_Cinema.entry_hall(self)

    def entry_show(self, id, movie_name, time):
        self.__show_list.append((id, movie_name, time))
        self.__seats[id] = []

        for _ in range(self.__rows):
            self.__seats[id].append([0] * self.__cols)
    
    def showing_today_show_list(self):
        printSymble()
        for show in self.__show_list:
            print(f"🎬 Show ID: {show[0]} | Movie Name: {show[1]} | Time: {show[2]}")
        printSymble()

    def show_available_seats(self, movie_id):
        printSymble()
        for row in self.__seats[movie_id]:
            print(row)
        printSymble()
        
    def movie_id_checking(self, movie_id):
        if movie_id in self.__seats:
            return True 
        printSymble()
        print("⚠️  Movie ID Not Found! Please check and try again.")
        printSymble()
        
    def book_seats(self, tickets):
        count = 0
        printSymble()
        for seat in tickets:
            count += 1
            row, col = seat 
            if not (1 <= row <= self.__rows) or not (1 <= col <= self.__cols):
                print(f'🚫 Invalid Seat {count} Number: Row {row}, Column {col} ❌')
                continue

            if self.__seats[movie_id][row - 1][col - 1] == 0:
                self.__seats[movie_id][row - 1][col - 1] = 1
                print(f'✅ Seat {count} {row}:{col} Successfully Booked!')
            else:
                print(f'⚠️  Seat {count} {row}:{col} Already Booked!')
            sleep(0.3)
        printSymble()

hall = Hall(rows=15, cols=10, hall_no=1001)
star_cinema = Star_Cinema()
star_cinema.entry_hall(hall)

hall.entry_show(101, "Salaar", "08/10/2024 11:00 AM")
hall.entry_show(102, "Jawan", "08/10/2024 3:00 PM")
hall.entry_show(103, "KGF 2", "08/10/2024 7:00 PM")
hall.entry_show(104, "Tufaan", "08/10/2024 10:30 PM")

def show_option():
    print()
    print("1. VIEW ALL SHOWS TODAY 🎬")
    print("2. VIEW AVAILABLE SEATS 🪑")
    print("3. BOOK TICKET 🎟️")
    print("4. EXIT ❌")

while 1:
    show_option()
    op = int(input("👉 ENTER OPTION: "))

    print("🔄 Processing Your Input... Please wait.\n")

    if op not in [1, 2, 3, 4]:
        printSymble()
        print("⚠️  Invalid Option! Please choose a valid option from the menu. ⚠️")
        printSymble()

    if op == 1:
        print("🎬 VIEWING ALL SHOWS TODAY... Please wait.")
        sleep(0.5)
        hall.showing_today_show_list()

    elif op == 2:
        sleep(0.2)
        movie_id = int(input("🎥 ENTER MOVIE ID: "))
        if not hall.movie_id_checking(movie_id):
            continue

        print("🪑 VIEWING AVAILABLE SEATS... Please wait.")
        sleep(0.3)
        hall.show_available_seats(movie_id)

    elif op == 3:
        movie_id =  int(input("🎥 ENTER MOVIE ID: "))
        if not hall.movie_id_checking(movie_id):
            continue
        try:
            tickets_number = int(input("🎟️  ENTER NUMBER OF TICKETS:"))
        except ValueError:
            printSymble()
            print("⚠️  Please enter a valid number of tickets! 🔢")
            printSymble()
            continue

        tickets = []
        for i in range(tickets_number):
            print()
            rowS = f"🪑 ENTER ROW NUMBER FOR SEAT {i + 1}:"
            colS = f"🪑 ENTER COLUMN NUMBER FOR SEAT {i + 1}:"
            row = int(input(rowS))
            col = int(input(colS))
            tickets.append((row, col))
            

        print("\n🎟️  Booking Ticket... Please wait.")
        hall.book_seats(tickets)
        sleep(0.5)

    elif op == 4:
        printSymble()
        print("❌ Exiting... Thank you for using the system!")
        printSymble()
        break


    print()
    sleep(1)