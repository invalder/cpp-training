#ifndef TEST_H
# define TEST_H

class contact
{
private:
	/* data */
	char	name[100];

public:
	contact();
	~contact();


	int		setname(char *str);
	char	*getname() const;
};

class phonebook
{
private:
	/* data */

public:
	contact	*contacts;
	phonebook();
	~phonebook();
};

#endif
