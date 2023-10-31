// Ethan Tirtorahardjo
// etirtorahardjo@csu.fullerton.edu
// @EthanTirtorahardjo
// Partners: @jazorie

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cerr << "error: you must supply at least one number\n";
    return 1;
  }

  double total = 0.0;
  int count = 0;

  for (const auto& argument :
       std::vector<std::string>(arguments.begin() + 1, arguments.end())) {    
    try {
      double num = std::stod(argument);
      total += num;
      count++;
    } catch (const std::invalid_argument& e) {
      return 1;
    } catch (const std::out_of_range& e) {
      return 1;
    }
  }

  if (count > 0) {
    double average = total / count;
    std::cout << "average = " << average << std::endl;
  } else {
    return 1;
  }

  // DONE: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.

  // DONE: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.

  // DONE: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // DONE: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  return 0;
}
