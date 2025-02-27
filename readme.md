[![Build Status](https://www.travis-ci.org/{your-name}/{your-repo-name}.svg?branch=master)]
(https://www.travis-ci.org/{your-name}/{your-repo-name})
# Contacts List Management System

This is a simple contacts list management system that allows users to add, display, delete, search, modify, and clear contacts. (For simple project practice.Learn form https://www.bilibili.com/video/BV1et411b73Z?spm_id_from=333.788.videopod.episodes&vd_source=cfd41efb9ad31bbd65dff5da1d47978a&p=72)

## Features

- Add contact
- Display contacts
- Delete contact
- Search contact
- Modify contact
- Clear contacts
- Exit system

## File Structure
ContactsListManagementSystem/ ├── include/ │ ├── adding.h │ ├── addressbooks.h │ ├── clearing.h │ ├── deleting.h │ ├── menu.h │ ├── modifying.h │ ├── searching.h │ └── showing.h ├── src/ │ ├── adding.cpp │ ├── addressbooks.cpp │ ├── clearing.cpp │ ├── deleting.cpp │ ├── main.cpp │ ├── menu.cpp │ ├── modifying.cpp │ ├── searching.cpp │ └── showing.cpp └── README.md

## Compilation and Execution

### Compilation

Run the following commands in the project root directory to compile the project:

```sh
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c -MMD src/adding.cpp -o src/adding.o
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c -MMD src/addressbooks.cpp -o src/addressbooks.o
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c -MMD src/clearing.cpp -o src/clearing.o
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c -MMD src/deleting.cpp -o src/deleting.o
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c -MMD src/main.cpp -o src/main.o
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c -MMD src/menu.cpp -o src/menu.o
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c -MMD src/modifying.cpp -o src/modifying.o
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c -MMD src/searching.cpp -o src/searching.o
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c -MMD src/showing.cpp -o src/showing.o
g++ -std=c++17 -Wall -Wextra -g -Iinclude -o output/main.exe src/adding.o src/addressbooks.o src/clearing.o src/deleting.o src/main.o src/menu.o src/modifying.o src/searching.o src/showing.o -Llib

Execution
After successful compilation, run the generated executable file:
output\main.exe

Usage Instructions
After running the program, the main menu will be displayed.
Enter the corresponding number according to the prompt to select a function:
1 Add contact
2 Display contacts
3 Delete contact
4 Search contact
5 Modify contact
6 Clear contacts
0 Exit system

Contribution
Feel free to submit issues and contribute code.