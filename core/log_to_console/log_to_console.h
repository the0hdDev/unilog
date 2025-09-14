#pragma once
#include <stdint.h>
#include <mutex>
#include "core/essentials.h"

namespace console
{
    class log
    {
    public:
        log();
        ~log();
        void init();
        void setLogLevel(uint8_t level);
        // Log functions
        template<typename T>
        void error(const T &msg, const uint16_t code = 0);
        template<typename T>
        void warn(const T &msg);
        template<typename T>
        void info(const T &msg);
        template<typename T>
        void debug(const T &msg);
        template<typename T>
        void critical(const T &msg, const uint16_t code = 0);
    private:
        std::mutex m_mutex;
        uint8_t m_logLevel;
    };
}