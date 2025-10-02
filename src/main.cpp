#include <iostream>
#include "../include/greeting_utils.h"

using std::cout, std::string, std::endl, std::cin, std::getline;

int main(){
    string name = "Sean Connolly";
    getline(cin, name);
    string output_msg = GreetingUtils::create_message(name);
    cout << output_msg << endl;
    char* char_converted = GreetingUtils::format_as_c_string(output_msg);
    cout << char_converted << endl;

    delete[] char_converted;
    return 0;
    

}



