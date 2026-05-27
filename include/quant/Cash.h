//
// Created by Anson Nazeba on 27/05/2026.
//

#ifndef C_PRACTICE_CASH_H
#define C_PRACTICE_CASH_H
#include <string>
#include "Asset.h"


namespace quant {
    class Cash: public Asset {
    private:
        std::string  currency;
        double amount;
        double exchangeRateToUSD;

    public:
        Cash(const std::string& name, const std::string& currency, double amount, double exchangerateToUSD);
        const std::string& getCurrency() const;
        double getAmount() const;
        void setAmount(double newAmount);
        double getExchangeRate() const;

        double getValue() const override;
        std::string getSummary() const override;
    };
}


#endif //C_PRACTICE_CASH_H
