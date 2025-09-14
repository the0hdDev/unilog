#pragma once
#include <string>
#include <chrono>
#include <iomanip>
#include <iostream>

namespace core
{
    enum LogLevel
    {
        INFO = 0,
        WARNING = 1,
        CRITICAL = 2,
        ERROR = 3,
        DEBUG = 4,
        TRACE = 5
    };

    static const std::string RED;
    static const std::string GREEN;
    static const std::string YELLOW;
    static const std::string BLUE;
    static const std::string BOLD;
    static const std::string UNDERLINE;
    static const std::string BG_CYAN;
    static const std::string WHITE;
    static const std::string RESET;

    std::string currentDateTime() {
        auto now = std::chrono::system_clock::now();
        std::time_t now_time = std::chrono::system_clock::to_time_t(now);

        std::stringstream ss;
        ss << std::put_time(std::localtime(&now_time), "%Y-%m-%d %H:%M:%S");
        return ss.str();
    }
}
