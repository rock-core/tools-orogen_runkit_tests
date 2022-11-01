#include "Uncaught.hpp"

using namespace orogen_runkit_tests;

Uncaught::Uncaught(std::string const& name)
    : UncaughtBase(name)
{
}

Uncaught::~Uncaught()
{
}

void Uncaught::do_runtime_error()
{
    error();
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See Uncaught.hpp for more detailed
// documentation about them.

bool Uncaught::configureHook()
{
    if (_exception_level.get() == 0)
        throw std::runtime_error("exception in configureHook");
    return true;
}
bool Uncaught::startHook()
{
    if (_exception_level.get() == 1)
        throw std::runtime_error("exception in startHook");
    return true;
}

void Uncaught::updateHook()
{
    if (_exception_level.get() == 2)
        throw std::runtime_error("exception in updateHook");
}

void Uncaught::errorHook()
{
    if (_exception_level.get() == 3)
        throw std::runtime_error("exception in errorHook");
}
void Uncaught::stopHook()
{
}
void Uncaught::cleanupHook()
{
}
