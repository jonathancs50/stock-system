# Stock System Application

## Description
The Stock System Application is designed to manage and track stock for both reading materials and confectionery items. Users can easily add new stock entries for items like books, magazines, and various confectionery products. The application utilizes the Factory Design Pattern to create and manage these stock items efficiently. Additionally, it stores all stock entries in an organized XML file, ensuring that your stock data is both accessible and well-structured for future use or reporting.

## Features
- **Add Stock**: Add new stock entries for reading materials and confectionery items.
- **Organized Storage**: All stock data is stored in a well-structured XML file.
- **Factory Design Pattern**: Efficiently manages the creation of stock items using the Factory Design Pattern.

## How to Install and Run the Project

### Prerequisites
- **Qt Creator**: Ensure you have [Qt Creator](https://www.qt.io/download) installed.
- **Qt Framework**: Install the appropriate version of the Qt framework via the Qt Maintenance Tool or the Qt installer.

### Installation Steps

1. **Clone the Repository**
   ```bash
   git clone https://github.com/jonathancs50/stock-system.git
   cd stock-system
   
2. **Open the Project in Qt Creator**
   - Launch Qt Creator.
   - Go to `File` > `Open File or Project...`.
   - Navigate to the project directory and open the `CMakeLists.txt` file for the desired application.

3. **Configure the Project**
   - Qt Creator will prompt you to configure the project with CMake. Select the appropriate build kits and click `Configure Project`.
   - Ensure all required modules and dependencies are installed. Qt Creator will handle CMake configuration if set up correctly.

4. **Build the Project**
   - Click the `Build` button (hammer icon) or go to `Build` > `Build All` to compile the project.
   - Resolve any build issues if they arise (e.g., missing dependencies or configuration errors).

5. **Run the Project**
   - Click the `Run` button (green play icon) or go to `Build` > `Run` to start the application.
   - For the App, you can now add books and other items.

## License

MIT License

Copyright (c) 2024 Jonathan Loxton

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
