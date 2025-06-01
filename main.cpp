#include <iostream>
#include <string>

int main(int, char **) {
  std::string input_line;

  while (true) {
    std::cout << "db > ";
    std::getline(std::cin, input_line);

    if (input_line == ".exit") {
      break;
    }
    std::cout << "Unrecognized command : " << input_line << std::endl;
  }
}
