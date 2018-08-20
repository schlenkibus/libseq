#include "frameParameter.h"

namespace LIBSEQ {
    void frameParameter::setParameter(const Parameter& p, std::any value) {
        m_parameter[p] = value;
    }

    const std::any& frameParameter::getParameter(const Parameter& p) const {
        return m_parameter.at(p);
    }
};
