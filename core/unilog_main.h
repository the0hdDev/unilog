#pragma once
#include <cstdint>
#include <string>
#include <sys/types.h>
#include <mutex>

class Log {
    public:
        Log();
        ~Log();
        void init();
        void setLogLevel(uint8_t level);
        void setLogFileName(const std::string name);
        void setLogFilePath(const std::string &path);
        // Log functions
        template <typename T>
        void println(const T &msg);

        template <typename T>
        void info(const T &msg);

        template <typename T>
        void debug(const T &msg);

        template <typename T>
        void error(const T &msg, const uint16_t code = 0);

        template <typename T>
        void critical(const T &msg, const uint16_t code = 0);

        template <typename T>
        void warn(const T &msg);

    private:
        enum logLevel : uint8_t {
            LOG_LEVEL_NONE = 0,
            LOG_LEVEL_ERROR = 1,
            LOG_LEVEL_WARN = 2,
            LOG_LEVEL_INFO = 3,
            LOG_LEVEL_DEBUG = 4,
            LOG_LEVEL_CRITICAL = 5,
            LOG_LEVEL_ALL = 6
        };

        uint8_t logLevel;
        std::mutex m_mutex;

};
