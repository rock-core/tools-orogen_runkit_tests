/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "Operations.hpp"

using namespace orogen_runkit_tests;

Operations::Operations(std::string const& name)
    : OperationsBase(name)
{
}

Operations::~Operations()
{
}

void Operations::empty()
{
}

boost::int32_t Operations::simple(::base::Time const& b)
{
    return b.microseconds;
}

::base::Time Operations::simple_with_return(::base::Time const& b)
{
    return base::Time::fromSeconds(b.toSeconds() * 2);
}

::std::string Operations::string_handling(::std::string const& b)
{
    return b + "ret";
}

::base::Time Operations::with_opaque_argument(::base::Vector3d const& b)
{
    return ::base::Time::fromSeconds(b.x());
}

::base::Vector3d Operations::with_returned_opaque(::base::Time const& b)
{
    return ::base::Vector3d(b.toSeconds(), 0, 0);
}

::base::Time Operations::with_returned_parameter(::base::Time& a,
    ::base::Vector3d const& b)
{
    a = base::Time::fromSeconds(20);
    return ::base::Time::fromSeconds(b.y());
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See Operations.hpp for more detailed
// documentation about them.

bool Operations::configureHook()
{
    if (!OperationsBase::configureHook())
        return false;
    return true;
}
bool Operations::startHook()
{
    if (!OperationsBase::startHook())
        return false;
    return true;
}
void Operations::updateHook()
{
    OperationsBase::updateHook();
}
void Operations::errorHook()
{
    OperationsBase::errorHook();
}
void Operations::stopHook()
{
    OperationsBase::stopHook();
}
void Operations::cleanupHook()
{
    OperationsBase::cleanupHook();
}
