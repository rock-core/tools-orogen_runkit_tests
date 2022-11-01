/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "SimpleSink.hpp"

using namespace orogen_runkit_tests;

SimpleSink::SimpleSink(std::string const& name)
    : SimpleSinkBase(name)
{
}

SimpleSink::~SimpleSink()
{
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See SimpleSink.hpp for more detailed
// documentation about them.

bool SimpleSink::configureHook()
{
    if (!SimpleSinkBase::configureHook())
        return false;
    return true;
}
bool SimpleSink::startHook()
{
    if (!SimpleSinkBase::startHook())
        return false;
    return true;
}
void SimpleSink::updateHook()
{
    double value;
    while (_in0.read(value) == RTT::NewData)
        ;
    while (_in1.read(value) == RTT::NewData)
        ;
    while (_in2.read(value) == RTT::NewData)
        ;
    while (_in3.read(value) == RTT::NewData)
        ;

    SimpleSinkBase::updateHook();
}
void SimpleSink::errorHook()
{
    SimpleSinkBase::errorHook();
}
void SimpleSink::stopHook()
{
    SimpleSinkBase::stopHook();
}
void SimpleSink::cleanupHook()
{
    SimpleSinkBase::cleanupHook();
}
