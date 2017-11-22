#include "OSModul.hpp"


void OSModul::render_information(std::vector<std::string>& val)
{
    std::vector<std::string> v = val;
}



OSModul::OSModul()
{
    _moduleName = "OS Module";

    char    buff[100];
    size_t    size = 100;


    sysctlbyname("kern.ostype", &buff, &size, NULL, 0);
    _ostype.assign(buff);

    char buffer[1024];

    FILE* file = popen("sw_vers -productName", "r");
    fgets(buffer, 1024 , file);
    pclose(file);
    _mac_os.assign(buffer);
    _mac_os = _mac_os.substr(0, _mac_os.length() - 1);

    char buffer2[1024];

    FILE* file2 = popen("sw_vers -productVersion", "r");
    fgets(buffer2, 1024 , file2);
    pclose(file2);
    _version_os.assign(buffer2);
    _version_os = _version_os.substr(0, _version_os.length() - 1);
}
const std::string& OSModul::get_moduleName() const {
    return _moduleName;
}

OSModul::~OSModul() {}

const std::string &OSModul::get_ostype() const {
    return _ostype;
}

const std::string &OSModul::get_mac_os() const {
    return _mac_os;
}

const std::string &OSModul::get_version_os() const {
    return _version_os;
}
