/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "Kill.hpp"

using namespace orogen_runkit_tests;

Kill::Kill(std::string const& name)
    : KillBase(name)
{
}

Kill::~Kill()
{
}

void Kill::kill()
{
    int* ptr = 0;
    *ptr = 10;
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See Kill.hpp for more detailed
// documentation about them.

bool Kill::configureHook()
{
    if (!KillBase::configureHook())
        return false;
    return true;
}
bool Kill::startHook()
{
    if (!KillBase::startHook())
        return false;
    return true;
}
void Kill::updateHook()
{
    KillBase::updateHook();
}
void Kill::errorHook()
{
    KillBase::errorHook();
}
void Kill::stopHook()
{
    KillBase::stopHook();
}
void Kill::cleanupHook()
{
    KillBase::cleanupHook();
}
