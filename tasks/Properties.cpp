/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "Properties.hpp"

using namespace orogen_runkit_tests;

Properties::Properties(std::string const& name)
    : PropertiesBase(name)
{
    _prop1.set(base::Time::fromSeconds(21));
    _prop2.set(84);
    _prop3.set("42");

    _att1.set(base::Time::fromSeconds(21));
    _att2.set(84);
    _att3.set("42");
}

Properties::~Properties()
{
}

bool Properties::setDynamic_prop(::std::string const& value)
{
    _dynamic_prop_setter_called.set(true);
    return (value == "12345");
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See Properties.hpp for more detailed
// documentation about them.

bool Properties::configureHook()
{
    if (!PropertiesBase::configureHook())
        return false;
    return true;
}
bool Properties::startHook()
{
    if (!PropertiesBase::startHook())
        return false;
    return true;
}
void Properties::updateHook()
{
    PropertiesBase::updateHook();
}
void Properties::errorHook()
{
    PropertiesBase::errorHook();
}
void Properties::stopHook()
{
    PropertiesBase::stopHook();
}
void Properties::cleanupHook()
{
    PropertiesBase::cleanupHook();
}
