/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "StateTransitions.hpp"

using namespace orogen_runkit_tests;

StateTransitions::StateTransitions(std::string const& name)
    : StateTransitionsBase(name)
{
}

StateTransitions::~StateTransitions()
{
}

void StateTransitions::do_custom_error()
{
    error(CUSTOM_ERROR);
}

void StateTransitions::do_custom_exception()
{
    exception(CUSTOM_EXCEPTION);
}

void StateTransitions::do_custom_runtime()
{
    state(CUSTOM_RUNTIME);
}

void StateTransitions::do_nominal_running()
{
    state(RUNNING);
}

void StateTransitions::do_exception()
{
    exception();
}

void StateTransitions::do_recover()
{
    recover();
}

void StateTransitions::do_runtime_error()
{
    error();
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See StateTransitions.hpp for more detailed
// documentation about them.

bool StateTransitions::configureHook()
{
    if (!StateTransitionsBase::configureHook())
        return false;
    return true;
}
bool StateTransitions::startHook()
{
    if (!StateTransitionsBase::startHook())
        return false;
    return true;
}
void StateTransitions::updateHook()
{
    StateTransitionsBase::updateHook();
}
void StateTransitions::errorHook()
{
    StateTransitionsBase::errorHook();
}
void StateTransitions::stopHook()
{
    StateTransitionsBase::stopHook();
}
void StateTransitions::cleanupHook()
{
    StateTransitionsBase::cleanupHook();
}
