#pragma once
#include <cstdint>
#include <string>

    class LogSys {
    public:
        LogSys();
        ~LogSys();
        void init();
        void setLogLevel(uint8_t level);
        void setLogFileName(const std::string name);
        void setLogFilePath(const std::string &path);
        // Log functions
        template typename <T>
        void info(const &T msg);
    };
