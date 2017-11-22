#include "HostnameModul.hpp"



void HostnameModul::render_information(std::vector<std::string>& val)
{
    std::vector<std::string> v = val;
}

const std::string &HostnameModul::get_host_name() const {
    return _host_name;
}

const std::string &HostnameModul::get_user_name() const {
    return _user_name;
}

HostnameModul::HostnameModul()
{

    char buff[100];
    size_t size = 100;
    char buffer3[1024];


    _moduleName = "Hostname Module";
    sysctlbyname("kern.hostname", &buff, &size, NULL, 0);
    _host_name.assign(buff);

    FILE* file3 = popen("whoami", "r");
    fgets(buffer3, 1024 , file3);
    pclose(file3);

    _user_name.assign(buffer3);
    _user_name = _user_name.substr(0, _user_name.length() - 1);
}
const std::string& HostnameModul::get_moduleName() const {
    return _moduleName;
}

HostnameModul::~HostnameModul() {}

