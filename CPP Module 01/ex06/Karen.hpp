#ifndef INC_42CPP_MODULES_KAREN_H
#define INC_42CPP_MODULES_KAREN_H

#include <iostream>
#include <string>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void default_msg(void);
public:
	void complain(std::string level);
	void complain_recursive(int i);
};

#endif
