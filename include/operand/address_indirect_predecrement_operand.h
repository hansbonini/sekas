#ifndef SEKAS_ADDRESS_INDIRECT_PREDECREMENT_OPERAND_H
#define SEKAS_ADDRESS_INDIRECT_PREDECREMENT_OPERAND_H

#include "operand.h"

class AddressIndirectPredecrementOperand : public Operand {
public:
    explicit AddressIndirectPredecrementOperand(const uint8_t register_number);
    virtual ~AddressIndirectPredecrementOperand();

    virtual uint8_t get_mode_field() const;
    virtual uint8_t get_register_field() const;

    virtual uint8_t get_extension_word_count() const;
    virtual uint16_t get_extension_word(const uint8_t idx) const;

private:
    const uint8_t register_number;
};

#endif
