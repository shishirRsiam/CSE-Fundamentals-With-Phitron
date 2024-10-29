from django.shortcuts import render
from django.http import HttpResponse

def home(request):
    # return HttpResponse("Hello Sishir")

    return render(request, 'navigation/home.html')

def info(request):
    person_info = [{'id': 1, 'data': {'name': 'Sishir Siam', 'age': 21, 'occupation': 'Software Engineer', 'location': {'city': 'Lalmonirhat', 'state': 'Rangpur', 'country': 'Bangladesh'}, 'contact': {'email': 'shishir.siam01@gmail.com', 'phone': '+8801317129349'}}},
        {'id': 2, 'data': {'name': 'Emily Turner', 'age': 26, 'occupation': 'Project Manager', 'location': {'city': 'San Francisco', 'state': 'Colorado', 'country': 'USA'}, 'contact': {'email': 'user2@example.com', 'phone': '+1-555-4557-938'}}},
        {'id': 3, 'data': {'name': 'Linda Clark', 'age': 22, 'occupation': 'DevOps Engineer', 'location': {'city': 'Dhaka', 'state': 'Khulna', 'country': 'Bangladesh'}, 'contact': {'email': 'user3@example.com', 'phone': '+8801347640862'}}},
        {'id': 4, 'data': {'name': 'Alex Clark', 'age': 29, 'occupation': 'Project Manager', 'location': {'city': 'Boston', 'state': 'Florida', 'country': 'USA'}, 'contact': {'email': 'user4@example.com', 'phone': '+1-555-6222-502'}}},
        {'id': 5, 'data': {'name': 'Alex Rodriguez', 'age': 47, 'occupation': 'Marketing Specialist', 'location': {'city': 'Khulna', 'state': 'Khulna', 'country': 'Bangladesh'}, 'contact': {'email': 'user5@example.com', 'phone': '+8801633113596'}}},
        {'id': 6, 'data': {'name': 'Linda Smith', 'age': 55, 'occupation': 'Content Writer', 'location': {'city': 'Chicago', 'state': 'Illinois', 'country': 'USA'}, 'contact': {'email': 'user6@example.com', 'phone': '+1-555-2184-148'}}},
        {'id': 7, 'data': {'name': 'Michael Clark', 'age': 44, 'occupation': 'Business Analyst', 'location': {'city': 'San Francisco', 'state': 'Washington', 'country': 'USA'}, 'contact': {'email': 'user7@example.com', 'phone': '+1-555-8296-828'}}},
        {'id': 8, 'data': {'name': 'David Martinez', 'age': 37, 'occupation': 'Data Scientist', 'location': {'city': 'Chittagong', 'state': 'Chittagong', 'country': 'Bangladesh'}, 'contact': {'email': 'user8@example.com', 'phone': '+8801325278557'}}},
        {'id': 9, 'data': {'name': 'Emily Clark', 'age': 42, 'occupation': 'Content Writer', 'location': {'city': 'Sylhet', 'state': 'Chittagong', 'country': 'Bangladesh'}, 'contact': {'email': 'user9@example.com', 'phone': '+8801489804912'}}},
        {'id': 10, 'data': {'name': 'Mia Martinez', 'age': 56, 'occupation': 'Content Writer', 'location': {'city': 'Miami', 'state': 'Texas', 'country': 'USA'}, 'contact': {'email': 'user10@example.com', 'phone': '+1-555-5543-532'}}},
        {'id': 11, 'data': {'name': 'Mia Clark', 'age': 27, 'occupation': 'Project Manager', 'location': {'city': 'Los Angeles', 'state': 'Colorado', 'country': 'USA'}, 'contact': {'email': 'user11@example.com', 'phone': '+1-555-1270-153'}}},
        {'id': 12, 'data': {'name': 'James Rodriguez', 'age': 44, 'occupation': 'Project Manager', 'location': {'city': 'Chicago', 'state': 'Florida', 'country': 'USA'}, 'contact': {'email': 'user12@example.com', 'phone': '+1-555-1444-149'}}},
        {'id': 13, 'data': {'name': 'Sophia Martinez', 'age': 20, 'occupation': 'DevOps Engineer', 'location': {'city': 'Mymensingh', 'state': 'Barisal', 'country': 'Bangladesh'}, 'contact': {'email': 'user13@example.com', 'phone': '+8801833990294'}}},
        {'id': 14, 'data': {'name': 'Alex Lee', 'age': 55, 'occupation': 'Content Writer', 'location': {'city': 'Khulna', 'state': 'Mymensingh', 'country': 'Bangladesh'}, 'contact': {'email': 'user14@example.com', 'phone': '+8801320053526'}}},
        {'id': 15, 'data': {'name': 'Jessica Martinez', 'age': 53, 'occupation': 'UX Designer', 'location': {'city': 'Dhaka', 'state': 'Khulna', 'country': 'Bangladesh'}, 'contact': {'email': 'user15@example.com', 'phone': '+8801190172160'}}},
        {'id': 16, 'data': {'name': 'Michael Brown', 'age': 27, 'occupation': 'Marketing Specialist', 'location': {'city': 'Denver', 'state': 'Washington', 'country': 'USA'}, 'contact': {'email': 'user16@example.com', 'phone': '+1-555-2158-821'}}},
        {'id': 17, 'data': {'name': 'Michael Wilson', 'age': 35, 'occupation': 'Data Scientist', 'location': {'city': 'Khulna', 'state': 'Rajshahi', 'country': 'Bangladesh'}, 'contact': {'email': 'user17@example.com', 'phone': '+8801620656747'}}},
        {'id': 18, 'data': {'name': 'Michael Wilson', 'age': 44, 'occupation': 'Data Scientist', 'location': {'city': 'Seattle', 'state': 'Massachusetts', 'country': 'USA'}, 'contact': {'email': 'user18@example.com', 'phone': '+1-555-3568-749'}}},
        {'id': 19, 'data': {'name': 'Sophia Johnson', 'age': 52, 'occupation': 'UX Designer', 'location': {'city': 'Los Angeles', 'state': 'Massachusetts', 'country': 'USA'}, 'contact': {'email': 'user19@example.com', 'phone': '+1-555-6701-700'}}},
        {'id': 20, 'data': {'name': 'Sophia Lee', 'age': 51, 'occupation': 'Project Manager', 'location': {'city': 'Chittagong', 'state': 'Rajshahi', 'country': 'Bangladesh'}, 'contact': {'email': 'user20@example.com', 'phone': '+8801869144768'}}},
        {'id': 21, 'data': {'name': 'David Martinez', 'age': 45, 'occupation': 'Marketing Specialist', 'location': {'city': 'Seattle', 'state': 'New York', 'country': 'USA'}, 'contact': {'email': 'user21@example.com', 'phone': '+1-555-8388-967'}}},
        {'id': 22, 'data': {'name': 'Jessica Brown', 'age': 27, 'occupation': 'DevOps Engineer', 'location': {'city': 'Mymensingh', 'state': 'Khulna', 'country': 'Bangladesh'}, 'contact': {'email': 'user22@example.com', 'phone': '+8801872749925'}}},
        {'id': 23, 'data': {'name': 'Sophia Lee', 'age': 29, 'occupation': 'Software Engineer', 'location': {'city': 'Los Angeles', 'state': 'Texas', 'country': 'USA'}, 'contact': {'email': 'user23@example.com', 'phone': '+1-555-3568-968'}}},
        {'id': 24, 'data': {'name': 'David Brown', 'age': 24, 'occupation': 'Software Engineer', 'location': {'city': 'Boston', 'state': 'Washington', 'country': 'USA'}, 'contact': {'email': 'user24@example.com', 'phone': '+1-555-2175-253'}}},
        {'id': 25, 'data': {'name': 'Michael Clark', 'age': 25, 'occupation': 'Business Analyst', 'location': {'city': 'Chicago', 'state': 'Illinois', 'country': 'USA'}, 'contact': {'email': 'user25@example.com', 'phone': '+1-555-6632-465'}}},
        {'id': 26, 'data': {'name': 'Alex Garcia', 'age': 54, 'occupation': 'DevOps Engineer', 'location': {'city': 'Dhaka', 'state': 'Barisal', 'country': 'Bangladesh'}, 'contact': {'email': 'user26@example.com', 'phone': '+8801416867183'}}},
        {'id': 27, 'data': {'name': 'David Lee', 'age': 46, 'occupation': 'UX Designer', 'location': {'city': 'Miami', 'state': 'Washington', 'country': 'USA'}, 'contact': {'email': 'user27@example.com', 'phone': '+1-555-8270-640'}}},
        {'id': 28, 'data': {'name': 'Jessica Wilson', 'age': 36, 'occupation': 'Marketing Specialist', 'location': {'city': 'Denver', 'state': 'Arizona', 'country': 'USA'}, 'contact': {'email': 'user28@example.com', 'phone': '+1-555-5476-612'}}},
        {'id': 29, 'data': {'name': 'David Martinez', 'age': 34, 'occupation': 'Data Scientist', 'location': {'city': 'Austin', 'state': 'Arizona', 'country': 'USA'}, 'contact': {'email': 'user29@example.com', 'phone': '+1-555-9493-905'}}},
        {'id': 30, 'data': {'name': 'Emily Johnson', 'age': 50, 'occupation': 'Content Writer', 'location': {'city': 'Sylhet', 'state': 'Khulna', 'country': 'Bangladesh'}, 'contact': {'email': 'user30@example.com', 'phone': '+8801449598049'}}},
        {'id': 31, 'data': {'name': 'Jessica Clark', 'age': 21, 'occupation': 'Content Writer', 'location': {'city': 'Denver', 'state': 'Arizona', 'country': 'USA'}, 'contact': {'email': 'user31@example.com', 'phone': '+1-555-5855-199'}}},
        {'id': 32, 'data': {'name': 'James Garcia', 'age': 43, 'occupation': 'Business Analyst', 'location': {'city': 'Miami', 'state': 'Colorado', 'country': 'USA'}, 'contact': {'email': 'user32@example.com', 'phone': '+1-555-4971-617'}}},
        {'id': 33, 'data': {'name': 'Emily Turner', 'age': 43, 'occupation': 'Network Administrator', 'location': {'city': 'Miami', 'state': 'Texas', 'country': 'USA'}, 'contact': {'email': 'user33@example.com', 'phone': '+1-555-8457-115'}}},
        {'id': 34, 'data': {'name': 'Sophia Rodriguez', 'age': 36, 'occupation': 'UX Designer', 'location': {'city': 'Austin', 'state': 'Arizona', 'country': 'USA'}, 'contact': {'email': 'user34@example.com', 'phone': '+1-555-1715-492'}}},
        {'id': 35, 'data': {'name': 'Alex Brown', 'age': 27, 'occupation': 'Marketing Specialist', 'location': {'city': 'Rangpur', 'state': 'Sylhet', 'country': 'Bangladesh'}, 'contact': {'email': 'user35@example.com', 'phone': '+8801287893755'}}},
        {'id': 36, 'data': {'name': 'Michael Brown', 'age': 37, 'occupation': 'Network Administrator', 'location': {'city': 'Phoenix', 'state': 'New York', 'country': 'USA'}, 'contact': {'email': 'user36@example.com', 'phone': '+1-555-8372-825'}}},
        {'id': 37, 'data': {'name': 'Linda Rodriguez', 'age': 23, 'occupation': 'Data Scientist', 'location': {'city': 'Los Angeles', 'state': 'Arizona', 'country': 'USA'}, 'contact': {'email': 'user37@example.com', 'phone': '+1-555-9639-226'}}},
        {'id': 38, 'data': {'name': 'Michael Brown', 'age': 36, 'occupation': 'Business Analyst', 'location': {'city': 'Mymensingh', 'state': 'Khulna', 'country': 'Bangladesh'}, 'contact': {'email': 'user38@example.com', 'phone': '+8801881910047'}}},
        {'id': 39, 'data': {'name': 'Sophia Lee', 'age': 26, 'occupation': 'Data Scientist', 'location': {'city': 'Rangpur', 'state': 'Rangpur', 'country': 'Bangladesh'}, 'contact': {'email': 'user39@example.com', 'phone': '+8801241844593'}}},
        {'id': 40, 'data': {'name': 'James Garcia', 'age': 47, 'occupation': 'Content Writer', 'location': {'city': 'New York', 'state': 'Massachusetts', 'country': 'USA'}, 'contact': {'email': 'user40@example.com', 'phone': '+1-555-6650-106'}}},
        {'id': 41, 'data': {'name': 'James Lee', 'age': 31, 'occupation': 'UX Designer', 'location': {'city': 'Rangpur', 'state': 'Barisal', 'country': 'Bangladesh'}, 'contact': {'email': 'user41@example.com', 'phone': '+8801227223567'}}},
        {'id': 42, 'data': {'name': 'Daniel Lee', 'age': 41, 'occupation': 'Business Analyst', 'location': {'city': 'Sylhet', 'state': 'Chittagong', 'country': 'Bangladesh'}, 'contact': {'email': 'user42@example.com', 'phone': '+8801787066042'}}},
        {'id': 43, 'data': {'name': 'Daniel Turner', 'age': 55, 'occupation': 'HR Specialist', 'location': {'city': 'Austin', 'state': 'California', 'country': 'USA'}, 'contact': {'email': 'user43@example.com', 'phone': '+1-555-2764-972'}}},
        {'id': 44, 'data': {'name': 'James Brown', 'age': 24, 'occupation': 'Network Administrator', 'location': {'city': 'Barisal', 'state': 'Rangpur', 'country': 'Bangladesh'}, 'contact': {'email': 'user44@example.com', 'phone': '+8801860322191'}}},
        {'id': 45, 'data': {'name': 'James Rodriguez', 'age': 38, 'occupation': 'Network Administrator', 'location': {'city': 'San Francisco', 'state': 'Illinois', 'country': 'USA'}, 'contact': {'email': 'user45@example.com', 'phone': '+1-555-2760-692'}}},
        {'id': 46, 'data': {'name': 'Mia Clark', 'age': 35, 'occupation': 'Marketing Specialist', 'location': {'city': 'Austin', 'state': 'Massachusetts', 'country': 'USA'}, 'contact': {'email': 'user46@example.com', 'phone': '+1-555-4667-946'}}},
        {'id': 47, 'data': {'name': 'Mia Smith', 'age': 22, 'occupation': 'Marketing Specialist', 'location': {'city': 'Rajshahi', 'state': 'Rajshahi', 'country': 'Bangladesh'}, 'contact': {'email': 'user47@example.com', 'phone': '+8801562022974'}}},
        {'id': 48, 'data': {'name': 'Linda Garcia', 'age': 39, 'occupation': 'Business Analyst', 'location': {'city': 'Chittagong', 'state': 'Mymensingh', 'country': 'Bangladesh'}, 'contact': {'email': 'user48@example.com', 'phone': '+8801346657439'}}},
        {'id': 49, 'data': {'name': 'Jessica Turner', 'age': 49, 'occupation': 'Project Manager', 'location': {'city': 'Mymensingh', 'state': 'Sylhet', 'country': 'Bangladesh'}, 'contact': {'email': 'user49@example.com', 'phone': '+8801637895521'}}},
        {'id': 50, 'data': {'name': 'James Rodriguez', 'age': 22, 'occupation': 'Software Engineer', 'location': {'city': 'Mymensingh', 'state': 'Sylhet', 'country': 'Bangladesh'}, 'contact': {'email': 'user50@example.com', 'phone': '+8801184953076'}}}
        ]

    return render(request, 'navigation/info.html', {'person_info' : person_info})


def contact(request):
    return render(request, ('navigation/contact.html'))

def about(request):
    return render(request, ('navigation/about.html'))
