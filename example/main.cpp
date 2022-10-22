#include <iostream>
#include "../mcl/Logger.hpp"

int main(int argc, char const **argv)
{
    std::string error = "error";
    std::string debug = "debug";
    std::string info = "info";
    std::string warning = "warning";

    mcl::Log::Warning() << "this is a " << warning;
    mcl::Log::Debug() << "this is a " << debug;
    mcl::Log::Info() << "this is an " << info;
    mcl::Log::Error() << "this is an " << error;

    return EXIT_SUCCESS;
}