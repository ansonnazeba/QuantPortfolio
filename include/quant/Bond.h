//
// Created by Anson Nazeba on 27/05/2026.
//

#ifndef C_PRACTICE_BOND_H
#define C_PRACTICE_BOND_H

#include "Asset.h"

namespace quant {
    class Bond: public Asset {
    private:
        std::string issuer;
        double faceValue;
        double couponRate;
        double marketPrice;
        int quantity;

    public:
        Bond(const std::string& name, const std::string& issuer, double faceValue, double couponRate, double marketPrice, int quantity);
        const std::string& getIssuer() const;
        double getFaceValue() const;
        double getCouponRate() const;
        double getMarketPrice() const;
        int getQuantity() const;
        double getAnnualCouponPayment() const;

        void setMarketPrice(double newMP);

        double getValue() const override;
        std::string getSummary() const override;
    };
}


#endif //C_PRACTICE_BOND_H
