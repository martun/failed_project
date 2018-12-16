#pragma once

#include <string>
#include "node/include/types.h"

// Some class used to access the database of wallet balances.
class DatabaseProvider {
public:
    virtual bool get_account_balance(const std::string& wallet_id, int64_t& balance_out) const = 0;
    virtual void set_account_balance(const std::string& wallet_id, int64_t new_balance) const = 0;

    virtual bool has_transaction(const std::string& hash) const = 0;
    virtual bool load_transaction(const std::string& hash, Transaction& txn_out) const = 0;
    virtual bool save_transaction(const std::string& hash, const Transaction& txn) const = 0;
    
};
