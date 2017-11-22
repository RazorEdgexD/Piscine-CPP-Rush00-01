
#include "TimeModul.hpp"

void TimeModul::render_information(std::vector<std::string>& val)
{
    std::vector<std::string> v = val;

    time_t     now = std::time(0);
    char       buf[80];


    strftime(buf, sizeof(buf), "%X %d-%m-%Y", localtime(&now));
    _time.assign(buf);

}



TimeModul::TimeModul()
{
    _moduleName = "Time Module";

    time_t     now = std::time(0);
    char       buf[80];


    strftime(buf, sizeof(buf), "%X %d-%m-%Y", localtime(&now));
    _time.assign(buf);
}
const std::string& TimeModul::get_moduleName() const {
    return _moduleName;
}

TimeModul::~TimeModul() {}

const std::string &TimeModul::get_time() const {
    return _time;
}
