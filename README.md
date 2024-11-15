# Projects:

1) Title: LSB Steganography in C

Technology: C Programming, Image Processing, File I/O

Project Brief:
Developed a program using Least Significant Bit (LSB) Steganography techniques to hide secret messages inside BMP image files. The program allows encoding a text file into an image and decoding the message back from the image, providing an effective means of secure communication. The application uses a combination of file handling, bit manipulation, and image format validation to encode and decode information.

Key Concept:
Steganography: Hiding information within a cover medium (in this case, BMP images) to prevent unauthorized access.
Least Significant Bit (LSB) Encoding: A technique where the least significant bits of the pixel data in an image are altered to embed the secret message without noticeably changing the image.
File I/O and Validation: Opening and reading files, validating the formats (BMP and TXT), and ensuring data integrity during encoding and decoding processes.
Bit Manipulation: Modifying individual bits in the pixel data to hide the secret information without significantly altering the image.


2) Title: Inverted Search
   
Technology:
Programming Language: C
Data Structures: Inverted Index, Hash Tables, Linked Lists
Tools: GCC/Clang, makefile, Text editors (VS Code, etc.)
Operating System: Linux/Windows/macOS

Project Brief:
The Inverted Search project focuses on creating a text-based search engine for a simple database. It allows users to store records from text files, search for keywords using an inverted index, update records, and save/load the database. This project demonstrates efficient searching through large datasets by mapping keywords to their occurrences in the database.

Key Concepts:
Inverted Index: A data structure that maps keywords to the records they appear in, allowing for efficient searching.
Text File Parsing: Loading and processing text files (file1.txt, etc.) into a structured database.
Search Optimization: Using the inverted index to quickly retrieve records containing specific keywords.
Database Management: Creating, updating, and displaying records in the database.
Data Persistence: Saving and loading the database to/from text files for data retention between sessions.


3) Title: Car Black Box System

Technology:
Microcontroller: If you’re using a PIC16F877A, this is correct.
Programming Language: C or Embedded C is suitable for programming PIC microcontrollers.
Hardware Components: ADC, EEPROM, LCD, digital keypad, and DS1307 RTC module are appropriate components for your project’s functionalities.
Development Tools: MPLAB X IDE and PICKit Programmer are commonly used for PIC microcontroller development.

Project Brief:
Developed a Car Black Box system using a PIC microcontroller that monitors and logs critical driving events, speed, and other parameters. This embedded system records events like overspeeding, sudden braking, or sharp turns, and logs the details (including time) for later retrieval. Designed with an LCD interface for real-time feedback, the project includes password-protected access to logs and settings, making it a practical tool for analyzing driving behavior and accident conditions.

Key Concepts:
Event Detection and Logging: Monitors and records key events based on driving conditions using ADC and sensors.
Data Logging and Security: Stores event data in EEPROM, with password protection and lockout mechanisms after multiple failed attempts.
Real-Time Clock Integration: DS1307 RTC module for accurate timestamping of each logged event.
Embedded Interface Design: LCD display for output, with a digital keypad for navigating and interacting with the system.


4) Title: Minishell
   
Technology: C programming, Unix/Linux System Calls, Process Management, File Handling

Project Brief: Developed a custom shell interface in C that simulates the functionality of a Unix/Linux shell. The shell interprets and executes built-in commands (like cd, pwd, echo), handles environment variables, and allows for external command execution by creating child processes. It includes support for customizable prompts, system calls, and user-defined commands. Commands can be processed with parameters, and output is managed with an intuitive interface.

Key Concepts:
Process Management: Used fork, exec, and wait to handle command execution.
System Calls: Leveraged system calls for directory changes, environment variable handling, and file I/O.
Command Parsing: Implemented logic for parsing commands and arguments.
Built-in Commands: Developed internal handling for cd, pwd, exit, and custom prompt settings.
Error Handling: Managed error messages and command validation.


5) Title: Smart Health Card Using Machine Learning (Academic project)
                             
Technology - Python, SQL, Machine Learning.

Project brief - Developed a system using Machine Learning to predict diseases based on unstructured medical data and lifestyle factors, including managing patient history. The system also provided personalized suggestions for diet plans and exercise routines to promote health and early disease detection.

Key Concepts - Health prediction, Patient history management, Suggestions for health improvement.

   
