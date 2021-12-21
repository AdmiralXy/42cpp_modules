#include "Account.hpp"
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";" << "total:" << Account::_totalAmount << ";" << "deposits:" << Account::_totalNbDeposits << ";" << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

Account::Account(void)
{
	_accountIndex = _nbAccounts++;
	_amount = _nbDeposits = _nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:0;" << "created" << std::endl;
}

Account::Account(int initial_deposit)
{
	Account::_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = _nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed";
	std::cout << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" <<  _amount << ";" << "deposit:" << deposit << ";";
	_amount += deposit;
	_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" <<  _amount << ";";
	if (_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (0);
	}
	else
	{
		_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";" << "amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
		return (1);
	}
}

int		Account::checkAmount(void) const
{
	return _amount > 0;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
//	char buf[80];
//	time_t time_now = time(0);
//	strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", localtime(&time_now));
//	std::cout << buf;
}
