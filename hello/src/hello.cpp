#include <eosio/src/eosio.hpp>
using namespace eosio;
class [[eosio::contract]] hello : public contract {
    public:
        using contract::contract;

        [[eosio::action]]
        void hi( name user){
            //require_auth( user );
            if ( has_auth( user ) ){
                print("Hello,", user);
            } else {
                print( "No Hello for you! ");
            }
        }
};