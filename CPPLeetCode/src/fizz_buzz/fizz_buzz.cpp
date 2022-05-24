#include "fizz_buzz.h"

/*NAIVE_SOLUTION*/
/*
std::vector<std::string> Solution::fizzBuzz(int n)
{
    std::vector<std::string> output_vector;

    for (int i = 1; i <= n; i++)
    {
        bool divby3 = i % 3 == 0;
        bool divby5 = i % 5 == 0;

        if (divby3 && divby5) {
            output_vector.push_back("FizzBuzz");
        }
        else if (divby3) {
            output_vector.push_back("Fizz");
        }
        else if (divby5) {
            output_vector.push_back("Buzz");
        }
        else {
            output_vector.push_back(std::to_string(i));
        }
    }

    for (int i = 0; i < output_vector.size(); i++) {
        std::cout << output_vector[i] << std::endl;
    }
    return output_vector;
}
*/

/*STRING_CONCATENATION_SOLUTION*/
/*
std::vector<std::string> Solution::fizzBuzz(int n)
{
    std::vector<std::string> output_vector;

    for (int i = 1; i <= n; i++)
    {
        std::string outputstr;
        bool divby3 = i % 3 == 0;
        bool divby5 = i % 5 == 0;

        if (divby3) {
            outputstr += "Fizz";
        }
        if (divby5) {
            outputstr += "Buzz";
        }
        if (outputstr == "") {
            outputstr += std::to_string(i);
        }

        output_vector.push_back(outputstr);
    }

    for (int i = 0; i < output_vector.size(); i++) {
        std::cout << output_vector[i] << std::endl;
    }
    return output_vector;
}
*/

/*MAP_SOLUTION*/
std::vector<std::string> Solution::fizzBuzz(int n)
{
    std::vector<std::string> output_vector;
    std::map<int, std::string> map;
    
    map.insert({ 3, "Fizz" });
    map.insert({ 5, "Buzz" });

    for (int i = 1; i <= n; i++)
    {
        std::string outputstr;

        for (auto& key : map) {
            if (i % key.first == 0) {
                outputstr += key.second;
            }
        }

        if (outputstr == "") {
            outputstr += std::to_string(i);
        }

        output_vector.push_back(outputstr);
    }

    for (int i = 0; i < output_vector.size(); i++) {
        std::cout << output_vector[i] << std::endl;
    }
    return output_vector;
}