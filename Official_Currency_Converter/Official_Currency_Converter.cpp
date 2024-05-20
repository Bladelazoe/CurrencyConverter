#include <iostream>
#include <string>
#include <map>
#include <stdexcept>


class CurrencyConverter
{
private:

	std::map<std::string, double> exchangeRate;

public:
	CurrencyConverter()
	{

	}

	CurrencyConverter(std::map<std::string, double> rates) : exchangeRate(rates)
	{

	}

	double convert(double amount, const std::string& fromCurrency, const std::string& toCurrency)
	{
		if (exchangeRate.find(fromCurrency) == exchangeRate.end() || exchangeRate.find(toCurrency) == exchangeRate.end())
		{
			throw std::invalid_argument("Currency not found");
		}

		double rate = exchangeRate[fromCurrency] / exchangeRate[toCurrency];
		double convertedAmount = rate * amount;
		return convertedAmount;
	}
};

int main()
{




	return 0;
}



// 5/10 - 2 hours
// 5/11 - 1 hour
// 5/12 - 42 mins
// 5/13 - 1 hour - feels like I'm never gonna figure this shit out
// 5/14 - 1 hour
// 5/15 - 1 hour
// 5/16 - 1 hour
// 5/17 - 1 hour
// 
// 5/20
// Work thru the boredom, the resistance
// What if it takes 25 sessions? We're 5 sessions in