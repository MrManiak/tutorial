#ifndef USER_H
#define USER_H

#include <string>
#include <sdl>

class User
{
    public:
        User();
        virtual ~User();
        unsigned int Getping() { return m_ping; }
        void Setping(unsigned int val) { m_ping = val; }
        unsigned int Getuptime() { return m_uptime; }
        void Setuptime(unsigned int val) { m_uptime = val; }
        std::string Getusername() { return m_username; }
        void Setusername(std::string val) { m_username = val; }
        std::string GetipAddress() { return m_ipAddress; }
        void SetipAddress(std::string val) { m_ipAddress = val; }
    protected:
    private:
        unsigned int m_ping;
        unsigned int m_uptime;
        std::string m_username;
        std::string m_ipAddress;
};

#endif // USER_H
