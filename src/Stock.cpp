//
// Created by Anson Nazeba on 27/05/2026.
//

#include "../include/quant/Stock.h"

quant::Stock::Stock(const std::string& name, const std::string &ticker, double shares, double pricePerShare):
Asset(name, AssetType::Stock), ticker(ticker), shares(shares), pricePerShare(pricePerShare) {};

const std::string & quant::Stock::getTicker() const {
    return ticker;
}

double quant::Stock::getShares() const {
    return shares;
}

double quant::Stock::getPricePerShare() const {
    return pricePerShare;
}

void quant::Stock::setPricePerShare(double pricePerShare) {
    this->pricePerShare = pricePerShare;
}

double quant::Stock::getValue() const {
    return pricePerShare * shares;
}

std::string quant::Stock::getSummary() const {
    std::string stOut = "Name: " + getName() + '\n';
    stOut += "Ticker: " + ticker + '\n';
    stOut += "Shares: " + std::to_string(shares) + '\n';
    stOut += "Price per share: " + std::to_string(pricePerShare) + '\n';
    stOut += "Value: " + std::to_string(getValue()) + '\n';
    return stOut;

}
