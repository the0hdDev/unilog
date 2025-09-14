#pragma once
#include <mutex>

class log_to_file
{
public: log_to_file();
        ~log_to_file();

        template <typename T>
        void lFile(const std::string &type, const T &msg, int16_t code);
private:
        std::mutex m_mutex;
};