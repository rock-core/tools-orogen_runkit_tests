/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "SimpleSource.hpp"

using namespace orogen_runkit_tests;

SimpleSource::SimpleSource(std::string const& name)
    : SimpleSourceBase(name)
{
}

SimpleSource::~SimpleSource()
{
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See SimpleSource.hpp for more detailed
// documentation about them.

bool SimpleSource::configureHook()
{
    if (!SimpleSourceBase::configureHook())
        return false;

    m_increment = _increment.get();
    m_value = 0;
    return true;
}
bool SimpleSource::startHook()
{
    if (!SimpleSourceBase::startHook())
        return false;
    return true;
}
void SimpleSource::updateHook()
{
    _out0.write(m_value);
    _out1.write(m_value + 1);
    _out2.write(m_value + 2);
    _out3.write(m_value + 3);
    m_value += m_increment;

    SimpleSourceBase::updateHook();
}
void SimpleSource::errorHook()
{
    SimpleSourceBase::errorHook();
}
void SimpleSource::stopHook()
{
    SimpleSourceBase::stopHook();
}
void SimpleSource::cleanupHook()
{
    SimpleSourceBase::cleanupHook();
}
