//
// Created by Anson Nazeba on 27/05/2026.
//

#include "../include/quant/Cash.h"

quant::Cash::Cash
    (const std::string &name, const std::string &currency, double amount, double exchangeRateToUSD):
        Asset(name, AssetType::Cash), currency(currency), amount(amount), exchangeRateToUSD(exchangeRateToUSD){};

const std::string & quant::Cash::getCurrency() const {
    return currency;
}

double quant::Cash::getAmount() const {
    return amount;
}

void quant::Cash::setAmount(double newAmount) {
    amount = newAmount;
}

double quant::Cash::getExchangeRate() const {
    return exchangeRateToUSD;
}

double quant::Cash::getValue() const {
    return exchangeRateToUSD * amount;
}

std::string quant::Cash::getSummary() const {
    std::string stOut = "Name: " + getName() + '\n';
    stOut += "Currency: " + currency + '\n';
    stOut += "Amount: " + std::to_string(amount) + '\n';
    stOut += "Value: " + std::to_string(getValue()) + '\n';

    return stOut;
}
