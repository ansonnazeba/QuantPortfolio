//
// Created by Anson Nazeba on 27/05/2026.
//

#include "../include/quant/Portfolio.h"
#include <utility>


void quant::Portfolio::addAsset(std::unique_ptr<Asset> asset) {
    assets.push_back(std::move(asset));
}

double quant::Portfolio::getTotalValue() const {
    double totalValue = 0;

    for (const auto& asset: assets) {
        totalValue += asset->getValue();
    }

    return totalValue;
}

std::size_t quant::Portfolio::getAssetCount() const {
    return assets.size();
}

std::string quant::Portfolio::getSummary() const {
    std::string stOut = "Portfolio Summary\n";
    stOut += "Asset count: " + std::to_string(getAssetCount()) + '\n';
    stOut += "Total value: " + std::to_string(getTotalValue()) + '\n';

    for (const auto& asset: assets) {
        stOut += asset->getSummary();
    }

    return stOut;
}
