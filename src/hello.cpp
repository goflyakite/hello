#include <eosio/eosio.hpp> 							    // This header has a few smart contract classes to use.

using namespace eosio; 									    // Creates a namespace

CONTRACT hello : public contract {
  public:
    using contract::contract;

    ACTION hi( name user ) {
        require_auth( user );
        print( "Hello there, ", user, " value is ", user.value);
    };

  private:
};
