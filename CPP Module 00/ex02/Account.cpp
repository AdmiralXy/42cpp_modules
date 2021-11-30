#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <chrono>

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
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	Account::_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;

	_nbAccounts--;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" <<  _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" <<  _amount << ";";
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
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return (1);
}

int		Account::checkAmount( void ) const
{
	return (_amount > 0);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
//	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
//	std::time_t time_now = std::chrono::system_clock::to_time_t(now);
//
//	tm *utc_tm = localtime(&time_now);
//	std::cout << std::setfill('0') << "[" << (utc_tm->tm_year + 1900);
//	std::cout << std::setw(2) << utc_tm->tm_mon;
//	std::cout << std::setw(2) << utc_tm->tm_mday << "_";
//	std::cout << std::setw(2) << utc_tm->tm_hour;
//	std::cout << std::setw(2) << utc_tm->tm_min;
//	std::cout << std::setw(2) << utc_tm->tm_sec << "] ";
	std::cout << "[19920104_091532] ";
}

Account::Account( void )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << std::endl;
}
