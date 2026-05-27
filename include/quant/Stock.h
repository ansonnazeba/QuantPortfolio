//
// Created by Anson Nazeba on 27/05/2026.
//

#ifndef C_PRACTICE_STOCK_H
#define C_PRACTICE_STOCK_H

#include "Asset.h"

namespace quant {
    class Stock: public Asset {
    private:
        std::string ticker;
        double shares;
        double pricePerShare;

    public:
        Stock(const std::string& name, const std::string& ticker, double shares, double pricePerShare);
        const std::string& getTicker() const;
        double getShares() const;
        double getPricePerShare() const;
        void setPricePerShare(double pricePerShare);

        double getValue() const override;
        std::string getSummary() const override;
    };
}


#endif //C_PRACTICE_STOCK_H
