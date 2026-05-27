//
// Created by Anson Nazeba on 27/05/2026.
//

#include "../include/quant/Bond.h"

quant::Bond::Bond(const std::string &name, const std::string &issuer, double faceValue, double couponRate,
    double marketPrice, int quantity):
        Asset(name, AssetType::Bond), issuer(issuer), faceValue(faceValue), couponRate(couponRate),
            marketPrice(marketPrice), quantity(quantity) {}

const std::string & quant::Bond::getIssuer() const {
    return issuer;
}

double quant::Bond::getFaceValue() const {
    return faceValue;
}

double quant::Bond::getCouponRate() const {
    return couponRate;
}

double quant::Bond::getMarketPrice() const {
    return marketPrice;
}

int quant::Bond::getQuantity() const {
    return quantity;
}

double quant::Bond::getAnnualCouponPayment() const {
    return faceValue * couponRate * quantity;

}

void quant::Bond::setMarketPrice(double newMP) {
    marketPrice = newMP;
}

double quant::Bond::getValue() const {
    return marketPrice * quantity;
}

std::string quant::Bond::getSummary() const {
    std::string stOut = "Name: " + getName() + '\n';
    stOut += "Issuer: " + issuer + '\n';
    stOut += "Face Value: " + std::to_string(faceValue) + '\n';
    stOut += "Coupon Rate: " + std::to_string(couponRate) + '\n';
    stOut += "Market Price: " + std::to_string(marketPrice) + '\n';
    stOut += "Quantity: " + std::to_string(quantity) + '\n';
    stOut += "Annual Coupon Payment: " + std::to_string(getAnnualCouponPayment()) + '\n';
    stOut += "Value: " + std::to_string(getValue()) + '\n';

    return stOut;


}
