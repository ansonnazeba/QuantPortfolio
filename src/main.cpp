//
// Created by Anson Nazeba on 27/05/2026.
//

#include <iostream>
#include <memory>

#include "quant/Bond.h"
#include "quant/Cash.h"
#include "quant/Portfolio.h"
#include "quant/Stock.h"

int main() {
    quant::Portfolio portfolio;

    portfolio.addAsset(std::make_unique<quant::Stock>(
        "Apple Equity Position",
        "AAPL",
        10.0,
        190.50
    ));

    portfolio.addAsset(std::make_unique<quant::Cash>(
        "USD Cash Reserve",
        "USD",
        2500.0,
        1.0
    ));

    portfolio.addAsset(std::make_unique<quant::Bond>(
        "US Treasury Note Position",
        "US Treasury",
        1000.0,
        0.045,
        980.0,
        3
    ));

    std::cout << portfolio.getSummary() << std::endl;

    return 0;
}
