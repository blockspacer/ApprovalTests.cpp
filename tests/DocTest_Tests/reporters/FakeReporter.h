#ifndef APPROVALTESTS_CPP_FAKEREPORTER_H
#define APPROVALTESTS_CPP_FAKEREPORTER_H

#include "ApprovalTests/core/Reporter.h"

class FakeReporter : public ApprovalTests::Reporter
{
public:
    bool working;
    mutable bool called = false;

    inline FakeReporter(bool working_ = true) : working(working_)
    {
    }

    inline virtual bool report(std::string /*received*/,
                               std::string /*approved*/) const override
    {
        called = true;
        return working;
    }
};

#endif //APPROVALTESTS_CPP_FAKEREPORTER_H
