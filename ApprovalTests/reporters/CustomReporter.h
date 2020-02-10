#ifndef APPROVALTESTS_CPP_CUSTOMREPORTER_H
#define APPROVALTESTS_CPP_CUSTOMREPORTER_H

#include "DiffInfo.h"
#include "GenericDiffReporter.h"
#include <memory>

namespace ApprovalTests
{
    class CustomReporter : public GenericDiffReporter
    {
    public:
        static std::shared_ptr<Reporter> create(std::string&& path,
                                                std::string&& arguments,
                                                Type type = Type::TEXT)
        {
            DiffInfo info(std::move(path), std::move(arguments), type);
            return std::make_shared<GenericDiffReporter>(info);
        }
    };
}

#endif //APPROVALTESTS_CPP_CUSTOMREPORTER_H