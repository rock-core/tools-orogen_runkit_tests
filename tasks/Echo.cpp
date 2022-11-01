/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "Echo.hpp"

using namespace orogen_runkit_tests;

Echo::Echo(std::string const& name)
    : EchoBase(name)
{
}

Echo::~Echo()
{
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See Echo.hpp for more detailed
// documentation about them.

bool Echo::configureHook()
{
    if (!EchoBase::configureHook())
        return false;
    return true;
}
bool Echo::startHook()
{
    if (!EchoBase::startHook())
        return false;
    return true;
}
void Echo::updateHook()
{
    EchoBase::updateHook();

    double value;
    while (_in.read(value) == RTT::NewData) {
        _out.write(value);
        _ondemand.write(value);
    }

    base::samples::Joints joints;
    while (_struct_in.read(joints) == RTT::NewData) {
        _struct_out.write(joints);
    }

    base::Vector3d opaque;
    while (_opaque_in.read(opaque) == RTT::NewData) {
        _opaque_out.write(opaque);
    }
}
void Echo::errorHook()
{
    EchoBase::errorHook();
}
void Echo::stopHook()
{
    EchoBase::stopHook();
}
void Echo::cleanupHook()
{
    EchoBase::cleanupHook();
}
