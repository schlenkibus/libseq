#pragma once

#include <unordered_map>
#include <any>

namespace LIBSEQ {
    class frameParameter {
    public:
        enum Parameter {
            velocity, playbackTime
        };

        frameParameter() = default;
        void setParameter(const Parameter& p, std::any value);
        const std::any& getParameter(const Parameter& p) const;
    protected:
        std::unordered_map<Parameter, std::any> m_parameter;
    };
};
