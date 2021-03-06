#ifndef SEKAS_INDEX_REGISTER_H
#define SEKAS_INDEX_REGISTER_H

#include <cstdint>
#include <memory>

class IndexRegister {
public:
    enum class Type : uint8_t {
        DATA,
        ADDRESS
    };

    enum class Size : uint8_t {
        WORD,
        LONG_WORD
    };

    enum class Scale : uint8_t {
        ONE,
        TWO,
        FOUR,
        EIGHT
    };

    explicit IndexRegister(const uint8_t register_number, Type type, Size size, Scale scale);
    virtual ~IndexRegister();

    uint8_t get_register_number() const;

    Type get_type() const;
    Size get_size() const;
    Scale get_scale() const;

    virtual uint8_t encode() const;

protected:
    IndexRegister();

private:
    const uint8_t register_number;
    const Type type;
    const Size size;
    const Scale scale;
};

#endif
