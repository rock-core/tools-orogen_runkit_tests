/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "Configurations.hpp"

using namespace orogen_runkit_tests;

Configurations::Configurations(std::string const& name)
    : ConfigurationsBase(name)
{
    _simple_container.set({0, 1, 2, 3, 4, 5, 6, 7, 8, 9});
}

Configurations::~Configurations()
{
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See Configurations.hpp for more detailed
// documentation about them.

bool Configurations::configureHook()
{
    if (!ConfigurationsBase::configureHook())
        return false;
    return true;
}
bool Configurations::startHook()
{
    if (!ConfigurationsBase::startHook())
        return false;
    return true;
}
void Configurations::updateHook()
{
    ConfigurationsBase::updateHook();
}
void Configurations::errorHook()
{
    ConfigurationsBase::errorHook();
}
void Configurations::stopHook()
{
    ConfigurationsBase::stopHook();
}
void Configurations::cleanupHook()
{
    ConfigurationsBase::cleanupHook();
}
