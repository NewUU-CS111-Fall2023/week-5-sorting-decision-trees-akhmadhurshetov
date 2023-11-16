/*
 * Author: Axmad Xurshetov
 * Date: 16.11.2023
 * Name: Task 1
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;


void bubbleSort(vector<string>& books) {
    int n = books.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j] > books[j + 1]) {
                swap(books[j], books[j + 1]);
                swapped = true;
            }
        }
        
        if (!swapped) {
            break;
        }
    }
}

int main() {
   
    vector<string> books = {
        "Catcher in the Rye", 
        "Pride and Prejudice", 
        "To Kill a Mockingbird", 
        "The Great Gatsby", 
        "Moby Dick"
    };

    
    bubbleSort(books);

   
    cout << "Sorted list of book titles:" << endl;
    for (const string& title : books) {
        cout << title << endl;
    }

    return 0;
}
