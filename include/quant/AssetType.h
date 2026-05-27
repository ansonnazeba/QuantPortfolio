//
// Created by Anson Nazeba on 27/05/2026.
//

#ifndef C_PRACTICE_ASSETTYPE_H
#define C_PRACTICE_ASSETTYPE_H

#include <string>

namespace quant {
    enum class AssetType {
        Bond,
        Cash,
        Stock
    };

    std::string toString(AssetType type);
}


#endif //C_PRACTICE_ASSETTYPE_H
