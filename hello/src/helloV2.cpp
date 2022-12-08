#include <eosio/src/eosio.hpp>
using namespace eosio;
CONTRACT helloV2 : public contract {
    public:
        using contract::contract;

        ACTION hi( name user){
            // require_auth( user );
            // print( "Hello, ", user);
            if ( has_auth( user ) ){
                print("Hello,", user);
            } else {
                print( "No Hello for you! ");
            }
        }
};