#ifndef OPERAND_H
#define OPERAND_H

class Operand  {
public:
	virtual ~Operand() {}

	virtual unsigned int getExtensionWordCount() const = 0;	
	virtual void setExtensionWordCount(const unsigned int count) = 0;

	virtual unsigned long getExtensionWords() const = 0;
	virtual void setExtensionWords(unsigned long extensionWords) = 0;

	virtual unsigned int getRegisterField() const = 0;
	virtual unsigned int getModeField() const = 0;

private:
	virtual void setRegisterField() const = 0;
};

#endif