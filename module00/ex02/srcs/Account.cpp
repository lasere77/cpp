#include "Account.hpp"

#include <iostream>
#include <ctime>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

static void	display_time()
{
	char	buffer[32];
	time_t	t;

	time(&t);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localtime(&t));
    std::cout << "[" << buffer << "] ";
}

Account::Account(int amount)
{
	display_time();
	_accountIndex = _nbAccounts;
	std::cout << "index:" << _accountIndex << ";amount:" << amount << ";created" << std::endl;
	_amount = amount;
	_nbAccounts++;
	_totalAmount += amount;
}

Account::~Account(void)
{
	display_time();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	display_time();
	std::cout << "accounts:" << _nbAccounts << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus() const
{
	display_time();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int i)
{
	display_time();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << i << ";amount:" << _amount + i << ";nb_deposits:" << ++_nbDeposits << std::endl;
	_amount += i;
	_totalNbDeposits++;
	_totalAmount += i;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	display_time();
	if (_amount - withdrawal < 0)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}
