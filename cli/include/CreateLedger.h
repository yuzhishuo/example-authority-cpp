/*
 * @Author: Leo
 * @Date: 2022-07-17 14:09:42
 * @LastEditors: Leo
 * @LastEditTime: 2022-07-21 08:06:21
 */
//
// Created by yuzhi on 6/17/22.
//

#ifndef LEDGERDB_CREATELEDGER_H
#define LEDGERDB_CREATELEDGER_H


#include <spdlog/spdlog.h>
#include <interface/IHelper.h>
#include <parser/IGrammarCommand.h>

namespace yuzhi::grammar::cli {

  class CreateLedger : public IGrammarCommand, public yuzhi::cli::IHelper{

public:
    std::optional <common::Error> operator()(utility::VaStack& vaStack)  override
    {
      auto a0 = vaStack.pop<int>();
      auto a1 = vaStack.pop<const char *>();
      SPDLOG_INFO("type: create_ledger, args is {}, {}", a0, a1);

      return std::nullopt;
    }

    std::pair<std::string, std::string> explain() const override  {

      return {
        "create ledger",
R"(
  create ledger %{ledger_name};
)"
      };
    }

    GrammarType GetUnique()  const override {
      return GrammarType::CREATE_LEDGER;
    }
  };
} // ns yuzhi::grammar

#endif //LEDGERDB_CREATELEDGER_H
