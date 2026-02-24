//#include <iostream>
//#include <fstream>
//using namespace std;
//
//class FileHandler {
//private:
//    ofstream file;
//    string filename;
//
//public:
//     FileHandler(const string& fname) {
//        filename = fname;
//        file.open(filename);
//
//        if (file.is_open()) {
//            cout << "File opened successfully.\n";
//        }
//        else {
//            cout << "Error opening file.\n";
//        }
//    }
//
//     void writeData(const string& data) {
//        if (file.is_open()) {
//            file << data << endl;
//            cout << "Data written to file.\n";
//        }
//    }
//
//     void displayFileName() const {
//        cout << "File Name: " << filename << endl;
//    }
//
//     ~FileHandler() {
//        if (file.is_open()) {
//            file.close();
//            cout << "File closed automatically (Destructor).\n";
//        }
//    }
//};
//
//int main() {
//    FileHandler fh("example.txt");
//
//    fh.displayFileName();      
//    fh.writeData("Hello C++");
//    fh.writeData("File handling with destructor");
//
//    cout << "End of main function.\n";
//
//    return 0;
//}