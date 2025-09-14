#pragma once
#include <string>


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

    std::string getCurrentTime()
    {
        std::string currentDateTime{};
        currentDateTime = std::to_string(std::chrono::system_clock::now());

        return currentDateTime;
    };
}