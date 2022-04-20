#include <iostream>
#include <string>
using namespace std;

void cpp_strings() {
    
    string unformatted_full_name =("StephenHawking");
     string journal_entry_1 =("Isaac Newton");
     string journal_entry_2 =("Lebitiniz");
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    string first_name= unformatted_full_name.substr(0,7);
    string last_name=  unformatted_full_name.substr(7);
    journal_entry_1.erase(0,5);
    journal_entry_2.swap(journal_entry_1); 
    //string formatted_full_name= first_name+last_name;
    //formatted_full_name.insert(7," ");
    cout<<first_name<<endl;
    cout<<journal_entry_1<<endl;
    //cout << formatted_full_name;
}
