/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "EmptyTask.hpp"

using namespace orogen_runkit_tests;

EmptyTask::EmptyTask(std::string const& name)
    : EmptyTaskBase(name)
{
}

EmptyTask::~EmptyTask()
{
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See EmptyTask.hpp for more detailed
// documentation about them.

bool EmptyTask::configureHook()
{
    if (!EmptyTaskBase::configureHook())
        return false;
    return true;
}
bool EmptyTask::startHook()
{
    if (!EmptyTaskBase::startHook())
        return false;
    return true;
}
void EmptyTask::updateHook()
{
    EmptyTaskBase::updateHook();
}
void EmptyTask::errorHook()
{
    EmptyTaskBase::errorHook();
}
void EmptyTask::stopHook()
{
    EmptyTaskBase::stopHook();
}
void EmptyTask::cleanupHook()
{
    EmptyTaskBase::cleanupHook();
}
