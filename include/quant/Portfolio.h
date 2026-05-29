//
// Created by Anson Nazeba on 27/05/2026.
//

#ifndef C_PRACTICE_PORTFOLIO_H
#define C_PRACTICE_PORTFOLIO_H

#include <vector>
#include <string>
#include <memory>
#include <cstddef>
#include "Asset.h"

namespace quant {
    class Portfolio {
    private:
        std::vector<std::unique_ptr<Asset>> assets;

    public:
        void addAsset(std::unique_ptr<Asset> asset);
        double getTotalValue() const;
        std::size_t getAssetCount() const;
        std::string getSummary() const;

    };
}

#endif //C_PRACTICE_PORTFOLIO_H
