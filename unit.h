#ifndef UNIT_H
#define UNIT_H
#include <memory>
#include <vector>

class Unit
{
public:
    using Flags = unsigned int;

    virtual void add(const std::shared_ptr<Unit>& unit, Flags flags) {
        throw std::runtime_error("Not supported");
    }
    virtual std::string compile(unsigned int level = 0) const = 0;
    virtual ~Unit() = default;
protected:
    virtual std::string generateShift(unsigned int level) const {
        static const auto DEFAULT_SHIFT = "  ";
        std::string result;
        for (unsigned int i = 0; i < level; i++) {
            result += DEFAULT_SHIFT;
        }
        return result;
    }
};

#endif // UNIT_H
