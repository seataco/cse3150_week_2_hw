#include <iostream>
#include <greeting_utils.h>

using std::cout, std::cin, std::string, std::endl, std::getline;

namespace GreetingUtils{
    string create_message(const string& name){
        return "Hello, " + name + "!";
    }

    char* format_as_c_string(const string& msg){
        /*
        (b) Dynamically allocate a char array on the heap that is large enough to hold the entire
        message, plus a null terminator.
        (c) Copy the characters from the std::string into the new char array.
        (d) Add the null terminator ‘\0‘ at the end of the char array.
        (e) Return the pointer to the new heap-allocated char array
        */

        int arr_length = msg.length();
        // TODO: get legnth message, create heap array int* p_array = new int[10]
        // remember to deallocate later delete[] p_array in main
        char* char_arr = new char[arr_length + 1];
        for (int i = 0; i < arr_length; i++){
            char_arr[i] = msg[i];
        }
        //TODO: copy characters from msg into array, add \0 to end
        char_arr[arr_length] = '\0';
        return char_arr;
    }




}