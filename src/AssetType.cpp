//
// Created by Anson Nazeba on 27/05/2026.
//

#include "quant/AssetType.h"

namespace quant {
    std::string toString(AssetType type) {
        switch (type) {
            case AssetType::Stock:
                return "Stock";
            case AssetType::Bond:
                return "Bond";
            case AssetType::Cash:
                return "Cash";
            default:
                return "Unknown";
        }
    }
}
