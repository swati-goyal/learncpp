#include <string>

namespace log_line {
    std::string message(std::string line) {
        int start = line.find(':');
        return line.substr(start+2);
    }

    std::string log_level(std::string line) {
        int start = line.find('[');
        int end = line.find(']');
        return line.substr(start+1, end - start - 1);
    }

    std::string reformat(std::string line) {
        std::string message = log_line::message(line);
        std::string log_level = log_line::log_level(line);
        return message + " (" + log_level + ")";
    }
}  // namespace log_line
