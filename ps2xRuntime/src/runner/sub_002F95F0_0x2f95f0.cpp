#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F95F0
// Address: 0x2f95f0 - 0x2fc080
void sub_002F95F0_0x2f95f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F95F0_0x2f95f0");
#endif

    switch (ctx->pc) {
        case 0x2f95f0u: goto label_2f95f0;
        case 0x2f95f4u: goto label_2f95f4;
        case 0x2f95f8u: goto label_2f95f8;
        case 0x2f95fcu: goto label_2f95fc;
        case 0x2f9600u: goto label_2f9600;
        case 0x2f9604u: goto label_2f9604;
        case 0x2f9608u: goto label_2f9608;
        case 0x2f960cu: goto label_2f960c;
        case 0x2f9610u: goto label_2f9610;
        case 0x2f9614u: goto label_2f9614;
        case 0x2f9618u: goto label_2f9618;
        case 0x2f961cu: goto label_2f961c;
        case 0x2f9620u: goto label_2f9620;
        case 0x2f9624u: goto label_2f9624;
        case 0x2f9628u: goto label_2f9628;
        case 0x2f962cu: goto label_2f962c;
        case 0x2f9630u: goto label_2f9630;
        case 0x2f9634u: goto label_2f9634;
        case 0x2f9638u: goto label_2f9638;
        case 0x2f963cu: goto label_2f963c;
        case 0x2f9640u: goto label_2f9640;
        case 0x2f9644u: goto label_2f9644;
        case 0x2f9648u: goto label_2f9648;
        case 0x2f964cu: goto label_2f964c;
        case 0x2f9650u: goto label_2f9650;
        case 0x2f9654u: goto label_2f9654;
        case 0x2f9658u: goto label_2f9658;
        case 0x2f965cu: goto label_2f965c;
        case 0x2f9660u: goto label_2f9660;
        case 0x2f9664u: goto label_2f9664;
        case 0x2f9668u: goto label_2f9668;
        case 0x2f966cu: goto label_2f966c;
        case 0x2f9670u: goto label_2f9670;
        case 0x2f9674u: goto label_2f9674;
        case 0x2f9678u: goto label_2f9678;
        case 0x2f967cu: goto label_2f967c;
        case 0x2f9680u: goto label_2f9680;
        case 0x2f9684u: goto label_2f9684;
        case 0x2f9688u: goto label_2f9688;
        case 0x2f968cu: goto label_2f968c;
        case 0x2f9690u: goto label_2f9690;
        case 0x2f9694u: goto label_2f9694;
        case 0x2f9698u: goto label_2f9698;
        case 0x2f969cu: goto label_2f969c;
        case 0x2f96a0u: goto label_2f96a0;
        case 0x2f96a4u: goto label_2f96a4;
        case 0x2f96a8u: goto label_2f96a8;
        case 0x2f96acu: goto label_2f96ac;
        case 0x2f96b0u: goto label_2f96b0;
        case 0x2f96b4u: goto label_2f96b4;
        case 0x2f96b8u: goto label_2f96b8;
        case 0x2f96bcu: goto label_2f96bc;
        case 0x2f96c0u: goto label_2f96c0;
        case 0x2f96c4u: goto label_2f96c4;
        case 0x2f96c8u: goto label_2f96c8;
        case 0x2f96ccu: goto label_2f96cc;
        case 0x2f96d0u: goto label_2f96d0;
        case 0x2f96d4u: goto label_2f96d4;
        case 0x2f96d8u: goto label_2f96d8;
        case 0x2f96dcu: goto label_2f96dc;
        case 0x2f96e0u: goto label_2f96e0;
        case 0x2f96e4u: goto label_2f96e4;
        case 0x2f96e8u: goto label_2f96e8;
        case 0x2f96ecu: goto label_2f96ec;
        case 0x2f96f0u: goto label_2f96f0;
        case 0x2f96f4u: goto label_2f96f4;
        case 0x2f96f8u: goto label_2f96f8;
        case 0x2f96fcu: goto label_2f96fc;
        case 0x2f9700u: goto label_2f9700;
        case 0x2f9704u: goto label_2f9704;
        case 0x2f9708u: goto label_2f9708;
        case 0x2f970cu: goto label_2f970c;
        case 0x2f9710u: goto label_2f9710;
        case 0x2f9714u: goto label_2f9714;
        case 0x2f9718u: goto label_2f9718;
        case 0x2f971cu: goto label_2f971c;
        case 0x2f9720u: goto label_2f9720;
        case 0x2f9724u: goto label_2f9724;
        case 0x2f9728u: goto label_2f9728;
        case 0x2f972cu: goto label_2f972c;
        case 0x2f9730u: goto label_2f9730;
        case 0x2f9734u: goto label_2f9734;
        case 0x2f9738u: goto label_2f9738;
        case 0x2f973cu: goto label_2f973c;
        case 0x2f9740u: goto label_2f9740;
        case 0x2f9744u: goto label_2f9744;
        case 0x2f9748u: goto label_2f9748;
        case 0x2f974cu: goto label_2f974c;
        case 0x2f9750u: goto label_2f9750;
        case 0x2f9754u: goto label_2f9754;
        case 0x2f9758u: goto label_2f9758;
        case 0x2f975cu: goto label_2f975c;
        case 0x2f9760u: goto label_2f9760;
        case 0x2f9764u: goto label_2f9764;
        case 0x2f9768u: goto label_2f9768;
        case 0x2f976cu: goto label_2f976c;
        case 0x2f9770u: goto label_2f9770;
        case 0x2f9774u: goto label_2f9774;
        case 0x2f9778u: goto label_2f9778;
        case 0x2f977cu: goto label_2f977c;
        case 0x2f9780u: goto label_2f9780;
        case 0x2f9784u: goto label_2f9784;
        case 0x2f9788u: goto label_2f9788;
        case 0x2f978cu: goto label_2f978c;
        case 0x2f9790u: goto label_2f9790;
        case 0x2f9794u: goto label_2f9794;
        case 0x2f9798u: goto label_2f9798;
        case 0x2f979cu: goto label_2f979c;
        case 0x2f97a0u: goto label_2f97a0;
        case 0x2f97a4u: goto label_2f97a4;
        case 0x2f97a8u: goto label_2f97a8;
        case 0x2f97acu: goto label_2f97ac;
        case 0x2f97b0u: goto label_2f97b0;
        case 0x2f97b4u: goto label_2f97b4;
        case 0x2f97b8u: goto label_2f97b8;
        case 0x2f97bcu: goto label_2f97bc;
        case 0x2f97c0u: goto label_2f97c0;
        case 0x2f97c4u: goto label_2f97c4;
        case 0x2f97c8u: goto label_2f97c8;
        case 0x2f97ccu: goto label_2f97cc;
        case 0x2f97d0u: goto label_2f97d0;
        case 0x2f97d4u: goto label_2f97d4;
        case 0x2f97d8u: goto label_2f97d8;
        case 0x2f97dcu: goto label_2f97dc;
        case 0x2f97e0u: goto label_2f97e0;
        case 0x2f97e4u: goto label_2f97e4;
        case 0x2f97e8u: goto label_2f97e8;
        case 0x2f97ecu: goto label_2f97ec;
        case 0x2f97f0u: goto label_2f97f0;
        case 0x2f97f4u: goto label_2f97f4;
        case 0x2f97f8u: goto label_2f97f8;
        case 0x2f97fcu: goto label_2f97fc;
        case 0x2f9800u: goto label_2f9800;
        case 0x2f9804u: goto label_2f9804;
        case 0x2f9808u: goto label_2f9808;
        case 0x2f980cu: goto label_2f980c;
        case 0x2f9810u: goto label_2f9810;
        case 0x2f9814u: goto label_2f9814;
        case 0x2f9818u: goto label_2f9818;
        case 0x2f981cu: goto label_2f981c;
        case 0x2f9820u: goto label_2f9820;
        case 0x2f9824u: goto label_2f9824;
        case 0x2f9828u: goto label_2f9828;
        case 0x2f982cu: goto label_2f982c;
        case 0x2f9830u: goto label_2f9830;
        case 0x2f9834u: goto label_2f9834;
        case 0x2f9838u: goto label_2f9838;
        case 0x2f983cu: goto label_2f983c;
        case 0x2f9840u: goto label_2f9840;
        case 0x2f9844u: goto label_2f9844;
        case 0x2f9848u: goto label_2f9848;
        case 0x2f984cu: goto label_2f984c;
        case 0x2f9850u: goto label_2f9850;
        case 0x2f9854u: goto label_2f9854;
        case 0x2f9858u: goto label_2f9858;
        case 0x2f985cu: goto label_2f985c;
        case 0x2f9860u: goto label_2f9860;
        case 0x2f9864u: goto label_2f9864;
        case 0x2f9868u: goto label_2f9868;
        case 0x2f986cu: goto label_2f986c;
        case 0x2f9870u: goto label_2f9870;
        case 0x2f9874u: goto label_2f9874;
        case 0x2f9878u: goto label_2f9878;
        case 0x2f987cu: goto label_2f987c;
        case 0x2f9880u: goto label_2f9880;
        case 0x2f9884u: goto label_2f9884;
        case 0x2f9888u: goto label_2f9888;
        case 0x2f988cu: goto label_2f988c;
        case 0x2f9890u: goto label_2f9890;
        case 0x2f9894u: goto label_2f9894;
        case 0x2f9898u: goto label_2f9898;
        case 0x2f989cu: goto label_2f989c;
        case 0x2f98a0u: goto label_2f98a0;
        case 0x2f98a4u: goto label_2f98a4;
        case 0x2f98a8u: goto label_2f98a8;
        case 0x2f98acu: goto label_2f98ac;
        case 0x2f98b0u: goto label_2f98b0;
        case 0x2f98b4u: goto label_2f98b4;
        case 0x2f98b8u: goto label_2f98b8;
        case 0x2f98bcu: goto label_2f98bc;
        case 0x2f98c0u: goto label_2f98c0;
        case 0x2f98c4u: goto label_2f98c4;
        case 0x2f98c8u: goto label_2f98c8;
        case 0x2f98ccu: goto label_2f98cc;
        case 0x2f98d0u: goto label_2f98d0;
        case 0x2f98d4u: goto label_2f98d4;
        case 0x2f98d8u: goto label_2f98d8;
        case 0x2f98dcu: goto label_2f98dc;
        case 0x2f98e0u: goto label_2f98e0;
        case 0x2f98e4u: goto label_2f98e4;
        case 0x2f98e8u: goto label_2f98e8;
        case 0x2f98ecu: goto label_2f98ec;
        case 0x2f98f0u: goto label_2f98f0;
        case 0x2f98f4u: goto label_2f98f4;
        case 0x2f98f8u: goto label_2f98f8;
        case 0x2f98fcu: goto label_2f98fc;
        case 0x2f9900u: goto label_2f9900;
        case 0x2f9904u: goto label_2f9904;
        case 0x2f9908u: goto label_2f9908;
        case 0x2f990cu: goto label_2f990c;
        case 0x2f9910u: goto label_2f9910;
        case 0x2f9914u: goto label_2f9914;
        case 0x2f9918u: goto label_2f9918;
        case 0x2f991cu: goto label_2f991c;
        case 0x2f9920u: goto label_2f9920;
        case 0x2f9924u: goto label_2f9924;
        case 0x2f9928u: goto label_2f9928;
        case 0x2f992cu: goto label_2f992c;
        case 0x2f9930u: goto label_2f9930;
        case 0x2f9934u: goto label_2f9934;
        case 0x2f9938u: goto label_2f9938;
        case 0x2f993cu: goto label_2f993c;
        case 0x2f9940u: goto label_2f9940;
        case 0x2f9944u: goto label_2f9944;
        case 0x2f9948u: goto label_2f9948;
        case 0x2f994cu: goto label_2f994c;
        case 0x2f9950u: goto label_2f9950;
        case 0x2f9954u: goto label_2f9954;
        case 0x2f9958u: goto label_2f9958;
        case 0x2f995cu: goto label_2f995c;
        case 0x2f9960u: goto label_2f9960;
        case 0x2f9964u: goto label_2f9964;
        case 0x2f9968u: goto label_2f9968;
        case 0x2f996cu: goto label_2f996c;
        case 0x2f9970u: goto label_2f9970;
        case 0x2f9974u: goto label_2f9974;
        case 0x2f9978u: goto label_2f9978;
        case 0x2f997cu: goto label_2f997c;
        case 0x2f9980u: goto label_2f9980;
        case 0x2f9984u: goto label_2f9984;
        case 0x2f9988u: goto label_2f9988;
        case 0x2f998cu: goto label_2f998c;
        case 0x2f9990u: goto label_2f9990;
        case 0x2f9994u: goto label_2f9994;
        case 0x2f9998u: goto label_2f9998;
        case 0x2f999cu: goto label_2f999c;
        case 0x2f99a0u: goto label_2f99a0;
        case 0x2f99a4u: goto label_2f99a4;
        case 0x2f99a8u: goto label_2f99a8;
        case 0x2f99acu: goto label_2f99ac;
        case 0x2f99b0u: goto label_2f99b0;
        case 0x2f99b4u: goto label_2f99b4;
        case 0x2f99b8u: goto label_2f99b8;
        case 0x2f99bcu: goto label_2f99bc;
        case 0x2f99c0u: goto label_2f99c0;
        case 0x2f99c4u: goto label_2f99c4;
        case 0x2f99c8u: goto label_2f99c8;
        case 0x2f99ccu: goto label_2f99cc;
        case 0x2f99d0u: goto label_2f99d0;
        case 0x2f99d4u: goto label_2f99d4;
        case 0x2f99d8u: goto label_2f99d8;
        case 0x2f99dcu: goto label_2f99dc;
        case 0x2f99e0u: goto label_2f99e0;
        case 0x2f99e4u: goto label_2f99e4;
        case 0x2f99e8u: goto label_2f99e8;
        case 0x2f99ecu: goto label_2f99ec;
        case 0x2f99f0u: goto label_2f99f0;
        case 0x2f99f4u: goto label_2f99f4;
        case 0x2f99f8u: goto label_2f99f8;
        case 0x2f99fcu: goto label_2f99fc;
        case 0x2f9a00u: goto label_2f9a00;
        case 0x2f9a04u: goto label_2f9a04;
        case 0x2f9a08u: goto label_2f9a08;
        case 0x2f9a0cu: goto label_2f9a0c;
        case 0x2f9a10u: goto label_2f9a10;
        case 0x2f9a14u: goto label_2f9a14;
        case 0x2f9a18u: goto label_2f9a18;
        case 0x2f9a1cu: goto label_2f9a1c;
        case 0x2f9a20u: goto label_2f9a20;
        case 0x2f9a24u: goto label_2f9a24;
        case 0x2f9a28u: goto label_2f9a28;
        case 0x2f9a2cu: goto label_2f9a2c;
        case 0x2f9a30u: goto label_2f9a30;
        case 0x2f9a34u: goto label_2f9a34;
        case 0x2f9a38u: goto label_2f9a38;
        case 0x2f9a3cu: goto label_2f9a3c;
        case 0x2f9a40u: goto label_2f9a40;
        case 0x2f9a44u: goto label_2f9a44;
        case 0x2f9a48u: goto label_2f9a48;
        case 0x2f9a4cu: goto label_2f9a4c;
        case 0x2f9a50u: goto label_2f9a50;
        case 0x2f9a54u: goto label_2f9a54;
        case 0x2f9a58u: goto label_2f9a58;
        case 0x2f9a5cu: goto label_2f9a5c;
        case 0x2f9a60u: goto label_2f9a60;
        case 0x2f9a64u: goto label_2f9a64;
        case 0x2f9a68u: goto label_2f9a68;
        case 0x2f9a6cu: goto label_2f9a6c;
        case 0x2f9a70u: goto label_2f9a70;
        case 0x2f9a74u: goto label_2f9a74;
        case 0x2f9a78u: goto label_2f9a78;
        case 0x2f9a7cu: goto label_2f9a7c;
        case 0x2f9a80u: goto label_2f9a80;
        case 0x2f9a84u: goto label_2f9a84;
        case 0x2f9a88u: goto label_2f9a88;
        case 0x2f9a8cu: goto label_2f9a8c;
        case 0x2f9a90u: goto label_2f9a90;
        case 0x2f9a94u: goto label_2f9a94;
        case 0x2f9a98u: goto label_2f9a98;
        case 0x2f9a9cu: goto label_2f9a9c;
        case 0x2f9aa0u: goto label_2f9aa0;
        case 0x2f9aa4u: goto label_2f9aa4;
        case 0x2f9aa8u: goto label_2f9aa8;
        case 0x2f9aacu: goto label_2f9aac;
        case 0x2f9ab0u: goto label_2f9ab0;
        case 0x2f9ab4u: goto label_2f9ab4;
        case 0x2f9ab8u: goto label_2f9ab8;
        case 0x2f9abcu: goto label_2f9abc;
        case 0x2f9ac0u: goto label_2f9ac0;
        case 0x2f9ac4u: goto label_2f9ac4;
        case 0x2f9ac8u: goto label_2f9ac8;
        case 0x2f9accu: goto label_2f9acc;
        case 0x2f9ad0u: goto label_2f9ad0;
        case 0x2f9ad4u: goto label_2f9ad4;
        case 0x2f9ad8u: goto label_2f9ad8;
        case 0x2f9adcu: goto label_2f9adc;
        case 0x2f9ae0u: goto label_2f9ae0;
        case 0x2f9ae4u: goto label_2f9ae4;
        case 0x2f9ae8u: goto label_2f9ae8;
        case 0x2f9aecu: goto label_2f9aec;
        case 0x2f9af0u: goto label_2f9af0;
        case 0x2f9af4u: goto label_2f9af4;
        case 0x2f9af8u: goto label_2f9af8;
        case 0x2f9afcu: goto label_2f9afc;
        case 0x2f9b00u: goto label_2f9b00;
        case 0x2f9b04u: goto label_2f9b04;
        case 0x2f9b08u: goto label_2f9b08;
        case 0x2f9b0cu: goto label_2f9b0c;
        case 0x2f9b10u: goto label_2f9b10;
        case 0x2f9b14u: goto label_2f9b14;
        case 0x2f9b18u: goto label_2f9b18;
        case 0x2f9b1cu: goto label_2f9b1c;
        case 0x2f9b20u: goto label_2f9b20;
        case 0x2f9b24u: goto label_2f9b24;
        case 0x2f9b28u: goto label_2f9b28;
        case 0x2f9b2cu: goto label_2f9b2c;
        case 0x2f9b30u: goto label_2f9b30;
        case 0x2f9b34u: goto label_2f9b34;
        case 0x2f9b38u: goto label_2f9b38;
        case 0x2f9b3cu: goto label_2f9b3c;
        case 0x2f9b40u: goto label_2f9b40;
        case 0x2f9b44u: goto label_2f9b44;
        case 0x2f9b48u: goto label_2f9b48;
        case 0x2f9b4cu: goto label_2f9b4c;
        case 0x2f9b50u: goto label_2f9b50;
        case 0x2f9b54u: goto label_2f9b54;
        case 0x2f9b58u: goto label_2f9b58;
        case 0x2f9b5cu: goto label_2f9b5c;
        case 0x2f9b60u: goto label_2f9b60;
        case 0x2f9b64u: goto label_2f9b64;
        case 0x2f9b68u: goto label_2f9b68;
        case 0x2f9b6cu: goto label_2f9b6c;
        case 0x2f9b70u: goto label_2f9b70;
        case 0x2f9b74u: goto label_2f9b74;
        case 0x2f9b78u: goto label_2f9b78;
        case 0x2f9b7cu: goto label_2f9b7c;
        case 0x2f9b80u: goto label_2f9b80;
        case 0x2f9b84u: goto label_2f9b84;
        case 0x2f9b88u: goto label_2f9b88;
        case 0x2f9b8cu: goto label_2f9b8c;
        case 0x2f9b90u: goto label_2f9b90;
        case 0x2f9b94u: goto label_2f9b94;
        case 0x2f9b98u: goto label_2f9b98;
        case 0x2f9b9cu: goto label_2f9b9c;
        case 0x2f9ba0u: goto label_2f9ba0;
        case 0x2f9ba4u: goto label_2f9ba4;
        case 0x2f9ba8u: goto label_2f9ba8;
        case 0x2f9bacu: goto label_2f9bac;
        case 0x2f9bb0u: goto label_2f9bb0;
        case 0x2f9bb4u: goto label_2f9bb4;
        case 0x2f9bb8u: goto label_2f9bb8;
        case 0x2f9bbcu: goto label_2f9bbc;
        case 0x2f9bc0u: goto label_2f9bc0;
        case 0x2f9bc4u: goto label_2f9bc4;
        case 0x2f9bc8u: goto label_2f9bc8;
        case 0x2f9bccu: goto label_2f9bcc;
        case 0x2f9bd0u: goto label_2f9bd0;
        case 0x2f9bd4u: goto label_2f9bd4;
        case 0x2f9bd8u: goto label_2f9bd8;
        case 0x2f9bdcu: goto label_2f9bdc;
        case 0x2f9be0u: goto label_2f9be0;
        case 0x2f9be4u: goto label_2f9be4;
        case 0x2f9be8u: goto label_2f9be8;
        case 0x2f9becu: goto label_2f9bec;
        case 0x2f9bf0u: goto label_2f9bf0;
        case 0x2f9bf4u: goto label_2f9bf4;
        case 0x2f9bf8u: goto label_2f9bf8;
        case 0x2f9bfcu: goto label_2f9bfc;
        case 0x2f9c00u: goto label_2f9c00;
        case 0x2f9c04u: goto label_2f9c04;
        case 0x2f9c08u: goto label_2f9c08;
        case 0x2f9c0cu: goto label_2f9c0c;
        case 0x2f9c10u: goto label_2f9c10;
        case 0x2f9c14u: goto label_2f9c14;
        case 0x2f9c18u: goto label_2f9c18;
        case 0x2f9c1cu: goto label_2f9c1c;
        case 0x2f9c20u: goto label_2f9c20;
        case 0x2f9c24u: goto label_2f9c24;
        case 0x2f9c28u: goto label_2f9c28;
        case 0x2f9c2cu: goto label_2f9c2c;
        case 0x2f9c30u: goto label_2f9c30;
        case 0x2f9c34u: goto label_2f9c34;
        case 0x2f9c38u: goto label_2f9c38;
        case 0x2f9c3cu: goto label_2f9c3c;
        case 0x2f9c40u: goto label_2f9c40;
        case 0x2f9c44u: goto label_2f9c44;
        case 0x2f9c48u: goto label_2f9c48;
        case 0x2f9c4cu: goto label_2f9c4c;
        case 0x2f9c50u: goto label_2f9c50;
        case 0x2f9c54u: goto label_2f9c54;
        case 0x2f9c58u: goto label_2f9c58;
        case 0x2f9c5cu: goto label_2f9c5c;
        case 0x2f9c60u: goto label_2f9c60;
        case 0x2f9c64u: goto label_2f9c64;
        case 0x2f9c68u: goto label_2f9c68;
        case 0x2f9c6cu: goto label_2f9c6c;
        case 0x2f9c70u: goto label_2f9c70;
        case 0x2f9c74u: goto label_2f9c74;
        case 0x2f9c78u: goto label_2f9c78;
        case 0x2f9c7cu: goto label_2f9c7c;
        case 0x2f9c80u: goto label_2f9c80;
        case 0x2f9c84u: goto label_2f9c84;
        case 0x2f9c88u: goto label_2f9c88;
        case 0x2f9c8cu: goto label_2f9c8c;
        case 0x2f9c90u: goto label_2f9c90;
        case 0x2f9c94u: goto label_2f9c94;
        case 0x2f9c98u: goto label_2f9c98;
        case 0x2f9c9cu: goto label_2f9c9c;
        case 0x2f9ca0u: goto label_2f9ca0;
        case 0x2f9ca4u: goto label_2f9ca4;
        case 0x2f9ca8u: goto label_2f9ca8;
        case 0x2f9cacu: goto label_2f9cac;
        case 0x2f9cb0u: goto label_2f9cb0;
        case 0x2f9cb4u: goto label_2f9cb4;
        case 0x2f9cb8u: goto label_2f9cb8;
        case 0x2f9cbcu: goto label_2f9cbc;
        case 0x2f9cc0u: goto label_2f9cc0;
        case 0x2f9cc4u: goto label_2f9cc4;
        case 0x2f9cc8u: goto label_2f9cc8;
        case 0x2f9cccu: goto label_2f9ccc;
        case 0x2f9cd0u: goto label_2f9cd0;
        case 0x2f9cd4u: goto label_2f9cd4;
        case 0x2f9cd8u: goto label_2f9cd8;
        case 0x2f9cdcu: goto label_2f9cdc;
        case 0x2f9ce0u: goto label_2f9ce0;
        case 0x2f9ce4u: goto label_2f9ce4;
        case 0x2f9ce8u: goto label_2f9ce8;
        case 0x2f9cecu: goto label_2f9cec;
        case 0x2f9cf0u: goto label_2f9cf0;
        case 0x2f9cf4u: goto label_2f9cf4;
        case 0x2f9cf8u: goto label_2f9cf8;
        case 0x2f9cfcu: goto label_2f9cfc;
        case 0x2f9d00u: goto label_2f9d00;
        case 0x2f9d04u: goto label_2f9d04;
        case 0x2f9d08u: goto label_2f9d08;
        case 0x2f9d0cu: goto label_2f9d0c;
        case 0x2f9d10u: goto label_2f9d10;
        case 0x2f9d14u: goto label_2f9d14;
        case 0x2f9d18u: goto label_2f9d18;
        case 0x2f9d1cu: goto label_2f9d1c;
        case 0x2f9d20u: goto label_2f9d20;
        case 0x2f9d24u: goto label_2f9d24;
        case 0x2f9d28u: goto label_2f9d28;
        case 0x2f9d2cu: goto label_2f9d2c;
        case 0x2f9d30u: goto label_2f9d30;
        case 0x2f9d34u: goto label_2f9d34;
        case 0x2f9d38u: goto label_2f9d38;
        case 0x2f9d3cu: goto label_2f9d3c;
        case 0x2f9d40u: goto label_2f9d40;
        case 0x2f9d44u: goto label_2f9d44;
        case 0x2f9d48u: goto label_2f9d48;
        case 0x2f9d4cu: goto label_2f9d4c;
        case 0x2f9d50u: goto label_2f9d50;
        case 0x2f9d54u: goto label_2f9d54;
        case 0x2f9d58u: goto label_2f9d58;
        case 0x2f9d5cu: goto label_2f9d5c;
        case 0x2f9d60u: goto label_2f9d60;
        case 0x2f9d64u: goto label_2f9d64;
        case 0x2f9d68u: goto label_2f9d68;
        case 0x2f9d6cu: goto label_2f9d6c;
        case 0x2f9d70u: goto label_2f9d70;
        case 0x2f9d74u: goto label_2f9d74;
        case 0x2f9d78u: goto label_2f9d78;
        case 0x2f9d7cu: goto label_2f9d7c;
        case 0x2f9d80u: goto label_2f9d80;
        case 0x2f9d84u: goto label_2f9d84;
        case 0x2f9d88u: goto label_2f9d88;
        case 0x2f9d8cu: goto label_2f9d8c;
        case 0x2f9d90u: goto label_2f9d90;
        case 0x2f9d94u: goto label_2f9d94;
        case 0x2f9d98u: goto label_2f9d98;
        case 0x2f9d9cu: goto label_2f9d9c;
        case 0x2f9da0u: goto label_2f9da0;
        case 0x2f9da4u: goto label_2f9da4;
        case 0x2f9da8u: goto label_2f9da8;
        case 0x2f9dacu: goto label_2f9dac;
        case 0x2f9db0u: goto label_2f9db0;
        case 0x2f9db4u: goto label_2f9db4;
        case 0x2f9db8u: goto label_2f9db8;
        case 0x2f9dbcu: goto label_2f9dbc;
        case 0x2f9dc0u: goto label_2f9dc0;
        case 0x2f9dc4u: goto label_2f9dc4;
        case 0x2f9dc8u: goto label_2f9dc8;
        case 0x2f9dccu: goto label_2f9dcc;
        case 0x2f9dd0u: goto label_2f9dd0;
        case 0x2f9dd4u: goto label_2f9dd4;
        case 0x2f9dd8u: goto label_2f9dd8;
        case 0x2f9ddcu: goto label_2f9ddc;
        case 0x2f9de0u: goto label_2f9de0;
        case 0x2f9de4u: goto label_2f9de4;
        case 0x2f9de8u: goto label_2f9de8;
        case 0x2f9decu: goto label_2f9dec;
        case 0x2f9df0u: goto label_2f9df0;
        case 0x2f9df4u: goto label_2f9df4;
        case 0x2f9df8u: goto label_2f9df8;
        case 0x2f9dfcu: goto label_2f9dfc;
        case 0x2f9e00u: goto label_2f9e00;
        case 0x2f9e04u: goto label_2f9e04;
        case 0x2f9e08u: goto label_2f9e08;
        case 0x2f9e0cu: goto label_2f9e0c;
        case 0x2f9e10u: goto label_2f9e10;
        case 0x2f9e14u: goto label_2f9e14;
        case 0x2f9e18u: goto label_2f9e18;
        case 0x2f9e1cu: goto label_2f9e1c;
        case 0x2f9e20u: goto label_2f9e20;
        case 0x2f9e24u: goto label_2f9e24;
        case 0x2f9e28u: goto label_2f9e28;
        case 0x2f9e2cu: goto label_2f9e2c;
        case 0x2f9e30u: goto label_2f9e30;
        case 0x2f9e34u: goto label_2f9e34;
        case 0x2f9e38u: goto label_2f9e38;
        case 0x2f9e3cu: goto label_2f9e3c;
        case 0x2f9e40u: goto label_2f9e40;
        case 0x2f9e44u: goto label_2f9e44;
        case 0x2f9e48u: goto label_2f9e48;
        case 0x2f9e4cu: goto label_2f9e4c;
        case 0x2f9e50u: goto label_2f9e50;
        case 0x2f9e54u: goto label_2f9e54;
        case 0x2f9e58u: goto label_2f9e58;
        case 0x2f9e5cu: goto label_2f9e5c;
        case 0x2f9e60u: goto label_2f9e60;
        case 0x2f9e64u: goto label_2f9e64;
        case 0x2f9e68u: goto label_2f9e68;
        case 0x2f9e6cu: goto label_2f9e6c;
        case 0x2f9e70u: goto label_2f9e70;
        case 0x2f9e74u: goto label_2f9e74;
        case 0x2f9e78u: goto label_2f9e78;
        case 0x2f9e7cu: goto label_2f9e7c;
        case 0x2f9e80u: goto label_2f9e80;
        case 0x2f9e84u: goto label_2f9e84;
        case 0x2f9e88u: goto label_2f9e88;
        case 0x2f9e8cu: goto label_2f9e8c;
        case 0x2f9e90u: goto label_2f9e90;
        case 0x2f9e94u: goto label_2f9e94;
        case 0x2f9e98u: goto label_2f9e98;
        case 0x2f9e9cu: goto label_2f9e9c;
        case 0x2f9ea0u: goto label_2f9ea0;
        case 0x2f9ea4u: goto label_2f9ea4;
        case 0x2f9ea8u: goto label_2f9ea8;
        case 0x2f9eacu: goto label_2f9eac;
        case 0x2f9eb0u: goto label_2f9eb0;
        case 0x2f9eb4u: goto label_2f9eb4;
        case 0x2f9eb8u: goto label_2f9eb8;
        case 0x2f9ebcu: goto label_2f9ebc;
        case 0x2f9ec0u: goto label_2f9ec0;
        case 0x2f9ec4u: goto label_2f9ec4;
        case 0x2f9ec8u: goto label_2f9ec8;
        case 0x2f9eccu: goto label_2f9ecc;
        case 0x2f9ed0u: goto label_2f9ed0;
        case 0x2f9ed4u: goto label_2f9ed4;
        case 0x2f9ed8u: goto label_2f9ed8;
        case 0x2f9edcu: goto label_2f9edc;
        case 0x2f9ee0u: goto label_2f9ee0;
        case 0x2f9ee4u: goto label_2f9ee4;
        case 0x2f9ee8u: goto label_2f9ee8;
        case 0x2f9eecu: goto label_2f9eec;
        case 0x2f9ef0u: goto label_2f9ef0;
        case 0x2f9ef4u: goto label_2f9ef4;
        case 0x2f9ef8u: goto label_2f9ef8;
        case 0x2f9efcu: goto label_2f9efc;
        case 0x2f9f00u: goto label_2f9f00;
        case 0x2f9f04u: goto label_2f9f04;
        case 0x2f9f08u: goto label_2f9f08;
        case 0x2f9f0cu: goto label_2f9f0c;
        case 0x2f9f10u: goto label_2f9f10;
        case 0x2f9f14u: goto label_2f9f14;
        case 0x2f9f18u: goto label_2f9f18;
        case 0x2f9f1cu: goto label_2f9f1c;
        case 0x2f9f20u: goto label_2f9f20;
        case 0x2f9f24u: goto label_2f9f24;
        case 0x2f9f28u: goto label_2f9f28;
        case 0x2f9f2cu: goto label_2f9f2c;
        case 0x2f9f30u: goto label_2f9f30;
        case 0x2f9f34u: goto label_2f9f34;
        case 0x2f9f38u: goto label_2f9f38;
        case 0x2f9f3cu: goto label_2f9f3c;
        case 0x2f9f40u: goto label_2f9f40;
        case 0x2f9f44u: goto label_2f9f44;
        case 0x2f9f48u: goto label_2f9f48;
        case 0x2f9f4cu: goto label_2f9f4c;
        case 0x2f9f50u: goto label_2f9f50;
        case 0x2f9f54u: goto label_2f9f54;
        case 0x2f9f58u: goto label_2f9f58;
        case 0x2f9f5cu: goto label_2f9f5c;
        case 0x2f9f60u: goto label_2f9f60;
        case 0x2f9f64u: goto label_2f9f64;
        case 0x2f9f68u: goto label_2f9f68;
        case 0x2f9f6cu: goto label_2f9f6c;
        case 0x2f9f70u: goto label_2f9f70;
        case 0x2f9f74u: goto label_2f9f74;
        case 0x2f9f78u: goto label_2f9f78;
        case 0x2f9f7cu: goto label_2f9f7c;
        case 0x2f9f80u: goto label_2f9f80;
        case 0x2f9f84u: goto label_2f9f84;
        case 0x2f9f88u: goto label_2f9f88;
        case 0x2f9f8cu: goto label_2f9f8c;
        case 0x2f9f90u: goto label_2f9f90;
        case 0x2f9f94u: goto label_2f9f94;
        case 0x2f9f98u: goto label_2f9f98;
        case 0x2f9f9cu: goto label_2f9f9c;
        case 0x2f9fa0u: goto label_2f9fa0;
        case 0x2f9fa4u: goto label_2f9fa4;
        case 0x2f9fa8u: goto label_2f9fa8;
        case 0x2f9facu: goto label_2f9fac;
        case 0x2f9fb0u: goto label_2f9fb0;
        case 0x2f9fb4u: goto label_2f9fb4;
        case 0x2f9fb8u: goto label_2f9fb8;
        case 0x2f9fbcu: goto label_2f9fbc;
        case 0x2f9fc0u: goto label_2f9fc0;
        case 0x2f9fc4u: goto label_2f9fc4;
        case 0x2f9fc8u: goto label_2f9fc8;
        case 0x2f9fccu: goto label_2f9fcc;
        case 0x2f9fd0u: goto label_2f9fd0;
        case 0x2f9fd4u: goto label_2f9fd4;
        case 0x2f9fd8u: goto label_2f9fd8;
        case 0x2f9fdcu: goto label_2f9fdc;
        case 0x2f9fe0u: goto label_2f9fe0;
        case 0x2f9fe4u: goto label_2f9fe4;
        case 0x2f9fe8u: goto label_2f9fe8;
        case 0x2f9fecu: goto label_2f9fec;
        case 0x2f9ff0u: goto label_2f9ff0;
        case 0x2f9ff4u: goto label_2f9ff4;
        case 0x2f9ff8u: goto label_2f9ff8;
        case 0x2f9ffcu: goto label_2f9ffc;
        case 0x2fa000u: goto label_2fa000;
        case 0x2fa004u: goto label_2fa004;
        case 0x2fa008u: goto label_2fa008;
        case 0x2fa00cu: goto label_2fa00c;
        case 0x2fa010u: goto label_2fa010;
        case 0x2fa014u: goto label_2fa014;
        case 0x2fa018u: goto label_2fa018;
        case 0x2fa01cu: goto label_2fa01c;
        case 0x2fa020u: goto label_2fa020;
        case 0x2fa024u: goto label_2fa024;
        case 0x2fa028u: goto label_2fa028;
        case 0x2fa02cu: goto label_2fa02c;
        case 0x2fa030u: goto label_2fa030;
        case 0x2fa034u: goto label_2fa034;
        case 0x2fa038u: goto label_2fa038;
        case 0x2fa03cu: goto label_2fa03c;
        case 0x2fa040u: goto label_2fa040;
        case 0x2fa044u: goto label_2fa044;
        case 0x2fa048u: goto label_2fa048;
        case 0x2fa04cu: goto label_2fa04c;
        case 0x2fa050u: goto label_2fa050;
        case 0x2fa054u: goto label_2fa054;
        case 0x2fa058u: goto label_2fa058;
        case 0x2fa05cu: goto label_2fa05c;
        case 0x2fa060u: goto label_2fa060;
        case 0x2fa064u: goto label_2fa064;
        case 0x2fa068u: goto label_2fa068;
        case 0x2fa06cu: goto label_2fa06c;
        case 0x2fa070u: goto label_2fa070;
        case 0x2fa074u: goto label_2fa074;
        case 0x2fa078u: goto label_2fa078;
        case 0x2fa07cu: goto label_2fa07c;
        case 0x2fa080u: goto label_2fa080;
        case 0x2fa084u: goto label_2fa084;
        case 0x2fa088u: goto label_2fa088;
        case 0x2fa08cu: goto label_2fa08c;
        case 0x2fa090u: goto label_2fa090;
        case 0x2fa094u: goto label_2fa094;
        case 0x2fa098u: goto label_2fa098;
        case 0x2fa09cu: goto label_2fa09c;
        case 0x2fa0a0u: goto label_2fa0a0;
        case 0x2fa0a4u: goto label_2fa0a4;
        case 0x2fa0a8u: goto label_2fa0a8;
        case 0x2fa0acu: goto label_2fa0ac;
        case 0x2fa0b0u: goto label_2fa0b0;
        case 0x2fa0b4u: goto label_2fa0b4;
        case 0x2fa0b8u: goto label_2fa0b8;
        case 0x2fa0bcu: goto label_2fa0bc;
        case 0x2fa0c0u: goto label_2fa0c0;
        case 0x2fa0c4u: goto label_2fa0c4;
        case 0x2fa0c8u: goto label_2fa0c8;
        case 0x2fa0ccu: goto label_2fa0cc;
        case 0x2fa0d0u: goto label_2fa0d0;
        case 0x2fa0d4u: goto label_2fa0d4;
        case 0x2fa0d8u: goto label_2fa0d8;
        case 0x2fa0dcu: goto label_2fa0dc;
        case 0x2fa0e0u: goto label_2fa0e0;
        case 0x2fa0e4u: goto label_2fa0e4;
        case 0x2fa0e8u: goto label_2fa0e8;
        case 0x2fa0ecu: goto label_2fa0ec;
        case 0x2fa0f0u: goto label_2fa0f0;
        case 0x2fa0f4u: goto label_2fa0f4;
        case 0x2fa0f8u: goto label_2fa0f8;
        case 0x2fa0fcu: goto label_2fa0fc;
        case 0x2fa100u: goto label_2fa100;
        case 0x2fa104u: goto label_2fa104;
        case 0x2fa108u: goto label_2fa108;
        case 0x2fa10cu: goto label_2fa10c;
        case 0x2fa110u: goto label_2fa110;
        case 0x2fa114u: goto label_2fa114;
        case 0x2fa118u: goto label_2fa118;
        case 0x2fa11cu: goto label_2fa11c;
        case 0x2fa120u: goto label_2fa120;
        case 0x2fa124u: goto label_2fa124;
        case 0x2fa128u: goto label_2fa128;
        case 0x2fa12cu: goto label_2fa12c;
        case 0x2fa130u: goto label_2fa130;
        case 0x2fa134u: goto label_2fa134;
        case 0x2fa138u: goto label_2fa138;
        case 0x2fa13cu: goto label_2fa13c;
        case 0x2fa140u: goto label_2fa140;
        case 0x2fa144u: goto label_2fa144;
        case 0x2fa148u: goto label_2fa148;
        case 0x2fa14cu: goto label_2fa14c;
        case 0x2fa150u: goto label_2fa150;
        case 0x2fa154u: goto label_2fa154;
        case 0x2fa158u: goto label_2fa158;
        case 0x2fa15cu: goto label_2fa15c;
        case 0x2fa160u: goto label_2fa160;
        case 0x2fa164u: goto label_2fa164;
        case 0x2fa168u: goto label_2fa168;
        case 0x2fa16cu: goto label_2fa16c;
        case 0x2fa170u: goto label_2fa170;
        case 0x2fa174u: goto label_2fa174;
        case 0x2fa178u: goto label_2fa178;
        case 0x2fa17cu: goto label_2fa17c;
        case 0x2fa180u: goto label_2fa180;
        case 0x2fa184u: goto label_2fa184;
        case 0x2fa188u: goto label_2fa188;
        case 0x2fa18cu: goto label_2fa18c;
        case 0x2fa190u: goto label_2fa190;
        case 0x2fa194u: goto label_2fa194;
        case 0x2fa198u: goto label_2fa198;
        case 0x2fa19cu: goto label_2fa19c;
        case 0x2fa1a0u: goto label_2fa1a0;
        case 0x2fa1a4u: goto label_2fa1a4;
        case 0x2fa1a8u: goto label_2fa1a8;
        case 0x2fa1acu: goto label_2fa1ac;
        case 0x2fa1b0u: goto label_2fa1b0;
        case 0x2fa1b4u: goto label_2fa1b4;
        case 0x2fa1b8u: goto label_2fa1b8;
        case 0x2fa1bcu: goto label_2fa1bc;
        case 0x2fa1c0u: goto label_2fa1c0;
        case 0x2fa1c4u: goto label_2fa1c4;
        case 0x2fa1c8u: goto label_2fa1c8;
        case 0x2fa1ccu: goto label_2fa1cc;
        case 0x2fa1d0u: goto label_2fa1d0;
        case 0x2fa1d4u: goto label_2fa1d4;
        case 0x2fa1d8u: goto label_2fa1d8;
        case 0x2fa1dcu: goto label_2fa1dc;
        case 0x2fa1e0u: goto label_2fa1e0;
        case 0x2fa1e4u: goto label_2fa1e4;
        case 0x2fa1e8u: goto label_2fa1e8;
        case 0x2fa1ecu: goto label_2fa1ec;
        case 0x2fa1f0u: goto label_2fa1f0;
        case 0x2fa1f4u: goto label_2fa1f4;
        case 0x2fa1f8u: goto label_2fa1f8;
        case 0x2fa1fcu: goto label_2fa1fc;
        case 0x2fa200u: goto label_2fa200;
        case 0x2fa204u: goto label_2fa204;
        case 0x2fa208u: goto label_2fa208;
        case 0x2fa20cu: goto label_2fa20c;
        case 0x2fa210u: goto label_2fa210;
        case 0x2fa214u: goto label_2fa214;
        case 0x2fa218u: goto label_2fa218;
        case 0x2fa21cu: goto label_2fa21c;
        case 0x2fa220u: goto label_2fa220;
        case 0x2fa224u: goto label_2fa224;
        case 0x2fa228u: goto label_2fa228;
        case 0x2fa22cu: goto label_2fa22c;
        case 0x2fa230u: goto label_2fa230;
        case 0x2fa234u: goto label_2fa234;
        case 0x2fa238u: goto label_2fa238;
        case 0x2fa23cu: goto label_2fa23c;
        case 0x2fa240u: goto label_2fa240;
        case 0x2fa244u: goto label_2fa244;
        case 0x2fa248u: goto label_2fa248;
        case 0x2fa24cu: goto label_2fa24c;
        case 0x2fa250u: goto label_2fa250;
        case 0x2fa254u: goto label_2fa254;
        case 0x2fa258u: goto label_2fa258;
        case 0x2fa25cu: goto label_2fa25c;
        case 0x2fa260u: goto label_2fa260;
        case 0x2fa264u: goto label_2fa264;
        case 0x2fa268u: goto label_2fa268;
        case 0x2fa26cu: goto label_2fa26c;
        case 0x2fa270u: goto label_2fa270;
        case 0x2fa274u: goto label_2fa274;
        case 0x2fa278u: goto label_2fa278;
        case 0x2fa27cu: goto label_2fa27c;
        case 0x2fa280u: goto label_2fa280;
        case 0x2fa284u: goto label_2fa284;
        case 0x2fa288u: goto label_2fa288;
        case 0x2fa28cu: goto label_2fa28c;
        case 0x2fa290u: goto label_2fa290;
        case 0x2fa294u: goto label_2fa294;
        case 0x2fa298u: goto label_2fa298;
        case 0x2fa29cu: goto label_2fa29c;
        case 0x2fa2a0u: goto label_2fa2a0;
        case 0x2fa2a4u: goto label_2fa2a4;
        case 0x2fa2a8u: goto label_2fa2a8;
        case 0x2fa2acu: goto label_2fa2ac;
        case 0x2fa2b0u: goto label_2fa2b0;
        case 0x2fa2b4u: goto label_2fa2b4;
        case 0x2fa2b8u: goto label_2fa2b8;
        case 0x2fa2bcu: goto label_2fa2bc;
        case 0x2fa2c0u: goto label_2fa2c0;
        case 0x2fa2c4u: goto label_2fa2c4;
        case 0x2fa2c8u: goto label_2fa2c8;
        case 0x2fa2ccu: goto label_2fa2cc;
        case 0x2fa2d0u: goto label_2fa2d0;
        case 0x2fa2d4u: goto label_2fa2d4;
        case 0x2fa2d8u: goto label_2fa2d8;
        case 0x2fa2dcu: goto label_2fa2dc;
        case 0x2fa2e0u: goto label_2fa2e0;
        case 0x2fa2e4u: goto label_2fa2e4;
        case 0x2fa2e8u: goto label_2fa2e8;
        case 0x2fa2ecu: goto label_2fa2ec;
        case 0x2fa2f0u: goto label_2fa2f0;
        case 0x2fa2f4u: goto label_2fa2f4;
        case 0x2fa2f8u: goto label_2fa2f8;
        case 0x2fa2fcu: goto label_2fa2fc;
        case 0x2fa300u: goto label_2fa300;
        case 0x2fa304u: goto label_2fa304;
        case 0x2fa308u: goto label_2fa308;
        case 0x2fa30cu: goto label_2fa30c;
        case 0x2fa310u: goto label_2fa310;
        case 0x2fa314u: goto label_2fa314;
        case 0x2fa318u: goto label_2fa318;
        case 0x2fa31cu: goto label_2fa31c;
        case 0x2fa320u: goto label_2fa320;
        case 0x2fa324u: goto label_2fa324;
        case 0x2fa328u: goto label_2fa328;
        case 0x2fa32cu: goto label_2fa32c;
        case 0x2fa330u: goto label_2fa330;
        case 0x2fa334u: goto label_2fa334;
        case 0x2fa338u: goto label_2fa338;
        case 0x2fa33cu: goto label_2fa33c;
        case 0x2fa340u: goto label_2fa340;
        case 0x2fa344u: goto label_2fa344;
        case 0x2fa348u: goto label_2fa348;
        case 0x2fa34cu: goto label_2fa34c;
        case 0x2fa350u: goto label_2fa350;
        case 0x2fa354u: goto label_2fa354;
        case 0x2fa358u: goto label_2fa358;
        case 0x2fa35cu: goto label_2fa35c;
        case 0x2fa360u: goto label_2fa360;
        case 0x2fa364u: goto label_2fa364;
        case 0x2fa368u: goto label_2fa368;
        case 0x2fa36cu: goto label_2fa36c;
        case 0x2fa370u: goto label_2fa370;
        case 0x2fa374u: goto label_2fa374;
        case 0x2fa378u: goto label_2fa378;
        case 0x2fa37cu: goto label_2fa37c;
        case 0x2fa380u: goto label_2fa380;
        case 0x2fa384u: goto label_2fa384;
        case 0x2fa388u: goto label_2fa388;
        case 0x2fa38cu: goto label_2fa38c;
        case 0x2fa390u: goto label_2fa390;
        case 0x2fa394u: goto label_2fa394;
        case 0x2fa398u: goto label_2fa398;
        case 0x2fa39cu: goto label_2fa39c;
        case 0x2fa3a0u: goto label_2fa3a0;
        case 0x2fa3a4u: goto label_2fa3a4;
        case 0x2fa3a8u: goto label_2fa3a8;
        case 0x2fa3acu: goto label_2fa3ac;
        case 0x2fa3b0u: goto label_2fa3b0;
        case 0x2fa3b4u: goto label_2fa3b4;
        case 0x2fa3b8u: goto label_2fa3b8;
        case 0x2fa3bcu: goto label_2fa3bc;
        case 0x2fa3c0u: goto label_2fa3c0;
        case 0x2fa3c4u: goto label_2fa3c4;
        case 0x2fa3c8u: goto label_2fa3c8;
        case 0x2fa3ccu: goto label_2fa3cc;
        case 0x2fa3d0u: goto label_2fa3d0;
        case 0x2fa3d4u: goto label_2fa3d4;
        case 0x2fa3d8u: goto label_2fa3d8;
        case 0x2fa3dcu: goto label_2fa3dc;
        case 0x2fa3e0u: goto label_2fa3e0;
        case 0x2fa3e4u: goto label_2fa3e4;
        case 0x2fa3e8u: goto label_2fa3e8;
        case 0x2fa3ecu: goto label_2fa3ec;
        case 0x2fa3f0u: goto label_2fa3f0;
        case 0x2fa3f4u: goto label_2fa3f4;
        case 0x2fa3f8u: goto label_2fa3f8;
        case 0x2fa3fcu: goto label_2fa3fc;
        case 0x2fa400u: goto label_2fa400;
        case 0x2fa404u: goto label_2fa404;
        case 0x2fa408u: goto label_2fa408;
        case 0x2fa40cu: goto label_2fa40c;
        case 0x2fa410u: goto label_2fa410;
        case 0x2fa414u: goto label_2fa414;
        case 0x2fa418u: goto label_2fa418;
        case 0x2fa41cu: goto label_2fa41c;
        case 0x2fa420u: goto label_2fa420;
        case 0x2fa424u: goto label_2fa424;
        case 0x2fa428u: goto label_2fa428;
        case 0x2fa42cu: goto label_2fa42c;
        case 0x2fa430u: goto label_2fa430;
        case 0x2fa434u: goto label_2fa434;
        case 0x2fa438u: goto label_2fa438;
        case 0x2fa43cu: goto label_2fa43c;
        case 0x2fa440u: goto label_2fa440;
        case 0x2fa444u: goto label_2fa444;
        case 0x2fa448u: goto label_2fa448;
        case 0x2fa44cu: goto label_2fa44c;
        case 0x2fa450u: goto label_2fa450;
        case 0x2fa454u: goto label_2fa454;
        case 0x2fa458u: goto label_2fa458;
        case 0x2fa45cu: goto label_2fa45c;
        case 0x2fa460u: goto label_2fa460;
        case 0x2fa464u: goto label_2fa464;
        case 0x2fa468u: goto label_2fa468;
        case 0x2fa46cu: goto label_2fa46c;
        case 0x2fa470u: goto label_2fa470;
        case 0x2fa474u: goto label_2fa474;
        case 0x2fa478u: goto label_2fa478;
        case 0x2fa47cu: goto label_2fa47c;
        case 0x2fa480u: goto label_2fa480;
        case 0x2fa484u: goto label_2fa484;
        case 0x2fa488u: goto label_2fa488;
        case 0x2fa48cu: goto label_2fa48c;
        case 0x2fa490u: goto label_2fa490;
        case 0x2fa494u: goto label_2fa494;
        case 0x2fa498u: goto label_2fa498;
        case 0x2fa49cu: goto label_2fa49c;
        case 0x2fa4a0u: goto label_2fa4a0;
        case 0x2fa4a4u: goto label_2fa4a4;
        case 0x2fa4a8u: goto label_2fa4a8;
        case 0x2fa4acu: goto label_2fa4ac;
        case 0x2fa4b0u: goto label_2fa4b0;
        case 0x2fa4b4u: goto label_2fa4b4;
        case 0x2fa4b8u: goto label_2fa4b8;
        case 0x2fa4bcu: goto label_2fa4bc;
        case 0x2fa4c0u: goto label_2fa4c0;
        case 0x2fa4c4u: goto label_2fa4c4;
        case 0x2fa4c8u: goto label_2fa4c8;
        case 0x2fa4ccu: goto label_2fa4cc;
        case 0x2fa4d0u: goto label_2fa4d0;
        case 0x2fa4d4u: goto label_2fa4d4;
        case 0x2fa4d8u: goto label_2fa4d8;
        case 0x2fa4dcu: goto label_2fa4dc;
        case 0x2fa4e0u: goto label_2fa4e0;
        case 0x2fa4e4u: goto label_2fa4e4;
        case 0x2fa4e8u: goto label_2fa4e8;
        case 0x2fa4ecu: goto label_2fa4ec;
        case 0x2fa4f0u: goto label_2fa4f0;
        case 0x2fa4f4u: goto label_2fa4f4;
        case 0x2fa4f8u: goto label_2fa4f8;
        case 0x2fa4fcu: goto label_2fa4fc;
        case 0x2fa500u: goto label_2fa500;
        case 0x2fa504u: goto label_2fa504;
        case 0x2fa508u: goto label_2fa508;
        case 0x2fa50cu: goto label_2fa50c;
        case 0x2fa510u: goto label_2fa510;
        case 0x2fa514u: goto label_2fa514;
        case 0x2fa518u: goto label_2fa518;
        case 0x2fa51cu: goto label_2fa51c;
        case 0x2fa520u: goto label_2fa520;
        case 0x2fa524u: goto label_2fa524;
        case 0x2fa528u: goto label_2fa528;
        case 0x2fa52cu: goto label_2fa52c;
        case 0x2fa530u: goto label_2fa530;
        case 0x2fa534u: goto label_2fa534;
        case 0x2fa538u: goto label_2fa538;
        case 0x2fa53cu: goto label_2fa53c;
        case 0x2fa540u: goto label_2fa540;
        case 0x2fa544u: goto label_2fa544;
        case 0x2fa548u: goto label_2fa548;
        case 0x2fa54cu: goto label_2fa54c;
        case 0x2fa550u: goto label_2fa550;
        case 0x2fa554u: goto label_2fa554;
        case 0x2fa558u: goto label_2fa558;
        case 0x2fa55cu: goto label_2fa55c;
        case 0x2fa560u: goto label_2fa560;
        case 0x2fa564u: goto label_2fa564;
        case 0x2fa568u: goto label_2fa568;
        case 0x2fa56cu: goto label_2fa56c;
        case 0x2fa570u: goto label_2fa570;
        case 0x2fa574u: goto label_2fa574;
        case 0x2fa578u: goto label_2fa578;
        case 0x2fa57cu: goto label_2fa57c;
        case 0x2fa580u: goto label_2fa580;
        case 0x2fa584u: goto label_2fa584;
        case 0x2fa588u: goto label_2fa588;
        case 0x2fa58cu: goto label_2fa58c;
        case 0x2fa590u: goto label_2fa590;
        case 0x2fa594u: goto label_2fa594;
        case 0x2fa598u: goto label_2fa598;
        case 0x2fa59cu: goto label_2fa59c;
        case 0x2fa5a0u: goto label_2fa5a0;
        case 0x2fa5a4u: goto label_2fa5a4;
        case 0x2fa5a8u: goto label_2fa5a8;
        case 0x2fa5acu: goto label_2fa5ac;
        case 0x2fa5b0u: goto label_2fa5b0;
        case 0x2fa5b4u: goto label_2fa5b4;
        case 0x2fa5b8u: goto label_2fa5b8;
        case 0x2fa5bcu: goto label_2fa5bc;
        case 0x2fa5c0u: goto label_2fa5c0;
        case 0x2fa5c4u: goto label_2fa5c4;
        case 0x2fa5c8u: goto label_2fa5c8;
        case 0x2fa5ccu: goto label_2fa5cc;
        case 0x2fa5d0u: goto label_2fa5d0;
        case 0x2fa5d4u: goto label_2fa5d4;
        case 0x2fa5d8u: goto label_2fa5d8;
        case 0x2fa5dcu: goto label_2fa5dc;
        case 0x2fa5e0u: goto label_2fa5e0;
        case 0x2fa5e4u: goto label_2fa5e4;
        case 0x2fa5e8u: goto label_2fa5e8;
        case 0x2fa5ecu: goto label_2fa5ec;
        case 0x2fa5f0u: goto label_2fa5f0;
        case 0x2fa5f4u: goto label_2fa5f4;
        case 0x2fa5f8u: goto label_2fa5f8;
        case 0x2fa5fcu: goto label_2fa5fc;
        case 0x2fa600u: goto label_2fa600;
        case 0x2fa604u: goto label_2fa604;
        case 0x2fa608u: goto label_2fa608;
        case 0x2fa60cu: goto label_2fa60c;
        case 0x2fa610u: goto label_2fa610;
        case 0x2fa614u: goto label_2fa614;
        case 0x2fa618u: goto label_2fa618;
        case 0x2fa61cu: goto label_2fa61c;
        case 0x2fa620u: goto label_2fa620;
        case 0x2fa624u: goto label_2fa624;
        case 0x2fa628u: goto label_2fa628;
        case 0x2fa62cu: goto label_2fa62c;
        case 0x2fa630u: goto label_2fa630;
        case 0x2fa634u: goto label_2fa634;
        case 0x2fa638u: goto label_2fa638;
        case 0x2fa63cu: goto label_2fa63c;
        case 0x2fa640u: goto label_2fa640;
        case 0x2fa644u: goto label_2fa644;
        case 0x2fa648u: goto label_2fa648;
        case 0x2fa64cu: goto label_2fa64c;
        case 0x2fa650u: goto label_2fa650;
        case 0x2fa654u: goto label_2fa654;
        case 0x2fa658u: goto label_2fa658;
        case 0x2fa65cu: goto label_2fa65c;
        case 0x2fa660u: goto label_2fa660;
        case 0x2fa664u: goto label_2fa664;
        case 0x2fa668u: goto label_2fa668;
        case 0x2fa66cu: goto label_2fa66c;
        case 0x2fa670u: goto label_2fa670;
        case 0x2fa674u: goto label_2fa674;
        case 0x2fa678u: goto label_2fa678;
        case 0x2fa67cu: goto label_2fa67c;
        case 0x2fa680u: goto label_2fa680;
        case 0x2fa684u: goto label_2fa684;
        case 0x2fa688u: goto label_2fa688;
        case 0x2fa68cu: goto label_2fa68c;
        case 0x2fa690u: goto label_2fa690;
        case 0x2fa694u: goto label_2fa694;
        case 0x2fa698u: goto label_2fa698;
        case 0x2fa69cu: goto label_2fa69c;
        case 0x2fa6a0u: goto label_2fa6a0;
        case 0x2fa6a4u: goto label_2fa6a4;
        case 0x2fa6a8u: goto label_2fa6a8;
        case 0x2fa6acu: goto label_2fa6ac;
        case 0x2fa6b0u: goto label_2fa6b0;
        case 0x2fa6b4u: goto label_2fa6b4;
        case 0x2fa6b8u: goto label_2fa6b8;
        case 0x2fa6bcu: goto label_2fa6bc;
        case 0x2fa6c0u: goto label_2fa6c0;
        case 0x2fa6c4u: goto label_2fa6c4;
        case 0x2fa6c8u: goto label_2fa6c8;
        case 0x2fa6ccu: goto label_2fa6cc;
        case 0x2fa6d0u: goto label_2fa6d0;
        case 0x2fa6d4u: goto label_2fa6d4;
        case 0x2fa6d8u: goto label_2fa6d8;
        case 0x2fa6dcu: goto label_2fa6dc;
        case 0x2fa6e0u: goto label_2fa6e0;
        case 0x2fa6e4u: goto label_2fa6e4;
        case 0x2fa6e8u: goto label_2fa6e8;
        case 0x2fa6ecu: goto label_2fa6ec;
        case 0x2fa6f0u: goto label_2fa6f0;
        case 0x2fa6f4u: goto label_2fa6f4;
        case 0x2fa6f8u: goto label_2fa6f8;
        case 0x2fa6fcu: goto label_2fa6fc;
        case 0x2fa700u: goto label_2fa700;
        case 0x2fa704u: goto label_2fa704;
        case 0x2fa708u: goto label_2fa708;
        case 0x2fa70cu: goto label_2fa70c;
        case 0x2fa710u: goto label_2fa710;
        case 0x2fa714u: goto label_2fa714;
        case 0x2fa718u: goto label_2fa718;
        case 0x2fa71cu: goto label_2fa71c;
        case 0x2fa720u: goto label_2fa720;
        case 0x2fa724u: goto label_2fa724;
        case 0x2fa728u: goto label_2fa728;
        case 0x2fa72cu: goto label_2fa72c;
        case 0x2fa730u: goto label_2fa730;
        case 0x2fa734u: goto label_2fa734;
        case 0x2fa738u: goto label_2fa738;
        case 0x2fa73cu: goto label_2fa73c;
        case 0x2fa740u: goto label_2fa740;
        case 0x2fa744u: goto label_2fa744;
        case 0x2fa748u: goto label_2fa748;
        case 0x2fa74cu: goto label_2fa74c;
        case 0x2fa750u: goto label_2fa750;
        case 0x2fa754u: goto label_2fa754;
        case 0x2fa758u: goto label_2fa758;
        case 0x2fa75cu: goto label_2fa75c;
        case 0x2fa760u: goto label_2fa760;
        case 0x2fa764u: goto label_2fa764;
        case 0x2fa768u: goto label_2fa768;
        case 0x2fa76cu: goto label_2fa76c;
        case 0x2fa770u: goto label_2fa770;
        case 0x2fa774u: goto label_2fa774;
        case 0x2fa778u: goto label_2fa778;
        case 0x2fa77cu: goto label_2fa77c;
        case 0x2fa780u: goto label_2fa780;
        case 0x2fa784u: goto label_2fa784;
        case 0x2fa788u: goto label_2fa788;
        case 0x2fa78cu: goto label_2fa78c;
        case 0x2fa790u: goto label_2fa790;
        case 0x2fa794u: goto label_2fa794;
        case 0x2fa798u: goto label_2fa798;
        case 0x2fa79cu: goto label_2fa79c;
        case 0x2fa7a0u: goto label_2fa7a0;
        case 0x2fa7a4u: goto label_2fa7a4;
        case 0x2fa7a8u: goto label_2fa7a8;
        case 0x2fa7acu: goto label_2fa7ac;
        case 0x2fa7b0u: goto label_2fa7b0;
        case 0x2fa7b4u: goto label_2fa7b4;
        case 0x2fa7b8u: goto label_2fa7b8;
        case 0x2fa7bcu: goto label_2fa7bc;
        case 0x2fa7c0u: goto label_2fa7c0;
        case 0x2fa7c4u: goto label_2fa7c4;
        case 0x2fa7c8u: goto label_2fa7c8;
        case 0x2fa7ccu: goto label_2fa7cc;
        case 0x2fa7d0u: goto label_2fa7d0;
        case 0x2fa7d4u: goto label_2fa7d4;
        case 0x2fa7d8u: goto label_2fa7d8;
        case 0x2fa7dcu: goto label_2fa7dc;
        case 0x2fa7e0u: goto label_2fa7e0;
        case 0x2fa7e4u: goto label_2fa7e4;
        case 0x2fa7e8u: goto label_2fa7e8;
        case 0x2fa7ecu: goto label_2fa7ec;
        case 0x2fa7f0u: goto label_2fa7f0;
        case 0x2fa7f4u: goto label_2fa7f4;
        case 0x2fa7f8u: goto label_2fa7f8;
        case 0x2fa7fcu: goto label_2fa7fc;
        case 0x2fa800u: goto label_2fa800;
        case 0x2fa804u: goto label_2fa804;
        case 0x2fa808u: goto label_2fa808;
        case 0x2fa80cu: goto label_2fa80c;
        case 0x2fa810u: goto label_2fa810;
        case 0x2fa814u: goto label_2fa814;
        case 0x2fa818u: goto label_2fa818;
        case 0x2fa81cu: goto label_2fa81c;
        case 0x2fa820u: goto label_2fa820;
        case 0x2fa824u: goto label_2fa824;
        case 0x2fa828u: goto label_2fa828;
        case 0x2fa82cu: goto label_2fa82c;
        case 0x2fa830u: goto label_2fa830;
        case 0x2fa834u: goto label_2fa834;
        case 0x2fa838u: goto label_2fa838;
        case 0x2fa83cu: goto label_2fa83c;
        case 0x2fa840u: goto label_2fa840;
        case 0x2fa844u: goto label_2fa844;
        case 0x2fa848u: goto label_2fa848;
        case 0x2fa84cu: goto label_2fa84c;
        case 0x2fa850u: goto label_2fa850;
        case 0x2fa854u: goto label_2fa854;
        case 0x2fa858u: goto label_2fa858;
        case 0x2fa85cu: goto label_2fa85c;
        case 0x2fa860u: goto label_2fa860;
        case 0x2fa864u: goto label_2fa864;
        case 0x2fa868u: goto label_2fa868;
        case 0x2fa86cu: goto label_2fa86c;
        case 0x2fa870u: goto label_2fa870;
        case 0x2fa874u: goto label_2fa874;
        case 0x2fa878u: goto label_2fa878;
        case 0x2fa87cu: goto label_2fa87c;
        case 0x2fa880u: goto label_2fa880;
        case 0x2fa884u: goto label_2fa884;
        case 0x2fa888u: goto label_2fa888;
        case 0x2fa88cu: goto label_2fa88c;
        case 0x2fa890u: goto label_2fa890;
        case 0x2fa894u: goto label_2fa894;
        case 0x2fa898u: goto label_2fa898;
        case 0x2fa89cu: goto label_2fa89c;
        case 0x2fa8a0u: goto label_2fa8a0;
        case 0x2fa8a4u: goto label_2fa8a4;
        case 0x2fa8a8u: goto label_2fa8a8;
        case 0x2fa8acu: goto label_2fa8ac;
        case 0x2fa8b0u: goto label_2fa8b0;
        case 0x2fa8b4u: goto label_2fa8b4;
        case 0x2fa8b8u: goto label_2fa8b8;
        case 0x2fa8bcu: goto label_2fa8bc;
        case 0x2fa8c0u: goto label_2fa8c0;
        case 0x2fa8c4u: goto label_2fa8c4;
        case 0x2fa8c8u: goto label_2fa8c8;
        case 0x2fa8ccu: goto label_2fa8cc;
        case 0x2fa8d0u: goto label_2fa8d0;
        case 0x2fa8d4u: goto label_2fa8d4;
        case 0x2fa8d8u: goto label_2fa8d8;
        case 0x2fa8dcu: goto label_2fa8dc;
        case 0x2fa8e0u: goto label_2fa8e0;
        case 0x2fa8e4u: goto label_2fa8e4;
        case 0x2fa8e8u: goto label_2fa8e8;
        case 0x2fa8ecu: goto label_2fa8ec;
        case 0x2fa8f0u: goto label_2fa8f0;
        case 0x2fa8f4u: goto label_2fa8f4;
        case 0x2fa8f8u: goto label_2fa8f8;
        case 0x2fa8fcu: goto label_2fa8fc;
        case 0x2fa900u: goto label_2fa900;
        case 0x2fa904u: goto label_2fa904;
        case 0x2fa908u: goto label_2fa908;
        case 0x2fa90cu: goto label_2fa90c;
        case 0x2fa910u: goto label_2fa910;
        case 0x2fa914u: goto label_2fa914;
        case 0x2fa918u: goto label_2fa918;
        case 0x2fa91cu: goto label_2fa91c;
        case 0x2fa920u: goto label_2fa920;
        case 0x2fa924u: goto label_2fa924;
        case 0x2fa928u: goto label_2fa928;
        case 0x2fa92cu: goto label_2fa92c;
        case 0x2fa930u: goto label_2fa930;
        case 0x2fa934u: goto label_2fa934;
        case 0x2fa938u: goto label_2fa938;
        case 0x2fa93cu: goto label_2fa93c;
        case 0x2fa940u: goto label_2fa940;
        case 0x2fa944u: goto label_2fa944;
        case 0x2fa948u: goto label_2fa948;
        case 0x2fa94cu: goto label_2fa94c;
        case 0x2fa950u: goto label_2fa950;
        case 0x2fa954u: goto label_2fa954;
        case 0x2fa958u: goto label_2fa958;
        case 0x2fa95cu: goto label_2fa95c;
        case 0x2fa960u: goto label_2fa960;
        case 0x2fa964u: goto label_2fa964;
        case 0x2fa968u: goto label_2fa968;
        case 0x2fa96cu: goto label_2fa96c;
        case 0x2fa970u: goto label_2fa970;
        case 0x2fa974u: goto label_2fa974;
        case 0x2fa978u: goto label_2fa978;
        case 0x2fa97cu: goto label_2fa97c;
        case 0x2fa980u: goto label_2fa980;
        case 0x2fa984u: goto label_2fa984;
        case 0x2fa988u: goto label_2fa988;
        case 0x2fa98cu: goto label_2fa98c;
        case 0x2fa990u: goto label_2fa990;
        case 0x2fa994u: goto label_2fa994;
        case 0x2fa998u: goto label_2fa998;
        case 0x2fa99cu: goto label_2fa99c;
        case 0x2fa9a0u: goto label_2fa9a0;
        case 0x2fa9a4u: goto label_2fa9a4;
        case 0x2fa9a8u: goto label_2fa9a8;
        case 0x2fa9acu: goto label_2fa9ac;
        case 0x2fa9b0u: goto label_2fa9b0;
        case 0x2fa9b4u: goto label_2fa9b4;
        case 0x2fa9b8u: goto label_2fa9b8;
        case 0x2fa9bcu: goto label_2fa9bc;
        case 0x2fa9c0u: goto label_2fa9c0;
        case 0x2fa9c4u: goto label_2fa9c4;
        case 0x2fa9c8u: goto label_2fa9c8;
        case 0x2fa9ccu: goto label_2fa9cc;
        case 0x2fa9d0u: goto label_2fa9d0;
        case 0x2fa9d4u: goto label_2fa9d4;
        case 0x2fa9d8u: goto label_2fa9d8;
        case 0x2fa9dcu: goto label_2fa9dc;
        case 0x2fa9e0u: goto label_2fa9e0;
        case 0x2fa9e4u: goto label_2fa9e4;
        case 0x2fa9e8u: goto label_2fa9e8;
        case 0x2fa9ecu: goto label_2fa9ec;
        case 0x2fa9f0u: goto label_2fa9f0;
        case 0x2fa9f4u: goto label_2fa9f4;
        case 0x2fa9f8u: goto label_2fa9f8;
        case 0x2fa9fcu: goto label_2fa9fc;
        case 0x2faa00u: goto label_2faa00;
        case 0x2faa04u: goto label_2faa04;
        case 0x2faa08u: goto label_2faa08;
        case 0x2faa0cu: goto label_2faa0c;
        case 0x2faa10u: goto label_2faa10;
        case 0x2faa14u: goto label_2faa14;
        case 0x2faa18u: goto label_2faa18;
        case 0x2faa1cu: goto label_2faa1c;
        case 0x2faa20u: goto label_2faa20;
        case 0x2faa24u: goto label_2faa24;
        case 0x2faa28u: goto label_2faa28;
        case 0x2faa2cu: goto label_2faa2c;
        case 0x2faa30u: goto label_2faa30;
        case 0x2faa34u: goto label_2faa34;
        case 0x2faa38u: goto label_2faa38;
        case 0x2faa3cu: goto label_2faa3c;
        case 0x2faa40u: goto label_2faa40;
        case 0x2faa44u: goto label_2faa44;
        case 0x2faa48u: goto label_2faa48;
        case 0x2faa4cu: goto label_2faa4c;
        case 0x2faa50u: goto label_2faa50;
        case 0x2faa54u: goto label_2faa54;
        case 0x2faa58u: goto label_2faa58;
        case 0x2faa5cu: goto label_2faa5c;
        case 0x2faa60u: goto label_2faa60;
        case 0x2faa64u: goto label_2faa64;
        case 0x2faa68u: goto label_2faa68;
        case 0x2faa6cu: goto label_2faa6c;
        case 0x2faa70u: goto label_2faa70;
        case 0x2faa74u: goto label_2faa74;
        case 0x2faa78u: goto label_2faa78;
        case 0x2faa7cu: goto label_2faa7c;
        case 0x2faa80u: goto label_2faa80;
        case 0x2faa84u: goto label_2faa84;
        case 0x2faa88u: goto label_2faa88;
        case 0x2faa8cu: goto label_2faa8c;
        case 0x2faa90u: goto label_2faa90;
        case 0x2faa94u: goto label_2faa94;
        case 0x2faa98u: goto label_2faa98;
        case 0x2faa9cu: goto label_2faa9c;
        case 0x2faaa0u: goto label_2faaa0;
        case 0x2faaa4u: goto label_2faaa4;
        case 0x2faaa8u: goto label_2faaa8;
        case 0x2faaacu: goto label_2faaac;
        case 0x2faab0u: goto label_2faab0;
        case 0x2faab4u: goto label_2faab4;
        case 0x2faab8u: goto label_2faab8;
        case 0x2faabcu: goto label_2faabc;
        case 0x2faac0u: goto label_2faac0;
        case 0x2faac4u: goto label_2faac4;
        case 0x2faac8u: goto label_2faac8;
        case 0x2faaccu: goto label_2faacc;
        case 0x2faad0u: goto label_2faad0;
        case 0x2faad4u: goto label_2faad4;
        case 0x2faad8u: goto label_2faad8;
        case 0x2faadcu: goto label_2faadc;
        case 0x2faae0u: goto label_2faae0;
        case 0x2faae4u: goto label_2faae4;
        case 0x2faae8u: goto label_2faae8;
        case 0x2faaecu: goto label_2faaec;
        case 0x2faaf0u: goto label_2faaf0;
        case 0x2faaf4u: goto label_2faaf4;
        case 0x2faaf8u: goto label_2faaf8;
        case 0x2faafcu: goto label_2faafc;
        case 0x2fab00u: goto label_2fab00;
        case 0x2fab04u: goto label_2fab04;
        case 0x2fab08u: goto label_2fab08;
        case 0x2fab0cu: goto label_2fab0c;
        case 0x2fab10u: goto label_2fab10;
        case 0x2fab14u: goto label_2fab14;
        case 0x2fab18u: goto label_2fab18;
        case 0x2fab1cu: goto label_2fab1c;
        case 0x2fab20u: goto label_2fab20;
        case 0x2fab24u: goto label_2fab24;
        case 0x2fab28u: goto label_2fab28;
        case 0x2fab2cu: goto label_2fab2c;
        case 0x2fab30u: goto label_2fab30;
        case 0x2fab34u: goto label_2fab34;
        case 0x2fab38u: goto label_2fab38;
        case 0x2fab3cu: goto label_2fab3c;
        case 0x2fab40u: goto label_2fab40;
        case 0x2fab44u: goto label_2fab44;
        case 0x2fab48u: goto label_2fab48;
        case 0x2fab4cu: goto label_2fab4c;
        case 0x2fab50u: goto label_2fab50;
        case 0x2fab54u: goto label_2fab54;
        case 0x2fab58u: goto label_2fab58;
        case 0x2fab5cu: goto label_2fab5c;
        case 0x2fab60u: goto label_2fab60;
        case 0x2fab64u: goto label_2fab64;
        case 0x2fab68u: goto label_2fab68;
        case 0x2fab6cu: goto label_2fab6c;
        case 0x2fab70u: goto label_2fab70;
        case 0x2fab74u: goto label_2fab74;
        case 0x2fab78u: goto label_2fab78;
        case 0x2fab7cu: goto label_2fab7c;
        case 0x2fab80u: goto label_2fab80;
        case 0x2fab84u: goto label_2fab84;
        case 0x2fab88u: goto label_2fab88;
        case 0x2fab8cu: goto label_2fab8c;
        case 0x2fab90u: goto label_2fab90;
        case 0x2fab94u: goto label_2fab94;
        case 0x2fab98u: goto label_2fab98;
        case 0x2fab9cu: goto label_2fab9c;
        case 0x2faba0u: goto label_2faba0;
        case 0x2faba4u: goto label_2faba4;
        case 0x2faba8u: goto label_2faba8;
        case 0x2fabacu: goto label_2fabac;
        case 0x2fabb0u: goto label_2fabb0;
        case 0x2fabb4u: goto label_2fabb4;
        case 0x2fabb8u: goto label_2fabb8;
        case 0x2fabbcu: goto label_2fabbc;
        case 0x2fabc0u: goto label_2fabc0;
        case 0x2fabc4u: goto label_2fabc4;
        case 0x2fabc8u: goto label_2fabc8;
        case 0x2fabccu: goto label_2fabcc;
        case 0x2fabd0u: goto label_2fabd0;
        case 0x2fabd4u: goto label_2fabd4;
        case 0x2fabd8u: goto label_2fabd8;
        case 0x2fabdcu: goto label_2fabdc;
        case 0x2fabe0u: goto label_2fabe0;
        case 0x2fabe4u: goto label_2fabe4;
        case 0x2fabe8u: goto label_2fabe8;
        case 0x2fabecu: goto label_2fabec;
        case 0x2fabf0u: goto label_2fabf0;
        case 0x2fabf4u: goto label_2fabf4;
        case 0x2fabf8u: goto label_2fabf8;
        case 0x2fabfcu: goto label_2fabfc;
        case 0x2fac00u: goto label_2fac00;
        case 0x2fac04u: goto label_2fac04;
        case 0x2fac08u: goto label_2fac08;
        case 0x2fac0cu: goto label_2fac0c;
        case 0x2fac10u: goto label_2fac10;
        case 0x2fac14u: goto label_2fac14;
        case 0x2fac18u: goto label_2fac18;
        case 0x2fac1cu: goto label_2fac1c;
        case 0x2fac20u: goto label_2fac20;
        case 0x2fac24u: goto label_2fac24;
        case 0x2fac28u: goto label_2fac28;
        case 0x2fac2cu: goto label_2fac2c;
        case 0x2fac30u: goto label_2fac30;
        case 0x2fac34u: goto label_2fac34;
        case 0x2fac38u: goto label_2fac38;
        case 0x2fac3cu: goto label_2fac3c;
        case 0x2fac40u: goto label_2fac40;
        case 0x2fac44u: goto label_2fac44;
        case 0x2fac48u: goto label_2fac48;
        case 0x2fac4cu: goto label_2fac4c;
        case 0x2fac50u: goto label_2fac50;
        case 0x2fac54u: goto label_2fac54;
        case 0x2fac58u: goto label_2fac58;
        case 0x2fac5cu: goto label_2fac5c;
        case 0x2fac60u: goto label_2fac60;
        case 0x2fac64u: goto label_2fac64;
        case 0x2fac68u: goto label_2fac68;
        case 0x2fac6cu: goto label_2fac6c;
        case 0x2fac70u: goto label_2fac70;
        case 0x2fac74u: goto label_2fac74;
        case 0x2fac78u: goto label_2fac78;
        case 0x2fac7cu: goto label_2fac7c;
        case 0x2fac80u: goto label_2fac80;
        case 0x2fac84u: goto label_2fac84;
        case 0x2fac88u: goto label_2fac88;
        case 0x2fac8cu: goto label_2fac8c;
        case 0x2fac90u: goto label_2fac90;
        case 0x2fac94u: goto label_2fac94;
        case 0x2fac98u: goto label_2fac98;
        case 0x2fac9cu: goto label_2fac9c;
        case 0x2faca0u: goto label_2faca0;
        case 0x2faca4u: goto label_2faca4;
        case 0x2faca8u: goto label_2faca8;
        case 0x2facacu: goto label_2facac;
        case 0x2facb0u: goto label_2facb0;
        case 0x2facb4u: goto label_2facb4;
        case 0x2facb8u: goto label_2facb8;
        case 0x2facbcu: goto label_2facbc;
        case 0x2facc0u: goto label_2facc0;
        case 0x2facc4u: goto label_2facc4;
        case 0x2facc8u: goto label_2facc8;
        case 0x2facccu: goto label_2faccc;
        case 0x2facd0u: goto label_2facd0;
        case 0x2facd4u: goto label_2facd4;
        case 0x2facd8u: goto label_2facd8;
        case 0x2facdcu: goto label_2facdc;
        case 0x2face0u: goto label_2face0;
        case 0x2face4u: goto label_2face4;
        case 0x2face8u: goto label_2face8;
        case 0x2facecu: goto label_2facec;
        case 0x2facf0u: goto label_2facf0;
        case 0x2facf4u: goto label_2facf4;
        case 0x2facf8u: goto label_2facf8;
        case 0x2facfcu: goto label_2facfc;
        case 0x2fad00u: goto label_2fad00;
        case 0x2fad04u: goto label_2fad04;
        case 0x2fad08u: goto label_2fad08;
        case 0x2fad0cu: goto label_2fad0c;
        case 0x2fad10u: goto label_2fad10;
        case 0x2fad14u: goto label_2fad14;
        case 0x2fad18u: goto label_2fad18;
        case 0x2fad1cu: goto label_2fad1c;
        case 0x2fad20u: goto label_2fad20;
        case 0x2fad24u: goto label_2fad24;
        case 0x2fad28u: goto label_2fad28;
        case 0x2fad2cu: goto label_2fad2c;
        case 0x2fad30u: goto label_2fad30;
        case 0x2fad34u: goto label_2fad34;
        case 0x2fad38u: goto label_2fad38;
        case 0x2fad3cu: goto label_2fad3c;
        case 0x2fad40u: goto label_2fad40;
        case 0x2fad44u: goto label_2fad44;
        case 0x2fad48u: goto label_2fad48;
        case 0x2fad4cu: goto label_2fad4c;
        case 0x2fad50u: goto label_2fad50;
        case 0x2fad54u: goto label_2fad54;
        case 0x2fad58u: goto label_2fad58;
        case 0x2fad5cu: goto label_2fad5c;
        case 0x2fad60u: goto label_2fad60;
        case 0x2fad64u: goto label_2fad64;
        case 0x2fad68u: goto label_2fad68;
        case 0x2fad6cu: goto label_2fad6c;
        case 0x2fad70u: goto label_2fad70;
        case 0x2fad74u: goto label_2fad74;
        case 0x2fad78u: goto label_2fad78;
        case 0x2fad7cu: goto label_2fad7c;
        case 0x2fad80u: goto label_2fad80;
        case 0x2fad84u: goto label_2fad84;
        case 0x2fad88u: goto label_2fad88;
        case 0x2fad8cu: goto label_2fad8c;
        case 0x2fad90u: goto label_2fad90;
        case 0x2fad94u: goto label_2fad94;
        case 0x2fad98u: goto label_2fad98;
        case 0x2fad9cu: goto label_2fad9c;
        case 0x2fada0u: goto label_2fada0;
        case 0x2fada4u: goto label_2fada4;
        case 0x2fada8u: goto label_2fada8;
        case 0x2fadacu: goto label_2fadac;
        case 0x2fadb0u: goto label_2fadb0;
        case 0x2fadb4u: goto label_2fadb4;
        case 0x2fadb8u: goto label_2fadb8;
        case 0x2fadbcu: goto label_2fadbc;
        case 0x2fadc0u: goto label_2fadc0;
        case 0x2fadc4u: goto label_2fadc4;
        case 0x2fadc8u: goto label_2fadc8;
        case 0x2fadccu: goto label_2fadcc;
        case 0x2fadd0u: goto label_2fadd0;
        case 0x2fadd4u: goto label_2fadd4;
        case 0x2fadd8u: goto label_2fadd8;
        case 0x2faddcu: goto label_2faddc;
        case 0x2fade0u: goto label_2fade0;
        case 0x2fade4u: goto label_2fade4;
        case 0x2fade8u: goto label_2fade8;
        case 0x2fadecu: goto label_2fadec;
        case 0x2fadf0u: goto label_2fadf0;
        case 0x2fadf4u: goto label_2fadf4;
        case 0x2fadf8u: goto label_2fadf8;
        case 0x2fadfcu: goto label_2fadfc;
        case 0x2fae00u: goto label_2fae00;
        case 0x2fae04u: goto label_2fae04;
        case 0x2fae08u: goto label_2fae08;
        case 0x2fae0cu: goto label_2fae0c;
        case 0x2fae10u: goto label_2fae10;
        case 0x2fae14u: goto label_2fae14;
        case 0x2fae18u: goto label_2fae18;
        case 0x2fae1cu: goto label_2fae1c;
        case 0x2fae20u: goto label_2fae20;
        case 0x2fae24u: goto label_2fae24;
        case 0x2fae28u: goto label_2fae28;
        case 0x2fae2cu: goto label_2fae2c;
        case 0x2fae30u: goto label_2fae30;
        case 0x2fae34u: goto label_2fae34;
        case 0x2fae38u: goto label_2fae38;
        case 0x2fae3cu: goto label_2fae3c;
        case 0x2fae40u: goto label_2fae40;
        case 0x2fae44u: goto label_2fae44;
        case 0x2fae48u: goto label_2fae48;
        case 0x2fae4cu: goto label_2fae4c;
        case 0x2fae50u: goto label_2fae50;
        case 0x2fae54u: goto label_2fae54;
        case 0x2fae58u: goto label_2fae58;
        case 0x2fae5cu: goto label_2fae5c;
        case 0x2fae60u: goto label_2fae60;
        case 0x2fae64u: goto label_2fae64;
        case 0x2fae68u: goto label_2fae68;
        case 0x2fae6cu: goto label_2fae6c;
        case 0x2fae70u: goto label_2fae70;
        case 0x2fae74u: goto label_2fae74;
        case 0x2fae78u: goto label_2fae78;
        case 0x2fae7cu: goto label_2fae7c;
        case 0x2fae80u: goto label_2fae80;
        case 0x2fae84u: goto label_2fae84;
        case 0x2fae88u: goto label_2fae88;
        case 0x2fae8cu: goto label_2fae8c;
        case 0x2fae90u: goto label_2fae90;
        case 0x2fae94u: goto label_2fae94;
        case 0x2fae98u: goto label_2fae98;
        case 0x2fae9cu: goto label_2fae9c;
        case 0x2faea0u: goto label_2faea0;
        case 0x2faea4u: goto label_2faea4;
        case 0x2faea8u: goto label_2faea8;
        case 0x2faeacu: goto label_2faeac;
        case 0x2faeb0u: goto label_2faeb0;
        case 0x2faeb4u: goto label_2faeb4;
        case 0x2faeb8u: goto label_2faeb8;
        case 0x2faebcu: goto label_2faebc;
        case 0x2faec0u: goto label_2faec0;
        case 0x2faec4u: goto label_2faec4;
        case 0x2faec8u: goto label_2faec8;
        case 0x2faeccu: goto label_2faecc;
        case 0x2faed0u: goto label_2faed0;
        case 0x2faed4u: goto label_2faed4;
        case 0x2faed8u: goto label_2faed8;
        case 0x2faedcu: goto label_2faedc;
        case 0x2faee0u: goto label_2faee0;
        case 0x2faee4u: goto label_2faee4;
        case 0x2faee8u: goto label_2faee8;
        case 0x2faeecu: goto label_2faeec;
        case 0x2faef0u: goto label_2faef0;
        case 0x2faef4u: goto label_2faef4;
        case 0x2faef8u: goto label_2faef8;
        case 0x2faefcu: goto label_2faefc;
        case 0x2faf00u: goto label_2faf00;
        case 0x2faf04u: goto label_2faf04;
        case 0x2faf08u: goto label_2faf08;
        case 0x2faf0cu: goto label_2faf0c;
        case 0x2faf10u: goto label_2faf10;
        case 0x2faf14u: goto label_2faf14;
        case 0x2faf18u: goto label_2faf18;
        case 0x2faf1cu: goto label_2faf1c;
        case 0x2faf20u: goto label_2faf20;
        case 0x2faf24u: goto label_2faf24;
        case 0x2faf28u: goto label_2faf28;
        case 0x2faf2cu: goto label_2faf2c;
        case 0x2faf30u: goto label_2faf30;
        case 0x2faf34u: goto label_2faf34;
        case 0x2faf38u: goto label_2faf38;
        case 0x2faf3cu: goto label_2faf3c;
        case 0x2faf40u: goto label_2faf40;
        case 0x2faf44u: goto label_2faf44;
        case 0x2faf48u: goto label_2faf48;
        case 0x2faf4cu: goto label_2faf4c;
        case 0x2faf50u: goto label_2faf50;
        case 0x2faf54u: goto label_2faf54;
        case 0x2faf58u: goto label_2faf58;
        case 0x2faf5cu: goto label_2faf5c;
        case 0x2faf60u: goto label_2faf60;
        case 0x2faf64u: goto label_2faf64;
        case 0x2faf68u: goto label_2faf68;
        case 0x2faf6cu: goto label_2faf6c;
        case 0x2faf70u: goto label_2faf70;
        case 0x2faf74u: goto label_2faf74;
        case 0x2faf78u: goto label_2faf78;
        case 0x2faf7cu: goto label_2faf7c;
        case 0x2faf80u: goto label_2faf80;
        case 0x2faf84u: goto label_2faf84;
        case 0x2faf88u: goto label_2faf88;
        case 0x2faf8cu: goto label_2faf8c;
        case 0x2faf90u: goto label_2faf90;
        case 0x2faf94u: goto label_2faf94;
        case 0x2faf98u: goto label_2faf98;
        case 0x2faf9cu: goto label_2faf9c;
        case 0x2fafa0u: goto label_2fafa0;
        case 0x2fafa4u: goto label_2fafa4;
        case 0x2fafa8u: goto label_2fafa8;
        case 0x2fafacu: goto label_2fafac;
        case 0x2fafb0u: goto label_2fafb0;
        case 0x2fafb4u: goto label_2fafb4;
        case 0x2fafb8u: goto label_2fafb8;
        case 0x2fafbcu: goto label_2fafbc;
        case 0x2fafc0u: goto label_2fafc0;
        case 0x2fafc4u: goto label_2fafc4;
        case 0x2fafc8u: goto label_2fafc8;
        case 0x2fafccu: goto label_2fafcc;
        case 0x2fafd0u: goto label_2fafd0;
        case 0x2fafd4u: goto label_2fafd4;
        case 0x2fafd8u: goto label_2fafd8;
        case 0x2fafdcu: goto label_2fafdc;
        case 0x2fafe0u: goto label_2fafe0;
        case 0x2fafe4u: goto label_2fafe4;
        case 0x2fafe8u: goto label_2fafe8;
        case 0x2fafecu: goto label_2fafec;
        case 0x2faff0u: goto label_2faff0;
        case 0x2faff4u: goto label_2faff4;
        case 0x2faff8u: goto label_2faff8;
        case 0x2faffcu: goto label_2faffc;
        case 0x2fb000u: goto label_2fb000;
        case 0x2fb004u: goto label_2fb004;
        case 0x2fb008u: goto label_2fb008;
        case 0x2fb00cu: goto label_2fb00c;
        case 0x2fb010u: goto label_2fb010;
        case 0x2fb014u: goto label_2fb014;
        case 0x2fb018u: goto label_2fb018;
        case 0x2fb01cu: goto label_2fb01c;
        case 0x2fb020u: goto label_2fb020;
        case 0x2fb024u: goto label_2fb024;
        case 0x2fb028u: goto label_2fb028;
        case 0x2fb02cu: goto label_2fb02c;
        case 0x2fb030u: goto label_2fb030;
        case 0x2fb034u: goto label_2fb034;
        case 0x2fb038u: goto label_2fb038;
        case 0x2fb03cu: goto label_2fb03c;
        case 0x2fb040u: goto label_2fb040;
        case 0x2fb044u: goto label_2fb044;
        case 0x2fb048u: goto label_2fb048;
        case 0x2fb04cu: goto label_2fb04c;
        case 0x2fb050u: goto label_2fb050;
        case 0x2fb054u: goto label_2fb054;
        case 0x2fb058u: goto label_2fb058;
        case 0x2fb05cu: goto label_2fb05c;
        case 0x2fb060u: goto label_2fb060;
        case 0x2fb064u: goto label_2fb064;
        case 0x2fb068u: goto label_2fb068;
        case 0x2fb06cu: goto label_2fb06c;
        case 0x2fb070u: goto label_2fb070;
        case 0x2fb074u: goto label_2fb074;
        case 0x2fb078u: goto label_2fb078;
        case 0x2fb07cu: goto label_2fb07c;
        case 0x2fb080u: goto label_2fb080;
        case 0x2fb084u: goto label_2fb084;
        case 0x2fb088u: goto label_2fb088;
        case 0x2fb08cu: goto label_2fb08c;
        case 0x2fb090u: goto label_2fb090;
        case 0x2fb094u: goto label_2fb094;
        case 0x2fb098u: goto label_2fb098;
        case 0x2fb09cu: goto label_2fb09c;
        case 0x2fb0a0u: goto label_2fb0a0;
        case 0x2fb0a4u: goto label_2fb0a4;
        case 0x2fb0a8u: goto label_2fb0a8;
        case 0x2fb0acu: goto label_2fb0ac;
        case 0x2fb0b0u: goto label_2fb0b0;
        case 0x2fb0b4u: goto label_2fb0b4;
        case 0x2fb0b8u: goto label_2fb0b8;
        case 0x2fb0bcu: goto label_2fb0bc;
        case 0x2fb0c0u: goto label_2fb0c0;
        case 0x2fb0c4u: goto label_2fb0c4;
        case 0x2fb0c8u: goto label_2fb0c8;
        case 0x2fb0ccu: goto label_2fb0cc;
        case 0x2fb0d0u: goto label_2fb0d0;
        case 0x2fb0d4u: goto label_2fb0d4;
        case 0x2fb0d8u: goto label_2fb0d8;
        case 0x2fb0dcu: goto label_2fb0dc;
        case 0x2fb0e0u: goto label_2fb0e0;
        case 0x2fb0e4u: goto label_2fb0e4;
        case 0x2fb0e8u: goto label_2fb0e8;
        case 0x2fb0ecu: goto label_2fb0ec;
        case 0x2fb0f0u: goto label_2fb0f0;
        case 0x2fb0f4u: goto label_2fb0f4;
        case 0x2fb0f8u: goto label_2fb0f8;
        case 0x2fb0fcu: goto label_2fb0fc;
        case 0x2fb100u: goto label_2fb100;
        case 0x2fb104u: goto label_2fb104;
        case 0x2fb108u: goto label_2fb108;
        case 0x2fb10cu: goto label_2fb10c;
        case 0x2fb110u: goto label_2fb110;
        case 0x2fb114u: goto label_2fb114;
        case 0x2fb118u: goto label_2fb118;
        case 0x2fb11cu: goto label_2fb11c;
        case 0x2fb120u: goto label_2fb120;
        case 0x2fb124u: goto label_2fb124;
        case 0x2fb128u: goto label_2fb128;
        case 0x2fb12cu: goto label_2fb12c;
        case 0x2fb130u: goto label_2fb130;
        case 0x2fb134u: goto label_2fb134;
        case 0x2fb138u: goto label_2fb138;
        case 0x2fb13cu: goto label_2fb13c;
        case 0x2fb140u: goto label_2fb140;
        case 0x2fb144u: goto label_2fb144;
        case 0x2fb148u: goto label_2fb148;
        case 0x2fb14cu: goto label_2fb14c;
        case 0x2fb150u: goto label_2fb150;
        case 0x2fb154u: goto label_2fb154;
        case 0x2fb158u: goto label_2fb158;
        case 0x2fb15cu: goto label_2fb15c;
        case 0x2fb160u: goto label_2fb160;
        case 0x2fb164u: goto label_2fb164;
        case 0x2fb168u: goto label_2fb168;
        case 0x2fb16cu: goto label_2fb16c;
        case 0x2fb170u: goto label_2fb170;
        case 0x2fb174u: goto label_2fb174;
        case 0x2fb178u: goto label_2fb178;
        case 0x2fb17cu: goto label_2fb17c;
        case 0x2fb180u: goto label_2fb180;
        case 0x2fb184u: goto label_2fb184;
        case 0x2fb188u: goto label_2fb188;
        case 0x2fb18cu: goto label_2fb18c;
        case 0x2fb190u: goto label_2fb190;
        case 0x2fb194u: goto label_2fb194;
        case 0x2fb198u: goto label_2fb198;
        case 0x2fb19cu: goto label_2fb19c;
        case 0x2fb1a0u: goto label_2fb1a0;
        case 0x2fb1a4u: goto label_2fb1a4;
        case 0x2fb1a8u: goto label_2fb1a8;
        case 0x2fb1acu: goto label_2fb1ac;
        case 0x2fb1b0u: goto label_2fb1b0;
        case 0x2fb1b4u: goto label_2fb1b4;
        case 0x2fb1b8u: goto label_2fb1b8;
        case 0x2fb1bcu: goto label_2fb1bc;
        case 0x2fb1c0u: goto label_2fb1c0;
        case 0x2fb1c4u: goto label_2fb1c4;
        case 0x2fb1c8u: goto label_2fb1c8;
        case 0x2fb1ccu: goto label_2fb1cc;
        case 0x2fb1d0u: goto label_2fb1d0;
        case 0x2fb1d4u: goto label_2fb1d4;
        case 0x2fb1d8u: goto label_2fb1d8;
        case 0x2fb1dcu: goto label_2fb1dc;
        case 0x2fb1e0u: goto label_2fb1e0;
        case 0x2fb1e4u: goto label_2fb1e4;
        case 0x2fb1e8u: goto label_2fb1e8;
        case 0x2fb1ecu: goto label_2fb1ec;
        case 0x2fb1f0u: goto label_2fb1f0;
        case 0x2fb1f4u: goto label_2fb1f4;
        case 0x2fb1f8u: goto label_2fb1f8;
        case 0x2fb1fcu: goto label_2fb1fc;
        case 0x2fb200u: goto label_2fb200;
        case 0x2fb204u: goto label_2fb204;
        case 0x2fb208u: goto label_2fb208;
        case 0x2fb20cu: goto label_2fb20c;
        case 0x2fb210u: goto label_2fb210;
        case 0x2fb214u: goto label_2fb214;
        case 0x2fb218u: goto label_2fb218;
        case 0x2fb21cu: goto label_2fb21c;
        case 0x2fb220u: goto label_2fb220;
        case 0x2fb224u: goto label_2fb224;
        case 0x2fb228u: goto label_2fb228;
        case 0x2fb22cu: goto label_2fb22c;
        case 0x2fb230u: goto label_2fb230;
        case 0x2fb234u: goto label_2fb234;
        case 0x2fb238u: goto label_2fb238;
        case 0x2fb23cu: goto label_2fb23c;
        case 0x2fb240u: goto label_2fb240;
        case 0x2fb244u: goto label_2fb244;
        case 0x2fb248u: goto label_2fb248;
        case 0x2fb24cu: goto label_2fb24c;
        case 0x2fb250u: goto label_2fb250;
        case 0x2fb254u: goto label_2fb254;
        case 0x2fb258u: goto label_2fb258;
        case 0x2fb25cu: goto label_2fb25c;
        case 0x2fb260u: goto label_2fb260;
        case 0x2fb264u: goto label_2fb264;
        case 0x2fb268u: goto label_2fb268;
        case 0x2fb26cu: goto label_2fb26c;
        case 0x2fb270u: goto label_2fb270;
        case 0x2fb274u: goto label_2fb274;
        case 0x2fb278u: goto label_2fb278;
        case 0x2fb27cu: goto label_2fb27c;
        case 0x2fb280u: goto label_2fb280;
        case 0x2fb284u: goto label_2fb284;
        case 0x2fb288u: goto label_2fb288;
        case 0x2fb28cu: goto label_2fb28c;
        case 0x2fb290u: goto label_2fb290;
        case 0x2fb294u: goto label_2fb294;
        case 0x2fb298u: goto label_2fb298;
        case 0x2fb29cu: goto label_2fb29c;
        case 0x2fb2a0u: goto label_2fb2a0;
        case 0x2fb2a4u: goto label_2fb2a4;
        case 0x2fb2a8u: goto label_2fb2a8;
        case 0x2fb2acu: goto label_2fb2ac;
        case 0x2fb2b0u: goto label_2fb2b0;
        case 0x2fb2b4u: goto label_2fb2b4;
        case 0x2fb2b8u: goto label_2fb2b8;
        case 0x2fb2bcu: goto label_2fb2bc;
        case 0x2fb2c0u: goto label_2fb2c0;
        case 0x2fb2c4u: goto label_2fb2c4;
        case 0x2fb2c8u: goto label_2fb2c8;
        case 0x2fb2ccu: goto label_2fb2cc;
        case 0x2fb2d0u: goto label_2fb2d0;
        case 0x2fb2d4u: goto label_2fb2d4;
        case 0x2fb2d8u: goto label_2fb2d8;
        case 0x2fb2dcu: goto label_2fb2dc;
        case 0x2fb2e0u: goto label_2fb2e0;
        case 0x2fb2e4u: goto label_2fb2e4;
        case 0x2fb2e8u: goto label_2fb2e8;
        case 0x2fb2ecu: goto label_2fb2ec;
        case 0x2fb2f0u: goto label_2fb2f0;
        case 0x2fb2f4u: goto label_2fb2f4;
        case 0x2fb2f8u: goto label_2fb2f8;
        case 0x2fb2fcu: goto label_2fb2fc;
        case 0x2fb300u: goto label_2fb300;
        case 0x2fb304u: goto label_2fb304;
        case 0x2fb308u: goto label_2fb308;
        case 0x2fb30cu: goto label_2fb30c;
        case 0x2fb310u: goto label_2fb310;
        case 0x2fb314u: goto label_2fb314;
        case 0x2fb318u: goto label_2fb318;
        case 0x2fb31cu: goto label_2fb31c;
        case 0x2fb320u: goto label_2fb320;
        case 0x2fb324u: goto label_2fb324;
        case 0x2fb328u: goto label_2fb328;
        case 0x2fb32cu: goto label_2fb32c;
        case 0x2fb330u: goto label_2fb330;
        case 0x2fb334u: goto label_2fb334;
        case 0x2fb338u: goto label_2fb338;
        case 0x2fb33cu: goto label_2fb33c;
        case 0x2fb340u: goto label_2fb340;
        case 0x2fb344u: goto label_2fb344;
        case 0x2fb348u: goto label_2fb348;
        case 0x2fb34cu: goto label_2fb34c;
        case 0x2fb350u: goto label_2fb350;
        case 0x2fb354u: goto label_2fb354;
        case 0x2fb358u: goto label_2fb358;
        case 0x2fb35cu: goto label_2fb35c;
        case 0x2fb360u: goto label_2fb360;
        case 0x2fb364u: goto label_2fb364;
        case 0x2fb368u: goto label_2fb368;
        case 0x2fb36cu: goto label_2fb36c;
        case 0x2fb370u: goto label_2fb370;
        case 0x2fb374u: goto label_2fb374;
        case 0x2fb378u: goto label_2fb378;
        case 0x2fb37cu: goto label_2fb37c;
        case 0x2fb380u: goto label_2fb380;
        case 0x2fb384u: goto label_2fb384;
        case 0x2fb388u: goto label_2fb388;
        case 0x2fb38cu: goto label_2fb38c;
        case 0x2fb390u: goto label_2fb390;
        case 0x2fb394u: goto label_2fb394;
        case 0x2fb398u: goto label_2fb398;
        case 0x2fb39cu: goto label_2fb39c;
        case 0x2fb3a0u: goto label_2fb3a0;
        case 0x2fb3a4u: goto label_2fb3a4;
        case 0x2fb3a8u: goto label_2fb3a8;
        case 0x2fb3acu: goto label_2fb3ac;
        case 0x2fb3b0u: goto label_2fb3b0;
        case 0x2fb3b4u: goto label_2fb3b4;
        case 0x2fb3b8u: goto label_2fb3b8;
        case 0x2fb3bcu: goto label_2fb3bc;
        case 0x2fb3c0u: goto label_2fb3c0;
        case 0x2fb3c4u: goto label_2fb3c4;
        case 0x2fb3c8u: goto label_2fb3c8;
        case 0x2fb3ccu: goto label_2fb3cc;
        case 0x2fb3d0u: goto label_2fb3d0;
        case 0x2fb3d4u: goto label_2fb3d4;
        case 0x2fb3d8u: goto label_2fb3d8;
        case 0x2fb3dcu: goto label_2fb3dc;
        case 0x2fb3e0u: goto label_2fb3e0;
        case 0x2fb3e4u: goto label_2fb3e4;
        case 0x2fb3e8u: goto label_2fb3e8;
        case 0x2fb3ecu: goto label_2fb3ec;
        case 0x2fb3f0u: goto label_2fb3f0;
        case 0x2fb3f4u: goto label_2fb3f4;
        case 0x2fb3f8u: goto label_2fb3f8;
        case 0x2fb3fcu: goto label_2fb3fc;
        case 0x2fb400u: goto label_2fb400;
        case 0x2fb404u: goto label_2fb404;
        case 0x2fb408u: goto label_2fb408;
        case 0x2fb40cu: goto label_2fb40c;
        case 0x2fb410u: goto label_2fb410;
        case 0x2fb414u: goto label_2fb414;
        case 0x2fb418u: goto label_2fb418;
        case 0x2fb41cu: goto label_2fb41c;
        case 0x2fb420u: goto label_2fb420;
        case 0x2fb424u: goto label_2fb424;
        case 0x2fb428u: goto label_2fb428;
        case 0x2fb42cu: goto label_2fb42c;
        case 0x2fb430u: goto label_2fb430;
        case 0x2fb434u: goto label_2fb434;
        case 0x2fb438u: goto label_2fb438;
        case 0x2fb43cu: goto label_2fb43c;
        case 0x2fb440u: goto label_2fb440;
        case 0x2fb444u: goto label_2fb444;
        case 0x2fb448u: goto label_2fb448;
        case 0x2fb44cu: goto label_2fb44c;
        case 0x2fb450u: goto label_2fb450;
        case 0x2fb454u: goto label_2fb454;
        case 0x2fb458u: goto label_2fb458;
        case 0x2fb45cu: goto label_2fb45c;
        case 0x2fb460u: goto label_2fb460;
        case 0x2fb464u: goto label_2fb464;
        case 0x2fb468u: goto label_2fb468;
        case 0x2fb46cu: goto label_2fb46c;
        case 0x2fb470u: goto label_2fb470;
        case 0x2fb474u: goto label_2fb474;
        case 0x2fb478u: goto label_2fb478;
        case 0x2fb47cu: goto label_2fb47c;
        case 0x2fb480u: goto label_2fb480;
        case 0x2fb484u: goto label_2fb484;
        case 0x2fb488u: goto label_2fb488;
        case 0x2fb48cu: goto label_2fb48c;
        case 0x2fb490u: goto label_2fb490;
        case 0x2fb494u: goto label_2fb494;
        case 0x2fb498u: goto label_2fb498;
        case 0x2fb49cu: goto label_2fb49c;
        case 0x2fb4a0u: goto label_2fb4a0;
        case 0x2fb4a4u: goto label_2fb4a4;
        case 0x2fb4a8u: goto label_2fb4a8;
        case 0x2fb4acu: goto label_2fb4ac;
        case 0x2fb4b0u: goto label_2fb4b0;
        case 0x2fb4b4u: goto label_2fb4b4;
        case 0x2fb4b8u: goto label_2fb4b8;
        case 0x2fb4bcu: goto label_2fb4bc;
        case 0x2fb4c0u: goto label_2fb4c0;
        case 0x2fb4c4u: goto label_2fb4c4;
        case 0x2fb4c8u: goto label_2fb4c8;
        case 0x2fb4ccu: goto label_2fb4cc;
        case 0x2fb4d0u: goto label_2fb4d0;
        case 0x2fb4d4u: goto label_2fb4d4;
        case 0x2fb4d8u: goto label_2fb4d8;
        case 0x2fb4dcu: goto label_2fb4dc;
        case 0x2fb4e0u: goto label_2fb4e0;
        case 0x2fb4e4u: goto label_2fb4e4;
        case 0x2fb4e8u: goto label_2fb4e8;
        case 0x2fb4ecu: goto label_2fb4ec;
        case 0x2fb4f0u: goto label_2fb4f0;
        case 0x2fb4f4u: goto label_2fb4f4;
        case 0x2fb4f8u: goto label_2fb4f8;
        case 0x2fb4fcu: goto label_2fb4fc;
        case 0x2fb500u: goto label_2fb500;
        case 0x2fb504u: goto label_2fb504;
        case 0x2fb508u: goto label_2fb508;
        case 0x2fb50cu: goto label_2fb50c;
        case 0x2fb510u: goto label_2fb510;
        case 0x2fb514u: goto label_2fb514;
        case 0x2fb518u: goto label_2fb518;
        case 0x2fb51cu: goto label_2fb51c;
        case 0x2fb520u: goto label_2fb520;
        case 0x2fb524u: goto label_2fb524;
        case 0x2fb528u: goto label_2fb528;
        case 0x2fb52cu: goto label_2fb52c;
        case 0x2fb530u: goto label_2fb530;
        case 0x2fb534u: goto label_2fb534;
        case 0x2fb538u: goto label_2fb538;
        case 0x2fb53cu: goto label_2fb53c;
        case 0x2fb540u: goto label_2fb540;
        case 0x2fb544u: goto label_2fb544;
        case 0x2fb548u: goto label_2fb548;
        case 0x2fb54cu: goto label_2fb54c;
        case 0x2fb550u: goto label_2fb550;
        case 0x2fb554u: goto label_2fb554;
        case 0x2fb558u: goto label_2fb558;
        case 0x2fb55cu: goto label_2fb55c;
        case 0x2fb560u: goto label_2fb560;
        case 0x2fb564u: goto label_2fb564;
        case 0x2fb568u: goto label_2fb568;
        case 0x2fb56cu: goto label_2fb56c;
        case 0x2fb570u: goto label_2fb570;
        case 0x2fb574u: goto label_2fb574;
        case 0x2fb578u: goto label_2fb578;
        case 0x2fb57cu: goto label_2fb57c;
        case 0x2fb580u: goto label_2fb580;
        case 0x2fb584u: goto label_2fb584;
        case 0x2fb588u: goto label_2fb588;
        case 0x2fb58cu: goto label_2fb58c;
        case 0x2fb590u: goto label_2fb590;
        case 0x2fb594u: goto label_2fb594;
        case 0x2fb598u: goto label_2fb598;
        case 0x2fb59cu: goto label_2fb59c;
        case 0x2fb5a0u: goto label_2fb5a0;
        case 0x2fb5a4u: goto label_2fb5a4;
        case 0x2fb5a8u: goto label_2fb5a8;
        case 0x2fb5acu: goto label_2fb5ac;
        case 0x2fb5b0u: goto label_2fb5b0;
        case 0x2fb5b4u: goto label_2fb5b4;
        case 0x2fb5b8u: goto label_2fb5b8;
        case 0x2fb5bcu: goto label_2fb5bc;
        case 0x2fb5c0u: goto label_2fb5c0;
        case 0x2fb5c4u: goto label_2fb5c4;
        case 0x2fb5c8u: goto label_2fb5c8;
        case 0x2fb5ccu: goto label_2fb5cc;
        case 0x2fb5d0u: goto label_2fb5d0;
        case 0x2fb5d4u: goto label_2fb5d4;
        case 0x2fb5d8u: goto label_2fb5d8;
        case 0x2fb5dcu: goto label_2fb5dc;
        case 0x2fb5e0u: goto label_2fb5e0;
        case 0x2fb5e4u: goto label_2fb5e4;
        case 0x2fb5e8u: goto label_2fb5e8;
        case 0x2fb5ecu: goto label_2fb5ec;
        case 0x2fb5f0u: goto label_2fb5f0;
        case 0x2fb5f4u: goto label_2fb5f4;
        case 0x2fb5f8u: goto label_2fb5f8;
        case 0x2fb5fcu: goto label_2fb5fc;
        case 0x2fb600u: goto label_2fb600;
        case 0x2fb604u: goto label_2fb604;
        case 0x2fb608u: goto label_2fb608;
        case 0x2fb60cu: goto label_2fb60c;
        case 0x2fb610u: goto label_2fb610;
        case 0x2fb614u: goto label_2fb614;
        case 0x2fb618u: goto label_2fb618;
        case 0x2fb61cu: goto label_2fb61c;
        case 0x2fb620u: goto label_2fb620;
        case 0x2fb624u: goto label_2fb624;
        case 0x2fb628u: goto label_2fb628;
        case 0x2fb62cu: goto label_2fb62c;
        case 0x2fb630u: goto label_2fb630;
        case 0x2fb634u: goto label_2fb634;
        case 0x2fb638u: goto label_2fb638;
        case 0x2fb63cu: goto label_2fb63c;
        case 0x2fb640u: goto label_2fb640;
        case 0x2fb644u: goto label_2fb644;
        case 0x2fb648u: goto label_2fb648;
        case 0x2fb64cu: goto label_2fb64c;
        case 0x2fb650u: goto label_2fb650;
        case 0x2fb654u: goto label_2fb654;
        case 0x2fb658u: goto label_2fb658;
        case 0x2fb65cu: goto label_2fb65c;
        case 0x2fb660u: goto label_2fb660;
        case 0x2fb664u: goto label_2fb664;
        case 0x2fb668u: goto label_2fb668;
        case 0x2fb66cu: goto label_2fb66c;
        case 0x2fb670u: goto label_2fb670;
        case 0x2fb674u: goto label_2fb674;
        case 0x2fb678u: goto label_2fb678;
        case 0x2fb67cu: goto label_2fb67c;
        case 0x2fb680u: goto label_2fb680;
        case 0x2fb684u: goto label_2fb684;
        case 0x2fb688u: goto label_2fb688;
        case 0x2fb68cu: goto label_2fb68c;
        case 0x2fb690u: goto label_2fb690;
        case 0x2fb694u: goto label_2fb694;
        case 0x2fb698u: goto label_2fb698;
        case 0x2fb69cu: goto label_2fb69c;
        case 0x2fb6a0u: goto label_2fb6a0;
        case 0x2fb6a4u: goto label_2fb6a4;
        case 0x2fb6a8u: goto label_2fb6a8;
        case 0x2fb6acu: goto label_2fb6ac;
        case 0x2fb6b0u: goto label_2fb6b0;
        case 0x2fb6b4u: goto label_2fb6b4;
        case 0x2fb6b8u: goto label_2fb6b8;
        case 0x2fb6bcu: goto label_2fb6bc;
        case 0x2fb6c0u: goto label_2fb6c0;
        case 0x2fb6c4u: goto label_2fb6c4;
        case 0x2fb6c8u: goto label_2fb6c8;
        case 0x2fb6ccu: goto label_2fb6cc;
        case 0x2fb6d0u: goto label_2fb6d0;
        case 0x2fb6d4u: goto label_2fb6d4;
        case 0x2fb6d8u: goto label_2fb6d8;
        case 0x2fb6dcu: goto label_2fb6dc;
        case 0x2fb6e0u: goto label_2fb6e0;
        case 0x2fb6e4u: goto label_2fb6e4;
        case 0x2fb6e8u: goto label_2fb6e8;
        case 0x2fb6ecu: goto label_2fb6ec;
        case 0x2fb6f0u: goto label_2fb6f0;
        case 0x2fb6f4u: goto label_2fb6f4;
        case 0x2fb6f8u: goto label_2fb6f8;
        case 0x2fb6fcu: goto label_2fb6fc;
        case 0x2fb700u: goto label_2fb700;
        case 0x2fb704u: goto label_2fb704;
        case 0x2fb708u: goto label_2fb708;
        case 0x2fb70cu: goto label_2fb70c;
        case 0x2fb710u: goto label_2fb710;
        case 0x2fb714u: goto label_2fb714;
        case 0x2fb718u: goto label_2fb718;
        case 0x2fb71cu: goto label_2fb71c;
        case 0x2fb720u: goto label_2fb720;
        case 0x2fb724u: goto label_2fb724;
        case 0x2fb728u: goto label_2fb728;
        case 0x2fb72cu: goto label_2fb72c;
        case 0x2fb730u: goto label_2fb730;
        case 0x2fb734u: goto label_2fb734;
        case 0x2fb738u: goto label_2fb738;
        case 0x2fb73cu: goto label_2fb73c;
        case 0x2fb740u: goto label_2fb740;
        case 0x2fb744u: goto label_2fb744;
        case 0x2fb748u: goto label_2fb748;
        case 0x2fb74cu: goto label_2fb74c;
        case 0x2fb750u: goto label_2fb750;
        case 0x2fb754u: goto label_2fb754;
        case 0x2fb758u: goto label_2fb758;
        case 0x2fb75cu: goto label_2fb75c;
        case 0x2fb760u: goto label_2fb760;
        case 0x2fb764u: goto label_2fb764;
        case 0x2fb768u: goto label_2fb768;
        case 0x2fb76cu: goto label_2fb76c;
        case 0x2fb770u: goto label_2fb770;
        case 0x2fb774u: goto label_2fb774;
        case 0x2fb778u: goto label_2fb778;
        case 0x2fb77cu: goto label_2fb77c;
        case 0x2fb780u: goto label_2fb780;
        case 0x2fb784u: goto label_2fb784;
        case 0x2fb788u: goto label_2fb788;
        case 0x2fb78cu: goto label_2fb78c;
        case 0x2fb790u: goto label_2fb790;
        case 0x2fb794u: goto label_2fb794;
        case 0x2fb798u: goto label_2fb798;
        case 0x2fb79cu: goto label_2fb79c;
        case 0x2fb7a0u: goto label_2fb7a0;
        case 0x2fb7a4u: goto label_2fb7a4;
        case 0x2fb7a8u: goto label_2fb7a8;
        case 0x2fb7acu: goto label_2fb7ac;
        case 0x2fb7b0u: goto label_2fb7b0;
        case 0x2fb7b4u: goto label_2fb7b4;
        case 0x2fb7b8u: goto label_2fb7b8;
        case 0x2fb7bcu: goto label_2fb7bc;
        case 0x2fb7c0u: goto label_2fb7c0;
        case 0x2fb7c4u: goto label_2fb7c4;
        case 0x2fb7c8u: goto label_2fb7c8;
        case 0x2fb7ccu: goto label_2fb7cc;
        case 0x2fb7d0u: goto label_2fb7d0;
        case 0x2fb7d4u: goto label_2fb7d4;
        case 0x2fb7d8u: goto label_2fb7d8;
        case 0x2fb7dcu: goto label_2fb7dc;
        case 0x2fb7e0u: goto label_2fb7e0;
        case 0x2fb7e4u: goto label_2fb7e4;
        case 0x2fb7e8u: goto label_2fb7e8;
        case 0x2fb7ecu: goto label_2fb7ec;
        case 0x2fb7f0u: goto label_2fb7f0;
        case 0x2fb7f4u: goto label_2fb7f4;
        case 0x2fb7f8u: goto label_2fb7f8;
        case 0x2fb7fcu: goto label_2fb7fc;
        case 0x2fb800u: goto label_2fb800;
        case 0x2fb804u: goto label_2fb804;
        case 0x2fb808u: goto label_2fb808;
        case 0x2fb80cu: goto label_2fb80c;
        case 0x2fb810u: goto label_2fb810;
        case 0x2fb814u: goto label_2fb814;
        case 0x2fb818u: goto label_2fb818;
        case 0x2fb81cu: goto label_2fb81c;
        case 0x2fb820u: goto label_2fb820;
        case 0x2fb824u: goto label_2fb824;
        case 0x2fb828u: goto label_2fb828;
        case 0x2fb82cu: goto label_2fb82c;
        case 0x2fb830u: goto label_2fb830;
        case 0x2fb834u: goto label_2fb834;
        case 0x2fb838u: goto label_2fb838;
        case 0x2fb83cu: goto label_2fb83c;
        case 0x2fb840u: goto label_2fb840;
        case 0x2fb844u: goto label_2fb844;
        case 0x2fb848u: goto label_2fb848;
        case 0x2fb84cu: goto label_2fb84c;
        case 0x2fb850u: goto label_2fb850;
        case 0x2fb854u: goto label_2fb854;
        case 0x2fb858u: goto label_2fb858;
        case 0x2fb85cu: goto label_2fb85c;
        case 0x2fb860u: goto label_2fb860;
        case 0x2fb864u: goto label_2fb864;
        case 0x2fb868u: goto label_2fb868;
        case 0x2fb86cu: goto label_2fb86c;
        case 0x2fb870u: goto label_2fb870;
        case 0x2fb874u: goto label_2fb874;
        case 0x2fb878u: goto label_2fb878;
        case 0x2fb87cu: goto label_2fb87c;
        case 0x2fb880u: goto label_2fb880;
        case 0x2fb884u: goto label_2fb884;
        case 0x2fb888u: goto label_2fb888;
        case 0x2fb88cu: goto label_2fb88c;
        case 0x2fb890u: goto label_2fb890;
        case 0x2fb894u: goto label_2fb894;
        case 0x2fb898u: goto label_2fb898;
        case 0x2fb89cu: goto label_2fb89c;
        case 0x2fb8a0u: goto label_2fb8a0;
        case 0x2fb8a4u: goto label_2fb8a4;
        case 0x2fb8a8u: goto label_2fb8a8;
        case 0x2fb8acu: goto label_2fb8ac;
        case 0x2fb8b0u: goto label_2fb8b0;
        case 0x2fb8b4u: goto label_2fb8b4;
        case 0x2fb8b8u: goto label_2fb8b8;
        case 0x2fb8bcu: goto label_2fb8bc;
        case 0x2fb8c0u: goto label_2fb8c0;
        case 0x2fb8c4u: goto label_2fb8c4;
        case 0x2fb8c8u: goto label_2fb8c8;
        case 0x2fb8ccu: goto label_2fb8cc;
        case 0x2fb8d0u: goto label_2fb8d0;
        case 0x2fb8d4u: goto label_2fb8d4;
        case 0x2fb8d8u: goto label_2fb8d8;
        case 0x2fb8dcu: goto label_2fb8dc;
        case 0x2fb8e0u: goto label_2fb8e0;
        case 0x2fb8e4u: goto label_2fb8e4;
        case 0x2fb8e8u: goto label_2fb8e8;
        case 0x2fb8ecu: goto label_2fb8ec;
        case 0x2fb8f0u: goto label_2fb8f0;
        case 0x2fb8f4u: goto label_2fb8f4;
        case 0x2fb8f8u: goto label_2fb8f8;
        case 0x2fb8fcu: goto label_2fb8fc;
        case 0x2fb900u: goto label_2fb900;
        case 0x2fb904u: goto label_2fb904;
        case 0x2fb908u: goto label_2fb908;
        case 0x2fb90cu: goto label_2fb90c;
        case 0x2fb910u: goto label_2fb910;
        case 0x2fb914u: goto label_2fb914;
        case 0x2fb918u: goto label_2fb918;
        case 0x2fb91cu: goto label_2fb91c;
        case 0x2fb920u: goto label_2fb920;
        case 0x2fb924u: goto label_2fb924;
        case 0x2fb928u: goto label_2fb928;
        case 0x2fb92cu: goto label_2fb92c;
        case 0x2fb930u: goto label_2fb930;
        case 0x2fb934u: goto label_2fb934;
        case 0x2fb938u: goto label_2fb938;
        case 0x2fb93cu: goto label_2fb93c;
        case 0x2fb940u: goto label_2fb940;
        case 0x2fb944u: goto label_2fb944;
        case 0x2fb948u: goto label_2fb948;
        case 0x2fb94cu: goto label_2fb94c;
        case 0x2fb950u: goto label_2fb950;
        case 0x2fb954u: goto label_2fb954;
        case 0x2fb958u: goto label_2fb958;
        case 0x2fb95cu: goto label_2fb95c;
        case 0x2fb960u: goto label_2fb960;
        case 0x2fb964u: goto label_2fb964;
        case 0x2fb968u: goto label_2fb968;
        case 0x2fb96cu: goto label_2fb96c;
        case 0x2fb970u: goto label_2fb970;
        case 0x2fb974u: goto label_2fb974;
        case 0x2fb978u: goto label_2fb978;
        case 0x2fb97cu: goto label_2fb97c;
        case 0x2fb980u: goto label_2fb980;
        case 0x2fb984u: goto label_2fb984;
        case 0x2fb988u: goto label_2fb988;
        case 0x2fb98cu: goto label_2fb98c;
        case 0x2fb990u: goto label_2fb990;
        case 0x2fb994u: goto label_2fb994;
        case 0x2fb998u: goto label_2fb998;
        case 0x2fb99cu: goto label_2fb99c;
        case 0x2fb9a0u: goto label_2fb9a0;
        case 0x2fb9a4u: goto label_2fb9a4;
        case 0x2fb9a8u: goto label_2fb9a8;
        case 0x2fb9acu: goto label_2fb9ac;
        case 0x2fb9b0u: goto label_2fb9b0;
        case 0x2fb9b4u: goto label_2fb9b4;
        case 0x2fb9b8u: goto label_2fb9b8;
        case 0x2fb9bcu: goto label_2fb9bc;
        case 0x2fb9c0u: goto label_2fb9c0;
        case 0x2fb9c4u: goto label_2fb9c4;
        case 0x2fb9c8u: goto label_2fb9c8;
        case 0x2fb9ccu: goto label_2fb9cc;
        case 0x2fb9d0u: goto label_2fb9d0;
        case 0x2fb9d4u: goto label_2fb9d4;
        case 0x2fb9d8u: goto label_2fb9d8;
        case 0x2fb9dcu: goto label_2fb9dc;
        case 0x2fb9e0u: goto label_2fb9e0;
        case 0x2fb9e4u: goto label_2fb9e4;
        case 0x2fb9e8u: goto label_2fb9e8;
        case 0x2fb9ecu: goto label_2fb9ec;
        case 0x2fb9f0u: goto label_2fb9f0;
        case 0x2fb9f4u: goto label_2fb9f4;
        case 0x2fb9f8u: goto label_2fb9f8;
        case 0x2fb9fcu: goto label_2fb9fc;
        case 0x2fba00u: goto label_2fba00;
        case 0x2fba04u: goto label_2fba04;
        case 0x2fba08u: goto label_2fba08;
        case 0x2fba0cu: goto label_2fba0c;
        case 0x2fba10u: goto label_2fba10;
        case 0x2fba14u: goto label_2fba14;
        case 0x2fba18u: goto label_2fba18;
        case 0x2fba1cu: goto label_2fba1c;
        case 0x2fba20u: goto label_2fba20;
        case 0x2fba24u: goto label_2fba24;
        case 0x2fba28u: goto label_2fba28;
        case 0x2fba2cu: goto label_2fba2c;
        case 0x2fba30u: goto label_2fba30;
        case 0x2fba34u: goto label_2fba34;
        case 0x2fba38u: goto label_2fba38;
        case 0x2fba3cu: goto label_2fba3c;
        case 0x2fba40u: goto label_2fba40;
        case 0x2fba44u: goto label_2fba44;
        case 0x2fba48u: goto label_2fba48;
        case 0x2fba4cu: goto label_2fba4c;
        case 0x2fba50u: goto label_2fba50;
        case 0x2fba54u: goto label_2fba54;
        case 0x2fba58u: goto label_2fba58;
        case 0x2fba5cu: goto label_2fba5c;
        case 0x2fba60u: goto label_2fba60;
        case 0x2fba64u: goto label_2fba64;
        case 0x2fba68u: goto label_2fba68;
        case 0x2fba6cu: goto label_2fba6c;
        case 0x2fba70u: goto label_2fba70;
        case 0x2fba74u: goto label_2fba74;
        case 0x2fba78u: goto label_2fba78;
        case 0x2fba7cu: goto label_2fba7c;
        case 0x2fba80u: goto label_2fba80;
        case 0x2fba84u: goto label_2fba84;
        case 0x2fba88u: goto label_2fba88;
        case 0x2fba8cu: goto label_2fba8c;
        case 0x2fba90u: goto label_2fba90;
        case 0x2fba94u: goto label_2fba94;
        case 0x2fba98u: goto label_2fba98;
        case 0x2fba9cu: goto label_2fba9c;
        case 0x2fbaa0u: goto label_2fbaa0;
        case 0x2fbaa4u: goto label_2fbaa4;
        case 0x2fbaa8u: goto label_2fbaa8;
        case 0x2fbaacu: goto label_2fbaac;
        case 0x2fbab0u: goto label_2fbab0;
        case 0x2fbab4u: goto label_2fbab4;
        case 0x2fbab8u: goto label_2fbab8;
        case 0x2fbabcu: goto label_2fbabc;
        case 0x2fbac0u: goto label_2fbac0;
        case 0x2fbac4u: goto label_2fbac4;
        case 0x2fbac8u: goto label_2fbac8;
        case 0x2fbaccu: goto label_2fbacc;
        case 0x2fbad0u: goto label_2fbad0;
        case 0x2fbad4u: goto label_2fbad4;
        case 0x2fbad8u: goto label_2fbad8;
        case 0x2fbadcu: goto label_2fbadc;
        case 0x2fbae0u: goto label_2fbae0;
        case 0x2fbae4u: goto label_2fbae4;
        case 0x2fbae8u: goto label_2fbae8;
        case 0x2fbaecu: goto label_2fbaec;
        case 0x2fbaf0u: goto label_2fbaf0;
        case 0x2fbaf4u: goto label_2fbaf4;
        case 0x2fbaf8u: goto label_2fbaf8;
        case 0x2fbafcu: goto label_2fbafc;
        case 0x2fbb00u: goto label_2fbb00;
        case 0x2fbb04u: goto label_2fbb04;
        case 0x2fbb08u: goto label_2fbb08;
        case 0x2fbb0cu: goto label_2fbb0c;
        case 0x2fbb10u: goto label_2fbb10;
        case 0x2fbb14u: goto label_2fbb14;
        case 0x2fbb18u: goto label_2fbb18;
        case 0x2fbb1cu: goto label_2fbb1c;
        case 0x2fbb20u: goto label_2fbb20;
        case 0x2fbb24u: goto label_2fbb24;
        case 0x2fbb28u: goto label_2fbb28;
        case 0x2fbb2cu: goto label_2fbb2c;
        case 0x2fbb30u: goto label_2fbb30;
        case 0x2fbb34u: goto label_2fbb34;
        case 0x2fbb38u: goto label_2fbb38;
        case 0x2fbb3cu: goto label_2fbb3c;
        case 0x2fbb40u: goto label_2fbb40;
        case 0x2fbb44u: goto label_2fbb44;
        case 0x2fbb48u: goto label_2fbb48;
        case 0x2fbb4cu: goto label_2fbb4c;
        case 0x2fbb50u: goto label_2fbb50;
        case 0x2fbb54u: goto label_2fbb54;
        case 0x2fbb58u: goto label_2fbb58;
        case 0x2fbb5cu: goto label_2fbb5c;
        case 0x2fbb60u: goto label_2fbb60;
        case 0x2fbb64u: goto label_2fbb64;
        case 0x2fbb68u: goto label_2fbb68;
        case 0x2fbb6cu: goto label_2fbb6c;
        case 0x2fbb70u: goto label_2fbb70;
        case 0x2fbb74u: goto label_2fbb74;
        case 0x2fbb78u: goto label_2fbb78;
        case 0x2fbb7cu: goto label_2fbb7c;
        case 0x2fbb80u: goto label_2fbb80;
        case 0x2fbb84u: goto label_2fbb84;
        case 0x2fbb88u: goto label_2fbb88;
        case 0x2fbb8cu: goto label_2fbb8c;
        case 0x2fbb90u: goto label_2fbb90;
        case 0x2fbb94u: goto label_2fbb94;
        case 0x2fbb98u: goto label_2fbb98;
        case 0x2fbb9cu: goto label_2fbb9c;
        case 0x2fbba0u: goto label_2fbba0;
        case 0x2fbba4u: goto label_2fbba4;
        case 0x2fbba8u: goto label_2fbba8;
        case 0x2fbbacu: goto label_2fbbac;
        case 0x2fbbb0u: goto label_2fbbb0;
        case 0x2fbbb4u: goto label_2fbbb4;
        case 0x2fbbb8u: goto label_2fbbb8;
        case 0x2fbbbcu: goto label_2fbbbc;
        case 0x2fbbc0u: goto label_2fbbc0;
        case 0x2fbbc4u: goto label_2fbbc4;
        case 0x2fbbc8u: goto label_2fbbc8;
        case 0x2fbbccu: goto label_2fbbcc;
        case 0x2fbbd0u: goto label_2fbbd0;
        case 0x2fbbd4u: goto label_2fbbd4;
        case 0x2fbbd8u: goto label_2fbbd8;
        case 0x2fbbdcu: goto label_2fbbdc;
        case 0x2fbbe0u: goto label_2fbbe0;
        case 0x2fbbe4u: goto label_2fbbe4;
        case 0x2fbbe8u: goto label_2fbbe8;
        case 0x2fbbecu: goto label_2fbbec;
        case 0x2fbbf0u: goto label_2fbbf0;
        case 0x2fbbf4u: goto label_2fbbf4;
        case 0x2fbbf8u: goto label_2fbbf8;
        case 0x2fbbfcu: goto label_2fbbfc;
        case 0x2fbc00u: goto label_2fbc00;
        case 0x2fbc04u: goto label_2fbc04;
        case 0x2fbc08u: goto label_2fbc08;
        case 0x2fbc0cu: goto label_2fbc0c;
        case 0x2fbc10u: goto label_2fbc10;
        case 0x2fbc14u: goto label_2fbc14;
        case 0x2fbc18u: goto label_2fbc18;
        case 0x2fbc1cu: goto label_2fbc1c;
        case 0x2fbc20u: goto label_2fbc20;
        case 0x2fbc24u: goto label_2fbc24;
        case 0x2fbc28u: goto label_2fbc28;
        case 0x2fbc2cu: goto label_2fbc2c;
        case 0x2fbc30u: goto label_2fbc30;
        case 0x2fbc34u: goto label_2fbc34;
        case 0x2fbc38u: goto label_2fbc38;
        case 0x2fbc3cu: goto label_2fbc3c;
        case 0x2fbc40u: goto label_2fbc40;
        case 0x2fbc44u: goto label_2fbc44;
        case 0x2fbc48u: goto label_2fbc48;
        case 0x2fbc4cu: goto label_2fbc4c;
        case 0x2fbc50u: goto label_2fbc50;
        case 0x2fbc54u: goto label_2fbc54;
        case 0x2fbc58u: goto label_2fbc58;
        case 0x2fbc5cu: goto label_2fbc5c;
        case 0x2fbc60u: goto label_2fbc60;
        case 0x2fbc64u: goto label_2fbc64;
        case 0x2fbc68u: goto label_2fbc68;
        case 0x2fbc6cu: goto label_2fbc6c;
        case 0x2fbc70u: goto label_2fbc70;
        case 0x2fbc74u: goto label_2fbc74;
        case 0x2fbc78u: goto label_2fbc78;
        case 0x2fbc7cu: goto label_2fbc7c;
        case 0x2fbc80u: goto label_2fbc80;
        case 0x2fbc84u: goto label_2fbc84;
        case 0x2fbc88u: goto label_2fbc88;
        case 0x2fbc8cu: goto label_2fbc8c;
        case 0x2fbc90u: goto label_2fbc90;
        case 0x2fbc94u: goto label_2fbc94;
        case 0x2fbc98u: goto label_2fbc98;
        case 0x2fbc9cu: goto label_2fbc9c;
        case 0x2fbca0u: goto label_2fbca0;
        case 0x2fbca4u: goto label_2fbca4;
        case 0x2fbca8u: goto label_2fbca8;
        case 0x2fbcacu: goto label_2fbcac;
        case 0x2fbcb0u: goto label_2fbcb0;
        case 0x2fbcb4u: goto label_2fbcb4;
        case 0x2fbcb8u: goto label_2fbcb8;
        case 0x2fbcbcu: goto label_2fbcbc;
        case 0x2fbcc0u: goto label_2fbcc0;
        case 0x2fbcc4u: goto label_2fbcc4;
        case 0x2fbcc8u: goto label_2fbcc8;
        case 0x2fbcccu: goto label_2fbccc;
        case 0x2fbcd0u: goto label_2fbcd0;
        case 0x2fbcd4u: goto label_2fbcd4;
        case 0x2fbcd8u: goto label_2fbcd8;
        case 0x2fbcdcu: goto label_2fbcdc;
        case 0x2fbce0u: goto label_2fbce0;
        case 0x2fbce4u: goto label_2fbce4;
        case 0x2fbce8u: goto label_2fbce8;
        case 0x2fbcecu: goto label_2fbcec;
        case 0x2fbcf0u: goto label_2fbcf0;
        case 0x2fbcf4u: goto label_2fbcf4;
        case 0x2fbcf8u: goto label_2fbcf8;
        case 0x2fbcfcu: goto label_2fbcfc;
        case 0x2fbd00u: goto label_2fbd00;
        case 0x2fbd04u: goto label_2fbd04;
        case 0x2fbd08u: goto label_2fbd08;
        case 0x2fbd0cu: goto label_2fbd0c;
        case 0x2fbd10u: goto label_2fbd10;
        case 0x2fbd14u: goto label_2fbd14;
        case 0x2fbd18u: goto label_2fbd18;
        case 0x2fbd1cu: goto label_2fbd1c;
        case 0x2fbd20u: goto label_2fbd20;
        case 0x2fbd24u: goto label_2fbd24;
        case 0x2fbd28u: goto label_2fbd28;
        case 0x2fbd2cu: goto label_2fbd2c;
        case 0x2fbd30u: goto label_2fbd30;
        case 0x2fbd34u: goto label_2fbd34;
        case 0x2fbd38u: goto label_2fbd38;
        case 0x2fbd3cu: goto label_2fbd3c;
        case 0x2fbd40u: goto label_2fbd40;
        case 0x2fbd44u: goto label_2fbd44;
        case 0x2fbd48u: goto label_2fbd48;
        case 0x2fbd4cu: goto label_2fbd4c;
        case 0x2fbd50u: goto label_2fbd50;
        case 0x2fbd54u: goto label_2fbd54;
        case 0x2fbd58u: goto label_2fbd58;
        case 0x2fbd5cu: goto label_2fbd5c;
        case 0x2fbd60u: goto label_2fbd60;
        case 0x2fbd64u: goto label_2fbd64;
        case 0x2fbd68u: goto label_2fbd68;
        case 0x2fbd6cu: goto label_2fbd6c;
        case 0x2fbd70u: goto label_2fbd70;
        case 0x2fbd74u: goto label_2fbd74;
        case 0x2fbd78u: goto label_2fbd78;
        case 0x2fbd7cu: goto label_2fbd7c;
        case 0x2fbd80u: goto label_2fbd80;
        case 0x2fbd84u: goto label_2fbd84;
        case 0x2fbd88u: goto label_2fbd88;
        case 0x2fbd8cu: goto label_2fbd8c;
        case 0x2fbd90u: goto label_2fbd90;
        case 0x2fbd94u: goto label_2fbd94;
        case 0x2fbd98u: goto label_2fbd98;
        case 0x2fbd9cu: goto label_2fbd9c;
        case 0x2fbda0u: goto label_2fbda0;
        case 0x2fbda4u: goto label_2fbda4;
        case 0x2fbda8u: goto label_2fbda8;
        case 0x2fbdacu: goto label_2fbdac;
        case 0x2fbdb0u: goto label_2fbdb0;
        case 0x2fbdb4u: goto label_2fbdb4;
        case 0x2fbdb8u: goto label_2fbdb8;
        case 0x2fbdbcu: goto label_2fbdbc;
        case 0x2fbdc0u: goto label_2fbdc0;
        case 0x2fbdc4u: goto label_2fbdc4;
        case 0x2fbdc8u: goto label_2fbdc8;
        case 0x2fbdccu: goto label_2fbdcc;
        case 0x2fbdd0u: goto label_2fbdd0;
        case 0x2fbdd4u: goto label_2fbdd4;
        case 0x2fbdd8u: goto label_2fbdd8;
        case 0x2fbddcu: goto label_2fbddc;
        case 0x2fbde0u: goto label_2fbde0;
        case 0x2fbde4u: goto label_2fbde4;
        case 0x2fbde8u: goto label_2fbde8;
        case 0x2fbdecu: goto label_2fbdec;
        case 0x2fbdf0u: goto label_2fbdf0;
        case 0x2fbdf4u: goto label_2fbdf4;
        case 0x2fbdf8u: goto label_2fbdf8;
        case 0x2fbdfcu: goto label_2fbdfc;
        case 0x2fbe00u: goto label_2fbe00;
        case 0x2fbe04u: goto label_2fbe04;
        case 0x2fbe08u: goto label_2fbe08;
        case 0x2fbe0cu: goto label_2fbe0c;
        case 0x2fbe10u: goto label_2fbe10;
        case 0x2fbe14u: goto label_2fbe14;
        case 0x2fbe18u: goto label_2fbe18;
        case 0x2fbe1cu: goto label_2fbe1c;
        case 0x2fbe20u: goto label_2fbe20;
        case 0x2fbe24u: goto label_2fbe24;
        case 0x2fbe28u: goto label_2fbe28;
        case 0x2fbe2cu: goto label_2fbe2c;
        case 0x2fbe30u: goto label_2fbe30;
        case 0x2fbe34u: goto label_2fbe34;
        case 0x2fbe38u: goto label_2fbe38;
        case 0x2fbe3cu: goto label_2fbe3c;
        case 0x2fbe40u: goto label_2fbe40;
        case 0x2fbe44u: goto label_2fbe44;
        case 0x2fbe48u: goto label_2fbe48;
        case 0x2fbe4cu: goto label_2fbe4c;
        case 0x2fbe50u: goto label_2fbe50;
        case 0x2fbe54u: goto label_2fbe54;
        case 0x2fbe58u: goto label_2fbe58;
        case 0x2fbe5cu: goto label_2fbe5c;
        case 0x2fbe60u: goto label_2fbe60;
        case 0x2fbe64u: goto label_2fbe64;
        case 0x2fbe68u: goto label_2fbe68;
        case 0x2fbe6cu: goto label_2fbe6c;
        case 0x2fbe70u: goto label_2fbe70;
        case 0x2fbe74u: goto label_2fbe74;
        case 0x2fbe78u: goto label_2fbe78;
        case 0x2fbe7cu: goto label_2fbe7c;
        case 0x2fbe80u: goto label_2fbe80;
        case 0x2fbe84u: goto label_2fbe84;
        case 0x2fbe88u: goto label_2fbe88;
        case 0x2fbe8cu: goto label_2fbe8c;
        case 0x2fbe90u: goto label_2fbe90;
        case 0x2fbe94u: goto label_2fbe94;
        case 0x2fbe98u: goto label_2fbe98;
        case 0x2fbe9cu: goto label_2fbe9c;
        case 0x2fbea0u: goto label_2fbea0;
        case 0x2fbea4u: goto label_2fbea4;
        case 0x2fbea8u: goto label_2fbea8;
        case 0x2fbeacu: goto label_2fbeac;
        case 0x2fbeb0u: goto label_2fbeb0;
        case 0x2fbeb4u: goto label_2fbeb4;
        case 0x2fbeb8u: goto label_2fbeb8;
        case 0x2fbebcu: goto label_2fbebc;
        case 0x2fbec0u: goto label_2fbec0;
        case 0x2fbec4u: goto label_2fbec4;
        case 0x2fbec8u: goto label_2fbec8;
        case 0x2fbeccu: goto label_2fbecc;
        case 0x2fbed0u: goto label_2fbed0;
        case 0x2fbed4u: goto label_2fbed4;
        case 0x2fbed8u: goto label_2fbed8;
        case 0x2fbedcu: goto label_2fbedc;
        case 0x2fbee0u: goto label_2fbee0;
        case 0x2fbee4u: goto label_2fbee4;
        case 0x2fbee8u: goto label_2fbee8;
        case 0x2fbeecu: goto label_2fbeec;
        case 0x2fbef0u: goto label_2fbef0;
        case 0x2fbef4u: goto label_2fbef4;
        case 0x2fbef8u: goto label_2fbef8;
        case 0x2fbefcu: goto label_2fbefc;
        case 0x2fbf00u: goto label_2fbf00;
        case 0x2fbf04u: goto label_2fbf04;
        case 0x2fbf08u: goto label_2fbf08;
        case 0x2fbf0cu: goto label_2fbf0c;
        case 0x2fbf10u: goto label_2fbf10;
        case 0x2fbf14u: goto label_2fbf14;
        case 0x2fbf18u: goto label_2fbf18;
        case 0x2fbf1cu: goto label_2fbf1c;
        case 0x2fbf20u: goto label_2fbf20;
        case 0x2fbf24u: goto label_2fbf24;
        case 0x2fbf28u: goto label_2fbf28;
        case 0x2fbf2cu: goto label_2fbf2c;
        case 0x2fbf30u: goto label_2fbf30;
        case 0x2fbf34u: goto label_2fbf34;
        case 0x2fbf38u: goto label_2fbf38;
        case 0x2fbf3cu: goto label_2fbf3c;
        case 0x2fbf40u: goto label_2fbf40;
        case 0x2fbf44u: goto label_2fbf44;
        case 0x2fbf48u: goto label_2fbf48;
        case 0x2fbf4cu: goto label_2fbf4c;
        case 0x2fbf50u: goto label_2fbf50;
        case 0x2fbf54u: goto label_2fbf54;
        case 0x2fbf58u: goto label_2fbf58;
        case 0x2fbf5cu: goto label_2fbf5c;
        case 0x2fbf60u: goto label_2fbf60;
        case 0x2fbf64u: goto label_2fbf64;
        case 0x2fbf68u: goto label_2fbf68;
        case 0x2fbf6cu: goto label_2fbf6c;
        case 0x2fbf70u: goto label_2fbf70;
        case 0x2fbf74u: goto label_2fbf74;
        case 0x2fbf78u: goto label_2fbf78;
        case 0x2fbf7cu: goto label_2fbf7c;
        case 0x2fbf80u: goto label_2fbf80;
        case 0x2fbf84u: goto label_2fbf84;
        case 0x2fbf88u: goto label_2fbf88;
        case 0x2fbf8cu: goto label_2fbf8c;
        case 0x2fbf90u: goto label_2fbf90;
        case 0x2fbf94u: goto label_2fbf94;
        case 0x2fbf98u: goto label_2fbf98;
        case 0x2fbf9cu: goto label_2fbf9c;
        case 0x2fbfa0u: goto label_2fbfa0;
        case 0x2fbfa4u: goto label_2fbfa4;
        case 0x2fbfa8u: goto label_2fbfa8;
        case 0x2fbfacu: goto label_2fbfac;
        case 0x2fbfb0u: goto label_2fbfb0;
        case 0x2fbfb4u: goto label_2fbfb4;
        case 0x2fbfb8u: goto label_2fbfb8;
        case 0x2fbfbcu: goto label_2fbfbc;
        case 0x2fbfc0u: goto label_2fbfc0;
        case 0x2fbfc4u: goto label_2fbfc4;
        case 0x2fbfc8u: goto label_2fbfc8;
        case 0x2fbfccu: goto label_2fbfcc;
        case 0x2fbfd0u: goto label_2fbfd0;
        case 0x2fbfd4u: goto label_2fbfd4;
        case 0x2fbfd8u: goto label_2fbfd8;
        case 0x2fbfdcu: goto label_2fbfdc;
        case 0x2fbfe0u: goto label_2fbfe0;
        case 0x2fbfe4u: goto label_2fbfe4;
        case 0x2fbfe8u: goto label_2fbfe8;
        case 0x2fbfecu: goto label_2fbfec;
        case 0x2fbff0u: goto label_2fbff0;
        case 0x2fbff4u: goto label_2fbff4;
        case 0x2fbff8u: goto label_2fbff8;
        case 0x2fbffcu: goto label_2fbffc;
        case 0x2fc000u: goto label_2fc000;
        case 0x2fc004u: goto label_2fc004;
        case 0x2fc008u: goto label_2fc008;
        case 0x2fc00cu: goto label_2fc00c;
        case 0x2fc010u: goto label_2fc010;
        case 0x2fc014u: goto label_2fc014;
        case 0x2fc018u: goto label_2fc018;
        case 0x2fc01cu: goto label_2fc01c;
        case 0x2fc020u: goto label_2fc020;
        case 0x2fc024u: goto label_2fc024;
        case 0x2fc028u: goto label_2fc028;
        case 0x2fc02cu: goto label_2fc02c;
        case 0x2fc030u: goto label_2fc030;
        case 0x2fc034u: goto label_2fc034;
        case 0x2fc038u: goto label_2fc038;
        case 0x2fc03cu: goto label_2fc03c;
        case 0x2fc040u: goto label_2fc040;
        case 0x2fc044u: goto label_2fc044;
        case 0x2fc048u: goto label_2fc048;
        case 0x2fc04cu: goto label_2fc04c;
        case 0x2fc050u: goto label_2fc050;
        case 0x2fc054u: goto label_2fc054;
        case 0x2fc058u: goto label_2fc058;
        case 0x2fc05cu: goto label_2fc05c;
        case 0x2fc060u: goto label_2fc060;
        case 0x2fc064u: goto label_2fc064;
        case 0x2fc068u: goto label_2fc068;
        case 0x2fc06cu: goto label_2fc06c;
        case 0x2fc070u: goto label_2fc070;
        case 0x2fc074u: goto label_2fc074;
        case 0x2fc078u: goto label_2fc078;
        case 0x2fc07cu: goto label_2fc07c;
        default: break;
    }

    ctx->pc = 0x2f95f0u;

label_2f95f0:
    // 0x2f95f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f95f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2f95f4:
    // 0x2f95f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f95f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f95f8:
    // 0x2f95f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f95f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f95fc:
    // 0x2f95fc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2f95fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f9600:
    // 0x2f9600: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f9600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2f9604:
    // 0x2f9604: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f9604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f9608:
    // 0x2f9608: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f9608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f960c:
    // 0x2f960c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2f960cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9610:
    // 0x2f9610: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f9610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f9614:
    // 0x2f9614: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f9614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f9618:
    // 0x2f9618: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f9618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f961c:
    // 0x2f961c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f9620:
    // 0x2f9620: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x2f9620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2f9624:
    // 0x2f9624: 0xc04a576  jal         func_1295D8
label_2f9628:
    if (ctx->pc == 0x2F9628u) {
        ctx->pc = 0x2F9628u;
            // 0x2f9628: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2F962Cu;
        goto label_2f962c;
    }
    ctx->pc = 0x2F9624u;
    SET_GPR_U32(ctx, 31, 0x2F962Cu);
    ctx->pc = 0x2F9628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9624u;
            // 0x2f9628: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F962Cu; }
        if (ctx->pc != 0x2F962Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F962Cu; }
        if (ctx->pc != 0x2F962Cu) { return; }
    }
    ctx->pc = 0x2F962Cu;
label_2f962c:
    // 0x2f962c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f962cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9630:
    // 0x2f9630: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f9630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9634:
    // 0x2f9634: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2f9634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9638:
    // 0x2f9638: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2f9638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2f963c:
    // 0x2f963c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2f963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2f9640:
    // 0x2f9640: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2f9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2f9644:
    // 0x2f9644: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f9648:
    // 0x2f9648: 0x2c410037  sltiu       $at, $v0, 0x37
    ctx->pc = 0x2f9648u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)55) ? 1 : 0);
label_2f964c:
    // 0x2f964c: 0x10200892  beqz        $at, . + 4 + (0x892 << 2)
label_2f9650:
    if (ctx->pc == 0x2F9650u) {
        ctx->pc = 0x2F9654u;
        goto label_2f9654;
    }
    ctx->pc = 0x2F964Cu;
    {
        const bool branch_taken_0x2f964c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f964c) {
            ctx->pc = 0x2FB898u;
            goto label_2fb898;
        }
    }
    ctx->pc = 0x2F9654u;
label_2f9654:
    // 0x2f9654: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2f9654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2f9658:
    // 0x2f9658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f9658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f965c:
    // 0x2f965c: 0x24632330  addiu       $v1, $v1, 0x2330
    ctx->pc = 0x2f965cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9008));
label_2f9660:
    // 0x2f9660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f9664:
    // 0x2f9664: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f9664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f9668:
    // 0x2f9668: 0x400008  jr          $v0
label_2f966c:
    if (ctx->pc == 0x2F966Cu) {
        ctx->pc = 0x2F9670u;
        goto label_2f9670;
    }
    ctx->pc = 0x2F9668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F9670u: goto label_2f9670;
            case 0x2F96F0u: goto label_2f96f0;
            case 0x2F9770u: goto label_2f9770;
            case 0x2F97F8u: goto label_2f97f8;
            case 0x2F9878u: goto label_2f9878;
            case 0x2F98F8u: goto label_2f98f8;
            case 0x2F9978u: goto label_2f9978;
            case 0x2F99F8u: goto label_2f99f8;
            case 0x2F9A78u: goto label_2f9a78;
            case 0x2F9AF8u: goto label_2f9af8;
            case 0x2F9B78u: goto label_2f9b78;
            case 0x2F9BF8u: goto label_2f9bf8;
            case 0x2F9C80u: goto label_2f9c80;
            case 0x2F9D00u: goto label_2f9d00;
            case 0x2F9D80u: goto label_2f9d80;
            case 0x2F9E00u: goto label_2f9e00;
            case 0x2F9E80u: goto label_2f9e80;
            case 0x2F9F00u: goto label_2f9f00;
            case 0x2F9FA0u: goto label_2f9fa0;
            case 0x2FA020u: goto label_2fa020;
            case 0x2FA0A0u: goto label_2fa0a0;
            case 0x2FA120u: goto label_2fa120;
            case 0x2FA1A0u: goto label_2fa1a0;
            case 0x2FA220u: goto label_2fa220;
            case 0x2FA2A0u: goto label_2fa2a0;
            case 0x2FA320u: goto label_2fa320;
            case 0x2FA3F8u: goto label_2fa3f8;
            case 0x2FA4D0u: goto label_2fa4d0;
            case 0x2FA5A8u: goto label_2fa5a8;
            case 0x2FA680u: goto label_2fa680;
            case 0x2FA758u: goto label_2fa758;
            case 0x2FA830u: goto label_2fa830;
            case 0x2FA910u: goto label_2fa910;
            case 0x2FA9E8u: goto label_2fa9e8;
            case 0x2FAAC0u: goto label_2faac0;
            case 0x2FAB98u: goto label_2fab98;
            case 0x2FAC70u: goto label_2fac70;
            case 0x2FAD48u: goto label_2fad48;
            case 0x2FAE20u: goto label_2fae20;
            case 0x2FAEF8u: goto label_2faef8;
            case 0x2FAFD0u: goto label_2fafd0;
            case 0x2FB0A8u: goto label_2fb0a8;
            case 0x2FB180u: goto label_2fb180;
            case 0x2FB258u: goto label_2fb258;
            case 0x2FB330u: goto label_2fb330;
            case 0x2FB3C0u: goto label_2fb3c0;
            case 0x2FB498u: goto label_2fb498;
            case 0x2FB518u: goto label_2fb518;
            case 0x2FB598u: goto label_2fb598;
            case 0x2FB618u: goto label_2fb618;
            case 0x2FB698u: goto label_2fb698;
            case 0x2FB718u: goto label_2fb718;
            case 0x2FB798u: goto label_2fb798;
            case 0x2FB818u: goto label_2fb818;
            case 0x2FB930u: goto label_2fb930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F9670u;
label_2f9670:
    // 0x2f9670: 0xc040180  jal         func_100600
label_2f9674:
    if (ctx->pc == 0x2F9674u) {
        ctx->pc = 0x2F9674u;
            // 0x2f9674: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2F9678u;
        goto label_2f9678;
    }
    ctx->pc = 0x2F9670u;
    SET_GPR_U32(ctx, 31, 0x2F9678u);
    ctx->pc = 0x2F9674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9670u;
            // 0x2f9674: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9678u; }
        if (ctx->pc != 0x2F9678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9678u; }
        if (ctx->pc != 0x2F9678u) { return; }
    }
    ctx->pc = 0x2F9678u;
label_2f9678:
    // 0x2f9678: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f967c:
    if (ctx->pc == 0x2F967Cu) {
        ctx->pc = 0x2F967Cu;
            // 0x2f967c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9680u;
        goto label_2f9680;
    }
    ctx->pc = 0x2F9678u;
    {
        const bool branch_taken_0x2f9678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F967Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9678u;
            // 0x2f967c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9678) {
            ctx->pc = 0x2F96E8u;
            goto label_2f96e8;
        }
    }
    ctx->pc = 0x2F9680u;
label_2f9680:
    // 0x2f9680: 0xc0bd73c  jal         func_2F5CF0
label_2f9684:
    if (ctx->pc == 0x2F9684u) {
        ctx->pc = 0x2F9684u;
            // 0x2f9684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9688u;
        goto label_2f9688;
    }
    ctx->pc = 0x2F9680u;
    SET_GPR_U32(ctx, 31, 0x2F9688u);
    ctx->pc = 0x2F9684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9680u;
            // 0x2f9684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9688u; }
        if (ctx->pc != 0x2F9688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9688u; }
        if (ctx->pc != 0x2F9688u) { return; }
    }
    ctx->pc = 0x2F9688u;
label_2f9688:
    // 0x2f9688: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f968c:
    // 0x2f968c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9690:
    // 0x2f9690: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9694:
    // 0x2f9694: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9698:
    // 0x2f9698: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f969c:
    // 0x2f969c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f969cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f96a0:
    // 0x2f96a0: 0xc0bd73c  jal         func_2F5CF0
label_2f96a4:
    if (ctx->pc == 0x2F96A4u) {
        ctx->pc = 0x2F96A4u;
            // 0x2f96a4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F96A8u;
        goto label_2f96a8;
    }
    ctx->pc = 0x2F96A0u;
    SET_GPR_U32(ctx, 31, 0x2F96A8u);
    ctx->pc = 0x2F96A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96A0u;
            // 0x2f96a4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F96A8u; }
        if (ctx->pc != 0x2F96A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F96A8u; }
        if (ctx->pc != 0x2F96A8u) { return; }
    }
    ctx->pc = 0x2F96A8u;
label_2f96a8:
    // 0x2f96a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f96ac:
    // 0x2f96ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f96acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f96b0:
    // 0x2f96b0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f96b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f96b4:
    // 0x2f96b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f96b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f96b8:
    // 0x2f96b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f96b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f96bc:
    // 0x2f96bc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f96c0:
    // 0x2f96c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f96c4:
    // 0x2f96c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f96c8:
    // 0x2f96c8: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f96cc:
    // 0x2f96cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f96ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f96d0:
    // 0x2f96d0: 0xc0bf210  jal         func_2FC840
label_2f96d4:
    if (ctx->pc == 0x2F96D4u) {
        ctx->pc = 0x2F96D4u;
            // 0x2f96d4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F96D8u;
        goto label_2f96d8;
    }
    ctx->pc = 0x2F96D0u;
    SET_GPR_U32(ctx, 31, 0x2F96D8u);
    ctx->pc = 0x2F96D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96D0u;
            // 0x2f96d4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F96D8u; }
        if (ctx->pc != 0x2F96D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F96D8u; }
        if (ctx->pc != 0x2F96D8u) { return; }
    }
    ctx->pc = 0x2F96D8u;
label_2f96d8:
    // 0x2f96d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f96dc:
    // 0x2f96dc: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x2f96dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
label_2f96e0:
    // 0x2f96e0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f96e4:
    // 0x2f96e4: 0x0  nop
    ctx->pc = 0x2f96e4u;
    // NOP
label_2f96e8:
    // 0x2f96e8: 0x1000088b  b           . + 4 + (0x88B << 2)
label_2f96ec:
    if (ctx->pc == 0x2F96ECu) {
        ctx->pc = 0x2F96ECu;
            // 0x2f96ec: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F96F0u;
        goto label_2f96f0;
    }
    ctx->pc = 0x2F96E8u;
    {
        const bool branch_taken_0x2f96e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F96ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96E8u;
            // 0x2f96ec: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96e8) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F96F0u;
label_2f96f0:
    // 0x2f96f0: 0xc040180  jal         func_100600
label_2f96f4:
    if (ctx->pc == 0x2F96F4u) {
        ctx->pc = 0x2F96F4u;
            // 0x2f96f4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2F96F8u;
        goto label_2f96f8;
    }
    ctx->pc = 0x2F96F0u;
    SET_GPR_U32(ctx, 31, 0x2F96F8u);
    ctx->pc = 0x2F96F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96F0u;
            // 0x2f96f4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F96F8u; }
        if (ctx->pc != 0x2F96F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F96F8u; }
        if (ctx->pc != 0x2F96F8u) { return; }
    }
    ctx->pc = 0x2F96F8u;
label_2f96f8:
    // 0x2f96f8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f96fc:
    if (ctx->pc == 0x2F96FCu) {
        ctx->pc = 0x2F96FCu;
            // 0x2f96fc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9700u;
        goto label_2f9700;
    }
    ctx->pc = 0x2F96F8u;
    {
        const bool branch_taken_0x2f96f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F96FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96F8u;
            // 0x2f96fc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96f8) {
            ctx->pc = 0x2F9768u;
            goto label_2f9768;
        }
    }
    ctx->pc = 0x2F9700u;
label_2f9700:
    // 0x2f9700: 0xc0bd73c  jal         func_2F5CF0
label_2f9704:
    if (ctx->pc == 0x2F9704u) {
        ctx->pc = 0x2F9704u;
            // 0x2f9704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9708u;
        goto label_2f9708;
    }
    ctx->pc = 0x2F9700u;
    SET_GPR_U32(ctx, 31, 0x2F9708u);
    ctx->pc = 0x2F9704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9700u;
            // 0x2f9704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9708u; }
        if (ctx->pc != 0x2F9708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9708u; }
        if (ctx->pc != 0x2F9708u) { return; }
    }
    ctx->pc = 0x2F9708u;
label_2f9708:
    // 0x2f9708: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f970c:
    // 0x2f970c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f970cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9710:
    // 0x2f9710: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9714:
    // 0x2f9714: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9718:
    // 0x2f9718: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f971c:
    // 0x2f971c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f971cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9720:
    // 0x2f9720: 0xc0bd73c  jal         func_2F5CF0
label_2f9724:
    if (ctx->pc == 0x2F9724u) {
        ctx->pc = 0x2F9724u;
            // 0x2f9724: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9728u;
        goto label_2f9728;
    }
    ctx->pc = 0x2F9720u;
    SET_GPR_U32(ctx, 31, 0x2F9728u);
    ctx->pc = 0x2F9724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9720u;
            // 0x2f9724: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9728u; }
        if (ctx->pc != 0x2F9728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9728u; }
        if (ctx->pc != 0x2F9728u) { return; }
    }
    ctx->pc = 0x2F9728u;
label_2f9728:
    // 0x2f9728: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f972c:
    // 0x2f972c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f972cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9730:
    // 0x2f9730: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9734:
    // 0x2f9734: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9738:
    // 0x2f9738: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f973c:
    // 0x2f973c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f973cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9740:
    // 0x2f9740: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9744:
    // 0x2f9744: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9748:
    // 0x2f9748: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f974c:
    // 0x2f974c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f974cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9750:
    // 0x2f9750: 0xc0bf210  jal         func_2FC840
label_2f9754:
    if (ctx->pc == 0x2F9754u) {
        ctx->pc = 0x2F9754u;
            // 0x2f9754: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9758u;
        goto label_2f9758;
    }
    ctx->pc = 0x2F9750u;
    SET_GPR_U32(ctx, 31, 0x2F9758u);
    ctx->pc = 0x2F9754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9750u;
            // 0x2f9754: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9758u; }
        if (ctx->pc != 0x2F9758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9758u; }
        if (ctx->pc != 0x2F9758u) { return; }
    }
    ctx->pc = 0x2F9758u;
label_2f9758:
    // 0x2f9758: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f975c:
    // 0x2f975c: 0x24423c20  addiu       $v0, $v0, 0x3C20
    ctx->pc = 0x2f975cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15392));
label_2f9760:
    // 0x2f9760: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9760u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f9764:
    // 0x2f9764: 0x0  nop
    ctx->pc = 0x2f9764u;
    // NOP
label_2f9768:
    // 0x2f9768: 0x1000086b  b           . + 4 + (0x86B << 2)
label_2f976c:
    if (ctx->pc == 0x2F976Cu) {
        ctx->pc = 0x2F976Cu;
            // 0x2f976c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9770u;
        goto label_2f9770;
    }
    ctx->pc = 0x2F9768u;
    {
        const bool branch_taken_0x2f9768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9768u;
            // 0x2f976c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9768) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9770u;
label_2f9770:
    // 0x2f9770: 0xc040180  jal         func_100600
label_2f9774:
    if (ctx->pc == 0x2F9774u) {
        ctx->pc = 0x2F9774u;
            // 0x2f9774: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x2F9778u;
        goto label_2f9778;
    }
    ctx->pc = 0x2F9770u;
    SET_GPR_U32(ctx, 31, 0x2F9778u);
    ctx->pc = 0x2F9774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9770u;
            // 0x2f9774: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9778u; }
        if (ctx->pc != 0x2F9778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9778u; }
        if (ctx->pc != 0x2F9778u) { return; }
    }
    ctx->pc = 0x2F9778u;
label_2f9778:
    // 0x2f9778: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2f977c:
    if (ctx->pc == 0x2F977Cu) {
        ctx->pc = 0x2F977Cu;
            // 0x2f977c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9780u;
        goto label_2f9780;
    }
    ctx->pc = 0x2F9778u;
    {
        const bool branch_taken_0x2f9778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9778u;
            // 0x2f977c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9778) {
            ctx->pc = 0x2F97F0u;
            goto label_2f97f0;
        }
    }
    ctx->pc = 0x2F9780u;
label_2f9780:
    // 0x2f9780: 0xc0bd73c  jal         func_2F5CF0
label_2f9784:
    if (ctx->pc == 0x2F9784u) {
        ctx->pc = 0x2F9784u;
            // 0x2f9784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9788u;
        goto label_2f9788;
    }
    ctx->pc = 0x2F9780u;
    SET_GPR_U32(ctx, 31, 0x2F9788u);
    ctx->pc = 0x2F9784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9780u;
            // 0x2f9784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9788u; }
        if (ctx->pc != 0x2F9788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9788u; }
        if (ctx->pc != 0x2F9788u) { return; }
    }
    ctx->pc = 0x2F9788u;
label_2f9788:
    // 0x2f9788: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f978c:
    // 0x2f978c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f978cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9790:
    // 0x2f9790: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9794:
    // 0x2f9794: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9798:
    // 0x2f9798: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f979c:
    // 0x2f979c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f979cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f97a0:
    // 0x2f97a0: 0xc0bd73c  jal         func_2F5CF0
label_2f97a4:
    if (ctx->pc == 0x2F97A4u) {
        ctx->pc = 0x2F97A4u;
            // 0x2f97a4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F97A8u;
        goto label_2f97a8;
    }
    ctx->pc = 0x2F97A0u;
    SET_GPR_U32(ctx, 31, 0x2F97A8u);
    ctx->pc = 0x2F97A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97A0u;
            // 0x2f97a4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F97A8u; }
        if (ctx->pc != 0x2F97A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F97A8u; }
        if (ctx->pc != 0x2F97A8u) { return; }
    }
    ctx->pc = 0x2F97A8u;
label_2f97a8:
    // 0x2f97a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f97a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f97ac:
    // 0x2f97ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f97acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f97b0:
    // 0x2f97b0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f97b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f97b4:
    // 0x2f97b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f97b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f97b8:
    // 0x2f97b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f97b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f97bc:
    // 0x2f97bc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f97c0:
    // 0x2f97c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f97c4:
    // 0x2f97c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f97c8:
    // 0x2f97c8: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f97cc:
    // 0x2f97cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f97d0:
    // 0x2f97d0: 0xc0bf210  jal         func_2FC840
label_2f97d4:
    if (ctx->pc == 0x2F97D4u) {
        ctx->pc = 0x2F97D4u;
            // 0x2f97d4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F97D8u;
        goto label_2f97d8;
    }
    ctx->pc = 0x2F97D0u;
    SET_GPR_U32(ctx, 31, 0x2F97D8u);
    ctx->pc = 0x2F97D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97D0u;
            // 0x2f97d4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F97D8u; }
        if (ctx->pc != 0x2F97D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F97D8u; }
        if (ctx->pc != 0x2F97D8u) { return; }
    }
    ctx->pc = 0x2F97D8u;
label_2f97d8:
    // 0x2f97d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f97dc:
    // 0x2f97dc: 0x244253c0  addiu       $v0, $v0, 0x53C0
    ctx->pc = 0x2f97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21440));
label_2f97e0:
    // 0x2f97e0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f97e4:
    // 0x2f97e4: 0xae800080  sw          $zero, 0x80($s4)
    ctx->pc = 0x2f97e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 0));
label_2f97e8:
    // 0x2f97e8: 0xae800084  sw          $zero, 0x84($s4)
    ctx->pc = 0x2f97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 0));
label_2f97ec:
    // 0x2f97ec: 0x0  nop
    ctx->pc = 0x2f97ecu;
    // NOP
label_2f97f0:
    // 0x2f97f0: 0x10000849  b           . + 4 + (0x849 << 2)
label_2f97f4:
    if (ctx->pc == 0x2F97F4u) {
        ctx->pc = 0x2F97F4u;
            // 0x2f97f4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F97F8u;
        goto label_2f97f8;
    }
    ctx->pc = 0x2F97F0u;
    {
        const bool branch_taken_0x2f97f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F97F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97F0u;
            // 0x2f97f4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97f0) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F97F8u;
label_2f97f8:
    // 0x2f97f8: 0xc040180  jal         func_100600
label_2f97fc:
    if (ctx->pc == 0x2F97FCu) {
        ctx->pc = 0x2F97FCu;
            // 0x2f97fc: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x2F9800u;
        goto label_2f9800;
    }
    ctx->pc = 0x2F97F8u;
    SET_GPR_U32(ctx, 31, 0x2F9800u);
    ctx->pc = 0x2F97FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97F8u;
            // 0x2f97fc: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9800u; }
        if (ctx->pc != 0x2F9800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9800u; }
        if (ctx->pc != 0x2F9800u) { return; }
    }
    ctx->pc = 0x2F9800u;
label_2f9800:
    // 0x2f9800: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9804:
    if (ctx->pc == 0x2F9804u) {
        ctx->pc = 0x2F9804u;
            // 0x2f9804: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9808u;
        goto label_2f9808;
    }
    ctx->pc = 0x2F9800u;
    {
        const bool branch_taken_0x2f9800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9800u;
            // 0x2f9804: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9800) {
            ctx->pc = 0x2F9870u;
            goto label_2f9870;
        }
    }
    ctx->pc = 0x2F9808u;
label_2f9808:
    // 0x2f9808: 0xc0bd73c  jal         func_2F5CF0
label_2f980c:
    if (ctx->pc == 0x2F980Cu) {
        ctx->pc = 0x2F980Cu;
            // 0x2f980c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9810u;
        goto label_2f9810;
    }
    ctx->pc = 0x2F9808u;
    SET_GPR_U32(ctx, 31, 0x2F9810u);
    ctx->pc = 0x2F980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9808u;
            // 0x2f980c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9810u; }
        if (ctx->pc != 0x2F9810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9810u; }
        if (ctx->pc != 0x2F9810u) { return; }
    }
    ctx->pc = 0x2F9810u;
label_2f9810:
    // 0x2f9810: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9814:
    // 0x2f9814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9818:
    // 0x2f9818: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f981c:
    // 0x2f981c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f981cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9820:
    // 0x2f9820: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9824:
    // 0x2f9824: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9828:
    // 0x2f9828: 0xc0bd73c  jal         func_2F5CF0
label_2f982c:
    if (ctx->pc == 0x2F982Cu) {
        ctx->pc = 0x2F982Cu;
            // 0x2f982c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9830u;
        goto label_2f9830;
    }
    ctx->pc = 0x2F9828u;
    SET_GPR_U32(ctx, 31, 0x2F9830u);
    ctx->pc = 0x2F982Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9828u;
            // 0x2f982c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9830u; }
        if (ctx->pc != 0x2F9830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9830u; }
        if (ctx->pc != 0x2F9830u) { return; }
    }
    ctx->pc = 0x2F9830u;
label_2f9830:
    // 0x2f9830: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9834:
    // 0x2f9834: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9838:
    // 0x2f9838: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f983c:
    // 0x2f983c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9840:
    // 0x2f9840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9844:
    // 0x2f9844: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9848:
    // 0x2f9848: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f984c:
    // 0x2f984c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9850:
    // 0x2f9850: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9854:
    // 0x2f9854: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9858:
    // 0x2f9858: 0xc0bf210  jal         func_2FC840
label_2f985c:
    if (ctx->pc == 0x2F985Cu) {
        ctx->pc = 0x2F985Cu;
            // 0x2f985c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9860u;
        goto label_2f9860;
    }
    ctx->pc = 0x2F9858u;
    SET_GPR_U32(ctx, 31, 0x2F9860u);
    ctx->pc = 0x2F985Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9858u;
            // 0x2f985c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9860u; }
        if (ctx->pc != 0x2F9860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9860u; }
        if (ctx->pc != 0x2F9860u) { return; }
    }
    ctx->pc = 0x2F9860u;
label_2f9860:
    // 0x2f9860: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9864:
    // 0x2f9864: 0x24425340  addiu       $v0, $v0, 0x5340
    ctx->pc = 0x2f9864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21312));
label_2f9868:
    // 0x2f9868: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9868u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f986c:
    // 0x2f986c: 0xae800080  sw          $zero, 0x80($s4)
    ctx->pc = 0x2f986cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 0));
label_2f9870:
    // 0x2f9870: 0x10000829  b           . + 4 + (0x829 << 2)
label_2f9874:
    if (ctx->pc == 0x2F9874u) {
        ctx->pc = 0x2F9874u;
            // 0x2f9874: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9878u;
        goto label_2f9878;
    }
    ctx->pc = 0x2F9870u;
    {
        const bool branch_taken_0x2f9870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9870u;
            // 0x2f9874: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9870) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9878u;
label_2f9878:
    // 0x2f9878: 0xc040180  jal         func_100600
label_2f987c:
    if (ctx->pc == 0x2F987Cu) {
        ctx->pc = 0x2F987Cu;
            // 0x2f987c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2F9880u;
        goto label_2f9880;
    }
    ctx->pc = 0x2F9878u;
    SET_GPR_U32(ctx, 31, 0x2F9880u);
    ctx->pc = 0x2F987Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9878u;
            // 0x2f987c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9880u; }
        if (ctx->pc != 0x2F9880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9880u; }
        if (ctx->pc != 0x2F9880u) { return; }
    }
    ctx->pc = 0x2F9880u;
label_2f9880:
    // 0x2f9880: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9884:
    if (ctx->pc == 0x2F9884u) {
        ctx->pc = 0x2F9884u;
            // 0x2f9884: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9888u;
        goto label_2f9888;
    }
    ctx->pc = 0x2F9880u;
    {
        const bool branch_taken_0x2f9880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9880u;
            // 0x2f9884: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9880) {
            ctx->pc = 0x2F98F0u;
            goto label_2f98f0;
        }
    }
    ctx->pc = 0x2F9888u;
label_2f9888:
    // 0x2f9888: 0xc0bd73c  jal         func_2F5CF0
label_2f988c:
    if (ctx->pc == 0x2F988Cu) {
        ctx->pc = 0x2F988Cu;
            // 0x2f988c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9890u;
        goto label_2f9890;
    }
    ctx->pc = 0x2F9888u;
    SET_GPR_U32(ctx, 31, 0x2F9890u);
    ctx->pc = 0x2F988Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9888u;
            // 0x2f988c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9890u; }
        if (ctx->pc != 0x2F9890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9890u; }
        if (ctx->pc != 0x2F9890u) { return; }
    }
    ctx->pc = 0x2F9890u;
label_2f9890:
    // 0x2f9890: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9894:
    // 0x2f9894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9898:
    // 0x2f9898: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f989c:
    // 0x2f989c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f989cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f98a0:
    // 0x2f98a0: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f98a4:
    // 0x2f98a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f98a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f98a8:
    // 0x2f98a8: 0xc0bd73c  jal         func_2F5CF0
label_2f98ac:
    if (ctx->pc == 0x2F98ACu) {
        ctx->pc = 0x2F98ACu;
            // 0x2f98ac: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F98B0u;
        goto label_2f98b0;
    }
    ctx->pc = 0x2F98A8u;
    SET_GPR_U32(ctx, 31, 0x2F98B0u);
    ctx->pc = 0x2F98ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98A8u;
            // 0x2f98ac: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98B0u; }
        if (ctx->pc != 0x2F98B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98B0u; }
        if (ctx->pc != 0x2F98B0u) { return; }
    }
    ctx->pc = 0x2F98B0u;
label_2f98b0:
    // 0x2f98b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f98b4:
    // 0x2f98b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f98b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f98b8:
    // 0x2f98b8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f98b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f98bc:
    // 0x2f98bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f98bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f98c0:
    // 0x2f98c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f98c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f98c4:
    // 0x2f98c4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f98c8:
    // 0x2f98c8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f98cc:
    // 0x2f98cc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f98d0:
    // 0x2f98d0: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f98d4:
    // 0x2f98d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f98d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f98d8:
    // 0x2f98d8: 0xc0bf210  jal         func_2FC840
label_2f98dc:
    if (ctx->pc == 0x2F98DCu) {
        ctx->pc = 0x2F98DCu;
            // 0x2f98dc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F98E0u;
        goto label_2f98e0;
    }
    ctx->pc = 0x2F98D8u;
    SET_GPR_U32(ctx, 31, 0x2F98E0u);
    ctx->pc = 0x2F98DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98D8u;
            // 0x2f98dc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98E0u; }
        if (ctx->pc != 0x2F98E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98E0u; }
        if (ctx->pc != 0x2F98E0u) { return; }
    }
    ctx->pc = 0x2F98E0u;
label_2f98e0:
    // 0x2f98e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f98e4:
    // 0x2f98e4: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x2f98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
label_2f98e8:
    // 0x2f98e8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f98e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f98ec:
    // 0x2f98ec: 0x0  nop
    ctx->pc = 0x2f98ecu;
    // NOP
label_2f98f0:
    // 0x2f98f0: 0x10000809  b           . + 4 + (0x809 << 2)
label_2f98f4:
    if (ctx->pc == 0x2F98F4u) {
        ctx->pc = 0x2F98F4u;
            // 0x2f98f4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F98F8u;
        goto label_2f98f8;
    }
    ctx->pc = 0x2F98F0u;
    {
        const bool branch_taken_0x2f98f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F98F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98F0u;
            // 0x2f98f4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f98f0) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F98F8u;
label_2f98f8:
    // 0x2f98f8: 0xc040180  jal         func_100600
label_2f98fc:
    if (ctx->pc == 0x2F98FCu) {
        ctx->pc = 0x2F98FCu;
            // 0x2f98fc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2F9900u;
        goto label_2f9900;
    }
    ctx->pc = 0x2F98F8u;
    SET_GPR_U32(ctx, 31, 0x2F9900u);
    ctx->pc = 0x2F98FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98F8u;
            // 0x2f98fc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9900u; }
        if (ctx->pc != 0x2F9900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9900u; }
        if (ctx->pc != 0x2F9900u) { return; }
    }
    ctx->pc = 0x2F9900u;
label_2f9900:
    // 0x2f9900: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9904:
    if (ctx->pc == 0x2F9904u) {
        ctx->pc = 0x2F9904u;
            // 0x2f9904: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9908u;
        goto label_2f9908;
    }
    ctx->pc = 0x2F9900u;
    {
        const bool branch_taken_0x2f9900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9900u;
            // 0x2f9904: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9900) {
            ctx->pc = 0x2F9970u;
            goto label_2f9970;
        }
    }
    ctx->pc = 0x2F9908u;
label_2f9908:
    // 0x2f9908: 0xc0bd73c  jal         func_2F5CF0
label_2f990c:
    if (ctx->pc == 0x2F990Cu) {
        ctx->pc = 0x2F990Cu;
            // 0x2f990c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9910u;
        goto label_2f9910;
    }
    ctx->pc = 0x2F9908u;
    SET_GPR_U32(ctx, 31, 0x2F9910u);
    ctx->pc = 0x2F990Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9908u;
            // 0x2f990c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9910u; }
        if (ctx->pc != 0x2F9910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9910u; }
        if (ctx->pc != 0x2F9910u) { return; }
    }
    ctx->pc = 0x2F9910u;
label_2f9910:
    // 0x2f9910: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9914:
    // 0x2f9914: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9918:
    // 0x2f9918: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f991c:
    // 0x2f991c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f991cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9920:
    // 0x2f9920: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9924:
    // 0x2f9924: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9928:
    // 0x2f9928: 0xc0bd73c  jal         func_2F5CF0
label_2f992c:
    if (ctx->pc == 0x2F992Cu) {
        ctx->pc = 0x2F992Cu;
            // 0x2f992c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9930u;
        goto label_2f9930;
    }
    ctx->pc = 0x2F9928u;
    SET_GPR_U32(ctx, 31, 0x2F9930u);
    ctx->pc = 0x2F992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9928u;
            // 0x2f992c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9930u; }
        if (ctx->pc != 0x2F9930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9930u; }
        if (ctx->pc != 0x2F9930u) { return; }
    }
    ctx->pc = 0x2F9930u;
label_2f9930:
    // 0x2f9930: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9934:
    // 0x2f9934: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9938:
    // 0x2f9938: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f993c:
    // 0x2f993c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9940:
    // 0x2f9940: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9944:
    // 0x2f9944: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9948:
    // 0x2f9948: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f994c:
    // 0x2f994c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9950:
    // 0x2f9950: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9954:
    // 0x2f9954: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9958:
    // 0x2f9958: 0xc0bf210  jal         func_2FC840
label_2f995c:
    if (ctx->pc == 0x2F995Cu) {
        ctx->pc = 0x2F995Cu;
            // 0x2f995c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9960u;
        goto label_2f9960;
    }
    ctx->pc = 0x2F9958u;
    SET_GPR_U32(ctx, 31, 0x2F9960u);
    ctx->pc = 0x2F995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9958u;
            // 0x2f995c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9960u; }
        if (ctx->pc != 0x2F9960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9960u; }
        if (ctx->pc != 0x2F9960u) { return; }
    }
    ctx->pc = 0x2F9960u;
label_2f9960:
    // 0x2f9960: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9964:
    // 0x2f9964: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x2f9964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
label_2f9968:
    // 0x2f9968: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9968u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f996c:
    // 0x2f996c: 0x0  nop
    ctx->pc = 0x2f996cu;
    // NOP
label_2f9970:
    // 0x2f9970: 0x100007e9  b           . + 4 + (0x7E9 << 2)
label_2f9974:
    if (ctx->pc == 0x2F9974u) {
        ctx->pc = 0x2F9974u;
            // 0x2f9974: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9978u;
        goto label_2f9978;
    }
    ctx->pc = 0x2F9970u;
    {
        const bool branch_taken_0x2f9970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9970u;
            // 0x2f9974: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9970) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9978u;
label_2f9978:
    // 0x2f9978: 0xc040180  jal         func_100600
label_2f997c:
    if (ctx->pc == 0x2F997Cu) {
        ctx->pc = 0x2F997Cu;
            // 0x2f997c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2F9980u;
        goto label_2f9980;
    }
    ctx->pc = 0x2F9978u;
    SET_GPR_U32(ctx, 31, 0x2F9980u);
    ctx->pc = 0x2F997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9978u;
            // 0x2f997c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9980u; }
        if (ctx->pc != 0x2F9980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9980u; }
        if (ctx->pc != 0x2F9980u) { return; }
    }
    ctx->pc = 0x2F9980u;
label_2f9980:
    // 0x2f9980: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9984:
    if (ctx->pc == 0x2F9984u) {
        ctx->pc = 0x2F9984u;
            // 0x2f9984: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9988u;
        goto label_2f9988;
    }
    ctx->pc = 0x2F9980u;
    {
        const bool branch_taken_0x2f9980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9980u;
            // 0x2f9984: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9980) {
            ctx->pc = 0x2F99F0u;
            goto label_2f99f0;
        }
    }
    ctx->pc = 0x2F9988u;
label_2f9988:
    // 0x2f9988: 0xc0bd73c  jal         func_2F5CF0
label_2f998c:
    if (ctx->pc == 0x2F998Cu) {
        ctx->pc = 0x2F998Cu;
            // 0x2f998c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9990u;
        goto label_2f9990;
    }
    ctx->pc = 0x2F9988u;
    SET_GPR_U32(ctx, 31, 0x2F9990u);
    ctx->pc = 0x2F998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9988u;
            // 0x2f998c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9990u; }
        if (ctx->pc != 0x2F9990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9990u; }
        if (ctx->pc != 0x2F9990u) { return; }
    }
    ctx->pc = 0x2F9990u;
label_2f9990:
    // 0x2f9990: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9994:
    // 0x2f9994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9998:
    // 0x2f9998: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f999c:
    // 0x2f999c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f99a0:
    // 0x2f99a0: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f99a4:
    // 0x2f99a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f99a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f99a8:
    // 0x2f99a8: 0xc0bd73c  jal         func_2F5CF0
label_2f99ac:
    if (ctx->pc == 0x2F99ACu) {
        ctx->pc = 0x2F99ACu;
            // 0x2f99ac: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F99B0u;
        goto label_2f99b0;
    }
    ctx->pc = 0x2F99A8u;
    SET_GPR_U32(ctx, 31, 0x2F99B0u);
    ctx->pc = 0x2F99ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F99A8u;
            // 0x2f99ac: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F99B0u; }
        if (ctx->pc != 0x2F99B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F99B0u; }
        if (ctx->pc != 0x2F99B0u) { return; }
    }
    ctx->pc = 0x2F99B0u;
label_2f99b0:
    // 0x2f99b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f99b4:
    // 0x2f99b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f99b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f99b8:
    // 0x2f99b8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f99b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f99bc:
    // 0x2f99bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f99bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f99c0:
    // 0x2f99c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f99c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f99c4:
    // 0x2f99c4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f99c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f99c8:
    // 0x2f99c8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f99cc:
    // 0x2f99cc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f99ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f99d0:
    // 0x2f99d0: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f99d4:
    // 0x2f99d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f99d8:
    // 0x2f99d8: 0xc0bf210  jal         func_2FC840
label_2f99dc:
    if (ctx->pc == 0x2F99DCu) {
        ctx->pc = 0x2F99DCu;
            // 0x2f99dc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F99E0u;
        goto label_2f99e0;
    }
    ctx->pc = 0x2F99D8u;
    SET_GPR_U32(ctx, 31, 0x2F99E0u);
    ctx->pc = 0x2F99DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F99D8u;
            // 0x2f99dc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F99E0u; }
        if (ctx->pc != 0x2F99E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F99E0u; }
        if (ctx->pc != 0x2F99E0u) { return; }
    }
    ctx->pc = 0x2F99E0u;
label_2f99e0:
    // 0x2f99e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f99e4:
    // 0x2f99e4: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x2f99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
label_2f99e8:
    // 0x2f99e8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f99e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f99ec:
    // 0x2f99ec: 0x0  nop
    ctx->pc = 0x2f99ecu;
    // NOP
label_2f99f0:
    // 0x2f99f0: 0x100007c9  b           . + 4 + (0x7C9 << 2)
label_2f99f4:
    if (ctx->pc == 0x2F99F4u) {
        ctx->pc = 0x2F99F4u;
            // 0x2f99f4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F99F8u;
        goto label_2f99f8;
    }
    ctx->pc = 0x2F99F0u;
    {
        const bool branch_taken_0x2f99f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F99F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F99F0u;
            // 0x2f99f4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99f0) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F99F8u;
label_2f99f8:
    // 0x2f99f8: 0xc040180  jal         func_100600
label_2f99fc:
    if (ctx->pc == 0x2F99FCu) {
        ctx->pc = 0x2F99FCu;
            // 0x2f99fc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2F9A00u;
        goto label_2f9a00;
    }
    ctx->pc = 0x2F99F8u;
    SET_GPR_U32(ctx, 31, 0x2F9A00u);
    ctx->pc = 0x2F99FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F99F8u;
            // 0x2f99fc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A00u; }
        if (ctx->pc != 0x2F9A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A00u; }
        if (ctx->pc != 0x2F9A00u) { return; }
    }
    ctx->pc = 0x2F9A00u;
label_2f9a00:
    // 0x2f9a00: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9a04:
    if (ctx->pc == 0x2F9A04u) {
        ctx->pc = 0x2F9A04u;
            // 0x2f9a04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A08u;
        goto label_2f9a08;
    }
    ctx->pc = 0x2F9A00u;
    {
        const bool branch_taken_0x2f9a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A00u;
            // 0x2f9a04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a00) {
            ctx->pc = 0x2F9A70u;
            goto label_2f9a70;
        }
    }
    ctx->pc = 0x2F9A08u;
label_2f9a08:
    // 0x2f9a08: 0xc0bd73c  jal         func_2F5CF0
label_2f9a0c:
    if (ctx->pc == 0x2F9A0Cu) {
        ctx->pc = 0x2F9A0Cu;
            // 0x2f9a0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A10u;
        goto label_2f9a10;
    }
    ctx->pc = 0x2F9A08u;
    SET_GPR_U32(ctx, 31, 0x2F9A10u);
    ctx->pc = 0x2F9A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A08u;
            // 0x2f9a0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A10u; }
        if (ctx->pc != 0x2F9A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A10u; }
        if (ctx->pc != 0x2F9A10u) { return; }
    }
    ctx->pc = 0x2F9A10u;
label_2f9a10:
    // 0x2f9a10: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9a14:
    // 0x2f9a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a18:
    // 0x2f9a18: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9a1c:
    // 0x2f9a1c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9a20:
    // 0x2f9a20: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9a24:
    // 0x2f9a24: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9a28:
    // 0x2f9a28: 0xc0bd73c  jal         func_2F5CF0
label_2f9a2c:
    if (ctx->pc == 0x2F9A2Cu) {
        ctx->pc = 0x2F9A2Cu;
            // 0x2f9a2c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9A30u;
        goto label_2f9a30;
    }
    ctx->pc = 0x2F9A28u;
    SET_GPR_U32(ctx, 31, 0x2F9A30u);
    ctx->pc = 0x2F9A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A28u;
            // 0x2f9a2c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A30u; }
        if (ctx->pc != 0x2F9A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A30u; }
        if (ctx->pc != 0x2F9A30u) { return; }
    }
    ctx->pc = 0x2F9A30u;
label_2f9a30:
    // 0x2f9a30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9a34:
    // 0x2f9a34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a38:
    // 0x2f9a38: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9a38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9a3c:
    // 0x2f9a3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a40:
    // 0x2f9a40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a44:
    // 0x2f9a44: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9a48:
    // 0x2f9a48: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9a4c:
    // 0x2f9a4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9a50:
    // 0x2f9a50: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9a54:
    // 0x2f9a54: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9a58:
    // 0x2f9a58: 0xc0bf210  jal         func_2FC840
label_2f9a5c:
    if (ctx->pc == 0x2F9A5Cu) {
        ctx->pc = 0x2F9A5Cu;
            // 0x2f9a5c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9A60u;
        goto label_2f9a60;
    }
    ctx->pc = 0x2F9A58u;
    SET_GPR_U32(ctx, 31, 0x2F9A60u);
    ctx->pc = 0x2F9A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A58u;
            // 0x2f9a5c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A60u; }
        if (ctx->pc != 0x2F9A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A60u; }
        if (ctx->pc != 0x2F9A60u) { return; }
    }
    ctx->pc = 0x2F9A60u;
label_2f9a60:
    // 0x2f9a60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9a64:
    // 0x2f9a64: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x2f9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
label_2f9a68:
    // 0x2f9a68: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f9a6c:
    // 0x2f9a6c: 0x0  nop
    ctx->pc = 0x2f9a6cu;
    // NOP
label_2f9a70:
    // 0x2f9a70: 0x100007a9  b           . + 4 + (0x7A9 << 2)
label_2f9a74:
    if (ctx->pc == 0x2F9A74u) {
        ctx->pc = 0x2F9A74u;
            // 0x2f9a74: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9A78u;
        goto label_2f9a78;
    }
    ctx->pc = 0x2F9A70u;
    {
        const bool branch_taken_0x2f9a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A70u;
            // 0x2f9a74: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a70) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9A78u;
label_2f9a78:
    // 0x2f9a78: 0xc040180  jal         func_100600
label_2f9a7c:
    if (ctx->pc == 0x2F9A7Cu) {
        ctx->pc = 0x2F9A7Cu;
            // 0x2f9a7c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2F9A80u;
        goto label_2f9a80;
    }
    ctx->pc = 0x2F9A78u;
    SET_GPR_U32(ctx, 31, 0x2F9A80u);
    ctx->pc = 0x2F9A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A78u;
            // 0x2f9a7c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A80u; }
        if (ctx->pc != 0x2F9A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A80u; }
        if (ctx->pc != 0x2F9A80u) { return; }
    }
    ctx->pc = 0x2F9A80u;
label_2f9a80:
    // 0x2f9a80: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9a84:
    if (ctx->pc == 0x2F9A84u) {
        ctx->pc = 0x2F9A84u;
            // 0x2f9a84: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A88u;
        goto label_2f9a88;
    }
    ctx->pc = 0x2F9A80u;
    {
        const bool branch_taken_0x2f9a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A80u;
            // 0x2f9a84: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a80) {
            ctx->pc = 0x2F9AF0u;
            goto label_2f9af0;
        }
    }
    ctx->pc = 0x2F9A88u;
label_2f9a88:
    // 0x2f9a88: 0xc0bd73c  jal         func_2F5CF0
label_2f9a8c:
    if (ctx->pc == 0x2F9A8Cu) {
        ctx->pc = 0x2F9A8Cu;
            // 0x2f9a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A90u;
        goto label_2f9a90;
    }
    ctx->pc = 0x2F9A88u;
    SET_GPR_U32(ctx, 31, 0x2F9A90u);
    ctx->pc = 0x2F9A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A88u;
            // 0x2f9a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A90u; }
        if (ctx->pc != 0x2F9A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A90u; }
        if (ctx->pc != 0x2F9A90u) { return; }
    }
    ctx->pc = 0x2F9A90u;
label_2f9a90:
    // 0x2f9a90: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9a94:
    // 0x2f9a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a98:
    // 0x2f9a98: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9a9c:
    // 0x2f9a9c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9aa0:
    // 0x2f9aa0: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9aa4:
    // 0x2f9aa4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9aa8:
    // 0x2f9aa8: 0xc0bd73c  jal         func_2F5CF0
label_2f9aac:
    if (ctx->pc == 0x2F9AACu) {
        ctx->pc = 0x2F9AACu;
            // 0x2f9aac: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9AB0u;
        goto label_2f9ab0;
    }
    ctx->pc = 0x2F9AA8u;
    SET_GPR_U32(ctx, 31, 0x2F9AB0u);
    ctx->pc = 0x2F9AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9AA8u;
            // 0x2f9aac: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9AB0u; }
        if (ctx->pc != 0x2F9AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9AB0u; }
        if (ctx->pc != 0x2F9AB0u) { return; }
    }
    ctx->pc = 0x2F9AB0u;
label_2f9ab0:
    // 0x2f9ab0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9ab4:
    // 0x2f9ab4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ab8:
    // 0x2f9ab8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9abc:
    // 0x2f9abc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ac0:
    // 0x2f9ac0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ac4:
    // 0x2f9ac4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9ac8:
    // 0x2f9ac8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9acc:
    // 0x2f9acc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9ad0:
    // 0x2f9ad0: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9ad4:
    // 0x2f9ad4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9ad8:
    // 0x2f9ad8: 0xc0bf210  jal         func_2FC840
label_2f9adc:
    if (ctx->pc == 0x2F9ADCu) {
        ctx->pc = 0x2F9ADCu;
            // 0x2f9adc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9AE0u;
        goto label_2f9ae0;
    }
    ctx->pc = 0x2F9AD8u;
    SET_GPR_U32(ctx, 31, 0x2F9AE0u);
    ctx->pc = 0x2F9ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9AD8u;
            // 0x2f9adc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9AE0u; }
        if (ctx->pc != 0x2F9AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9AE0u; }
        if (ctx->pc != 0x2F9AE0u) { return; }
    }
    ctx->pc = 0x2F9AE0u;
label_2f9ae0:
    // 0x2f9ae0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9ae4:
    // 0x2f9ae4: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x2f9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
label_2f9ae8:
    // 0x2f9ae8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f9aec:
    // 0x2f9aec: 0x0  nop
    ctx->pc = 0x2f9aecu;
    // NOP
label_2f9af0:
    // 0x2f9af0: 0x10000789  b           . + 4 + (0x789 << 2)
label_2f9af4:
    if (ctx->pc == 0x2F9AF4u) {
        ctx->pc = 0x2F9AF4u;
            // 0x2f9af4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9AF8u;
        goto label_2f9af8;
    }
    ctx->pc = 0x2F9AF0u;
    {
        const bool branch_taken_0x2f9af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9AF0u;
            // 0x2f9af4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9af0) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9AF8u;
label_2f9af8:
    // 0x2f9af8: 0xc040180  jal         func_100600
label_2f9afc:
    if (ctx->pc == 0x2F9AFCu) {
        ctx->pc = 0x2F9AFCu;
            // 0x2f9afc: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x2F9B00u;
        goto label_2f9b00;
    }
    ctx->pc = 0x2F9AF8u;
    SET_GPR_U32(ctx, 31, 0x2F9B00u);
    ctx->pc = 0x2F9AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9AF8u;
            // 0x2f9afc: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B00u; }
        if (ctx->pc != 0x2F9B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B00u; }
        if (ctx->pc != 0x2F9B00u) { return; }
    }
    ctx->pc = 0x2F9B00u;
label_2f9b00:
    // 0x2f9b00: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9b04:
    if (ctx->pc == 0x2F9B04u) {
        ctx->pc = 0x2F9B04u;
            // 0x2f9b04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B08u;
        goto label_2f9b08;
    }
    ctx->pc = 0x2F9B00u;
    {
        const bool branch_taken_0x2f9b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B00u;
            // 0x2f9b04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b00) {
            ctx->pc = 0x2F9B70u;
            goto label_2f9b70;
        }
    }
    ctx->pc = 0x2F9B08u;
label_2f9b08:
    // 0x2f9b08: 0xc0bd73c  jal         func_2F5CF0
label_2f9b0c:
    if (ctx->pc == 0x2F9B0Cu) {
        ctx->pc = 0x2F9B0Cu;
            // 0x2f9b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B10u;
        goto label_2f9b10;
    }
    ctx->pc = 0x2F9B08u;
    SET_GPR_U32(ctx, 31, 0x2F9B10u);
    ctx->pc = 0x2F9B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B08u;
            // 0x2f9b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B10u; }
        if (ctx->pc != 0x2F9B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B10u; }
        if (ctx->pc != 0x2F9B10u) { return; }
    }
    ctx->pc = 0x2F9B10u;
label_2f9b10:
    // 0x2f9b10: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9b14:
    // 0x2f9b14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b18:
    // 0x2f9b18: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9b1c:
    // 0x2f9b1c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9b20:
    // 0x2f9b20: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9b24:
    // 0x2f9b24: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9b28:
    // 0x2f9b28: 0xc0bd73c  jal         func_2F5CF0
label_2f9b2c:
    if (ctx->pc == 0x2F9B2Cu) {
        ctx->pc = 0x2F9B2Cu;
            // 0x2f9b2c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9B30u;
        goto label_2f9b30;
    }
    ctx->pc = 0x2F9B28u;
    SET_GPR_U32(ctx, 31, 0x2F9B30u);
    ctx->pc = 0x2F9B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B28u;
            // 0x2f9b2c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B30u; }
        if (ctx->pc != 0x2F9B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B30u; }
        if (ctx->pc != 0x2F9B30u) { return; }
    }
    ctx->pc = 0x2F9B30u;
label_2f9b30:
    // 0x2f9b30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9b34:
    // 0x2f9b34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b38:
    // 0x2f9b38: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9b38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9b3c:
    // 0x2f9b3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b40:
    // 0x2f9b40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b44:
    // 0x2f9b44: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9b48:
    // 0x2f9b48: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9b4c:
    // 0x2f9b4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9b50:
    // 0x2f9b50: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9b54:
    // 0x2f9b54: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9b58:
    // 0x2f9b58: 0xc0bf1e0  jal         func_2FC780
label_2f9b5c:
    if (ctx->pc == 0x2F9B5Cu) {
        ctx->pc = 0x2F9B5Cu;
            // 0x2f9b5c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9B60u;
        goto label_2f9b60;
    }
    ctx->pc = 0x2F9B58u;
    SET_GPR_U32(ctx, 31, 0x2F9B60u);
    ctx->pc = 0x2F9B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B58u;
            // 0x2f9b5c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC780u;
    if (runtime->hasFunction(0x2FC780u)) {
        auto targetFn = runtime->lookupFunction(0x2FC780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B60u; }
        if (ctx->pc != 0x2F9B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC780_0x2fc780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B60u; }
        if (ctx->pc != 0x2F9B60u) { return; }
    }
    ctx->pc = 0x2F9B60u;
label_2f9b60:
    // 0x2f9b60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9b64:
    // 0x2f9b64: 0x24423ba0  addiu       $v0, $v0, 0x3BA0
    ctx->pc = 0x2f9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
label_2f9b68:
    // 0x2f9b68: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9b68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f9b6c:
    // 0x2f9b6c: 0x0  nop
    ctx->pc = 0x2f9b6cu;
    // NOP
label_2f9b70:
    // 0x2f9b70: 0x10000769  b           . + 4 + (0x769 << 2)
label_2f9b74:
    if (ctx->pc == 0x2F9B74u) {
        ctx->pc = 0x2F9B74u;
            // 0x2f9b74: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9B78u;
        goto label_2f9b78;
    }
    ctx->pc = 0x2F9B70u;
    {
        const bool branch_taken_0x2f9b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B70u;
            // 0x2f9b74: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b70) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9B78u;
label_2f9b78:
    // 0x2f9b78: 0xc040180  jal         func_100600
label_2f9b7c:
    if (ctx->pc == 0x2F9B7Cu) {
        ctx->pc = 0x2F9B7Cu;
            // 0x2f9b7c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x2F9B80u;
        goto label_2f9b80;
    }
    ctx->pc = 0x2F9B78u;
    SET_GPR_U32(ctx, 31, 0x2F9B80u);
    ctx->pc = 0x2F9B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B78u;
            // 0x2f9b7c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B80u; }
        if (ctx->pc != 0x2F9B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B80u; }
        if (ctx->pc != 0x2F9B80u) { return; }
    }
    ctx->pc = 0x2F9B80u;
label_2f9b80:
    // 0x2f9b80: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9b84:
    if (ctx->pc == 0x2F9B84u) {
        ctx->pc = 0x2F9B84u;
            // 0x2f9b84: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B88u;
        goto label_2f9b88;
    }
    ctx->pc = 0x2F9B80u;
    {
        const bool branch_taken_0x2f9b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B80u;
            // 0x2f9b84: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b80) {
            ctx->pc = 0x2F9BF0u;
            goto label_2f9bf0;
        }
    }
    ctx->pc = 0x2F9B88u;
label_2f9b88:
    // 0x2f9b88: 0xc0bd73c  jal         func_2F5CF0
label_2f9b8c:
    if (ctx->pc == 0x2F9B8Cu) {
        ctx->pc = 0x2F9B8Cu;
            // 0x2f9b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B90u;
        goto label_2f9b90;
    }
    ctx->pc = 0x2F9B88u;
    SET_GPR_U32(ctx, 31, 0x2F9B90u);
    ctx->pc = 0x2F9B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9B88u;
            // 0x2f9b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B90u; }
        if (ctx->pc != 0x2F9B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9B90u; }
        if (ctx->pc != 0x2F9B90u) { return; }
    }
    ctx->pc = 0x2F9B90u;
label_2f9b90:
    // 0x2f9b90: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9b94:
    // 0x2f9b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9b98:
    // 0x2f9b98: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9b9c:
    // 0x2f9b9c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9ba0:
    // 0x2f9ba0: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9ba4:
    // 0x2f9ba4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9ba8:
    // 0x2f9ba8: 0xc0bd73c  jal         func_2F5CF0
label_2f9bac:
    if (ctx->pc == 0x2F9BACu) {
        ctx->pc = 0x2F9BACu;
            // 0x2f9bac: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9BB0u;
        goto label_2f9bb0;
    }
    ctx->pc = 0x2F9BA8u;
    SET_GPR_U32(ctx, 31, 0x2F9BB0u);
    ctx->pc = 0x2F9BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9BA8u;
            // 0x2f9bac: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9BB0u; }
        if (ctx->pc != 0x2F9BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9BB0u; }
        if (ctx->pc != 0x2F9BB0u) { return; }
    }
    ctx->pc = 0x2F9BB0u;
label_2f9bb0:
    // 0x2f9bb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9bb4:
    // 0x2f9bb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9bb8:
    // 0x2f9bb8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9bbc:
    // 0x2f9bbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9bc0:
    // 0x2f9bc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9bc4:
    // 0x2f9bc4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9bc8:
    // 0x2f9bc8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9bcc:
    // 0x2f9bcc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9bd0:
    // 0x2f9bd0: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9bd4:
    // 0x2f9bd4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9bd8:
    // 0x2f9bd8: 0xc0bf1e0  jal         func_2FC780
label_2f9bdc:
    if (ctx->pc == 0x2F9BDCu) {
        ctx->pc = 0x2F9BDCu;
            // 0x2f9bdc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9BE0u;
        goto label_2f9be0;
    }
    ctx->pc = 0x2F9BD8u;
    SET_GPR_U32(ctx, 31, 0x2F9BE0u);
    ctx->pc = 0x2F9BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9BD8u;
            // 0x2f9bdc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC780u;
    if (runtime->hasFunction(0x2FC780u)) {
        auto targetFn = runtime->lookupFunction(0x2FC780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9BE0u; }
        if (ctx->pc != 0x2F9BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC780_0x2fc780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9BE0u; }
        if (ctx->pc != 0x2F9BE0u) { return; }
    }
    ctx->pc = 0x2F9BE0u;
label_2f9be0:
    // 0x2f9be0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9be4:
    // 0x2f9be4: 0x24423b20  addiu       $v0, $v0, 0x3B20
    ctx->pc = 0x2f9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15136));
label_2f9be8:
    // 0x2f9be8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9be8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f9bec:
    // 0x2f9bec: 0x0  nop
    ctx->pc = 0x2f9becu;
    // NOP
label_2f9bf0:
    // 0x2f9bf0: 0x10000749  b           . + 4 + (0x749 << 2)
label_2f9bf4:
    if (ctx->pc == 0x2F9BF4u) {
        ctx->pc = 0x2F9BF4u;
            // 0x2f9bf4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9BF8u;
        goto label_2f9bf8;
    }
    ctx->pc = 0x2F9BF0u;
    {
        const bool branch_taken_0x2f9bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9BF0u;
            // 0x2f9bf4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bf0) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9BF8u;
label_2f9bf8:
    // 0x2f9bf8: 0xc040180  jal         func_100600
label_2f9bfc:
    if (ctx->pc == 0x2F9BFCu) {
        ctx->pc = 0x2F9BFCu;
            // 0x2f9bfc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2F9C00u;
        goto label_2f9c00;
    }
    ctx->pc = 0x2F9BF8u;
    SET_GPR_U32(ctx, 31, 0x2F9C00u);
    ctx->pc = 0x2F9BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9BF8u;
            // 0x2f9bfc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C00u; }
        if (ctx->pc != 0x2F9C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C00u; }
        if (ctx->pc != 0x2F9C00u) { return; }
    }
    ctx->pc = 0x2F9C00u;
label_2f9c00:
    // 0x2f9c00: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2f9c04:
    if (ctx->pc == 0x2F9C04u) {
        ctx->pc = 0x2F9C04u;
            // 0x2f9c04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C08u;
        goto label_2f9c08;
    }
    ctx->pc = 0x2F9C00u;
    {
        const bool branch_taken_0x2f9c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C00u;
            // 0x2f9c04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c00) {
            ctx->pc = 0x2F9C78u;
            goto label_2f9c78;
        }
    }
    ctx->pc = 0x2F9C08u;
label_2f9c08:
    // 0x2f9c08: 0xc0bd73c  jal         func_2F5CF0
label_2f9c0c:
    if (ctx->pc == 0x2F9C0Cu) {
        ctx->pc = 0x2F9C0Cu;
            // 0x2f9c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C10u;
        goto label_2f9c10;
    }
    ctx->pc = 0x2F9C08u;
    SET_GPR_U32(ctx, 31, 0x2F9C10u);
    ctx->pc = 0x2F9C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C08u;
            // 0x2f9c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C10u; }
        if (ctx->pc != 0x2F9C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C10u; }
        if (ctx->pc != 0x2F9C10u) { return; }
    }
    ctx->pc = 0x2F9C10u;
label_2f9c10:
    // 0x2f9c10: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9c14:
    // 0x2f9c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9c18:
    // 0x2f9c18: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9c1c:
    // 0x2f9c1c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9c20:
    // 0x2f9c20: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9c24:
    // 0x2f9c24: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9c28:
    // 0x2f9c28: 0xc0bd73c  jal         func_2F5CF0
label_2f9c2c:
    if (ctx->pc == 0x2F9C2Cu) {
        ctx->pc = 0x2F9C2Cu;
            // 0x2f9c2c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9C30u;
        goto label_2f9c30;
    }
    ctx->pc = 0x2F9C28u;
    SET_GPR_U32(ctx, 31, 0x2F9C30u);
    ctx->pc = 0x2F9C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C28u;
            // 0x2f9c2c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C30u; }
        if (ctx->pc != 0x2F9C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C30u; }
        if (ctx->pc != 0x2F9C30u) { return; }
    }
    ctx->pc = 0x2F9C30u;
label_2f9c30:
    // 0x2f9c30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9c34:
    // 0x2f9c34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9c38:
    // 0x2f9c38: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9c3c:
    // 0x2f9c3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9c40:
    // 0x2f9c40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9c44:
    // 0x2f9c44: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9c48:
    // 0x2f9c48: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9c4c:
    // 0x2f9c4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9c50:
    // 0x2f9c50: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9c54:
    // 0x2f9c54: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9c58:
    // 0x2f9c58: 0xc0bf1e0  jal         func_2FC780
label_2f9c5c:
    if (ctx->pc == 0x2F9C5Cu) {
        ctx->pc = 0x2F9C5Cu;
            // 0x2f9c5c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9C60u;
        goto label_2f9c60;
    }
    ctx->pc = 0x2F9C58u;
    SET_GPR_U32(ctx, 31, 0x2F9C60u);
    ctx->pc = 0x2F9C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C58u;
            // 0x2f9c5c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC780u;
    if (runtime->hasFunction(0x2FC780u)) {
        auto targetFn = runtime->lookupFunction(0x2FC780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C60u; }
        if (ctx->pc != 0x2F9C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC780_0x2fc780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C60u; }
        if (ctx->pc != 0x2F9C60u) { return; }
    }
    ctx->pc = 0x2F9C60u;
label_2f9c60:
    // 0x2f9c60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2f9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2f9c64:
    // 0x2f9c64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f9c68:
    // 0x2f9c68: 0x246352c0  addiu       $v1, $v1, 0x52C0
    ctx->pc = 0x2f9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21184));
label_2f9c6c:
    // 0x2f9c6c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2f9c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_2f9c70:
    // 0x2f9c70: 0xa2820070  sb          $v0, 0x70($s4)
    ctx->pc = 0x2f9c70u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 2));
label_2f9c74:
    // 0x2f9c74: 0x0  nop
    ctx->pc = 0x2f9c74u;
    // NOP
label_2f9c78:
    // 0x2f9c78: 0x10000727  b           . + 4 + (0x727 << 2)
label_2f9c7c:
    if (ctx->pc == 0x2F9C7Cu) {
        ctx->pc = 0x2F9C7Cu;
            // 0x2f9c7c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9C80u;
        goto label_2f9c80;
    }
    ctx->pc = 0x2F9C78u;
    {
        const bool branch_taken_0x2f9c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C78u;
            // 0x2f9c7c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c78) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9C80u;
label_2f9c80:
    // 0x2f9c80: 0xc040180  jal         func_100600
label_2f9c84:
    if (ctx->pc == 0x2F9C84u) {
        ctx->pc = 0x2F9C84u;
            // 0x2f9c84: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x2F9C88u;
        goto label_2f9c88;
    }
    ctx->pc = 0x2F9C80u;
    SET_GPR_U32(ctx, 31, 0x2F9C88u);
    ctx->pc = 0x2F9C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C80u;
            // 0x2f9c84: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C88u; }
        if (ctx->pc != 0x2F9C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C88u; }
        if (ctx->pc != 0x2F9C88u) { return; }
    }
    ctx->pc = 0x2F9C88u;
label_2f9c88:
    // 0x2f9c88: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9c8c:
    if (ctx->pc == 0x2F9C8Cu) {
        ctx->pc = 0x2F9C8Cu;
            // 0x2f9c8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C90u;
        goto label_2f9c90;
    }
    ctx->pc = 0x2F9C88u;
    {
        const bool branch_taken_0x2f9c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C88u;
            // 0x2f9c8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c88) {
            ctx->pc = 0x2F9CF8u;
            goto label_2f9cf8;
        }
    }
    ctx->pc = 0x2F9C90u;
label_2f9c90:
    // 0x2f9c90: 0xc0bd73c  jal         func_2F5CF0
label_2f9c94:
    if (ctx->pc == 0x2F9C94u) {
        ctx->pc = 0x2F9C94u;
            // 0x2f9c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C98u;
        goto label_2f9c98;
    }
    ctx->pc = 0x2F9C90u;
    SET_GPR_U32(ctx, 31, 0x2F9C98u);
    ctx->pc = 0x2F9C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9C90u;
            // 0x2f9c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C98u; }
        if (ctx->pc != 0x2F9C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9C98u; }
        if (ctx->pc != 0x2F9C98u) { return; }
    }
    ctx->pc = 0x2F9C98u;
label_2f9c98:
    // 0x2f9c98: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9c9c:
    // 0x2f9c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ca0:
    // 0x2f9ca0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9ca4:
    // 0x2f9ca4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9ca8:
    // 0x2f9ca8: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9cac:
    // 0x2f9cac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9cb0:
    // 0x2f9cb0: 0xc0bd73c  jal         func_2F5CF0
label_2f9cb4:
    if (ctx->pc == 0x2F9CB4u) {
        ctx->pc = 0x2F9CB4u;
            // 0x2f9cb4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9CB8u;
        goto label_2f9cb8;
    }
    ctx->pc = 0x2F9CB0u;
    SET_GPR_U32(ctx, 31, 0x2F9CB8u);
    ctx->pc = 0x2F9CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9CB0u;
            // 0x2f9cb4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9CB8u; }
        if (ctx->pc != 0x2F9CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9CB8u; }
        if (ctx->pc != 0x2F9CB8u) { return; }
    }
    ctx->pc = 0x2F9CB8u;
label_2f9cb8:
    // 0x2f9cb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9cbc:
    // 0x2f9cbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9cc0:
    // 0x2f9cc0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9cc4:
    // 0x2f9cc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9cc8:
    // 0x2f9cc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ccc:
    // 0x2f9ccc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9cd0:
    // 0x2f9cd0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9cd4:
    // 0x2f9cd4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9cd8:
    // 0x2f9cd8: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9cdc:
    // 0x2f9cdc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9ce0:
    // 0x2f9ce0: 0xc0bf1e0  jal         func_2FC780
label_2f9ce4:
    if (ctx->pc == 0x2F9CE4u) {
        ctx->pc = 0x2F9CE4u;
            // 0x2f9ce4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9CE8u;
        goto label_2f9ce8;
    }
    ctx->pc = 0x2F9CE0u;
    SET_GPR_U32(ctx, 31, 0x2F9CE8u);
    ctx->pc = 0x2F9CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9CE0u;
            // 0x2f9ce4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC780u;
    if (runtime->hasFunction(0x2FC780u)) {
        auto targetFn = runtime->lookupFunction(0x2FC780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9CE8u; }
        if (ctx->pc != 0x2F9CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC780_0x2fc780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9CE8u; }
        if (ctx->pc != 0x2F9CE8u) { return; }
    }
    ctx->pc = 0x2F9CE8u;
label_2f9ce8:
    // 0x2f9ce8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9cec:
    // 0x2f9cec: 0x24423ba0  addiu       $v0, $v0, 0x3BA0
    ctx->pc = 0x2f9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
label_2f9cf0:
    // 0x2f9cf0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f9cf4:
    // 0x2f9cf4: 0x0  nop
    ctx->pc = 0x2f9cf4u;
    // NOP
label_2f9cf8:
    // 0x2f9cf8: 0x10000707  b           . + 4 + (0x707 << 2)
label_2f9cfc:
    if (ctx->pc == 0x2F9CFCu) {
        ctx->pc = 0x2F9CFCu;
            // 0x2f9cfc: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9D00u;
        goto label_2f9d00;
    }
    ctx->pc = 0x2F9CF8u;
    {
        const bool branch_taken_0x2f9cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9CF8u;
            // 0x2f9cfc: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9cf8) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9D00u;
label_2f9d00:
    // 0x2f9d00: 0xc040180  jal         func_100600
label_2f9d04:
    if (ctx->pc == 0x2F9D04u) {
        ctx->pc = 0x2F9D04u;
            // 0x2f9d04: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x2F9D08u;
        goto label_2f9d08;
    }
    ctx->pc = 0x2F9D00u;
    SET_GPR_U32(ctx, 31, 0x2F9D08u);
    ctx->pc = 0x2F9D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D00u;
            // 0x2f9d04: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D08u; }
        if (ctx->pc != 0x2F9D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D08u; }
        if (ctx->pc != 0x2F9D08u) { return; }
    }
    ctx->pc = 0x2F9D08u;
label_2f9d08:
    // 0x2f9d08: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9d0c:
    if (ctx->pc == 0x2F9D0Cu) {
        ctx->pc = 0x2F9D0Cu;
            // 0x2f9d0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D10u;
        goto label_2f9d10;
    }
    ctx->pc = 0x2F9D08u;
    {
        const bool branch_taken_0x2f9d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D08u;
            // 0x2f9d0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d08) {
            ctx->pc = 0x2F9D78u;
            goto label_2f9d78;
        }
    }
    ctx->pc = 0x2F9D10u;
label_2f9d10:
    // 0x2f9d10: 0xc0bd73c  jal         func_2F5CF0
label_2f9d14:
    if (ctx->pc == 0x2F9D14u) {
        ctx->pc = 0x2F9D14u;
            // 0x2f9d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D18u;
        goto label_2f9d18;
    }
    ctx->pc = 0x2F9D10u;
    SET_GPR_U32(ctx, 31, 0x2F9D18u);
    ctx->pc = 0x2F9D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D10u;
            // 0x2f9d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D18u; }
        if (ctx->pc != 0x2F9D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D18u; }
        if (ctx->pc != 0x2F9D18u) { return; }
    }
    ctx->pc = 0x2F9D18u;
label_2f9d18:
    // 0x2f9d18: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9d1c:
    // 0x2f9d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9d20:
    // 0x2f9d20: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9d24:
    // 0x2f9d24: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9d28:
    // 0x2f9d28: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9d2c:
    // 0x2f9d2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9d30:
    // 0x2f9d30: 0xc0bd73c  jal         func_2F5CF0
label_2f9d34:
    if (ctx->pc == 0x2F9D34u) {
        ctx->pc = 0x2F9D34u;
            // 0x2f9d34: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9D38u;
        goto label_2f9d38;
    }
    ctx->pc = 0x2F9D30u;
    SET_GPR_U32(ctx, 31, 0x2F9D38u);
    ctx->pc = 0x2F9D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D30u;
            // 0x2f9d34: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D38u; }
        if (ctx->pc != 0x2F9D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D38u; }
        if (ctx->pc != 0x2F9D38u) { return; }
    }
    ctx->pc = 0x2F9D38u;
label_2f9d38:
    // 0x2f9d38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9d3c:
    // 0x2f9d3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9d40:
    // 0x2f9d40: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9d44:
    // 0x2f9d44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9d48:
    // 0x2f9d48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9d4c:
    // 0x2f9d4c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9d50:
    // 0x2f9d50: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9d54:
    // 0x2f9d54: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9d58:
    // 0x2f9d58: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9d5c:
    // 0x2f9d5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9d60:
    // 0x2f9d60: 0xc0bf1e0  jal         func_2FC780
label_2f9d64:
    if (ctx->pc == 0x2F9D64u) {
        ctx->pc = 0x2F9D64u;
            // 0x2f9d64: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9D68u;
        goto label_2f9d68;
    }
    ctx->pc = 0x2F9D60u;
    SET_GPR_U32(ctx, 31, 0x2F9D68u);
    ctx->pc = 0x2F9D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D60u;
            // 0x2f9d64: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC780u;
    if (runtime->hasFunction(0x2FC780u)) {
        auto targetFn = runtime->lookupFunction(0x2FC780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D68u; }
        if (ctx->pc != 0x2F9D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC780_0x2fc780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D68u; }
        if (ctx->pc != 0x2F9D68u) { return; }
    }
    ctx->pc = 0x2F9D68u;
label_2f9d68:
    // 0x2f9d68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9d6c:
    // 0x2f9d6c: 0x24423ba0  addiu       $v0, $v0, 0x3BA0
    ctx->pc = 0x2f9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
label_2f9d70:
    // 0x2f9d70: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f9d74:
    // 0x2f9d74: 0x0  nop
    ctx->pc = 0x2f9d74u;
    // NOP
label_2f9d78:
    // 0x2f9d78: 0x100006e7  b           . + 4 + (0x6E7 << 2)
label_2f9d7c:
    if (ctx->pc == 0x2F9D7Cu) {
        ctx->pc = 0x2F9D7Cu;
            // 0x2f9d7c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9D80u;
        goto label_2f9d80;
    }
    ctx->pc = 0x2F9D78u;
    {
        const bool branch_taken_0x2f9d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D78u;
            // 0x2f9d7c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d78) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9D80u;
label_2f9d80:
    // 0x2f9d80: 0xc040180  jal         func_100600
label_2f9d84:
    if (ctx->pc == 0x2F9D84u) {
        ctx->pc = 0x2F9D84u;
            // 0x2f9d84: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x2F9D88u;
        goto label_2f9d88;
    }
    ctx->pc = 0x2F9D80u;
    SET_GPR_U32(ctx, 31, 0x2F9D88u);
    ctx->pc = 0x2F9D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D80u;
            // 0x2f9d84: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D88u; }
        if (ctx->pc != 0x2F9D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D88u; }
        if (ctx->pc != 0x2F9D88u) { return; }
    }
    ctx->pc = 0x2F9D88u;
label_2f9d88:
    // 0x2f9d88: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9d8c:
    if (ctx->pc == 0x2F9D8Cu) {
        ctx->pc = 0x2F9D8Cu;
            // 0x2f9d8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D90u;
        goto label_2f9d90;
    }
    ctx->pc = 0x2F9D88u;
    {
        const bool branch_taken_0x2f9d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D88u;
            // 0x2f9d8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d88) {
            ctx->pc = 0x2F9DF8u;
            goto label_2f9df8;
        }
    }
    ctx->pc = 0x2F9D90u;
label_2f9d90:
    // 0x2f9d90: 0xc0bd73c  jal         func_2F5CF0
label_2f9d94:
    if (ctx->pc == 0x2F9D94u) {
        ctx->pc = 0x2F9D94u;
            // 0x2f9d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D98u;
        goto label_2f9d98;
    }
    ctx->pc = 0x2F9D90u;
    SET_GPR_U32(ctx, 31, 0x2F9D98u);
    ctx->pc = 0x2F9D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D90u;
            // 0x2f9d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D98u; }
        if (ctx->pc != 0x2F9D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D98u; }
        if (ctx->pc != 0x2F9D98u) { return; }
    }
    ctx->pc = 0x2F9D98u;
label_2f9d98:
    // 0x2f9d98: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9d9c:
    // 0x2f9d9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9da0:
    // 0x2f9da0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9da4:
    // 0x2f9da4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9da8:
    // 0x2f9da8: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9dac:
    // 0x2f9dac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9db0:
    // 0x2f9db0: 0xc0bd73c  jal         func_2F5CF0
label_2f9db4:
    if (ctx->pc == 0x2F9DB4u) {
        ctx->pc = 0x2F9DB4u;
            // 0x2f9db4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9DB8u;
        goto label_2f9db8;
    }
    ctx->pc = 0x2F9DB0u;
    SET_GPR_U32(ctx, 31, 0x2F9DB8u);
    ctx->pc = 0x2F9DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9DB0u;
            // 0x2f9db4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9DB8u; }
        if (ctx->pc != 0x2F9DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9DB8u; }
        if (ctx->pc != 0x2F9DB8u) { return; }
    }
    ctx->pc = 0x2F9DB8u;
label_2f9db8:
    // 0x2f9db8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9dbc:
    // 0x2f9dbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9dc0:
    // 0x2f9dc0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9dc4:
    // 0x2f9dc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9dc8:
    // 0x2f9dc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9dcc:
    // 0x2f9dcc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9dd0:
    // 0x2f9dd0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9dd4:
    // 0x2f9dd4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9dd8:
    // 0x2f9dd8: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9ddc:
    // 0x2f9ddc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9de0:
    // 0x2f9de0: 0xc0bf1b0  jal         func_2FC6C0
label_2f9de4:
    if (ctx->pc == 0x2F9DE4u) {
        ctx->pc = 0x2F9DE4u;
            // 0x2f9de4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9DE8u;
        goto label_2f9de8;
    }
    ctx->pc = 0x2F9DE0u;
    SET_GPR_U32(ctx, 31, 0x2F9DE8u);
    ctx->pc = 0x2F9DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9DE0u;
            // 0x2f9de4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC6C0u;
    if (runtime->hasFunction(0x2FC6C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9DE8u; }
        if (ctx->pc != 0x2F9DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC6C0_0x2fc6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9DE8u; }
        if (ctx->pc != 0x2F9DE8u) { return; }
    }
    ctx->pc = 0x2F9DE8u;
label_2f9de8:
    // 0x2f9de8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9dec:
    // 0x2f9dec: 0x24423aa0  addiu       $v0, $v0, 0x3AA0
    ctx->pc = 0x2f9decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15008));
label_2f9df0:
    // 0x2f9df0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f9df4:
    // 0x2f9df4: 0x0  nop
    ctx->pc = 0x2f9df4u;
    // NOP
label_2f9df8:
    // 0x2f9df8: 0x100006c7  b           . + 4 + (0x6C7 << 2)
label_2f9dfc:
    if (ctx->pc == 0x2F9DFCu) {
        ctx->pc = 0x2F9DFCu;
            // 0x2f9dfc: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9E00u;
        goto label_2f9e00;
    }
    ctx->pc = 0x2F9DF8u;
    {
        const bool branch_taken_0x2f9df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9DF8u;
            // 0x2f9dfc: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9df8) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9E00u;
label_2f9e00:
    // 0x2f9e00: 0xc040180  jal         func_100600
label_2f9e04:
    if (ctx->pc == 0x2F9E04u) {
        ctx->pc = 0x2F9E04u;
            // 0x2f9e04: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x2F9E08u;
        goto label_2f9e08;
    }
    ctx->pc = 0x2F9E00u;
    SET_GPR_U32(ctx, 31, 0x2F9E08u);
    ctx->pc = 0x2F9E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E00u;
            // 0x2f9e04: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E08u; }
        if (ctx->pc != 0x2F9E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E08u; }
        if (ctx->pc != 0x2F9E08u) { return; }
    }
    ctx->pc = 0x2F9E08u;
label_2f9e08:
    // 0x2f9e08: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9e0c:
    if (ctx->pc == 0x2F9E0Cu) {
        ctx->pc = 0x2F9E0Cu;
            // 0x2f9e0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E10u;
        goto label_2f9e10;
    }
    ctx->pc = 0x2F9E08u;
    {
        const bool branch_taken_0x2f9e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E08u;
            // 0x2f9e0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e08) {
            ctx->pc = 0x2F9E78u;
            goto label_2f9e78;
        }
    }
    ctx->pc = 0x2F9E10u;
label_2f9e10:
    // 0x2f9e10: 0xc0bd73c  jal         func_2F5CF0
label_2f9e14:
    if (ctx->pc == 0x2F9E14u) {
        ctx->pc = 0x2F9E14u;
            // 0x2f9e14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E18u;
        goto label_2f9e18;
    }
    ctx->pc = 0x2F9E10u;
    SET_GPR_U32(ctx, 31, 0x2F9E18u);
    ctx->pc = 0x2F9E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E10u;
            // 0x2f9e14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E18u; }
        if (ctx->pc != 0x2F9E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E18u; }
        if (ctx->pc != 0x2F9E18u) { return; }
    }
    ctx->pc = 0x2F9E18u;
label_2f9e18:
    // 0x2f9e18: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9e1c:
    // 0x2f9e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e20:
    // 0x2f9e20: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9e24:
    // 0x2f9e24: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9e28:
    // 0x2f9e28: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9e2c:
    // 0x2f9e2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9e30:
    // 0x2f9e30: 0xc0bd73c  jal         func_2F5CF0
label_2f9e34:
    if (ctx->pc == 0x2F9E34u) {
        ctx->pc = 0x2F9E34u;
            // 0x2f9e34: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9E38u;
        goto label_2f9e38;
    }
    ctx->pc = 0x2F9E30u;
    SET_GPR_U32(ctx, 31, 0x2F9E38u);
    ctx->pc = 0x2F9E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E30u;
            // 0x2f9e34: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E38u; }
        if (ctx->pc != 0x2F9E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E38u; }
        if (ctx->pc != 0x2F9E38u) { return; }
    }
    ctx->pc = 0x2F9E38u;
label_2f9e38:
    // 0x2f9e38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9e3c:
    // 0x2f9e3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e40:
    // 0x2f9e40: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9e44:
    // 0x2f9e44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e48:
    // 0x2f9e48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e4c:
    // 0x2f9e4c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9e50:
    // 0x2f9e50: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9e54:
    // 0x2f9e54: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9e58:
    // 0x2f9e58: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9e5c:
    // 0x2f9e5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9e60:
    // 0x2f9e60: 0xc0bf1b0  jal         func_2FC6C0
label_2f9e64:
    if (ctx->pc == 0x2F9E64u) {
        ctx->pc = 0x2F9E64u;
            // 0x2f9e64: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9E68u;
        goto label_2f9e68;
    }
    ctx->pc = 0x2F9E60u;
    SET_GPR_U32(ctx, 31, 0x2F9E68u);
    ctx->pc = 0x2F9E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E60u;
            // 0x2f9e64: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC6C0u;
    if (runtime->hasFunction(0x2FC6C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E68u; }
        if (ctx->pc != 0x2F9E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC6C0_0x2fc6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E68u; }
        if (ctx->pc != 0x2F9E68u) { return; }
    }
    ctx->pc = 0x2F9E68u;
label_2f9e68:
    // 0x2f9e68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9e6c:
    // 0x2f9e6c: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x2f9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
label_2f9e70:
    // 0x2f9e70: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f9e74:
    // 0x2f9e74: 0x0  nop
    ctx->pc = 0x2f9e74u;
    // NOP
label_2f9e78:
    // 0x2f9e78: 0x100006a7  b           . + 4 + (0x6A7 << 2)
label_2f9e7c:
    if (ctx->pc == 0x2F9E7Cu) {
        ctx->pc = 0x2F9E7Cu;
            // 0x2f9e7c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9E80u;
        goto label_2f9e80;
    }
    ctx->pc = 0x2F9E78u;
    {
        const bool branch_taken_0x2f9e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E78u;
            // 0x2f9e7c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e78) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9E80u;
label_2f9e80:
    // 0x2f9e80: 0xc040180  jal         func_100600
label_2f9e84:
    if (ctx->pc == 0x2F9E84u) {
        ctx->pc = 0x2F9E84u;
            // 0x2f9e84: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x2F9E88u;
        goto label_2f9e88;
    }
    ctx->pc = 0x2F9E80u;
    SET_GPR_U32(ctx, 31, 0x2F9E88u);
    ctx->pc = 0x2F9E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E80u;
            // 0x2f9e84: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E88u; }
        if (ctx->pc != 0x2F9E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E88u; }
        if (ctx->pc != 0x2F9E88u) { return; }
    }
    ctx->pc = 0x2F9E88u;
label_2f9e88:
    // 0x2f9e88: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9e8c:
    if (ctx->pc == 0x2F9E8Cu) {
        ctx->pc = 0x2F9E8Cu;
            // 0x2f9e8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E90u;
        goto label_2f9e90;
    }
    ctx->pc = 0x2F9E88u;
    {
        const bool branch_taken_0x2f9e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E88u;
            // 0x2f9e8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e88) {
            ctx->pc = 0x2F9EF8u;
            goto label_2f9ef8;
        }
    }
    ctx->pc = 0x2F9E90u;
label_2f9e90:
    // 0x2f9e90: 0xc0bd73c  jal         func_2F5CF0
label_2f9e94:
    if (ctx->pc == 0x2F9E94u) {
        ctx->pc = 0x2F9E94u;
            // 0x2f9e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E98u;
        goto label_2f9e98;
    }
    ctx->pc = 0x2F9E90u;
    SET_GPR_U32(ctx, 31, 0x2F9E98u);
    ctx->pc = 0x2F9E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E90u;
            // 0x2f9e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E98u; }
        if (ctx->pc != 0x2F9E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9E98u; }
        if (ctx->pc != 0x2F9E98u) { return; }
    }
    ctx->pc = 0x2F9E98u;
label_2f9e98:
    // 0x2f9e98: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9e9c:
    // 0x2f9e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ea0:
    // 0x2f9ea0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9ea4:
    // 0x2f9ea4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9ea8:
    // 0x2f9ea8: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9eac:
    // 0x2f9eac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9eb0:
    // 0x2f9eb0: 0xc0bd73c  jal         func_2F5CF0
label_2f9eb4:
    if (ctx->pc == 0x2F9EB4u) {
        ctx->pc = 0x2F9EB4u;
            // 0x2f9eb4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9EB8u;
        goto label_2f9eb8;
    }
    ctx->pc = 0x2F9EB0u;
    SET_GPR_U32(ctx, 31, 0x2F9EB8u);
    ctx->pc = 0x2F9EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9EB0u;
            // 0x2f9eb4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9EB8u; }
        if (ctx->pc != 0x2F9EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9EB8u; }
        if (ctx->pc != 0x2F9EB8u) { return; }
    }
    ctx->pc = 0x2F9EB8u;
label_2f9eb8:
    // 0x2f9eb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9ebc:
    // 0x2f9ebc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ec0:
    // 0x2f9ec0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9ec4:
    // 0x2f9ec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ec8:
    // 0x2f9ec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9ecc:
    // 0x2f9ecc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9ed0:
    // 0x2f9ed0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9ed4:
    // 0x2f9ed4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9ed8:
    // 0x2f9ed8: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9edc:
    // 0x2f9edc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9ee0:
    // 0x2f9ee0: 0xc0bf1b0  jal         func_2FC6C0
label_2f9ee4:
    if (ctx->pc == 0x2F9EE4u) {
        ctx->pc = 0x2F9EE4u;
            // 0x2f9ee4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9EE8u;
        goto label_2f9ee8;
    }
    ctx->pc = 0x2F9EE0u;
    SET_GPR_U32(ctx, 31, 0x2F9EE8u);
    ctx->pc = 0x2F9EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9EE0u;
            // 0x2f9ee4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC6C0u;
    if (runtime->hasFunction(0x2FC6C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9EE8u; }
        if (ctx->pc != 0x2F9EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC6C0_0x2fc6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9EE8u; }
        if (ctx->pc != 0x2F9EE8u) { return; }
    }
    ctx->pc = 0x2F9EE8u;
label_2f9ee8:
    // 0x2f9ee8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f9eec:
    // 0x2f9eec: 0x24423aa0  addiu       $v0, $v0, 0x3AA0
    ctx->pc = 0x2f9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15008));
label_2f9ef0:
    // 0x2f9ef0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2f9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2f9ef4:
    // 0x2f9ef4: 0x0  nop
    ctx->pc = 0x2f9ef4u;
    // NOP
label_2f9ef8:
    // 0x2f9ef8: 0x10000687  b           . + 4 + (0x687 << 2)
label_2f9efc:
    if (ctx->pc == 0x2F9EFCu) {
        ctx->pc = 0x2F9EFCu;
            // 0x2f9efc: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9F00u;
        goto label_2f9f00;
    }
    ctx->pc = 0x2F9EF8u;
    {
        const bool branch_taken_0x2f9ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9EF8u;
            // 0x2f9efc: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ef8) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9F00u;
label_2f9f00:
    // 0x2f9f00: 0xc040180  jal         func_100600
label_2f9f04:
    if (ctx->pc == 0x2F9F04u) {
        ctx->pc = 0x2F9F04u;
            // 0x2f9f04: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x2F9F08u;
        goto label_2f9f08;
    }
    ctx->pc = 0x2F9F00u;
    SET_GPR_U32(ctx, 31, 0x2F9F08u);
    ctx->pc = 0x2F9F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F00u;
            // 0x2f9f04: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F08u; }
        if (ctx->pc != 0x2F9F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F08u; }
        if (ctx->pc != 0x2F9F08u) { return; }
    }
    ctx->pc = 0x2F9F08u;
label_2f9f08:
    // 0x2f9f08: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2f9f0c:
    if (ctx->pc == 0x2F9F0Cu) {
        ctx->pc = 0x2F9F0Cu;
            // 0x2f9f0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F10u;
        goto label_2f9f10;
    }
    ctx->pc = 0x2F9F08u;
    {
        const bool branch_taken_0x2f9f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F08u;
            // 0x2f9f0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f08) {
            ctx->pc = 0x2F9F98u;
            goto label_2f9f98;
        }
    }
    ctx->pc = 0x2F9F10u;
label_2f9f10:
    // 0x2f9f10: 0xc0bd73c  jal         func_2F5CF0
label_2f9f14:
    if (ctx->pc == 0x2F9F14u) {
        ctx->pc = 0x2F9F14u;
            // 0x2f9f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F18u;
        goto label_2f9f18;
    }
    ctx->pc = 0x2F9F10u;
    SET_GPR_U32(ctx, 31, 0x2F9F18u);
    ctx->pc = 0x2F9F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F10u;
            // 0x2f9f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F18u; }
        if (ctx->pc != 0x2F9F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F18u; }
        if (ctx->pc != 0x2F9F18u) { return; }
    }
    ctx->pc = 0x2F9F18u;
label_2f9f18:
    // 0x2f9f18: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9f1c:
    // 0x2f9f1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f20:
    // 0x2f9f20: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9f24:
    // 0x2f9f24: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9f28:
    // 0x2f9f28: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9f2c:
    // 0x2f9f2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9f30:
    // 0x2f9f30: 0xc0bd73c  jal         func_2F5CF0
label_2f9f34:
    if (ctx->pc == 0x2F9F34u) {
        ctx->pc = 0x2F9F34u;
            // 0x2f9f34: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9F38u;
        goto label_2f9f38;
    }
    ctx->pc = 0x2F9F30u;
    SET_GPR_U32(ctx, 31, 0x2F9F38u);
    ctx->pc = 0x2F9F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F30u;
            // 0x2f9f34: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F38u; }
        if (ctx->pc != 0x2F9F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F38u; }
        if (ctx->pc != 0x2F9F38u) { return; }
    }
    ctx->pc = 0x2F9F38u;
label_2f9f38:
    // 0x2f9f38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9f3c:
    // 0x2f9f3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f40:
    // 0x2f9f40: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9f40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9f44:
    // 0x2f9f44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f48:
    // 0x2f9f48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f4c:
    // 0x2f9f4c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9f50:
    // 0x2f9f50: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9f54:
    // 0x2f9f54: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9f58:
    // 0x2f9f58: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9f5c:
    // 0x2f9f5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9f60:
    // 0x2f9f60: 0xc0bf1b0  jal         func_2FC6C0
label_2f9f64:
    if (ctx->pc == 0x2F9F64u) {
        ctx->pc = 0x2F9F64u;
            // 0x2f9f64: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9F68u;
        goto label_2f9f68;
    }
    ctx->pc = 0x2F9F60u;
    SET_GPR_U32(ctx, 31, 0x2F9F68u);
    ctx->pc = 0x2F9F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F60u;
            // 0x2f9f64: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC6C0u;
    if (runtime->hasFunction(0x2FC6C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F68u; }
        if (ctx->pc != 0x2F9F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC6C0_0x2fc6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F68u; }
        if (ctx->pc != 0x2F9F68u) { return; }
    }
    ctx->pc = 0x2F9F68u;
label_2f9f68:
    // 0x2f9f68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2f9f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2f9f6c:
    // 0x2f9f6c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2f9f70:
    // 0x2f9f70: 0x246351c0  addiu       $v1, $v1, 0x51C0
    ctx->pc = 0x2f9f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20928));
label_2f9f74:
    // 0x2f9f74: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x2f9f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_2f9f78:
    // 0x2f9f78: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2f9f78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_2f9f7c:
    // 0x2f9f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f80:
    // 0x2f9f80: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x2f9f80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
label_2f9f84:
    // 0x2f9f84: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2f9f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f9f88:
    // 0x2f9f88: 0xae800074  sw          $zero, 0x74($s4)
    ctx->pc = 0x2f9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 0));
label_2f9f8c:
    // 0x2f9f8c: 0xae800078  sw          $zero, 0x78($s4)
    ctx->pc = 0x2f9f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 0));
label_2f9f90:
    // 0x2f9f90: 0xc04a576  jal         func_1295D8
label_2f9f94:
    if (ctx->pc == 0x2F9F94u) {
        ctx->pc = 0x2F9F94u;
            // 0x2f9f94: 0xae80007c  sw          $zero, 0x7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x2F9F98u;
        goto label_2f9f98;
    }
    ctx->pc = 0x2F9F90u;
    SET_GPR_U32(ctx, 31, 0x2F9F98u);
    ctx->pc = 0x2F9F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F90u;
            // 0x2f9f94: 0xae80007c  sw          $zero, 0x7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F98u; }
        if (ctx->pc != 0x2F9F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F98u; }
        if (ctx->pc != 0x2F9F98u) { return; }
    }
    ctx->pc = 0x2F9F98u;
label_2f9f98:
    // 0x2f9f98: 0x1000065f  b           . + 4 + (0x65F << 2)
label_2f9f9c:
    if (ctx->pc == 0x2F9F9Cu) {
        ctx->pc = 0x2F9F9Cu;
            // 0x2f9f9c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2F9FA0u;
        goto label_2f9fa0;
    }
    ctx->pc = 0x2F9F98u;
    {
        const bool branch_taken_0x2f9f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F98u;
            // 0x2f9f9c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f98) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2F9FA0u;
label_2f9fa0:
    // 0x2f9fa0: 0xc040180  jal         func_100600
label_2f9fa4:
    if (ctx->pc == 0x2F9FA4u) {
        ctx->pc = 0x2F9FA4u;
            // 0x2f9fa4: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->pc = 0x2F9FA8u;
        goto label_2f9fa8;
    }
    ctx->pc = 0x2F9FA0u;
    SET_GPR_U32(ctx, 31, 0x2F9FA8u);
    ctx->pc = 0x2F9FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9FA0u;
            // 0x2f9fa4: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FA8u; }
        if (ctx->pc != 0x2F9FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FA8u; }
        if (ctx->pc != 0x2F9FA8u) { return; }
    }
    ctx->pc = 0x2F9FA8u;
label_2f9fa8:
    // 0x2f9fa8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f9fac:
    if (ctx->pc == 0x2F9FACu) {
        ctx->pc = 0x2F9FACu;
            // 0x2f9fac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FB0u;
        goto label_2f9fb0;
    }
    ctx->pc = 0x2F9FA8u;
    {
        const bool branch_taken_0x2f9fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9FA8u;
            // 0x2f9fac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fa8) {
            ctx->pc = 0x2FA018u;
            goto label_2fa018;
        }
    }
    ctx->pc = 0x2F9FB0u;
label_2f9fb0:
    // 0x2f9fb0: 0xc0bd73c  jal         func_2F5CF0
label_2f9fb4:
    if (ctx->pc == 0x2F9FB4u) {
        ctx->pc = 0x2F9FB4u;
            // 0x2f9fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FB8u;
        goto label_2f9fb8;
    }
    ctx->pc = 0x2F9FB0u;
    SET_GPR_U32(ctx, 31, 0x2F9FB8u);
    ctx->pc = 0x2F9FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9FB0u;
            // 0x2f9fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FB8u; }
        if (ctx->pc != 0x2F9FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FB8u; }
        if (ctx->pc != 0x2F9FB8u) { return; }
    }
    ctx->pc = 0x2F9FB8u;
label_2f9fb8:
    // 0x2f9fb8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9fbc:
    // 0x2f9fbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9fc0:
    // 0x2f9fc0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9fc4:
    // 0x2f9fc4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9fc8:
    // 0x2f9fc8: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2f9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2f9fcc:
    // 0x2f9fcc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9fd0:
    // 0x2f9fd0: 0xc0bd73c  jal         func_2F5CF0
label_2f9fd4:
    if (ctx->pc == 0x2F9FD4u) {
        ctx->pc = 0x2F9FD4u;
            // 0x2f9fd4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F9FD8u;
        goto label_2f9fd8;
    }
    ctx->pc = 0x2F9FD0u;
    SET_GPR_U32(ctx, 31, 0x2F9FD8u);
    ctx->pc = 0x2F9FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9FD0u;
            // 0x2f9fd4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FD8u; }
        if (ctx->pc != 0x2F9FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FD8u; }
        if (ctx->pc != 0x2F9FD8u) { return; }
    }
    ctx->pc = 0x2F9FD8u;
label_2f9fd8:
    // 0x2f9fd8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9fdc:
    // 0x2f9fdc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f9fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f9fe0:
    // 0x2f9fe0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2f9fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f9fe4:
    // 0x2f9fe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f9fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9fe8:
    // 0x2f9fe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9fec:
    // 0x2f9fec: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2f9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2f9ff0:
    // 0x2f9ff0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2f9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2f9ff4:
    // 0x2f9ff4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f9ff8:
    // 0x2f9ff8: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2f9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2f9ffc:
    // 0x2f9ffc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fa000:
    // 0x2fa000: 0xc0bf180  jal         func_2FC600
label_2fa004:
    if (ctx->pc == 0x2FA004u) {
        ctx->pc = 0x2FA004u;
            // 0x2fa004: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA008u;
        goto label_2fa008;
    }
    ctx->pc = 0x2FA000u;
    SET_GPR_U32(ctx, 31, 0x2FA008u);
    ctx->pc = 0x2FA004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA000u;
            // 0x2fa004: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC600u;
    if (runtime->hasFunction(0x2FC600u)) {
        auto targetFn = runtime->lookupFunction(0x2FC600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA008u; }
        if (ctx->pc != 0x2FA008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC600_0x2fc600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA008u; }
        if (ctx->pc != 0x2FA008u) { return; }
    }
    ctx->pc = 0x2FA008u;
label_2fa008:
    // 0x2fa008: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa00c:
    // 0x2fa00c: 0x24423a20  addiu       $v0, $v0, 0x3A20
    ctx->pc = 0x2fa00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14880));
label_2fa010:
    // 0x2fa010: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fa010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fa014:
    // 0x2fa014: 0x0  nop
    ctx->pc = 0x2fa014u;
    // NOP
label_2fa018:
    // 0x2fa018: 0x1000063f  b           . + 4 + (0x63F << 2)
label_2fa01c:
    if (ctx->pc == 0x2FA01Cu) {
        ctx->pc = 0x2FA01Cu;
            // 0x2fa01c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FA020u;
        goto label_2fa020;
    }
    ctx->pc = 0x2FA018u;
    {
        const bool branch_taken_0x2fa018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA018u;
            // 0x2fa01c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa018) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA020u;
label_2fa020:
    // 0x2fa020: 0xc040180  jal         func_100600
label_2fa024:
    if (ctx->pc == 0x2FA024u) {
        ctx->pc = 0x2FA024u;
            // 0x2fa024: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->pc = 0x2FA028u;
        goto label_2fa028;
    }
    ctx->pc = 0x2FA020u;
    SET_GPR_U32(ctx, 31, 0x2FA028u);
    ctx->pc = 0x2FA024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA020u;
            // 0x2fa024: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA028u; }
        if (ctx->pc != 0x2FA028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA028u; }
        if (ctx->pc != 0x2FA028u) { return; }
    }
    ctx->pc = 0x2FA028u;
label_2fa028:
    // 0x2fa028: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fa02c:
    if (ctx->pc == 0x2FA02Cu) {
        ctx->pc = 0x2FA02Cu;
            // 0x2fa02c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA030u;
        goto label_2fa030;
    }
    ctx->pc = 0x2FA028u;
    {
        const bool branch_taken_0x2fa028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA028u;
            // 0x2fa02c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa028) {
            ctx->pc = 0x2FA098u;
            goto label_2fa098;
        }
    }
    ctx->pc = 0x2FA030u;
label_2fa030:
    // 0x2fa030: 0xc0bd73c  jal         func_2F5CF0
label_2fa034:
    if (ctx->pc == 0x2FA034u) {
        ctx->pc = 0x2FA034u;
            // 0x2fa034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA038u;
        goto label_2fa038;
    }
    ctx->pc = 0x2FA030u;
    SET_GPR_U32(ctx, 31, 0x2FA038u);
    ctx->pc = 0x2FA034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA030u;
            // 0x2fa034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA038u; }
        if (ctx->pc != 0x2FA038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA038u; }
        if (ctx->pc != 0x2FA038u) { return; }
    }
    ctx->pc = 0x2FA038u;
label_2fa038:
    // 0x2fa038: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fa038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa03c:
    // 0x2fa03c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa040:
    // 0x2fa040: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fa040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fa044:
    // 0x2fa044: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa048:
    // 0x2fa048: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fa048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fa04c:
    // 0x2fa04c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fa04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fa050:
    // 0x2fa050: 0xc0bd73c  jal         func_2F5CF0
label_2fa054:
    if (ctx->pc == 0x2FA054u) {
        ctx->pc = 0x2FA054u;
            // 0x2fa054: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA058u;
        goto label_2fa058;
    }
    ctx->pc = 0x2FA050u;
    SET_GPR_U32(ctx, 31, 0x2FA058u);
    ctx->pc = 0x2FA054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA050u;
            // 0x2fa054: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA058u; }
        if (ctx->pc != 0x2FA058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA058u; }
        if (ctx->pc != 0x2FA058u) { return; }
    }
    ctx->pc = 0x2FA058u;
label_2fa058:
    // 0x2fa058: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa05c:
    // 0x2fa05c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fa05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa060:
    // 0x2fa060: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fa060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fa064:
    // 0x2fa064: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa068:
    // 0x2fa068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa06c:
    // 0x2fa06c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fa06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fa070:
    // 0x2fa070: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa074:
    // 0x2fa074: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fa074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fa078:
    // 0x2fa078: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fa078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fa07c:
    // 0x2fa07c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fa07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fa080:
    // 0x2fa080: 0xc0bf180  jal         func_2FC600
label_2fa084:
    if (ctx->pc == 0x2FA084u) {
        ctx->pc = 0x2FA084u;
            // 0x2fa084: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA088u;
        goto label_2fa088;
    }
    ctx->pc = 0x2FA080u;
    SET_GPR_U32(ctx, 31, 0x2FA088u);
    ctx->pc = 0x2FA084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA080u;
            // 0x2fa084: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC600u;
    if (runtime->hasFunction(0x2FC600u)) {
        auto targetFn = runtime->lookupFunction(0x2FC600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA088u; }
        if (ctx->pc != 0x2FA088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC600_0x2fc600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA088u; }
        if (ctx->pc != 0x2FA088u) { return; }
    }
    ctx->pc = 0x2FA088u;
label_2fa088:
    // 0x2fa088: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa08c:
    // 0x2fa08c: 0x24423a20  addiu       $v0, $v0, 0x3A20
    ctx->pc = 0x2fa08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14880));
label_2fa090:
    // 0x2fa090: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fa090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fa094:
    // 0x2fa094: 0x0  nop
    ctx->pc = 0x2fa094u;
    // NOP
label_2fa098:
    // 0x2fa098: 0x1000061f  b           . + 4 + (0x61F << 2)
label_2fa09c:
    if (ctx->pc == 0x2FA09Cu) {
        ctx->pc = 0x2FA09Cu;
            // 0x2fa09c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FA0A0u;
        goto label_2fa0a0;
    }
    ctx->pc = 0x2FA098u;
    {
        const bool branch_taken_0x2fa098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA098u;
            // 0x2fa09c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa098) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA0A0u;
label_2fa0a0:
    // 0x2fa0a0: 0xc040180  jal         func_100600
label_2fa0a4:
    if (ctx->pc == 0x2FA0A4u) {
        ctx->pc = 0x2FA0A4u;
            // 0x2fa0a4: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->pc = 0x2FA0A8u;
        goto label_2fa0a8;
    }
    ctx->pc = 0x2FA0A0u;
    SET_GPR_U32(ctx, 31, 0x2FA0A8u);
    ctx->pc = 0x2FA0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA0A0u;
            // 0x2fa0a4: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0A8u; }
        if (ctx->pc != 0x2FA0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0A8u; }
        if (ctx->pc != 0x2FA0A8u) { return; }
    }
    ctx->pc = 0x2FA0A8u;
label_2fa0a8:
    // 0x2fa0a8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fa0ac:
    if (ctx->pc == 0x2FA0ACu) {
        ctx->pc = 0x2FA0ACu;
            // 0x2fa0ac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0B0u;
        goto label_2fa0b0;
    }
    ctx->pc = 0x2FA0A8u;
    {
        const bool branch_taken_0x2fa0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA0A8u;
            // 0x2fa0ac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0a8) {
            ctx->pc = 0x2FA118u;
            goto label_2fa118;
        }
    }
    ctx->pc = 0x2FA0B0u;
label_2fa0b0:
    // 0x2fa0b0: 0xc0bd73c  jal         func_2F5CF0
label_2fa0b4:
    if (ctx->pc == 0x2FA0B4u) {
        ctx->pc = 0x2FA0B4u;
            // 0x2fa0b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0B8u;
        goto label_2fa0b8;
    }
    ctx->pc = 0x2FA0B0u;
    SET_GPR_U32(ctx, 31, 0x2FA0B8u);
    ctx->pc = 0x2FA0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA0B0u;
            // 0x2fa0b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0B8u; }
        if (ctx->pc != 0x2FA0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0B8u; }
        if (ctx->pc != 0x2FA0B8u) { return; }
    }
    ctx->pc = 0x2FA0B8u;
label_2fa0b8:
    // 0x2fa0b8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fa0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa0bc:
    // 0x2fa0bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0c0:
    // 0x2fa0c0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fa0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fa0c4:
    // 0x2fa0c4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa0c8:
    // 0x2fa0c8: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fa0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fa0cc:
    // 0x2fa0cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fa0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fa0d0:
    // 0x2fa0d0: 0xc0bd73c  jal         func_2F5CF0
label_2fa0d4:
    if (ctx->pc == 0x2FA0D4u) {
        ctx->pc = 0x2FA0D4u;
            // 0x2fa0d4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA0D8u;
        goto label_2fa0d8;
    }
    ctx->pc = 0x2FA0D0u;
    SET_GPR_U32(ctx, 31, 0x2FA0D8u);
    ctx->pc = 0x2FA0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA0D0u;
            // 0x2fa0d4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0D8u; }
        if (ctx->pc != 0x2FA0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0D8u; }
        if (ctx->pc != 0x2FA0D8u) { return; }
    }
    ctx->pc = 0x2FA0D8u;
label_2fa0d8:
    // 0x2fa0d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa0dc:
    // 0x2fa0dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fa0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0e0:
    // 0x2fa0e0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fa0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fa0e4:
    // 0x2fa0e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0e8:
    // 0x2fa0e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0ec:
    // 0x2fa0ec: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fa0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fa0f0:
    // 0x2fa0f0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa0f4:
    // 0x2fa0f4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fa0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fa0f8:
    // 0x2fa0f8: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fa0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fa0fc:
    // 0x2fa0fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fa0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fa100:
    // 0x2fa100: 0xc0bf180  jal         func_2FC600
label_2fa104:
    if (ctx->pc == 0x2FA104u) {
        ctx->pc = 0x2FA104u;
            // 0x2fa104: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA108u;
        goto label_2fa108;
    }
    ctx->pc = 0x2FA100u;
    SET_GPR_U32(ctx, 31, 0x2FA108u);
    ctx->pc = 0x2FA104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA100u;
            // 0x2fa104: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC600u;
    if (runtime->hasFunction(0x2FC600u)) {
        auto targetFn = runtime->lookupFunction(0x2FC600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA108u; }
        if (ctx->pc != 0x2FA108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC600_0x2fc600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA108u; }
        if (ctx->pc != 0x2FA108u) { return; }
    }
    ctx->pc = 0x2FA108u;
label_2fa108:
    // 0x2fa108: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa10c:
    // 0x2fa10c: 0x24423a20  addiu       $v0, $v0, 0x3A20
    ctx->pc = 0x2fa10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14880));
label_2fa110:
    // 0x2fa110: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fa110u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fa114:
    // 0x2fa114: 0x0  nop
    ctx->pc = 0x2fa114u;
    // NOP
label_2fa118:
    // 0x2fa118: 0x100005ff  b           . + 4 + (0x5FF << 2)
label_2fa11c:
    if (ctx->pc == 0x2FA11Cu) {
        ctx->pc = 0x2FA11Cu;
            // 0x2fa11c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FA120u;
        goto label_2fa120;
    }
    ctx->pc = 0x2FA118u;
    {
        const bool branch_taken_0x2fa118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA118u;
            // 0x2fa11c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa118) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA120u;
label_2fa120:
    // 0x2fa120: 0xc040180  jal         func_100600
label_2fa124:
    if (ctx->pc == 0x2FA124u) {
        ctx->pc = 0x2FA124u;
            // 0x2fa124: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FA128u;
        goto label_2fa128;
    }
    ctx->pc = 0x2FA120u;
    SET_GPR_U32(ctx, 31, 0x2FA128u);
    ctx->pc = 0x2FA124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA120u;
            // 0x2fa124: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA128u; }
        if (ctx->pc != 0x2FA128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA128u; }
        if (ctx->pc != 0x2FA128u) { return; }
    }
    ctx->pc = 0x2FA128u;
label_2fa128:
    // 0x2fa128: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fa12c:
    if (ctx->pc == 0x2FA12Cu) {
        ctx->pc = 0x2FA12Cu;
            // 0x2fa12c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA130u;
        goto label_2fa130;
    }
    ctx->pc = 0x2FA128u;
    {
        const bool branch_taken_0x2fa128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA128u;
            // 0x2fa12c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa128) {
            ctx->pc = 0x2FA198u;
            goto label_2fa198;
        }
    }
    ctx->pc = 0x2FA130u;
label_2fa130:
    // 0x2fa130: 0xc0bd73c  jal         func_2F5CF0
label_2fa134:
    if (ctx->pc == 0x2FA134u) {
        ctx->pc = 0x2FA134u;
            // 0x2fa134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA138u;
        goto label_2fa138;
    }
    ctx->pc = 0x2FA130u;
    SET_GPR_U32(ctx, 31, 0x2FA138u);
    ctx->pc = 0x2FA134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA130u;
            // 0x2fa134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA138u; }
        if (ctx->pc != 0x2FA138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA138u; }
        if (ctx->pc != 0x2FA138u) { return; }
    }
    ctx->pc = 0x2FA138u;
label_2fa138:
    // 0x2fa138: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fa138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa13c:
    // 0x2fa13c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa140:
    // 0x2fa140: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fa140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fa144:
    // 0x2fa144: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa148:
    // 0x2fa148: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fa148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fa14c:
    // 0x2fa14c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fa14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fa150:
    // 0x2fa150: 0xc0bd73c  jal         func_2F5CF0
label_2fa154:
    if (ctx->pc == 0x2FA154u) {
        ctx->pc = 0x2FA154u;
            // 0x2fa154: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA158u;
        goto label_2fa158;
    }
    ctx->pc = 0x2FA150u;
    SET_GPR_U32(ctx, 31, 0x2FA158u);
    ctx->pc = 0x2FA154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA150u;
            // 0x2fa154: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA158u; }
        if (ctx->pc != 0x2FA158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA158u; }
        if (ctx->pc != 0x2FA158u) { return; }
    }
    ctx->pc = 0x2FA158u;
label_2fa158:
    // 0x2fa158: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa15c:
    // 0x2fa15c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fa15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa160:
    // 0x2fa160: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fa160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fa164:
    // 0x2fa164: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa168:
    // 0x2fa168: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa16c:
    // 0x2fa16c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fa16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fa170:
    // 0x2fa170: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa174:
    // 0x2fa174: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fa174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fa178:
    // 0x2fa178: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fa178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fa17c:
    // 0x2fa17c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fa17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fa180:
    // 0x2fa180: 0xc0bf13c  jal         func_2FC4F0
label_2fa184:
    if (ctx->pc == 0x2FA184u) {
        ctx->pc = 0x2FA184u;
            // 0x2fa184: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA188u;
        goto label_2fa188;
    }
    ctx->pc = 0x2FA180u;
    SET_GPR_U32(ctx, 31, 0x2FA188u);
    ctx->pc = 0x2FA184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA180u;
            // 0x2fa184: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC4F0u;
    if (runtime->hasFunction(0x2FC4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA188u; }
        if (ctx->pc != 0x2FA188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC4F0_0x2fc4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA188u; }
        if (ctx->pc != 0x2FA188u) { return; }
    }
    ctx->pc = 0x2FA188u;
label_2fa188:
    // 0x2fa188: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa18c:
    // 0x2fa18c: 0x244239a0  addiu       $v0, $v0, 0x39A0
    ctx->pc = 0x2fa18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
label_2fa190:
    // 0x2fa190: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fa190u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fa194:
    // 0x2fa194: 0x0  nop
    ctx->pc = 0x2fa194u;
    // NOP
label_2fa198:
    // 0x2fa198: 0x100005df  b           . + 4 + (0x5DF << 2)
label_2fa19c:
    if (ctx->pc == 0x2FA19Cu) {
        ctx->pc = 0x2FA19Cu;
            // 0x2fa19c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FA1A0u;
        goto label_2fa1a0;
    }
    ctx->pc = 0x2FA198u;
    {
        const bool branch_taken_0x2fa198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA198u;
            // 0x2fa19c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa198) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA1A0u;
label_2fa1a0:
    // 0x2fa1a0: 0xc040180  jal         func_100600
label_2fa1a4:
    if (ctx->pc == 0x2FA1A4u) {
        ctx->pc = 0x2FA1A4u;
            // 0x2fa1a4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FA1A8u;
        goto label_2fa1a8;
    }
    ctx->pc = 0x2FA1A0u;
    SET_GPR_U32(ctx, 31, 0x2FA1A8u);
    ctx->pc = 0x2FA1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA1A0u;
            // 0x2fa1a4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA1A8u; }
        if (ctx->pc != 0x2FA1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA1A8u; }
        if (ctx->pc != 0x2FA1A8u) { return; }
    }
    ctx->pc = 0x2FA1A8u;
label_2fa1a8:
    // 0x2fa1a8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fa1ac:
    if (ctx->pc == 0x2FA1ACu) {
        ctx->pc = 0x2FA1ACu;
            // 0x2fa1ac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1B0u;
        goto label_2fa1b0;
    }
    ctx->pc = 0x2FA1A8u;
    {
        const bool branch_taken_0x2fa1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA1A8u;
            // 0x2fa1ac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1a8) {
            ctx->pc = 0x2FA218u;
            goto label_2fa218;
        }
    }
    ctx->pc = 0x2FA1B0u;
label_2fa1b0:
    // 0x2fa1b0: 0xc0bd73c  jal         func_2F5CF0
label_2fa1b4:
    if (ctx->pc == 0x2FA1B4u) {
        ctx->pc = 0x2FA1B4u;
            // 0x2fa1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1B8u;
        goto label_2fa1b8;
    }
    ctx->pc = 0x2FA1B0u;
    SET_GPR_U32(ctx, 31, 0x2FA1B8u);
    ctx->pc = 0x2FA1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA1B0u;
            // 0x2fa1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA1B8u; }
        if (ctx->pc != 0x2FA1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA1B8u; }
        if (ctx->pc != 0x2FA1B8u) { return; }
    }
    ctx->pc = 0x2FA1B8u;
label_2fa1b8:
    // 0x2fa1b8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fa1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa1bc:
    // 0x2fa1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa1c0:
    // 0x2fa1c0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fa1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fa1c4:
    // 0x2fa1c4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa1c8:
    // 0x2fa1c8: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fa1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fa1cc:
    // 0x2fa1cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fa1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fa1d0:
    // 0x2fa1d0: 0xc0bd73c  jal         func_2F5CF0
label_2fa1d4:
    if (ctx->pc == 0x2FA1D4u) {
        ctx->pc = 0x2FA1D4u;
            // 0x2fa1d4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA1D8u;
        goto label_2fa1d8;
    }
    ctx->pc = 0x2FA1D0u;
    SET_GPR_U32(ctx, 31, 0x2FA1D8u);
    ctx->pc = 0x2FA1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA1D0u;
            // 0x2fa1d4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA1D8u; }
        if (ctx->pc != 0x2FA1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA1D8u; }
        if (ctx->pc != 0x2FA1D8u) { return; }
    }
    ctx->pc = 0x2FA1D8u;
label_2fa1d8:
    // 0x2fa1d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa1dc:
    // 0x2fa1dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fa1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa1e0:
    // 0x2fa1e0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fa1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fa1e4:
    // 0x2fa1e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa1e8:
    // 0x2fa1e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa1ec:
    // 0x2fa1ec: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fa1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fa1f0:
    // 0x2fa1f0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa1f4:
    // 0x2fa1f4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fa1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fa1f8:
    // 0x2fa1f8: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fa1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fa1fc:
    // 0x2fa1fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fa1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fa200:
    // 0x2fa200: 0xc0bf13c  jal         func_2FC4F0
label_2fa204:
    if (ctx->pc == 0x2FA204u) {
        ctx->pc = 0x2FA204u;
            // 0x2fa204: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA208u;
        goto label_2fa208;
    }
    ctx->pc = 0x2FA200u;
    SET_GPR_U32(ctx, 31, 0x2FA208u);
    ctx->pc = 0x2FA204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA200u;
            // 0x2fa204: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC4F0u;
    if (runtime->hasFunction(0x2FC4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA208u; }
        if (ctx->pc != 0x2FA208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC4F0_0x2fc4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA208u; }
        if (ctx->pc != 0x2FA208u) { return; }
    }
    ctx->pc = 0x2FA208u;
label_2fa208:
    // 0x2fa208: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa20c:
    // 0x2fa20c: 0x244239a0  addiu       $v0, $v0, 0x39A0
    ctx->pc = 0x2fa20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
label_2fa210:
    // 0x2fa210: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fa210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fa214:
    // 0x2fa214: 0x0  nop
    ctx->pc = 0x2fa214u;
    // NOP
label_2fa218:
    // 0x2fa218: 0x100005bf  b           . + 4 + (0x5BF << 2)
label_2fa21c:
    if (ctx->pc == 0x2FA21Cu) {
        ctx->pc = 0x2FA21Cu;
            // 0x2fa21c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FA220u;
        goto label_2fa220;
    }
    ctx->pc = 0x2FA218u;
    {
        const bool branch_taken_0x2fa218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA218u;
            // 0x2fa21c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa218) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA220u;
label_2fa220:
    // 0x2fa220: 0xc040180  jal         func_100600
label_2fa224:
    if (ctx->pc == 0x2FA224u) {
        ctx->pc = 0x2FA224u;
            // 0x2fa224: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FA228u;
        goto label_2fa228;
    }
    ctx->pc = 0x2FA220u;
    SET_GPR_U32(ctx, 31, 0x2FA228u);
    ctx->pc = 0x2FA224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA220u;
            // 0x2fa224: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA228u; }
        if (ctx->pc != 0x2FA228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA228u; }
        if (ctx->pc != 0x2FA228u) { return; }
    }
    ctx->pc = 0x2FA228u;
label_2fa228:
    // 0x2fa228: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fa22c:
    if (ctx->pc == 0x2FA22Cu) {
        ctx->pc = 0x2FA22Cu;
            // 0x2fa22c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA230u;
        goto label_2fa230;
    }
    ctx->pc = 0x2FA228u;
    {
        const bool branch_taken_0x2fa228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA228u;
            // 0x2fa22c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa228) {
            ctx->pc = 0x2FA298u;
            goto label_2fa298;
        }
    }
    ctx->pc = 0x2FA230u;
label_2fa230:
    // 0x2fa230: 0xc0bd73c  jal         func_2F5CF0
label_2fa234:
    if (ctx->pc == 0x2FA234u) {
        ctx->pc = 0x2FA234u;
            // 0x2fa234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA238u;
        goto label_2fa238;
    }
    ctx->pc = 0x2FA230u;
    SET_GPR_U32(ctx, 31, 0x2FA238u);
    ctx->pc = 0x2FA234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA230u;
            // 0x2fa234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA238u; }
        if (ctx->pc != 0x2FA238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA238u; }
        if (ctx->pc != 0x2FA238u) { return; }
    }
    ctx->pc = 0x2FA238u;
label_2fa238:
    // 0x2fa238: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fa238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa23c:
    // 0x2fa23c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa240:
    // 0x2fa240: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fa240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fa244:
    // 0x2fa244: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa248:
    // 0x2fa248: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fa248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fa24c:
    // 0x2fa24c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fa24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fa250:
    // 0x2fa250: 0xc0bd73c  jal         func_2F5CF0
label_2fa254:
    if (ctx->pc == 0x2FA254u) {
        ctx->pc = 0x2FA254u;
            // 0x2fa254: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA258u;
        goto label_2fa258;
    }
    ctx->pc = 0x2FA250u;
    SET_GPR_U32(ctx, 31, 0x2FA258u);
    ctx->pc = 0x2FA254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA250u;
            // 0x2fa254: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA258u; }
        if (ctx->pc != 0x2FA258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA258u; }
        if (ctx->pc != 0x2FA258u) { return; }
    }
    ctx->pc = 0x2FA258u;
label_2fa258:
    // 0x2fa258: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa25c:
    // 0x2fa25c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fa25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa260:
    // 0x2fa260: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fa260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fa264:
    // 0x2fa264: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa268:
    // 0x2fa268: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa26c:
    // 0x2fa26c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fa26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fa270:
    // 0x2fa270: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa274:
    // 0x2fa274: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fa274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fa278:
    // 0x2fa278: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fa278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fa27c:
    // 0x2fa27c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fa27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fa280:
    // 0x2fa280: 0xc0bf13c  jal         func_2FC4F0
label_2fa284:
    if (ctx->pc == 0x2FA284u) {
        ctx->pc = 0x2FA284u;
            // 0x2fa284: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA288u;
        goto label_2fa288;
    }
    ctx->pc = 0x2FA280u;
    SET_GPR_U32(ctx, 31, 0x2FA288u);
    ctx->pc = 0x2FA284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA280u;
            // 0x2fa284: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC4F0u;
    if (runtime->hasFunction(0x2FC4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA288u; }
        if (ctx->pc != 0x2FA288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC4F0_0x2fc4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA288u; }
        if (ctx->pc != 0x2FA288u) { return; }
    }
    ctx->pc = 0x2FA288u;
label_2fa288:
    // 0x2fa288: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa28c:
    // 0x2fa28c: 0x244239a0  addiu       $v0, $v0, 0x39A0
    ctx->pc = 0x2fa28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
label_2fa290:
    // 0x2fa290: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fa290u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fa294:
    // 0x2fa294: 0x0  nop
    ctx->pc = 0x2fa294u;
    // NOP
label_2fa298:
    // 0x2fa298: 0x1000059f  b           . + 4 + (0x59F << 2)
label_2fa29c:
    if (ctx->pc == 0x2FA29Cu) {
        ctx->pc = 0x2FA29Cu;
            // 0x2fa29c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FA2A0u;
        goto label_2fa2a0;
    }
    ctx->pc = 0x2FA298u;
    {
        const bool branch_taken_0x2fa298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA298u;
            // 0x2fa29c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa298) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA2A0u;
label_2fa2a0:
    // 0x2fa2a0: 0xc040180  jal         func_100600
label_2fa2a4:
    if (ctx->pc == 0x2FA2A4u) {
        ctx->pc = 0x2FA2A4u;
            // 0x2fa2a4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FA2A8u;
        goto label_2fa2a8;
    }
    ctx->pc = 0x2FA2A0u;
    SET_GPR_U32(ctx, 31, 0x2FA2A8u);
    ctx->pc = 0x2FA2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA2A0u;
            // 0x2fa2a4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA2A8u; }
        if (ctx->pc != 0x2FA2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA2A8u; }
        if (ctx->pc != 0x2FA2A8u) { return; }
    }
    ctx->pc = 0x2FA2A8u;
label_2fa2a8:
    // 0x2fa2a8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fa2ac:
    if (ctx->pc == 0x2FA2ACu) {
        ctx->pc = 0x2FA2ACu;
            // 0x2fa2ac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2B0u;
        goto label_2fa2b0;
    }
    ctx->pc = 0x2FA2A8u;
    {
        const bool branch_taken_0x2fa2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA2A8u;
            // 0x2fa2ac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2a8) {
            ctx->pc = 0x2FA318u;
            goto label_2fa318;
        }
    }
    ctx->pc = 0x2FA2B0u;
label_2fa2b0:
    // 0x2fa2b0: 0xc0bd73c  jal         func_2F5CF0
label_2fa2b4:
    if (ctx->pc == 0x2FA2B4u) {
        ctx->pc = 0x2FA2B4u;
            // 0x2fa2b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2B8u;
        goto label_2fa2b8;
    }
    ctx->pc = 0x2FA2B0u;
    SET_GPR_U32(ctx, 31, 0x2FA2B8u);
    ctx->pc = 0x2FA2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA2B0u;
            // 0x2fa2b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA2B8u; }
        if (ctx->pc != 0x2FA2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA2B8u; }
        if (ctx->pc != 0x2FA2B8u) { return; }
    }
    ctx->pc = 0x2FA2B8u;
label_2fa2b8:
    // 0x2fa2b8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fa2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa2bc:
    // 0x2fa2bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa2c0:
    // 0x2fa2c0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fa2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fa2c4:
    // 0x2fa2c4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa2c8:
    // 0x2fa2c8: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fa2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fa2cc:
    // 0x2fa2cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fa2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fa2d0:
    // 0x2fa2d0: 0xc0bd73c  jal         func_2F5CF0
label_2fa2d4:
    if (ctx->pc == 0x2FA2D4u) {
        ctx->pc = 0x2FA2D4u;
            // 0x2fa2d4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA2D8u;
        goto label_2fa2d8;
    }
    ctx->pc = 0x2FA2D0u;
    SET_GPR_U32(ctx, 31, 0x2FA2D8u);
    ctx->pc = 0x2FA2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA2D0u;
            // 0x2fa2d4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA2D8u; }
        if (ctx->pc != 0x2FA2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA2D8u; }
        if (ctx->pc != 0x2FA2D8u) { return; }
    }
    ctx->pc = 0x2FA2D8u;
label_2fa2d8:
    // 0x2fa2d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa2dc:
    // 0x2fa2dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fa2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa2e0:
    // 0x2fa2e0: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fa2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fa2e4:
    // 0x2fa2e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa2e8:
    // 0x2fa2e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa2ec:
    // 0x2fa2ec: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fa2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fa2f0:
    // 0x2fa2f0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa2f4:
    // 0x2fa2f4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fa2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fa2f8:
    // 0x2fa2f8: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fa2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fa2fc:
    // 0x2fa2fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fa2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fa300:
    // 0x2fa300: 0xc0bf13c  jal         func_2FC4F0
label_2fa304:
    if (ctx->pc == 0x2FA304u) {
        ctx->pc = 0x2FA304u;
            // 0x2fa304: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA308u;
        goto label_2fa308;
    }
    ctx->pc = 0x2FA300u;
    SET_GPR_U32(ctx, 31, 0x2FA308u);
    ctx->pc = 0x2FA304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA300u;
            // 0x2fa304: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC4F0u;
    if (runtime->hasFunction(0x2FC4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA308u; }
        if (ctx->pc != 0x2FA308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC4F0_0x2fc4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA308u; }
        if (ctx->pc != 0x2FA308u) { return; }
    }
    ctx->pc = 0x2FA308u;
label_2fa308:
    // 0x2fa308: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa30c:
    // 0x2fa30c: 0x244239a0  addiu       $v0, $v0, 0x39A0
    ctx->pc = 0x2fa30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
label_2fa310:
    // 0x2fa310: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fa310u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fa314:
    // 0x2fa314: 0x0  nop
    ctx->pc = 0x2fa314u;
    // NOP
label_2fa318:
    // 0x2fa318: 0x1000057f  b           . + 4 + (0x57F << 2)
label_2fa31c:
    if (ctx->pc == 0x2FA31Cu) {
        ctx->pc = 0x2FA31Cu;
            // 0x2fa31c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FA320u;
        goto label_2fa320;
    }
    ctx->pc = 0x2FA318u;
    {
        const bool branch_taken_0x2fa318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA318u;
            // 0x2fa31c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa318) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA320u;
label_2fa320:
    // 0x2fa320: 0xc040180  jal         func_100600
label_2fa324:
    if (ctx->pc == 0x2FA324u) {
        ctx->pc = 0x2FA324u;
            // 0x2fa324: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x2FA328u;
        goto label_2fa328;
    }
    ctx->pc = 0x2FA320u;
    SET_GPR_U32(ctx, 31, 0x2FA328u);
    ctx->pc = 0x2FA324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA320u;
            // 0x2fa324: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA328u; }
        if (ctx->pc != 0x2FA328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA328u; }
        if (ctx->pc != 0x2FA328u) { return; }
    }
    ctx->pc = 0x2FA328u;
label_2fa328:
    // 0x2fa328: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fa32c:
    if (ctx->pc == 0x2FA32Cu) {
        ctx->pc = 0x2FA32Cu;
            // 0x2fa32c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA330u;
        goto label_2fa330;
    }
    ctx->pc = 0x2FA328u;
    {
        const bool branch_taken_0x2fa328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA328u;
            // 0x2fa32c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa328) {
            ctx->pc = 0x2FA3F0u;
            goto label_2fa3f0;
        }
    }
    ctx->pc = 0x2FA330u;
label_2fa330:
    // 0x2fa330: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fa330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fa334:
    // 0x2fa334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa338:
    // 0x2fa338: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa33c:
    // 0x2fa33c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fa33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fa340:
    // 0x2fa340: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fa340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fa344:
    // 0x2fa344: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fa344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fa348:
    // 0x2fa348: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fa348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fa34c:
    // 0x2fa34c: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fa34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fa350:
    // 0x2fa350: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fa350u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fa354:
    // 0x2fa354: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fa354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fa358:
    // 0x2fa358: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fa358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fa35c:
    // 0x2fa35c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fa35cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fa360:
    // 0x2fa360: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fa360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fa364:
    // 0x2fa364: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fa364u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fa368:
    // 0x2fa368: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fa368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fa36c:
    // 0x2fa36c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fa36cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fa370:
    // 0x2fa370: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa374:
    // 0x2fa374: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fa374u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fa378:
    // 0x2fa378: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fa378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fa37c:
    // 0x2fa37c: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fa37cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fa380:
    // 0x2fa380: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fa380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fa384:
    // 0x2fa384: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fa384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fa388:
    // 0x2fa388: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fa388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fa38c:
    // 0x2fa38c: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fa38cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fa390:
    // 0x2fa390: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fa390u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fa394:
    // 0x2fa394: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fa394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fa398:
    // 0x2fa398: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fa398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fa39c:
    // 0x2fa39c: 0xc04cbd8  jal         func_132F60
label_2fa3a0:
    if (ctx->pc == 0x2FA3A0u) {
        ctx->pc = 0x2FA3A0u;
            // 0x2fa3a0: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FA3A4u;
        goto label_2fa3a4;
    }
    ctx->pc = 0x2FA39Cu;
    SET_GPR_U32(ctx, 31, 0x2FA3A4u);
    ctx->pc = 0x2FA3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA39Cu;
            // 0x2fa3a0: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA3A4u; }
        if (ctx->pc != 0x2FA3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA3A4u; }
        if (ctx->pc != 0x2FA3A4u) { return; }
    }
    ctx->pc = 0x2FA3A4u;
label_2fa3a4:
    // 0x2fa3a4: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fa3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fa3a8:
    // 0x2fa3a8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fa3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fa3ac:
    // 0x2fa3ac: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fa3acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fa3b0:
    // 0x2fa3b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fa3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fa3b4:
    // 0x2fa3b4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fa3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fa3b8:
    // 0x2fa3b8: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fa3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fa3bc:
    // 0x2fa3bc: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fa3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fa3c0:
    // 0x2fa3c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa3c4:
    // 0x2fa3c4: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fa3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fa3c8:
    // 0x2fa3c8: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fa3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fa3cc:
    // 0x2fa3cc: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fa3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fa3d0:
    // 0x2fa3d0: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fa3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fa3d4:
    // 0x2fa3d4: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fa3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fa3d8:
    // 0x2fa3d8: 0x2463a7e0  addiu       $v1, $v1, -0x5820
    ctx->pc = 0x2fa3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944736));
label_2fa3dc:
    // 0x2fa3dc: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fa3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fa3e0:
    // 0x2fa3e0: 0x24423900  addiu       $v0, $v0, 0x3900
    ctx->pc = 0x2fa3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14592));
label_2fa3e4:
    // 0x2fa3e4: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fa3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fa3e8:
    // 0x2fa3e8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fa3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fa3ec:
    // 0x2fa3ec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa3f0:
    // 0x2fa3f0: 0x10000549  b           . + 4 + (0x549 << 2)
label_2fa3f4:
    if (ctx->pc == 0x2FA3F4u) {
        ctx->pc = 0x2FA3F4u;
            // 0x2fa3f4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FA3F8u;
        goto label_2fa3f8;
    }
    ctx->pc = 0x2FA3F0u;
    {
        const bool branch_taken_0x2fa3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA3F0u;
            // 0x2fa3f4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa3f0) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA3F8u;
label_2fa3f8:
    // 0x2fa3f8: 0xc040180  jal         func_100600
label_2fa3fc:
    if (ctx->pc == 0x2FA3FCu) {
        ctx->pc = 0x2FA3FCu;
            // 0x2fa3fc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x2FA400u;
        goto label_2fa400;
    }
    ctx->pc = 0x2FA3F8u;
    SET_GPR_U32(ctx, 31, 0x2FA400u);
    ctx->pc = 0x2FA3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA3F8u;
            // 0x2fa3fc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA400u; }
        if (ctx->pc != 0x2FA400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA400u; }
        if (ctx->pc != 0x2FA400u) { return; }
    }
    ctx->pc = 0x2FA400u;
label_2fa400:
    // 0x2fa400: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fa404:
    if (ctx->pc == 0x2FA404u) {
        ctx->pc = 0x2FA404u;
            // 0x2fa404: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA408u;
        goto label_2fa408;
    }
    ctx->pc = 0x2FA400u;
    {
        const bool branch_taken_0x2fa400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA400u;
            // 0x2fa404: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa400) {
            ctx->pc = 0x2FA4C8u;
            goto label_2fa4c8;
        }
    }
    ctx->pc = 0x2FA408u;
label_2fa408:
    // 0x2fa408: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fa408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fa40c:
    // 0x2fa40c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa410:
    // 0x2fa410: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa414:
    // 0x2fa414: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fa414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fa418:
    // 0x2fa418: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fa418u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fa41c:
    // 0x2fa41c: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fa41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fa420:
    // 0x2fa420: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fa420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fa424:
    // 0x2fa424: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fa424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fa428:
    // 0x2fa428: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fa428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fa42c:
    // 0x2fa42c: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fa42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fa430:
    // 0x2fa430: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fa430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fa434:
    // 0x2fa434: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fa434u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fa438:
    // 0x2fa438: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fa438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fa43c:
    // 0x2fa43c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fa43cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fa440:
    // 0x2fa440: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fa440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fa444:
    // 0x2fa444: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fa444u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fa448:
    // 0x2fa448: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa44c:
    // 0x2fa44c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fa44cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fa450:
    // 0x2fa450: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fa450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fa454:
    // 0x2fa454: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fa454u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fa458:
    // 0x2fa458: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fa458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fa45c:
    // 0x2fa45c: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fa45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fa460:
    // 0x2fa460: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fa460u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fa464:
    // 0x2fa464: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fa464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fa468:
    // 0x2fa468: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fa468u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fa46c:
    // 0x2fa46c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fa46cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fa470:
    // 0x2fa470: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fa470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fa474:
    // 0x2fa474: 0xc04cbd8  jal         func_132F60
label_2fa478:
    if (ctx->pc == 0x2FA478u) {
        ctx->pc = 0x2FA478u;
            // 0x2fa478: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FA47Cu;
        goto label_2fa47c;
    }
    ctx->pc = 0x2FA474u;
    SET_GPR_U32(ctx, 31, 0x2FA47Cu);
    ctx->pc = 0x2FA478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA474u;
            // 0x2fa478: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA47Cu; }
        if (ctx->pc != 0x2FA47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA47Cu; }
        if (ctx->pc != 0x2FA47Cu) { return; }
    }
    ctx->pc = 0x2FA47Cu;
label_2fa47c:
    // 0x2fa47c: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fa47cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fa480:
    // 0x2fa480: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fa480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fa484:
    // 0x2fa484: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fa484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fa488:
    // 0x2fa488: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fa488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fa48c:
    // 0x2fa48c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fa48cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fa490:
    // 0x2fa490: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fa490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fa494:
    // 0x2fa494: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fa494u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fa498:
    // 0x2fa498: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa49c:
    // 0x2fa49c: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fa49cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fa4a0:
    // 0x2fa4a0: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fa4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fa4a4:
    // 0x2fa4a4: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fa4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fa4a8:
    // 0x2fa4a8: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fa4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fa4ac:
    // 0x2fa4ac: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fa4acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fa4b0:
    // 0x2fa4b0: 0x2463a7e0  addiu       $v1, $v1, -0x5820
    ctx->pc = 0x2fa4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944736));
label_2fa4b4:
    // 0x2fa4b4: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fa4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fa4b8:
    // 0x2fa4b8: 0x244238b0  addiu       $v0, $v0, 0x38B0
    ctx->pc = 0x2fa4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14512));
label_2fa4bc:
    // 0x2fa4bc: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fa4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fa4c0:
    // 0x2fa4c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fa4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fa4c4:
    // 0x2fa4c4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa4c8:
    // 0x2fa4c8: 0x10000513  b           . + 4 + (0x513 << 2)
label_2fa4cc:
    if (ctx->pc == 0x2FA4CCu) {
        ctx->pc = 0x2FA4CCu;
            // 0x2fa4cc: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FA4D0u;
        goto label_2fa4d0;
    }
    ctx->pc = 0x2FA4C8u;
    {
        const bool branch_taken_0x2fa4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA4C8u;
            // 0x2fa4cc: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa4c8) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA4D0u;
label_2fa4d0:
    // 0x2fa4d0: 0xc040180  jal         func_100600
label_2fa4d4:
    if (ctx->pc == 0x2FA4D4u) {
        ctx->pc = 0x2FA4D4u;
            // 0x2fa4d4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x2FA4D8u;
        goto label_2fa4d8;
    }
    ctx->pc = 0x2FA4D0u;
    SET_GPR_U32(ctx, 31, 0x2FA4D8u);
    ctx->pc = 0x2FA4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA4D0u;
            // 0x2fa4d4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA4D8u; }
        if (ctx->pc != 0x2FA4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA4D8u; }
        if (ctx->pc != 0x2FA4D8u) { return; }
    }
    ctx->pc = 0x2FA4D8u;
label_2fa4d8:
    // 0x2fa4d8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fa4dc:
    if (ctx->pc == 0x2FA4DCu) {
        ctx->pc = 0x2FA4DCu;
            // 0x2fa4dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4E0u;
        goto label_2fa4e0;
    }
    ctx->pc = 0x2FA4D8u;
    {
        const bool branch_taken_0x2fa4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA4D8u;
            // 0x2fa4dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa4d8) {
            ctx->pc = 0x2FA5A0u;
            goto label_2fa5a0;
        }
    }
    ctx->pc = 0x2FA4E0u;
label_2fa4e0:
    // 0x2fa4e0: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fa4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fa4e4:
    // 0x2fa4e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa4e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa4e8:
    // 0x2fa4e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa4ec:
    // 0x2fa4ec: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fa4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fa4f0:
    // 0x2fa4f0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fa4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fa4f4:
    // 0x2fa4f4: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fa4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fa4f8:
    // 0x2fa4f8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fa4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fa4fc:
    // 0x2fa4fc: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fa4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fa500:
    // 0x2fa500: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fa500u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fa504:
    // 0x2fa504: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fa504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fa508:
    // 0x2fa508: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fa508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fa50c:
    // 0x2fa50c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fa50cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fa510:
    // 0x2fa510: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fa510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fa514:
    // 0x2fa514: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fa514u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fa518:
    // 0x2fa518: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fa518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fa51c:
    // 0x2fa51c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fa51cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fa520:
    // 0x2fa520: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa524:
    // 0x2fa524: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fa524u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fa528:
    // 0x2fa528: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fa528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fa52c:
    // 0x2fa52c: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fa52cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fa530:
    // 0x2fa530: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fa530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fa534:
    // 0x2fa534: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fa534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fa538:
    // 0x2fa538: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fa538u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fa53c:
    // 0x2fa53c: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fa53cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fa540:
    // 0x2fa540: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fa540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fa544:
    // 0x2fa544: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fa544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fa548:
    // 0x2fa548: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fa548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fa54c:
    // 0x2fa54c: 0xc04cbd8  jal         func_132F60
label_2fa550:
    if (ctx->pc == 0x2FA550u) {
        ctx->pc = 0x2FA550u;
            // 0x2fa550: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FA554u;
        goto label_2fa554;
    }
    ctx->pc = 0x2FA54Cu;
    SET_GPR_U32(ctx, 31, 0x2FA554u);
    ctx->pc = 0x2FA550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA54Cu;
            // 0x2fa550: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA554u; }
        if (ctx->pc != 0x2FA554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA554u; }
        if (ctx->pc != 0x2FA554u) { return; }
    }
    ctx->pc = 0x2FA554u;
label_2fa554:
    // 0x2fa554: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fa554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fa558:
    // 0x2fa558: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fa558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fa55c:
    // 0x2fa55c: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fa55cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fa560:
    // 0x2fa560: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fa560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fa564:
    // 0x2fa564: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fa564u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fa568:
    // 0x2fa568: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fa568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fa56c:
    // 0x2fa56c: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fa56cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fa570:
    // 0x2fa570: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa574:
    // 0x2fa574: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fa574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fa578:
    // 0x2fa578: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fa578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fa57c:
    // 0x2fa57c: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fa57cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fa580:
    // 0x2fa580: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fa580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fa584:
    // 0x2fa584: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fa584u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fa588:
    // 0x2fa588: 0x2463a7e0  addiu       $v1, $v1, -0x5820
    ctx->pc = 0x2fa588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944736));
label_2fa58c:
    // 0x2fa58c: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fa58cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fa590:
    // 0x2fa590: 0x24423860  addiu       $v0, $v0, 0x3860
    ctx->pc = 0x2fa590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14432));
label_2fa594:
    // 0x2fa594: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fa594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fa598:
    // 0x2fa598: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fa598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fa59c:
    // 0x2fa59c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa59cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa5a0:
    // 0x2fa5a0: 0x100004dd  b           . + 4 + (0x4DD << 2)
label_2fa5a4:
    if (ctx->pc == 0x2FA5A4u) {
        ctx->pc = 0x2FA5A4u;
            // 0x2fa5a4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FA5A8u;
        goto label_2fa5a8;
    }
    ctx->pc = 0x2FA5A0u;
    {
        const bool branch_taken_0x2fa5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA5A0u;
            // 0x2fa5a4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5a0) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA5A8u;
label_2fa5a8:
    // 0x2fa5a8: 0xc040180  jal         func_100600
label_2fa5ac:
    if (ctx->pc == 0x2FA5ACu) {
        ctx->pc = 0x2FA5ACu;
            // 0x2fa5ac: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x2FA5B0u;
        goto label_2fa5b0;
    }
    ctx->pc = 0x2FA5A8u;
    SET_GPR_U32(ctx, 31, 0x2FA5B0u);
    ctx->pc = 0x2FA5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA5A8u;
            // 0x2fa5ac: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA5B0u; }
        if (ctx->pc != 0x2FA5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA5B0u; }
        if (ctx->pc != 0x2FA5B0u) { return; }
    }
    ctx->pc = 0x2FA5B0u;
label_2fa5b0:
    // 0x2fa5b0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fa5b4:
    if (ctx->pc == 0x2FA5B4u) {
        ctx->pc = 0x2FA5B4u;
            // 0x2fa5b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA5B8u;
        goto label_2fa5b8;
    }
    ctx->pc = 0x2FA5B0u;
    {
        const bool branch_taken_0x2fa5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA5B0u;
            // 0x2fa5b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5b0) {
            ctx->pc = 0x2FA678u;
            goto label_2fa678;
        }
    }
    ctx->pc = 0x2FA5B8u;
label_2fa5b8:
    // 0x2fa5b8: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fa5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fa5bc:
    // 0x2fa5bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa5c0:
    // 0x2fa5c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa5c4:
    // 0x2fa5c4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fa5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fa5c8:
    // 0x2fa5c8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fa5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fa5cc:
    // 0x2fa5cc: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fa5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fa5d0:
    // 0x2fa5d0: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fa5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fa5d4:
    // 0x2fa5d4: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fa5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fa5d8:
    // 0x2fa5d8: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fa5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fa5dc:
    // 0x2fa5dc: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fa5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fa5e0:
    // 0x2fa5e0: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fa5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fa5e4:
    // 0x2fa5e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fa5e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fa5e8:
    // 0x2fa5e8: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fa5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fa5ec:
    // 0x2fa5ec: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fa5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fa5f0:
    // 0x2fa5f0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fa5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fa5f4:
    // 0x2fa5f4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fa5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fa5f8:
    // 0x2fa5f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa5fc:
    // 0x2fa5fc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fa5fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fa600:
    // 0x2fa600: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fa600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fa604:
    // 0x2fa604: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fa604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fa608:
    // 0x2fa608: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fa608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fa60c:
    // 0x2fa60c: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fa60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fa610:
    // 0x2fa610: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fa610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fa614:
    // 0x2fa614: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fa614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fa618:
    // 0x2fa618: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fa618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fa61c:
    // 0x2fa61c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fa61cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fa620:
    // 0x2fa620: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fa620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fa624:
    // 0x2fa624: 0xc04cbd8  jal         func_132F60
label_2fa628:
    if (ctx->pc == 0x2FA628u) {
        ctx->pc = 0x2FA628u;
            // 0x2fa628: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FA62Cu;
        goto label_2fa62c;
    }
    ctx->pc = 0x2FA624u;
    SET_GPR_U32(ctx, 31, 0x2FA62Cu);
    ctx->pc = 0x2FA628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA624u;
            // 0x2fa628: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA62Cu; }
        if (ctx->pc != 0x2FA62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA62Cu; }
        if (ctx->pc != 0x2FA62Cu) { return; }
    }
    ctx->pc = 0x2FA62Cu;
label_2fa62c:
    // 0x2fa62c: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fa62cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fa630:
    // 0x2fa630: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fa630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fa634:
    // 0x2fa634: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fa634u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fa638:
    // 0x2fa638: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fa638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fa63c:
    // 0x2fa63c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fa63cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fa640:
    // 0x2fa640: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fa640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fa644:
    // 0x2fa644: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fa644u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fa648:
    // 0x2fa648: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa64c:
    // 0x2fa64c: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fa64cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fa650:
    // 0x2fa650: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fa650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fa654:
    // 0x2fa654: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fa654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fa658:
    // 0x2fa658: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fa658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fa65c:
    // 0x2fa65c: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fa65cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fa660:
    // 0x2fa660: 0x2463a7e0  addiu       $v1, $v1, -0x5820
    ctx->pc = 0x2fa660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944736));
label_2fa664:
    // 0x2fa664: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fa664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fa668:
    // 0x2fa668: 0x24424f90  addiu       $v0, $v0, 0x4F90
    ctx->pc = 0x2fa668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20368));
label_2fa66c:
    // 0x2fa66c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fa66cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fa670:
    // 0x2fa670: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fa670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fa674:
    // 0x2fa674: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa678:
    // 0x2fa678: 0x100004a7  b           . + 4 + (0x4A7 << 2)
label_2fa67c:
    if (ctx->pc == 0x2FA67Cu) {
        ctx->pc = 0x2FA67Cu;
            // 0x2fa67c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FA680u;
        goto label_2fa680;
    }
    ctx->pc = 0x2FA678u;
    {
        const bool branch_taken_0x2fa678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA678u;
            // 0x2fa67c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa678) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA680u;
label_2fa680:
    // 0x2fa680: 0xc040180  jal         func_100600
label_2fa684:
    if (ctx->pc == 0x2FA684u) {
        ctx->pc = 0x2FA684u;
            // 0x2fa684: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FA688u;
        goto label_2fa688;
    }
    ctx->pc = 0x2FA680u;
    SET_GPR_U32(ctx, 31, 0x2FA688u);
    ctx->pc = 0x2FA684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA680u;
            // 0x2fa684: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA688u; }
        if (ctx->pc != 0x2FA688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA688u; }
        if (ctx->pc != 0x2FA688u) { return; }
    }
    ctx->pc = 0x2FA688u;
label_2fa688:
    // 0x2fa688: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fa68c:
    if (ctx->pc == 0x2FA68Cu) {
        ctx->pc = 0x2FA68Cu;
            // 0x2fa68c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA690u;
        goto label_2fa690;
    }
    ctx->pc = 0x2FA688u;
    {
        const bool branch_taken_0x2fa688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA688u;
            // 0x2fa68c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa688) {
            ctx->pc = 0x2FA750u;
            goto label_2fa750;
        }
    }
    ctx->pc = 0x2FA690u;
label_2fa690:
    // 0x2fa690: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fa690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fa694:
    // 0x2fa694: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa698:
    // 0x2fa698: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa69c:
    // 0x2fa69c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fa69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fa6a0:
    // 0x2fa6a0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fa6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fa6a4:
    // 0x2fa6a4: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fa6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fa6a8:
    // 0x2fa6a8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fa6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fa6ac:
    // 0x2fa6ac: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fa6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fa6b0:
    // 0x2fa6b0: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fa6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fa6b4:
    // 0x2fa6b4: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fa6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fa6b8:
    // 0x2fa6b8: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fa6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fa6bc:
    // 0x2fa6bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fa6bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fa6c0:
    // 0x2fa6c0: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fa6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fa6c4:
    // 0x2fa6c4: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fa6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fa6c8:
    // 0x2fa6c8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fa6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fa6cc:
    // 0x2fa6cc: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fa6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fa6d0:
    // 0x2fa6d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa6d4:
    // 0x2fa6d4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fa6d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fa6d8:
    // 0x2fa6d8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fa6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fa6dc:
    // 0x2fa6dc: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fa6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fa6e0:
    // 0x2fa6e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fa6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fa6e4:
    // 0x2fa6e4: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fa6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fa6e8:
    // 0x2fa6e8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fa6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fa6ec:
    // 0x2fa6ec: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fa6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fa6f0:
    // 0x2fa6f0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fa6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fa6f4:
    // 0x2fa6f4: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fa6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fa6f8:
    // 0x2fa6f8: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fa6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fa6fc:
    // 0x2fa6fc: 0xc04cbd8  jal         func_132F60
label_2fa700:
    if (ctx->pc == 0x2FA700u) {
        ctx->pc = 0x2FA700u;
            // 0x2fa700: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FA704u;
        goto label_2fa704;
    }
    ctx->pc = 0x2FA6FCu;
    SET_GPR_U32(ctx, 31, 0x2FA704u);
    ctx->pc = 0x2FA700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA6FCu;
            // 0x2fa700: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA704u; }
        if (ctx->pc != 0x2FA704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA704u; }
        if (ctx->pc != 0x2FA704u) { return; }
    }
    ctx->pc = 0x2FA704u;
label_2fa704:
    // 0x2fa704: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fa704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fa708:
    // 0x2fa708: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fa708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fa70c:
    // 0x2fa70c: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fa70cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fa710:
    // 0x2fa710: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fa710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fa714:
    // 0x2fa714: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fa714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fa718:
    // 0x2fa718: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fa718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fa71c:
    // 0x2fa71c: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fa71cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fa720:
    // 0x2fa720: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa724:
    // 0x2fa724: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fa724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fa728:
    // 0x2fa728: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fa728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fa72c:
    // 0x2fa72c: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fa72cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fa730:
    // 0x2fa730: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fa730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fa734:
    // 0x2fa734: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fa734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fa738:
    // 0x2fa738: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fa738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fa73c:
    // 0x2fa73c: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fa73cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fa740:
    // 0x2fa740: 0x24423810  addiu       $v0, $v0, 0x3810
    ctx->pc = 0x2fa740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14352));
label_2fa744:
    // 0x2fa744: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fa744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fa748:
    // 0x2fa748: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fa748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fa74c:
    // 0x2fa74c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa74cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa750:
    // 0x2fa750: 0x10000471  b           . + 4 + (0x471 << 2)
label_2fa754:
    if (ctx->pc == 0x2FA754u) {
        ctx->pc = 0x2FA754u;
            // 0x2fa754: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FA758u;
        goto label_2fa758;
    }
    ctx->pc = 0x2FA750u;
    {
        const bool branch_taken_0x2fa750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA750u;
            // 0x2fa754: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa750) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA758u;
label_2fa758:
    // 0x2fa758: 0xc040180  jal         func_100600
label_2fa75c:
    if (ctx->pc == 0x2FA75Cu) {
        ctx->pc = 0x2FA75Cu;
            // 0x2fa75c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FA760u;
        goto label_2fa760;
    }
    ctx->pc = 0x2FA758u;
    SET_GPR_U32(ctx, 31, 0x2FA760u);
    ctx->pc = 0x2FA75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA758u;
            // 0x2fa75c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA760u; }
        if (ctx->pc != 0x2FA760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA760u; }
        if (ctx->pc != 0x2FA760u) { return; }
    }
    ctx->pc = 0x2FA760u;
label_2fa760:
    // 0x2fa760: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fa764:
    if (ctx->pc == 0x2FA764u) {
        ctx->pc = 0x2FA764u;
            // 0x2fa764: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA768u;
        goto label_2fa768;
    }
    ctx->pc = 0x2FA760u;
    {
        const bool branch_taken_0x2fa760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA760u;
            // 0x2fa764: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa760) {
            ctx->pc = 0x2FA828u;
            goto label_2fa828;
        }
    }
    ctx->pc = 0x2FA768u;
label_2fa768:
    // 0x2fa768: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fa768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fa76c:
    // 0x2fa76c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa76cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa770:
    // 0x2fa770: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa774:
    // 0x2fa774: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fa774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fa778:
    // 0x2fa778: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fa778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fa77c:
    // 0x2fa77c: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fa77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fa780:
    // 0x2fa780: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fa780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fa784:
    // 0x2fa784: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fa784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fa788:
    // 0x2fa788: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fa788u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fa78c:
    // 0x2fa78c: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fa78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fa790:
    // 0x2fa790: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fa790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fa794:
    // 0x2fa794: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fa794u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fa798:
    // 0x2fa798: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fa798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fa79c:
    // 0x2fa79c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fa79cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fa7a0:
    // 0x2fa7a0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fa7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fa7a4:
    // 0x2fa7a4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fa7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fa7a8:
    // 0x2fa7a8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa7ac:
    // 0x2fa7ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fa7acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fa7b0:
    // 0x2fa7b0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fa7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fa7b4:
    // 0x2fa7b4: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fa7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fa7b8:
    // 0x2fa7b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fa7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fa7bc:
    // 0x2fa7bc: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fa7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fa7c0:
    // 0x2fa7c0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fa7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fa7c4:
    // 0x2fa7c4: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fa7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fa7c8:
    // 0x2fa7c8: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fa7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fa7cc:
    // 0x2fa7cc: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fa7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fa7d0:
    // 0x2fa7d0: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fa7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fa7d4:
    // 0x2fa7d4: 0xc04cbd8  jal         func_132F60
label_2fa7d8:
    if (ctx->pc == 0x2FA7D8u) {
        ctx->pc = 0x2FA7D8u;
            // 0x2fa7d8: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FA7DCu;
        goto label_2fa7dc;
    }
    ctx->pc = 0x2FA7D4u;
    SET_GPR_U32(ctx, 31, 0x2FA7DCu);
    ctx->pc = 0x2FA7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7D4u;
            // 0x2fa7d8: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA7DCu; }
        if (ctx->pc != 0x2FA7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA7DCu; }
        if (ctx->pc != 0x2FA7DCu) { return; }
    }
    ctx->pc = 0x2FA7DCu;
label_2fa7dc:
    // 0x2fa7dc: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fa7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fa7e0:
    // 0x2fa7e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fa7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fa7e4:
    // 0x2fa7e4: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fa7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fa7e8:
    // 0x2fa7e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fa7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fa7ec:
    // 0x2fa7ec: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fa7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fa7f0:
    // 0x2fa7f0: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fa7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fa7f4:
    // 0x2fa7f4: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fa7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fa7f8:
    // 0x2fa7f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa7fc:
    // 0x2fa7fc: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fa7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fa800:
    // 0x2fa800: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fa800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fa804:
    // 0x2fa804: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fa804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fa808:
    // 0x2fa808: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fa808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fa80c:
    // 0x2fa80c: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fa80cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fa810:
    // 0x2fa810: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fa810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fa814:
    // 0x2fa814: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fa814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fa818:
    // 0x2fa818: 0x244237c0  addiu       $v0, $v0, 0x37C0
    ctx->pc = 0x2fa818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14272));
label_2fa81c:
    // 0x2fa81c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fa81cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fa820:
    // 0x2fa820: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fa820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fa824:
    // 0x2fa824: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa828:
    // 0x2fa828: 0x1000043b  b           . + 4 + (0x43B << 2)
label_2fa82c:
    if (ctx->pc == 0x2FA82Cu) {
        ctx->pc = 0x2FA82Cu;
            // 0x2fa82c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FA830u;
        goto label_2fa830;
    }
    ctx->pc = 0x2FA828u;
    {
        const bool branch_taken_0x2fa828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA828u;
            // 0x2fa82c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa828) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA830u;
label_2fa830:
    // 0x2fa830: 0xc040180  jal         func_100600
label_2fa834:
    if (ctx->pc == 0x2FA834u) {
        ctx->pc = 0x2FA834u;
            // 0x2fa834: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x2FA838u;
        goto label_2fa838;
    }
    ctx->pc = 0x2FA830u;
    SET_GPR_U32(ctx, 31, 0x2FA838u);
    ctx->pc = 0x2FA834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA830u;
            // 0x2fa834: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA838u; }
        if (ctx->pc != 0x2FA838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA838u; }
        if (ctx->pc != 0x2FA838u) { return; }
    }
    ctx->pc = 0x2FA838u;
label_2fa838:
    // 0x2fa838: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2fa83c:
    if (ctx->pc == 0x2FA83Cu) {
        ctx->pc = 0x2FA83Cu;
            // 0x2fa83c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA840u;
        goto label_2fa840;
    }
    ctx->pc = 0x2FA838u;
    {
        const bool branch_taken_0x2fa838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA838u;
            // 0x2fa83c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa838) {
            ctx->pc = 0x2FA908u;
            goto label_2fa908;
        }
    }
    ctx->pc = 0x2FA840u;
label_2fa840:
    // 0x2fa840: 0xc0bd73c  jal         func_2F5CF0
label_2fa844:
    if (ctx->pc == 0x2FA844u) {
        ctx->pc = 0x2FA844u;
            // 0x2fa844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA848u;
        goto label_2fa848;
    }
    ctx->pc = 0x2FA840u;
    SET_GPR_U32(ctx, 31, 0x2FA848u);
    ctx->pc = 0x2FA844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA840u;
            // 0x2fa844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA848u; }
        if (ctx->pc != 0x2FA848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA848u; }
        if (ctx->pc != 0x2FA848u) { return; }
    }
    ctx->pc = 0x2FA848u;
label_2fa848:
    // 0x2fa848: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fa848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa84c:
    // 0x2fa84c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa850:
    // 0x2fa850: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fa850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fa854:
    // 0x2fa854: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa858:
    // 0x2fa858: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fa858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fa85c:
    // 0x2fa85c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fa85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fa860:
    // 0x2fa860: 0xc0bd73c  jal         func_2F5CF0
label_2fa864:
    if (ctx->pc == 0x2FA864u) {
        ctx->pc = 0x2FA864u;
            // 0x2fa864: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA868u;
        goto label_2fa868;
    }
    ctx->pc = 0x2FA860u;
    SET_GPR_U32(ctx, 31, 0x2FA868u);
    ctx->pc = 0x2FA864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA860u;
            // 0x2fa864: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA868u; }
        if (ctx->pc != 0x2FA868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA868u; }
        if (ctx->pc != 0x2FA868u) { return; }
    }
    ctx->pc = 0x2FA868u;
label_2fa868:
    // 0x2fa868: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa86c:
    // 0x2fa86c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fa86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa870:
    // 0x2fa870: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fa870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fa874:
    // 0x2fa874: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa878:
    // 0x2fa878: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa87c:
    // 0x2fa87c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fa87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fa880:
    // 0x2fa880: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fa880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fa884:
    // 0x2fa884: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fa884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fa888:
    // 0x2fa888: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fa888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fa88c:
    // 0x2fa88c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fa88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fa890:
    // 0x2fa890: 0xc0bf114  jal         func_2FC450
label_2fa894:
    if (ctx->pc == 0x2FA894u) {
        ctx->pc = 0x2FA894u;
            // 0x2fa894: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FA898u;
        goto label_2fa898;
    }
    ctx->pc = 0x2FA890u;
    SET_GPR_U32(ctx, 31, 0x2FA898u);
    ctx->pc = 0x2FA894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA890u;
            // 0x2fa894: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC450u;
    if (runtime->hasFunction(0x2FC450u)) {
        auto targetFn = runtime->lookupFunction(0x2FC450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA898u; }
        if (ctx->pc != 0x2FA898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC450_0x2fc450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA898u; }
        if (ctx->pc != 0x2FA898u) { return; }
    }
    ctx->pc = 0x2FA898u;
label_2fa898:
    // 0x2fa898: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa89c:
    // 0x2fa89c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa8a0:
    // 0x2fa8a0: 0x24423770  addiu       $v0, $v0, 0x3770
    ctx->pc = 0x2fa8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14192));
label_2fa8a4:
    // 0x2fa8a4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fa8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fa8a8:
    // 0x2fa8a8: 0xa2800050  sb          $zero, 0x50($s4)
    ctx->pc = 0x2fa8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 0));
label_2fa8ac:
    // 0x2fa8ac: 0xc0bd73c  jal         func_2F5CF0
label_2fa8b0:
    if (ctx->pc == 0x2FA8B0u) {
        ctx->pc = 0x2FA8B0u;
            // 0x2fa8b0: 0xae800054  sw          $zero, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x2FA8B4u;
        goto label_2fa8b4;
    }
    ctx->pc = 0x2FA8ACu;
    SET_GPR_U32(ctx, 31, 0x2FA8B4u);
    ctx->pc = 0x2FA8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8ACu;
            // 0x2fa8b0: 0xae800054  sw          $zero, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8B4u; }
        if (ctx->pc != 0x2FA8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8B4u; }
        if (ctx->pc != 0x2FA8B4u) { return; }
    }
    ctx->pc = 0x2FA8B4u;
label_2fa8b4:
    // 0x2fa8b4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fa8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa8b8:
    // 0x2fa8b8: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x2fa8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2fa8bc:
    // 0x2fa8bc: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x2fa8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_2fa8c0:
    // 0x2fa8c0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2fa8c4:
    if (ctx->pc == 0x2FA8C4u) {
        ctx->pc = 0x2FA8C8u;
        goto label_2fa8c8;
    }
    ctx->pc = 0x2FA8C0u;
    {
        const bool branch_taken_0x2fa8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa8c0) {
            ctx->pc = 0x2FA900u;
            goto label_2fa900;
        }
    }
    ctx->pc = 0x2FA8C8u;
label_2fa8c8:
    // 0x2fa8c8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2fa8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2fa8cc:
    // 0x2fa8cc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2fa8d0:
    if (ctx->pc == 0x2FA8D0u) {
        ctx->pc = 0x2FA8D4u;
        goto label_2fa8d4;
    }
    ctx->pc = 0x2FA8CCu;
    {
        const bool branch_taken_0x2fa8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa8cc) {
            ctx->pc = 0x2FA8F0u;
            goto label_2fa8f0;
        }
    }
    ctx->pc = 0x2FA8D4u;
label_2fa8d4:
    // 0x2fa8d4: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x2fa8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_2fa8d8:
    // 0x2fa8d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2fa8dc:
    if (ctx->pc == 0x2FA8DCu) {
        ctx->pc = 0x2FA8E0u;
        goto label_2fa8e0;
    }
    ctx->pc = 0x2FA8D8u;
    {
        const bool branch_taken_0x2fa8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa8d8) {
            ctx->pc = 0x2FA8E8u;
            goto label_2fa8e8;
        }
    }
    ctx->pc = 0x2FA8E0u;
label_2fa8e0:
    // 0x2fa8e0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2fa8e4:
    if (ctx->pc == 0x2FA8E4u) {
        ctx->pc = 0x2FA8E8u;
        goto label_2fa8e8;
    }
    ctx->pc = 0x2FA8E0u;
    {
        const bool branch_taken_0x2fa8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa8e0) {
            ctx->pc = 0x2FA908u;
            goto label_2fa908;
        }
    }
    ctx->pc = 0x2FA8E8u;
label_2fa8e8:
    // 0x2fa8e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2fa8ec:
    if (ctx->pc == 0x2FA8ECu) {
        ctx->pc = 0x2FA8ECu;
            // 0x2fa8ec: 0xa2800050  sb          $zero, 0x50($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2FA8F0u;
        goto label_2fa8f0;
    }
    ctx->pc = 0x2FA8E8u;
    {
        const bool branch_taken_0x2fa8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8E8u;
            // 0x2fa8ec: 0xa2800050  sb          $zero, 0x50($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8e8) {
            ctx->pc = 0x2FA908u;
            goto label_2fa908;
        }
    }
    ctx->pc = 0x2FA8F0u;
label_2fa8f0:
    // 0x2fa8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa8f4:
    // 0x2fa8f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2fa8f8:
    if (ctx->pc == 0x2FA8F8u) {
        ctx->pc = 0x2FA8F8u;
            // 0x2fa8f8: 0xa2820050  sb          $v0, 0x50($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2FA8FCu;
        goto label_2fa8fc;
    }
    ctx->pc = 0x2FA8F4u;
    {
        const bool branch_taken_0x2fa8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8F4u;
            // 0x2fa8f8: 0xa2820050  sb          $v0, 0x50($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8f4) {
            ctx->pc = 0x2FA908u;
            goto label_2fa908;
        }
    }
    ctx->pc = 0x2FA8FCu;
label_2fa8fc:
    // 0x2fa8fc: 0x0  nop
    ctx->pc = 0x2fa8fcu;
    // NOP
label_2fa900:
    // 0x2fa900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fa904:
    // 0x2fa904: 0xa2820050  sb          $v0, 0x50($s4)
    ctx->pc = 0x2fa904u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 2));
label_2fa908:
    // 0x2fa908: 0x10000403  b           . + 4 + (0x403 << 2)
label_2fa90c:
    if (ctx->pc == 0x2FA90Cu) {
        ctx->pc = 0x2FA90Cu;
            // 0x2fa90c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FA910u;
        goto label_2fa910;
    }
    ctx->pc = 0x2FA908u;
    {
        const bool branch_taken_0x2fa908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA908u;
            // 0x2fa90c: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa908) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA910u;
label_2fa910:
    // 0x2fa910: 0xc040180  jal         func_100600
label_2fa914:
    if (ctx->pc == 0x2FA914u) {
        ctx->pc = 0x2FA914u;
            // 0x2fa914: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FA918u;
        goto label_2fa918;
    }
    ctx->pc = 0x2FA910u;
    SET_GPR_U32(ctx, 31, 0x2FA918u);
    ctx->pc = 0x2FA914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA910u;
            // 0x2fa914: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA918u; }
        if (ctx->pc != 0x2FA918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA918u; }
        if (ctx->pc != 0x2FA918u) { return; }
    }
    ctx->pc = 0x2FA918u;
label_2fa918:
    // 0x2fa918: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fa91c:
    if (ctx->pc == 0x2FA91Cu) {
        ctx->pc = 0x2FA91Cu;
            // 0x2fa91c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA920u;
        goto label_2fa920;
    }
    ctx->pc = 0x2FA918u;
    {
        const bool branch_taken_0x2fa918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA918u;
            // 0x2fa91c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa918) {
            ctx->pc = 0x2FA9E0u;
            goto label_2fa9e0;
        }
    }
    ctx->pc = 0x2FA920u;
label_2fa920:
    // 0x2fa920: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fa920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fa924:
    // 0x2fa924: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa928:
    // 0x2fa928: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa92c:
    // 0x2fa92c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fa92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fa930:
    // 0x2fa930: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fa930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fa934:
    // 0x2fa934: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fa934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fa938:
    // 0x2fa938: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fa938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fa93c:
    // 0x2fa93c: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fa93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fa940:
    // 0x2fa940: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fa940u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fa944:
    // 0x2fa944: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fa944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fa948:
    // 0x2fa948: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fa948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fa94c:
    // 0x2fa94c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fa94cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fa950:
    // 0x2fa950: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fa950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fa954:
    // 0x2fa954: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fa954u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fa958:
    // 0x2fa958: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fa958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fa95c:
    // 0x2fa95c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fa95cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fa960:
    // 0x2fa960: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa964:
    // 0x2fa964: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fa964u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fa968:
    // 0x2fa968: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fa968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fa96c:
    // 0x2fa96c: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fa96cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fa970:
    // 0x2fa970: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fa970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fa974:
    // 0x2fa974: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fa974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fa978:
    // 0x2fa978: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fa978u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fa97c:
    // 0x2fa97c: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fa97cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fa980:
    // 0x2fa980: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fa980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fa984:
    // 0x2fa984: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fa984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fa988:
    // 0x2fa988: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fa988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fa98c:
    // 0x2fa98c: 0xc04cbd8  jal         func_132F60
label_2fa990:
    if (ctx->pc == 0x2FA990u) {
        ctx->pc = 0x2FA990u;
            // 0x2fa990: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FA994u;
        goto label_2fa994;
    }
    ctx->pc = 0x2FA98Cu;
    SET_GPR_U32(ctx, 31, 0x2FA994u);
    ctx->pc = 0x2FA990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA98Cu;
            // 0x2fa990: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA994u; }
        if (ctx->pc != 0x2FA994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA994u; }
        if (ctx->pc != 0x2FA994u) { return; }
    }
    ctx->pc = 0x2FA994u;
label_2fa994:
    // 0x2fa994: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fa994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fa998:
    // 0x2fa998: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fa998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fa99c:
    // 0x2fa99c: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fa99cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fa9a0:
    // 0x2fa9a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fa9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fa9a4:
    // 0x2fa9a4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fa9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fa9a8:
    // 0x2fa9a8: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fa9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fa9ac:
    // 0x2fa9ac: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fa9acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fa9b0:
    // 0x2fa9b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fa9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fa9b4:
    // 0x2fa9b4: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fa9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fa9b8:
    // 0x2fa9b8: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fa9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fa9bc:
    // 0x2fa9bc: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fa9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fa9c0:
    // 0x2fa9c0: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fa9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fa9c4:
    // 0x2fa9c4: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fa9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fa9c8:
    // 0x2fa9c8: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fa9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fa9cc:
    // 0x2fa9cc: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fa9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fa9d0:
    // 0x2fa9d0: 0x24423720  addiu       $v0, $v0, 0x3720
    ctx->pc = 0x2fa9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
label_2fa9d4:
    // 0x2fa9d4: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fa9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fa9d8:
    // 0x2fa9d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fa9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fa9dc:
    // 0x2fa9dc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fa9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fa9e0:
    // 0x2fa9e0: 0x100003cd  b           . + 4 + (0x3CD << 2)
label_2fa9e4:
    if (ctx->pc == 0x2FA9E4u) {
        ctx->pc = 0x2FA9E4u;
            // 0x2fa9e4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FA9E8u;
        goto label_2fa9e8;
    }
    ctx->pc = 0x2FA9E0u;
    {
        const bool branch_taken_0x2fa9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9E0u;
            // 0x2fa9e4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9e0) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FA9E8u;
label_2fa9e8:
    // 0x2fa9e8: 0xc040180  jal         func_100600
label_2fa9ec:
    if (ctx->pc == 0x2FA9ECu) {
        ctx->pc = 0x2FA9ECu;
            // 0x2fa9ec: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FA9F0u;
        goto label_2fa9f0;
    }
    ctx->pc = 0x2FA9E8u;
    SET_GPR_U32(ctx, 31, 0x2FA9F0u);
    ctx->pc = 0x2FA9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9E8u;
            // 0x2fa9ec: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9F0u; }
        if (ctx->pc != 0x2FA9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9F0u; }
        if (ctx->pc != 0x2FA9F0u) { return; }
    }
    ctx->pc = 0x2FA9F0u;
label_2fa9f0:
    // 0x2fa9f0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fa9f4:
    if (ctx->pc == 0x2FA9F4u) {
        ctx->pc = 0x2FA9F4u;
            // 0x2fa9f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9F8u;
        goto label_2fa9f8;
    }
    ctx->pc = 0x2FA9F0u;
    {
        const bool branch_taken_0x2fa9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9F0u;
            // 0x2fa9f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9f0) {
            ctx->pc = 0x2FAAB8u;
            goto label_2faab8;
        }
    }
    ctx->pc = 0x2FA9F8u;
label_2fa9f8:
    // 0x2fa9f8: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fa9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fa9fc:
    // 0x2fa9fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2faa00:
    // 0x2faa00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2faa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2faa04:
    // 0x2faa04: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2faa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2faa08:
    // 0x2faa08: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2faa08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2faa0c:
    // 0x2faa0c: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2faa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2faa10:
    // 0x2faa10: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2faa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2faa14:
    // 0x2faa14: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2faa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2faa18:
    // 0x2faa18: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2faa18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2faa1c:
    // 0x2faa1c: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2faa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2faa20:
    // 0x2faa20: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2faa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2faa24:
    // 0x2faa24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2faa24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2faa28:
    // 0x2faa28: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2faa28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2faa2c:
    // 0x2faa2c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2faa2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2faa30:
    // 0x2faa30: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2faa30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2faa34:
    // 0x2faa34: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2faa34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2faa38:
    // 0x2faa38: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2faa38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2faa3c:
    // 0x2faa3c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2faa3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2faa40:
    // 0x2faa40: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2faa40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2faa44:
    // 0x2faa44: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2faa44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2faa48:
    // 0x2faa48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2faa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2faa4c:
    // 0x2faa4c: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2faa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2faa50:
    // 0x2faa50: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2faa50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2faa54:
    // 0x2faa54: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2faa54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2faa58:
    // 0x2faa58: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2faa58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2faa5c:
    // 0x2faa5c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2faa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2faa60:
    // 0x2faa60: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2faa60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2faa64:
    // 0x2faa64: 0xc04cbd8  jal         func_132F60
label_2faa68:
    if (ctx->pc == 0x2FAA68u) {
        ctx->pc = 0x2FAA68u;
            // 0x2faa68: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FAA6Cu;
        goto label_2faa6c;
    }
    ctx->pc = 0x2FAA64u;
    SET_GPR_U32(ctx, 31, 0x2FAA6Cu);
    ctx->pc = 0x2FAA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAA64u;
            // 0x2faa68: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA6Cu; }
        if (ctx->pc != 0x2FAA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAA6Cu; }
        if (ctx->pc != 0x2FAA6Cu) { return; }
    }
    ctx->pc = 0x2FAA6Cu;
label_2faa6c:
    // 0x2faa6c: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2faa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2faa70:
    // 0x2faa70: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2faa70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2faa74:
    // 0x2faa74: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2faa74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2faa78:
    // 0x2faa78: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2faa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2faa7c:
    // 0x2faa7c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2faa7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2faa80:
    // 0x2faa80: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2faa80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2faa84:
    // 0x2faa84: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2faa84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2faa88:
    // 0x2faa88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2faa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2faa8c:
    // 0x2faa8c: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2faa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2faa90:
    // 0x2faa90: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2faa90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2faa94:
    // 0x2faa94: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2faa94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2faa98:
    // 0x2faa98: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2faa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2faa9c:
    // 0x2faa9c: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2faa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2faaa0:
    // 0x2faaa0: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2faaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2faaa4:
    // 0x2faaa4: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2faaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2faaa8:
    // 0x2faaa8: 0x244236d0  addiu       $v0, $v0, 0x36D0
    ctx->pc = 0x2faaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14032));
label_2faaac:
    // 0x2faaac: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2faaacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2faab0:
    // 0x2faab0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2faab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2faab4:
    // 0x2faab4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2faab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2faab8:
    // 0x2faab8: 0x10000397  b           . + 4 + (0x397 << 2)
label_2faabc:
    if (ctx->pc == 0x2FAABCu) {
        ctx->pc = 0x2FAABCu;
            // 0x2faabc: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FAAC0u;
        goto label_2faac0;
    }
    ctx->pc = 0x2FAAB8u;
    {
        const bool branch_taken_0x2faab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAAB8u;
            // 0x2faabc: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faab8) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FAAC0u;
label_2faac0:
    // 0x2faac0: 0xc040180  jal         func_100600
label_2faac4:
    if (ctx->pc == 0x2FAAC4u) {
        ctx->pc = 0x2FAAC4u;
            // 0x2faac4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FAAC8u;
        goto label_2faac8;
    }
    ctx->pc = 0x2FAAC0u;
    SET_GPR_U32(ctx, 31, 0x2FAAC8u);
    ctx->pc = 0x2FAAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAAC0u;
            // 0x2faac4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAAC8u; }
        if (ctx->pc != 0x2FAAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAAC8u; }
        if (ctx->pc != 0x2FAAC8u) { return; }
    }
    ctx->pc = 0x2FAAC8u;
label_2faac8:
    // 0x2faac8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2faacc:
    if (ctx->pc == 0x2FAACCu) {
        ctx->pc = 0x2FAACCu;
            // 0x2faacc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAAD0u;
        goto label_2faad0;
    }
    ctx->pc = 0x2FAAC8u;
    {
        const bool branch_taken_0x2faac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAAC8u;
            // 0x2faacc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faac8) {
            ctx->pc = 0x2FAB90u;
            goto label_2fab90;
        }
    }
    ctx->pc = 0x2FAAD0u;
label_2faad0:
    // 0x2faad0: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2faad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2faad4:
    // 0x2faad4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2faad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2faad8:
    // 0x2faad8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2faad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2faadc:
    // 0x2faadc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2faadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2faae0:
    // 0x2faae0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2faae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2faae4:
    // 0x2faae4: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2faae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2faae8:
    // 0x2faae8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2faae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2faaec:
    // 0x2faaec: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2faaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2faaf0:
    // 0x2faaf0: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2faaf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2faaf4:
    // 0x2faaf4: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2faaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2faaf8:
    // 0x2faaf8: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2faaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2faafc:
    // 0x2faafc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2faafcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fab00:
    // 0x2fab00: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fab04:
    // 0x2fab04: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fab04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fab08:
    // 0x2fab08: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fab08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fab0c:
    // 0x2fab0c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fab0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fab10:
    // 0x2fab10: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fab10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fab14:
    // 0x2fab14: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fab14u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fab18:
    // 0x2fab18: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fab18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fab1c:
    // 0x2fab1c: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fab20:
    // 0x2fab20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fab24:
    // 0x2fab24: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fab24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fab28:
    // 0x2fab28: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fab28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fab2c:
    // 0x2fab2c: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fab30:
    // 0x2fab30: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fab30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fab34:
    // 0x2fab34: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fab34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fab38:
    // 0x2fab38: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fab38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fab3c:
    // 0x2fab3c: 0xc04cbd8  jal         func_132F60
label_2fab40:
    if (ctx->pc == 0x2FAB40u) {
        ctx->pc = 0x2FAB40u;
            // 0x2fab40: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FAB44u;
        goto label_2fab44;
    }
    ctx->pc = 0x2FAB3Cu;
    SET_GPR_U32(ctx, 31, 0x2FAB44u);
    ctx->pc = 0x2FAB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAB3Cu;
            // 0x2fab40: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB44u; }
        if (ctx->pc != 0x2FAB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAB44u; }
        if (ctx->pc != 0x2FAB44u) { return; }
    }
    ctx->pc = 0x2FAB44u;
label_2fab44:
    // 0x2fab44: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fab44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fab48:
    // 0x2fab48: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fab48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fab4c:
    // 0x2fab4c: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fab50:
    // 0x2fab50: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fab50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fab54:
    // 0x2fab54: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fab54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fab58:
    // 0x2fab58: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fab58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fab5c:
    // 0x2fab5c: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fab60:
    // 0x2fab60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fab60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fab64:
    // 0x2fab64: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fab64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fab68:
    // 0x2fab68: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fab68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fab6c:
    // 0x2fab6c: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fab70:
    // 0x2fab70: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fab70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fab74:
    // 0x2fab74: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fab74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fab78:
    // 0x2fab78: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fab7c:
    // 0x2fab7c: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fab80:
    // 0x2fab80: 0x24423680  addiu       $v0, $v0, 0x3680
    ctx->pc = 0x2fab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13952));
label_2fab84:
    // 0x2fab84: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fab84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fab88:
    // 0x2fab88: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fab88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fab8c:
    // 0x2fab8c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fab90:
    // 0x2fab90: 0x10000361  b           . + 4 + (0x361 << 2)
label_2fab94:
    if (ctx->pc == 0x2FAB94u) {
        ctx->pc = 0x2FAB94u;
            // 0x2fab94: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FAB98u;
        goto label_2fab98;
    }
    ctx->pc = 0x2FAB90u;
    {
        const bool branch_taken_0x2fab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAB90u;
            // 0x2fab94: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab90) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FAB98u;
label_2fab98:
    // 0x2fab98: 0xc040180  jal         func_100600
label_2fab9c:
    if (ctx->pc == 0x2FAB9Cu) {
        ctx->pc = 0x2FAB9Cu;
            // 0x2fab9c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FABA0u;
        goto label_2faba0;
    }
    ctx->pc = 0x2FAB98u;
    SET_GPR_U32(ctx, 31, 0x2FABA0u);
    ctx->pc = 0x2FAB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAB98u;
            // 0x2fab9c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FABA0u; }
        if (ctx->pc != 0x2FABA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FABA0u; }
        if (ctx->pc != 0x2FABA0u) { return; }
    }
    ctx->pc = 0x2FABA0u;
label_2faba0:
    // 0x2faba0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2faba4:
    if (ctx->pc == 0x2FABA4u) {
        ctx->pc = 0x2FABA4u;
            // 0x2faba4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FABA8u;
        goto label_2faba8;
    }
    ctx->pc = 0x2FABA0u;
    {
        const bool branch_taken_0x2faba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FABA0u;
            // 0x2faba4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faba0) {
            ctx->pc = 0x2FAC68u;
            goto label_2fac68;
        }
    }
    ctx->pc = 0x2FABA8u;
label_2faba8:
    // 0x2faba8: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2faba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fabac:
    // 0x2fabac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fabacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fabb0:
    // 0x2fabb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fabb4:
    // 0x2fabb4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fabb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fabb8:
    // 0x2fabb8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fabb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fabbc:
    // 0x2fabbc: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fabc0:
    // 0x2fabc0: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fabc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fabc4:
    // 0x2fabc4: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fabc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fabc8:
    // 0x2fabc8: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fabc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fabcc:
    // 0x2fabcc: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fabccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fabd0:
    // 0x2fabd0: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fabd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fabd4:
    // 0x2fabd4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fabd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fabd8:
    // 0x2fabd8: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fabdc:
    // 0x2fabdc: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fabdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fabe0:
    // 0x2fabe0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fabe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fabe4:
    // 0x2fabe4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fabe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fabe8:
    // 0x2fabe8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fabe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fabec:
    // 0x2fabec: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fabecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fabf0:
    // 0x2fabf0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fabf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fabf4:
    // 0x2fabf4: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fabf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fabf8:
    // 0x2fabf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fabfc:
    // 0x2fabfc: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fabfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fac00:
    // 0x2fac00: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fac00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fac04:
    // 0x2fac04: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fac04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fac08:
    // 0x2fac08: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fac08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fac0c:
    // 0x2fac0c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fac10:
    // 0x2fac10: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fac10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fac14:
    // 0x2fac14: 0xc04cbd8  jal         func_132F60
label_2fac18:
    if (ctx->pc == 0x2FAC18u) {
        ctx->pc = 0x2FAC18u;
            // 0x2fac18: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FAC1Cu;
        goto label_2fac1c;
    }
    ctx->pc = 0x2FAC14u;
    SET_GPR_U32(ctx, 31, 0x2FAC1Cu);
    ctx->pc = 0x2FAC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAC14u;
            // 0x2fac18: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAC1Cu; }
        if (ctx->pc != 0x2FAC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAC1Cu; }
        if (ctx->pc != 0x2FAC1Cu) { return; }
    }
    ctx->pc = 0x2FAC1Cu;
label_2fac1c:
    // 0x2fac1c: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fac20:
    // 0x2fac20: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fac20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fac24:
    // 0x2fac24: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fac24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fac28:
    // 0x2fac28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fac28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fac2c:
    // 0x2fac2c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fac30:
    // 0x2fac30: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fac30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fac34:
    // 0x2fac34: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fac34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fac38:
    // 0x2fac38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fac3c:
    // 0x2fac3c: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fac40:
    // 0x2fac40: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fac40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fac44:
    // 0x2fac44: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fac44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fac48:
    // 0x2fac48: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fac4c:
    // 0x2fac4c: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fac50:
    // 0x2fac50: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fac50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fac54:
    // 0x2fac54: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fac54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fac58:
    // 0x2fac58: 0x24423630  addiu       $v0, $v0, 0x3630
    ctx->pc = 0x2fac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13872));
label_2fac5c:
    // 0x2fac5c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fac60:
    // 0x2fac60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fac60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fac64:
    // 0x2fac64: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fac64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fac68:
    // 0x2fac68: 0x1000032b  b           . + 4 + (0x32B << 2)
label_2fac6c:
    if (ctx->pc == 0x2FAC6Cu) {
        ctx->pc = 0x2FAC6Cu;
            // 0x2fac6c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FAC70u;
        goto label_2fac70;
    }
    ctx->pc = 0x2FAC68u;
    {
        const bool branch_taken_0x2fac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAC68u;
            // 0x2fac6c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac68) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FAC70u;
label_2fac70:
    // 0x2fac70: 0xc040180  jal         func_100600
label_2fac74:
    if (ctx->pc == 0x2FAC74u) {
        ctx->pc = 0x2FAC74u;
            // 0x2fac74: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FAC78u;
        goto label_2fac78;
    }
    ctx->pc = 0x2FAC70u;
    SET_GPR_U32(ctx, 31, 0x2FAC78u);
    ctx->pc = 0x2FAC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAC70u;
            // 0x2fac74: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAC78u; }
        if (ctx->pc != 0x2FAC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAC78u; }
        if (ctx->pc != 0x2FAC78u) { return; }
    }
    ctx->pc = 0x2FAC78u;
label_2fac78:
    // 0x2fac78: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fac7c:
    if (ctx->pc == 0x2FAC7Cu) {
        ctx->pc = 0x2FAC7Cu;
            // 0x2fac7c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC80u;
        goto label_2fac80;
    }
    ctx->pc = 0x2FAC78u;
    {
        const bool branch_taken_0x2fac78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAC78u;
            // 0x2fac7c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac78) {
            ctx->pc = 0x2FAD40u;
            goto label_2fad40;
        }
    }
    ctx->pc = 0x2FAC80u;
label_2fac80:
    // 0x2fac80: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fac80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fac84:
    // 0x2fac84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fac84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fac88:
    // 0x2fac88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fac88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fac8c:
    // 0x2fac8c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fac90:
    // 0x2fac90: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fac90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fac94:
    // 0x2fac94: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fac98:
    // 0x2fac98: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fac98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fac9c:
    // 0x2fac9c: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2faca0:
    // 0x2faca0: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2faca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2faca4:
    // 0x2faca4: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2faca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2faca8:
    // 0x2faca8: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2faca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2facac:
    // 0x2facac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2facacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2facb0:
    // 0x2facb0: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2facb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2facb4:
    // 0x2facb4: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2facb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2facb8:
    // 0x2facb8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2facb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2facbc:
    // 0x2facbc: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2facbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2facc0:
    // 0x2facc0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2facc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2facc4:
    // 0x2facc4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2facc4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2facc8:
    // 0x2facc8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2facc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2faccc:
    // 0x2faccc: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2facccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2facd0:
    // 0x2facd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2facd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2facd4:
    // 0x2facd4: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2facd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2facd8:
    // 0x2facd8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2facd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2facdc:
    // 0x2facdc: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2facdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2face0:
    // 0x2face0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2face0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2face4:
    // 0x2face4: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2face4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2face8:
    // 0x2face8: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2face8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2facec:
    // 0x2facec: 0xc04cbd8  jal         func_132F60
label_2facf0:
    if (ctx->pc == 0x2FACF0u) {
        ctx->pc = 0x2FACF0u;
            // 0x2facf0: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FACF4u;
        goto label_2facf4;
    }
    ctx->pc = 0x2FACECu;
    SET_GPR_U32(ctx, 31, 0x2FACF4u);
    ctx->pc = 0x2FACF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FACECu;
            // 0x2facf0: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FACF4u; }
        if (ctx->pc != 0x2FACF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FACF4u; }
        if (ctx->pc != 0x2FACF4u) { return; }
    }
    ctx->pc = 0x2FACF4u;
label_2facf4:
    // 0x2facf4: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2facf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2facf8:
    // 0x2facf8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2facf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2facfc:
    // 0x2facfc: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2facfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fad00:
    // 0x2fad00: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fad00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fad04:
    // 0x2fad04: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fad04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fad08:
    // 0x2fad08: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fad08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fad0c:
    // 0x2fad0c: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fad10:
    // 0x2fad10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fad10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fad14:
    // 0x2fad14: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fad14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fad18:
    // 0x2fad18: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fad18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fad1c:
    // 0x2fad1c: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fad20:
    // 0x2fad20: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fad24:
    // 0x2fad24: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fad24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fad28:
    // 0x2fad28: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fad2c:
    // 0x2fad2c: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fad30:
    // 0x2fad30: 0x244235e0  addiu       $v0, $v0, 0x35E0
    ctx->pc = 0x2fad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
label_2fad34:
    // 0x2fad34: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fad34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fad38:
    // 0x2fad38: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fad38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fad3c:
    // 0x2fad3c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fad40:
    // 0x2fad40: 0x100002f5  b           . + 4 + (0x2F5 << 2)
label_2fad44:
    if (ctx->pc == 0x2FAD44u) {
        ctx->pc = 0x2FAD44u;
            // 0x2fad44: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FAD48u;
        goto label_2fad48;
    }
    ctx->pc = 0x2FAD40u;
    {
        const bool branch_taken_0x2fad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAD40u;
            // 0x2fad44: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad40) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FAD48u;
label_2fad48:
    // 0x2fad48: 0xc040180  jal         func_100600
label_2fad4c:
    if (ctx->pc == 0x2FAD4Cu) {
        ctx->pc = 0x2FAD4Cu;
            // 0x2fad4c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FAD50u;
        goto label_2fad50;
    }
    ctx->pc = 0x2FAD48u;
    SET_GPR_U32(ctx, 31, 0x2FAD50u);
    ctx->pc = 0x2FAD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAD48u;
            // 0x2fad4c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAD50u; }
        if (ctx->pc != 0x2FAD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAD50u; }
        if (ctx->pc != 0x2FAD50u) { return; }
    }
    ctx->pc = 0x2FAD50u;
label_2fad50:
    // 0x2fad50: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fad54:
    if (ctx->pc == 0x2FAD54u) {
        ctx->pc = 0x2FAD54u;
            // 0x2fad54: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD58u;
        goto label_2fad58;
    }
    ctx->pc = 0x2FAD50u;
    {
        const bool branch_taken_0x2fad50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAD50u;
            // 0x2fad54: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad50) {
            ctx->pc = 0x2FAE18u;
            goto label_2fae18;
        }
    }
    ctx->pc = 0x2FAD58u;
label_2fad58:
    // 0x2fad58: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fad58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fad5c:
    // 0x2fad5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fad5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fad60:
    // 0x2fad60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fad60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fad64:
    // 0x2fad64: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fad64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fad68:
    // 0x2fad68: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fad68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fad6c:
    // 0x2fad6c: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fad70:
    // 0x2fad70: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fad74:
    // 0x2fad74: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fad78:
    // 0x2fad78: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fad78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fad7c:
    // 0x2fad7c: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fad7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fad80:
    // 0x2fad80: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fad80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fad84:
    // 0x2fad84: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fad84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fad88:
    // 0x2fad88: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fad88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fad8c:
    // 0x2fad8c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fad8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fad90:
    // 0x2fad90: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fad90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fad94:
    // 0x2fad94: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fad94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fad98:
    // 0x2fad98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fad98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fad9c:
    // 0x2fad9c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fad9cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fada0:
    // 0x2fada0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fada0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fada4:
    // 0x2fada4: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fada4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fada8:
    // 0x2fada8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fadac:
    // 0x2fadac: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fadacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fadb0:
    // 0x2fadb0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fadb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fadb4:
    // 0x2fadb4: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fadb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fadb8:
    // 0x2fadb8: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fadb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fadbc:
    // 0x2fadbc: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fadbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fadc0:
    // 0x2fadc0: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fadc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fadc4:
    // 0x2fadc4: 0xc04cbd8  jal         func_132F60
label_2fadc8:
    if (ctx->pc == 0x2FADC8u) {
        ctx->pc = 0x2FADC8u;
            // 0x2fadc8: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FADCCu;
        goto label_2fadcc;
    }
    ctx->pc = 0x2FADC4u;
    SET_GPR_U32(ctx, 31, 0x2FADCCu);
    ctx->pc = 0x2FADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FADC4u;
            // 0x2fadc8: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FADCCu; }
        if (ctx->pc != 0x2FADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FADCCu; }
        if (ctx->pc != 0x2FADCCu) { return; }
    }
    ctx->pc = 0x2FADCCu;
label_2fadcc:
    // 0x2fadcc: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fadccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fadd0:
    // 0x2fadd0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fadd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fadd4:
    // 0x2fadd4: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fadd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fadd8:
    // 0x2fadd8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fadd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2faddc:
    // 0x2faddc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2faddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fade0:
    // 0x2fade0: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fade0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fade4:
    // 0x2fade4: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fade4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fade8:
    // 0x2fade8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fade8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fadec:
    // 0x2fadec: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fadecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fadf0:
    // 0x2fadf0: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fadf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fadf4:
    // 0x2fadf4: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fadf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fadf8:
    // 0x2fadf8: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fadf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fadfc:
    // 0x2fadfc: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fae00:
    // 0x2fae00: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fae04:
    // 0x2fae04: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fae04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fae08:
    // 0x2fae08: 0x24425120  addiu       $v0, $v0, 0x5120
    ctx->pc = 0x2fae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20768));
label_2fae0c:
    // 0x2fae0c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fae10:
    // 0x2fae10: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fae10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fae14:
    // 0x2fae14: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fae14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fae18:
    // 0x2fae18: 0x100002bf  b           . + 4 + (0x2BF << 2)
label_2fae1c:
    if (ctx->pc == 0x2FAE1Cu) {
        ctx->pc = 0x2FAE1Cu;
            // 0x2fae1c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FAE20u;
        goto label_2fae20;
    }
    ctx->pc = 0x2FAE18u;
    {
        const bool branch_taken_0x2fae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE18u;
            // 0x2fae1c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae18) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FAE20u;
label_2fae20:
    // 0x2fae20: 0xc040180  jal         func_100600
label_2fae24:
    if (ctx->pc == 0x2FAE24u) {
        ctx->pc = 0x2FAE24u;
            // 0x2fae24: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FAE28u;
        goto label_2fae28;
    }
    ctx->pc = 0x2FAE20u;
    SET_GPR_U32(ctx, 31, 0x2FAE28u);
    ctx->pc = 0x2FAE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE20u;
            // 0x2fae24: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAE28u; }
        if (ctx->pc != 0x2FAE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAE28u; }
        if (ctx->pc != 0x2FAE28u) { return; }
    }
    ctx->pc = 0x2FAE28u;
label_2fae28:
    // 0x2fae28: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fae2c:
    if (ctx->pc == 0x2FAE2Cu) {
        ctx->pc = 0x2FAE2Cu;
            // 0x2fae2c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE30u;
        goto label_2fae30;
    }
    ctx->pc = 0x2FAE28u;
    {
        const bool branch_taken_0x2fae28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE28u;
            // 0x2fae2c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae28) {
            ctx->pc = 0x2FAEF0u;
            goto label_2faef0;
        }
    }
    ctx->pc = 0x2FAE30u;
label_2fae30:
    // 0x2fae30: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fae30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fae34:
    // 0x2fae34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fae34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fae38:
    // 0x2fae38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fae38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fae3c:
    // 0x2fae3c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fae40:
    // 0x2fae40: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fae40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fae44:
    // 0x2fae44: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fae48:
    // 0x2fae48: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fae48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fae4c:
    // 0x2fae4c: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fae50:
    // 0x2fae50: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fae50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fae54:
    // 0x2fae54: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fae54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fae58:
    // 0x2fae58: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fae5c:
    // 0x2fae5c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fae5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fae60:
    // 0x2fae60: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fae60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fae64:
    // 0x2fae64: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fae64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fae68:
    // 0x2fae68: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fae68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fae6c:
    // 0x2fae6c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fae6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fae70:
    // 0x2fae70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fae70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fae74:
    // 0x2fae74: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fae74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fae78:
    // 0x2fae78: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fae7c:
    // 0x2fae7c: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fae80:
    // 0x2fae80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fae84:
    // 0x2fae84: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fae84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fae88:
    // 0x2fae88: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fae88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fae8c:
    // 0x2fae8c: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fae90:
    // 0x2fae90: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fae90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fae94:
    // 0x2fae94: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fae94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fae98:
    // 0x2fae98: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fae98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fae9c:
    // 0x2fae9c: 0xc04cbd8  jal         func_132F60
label_2faea0:
    if (ctx->pc == 0x2FAEA0u) {
        ctx->pc = 0x2FAEA0u;
            // 0x2faea0: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FAEA4u;
        goto label_2faea4;
    }
    ctx->pc = 0x2FAE9Cu;
    SET_GPR_U32(ctx, 31, 0x2FAEA4u);
    ctx->pc = 0x2FAEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAE9Cu;
            // 0x2faea0: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAEA4u; }
        if (ctx->pc != 0x2FAEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAEA4u; }
        if (ctx->pc != 0x2FAEA4u) { return; }
    }
    ctx->pc = 0x2FAEA4u;
label_2faea4:
    // 0x2faea4: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2faea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2faea8:
    // 0x2faea8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2faea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2faeac:
    // 0x2faeac: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2faeacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2faeb0:
    // 0x2faeb0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2faeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2faeb4:
    // 0x2faeb4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2faeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2faeb8:
    // 0x2faeb8: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2faeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2faebc:
    // 0x2faebc: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2faebcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2faec0:
    // 0x2faec0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2faec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2faec4:
    // 0x2faec4: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2faec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2faec8:
    // 0x2faec8: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2faec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2faecc:
    // 0x2faecc: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2faeccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2faed0:
    // 0x2faed0: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2faed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2faed4:
    // 0x2faed4: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2faed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2faed8:
    // 0x2faed8: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2faed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2faedc:
    // 0x2faedc: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2faedcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2faee0:
    // 0x2faee0: 0x24423590  addiu       $v0, $v0, 0x3590
    ctx->pc = 0x2faee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13712));
label_2faee4:
    // 0x2faee4: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2faee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2faee8:
    // 0x2faee8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2faee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2faeec:
    // 0x2faeec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2faeecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2faef0:
    // 0x2faef0: 0x10000289  b           . + 4 + (0x289 << 2)
label_2faef4:
    if (ctx->pc == 0x2FAEF4u) {
        ctx->pc = 0x2FAEF4u;
            // 0x2faef4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FAEF8u;
        goto label_2faef8;
    }
    ctx->pc = 0x2FAEF0u;
    {
        const bool branch_taken_0x2faef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAEF0u;
            // 0x2faef4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faef0) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FAEF8u;
label_2faef8:
    // 0x2faef8: 0xc040180  jal         func_100600
label_2faefc:
    if (ctx->pc == 0x2FAEFCu) {
        ctx->pc = 0x2FAEFCu;
            // 0x2faefc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FAF00u;
        goto label_2faf00;
    }
    ctx->pc = 0x2FAEF8u;
    SET_GPR_U32(ctx, 31, 0x2FAF00u);
    ctx->pc = 0x2FAEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAEF8u;
            // 0x2faefc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAF00u; }
        if (ctx->pc != 0x2FAF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAF00u; }
        if (ctx->pc != 0x2FAF00u) { return; }
    }
    ctx->pc = 0x2FAF00u;
label_2faf00:
    // 0x2faf00: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2faf04:
    if (ctx->pc == 0x2FAF04u) {
        ctx->pc = 0x2FAF04u;
            // 0x2faf04: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF08u;
        goto label_2faf08;
    }
    ctx->pc = 0x2FAF00u;
    {
        const bool branch_taken_0x2faf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAF00u;
            // 0x2faf04: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf00) {
            ctx->pc = 0x2FAFC8u;
            goto label_2fafc8;
        }
    }
    ctx->pc = 0x2FAF08u;
label_2faf08:
    // 0x2faf08: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2faf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2faf0c:
    // 0x2faf0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2faf0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2faf10:
    // 0x2faf10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2faf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2faf14:
    // 0x2faf14: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2faf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2faf18:
    // 0x2faf18: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2faf18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2faf1c:
    // 0x2faf1c: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2faf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2faf20:
    // 0x2faf20: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2faf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2faf24:
    // 0x2faf24: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2faf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2faf28:
    // 0x2faf28: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2faf28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2faf2c:
    // 0x2faf2c: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2faf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2faf30:
    // 0x2faf30: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2faf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2faf34:
    // 0x2faf34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2faf34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2faf38:
    // 0x2faf38: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2faf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2faf3c:
    // 0x2faf3c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2faf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2faf40:
    // 0x2faf40: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2faf40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2faf44:
    // 0x2faf44: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2faf44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2faf48:
    // 0x2faf48: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2faf48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2faf4c:
    // 0x2faf4c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2faf4cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2faf50:
    // 0x2faf50: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2faf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2faf54:
    // 0x2faf54: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2faf54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2faf58:
    // 0x2faf58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2faf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2faf5c:
    // 0x2faf5c: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2faf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2faf60:
    // 0x2faf60: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2faf60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2faf64:
    // 0x2faf64: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2faf64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2faf68:
    // 0x2faf68: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2faf68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2faf6c:
    // 0x2faf6c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2faf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2faf70:
    // 0x2faf70: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2faf70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2faf74:
    // 0x2faf74: 0xc04cbd8  jal         func_132F60
label_2faf78:
    if (ctx->pc == 0x2FAF78u) {
        ctx->pc = 0x2FAF78u;
            // 0x2faf78: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FAF7Cu;
        goto label_2faf7c;
    }
    ctx->pc = 0x2FAF74u;
    SET_GPR_U32(ctx, 31, 0x2FAF7Cu);
    ctx->pc = 0x2FAF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAF74u;
            // 0x2faf78: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAF7Cu; }
        if (ctx->pc != 0x2FAF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAF7Cu; }
        if (ctx->pc != 0x2FAF7Cu) { return; }
    }
    ctx->pc = 0x2FAF7Cu;
label_2faf7c:
    // 0x2faf7c: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2faf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2faf80:
    // 0x2faf80: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2faf80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2faf84:
    // 0x2faf84: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2faf84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2faf88:
    // 0x2faf88: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2faf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2faf8c:
    // 0x2faf8c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2faf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2faf90:
    // 0x2faf90: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2faf90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2faf94:
    // 0x2faf94: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2faf94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2faf98:
    // 0x2faf98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2faf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2faf9c:
    // 0x2faf9c: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2faf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fafa0:
    // 0x2fafa0: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fafa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fafa4:
    // 0x2fafa4: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fafa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fafa8:
    // 0x2fafa8: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fafa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fafac:
    // 0x2fafac: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fafacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fafb0:
    // 0x2fafb0: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fafb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fafb4:
    // 0x2fafb4: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fafb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fafb8:
    // 0x2fafb8: 0x24423540  addiu       $v0, $v0, 0x3540
    ctx->pc = 0x2fafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13632));
label_2fafbc:
    // 0x2fafbc: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fafc0:
    // 0x2fafc0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fafc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fafc4:
    // 0x2fafc4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fafc8:
    // 0x2fafc8: 0x10000253  b           . + 4 + (0x253 << 2)
label_2fafcc:
    if (ctx->pc == 0x2FAFCCu) {
        ctx->pc = 0x2FAFCCu;
            // 0x2fafcc: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FAFD0u;
        goto label_2fafd0;
    }
    ctx->pc = 0x2FAFC8u;
    {
        const bool branch_taken_0x2fafc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAFC8u;
            // 0x2fafcc: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafc8) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FAFD0u;
label_2fafd0:
    // 0x2fafd0: 0xc040180  jal         func_100600
label_2fafd4:
    if (ctx->pc == 0x2FAFD4u) {
        ctx->pc = 0x2FAFD4u;
            // 0x2fafd4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FAFD8u;
        goto label_2fafd8;
    }
    ctx->pc = 0x2FAFD0u;
    SET_GPR_U32(ctx, 31, 0x2FAFD8u);
    ctx->pc = 0x2FAFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAFD0u;
            // 0x2fafd4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAFD8u; }
        if (ctx->pc != 0x2FAFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAFD8u; }
        if (ctx->pc != 0x2FAFD8u) { return; }
    }
    ctx->pc = 0x2FAFD8u;
label_2fafd8:
    // 0x2fafd8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fafdc:
    if (ctx->pc == 0x2FAFDCu) {
        ctx->pc = 0x2FAFDCu;
            // 0x2fafdc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFE0u;
        goto label_2fafe0;
    }
    ctx->pc = 0x2FAFD8u;
    {
        const bool branch_taken_0x2fafd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAFD8u;
            // 0x2fafdc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafd8) {
            ctx->pc = 0x2FB0A0u;
            goto label_2fb0a0;
        }
    }
    ctx->pc = 0x2FAFE0u;
label_2fafe0:
    // 0x2fafe0: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fafe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fafe4:
    // 0x2fafe4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fafe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fafe8:
    // 0x2fafe8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fafec:
    // 0x2fafec: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fafecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2faff0:
    // 0x2faff0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2faff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2faff4:
    // 0x2faff4: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2faff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2faff8:
    // 0x2faff8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2faff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2faffc:
    // 0x2faffc: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2faffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fb000:
    // 0x2fb000: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fb000u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fb004:
    // 0x2fb004: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fb004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fb008:
    // 0x2fb008: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fb008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fb00c:
    // 0x2fb00c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fb00cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fb010:
    // 0x2fb010: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fb010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fb014:
    // 0x2fb014: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fb014u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fb018:
    // 0x2fb018: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fb018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fb01c:
    // 0x2fb01c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fb01cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fb020:
    // 0x2fb020: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fb020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fb024:
    // 0x2fb024: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fb024u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fb028:
    // 0x2fb028: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fb028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fb02c:
    // 0x2fb02c: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fb02cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fb030:
    // 0x2fb030: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fb030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fb034:
    // 0x2fb034: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fb034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fb038:
    // 0x2fb038: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fb038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fb03c:
    // 0x2fb03c: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fb03cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fb040:
    // 0x2fb040: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fb040u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fb044:
    // 0x2fb044: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fb044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fb048:
    // 0x2fb048: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fb048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fb04c:
    // 0x2fb04c: 0xc04cbd8  jal         func_132F60
label_2fb050:
    if (ctx->pc == 0x2FB050u) {
        ctx->pc = 0x2FB050u;
            // 0x2fb050: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FB054u;
        goto label_2fb054;
    }
    ctx->pc = 0x2FB04Cu;
    SET_GPR_U32(ctx, 31, 0x2FB054u);
    ctx->pc = 0x2FB050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB04Cu;
            // 0x2fb050: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB054u; }
        if (ctx->pc != 0x2FB054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB054u; }
        if (ctx->pc != 0x2FB054u) { return; }
    }
    ctx->pc = 0x2FB054u;
label_2fb054:
    // 0x2fb054: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fb054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fb058:
    // 0x2fb058: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fb058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fb05c:
    // 0x2fb05c: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fb05cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fb060:
    // 0x2fb060: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fb060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fb064:
    // 0x2fb064: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fb064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fb068:
    // 0x2fb068: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fb068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fb06c:
    // 0x2fb06c: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fb06cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fb070:
    // 0x2fb070: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb074:
    // 0x2fb074: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fb074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fb078:
    // 0x2fb078: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fb078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fb07c:
    // 0x2fb07c: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fb07cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fb080:
    // 0x2fb080: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fb080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fb084:
    // 0x2fb084: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fb084u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fb088:
    // 0x2fb088: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fb088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fb08c:
    // 0x2fb08c: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fb08cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fb090:
    // 0x2fb090: 0x244250d0  addiu       $v0, $v0, 0x50D0
    ctx->pc = 0x2fb090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20688));
label_2fb094:
    // 0x2fb094: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fb094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fb098:
    // 0x2fb098: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fb098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fb09c:
    // 0x2fb09c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fb0a0:
    // 0x2fb0a0: 0x1000021d  b           . + 4 + (0x21D << 2)
label_2fb0a4:
    if (ctx->pc == 0x2FB0A4u) {
        ctx->pc = 0x2FB0A4u;
            // 0x2fb0a4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FB0A8u;
        goto label_2fb0a8;
    }
    ctx->pc = 0x2FB0A0u;
    {
        const bool branch_taken_0x2fb0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB0A0u;
            // 0x2fb0a4: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0a0) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB0A8u;
label_2fb0a8:
    // 0x2fb0a8: 0xc040180  jal         func_100600
label_2fb0ac:
    if (ctx->pc == 0x2FB0ACu) {
        ctx->pc = 0x2FB0ACu;
            // 0x2fb0ac: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FB0B0u;
        goto label_2fb0b0;
    }
    ctx->pc = 0x2FB0A8u;
    SET_GPR_U32(ctx, 31, 0x2FB0B0u);
    ctx->pc = 0x2FB0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB0A8u;
            // 0x2fb0ac: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB0B0u; }
        if (ctx->pc != 0x2FB0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB0B0u; }
        if (ctx->pc != 0x2FB0B0u) { return; }
    }
    ctx->pc = 0x2FB0B0u;
label_2fb0b0:
    // 0x2fb0b0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fb0b4:
    if (ctx->pc == 0x2FB0B4u) {
        ctx->pc = 0x2FB0B4u;
            // 0x2fb0b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0B8u;
        goto label_2fb0b8;
    }
    ctx->pc = 0x2FB0B0u;
    {
        const bool branch_taken_0x2fb0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB0B0u;
            // 0x2fb0b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0b0) {
            ctx->pc = 0x2FB178u;
            goto label_2fb178;
        }
    }
    ctx->pc = 0x2FB0B8u;
label_2fb0b8:
    // 0x2fb0b8: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fb0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fb0bc:
    // 0x2fb0bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fb0bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fb0c0:
    // 0x2fb0c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb0c4:
    // 0x2fb0c4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fb0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fb0c8:
    // 0x2fb0c8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fb0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fb0cc:
    // 0x2fb0cc: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fb0d0:
    // 0x2fb0d0: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fb0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fb0d4:
    // 0x2fb0d4: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fb0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fb0d8:
    // 0x2fb0d8: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fb0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fb0dc:
    // 0x2fb0dc: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fb0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fb0e0:
    // 0x2fb0e0: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fb0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fb0e4:
    // 0x2fb0e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fb0e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fb0e8:
    // 0x2fb0e8: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fb0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fb0ec:
    // 0x2fb0ec: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fb0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fb0f0:
    // 0x2fb0f0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fb0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fb0f4:
    // 0x2fb0f4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fb0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fb0f8:
    // 0x2fb0f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fb0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fb0fc:
    // 0x2fb0fc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fb0fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fb100:
    // 0x2fb100: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fb100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fb104:
    // 0x2fb104: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fb104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fb108:
    // 0x2fb108: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fb108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fb10c:
    // 0x2fb10c: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fb10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fb110:
    // 0x2fb110: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fb110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fb114:
    // 0x2fb114: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fb114u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fb118:
    // 0x2fb118: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fb118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fb11c:
    // 0x2fb11c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fb11cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fb120:
    // 0x2fb120: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fb120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fb124:
    // 0x2fb124: 0xc04cbd8  jal         func_132F60
label_2fb128:
    if (ctx->pc == 0x2FB128u) {
        ctx->pc = 0x2FB128u;
            // 0x2fb128: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FB12Cu;
        goto label_2fb12c;
    }
    ctx->pc = 0x2FB124u;
    SET_GPR_U32(ctx, 31, 0x2FB12Cu);
    ctx->pc = 0x2FB128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB124u;
            // 0x2fb128: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB12Cu; }
        if (ctx->pc != 0x2FB12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB12Cu; }
        if (ctx->pc != 0x2FB12Cu) { return; }
    }
    ctx->pc = 0x2FB12Cu;
label_2fb12c:
    // 0x2fb12c: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fb12cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fb130:
    // 0x2fb130: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fb130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fb134:
    // 0x2fb134: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fb134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fb138:
    // 0x2fb138: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fb138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fb13c:
    // 0x2fb13c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fb13cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fb140:
    // 0x2fb140: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fb140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fb144:
    // 0x2fb144: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fb144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fb148:
    // 0x2fb148: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb14c:
    // 0x2fb14c: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fb14cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fb150:
    // 0x2fb150: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fb150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fb154:
    // 0x2fb154: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fb154u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fb158:
    // 0x2fb158: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fb158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fb15c:
    // 0x2fb15c: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fb15cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fb160:
    // 0x2fb160: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fb160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fb164:
    // 0x2fb164: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fb164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fb168:
    // 0x2fb168: 0x24425080  addiu       $v0, $v0, 0x5080
    ctx->pc = 0x2fb168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
label_2fb16c:
    // 0x2fb16c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fb16cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fb170:
    // 0x2fb170: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fb170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fb174:
    // 0x2fb174: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fb174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fb178:
    // 0x2fb178: 0x100001e7  b           . + 4 + (0x1E7 << 2)
label_2fb17c:
    if (ctx->pc == 0x2FB17Cu) {
        ctx->pc = 0x2FB17Cu;
            // 0x2fb17c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FB180u;
        goto label_2fb180;
    }
    ctx->pc = 0x2FB178u;
    {
        const bool branch_taken_0x2fb178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB178u;
            // 0x2fb17c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb178) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB180u;
label_2fb180:
    // 0x2fb180: 0xc040180  jal         func_100600
label_2fb184:
    if (ctx->pc == 0x2FB184u) {
        ctx->pc = 0x2FB184u;
            // 0x2fb184: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FB188u;
        goto label_2fb188;
    }
    ctx->pc = 0x2FB180u;
    SET_GPR_U32(ctx, 31, 0x2FB188u);
    ctx->pc = 0x2FB184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB180u;
            // 0x2fb184: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB188u; }
        if (ctx->pc != 0x2FB188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB188u; }
        if (ctx->pc != 0x2FB188u) { return; }
    }
    ctx->pc = 0x2FB188u;
label_2fb188:
    // 0x2fb188: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fb18c:
    if (ctx->pc == 0x2FB18Cu) {
        ctx->pc = 0x2FB18Cu;
            // 0x2fb18c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB190u;
        goto label_2fb190;
    }
    ctx->pc = 0x2FB188u;
    {
        const bool branch_taken_0x2fb188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB188u;
            // 0x2fb18c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb188) {
            ctx->pc = 0x2FB250u;
            goto label_2fb250;
        }
    }
    ctx->pc = 0x2FB190u;
label_2fb190:
    // 0x2fb190: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fb190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fb194:
    // 0x2fb194: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fb194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fb198:
    // 0x2fb198: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb19c:
    // 0x2fb19c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fb19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fb1a0:
    // 0x2fb1a0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fb1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fb1a4:
    // 0x2fb1a4: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fb1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fb1a8:
    // 0x2fb1a8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fb1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fb1ac:
    // 0x2fb1ac: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fb1b0:
    // 0x2fb1b0: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fb1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fb1b4:
    // 0x2fb1b4: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fb1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fb1b8:
    // 0x2fb1b8: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fb1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fb1bc:
    // 0x2fb1bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fb1bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fb1c0:
    // 0x2fb1c0: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fb1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fb1c4:
    // 0x2fb1c4: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fb1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fb1c8:
    // 0x2fb1c8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fb1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fb1cc:
    // 0x2fb1cc: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fb1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fb1d0:
    // 0x2fb1d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fb1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fb1d4:
    // 0x2fb1d4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fb1d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fb1d8:
    // 0x2fb1d8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fb1dc:
    // 0x2fb1dc: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fb1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fb1e0:
    // 0x2fb1e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fb1e4:
    // 0x2fb1e4: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fb1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fb1e8:
    // 0x2fb1e8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fb1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fb1ec:
    // 0x2fb1ec: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fb1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fb1f0:
    // 0x2fb1f0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fb1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fb1f4:
    // 0x2fb1f4: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fb1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fb1f8:
    // 0x2fb1f8: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fb1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fb1fc:
    // 0x2fb1fc: 0xc04cbd8  jal         func_132F60
label_2fb200:
    if (ctx->pc == 0x2FB200u) {
        ctx->pc = 0x2FB200u;
            // 0x2fb200: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FB204u;
        goto label_2fb204;
    }
    ctx->pc = 0x2FB1FCu;
    SET_GPR_U32(ctx, 31, 0x2FB204u);
    ctx->pc = 0x2FB200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB1FCu;
            // 0x2fb200: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB204u; }
        if (ctx->pc != 0x2FB204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB204u; }
        if (ctx->pc != 0x2FB204u) { return; }
    }
    ctx->pc = 0x2FB204u;
label_2fb204:
    // 0x2fb204: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fb204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fb208:
    // 0x2fb208: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fb208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fb20c:
    // 0x2fb20c: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fb20cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fb210:
    // 0x2fb210: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fb210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fb214:
    // 0x2fb214: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fb214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fb218:
    // 0x2fb218: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fb218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fb21c:
    // 0x2fb21c: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fb21cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fb220:
    // 0x2fb220: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb224:
    // 0x2fb224: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fb224u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fb228:
    // 0x2fb228: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fb228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fb22c:
    // 0x2fb22c: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fb22cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fb230:
    // 0x2fb230: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fb230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fb234:
    // 0x2fb234: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fb234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fb238:
    // 0x2fb238: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fb238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fb23c:
    // 0x2fb23c: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fb23cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fb240:
    // 0x2fb240: 0x24425030  addiu       $v0, $v0, 0x5030
    ctx->pc = 0x2fb240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20528));
label_2fb244:
    // 0x2fb244: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fb244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fb248:
    // 0x2fb248: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fb248u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fb24c:
    // 0x2fb24c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fb24cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fb250:
    // 0x2fb250: 0x100001b1  b           . + 4 + (0x1B1 << 2)
label_2fb254:
    if (ctx->pc == 0x2FB254u) {
        ctx->pc = 0x2FB254u;
            // 0x2fb254: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FB258u;
        goto label_2fb258;
    }
    ctx->pc = 0x2FB250u;
    {
        const bool branch_taken_0x2fb250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB250u;
            // 0x2fb254: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb250) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB258u;
label_2fb258:
    // 0x2fb258: 0xc040180  jal         func_100600
label_2fb25c:
    if (ctx->pc == 0x2FB25Cu) {
        ctx->pc = 0x2FB25Cu;
            // 0x2fb25c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FB260u;
        goto label_2fb260;
    }
    ctx->pc = 0x2FB258u;
    SET_GPR_U32(ctx, 31, 0x2FB260u);
    ctx->pc = 0x2FB25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB258u;
            // 0x2fb25c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB260u; }
        if (ctx->pc != 0x2FB260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB260u; }
        if (ctx->pc != 0x2FB260u) { return; }
    }
    ctx->pc = 0x2FB260u;
label_2fb260:
    // 0x2fb260: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fb264:
    if (ctx->pc == 0x2FB264u) {
        ctx->pc = 0x2FB264u;
            // 0x2fb264: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB268u;
        goto label_2fb268;
    }
    ctx->pc = 0x2FB260u;
    {
        const bool branch_taken_0x2fb260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB260u;
            // 0x2fb264: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb260) {
            ctx->pc = 0x2FB328u;
            goto label_2fb328;
        }
    }
    ctx->pc = 0x2FB268u;
label_2fb268:
    // 0x2fb268: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fb268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fb26c:
    // 0x2fb26c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fb26cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fb270:
    // 0x2fb270: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb274:
    // 0x2fb274: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fb274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fb278:
    // 0x2fb278: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fb278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fb27c:
    // 0x2fb27c: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fb27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fb280:
    // 0x2fb280: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fb280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fb284:
    // 0x2fb284: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fb284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fb288:
    // 0x2fb288: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fb288u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fb28c:
    // 0x2fb28c: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fb28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fb290:
    // 0x2fb290: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fb290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fb294:
    // 0x2fb294: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fb294u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fb298:
    // 0x2fb298: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fb298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fb29c:
    // 0x2fb29c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fb29cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fb2a0:
    // 0x2fb2a0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fb2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fb2a4:
    // 0x2fb2a4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fb2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fb2a8:
    // 0x2fb2a8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fb2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fb2ac:
    // 0x2fb2ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fb2acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fb2b0:
    // 0x2fb2b0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fb2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fb2b4:
    // 0x2fb2b4: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fb2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fb2b8:
    // 0x2fb2b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fb2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fb2bc:
    // 0x2fb2bc: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fb2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fb2c0:
    // 0x2fb2c0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fb2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fb2c4:
    // 0x2fb2c4: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fb2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fb2c8:
    // 0x2fb2c8: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fb2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fb2cc:
    // 0x2fb2cc: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fb2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fb2d0:
    // 0x2fb2d0: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fb2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fb2d4:
    // 0x2fb2d4: 0xc04cbd8  jal         func_132F60
label_2fb2d8:
    if (ctx->pc == 0x2FB2D8u) {
        ctx->pc = 0x2FB2D8u;
            // 0x2fb2d8: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FB2DCu;
        goto label_2fb2dc;
    }
    ctx->pc = 0x2FB2D4u;
    SET_GPR_U32(ctx, 31, 0x2FB2DCu);
    ctx->pc = 0x2FB2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB2D4u;
            // 0x2fb2d8: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB2DCu; }
        if (ctx->pc != 0x2FB2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB2DCu; }
        if (ctx->pc != 0x2FB2DCu) { return; }
    }
    ctx->pc = 0x2FB2DCu;
label_2fb2dc:
    // 0x2fb2dc: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fb2e0:
    // 0x2fb2e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fb2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fb2e4:
    // 0x2fb2e4: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fb2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fb2e8:
    // 0x2fb2e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fb2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fb2ec:
    // 0x2fb2ec: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fb2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fb2f0:
    // 0x2fb2f0: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fb2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fb2f4:
    // 0x2fb2f4: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fb2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fb2f8:
    // 0x2fb2f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb2fc:
    // 0x2fb2fc: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fb2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fb300:
    // 0x2fb300: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fb300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fb304:
    // 0x2fb304: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fb304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fb308:
    // 0x2fb308: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fb308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fb30c:
    // 0x2fb30c: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fb30cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fb310:
    // 0x2fb310: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fb310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fb314:
    // 0x2fb314: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fb314u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fb318:
    // 0x2fb318: 0x244234f0  addiu       $v0, $v0, 0x34F0
    ctx->pc = 0x2fb318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13552));
label_2fb31c:
    // 0x2fb31c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fb31cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fb320:
    // 0x2fb320: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fb320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fb324:
    // 0x2fb324: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fb324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fb328:
    // 0x2fb328: 0x1000017b  b           . + 4 + (0x17B << 2)
label_2fb32c:
    if (ctx->pc == 0x2FB32Cu) {
        ctx->pc = 0x2FB32Cu;
            // 0x2fb32c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FB330u;
        goto label_2fb330;
    }
    ctx->pc = 0x2FB328u;
    {
        const bool branch_taken_0x2fb328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB328u;
            // 0x2fb32c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb328) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB330u;
label_2fb330:
    // 0x2fb330: 0xc040180  jal         func_100600
label_2fb334:
    if (ctx->pc == 0x2FB334u) {
        ctx->pc = 0x2FB334u;
            // 0x2fb334: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x2FB338u;
        goto label_2fb338;
    }
    ctx->pc = 0x2FB330u;
    SET_GPR_U32(ctx, 31, 0x2FB338u);
    ctx->pc = 0x2FB334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB330u;
            // 0x2fb334: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB338u; }
        if (ctx->pc != 0x2FB338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB338u; }
        if (ctx->pc != 0x2FB338u) { return; }
    }
    ctx->pc = 0x2FB338u;
label_2fb338:
    // 0x2fb338: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2fb33c:
    if (ctx->pc == 0x2FB33Cu) {
        ctx->pc = 0x2FB33Cu;
            // 0x2fb33c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB340u;
        goto label_2fb340;
    }
    ctx->pc = 0x2FB338u;
    {
        const bool branch_taken_0x2fb338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB338u;
            // 0x2fb33c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb338) {
            ctx->pc = 0x2FB3B8u;
            goto label_2fb3b8;
        }
    }
    ctx->pc = 0x2FB340u;
label_2fb340:
    // 0x2fb340: 0xc0bd73c  jal         func_2F5CF0
label_2fb344:
    if (ctx->pc == 0x2FB344u) {
        ctx->pc = 0x2FB344u;
            // 0x2fb344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB348u;
        goto label_2fb348;
    }
    ctx->pc = 0x2FB340u;
    SET_GPR_U32(ctx, 31, 0x2FB348u);
    ctx->pc = 0x2FB344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB340u;
            // 0x2fb344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB348u; }
        if (ctx->pc != 0x2FB348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB348u; }
        if (ctx->pc != 0x2FB348u) { return; }
    }
    ctx->pc = 0x2FB348u;
label_2fb348:
    // 0x2fb348: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fb348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb34c:
    // 0x2fb34c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb350:
    // 0x2fb350: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fb350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb354:
    // 0x2fb354: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb358:
    // 0x2fb358: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fb358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fb35c:
    // 0x2fb35c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fb360:
    // 0x2fb360: 0xc0bd73c  jal         func_2F5CF0
label_2fb364:
    if (ctx->pc == 0x2FB364u) {
        ctx->pc = 0x2FB364u;
            // 0x2fb364: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB368u;
        goto label_2fb368;
    }
    ctx->pc = 0x2FB360u;
    SET_GPR_U32(ctx, 31, 0x2FB368u);
    ctx->pc = 0x2FB364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB360u;
            // 0x2fb364: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB368u; }
        if (ctx->pc != 0x2FB368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB368u; }
        if (ctx->pc != 0x2FB368u) { return; }
    }
    ctx->pc = 0x2FB368u;
label_2fb368:
    // 0x2fb368: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb36c:
    // 0x2fb36c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fb36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb370:
    // 0x2fb370: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fb370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fb374:
    // 0x2fb374: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fb374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fb378:
    // 0x2fb378: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb37c:
    // 0x2fb37c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fb37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fb380:
    // 0x2fb380: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb384:
    // 0x2fb384: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fb384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fb388:
    // 0x2fb388: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fb388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fb38c:
    // 0x2fb38c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fb390:
    // 0x2fb390: 0xc0bf114  jal         func_2FC450
label_2fb394:
    if (ctx->pc == 0x2FB394u) {
        ctx->pc = 0x2FB394u;
            // 0x2fb394: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB398u;
        goto label_2fb398;
    }
    ctx->pc = 0x2FB390u;
    SET_GPR_U32(ctx, 31, 0x2FB398u);
    ctx->pc = 0x2FB394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB390u;
            // 0x2fb394: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC450u;
    if (runtime->hasFunction(0x2FC450u)) {
        auto targetFn = runtime->lookupFunction(0x2FC450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB398u; }
        if (ctx->pc != 0x2FB398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC450_0x2fc450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB398u; }
        if (ctx->pc != 0x2FB398u) { return; }
    }
    ctx->pc = 0x2FB398u;
label_2fb398:
    // 0x2fb398: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb39c:
    // 0x2fb39c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fb3a0:
    // 0x2fb3a0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fb3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fb3a4:
    // 0x2fb3a4: 0xae950050  sw          $s5, 0x50($s4)
    ctx->pc = 0x2fb3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 21));
label_2fb3a8:
    // 0x2fb3a8: 0xae800054  sw          $zero, 0x54($s4)
    ctx->pc = 0x2fb3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
label_2fb3ac:
    // 0x2fb3ac: 0xae800058  sw          $zero, 0x58($s4)
    ctx->pc = 0x2fb3acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 0));
label_2fb3b0:
    // 0x2fb3b0: 0xae80005c  sw          $zero, 0x5C($s4)
    ctx->pc = 0x2fb3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
label_2fb3b4:
    // 0x2fb3b4: 0x0  nop
    ctx->pc = 0x2fb3b4u;
    // NOP
label_2fb3b8:
    // 0x2fb3b8: 0x10000157  b           . + 4 + (0x157 << 2)
label_2fb3bc:
    if (ctx->pc == 0x2FB3BCu) {
        ctx->pc = 0x2FB3BCu;
            // 0x2fb3bc: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FB3C0u;
        goto label_2fb3c0;
    }
    ctx->pc = 0x2FB3B8u;
    {
        const bool branch_taken_0x2fb3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB3B8u;
            // 0x2fb3bc: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3b8) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB3C0u;
label_2fb3c0:
    // 0x2fb3c0: 0xc040180  jal         func_100600
label_2fb3c4:
    if (ctx->pc == 0x2FB3C4u) {
        ctx->pc = 0x2FB3C4u;
            // 0x2fb3c4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2FB3C8u;
        goto label_2fb3c8;
    }
    ctx->pc = 0x2FB3C0u;
    SET_GPR_U32(ctx, 31, 0x2FB3C8u);
    ctx->pc = 0x2FB3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB3C0u;
            // 0x2fb3c4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB3C8u; }
        if (ctx->pc != 0x2FB3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB3C8u; }
        if (ctx->pc != 0x2FB3C8u) { return; }
    }
    ctx->pc = 0x2FB3C8u;
label_2fb3c8:
    // 0x2fb3c8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_2fb3cc:
    if (ctx->pc == 0x2FB3CCu) {
        ctx->pc = 0x2FB3CCu;
            // 0x2fb3cc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3D0u;
        goto label_2fb3d0;
    }
    ctx->pc = 0x2FB3C8u;
    {
        const bool branch_taken_0x2fb3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB3C8u;
            // 0x2fb3cc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3c8) {
            ctx->pc = 0x2FB490u;
            goto label_2fb490;
        }
    }
    ctx->pc = 0x2FB3D0u;
label_2fb3d0:
    // 0x2fb3d0: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2fb3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2fb3d4:
    // 0x2fb3d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fb3d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fb3d8:
    // 0x2fb3d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb3dc:
    // 0x2fb3dc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2fb3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2fb3e0:
    // 0x2fb3e0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fb3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fb3e4:
    // 0x2fb3e4: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fb3e8:
    // 0x2fb3e8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2fb3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2fb3ec:
    // 0x2fb3ec: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2fb3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_2fb3f0:
    // 0x2fb3f0: 0x8ca8003c  lw          $t0, 0x3C($a1)
    ctx->pc = 0x2fb3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2fb3f4:
    // 0x2fb3f4: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x2fb3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
label_2fb3f8:
    // 0x2fb3f8: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2fb3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2fb3fc:
    // 0x2fb3fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fb3fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fb400:
    // 0x2fb400: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2fb400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2fb404:
    // 0x2fb404: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x2fb404u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2fb408:
    // 0x2fb408: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2fb408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2fb40c:
    // 0x2fb40c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2fb40cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2fb410:
    // 0x2fb410: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fb410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fb414:
    // 0x2fb414: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fb414u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fb418:
    // 0x2fb418: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2fb418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2fb41c:
    // 0x2fb41c: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2fb41cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2fb420:
    // 0x2fb420: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fb420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fb424:
    // 0x2fb424: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2fb424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2fb428:
    // 0x2fb428: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2fb428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2fb42c:
    // 0x2fb42c: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x2fb42cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
label_2fb430:
    // 0x2fb430: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fb430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_2fb434:
    // 0x2fb434: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fb434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2fb438:
    // 0x2fb438: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2fb438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2fb43c:
    // 0x2fb43c: 0xc04cbd8  jal         func_132F60
label_2fb440:
    if (ctx->pc == 0x2FB440u) {
        ctx->pc = 0x2FB440u;
            // 0x2fb440: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2FB444u;
        goto label_2fb444;
    }
    ctx->pc = 0x2FB43Cu;
    SET_GPR_U32(ctx, 31, 0x2FB444u);
    ctx->pc = 0x2FB440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB43Cu;
            // 0x2fb440: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB444u; }
        if (ctx->pc != 0x2FB444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB444u; }
        if (ctx->pc != 0x2FB444u) { return; }
    }
    ctx->pc = 0x2FB444u;
label_2fb444:
    // 0x2fb444: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fb444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fb448:
    // 0x2fb448: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fb448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2fb44c:
    // 0x2fb44c: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fb44cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fb450:
    // 0x2fb450: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fb450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2fb454:
    // 0x2fb454: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2fb454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2fb458:
    // 0x2fb458: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fb458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fb45c:
    // 0x2fb45c: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x2fb45cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
label_2fb460:
    // 0x2fb460: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb464:
    // 0x2fb464: 0xae660040  sw          $a2, 0x40($s3)
    ctx->pc = 0x2fb464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 6));
label_2fb468:
    // 0x2fb468: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x2fb468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_2fb46c:
    // 0x2fb46c: 0xae660044  sw          $a2, 0x44($s3)
    ctx->pc = 0x2fb46cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 6));
label_2fb470:
    // 0x2fb470: 0x2484ab60  addiu       $a0, $a0, -0x54A0
    ctx->pc = 0x2fb470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945632));
label_2fb474:
    // 0x2fb474: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x2fb474u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
label_2fb478:
    // 0x2fb478: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x2fb478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
label_2fb47c:
    // 0x2fb47c: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fb47cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fb480:
    // 0x2fb480: 0x24425170  addiu       $v0, $v0, 0x5170
    ctx->pc = 0x2fb480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20848));
label_2fb484:
    // 0x2fb484: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2fb484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2fb488:
    // 0x2fb488: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2fb488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2fb48c:
    // 0x2fb48c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fb48cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fb490:
    // 0x2fb490: 0x10000121  b           . + 4 + (0x121 << 2)
label_2fb494:
    if (ctx->pc == 0x2FB494u) {
        ctx->pc = 0x2FB494u;
            // 0x2fb494: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x2FB498u;
        goto label_2fb498;
    }
    ctx->pc = 0x2FB490u;
    {
        const bool branch_taken_0x2fb490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB490u;
            // 0x2fb494: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb490) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB498u;
label_2fb498:
    // 0x2fb498: 0xc040180  jal         func_100600
label_2fb49c:
    if (ctx->pc == 0x2FB49Cu) {
        ctx->pc = 0x2FB49Cu;
            // 0x2fb49c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FB4A0u;
        goto label_2fb4a0;
    }
    ctx->pc = 0x2FB498u;
    SET_GPR_U32(ctx, 31, 0x2FB4A0u);
    ctx->pc = 0x2FB49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB498u;
            // 0x2fb49c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4A0u; }
        if (ctx->pc != 0x2FB4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4A0u; }
        if (ctx->pc != 0x2FB4A0u) { return; }
    }
    ctx->pc = 0x2FB4A0u;
label_2fb4a0:
    // 0x2fb4a0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fb4a4:
    if (ctx->pc == 0x2FB4A4u) {
        ctx->pc = 0x2FB4A4u;
            // 0x2fb4a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4A8u;
        goto label_2fb4a8;
    }
    ctx->pc = 0x2FB4A0u;
    {
        const bool branch_taken_0x2fb4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB4A0u;
            // 0x2fb4a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb4a0) {
            ctx->pc = 0x2FB510u;
            goto label_2fb510;
        }
    }
    ctx->pc = 0x2FB4A8u;
label_2fb4a8:
    // 0x2fb4a8: 0xc0bd73c  jal         func_2F5CF0
label_2fb4ac:
    if (ctx->pc == 0x2FB4ACu) {
        ctx->pc = 0x2FB4ACu;
            // 0x2fb4ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB4B0u;
        goto label_2fb4b0;
    }
    ctx->pc = 0x2FB4A8u;
    SET_GPR_U32(ctx, 31, 0x2FB4B0u);
    ctx->pc = 0x2FB4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB4A8u;
            // 0x2fb4ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4B0u; }
        if (ctx->pc != 0x2FB4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4B0u; }
        if (ctx->pc != 0x2FB4B0u) { return; }
    }
    ctx->pc = 0x2FB4B0u;
label_2fb4b0:
    // 0x2fb4b0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fb4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb4b4:
    // 0x2fb4b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4b8:
    // 0x2fb4b8: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fb4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb4bc:
    // 0x2fb4bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb4c0:
    // 0x2fb4c0: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fb4c4:
    // 0x2fb4c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fb4c8:
    // 0x2fb4c8: 0xc0bd73c  jal         func_2F5CF0
label_2fb4cc:
    if (ctx->pc == 0x2FB4CCu) {
        ctx->pc = 0x2FB4CCu;
            // 0x2fb4cc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB4D0u;
        goto label_2fb4d0;
    }
    ctx->pc = 0x2FB4C8u;
    SET_GPR_U32(ctx, 31, 0x2FB4D0u);
    ctx->pc = 0x2FB4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB4C8u;
            // 0x2fb4cc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4D0u; }
        if (ctx->pc != 0x2FB4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB4D0u; }
        if (ctx->pc != 0x2FB4D0u) { return; }
    }
    ctx->pc = 0x2FB4D0u;
label_2fb4d0:
    // 0x2fb4d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb4d4:
    // 0x2fb4d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fb4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4d8:
    // 0x2fb4d8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fb4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fb4dc:
    // 0x2fb4dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fb4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4e0:
    // 0x2fb4e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb4e4:
    // 0x2fb4e4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fb4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fb4e8:
    // 0x2fb4e8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb4ec:
    // 0x2fb4ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fb4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fb4f0:
    // 0x2fb4f0: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fb4f4:
    // 0x2fb4f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fb4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fb4f8:
    // 0x2fb4f8: 0xc0bf0c0  jal         func_2FC300
label_2fb4fc:
    if (ctx->pc == 0x2FB4FCu) {
        ctx->pc = 0x2FB4FCu;
            // 0x2fb4fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB500u;
        goto label_2fb500;
    }
    ctx->pc = 0x2FB4F8u;
    SET_GPR_U32(ctx, 31, 0x2FB500u);
    ctx->pc = 0x2FB4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB4F8u;
            // 0x2fb4fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC300u;
    if (runtime->hasFunction(0x2FC300u)) {
        auto targetFn = runtime->lookupFunction(0x2FC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB500u; }
        if (ctx->pc != 0x2FB500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC300_0x2fc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB500u; }
        if (ctx->pc != 0x2FB500u) { return; }
    }
    ctx->pc = 0x2FB500u;
label_2fb500:
    // 0x2fb500: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb504:
    // 0x2fb504: 0x24423470  addiu       $v0, $v0, 0x3470
    ctx->pc = 0x2fb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13424));
label_2fb508:
    // 0x2fb508: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fb508u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fb50c:
    // 0x2fb50c: 0x0  nop
    ctx->pc = 0x2fb50cu;
    // NOP
label_2fb510:
    // 0x2fb510: 0x10000101  b           . + 4 + (0x101 << 2)
label_2fb514:
    if (ctx->pc == 0x2FB514u) {
        ctx->pc = 0x2FB514u;
            // 0x2fb514: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FB518u;
        goto label_2fb518;
    }
    ctx->pc = 0x2FB510u;
    {
        const bool branch_taken_0x2fb510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB510u;
            // 0x2fb514: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb510) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB518u;
label_2fb518:
    // 0x2fb518: 0xc040180  jal         func_100600
label_2fb51c:
    if (ctx->pc == 0x2FB51Cu) {
        ctx->pc = 0x2FB51Cu;
            // 0x2fb51c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FB520u;
        goto label_2fb520;
    }
    ctx->pc = 0x2FB518u;
    SET_GPR_U32(ctx, 31, 0x2FB520u);
    ctx->pc = 0x2FB51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB518u;
            // 0x2fb51c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB520u; }
        if (ctx->pc != 0x2FB520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB520u; }
        if (ctx->pc != 0x2FB520u) { return; }
    }
    ctx->pc = 0x2FB520u;
label_2fb520:
    // 0x2fb520: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fb524:
    if (ctx->pc == 0x2FB524u) {
        ctx->pc = 0x2FB524u;
            // 0x2fb524: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB528u;
        goto label_2fb528;
    }
    ctx->pc = 0x2FB520u;
    {
        const bool branch_taken_0x2fb520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB520u;
            // 0x2fb524: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb520) {
            ctx->pc = 0x2FB590u;
            goto label_2fb590;
        }
    }
    ctx->pc = 0x2FB528u;
label_2fb528:
    // 0x2fb528: 0xc0bd73c  jal         func_2F5CF0
label_2fb52c:
    if (ctx->pc == 0x2FB52Cu) {
        ctx->pc = 0x2FB52Cu;
            // 0x2fb52c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB530u;
        goto label_2fb530;
    }
    ctx->pc = 0x2FB528u;
    SET_GPR_U32(ctx, 31, 0x2FB530u);
    ctx->pc = 0x2FB52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB528u;
            // 0x2fb52c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB530u; }
        if (ctx->pc != 0x2FB530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB530u; }
        if (ctx->pc != 0x2FB530u) { return; }
    }
    ctx->pc = 0x2FB530u;
label_2fb530:
    // 0x2fb530: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fb530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb534:
    // 0x2fb534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb538:
    // 0x2fb538: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fb538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb53c:
    // 0x2fb53c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb540:
    // 0x2fb540: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fb540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fb544:
    // 0x2fb544: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fb548:
    // 0x2fb548: 0xc0bd73c  jal         func_2F5CF0
label_2fb54c:
    if (ctx->pc == 0x2FB54Cu) {
        ctx->pc = 0x2FB54Cu;
            // 0x2fb54c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB550u;
        goto label_2fb550;
    }
    ctx->pc = 0x2FB548u;
    SET_GPR_U32(ctx, 31, 0x2FB550u);
    ctx->pc = 0x2FB54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB548u;
            // 0x2fb54c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB550u; }
        if (ctx->pc != 0x2FB550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB550u; }
        if (ctx->pc != 0x2FB550u) { return; }
    }
    ctx->pc = 0x2FB550u;
label_2fb550:
    // 0x2fb550: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb554:
    // 0x2fb554: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fb554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb558:
    // 0x2fb558: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fb558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fb55c:
    // 0x2fb55c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fb55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fb560:
    // 0x2fb560: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb564:
    // 0x2fb564: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fb564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fb568:
    // 0x2fb568: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb56c:
    // 0x2fb56c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fb56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fb570:
    // 0x2fb570: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fb570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fb574:
    // 0x2fb574: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fb574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fb578:
    // 0x2fb578: 0xc0bf0c0  jal         func_2FC300
label_2fb57c:
    if (ctx->pc == 0x2FB57Cu) {
        ctx->pc = 0x2FB57Cu;
            // 0x2fb57c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB580u;
        goto label_2fb580;
    }
    ctx->pc = 0x2FB578u;
    SET_GPR_U32(ctx, 31, 0x2FB580u);
    ctx->pc = 0x2FB57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB578u;
            // 0x2fb57c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC300u;
    if (runtime->hasFunction(0x2FC300u)) {
        auto targetFn = runtime->lookupFunction(0x2FC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB580u; }
        if (ctx->pc != 0x2FB580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC300_0x2fc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB580u; }
        if (ctx->pc != 0x2FB580u) { return; }
    }
    ctx->pc = 0x2FB580u;
label_2fb580:
    // 0x2fb580: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb584:
    // 0x2fb584: 0x24423470  addiu       $v0, $v0, 0x3470
    ctx->pc = 0x2fb584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13424));
label_2fb588:
    // 0x2fb588: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fb588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fb58c:
    // 0x2fb58c: 0x0  nop
    ctx->pc = 0x2fb58cu;
    // NOP
label_2fb590:
    // 0x2fb590: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_2fb594:
    if (ctx->pc == 0x2FB594u) {
        ctx->pc = 0x2FB594u;
            // 0x2fb594: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FB598u;
        goto label_2fb598;
    }
    ctx->pc = 0x2FB590u;
    {
        const bool branch_taken_0x2fb590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB590u;
            // 0x2fb594: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb590) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB598u;
label_2fb598:
    // 0x2fb598: 0xc040180  jal         func_100600
label_2fb59c:
    if (ctx->pc == 0x2FB59Cu) {
        ctx->pc = 0x2FB59Cu;
            // 0x2fb59c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FB5A0u;
        goto label_2fb5a0;
    }
    ctx->pc = 0x2FB598u;
    SET_GPR_U32(ctx, 31, 0x2FB5A0u);
    ctx->pc = 0x2FB59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB598u;
            // 0x2fb59c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB5A0u; }
        if (ctx->pc != 0x2FB5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB5A0u; }
        if (ctx->pc != 0x2FB5A0u) { return; }
    }
    ctx->pc = 0x2FB5A0u;
label_2fb5a0:
    // 0x2fb5a0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fb5a4:
    if (ctx->pc == 0x2FB5A4u) {
        ctx->pc = 0x2FB5A4u;
            // 0x2fb5a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5A8u;
        goto label_2fb5a8;
    }
    ctx->pc = 0x2FB5A0u;
    {
        const bool branch_taken_0x2fb5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB5A0u;
            // 0x2fb5a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5a0) {
            ctx->pc = 0x2FB610u;
            goto label_2fb610;
        }
    }
    ctx->pc = 0x2FB5A8u;
label_2fb5a8:
    // 0x2fb5a8: 0xc0bd73c  jal         func_2F5CF0
label_2fb5ac:
    if (ctx->pc == 0x2FB5ACu) {
        ctx->pc = 0x2FB5ACu;
            // 0x2fb5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5B0u;
        goto label_2fb5b0;
    }
    ctx->pc = 0x2FB5A8u;
    SET_GPR_U32(ctx, 31, 0x2FB5B0u);
    ctx->pc = 0x2FB5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB5A8u;
            // 0x2fb5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB5B0u; }
        if (ctx->pc != 0x2FB5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB5B0u; }
        if (ctx->pc != 0x2FB5B0u) { return; }
    }
    ctx->pc = 0x2FB5B0u;
label_2fb5b0:
    // 0x2fb5b0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fb5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb5b4:
    // 0x2fb5b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb5b8:
    // 0x2fb5b8: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fb5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb5bc:
    // 0x2fb5bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb5c0:
    // 0x2fb5c0: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fb5c4:
    // 0x2fb5c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fb5c8:
    // 0x2fb5c8: 0xc0bd73c  jal         func_2F5CF0
label_2fb5cc:
    if (ctx->pc == 0x2FB5CCu) {
        ctx->pc = 0x2FB5CCu;
            // 0x2fb5cc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB5D0u;
        goto label_2fb5d0;
    }
    ctx->pc = 0x2FB5C8u;
    SET_GPR_U32(ctx, 31, 0x2FB5D0u);
    ctx->pc = 0x2FB5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB5C8u;
            // 0x2fb5cc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB5D0u; }
        if (ctx->pc != 0x2FB5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB5D0u; }
        if (ctx->pc != 0x2FB5D0u) { return; }
    }
    ctx->pc = 0x2FB5D0u;
label_2fb5d0:
    // 0x2fb5d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb5d4:
    // 0x2fb5d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fb5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb5d8:
    // 0x2fb5d8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fb5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fb5dc:
    // 0x2fb5dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fb5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fb5e0:
    // 0x2fb5e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb5e4:
    // 0x2fb5e4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fb5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fb5e8:
    // 0x2fb5e8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb5ec:
    // 0x2fb5ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fb5f0:
    // 0x2fb5f0: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fb5f4:
    // 0x2fb5f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fb5f8:
    // 0x2fb5f8: 0xc0bf0c0  jal         func_2FC300
label_2fb5fc:
    if (ctx->pc == 0x2FB5FCu) {
        ctx->pc = 0x2FB5FCu;
            // 0x2fb5fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB600u;
        goto label_2fb600;
    }
    ctx->pc = 0x2FB5F8u;
    SET_GPR_U32(ctx, 31, 0x2FB600u);
    ctx->pc = 0x2FB5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB5F8u;
            // 0x2fb5fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC300u;
    if (runtime->hasFunction(0x2FC300u)) {
        auto targetFn = runtime->lookupFunction(0x2FC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB600u; }
        if (ctx->pc != 0x2FB600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC300_0x2fc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB600u; }
        if (ctx->pc != 0x2FB600u) { return; }
    }
    ctx->pc = 0x2FB600u;
label_2fb600:
    // 0x2fb600: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb604:
    // 0x2fb604: 0x24423470  addiu       $v0, $v0, 0x3470
    ctx->pc = 0x2fb604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13424));
label_2fb608:
    // 0x2fb608: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fb608u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fb60c:
    // 0x2fb60c: 0x0  nop
    ctx->pc = 0x2fb60cu;
    // NOP
label_2fb610:
    // 0x2fb610: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_2fb614:
    if (ctx->pc == 0x2FB614u) {
        ctx->pc = 0x2FB614u;
            // 0x2fb614: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FB618u;
        goto label_2fb618;
    }
    ctx->pc = 0x2FB610u;
    {
        const bool branch_taken_0x2fb610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB610u;
            // 0x2fb614: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb610) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB618u;
label_2fb618:
    // 0x2fb618: 0xc040180  jal         func_100600
label_2fb61c:
    if (ctx->pc == 0x2FB61Cu) {
        ctx->pc = 0x2FB61Cu;
            // 0x2fb61c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x2FB620u;
        goto label_2fb620;
    }
    ctx->pc = 0x2FB618u;
    SET_GPR_U32(ctx, 31, 0x2FB620u);
    ctx->pc = 0x2FB61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB618u;
            // 0x2fb61c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB620u; }
        if (ctx->pc != 0x2FB620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB620u; }
        if (ctx->pc != 0x2FB620u) { return; }
    }
    ctx->pc = 0x2FB620u;
label_2fb620:
    // 0x2fb620: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fb624:
    if (ctx->pc == 0x2FB624u) {
        ctx->pc = 0x2FB624u;
            // 0x2fb624: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB628u;
        goto label_2fb628;
    }
    ctx->pc = 0x2FB620u;
    {
        const bool branch_taken_0x2fb620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB620u;
            // 0x2fb624: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb620) {
            ctx->pc = 0x2FB690u;
            goto label_2fb690;
        }
    }
    ctx->pc = 0x2FB628u;
label_2fb628:
    // 0x2fb628: 0xc0bd73c  jal         func_2F5CF0
label_2fb62c:
    if (ctx->pc == 0x2FB62Cu) {
        ctx->pc = 0x2FB62Cu;
            // 0x2fb62c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB630u;
        goto label_2fb630;
    }
    ctx->pc = 0x2FB628u;
    SET_GPR_U32(ctx, 31, 0x2FB630u);
    ctx->pc = 0x2FB62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB628u;
            // 0x2fb62c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB630u; }
        if (ctx->pc != 0x2FB630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB630u; }
        if (ctx->pc != 0x2FB630u) { return; }
    }
    ctx->pc = 0x2FB630u;
label_2fb630:
    // 0x2fb630: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fb630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb634:
    // 0x2fb634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb638:
    // 0x2fb638: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fb638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb63c:
    // 0x2fb63c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb640:
    // 0x2fb640: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fb640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fb644:
    // 0x2fb644: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fb648:
    // 0x2fb648: 0xc0bd73c  jal         func_2F5CF0
label_2fb64c:
    if (ctx->pc == 0x2FB64Cu) {
        ctx->pc = 0x2FB64Cu;
            // 0x2fb64c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB650u;
        goto label_2fb650;
    }
    ctx->pc = 0x2FB648u;
    SET_GPR_U32(ctx, 31, 0x2FB650u);
    ctx->pc = 0x2FB64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB648u;
            // 0x2fb64c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB650u; }
        if (ctx->pc != 0x2FB650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB650u; }
        if (ctx->pc != 0x2FB650u) { return; }
    }
    ctx->pc = 0x2FB650u;
label_2fb650:
    // 0x2fb650: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb654:
    // 0x2fb654: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fb654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb658:
    // 0x2fb658: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fb658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fb65c:
    // 0x2fb65c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fb65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fb660:
    // 0x2fb660: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb664:
    // 0x2fb664: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fb664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fb668:
    // 0x2fb668: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb66c:
    // 0x2fb66c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fb66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fb670:
    // 0x2fb670: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fb670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fb674:
    // 0x2fb674: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fb674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fb678:
    // 0x2fb678: 0xc0bf070  jal         func_2FC1C0
label_2fb67c:
    if (ctx->pc == 0x2FB67Cu) {
        ctx->pc = 0x2FB67Cu;
            // 0x2fb67c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB680u;
        goto label_2fb680;
    }
    ctx->pc = 0x2FB678u;
    SET_GPR_U32(ctx, 31, 0x2FB680u);
    ctx->pc = 0x2FB67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB678u;
            // 0x2fb67c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC1C0u;
    if (runtime->hasFunction(0x2FC1C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB680u; }
        if (ctx->pc != 0x2FB680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC1C0_0x2fc1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB680u; }
        if (ctx->pc != 0x2FB680u) { return; }
    }
    ctx->pc = 0x2FB680u;
label_2fb680:
    // 0x2fb680: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb684:
    // 0x2fb684: 0x244233f0  addiu       $v0, $v0, 0x33F0
    ctx->pc = 0x2fb684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13296));
label_2fb688:
    // 0x2fb688: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fb688u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fb68c:
    // 0x2fb68c: 0x0  nop
    ctx->pc = 0x2fb68cu;
    // NOP
label_2fb690:
    // 0x2fb690: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_2fb694:
    if (ctx->pc == 0x2FB694u) {
        ctx->pc = 0x2FB694u;
            // 0x2fb694: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FB698u;
        goto label_2fb698;
    }
    ctx->pc = 0x2FB690u;
    {
        const bool branch_taken_0x2fb690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB690u;
            // 0x2fb694: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb690) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB698u;
label_2fb698:
    // 0x2fb698: 0xc040180  jal         func_100600
label_2fb69c:
    if (ctx->pc == 0x2FB69Cu) {
        ctx->pc = 0x2FB69Cu;
            // 0x2fb69c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x2FB6A0u;
        goto label_2fb6a0;
    }
    ctx->pc = 0x2FB698u;
    SET_GPR_U32(ctx, 31, 0x2FB6A0u);
    ctx->pc = 0x2FB69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB698u;
            // 0x2fb69c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6A0u; }
        if (ctx->pc != 0x2FB6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6A0u; }
        if (ctx->pc != 0x2FB6A0u) { return; }
    }
    ctx->pc = 0x2FB6A0u;
label_2fb6a0:
    // 0x2fb6a0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fb6a4:
    if (ctx->pc == 0x2FB6A4u) {
        ctx->pc = 0x2FB6A4u;
            // 0x2fb6a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6A8u;
        goto label_2fb6a8;
    }
    ctx->pc = 0x2FB6A0u;
    {
        const bool branch_taken_0x2fb6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6A0u;
            // 0x2fb6a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6a0) {
            ctx->pc = 0x2FB710u;
            goto label_2fb710;
        }
    }
    ctx->pc = 0x2FB6A8u;
label_2fb6a8:
    // 0x2fb6a8: 0xc0bd73c  jal         func_2F5CF0
label_2fb6ac:
    if (ctx->pc == 0x2FB6ACu) {
        ctx->pc = 0x2FB6ACu;
            // 0x2fb6ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6B0u;
        goto label_2fb6b0;
    }
    ctx->pc = 0x2FB6A8u;
    SET_GPR_U32(ctx, 31, 0x2FB6B0u);
    ctx->pc = 0x2FB6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6A8u;
            // 0x2fb6ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6B0u; }
        if (ctx->pc != 0x2FB6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6B0u; }
        if (ctx->pc != 0x2FB6B0u) { return; }
    }
    ctx->pc = 0x2FB6B0u;
label_2fb6b0:
    // 0x2fb6b0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fb6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb6b4:
    // 0x2fb6b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb6b8:
    // 0x2fb6b8: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fb6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb6bc:
    // 0x2fb6bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb6c0:
    // 0x2fb6c0: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fb6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fb6c4:
    // 0x2fb6c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fb6c8:
    // 0x2fb6c8: 0xc0bd73c  jal         func_2F5CF0
label_2fb6cc:
    if (ctx->pc == 0x2FB6CCu) {
        ctx->pc = 0x2FB6CCu;
            // 0x2fb6cc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB6D0u;
        goto label_2fb6d0;
    }
    ctx->pc = 0x2FB6C8u;
    SET_GPR_U32(ctx, 31, 0x2FB6D0u);
    ctx->pc = 0x2FB6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6C8u;
            // 0x2fb6cc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6D0u; }
        if (ctx->pc != 0x2FB6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6D0u; }
        if (ctx->pc != 0x2FB6D0u) { return; }
    }
    ctx->pc = 0x2FB6D0u;
label_2fb6d0:
    // 0x2fb6d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb6d4:
    // 0x2fb6d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fb6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb6d8:
    // 0x2fb6d8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fb6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fb6dc:
    // 0x2fb6dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fb6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fb6e0:
    // 0x2fb6e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb6e4:
    // 0x2fb6e4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fb6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fb6e8:
    // 0x2fb6e8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb6ec:
    // 0x2fb6ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fb6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fb6f0:
    // 0x2fb6f0: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fb6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fb6f4:
    // 0x2fb6f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fb6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fb6f8:
    // 0x2fb6f8: 0xc0bf070  jal         func_2FC1C0
label_2fb6fc:
    if (ctx->pc == 0x2FB6FCu) {
        ctx->pc = 0x2FB6FCu;
            // 0x2fb6fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB700u;
        goto label_2fb700;
    }
    ctx->pc = 0x2FB6F8u;
    SET_GPR_U32(ctx, 31, 0x2FB700u);
    ctx->pc = 0x2FB6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6F8u;
            // 0x2fb6fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC1C0u;
    if (runtime->hasFunction(0x2FC1C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB700u; }
        if (ctx->pc != 0x2FB700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC1C0_0x2fc1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB700u; }
        if (ctx->pc != 0x2FB700u) { return; }
    }
    ctx->pc = 0x2FB700u;
label_2fb700:
    // 0x2fb700: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb704:
    // 0x2fb704: 0x244233f0  addiu       $v0, $v0, 0x33F0
    ctx->pc = 0x2fb704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13296));
label_2fb708:
    // 0x2fb708: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fb708u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fb70c:
    // 0x2fb70c: 0x0  nop
    ctx->pc = 0x2fb70cu;
    // NOP
label_2fb710:
    // 0x2fb710: 0x10000081  b           . + 4 + (0x81 << 2)
label_2fb714:
    if (ctx->pc == 0x2FB714u) {
        ctx->pc = 0x2FB714u;
            // 0x2fb714: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FB718u;
        goto label_2fb718;
    }
    ctx->pc = 0x2FB710u;
    {
        const bool branch_taken_0x2fb710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB710u;
            // 0x2fb714: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb710) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB718u;
label_2fb718:
    // 0x2fb718: 0xc040180  jal         func_100600
label_2fb71c:
    if (ctx->pc == 0x2FB71Cu) {
        ctx->pc = 0x2FB71Cu;
            // 0x2fb71c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x2FB720u;
        goto label_2fb720;
    }
    ctx->pc = 0x2FB718u;
    SET_GPR_U32(ctx, 31, 0x2FB720u);
    ctx->pc = 0x2FB71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB718u;
            // 0x2fb71c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB720u; }
        if (ctx->pc != 0x2FB720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB720u; }
        if (ctx->pc != 0x2FB720u) { return; }
    }
    ctx->pc = 0x2FB720u;
label_2fb720:
    // 0x2fb720: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fb724:
    if (ctx->pc == 0x2FB724u) {
        ctx->pc = 0x2FB724u;
            // 0x2fb724: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB728u;
        goto label_2fb728;
    }
    ctx->pc = 0x2FB720u;
    {
        const bool branch_taken_0x2fb720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB720u;
            // 0x2fb724: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb720) {
            ctx->pc = 0x2FB790u;
            goto label_2fb790;
        }
    }
    ctx->pc = 0x2FB728u;
label_2fb728:
    // 0x2fb728: 0xc0bd73c  jal         func_2F5CF0
label_2fb72c:
    if (ctx->pc == 0x2FB72Cu) {
        ctx->pc = 0x2FB72Cu;
            // 0x2fb72c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB730u;
        goto label_2fb730;
    }
    ctx->pc = 0x2FB728u;
    SET_GPR_U32(ctx, 31, 0x2FB730u);
    ctx->pc = 0x2FB72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB728u;
            // 0x2fb72c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB730u; }
        if (ctx->pc != 0x2FB730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB730u; }
        if (ctx->pc != 0x2FB730u) { return; }
    }
    ctx->pc = 0x2FB730u;
label_2fb730:
    // 0x2fb730: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fb730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb734:
    // 0x2fb734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb738:
    // 0x2fb738: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fb738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb73c:
    // 0x2fb73c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb740:
    // 0x2fb740: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fb740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fb744:
    // 0x2fb744: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fb748:
    // 0x2fb748: 0xc0bd73c  jal         func_2F5CF0
label_2fb74c:
    if (ctx->pc == 0x2FB74Cu) {
        ctx->pc = 0x2FB74Cu;
            // 0x2fb74c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB750u;
        goto label_2fb750;
    }
    ctx->pc = 0x2FB748u;
    SET_GPR_U32(ctx, 31, 0x2FB750u);
    ctx->pc = 0x2FB74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB748u;
            // 0x2fb74c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB750u; }
        if (ctx->pc != 0x2FB750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB750u; }
        if (ctx->pc != 0x2FB750u) { return; }
    }
    ctx->pc = 0x2FB750u;
label_2fb750:
    // 0x2fb750: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb754:
    // 0x2fb754: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fb754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb758:
    // 0x2fb758: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fb758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fb75c:
    // 0x2fb75c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fb75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fb760:
    // 0x2fb760: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb764:
    // 0x2fb764: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fb764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fb768:
    // 0x2fb768: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb76c:
    // 0x2fb76c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fb770:
    // 0x2fb770: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fb770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fb774:
    // 0x2fb774: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fb774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fb778:
    // 0x2fb778: 0xc0bf020  jal         func_2FC080
label_2fb77c:
    if (ctx->pc == 0x2FB77Cu) {
        ctx->pc = 0x2FB77Cu;
            // 0x2fb77c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB780u;
        goto label_2fb780;
    }
    ctx->pc = 0x2FB778u;
    SET_GPR_U32(ctx, 31, 0x2FB780u);
    ctx->pc = 0x2FB77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB778u;
            // 0x2fb77c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC080u;
    if (runtime->hasFunction(0x2FC080u)) {
        auto targetFn = runtime->lookupFunction(0x2FC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB780u; }
        if (ctx->pc != 0x2FB780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC080_0x2fc080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB780u; }
        if (ctx->pc != 0x2FB780u) { return; }
    }
    ctx->pc = 0x2FB780u;
label_2fb780:
    // 0x2fb780: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb784:
    // 0x2fb784: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x2fb784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
label_2fb788:
    // 0x2fb788: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fb788u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fb78c:
    // 0x2fb78c: 0x0  nop
    ctx->pc = 0x2fb78cu;
    // NOP
label_2fb790:
    // 0x2fb790: 0x10000061  b           . + 4 + (0x61 << 2)
label_2fb794:
    if (ctx->pc == 0x2FB794u) {
        ctx->pc = 0x2FB794u;
            // 0x2fb794: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FB798u;
        goto label_2fb798;
    }
    ctx->pc = 0x2FB790u;
    {
        const bool branch_taken_0x2fb790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB790u;
            // 0x2fb794: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb790) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB798u;
label_2fb798:
    // 0x2fb798: 0xc040180  jal         func_100600
label_2fb79c:
    if (ctx->pc == 0x2FB79Cu) {
        ctx->pc = 0x2FB79Cu;
            // 0x2fb79c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x2FB7A0u;
        goto label_2fb7a0;
    }
    ctx->pc = 0x2FB798u;
    SET_GPR_U32(ctx, 31, 0x2FB7A0u);
    ctx->pc = 0x2FB79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB798u;
            // 0x2fb79c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7A0u; }
        if (ctx->pc != 0x2FB7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7A0u; }
        if (ctx->pc != 0x2FB7A0u) { return; }
    }
    ctx->pc = 0x2FB7A0u;
label_2fb7a0:
    // 0x2fb7a0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fb7a4:
    if (ctx->pc == 0x2FB7A4u) {
        ctx->pc = 0x2FB7A4u;
            // 0x2fb7a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB7A8u;
        goto label_2fb7a8;
    }
    ctx->pc = 0x2FB7A0u;
    {
        const bool branch_taken_0x2fb7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7A0u;
            // 0x2fb7a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7a0) {
            ctx->pc = 0x2FB810u;
            goto label_2fb810;
        }
    }
    ctx->pc = 0x2FB7A8u;
label_2fb7a8:
    // 0x2fb7a8: 0xc0bd73c  jal         func_2F5CF0
label_2fb7ac:
    if (ctx->pc == 0x2FB7ACu) {
        ctx->pc = 0x2FB7ACu;
            // 0x2fb7ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB7B0u;
        goto label_2fb7b0;
    }
    ctx->pc = 0x2FB7A8u;
    SET_GPR_U32(ctx, 31, 0x2FB7B0u);
    ctx->pc = 0x2FB7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7A8u;
            // 0x2fb7ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7B0u; }
        if (ctx->pc != 0x2FB7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7B0u; }
        if (ctx->pc != 0x2FB7B0u) { return; }
    }
    ctx->pc = 0x2FB7B0u;
label_2fb7b0:
    // 0x2fb7b0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fb7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb7b4:
    // 0x2fb7b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb7b8:
    // 0x2fb7b8: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fb7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb7bc:
    // 0x2fb7bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb7c0:
    // 0x2fb7c0: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fb7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fb7c4:
    // 0x2fb7c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fb7c8:
    // 0x2fb7c8: 0xc0bd73c  jal         func_2F5CF0
label_2fb7cc:
    if (ctx->pc == 0x2FB7CCu) {
        ctx->pc = 0x2FB7CCu;
            // 0x2fb7cc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB7D0u;
        goto label_2fb7d0;
    }
    ctx->pc = 0x2FB7C8u;
    SET_GPR_U32(ctx, 31, 0x2FB7D0u);
    ctx->pc = 0x2FB7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7C8u;
            // 0x2fb7cc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7D0u; }
        if (ctx->pc != 0x2FB7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7D0u; }
        if (ctx->pc != 0x2FB7D0u) { return; }
    }
    ctx->pc = 0x2FB7D0u;
label_2fb7d0:
    // 0x2fb7d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb7d4:
    // 0x2fb7d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fb7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb7d8:
    // 0x2fb7d8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fb7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fb7dc:
    // 0x2fb7dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fb7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fb7e0:
    // 0x2fb7e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb7e4:
    // 0x2fb7e4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fb7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fb7e8:
    // 0x2fb7e8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb7ec:
    // 0x2fb7ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fb7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fb7f0:
    // 0x2fb7f0: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fb7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fb7f4:
    // 0x2fb7f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fb7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fb7f8:
    // 0x2fb7f8: 0xc0bf020  jal         func_2FC080
label_2fb7fc:
    if (ctx->pc == 0x2FB7FCu) {
        ctx->pc = 0x2FB7FCu;
            // 0x2fb7fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB800u;
        goto label_2fb800;
    }
    ctx->pc = 0x2FB7F8u;
    SET_GPR_U32(ctx, 31, 0x2FB800u);
    ctx->pc = 0x2FB7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7F8u;
            // 0x2fb7fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC080u;
    if (runtime->hasFunction(0x2FC080u)) {
        auto targetFn = runtime->lookupFunction(0x2FC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB800u; }
        if (ctx->pc != 0x2FB800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC080_0x2fc080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB800u; }
        if (ctx->pc != 0x2FB800u) { return; }
    }
    ctx->pc = 0x2FB800u;
label_2fb800:
    // 0x2fb800: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb804:
    // 0x2fb804: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x2fb804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
label_2fb808:
    // 0x2fb808: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fb808u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fb80c:
    // 0x2fb80c: 0x0  nop
    ctx->pc = 0x2fb80cu;
    // NOP
label_2fb810:
    // 0x2fb810: 0x10000041  b           . + 4 + (0x41 << 2)
label_2fb814:
    if (ctx->pc == 0x2FB814u) {
        ctx->pc = 0x2FB814u;
            // 0x2fb814: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FB818u;
        goto label_2fb818;
    }
    ctx->pc = 0x2FB810u;
    {
        const bool branch_taken_0x2fb810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB810u;
            // 0x2fb814: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb810) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB818u;
label_2fb818:
    // 0x2fb818: 0xc040180  jal         func_100600
label_2fb81c:
    if (ctx->pc == 0x2FB81Cu) {
        ctx->pc = 0x2FB81Cu;
            // 0x2fb81c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FB820u;
        goto label_2fb820;
    }
    ctx->pc = 0x2FB818u;
    SET_GPR_U32(ctx, 31, 0x2FB820u);
    ctx->pc = 0x2FB81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB818u;
            // 0x2fb81c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB820u; }
        if (ctx->pc != 0x2FB820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB820u; }
        if (ctx->pc != 0x2FB820u) { return; }
    }
    ctx->pc = 0x2FB820u;
label_2fb820:
    // 0x2fb820: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fb824:
    if (ctx->pc == 0x2FB824u) {
        ctx->pc = 0x2FB824u;
            // 0x2fb824: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB828u;
        goto label_2fb828;
    }
    ctx->pc = 0x2FB820u;
    {
        const bool branch_taken_0x2fb820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB820u;
            // 0x2fb824: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb820) {
            ctx->pc = 0x2FB890u;
            goto label_2fb890;
        }
    }
    ctx->pc = 0x2FB828u;
label_2fb828:
    // 0x2fb828: 0xc0bd73c  jal         func_2F5CF0
label_2fb82c:
    if (ctx->pc == 0x2FB82Cu) {
        ctx->pc = 0x2FB82Cu;
            // 0x2fb82c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB830u;
        goto label_2fb830;
    }
    ctx->pc = 0x2FB828u;
    SET_GPR_U32(ctx, 31, 0x2FB830u);
    ctx->pc = 0x2FB82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB828u;
            // 0x2fb82c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB830u; }
        if (ctx->pc != 0x2FB830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB830u; }
        if (ctx->pc != 0x2FB830u) { return; }
    }
    ctx->pc = 0x2FB830u;
label_2fb830:
    // 0x2fb830: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fb830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb834:
    // 0x2fb834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb838:
    // 0x2fb838: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fb838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb83c:
    // 0x2fb83c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb840:
    // 0x2fb840: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fb840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fb844:
    // 0x2fb844: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fb848:
    // 0x2fb848: 0xc0bd73c  jal         func_2F5CF0
label_2fb84c:
    if (ctx->pc == 0x2FB84Cu) {
        ctx->pc = 0x2FB84Cu;
            // 0x2fb84c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB850u;
        goto label_2fb850;
    }
    ctx->pc = 0x2FB848u;
    SET_GPR_U32(ctx, 31, 0x2FB850u);
    ctx->pc = 0x2FB84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB848u;
            // 0x2fb84c: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB850u; }
        if (ctx->pc != 0x2FB850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB850u; }
        if (ctx->pc != 0x2FB850u) { return; }
    }
    ctx->pc = 0x2FB850u;
label_2fb850:
    // 0x2fb850: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb854:
    // 0x2fb854: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fb854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb858:
    // 0x2fb858: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fb858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fb85c:
    // 0x2fb85c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fb85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fb860:
    // 0x2fb860: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb864:
    // 0x2fb864: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fb864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fb868:
    // 0x2fb868: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb86c:
    // 0x2fb86c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fb86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fb870:
    // 0x2fb870: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fb870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fb874:
    // 0x2fb874: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fb874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fb878:
    // 0x2fb878: 0xc0bf210  jal         func_2FC840
label_2fb87c:
    if (ctx->pc == 0x2FB87Cu) {
        ctx->pc = 0x2FB87Cu;
            // 0x2fb87c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB880u;
        goto label_2fb880;
    }
    ctx->pc = 0x2FB878u;
    SET_GPR_U32(ctx, 31, 0x2FB880u);
    ctx->pc = 0x2FB87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB878u;
            // 0x2fb87c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB880u; }
        if (ctx->pc != 0x2FB880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB880u; }
        if (ctx->pc != 0x2FB880u) { return; }
    }
    ctx->pc = 0x2FB880u;
label_2fb880:
    // 0x2fb880: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb884:
    // 0x2fb884: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x2fb884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
label_2fb888:
    // 0x2fb888: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fb888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fb88c:
    // 0x2fb88c: 0x0  nop
    ctx->pc = 0x2fb88cu;
    // NOP
label_2fb890:
    // 0x2fb890: 0x10000021  b           . + 4 + (0x21 << 2)
label_2fb894:
    if (ctx->pc == 0x2FB894u) {
        ctx->pc = 0x2FB894u;
            // 0x2fb894: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->pc = 0x2FB898u;
        goto label_2fb898;
    }
    ctx->pc = 0x2FB890u;
    {
        const bool branch_taken_0x2fb890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB890u;
            // 0x2fb894: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb890) {
            ctx->pc = 0x2FB918u;
            goto label_2fb918;
        }
    }
    ctx->pc = 0x2FB898u;
label_2fb898:
    // 0x2fb898: 0xc040180  jal         func_100600
label_2fb89c:
    if (ctx->pc == 0x2FB89Cu) {
        ctx->pc = 0x2FB89Cu;
            // 0x2fb89c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FB8A0u;
        goto label_2fb8a0;
    }
    ctx->pc = 0x2FB898u;
    SET_GPR_U32(ctx, 31, 0x2FB8A0u);
    ctx->pc = 0x2FB89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB898u;
            // 0x2fb89c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB8A0u; }
        if (ctx->pc != 0x2FB8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB8A0u; }
        if (ctx->pc != 0x2FB8A0u) { return; }
    }
    ctx->pc = 0x2FB8A0u;
label_2fb8a0:
    // 0x2fb8a0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2fb8a4:
    if (ctx->pc == 0x2FB8A4u) {
        ctx->pc = 0x2FB8A4u;
            // 0x2fb8a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB8A8u;
        goto label_2fb8a8;
    }
    ctx->pc = 0x2FB8A0u;
    {
        const bool branch_taken_0x2fb8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB8A0u;
            // 0x2fb8a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb8a0) {
            ctx->pc = 0x2FB910u;
            goto label_2fb910;
        }
    }
    ctx->pc = 0x2FB8A8u;
label_2fb8a8:
    // 0x2fb8a8: 0xc0bd73c  jal         func_2F5CF0
label_2fb8ac:
    if (ctx->pc == 0x2FB8ACu) {
        ctx->pc = 0x2FB8ACu;
            // 0x2fb8ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB8B0u;
        goto label_2fb8b0;
    }
    ctx->pc = 0x2FB8A8u;
    SET_GPR_U32(ctx, 31, 0x2FB8B0u);
    ctx->pc = 0x2FB8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB8A8u;
            // 0x2fb8ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB8B0u; }
        if (ctx->pc != 0x2FB8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB8B0u; }
        if (ctx->pc != 0x2FB8B0u) { return; }
    }
    ctx->pc = 0x2FB8B0u;
label_2fb8b0:
    // 0x2fb8b0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2fb8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb8b4:
    // 0x2fb8b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb8b8:
    // 0x2fb8b8: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2fb8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb8bc:
    // 0x2fb8bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb8c0:
    // 0x2fb8c0: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x2fb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_2fb8c4:
    // 0x2fb8c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fb8c8:
    // 0x2fb8c8: 0xc0bd73c  jal         func_2F5CF0
label_2fb8cc:
    if (ctx->pc == 0x2FB8CCu) {
        ctx->pc = 0x2FB8CCu;
            // 0x2fb8cc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB8D0u;
        goto label_2fb8d0;
    }
    ctx->pc = 0x2FB8C8u;
    SET_GPR_U32(ctx, 31, 0x2FB8D0u);
    ctx->pc = 0x2FB8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB8C8u;
            // 0x2fb8cc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CF0u;
    if (runtime->hasFunction(0x2F5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB8D0u; }
        if (ctx->pc != 0x2FB8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5CF0_0x2f5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB8D0u; }
        if (ctx->pc != 0x2FB8D0u) { return; }
    }
    ctx->pc = 0x2FB8D0u;
label_2fb8d0:
    // 0x2fb8d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fb8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb8d4:
    // 0x2fb8d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fb8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fb8d8:
    // 0x2fb8d8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2fb8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2fb8dc:
    // 0x2fb8dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fb8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fb8e0:
    // 0x2fb8e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb8e4:
    // 0x2fb8e4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2fb8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2fb8e8:
    // 0x2fb8e8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fb8ec:
    // 0x2fb8ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fb8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fb8f0:
    // 0x2fb8f0: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2fb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_2fb8f4:
    // 0x2fb8f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fb8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2fb8f8:
    // 0x2fb8f8: 0xc0bf210  jal         func_2FC840
label_2fb8fc:
    if (ctx->pc == 0x2FB8FCu) {
        ctx->pc = 0x2FB8FCu;
            // 0x2fb8fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FB900u;
        goto label_2fb900;
    }
    ctx->pc = 0x2FB8F8u;
    SET_GPR_U32(ctx, 31, 0x2FB900u);
    ctx->pc = 0x2FB8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB8F8u;
            // 0x2fb8fc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB900u; }
        if (ctx->pc != 0x2FB900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB900u; }
        if (ctx->pc != 0x2FB900u) { return; }
    }
    ctx->pc = 0x2FB900u;
label_2fb900:
    // 0x2fb900: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fb900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fb904:
    // 0x2fb904: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x2fb904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
label_2fb908:
    // 0x2fb908: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2fb908u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2fb90c:
    // 0x2fb90c: 0x0  nop
    ctx->pc = 0x2fb90cu;
    // NOP
label_2fb910:
    // 0x2fb910: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x2fb910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
label_2fb914:
    // 0x2fb914: 0x0  nop
    ctx->pc = 0x2fb914u;
    // NOP
label_2fb918:
    // 0x2fb918: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2fb918u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2fb91c:
    // 0x2fb91c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x2fb91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_2fb920:
    // 0x2fb920: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x2fb920u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_2fb924:
    // 0x2fb924: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2fb924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2fb928:
    // 0x2fb928: 0x1440f743  bnez        $v0, . + 4 + (-0x8BD << 2)
label_2fb92c:
    if (ctx->pc == 0x2FB92Cu) {
        ctx->pc = 0x2FB92Cu;
            // 0x2fb92c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2FB930u;
        goto label_2fb930;
    }
    ctx->pc = 0x2FB928u;
    {
        const bool branch_taken_0x2fb928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB928u;
            // 0x2fb92c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb928) {
            ctx->pc = 0x2F9638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9638;
        }
    }
    ctx->pc = 0x2FB930u;
label_2fb930:
    // 0x2fb930: 0xa25500d8  sb          $s5, 0xD8($s2)
    ctx->pc = 0x2fb930u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 216), (uint8_t)GPR_U32(ctx, 21));
label_2fb934:
    // 0x2fb934: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2fb934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2fb938:
    // 0x2fb938: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fb938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fb93c:
    // 0x2fb93c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2fb93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2fb940:
    // 0x2fb940: 0x320f809  jalr        $t9
label_2fb944:
    if (ctx->pc == 0x2FB944u) {
        ctx->pc = 0x2FB948u;
        goto label_2fb948;
    }
    ctx->pc = 0x2FB940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FB948u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FB948u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FB948u; }
            if (ctx->pc != 0x2FB948u) { return; }
        }
        }
    }
    ctx->pc = 0x2FB948u;
label_2fb948:
    // 0x2fb948: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fb948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fb94c:
    // 0x2fb94c: 0x5043001a  beql        $v0, $v1, . + 4 + (0x1A << 2)
label_2fb950:
    if (ctx->pc == 0x2FB950u) {
        ctx->pc = 0x2FB950u;
            // 0x2fb950: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x2FB954u;
        goto label_2fb954;
    }
    ctx->pc = 0x2FB94Cu;
    {
        const bool branch_taken_0x2fb94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fb94c) {
            ctx->pc = 0x2FB950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB94Cu;
            // 0x2fb950: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FB9B8u;
            goto label_2fb9b8;
        }
    }
    ctx->pc = 0x2FB954u;
label_2fb954:
    // 0x2fb954: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2fb954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2fb958:
    // 0x2fb958: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fb958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fb95c:
    // 0x2fb95c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2fb95cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2fb960:
    // 0x2fb960: 0x320f809  jalr        $t9
label_2fb964:
    if (ctx->pc == 0x2FB964u) {
        ctx->pc = 0x2FB968u;
        goto label_2fb968;
    }
    ctx->pc = 0x2FB960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FB968u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FB968u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FB968u; }
            if (ctx->pc != 0x2FB968u) { return; }
        }
        }
    }
    ctx->pc = 0x2FB968u;
label_2fb968:
    // 0x2fb968: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2fb968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2fb96c:
    // 0x2fb96c: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
label_2fb970:
    if (ctx->pc == 0x2FB970u) {
        ctx->pc = 0x2FB974u;
        goto label_2fb974;
    }
    ctx->pc = 0x2FB96Cu;
    {
        const bool branch_taken_0x2fb96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fb96c) {
            ctx->pc = 0x2FB9B4u;
            goto label_2fb9b4;
        }
    }
    ctx->pc = 0x2FB974u;
label_2fb974:
    // 0x2fb974: 0xc040180  jal         func_100600
label_2fb978:
    if (ctx->pc == 0x2FB978u) {
        ctx->pc = 0x2FB978u;
            // 0x2fb978: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FB97Cu;
        goto label_2fb97c;
    }
    ctx->pc = 0x2FB974u;
    SET_GPR_U32(ctx, 31, 0x2FB97Cu);
    ctx->pc = 0x2FB978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB974u;
            // 0x2fb978: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB97Cu; }
        if (ctx->pc != 0x2FB97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB97Cu; }
        if (ctx->pc != 0x2FB97Cu) { return; }
    }
    ctx->pc = 0x2FB97Cu;
label_2fb97c:
    // 0x2fb97c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2fb980:
    if (ctx->pc == 0x2FB980u) {
        ctx->pc = 0x2FB980u;
            // 0x2fb980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB984u;
        goto label_2fb984;
    }
    ctx->pc = 0x2FB97Cu;
    {
        const bool branch_taken_0x2fb97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB97Cu;
            // 0x2fb980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb97c) {
            ctx->pc = 0x2FB9ACu;
            goto label_2fb9ac;
        }
    }
    ctx->pc = 0x2FB984u;
label_2fb984:
    // 0x2fb984: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2fb984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_2fb988:
    // 0x2fb988: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x2fb988u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_2fb98c:
    // 0x2fb98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fb990:
    // 0x2fb990: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fb990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fb994:
    // 0x2fb994: 0x24c62840  addiu       $a2, $a2, 0x2840
    ctx->pc = 0x2fb994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10304));
label_2fb998:
    // 0x2fb998: 0xc0bf210  jal         func_2FC840
label_2fb99c:
    if (ctx->pc == 0x2FB99Cu) {
        ctx->pc = 0x2FB99Cu;
            // 0x2fb99c: 0x24e729f0  addiu       $a3, $a3, 0x29F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10736));
        ctx->pc = 0x2FB9A0u;
        goto label_2fb9a0;
    }
    ctx->pc = 0x2FB998u;
    SET_GPR_U32(ctx, 31, 0x2FB9A0u);
    ctx->pc = 0x2FB99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB998u;
            // 0x2fb99c: 0x24e729f0  addiu       $a3, $a3, 0x29F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB9A0u; }
        if (ctx->pc != 0x2FB9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB9A0u; }
        if (ctx->pc != 0x2FB9A0u) { return; }
    }
    ctx->pc = 0x2FB9A0u;
label_2fb9a0:
    // 0x2fb9a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fb9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fb9a4:
    // 0x2fb9a4: 0x246332f0  addiu       $v1, $v1, 0x32F0
    ctx->pc = 0x2fb9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13040));
label_2fb9a8:
    // 0x2fb9a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2fb9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2fb9ac:
    // 0x2fb9ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_2fb9b0:
    if (ctx->pc == 0x2FB9B0u) {
        ctx->pc = 0x2FB9B0u;
            // 0x2fb9b0: 0xae500014  sw          $s0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
        ctx->pc = 0x2FB9B4u;
        goto label_2fb9b4;
    }
    ctx->pc = 0x2FB9ACu;
    {
        const bool branch_taken_0x2fb9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB9ACu;
            // 0x2fb9b0: 0xae500014  sw          $s0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb9ac) {
            ctx->pc = 0x2FB9B8u;
            goto label_2fb9b8;
        }
    }
    ctx->pc = 0x2FB9B4u;
label_2fb9b4:
    // 0x2fb9b4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2fb9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_2fb9b8:
    // 0x2fb9b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2fb9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2fb9bc:
    // 0x2fb9bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2fb9bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fb9c0:
    // 0x2fb9c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2fb9c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2fb9c4:
    // 0x2fb9c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fb9c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fb9c8:
    // 0x2fb9c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fb9c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fb9cc:
    // 0x2fb9cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fb9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fb9d0:
    // 0x2fb9d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fb9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fb9d4:
    // 0x2fb9d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fb9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb9d8:
    // 0x2fb9d8: 0x3e00008  jr          $ra
label_2fb9dc:
    if (ctx->pc == 0x2FB9DCu) {
        ctx->pc = 0x2FB9DCu;
            // 0x2fb9dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2FB9E0u;
        goto label_2fb9e0;
    }
    ctx->pc = 0x2FB9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB9D8u;
            // 0x2fb9dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FB9E0u;
label_2fb9e0:
    // 0x2fb9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fb9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fb9e4:
    // 0x2fb9e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fb9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fb9e8:
    // 0x2fb9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fb9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fb9ec:
    // 0x2fb9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fb9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fb9f0:
    // 0x2fb9f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb9f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fb9f4:
    // 0x2fb9f4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2fb9f8:
    if (ctx->pc == 0x2FB9F8u) {
        ctx->pc = 0x2FB9F8u;
            // 0x2fb9f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9FCu;
        goto label_2fb9fc;
    }
    ctx->pc = 0x2FB9F4u;
    {
        const bool branch_taken_0x2fb9f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB9F4u;
            // 0x2fb9f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb9f4) {
            ctx->pc = 0x2FBA50u;
            goto label_2fba50;
        }
    }
    ctx->pc = 0x2FB9FCu;
label_2fb9fc:
    // 0x2fb9fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fb9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fba00:
    // 0x2fba00: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x2fba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
label_2fba04:
    // 0x2fba04: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2fba08:
    if (ctx->pc == 0x2FBA08u) {
        ctx->pc = 0x2FBA08u;
            // 0x2fba08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBA0Cu;
        goto label_2fba0c;
    }
    ctx->pc = 0x2FBA04u;
    {
        const bool branch_taken_0x2fba04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA04u;
            // 0x2fba08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba04) {
            ctx->pc = 0x2FBA38u;
            goto label_2fba38;
        }
    }
    ctx->pc = 0x2FBA0Cu;
label_2fba0c:
    // 0x2fba0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fba10:
    // 0x2fba10: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fba10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fba14:
    // 0x2fba14: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2fba18:
    if (ctx->pc == 0x2FBA18u) {
        ctx->pc = 0x2FBA18u;
            // 0x2fba18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBA1Cu;
        goto label_2fba1c;
    }
    ctx->pc = 0x2FBA14u;
    {
        const bool branch_taken_0x2fba14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA14u;
            // 0x2fba18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba14) {
            ctx->pc = 0x2FBA38u;
            goto label_2fba38;
        }
    }
    ctx->pc = 0x2FBA1Cu;
label_2fba1c:
    // 0x2fba1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fba20:
    // 0x2fba20: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2fba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2fba24:
    // 0x2fba24: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fba28:
    // 0x2fba28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fba2c:
    if (ctx->pc == 0x2FBA2Cu) {
        ctx->pc = 0x2FBA2Cu;
            // 0x2fba2c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBA30u;
        goto label_2fba30;
    }
    ctx->pc = 0x2FBA28u;
    {
        const bool branch_taken_0x2fba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA28u;
            // 0x2fba2c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba28) {
            ctx->pc = 0x2FBA38u;
            goto label_2fba38;
        }
    }
    ctx->pc = 0x2FBA30u;
label_2fba30:
    // 0x2fba30: 0xc07507c  jal         func_1D41F0
label_2fba34:
    if (ctx->pc == 0x2FBA34u) {
        ctx->pc = 0x2FBA34u;
            // 0x2fba34: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x2FBA38u;
        goto label_2fba38;
    }
    ctx->pc = 0x2FBA30u;
    SET_GPR_U32(ctx, 31, 0x2FBA38u);
    ctx->pc = 0x2FBA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA30u;
            // 0x2fba34: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA38u; }
        if (ctx->pc != 0x2FBA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA38u; }
        if (ctx->pc != 0x2FBA38u) { return; }
    }
    ctx->pc = 0x2FBA38u;
label_2fba38:
    // 0x2fba38: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2fba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2fba3c:
    // 0x2fba3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fba3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fba40:
    // 0x2fba40: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fba44:
    if (ctx->pc == 0x2FBA44u) {
        ctx->pc = 0x2FBA44u;
            // 0x2fba44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA48u;
        goto label_2fba48;
    }
    ctx->pc = 0x2FBA40u;
    {
        const bool branch_taken_0x2fba40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fba40) {
            ctx->pc = 0x2FBA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA40u;
            // 0x2fba44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBA54u;
            goto label_2fba54;
        }
    }
    ctx->pc = 0x2FBA48u;
label_2fba48:
    // 0x2fba48: 0xc0400a8  jal         func_1002A0
label_2fba4c:
    if (ctx->pc == 0x2FBA4Cu) {
        ctx->pc = 0x2FBA4Cu;
            // 0x2fba4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA50u;
        goto label_2fba50;
    }
    ctx->pc = 0x2FBA48u;
    SET_GPR_U32(ctx, 31, 0x2FBA50u);
    ctx->pc = 0x2FBA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA48u;
            // 0x2fba4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA50u; }
        if (ctx->pc != 0x2FBA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBA50u; }
        if (ctx->pc != 0x2FBA50u) { return; }
    }
    ctx->pc = 0x2FBA50u;
label_2fba50:
    // 0x2fba50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fba50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fba54:
    // 0x2fba54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fba54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fba58:
    // 0x2fba58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fba58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fba5c:
    // 0x2fba5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fba5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fba60:
    // 0x2fba60: 0x3e00008  jr          $ra
label_2fba64:
    if (ctx->pc == 0x2FBA64u) {
        ctx->pc = 0x2FBA64u;
            // 0x2fba64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBA68u;
        goto label_2fba68;
    }
    ctx->pc = 0x2FBA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA60u;
            // 0x2fba64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBA68u;
label_2fba68:
    // 0x2fba68: 0x0  nop
    ctx->pc = 0x2fba68u;
    // NOP
label_2fba6c:
    // 0x2fba6c: 0x0  nop
    ctx->pc = 0x2fba6cu;
    // NOP
label_2fba70:
    // 0x2fba70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fba74:
    // 0x2fba74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fba78:
    // 0x2fba78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fba7c:
    // 0x2fba7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fba80:
    // 0x2fba80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fba80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fba84:
    // 0x2fba84: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fba88:
    if (ctx->pc == 0x2FBA88u) {
        ctx->pc = 0x2FBA88u;
            // 0x2fba88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA8Cu;
        goto label_2fba8c;
    }
    ctx->pc = 0x2FBA84u;
    {
        const bool branch_taken_0x2fba84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA84u;
            // 0x2fba88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba84) {
            ctx->pc = 0x2FBAF0u;
            goto label_2fbaf0;
        }
    }
    ctx->pc = 0x2FBA8Cu;
label_2fba8c:
    // 0x2fba8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fba90:
    // 0x2fba90: 0x2442b2d0  addiu       $v0, $v0, -0x4D30
    ctx->pc = 0x2fba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947536));
label_2fba94:
    // 0x2fba94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fba98:
    if (ctx->pc == 0x2FBA98u) {
        ctx->pc = 0x2FBA98u;
            // 0x2fba98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBA9Cu;
        goto label_2fba9c;
    }
    ctx->pc = 0x2FBA94u;
    {
        const bool branch_taken_0x2fba94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBA94u;
            // 0x2fba98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba94) {
            ctx->pc = 0x2FBAD8u;
            goto label_2fbad8;
        }
    }
    ctx->pc = 0x2FBA9Cu;
label_2fba9c:
    // 0x2fba9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fbaa0:
    // 0x2fbaa0: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x2fbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_2fbaa4:
    // 0x2fbaa4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fbaa8:
    if (ctx->pc == 0x2FBAA8u) {
        ctx->pc = 0x2FBAA8u;
            // 0x2fbaa8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBAACu;
        goto label_2fbaac;
    }
    ctx->pc = 0x2FBAA4u;
    {
        const bool branch_taken_0x2fbaa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBAA4u;
            // 0x2fbaa8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbaa4) {
            ctx->pc = 0x2FBAD8u;
            goto label_2fbad8;
        }
    }
    ctx->pc = 0x2FBAACu;
label_2fbaac:
    // 0x2fbaac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbab0:
    // 0x2fbab0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fbab4:
    // 0x2fbab4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fbab8:
    if (ctx->pc == 0x2FBAB8u) {
        ctx->pc = 0x2FBAB8u;
            // 0x2fbab8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBABCu;
        goto label_2fbabc;
    }
    ctx->pc = 0x2FBAB4u;
    {
        const bool branch_taken_0x2fbab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBAB4u;
            // 0x2fbab8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbab4) {
            ctx->pc = 0x2FBAD8u;
            goto label_2fbad8;
        }
    }
    ctx->pc = 0x2FBABCu;
label_2fbabc:
    // 0x2fbabc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fbabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fbac0:
    // 0x2fbac0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fbac4:
    // 0x2fbac4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fbac8:
    // 0x2fbac8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fbacc:
    if (ctx->pc == 0x2FBACCu) {
        ctx->pc = 0x2FBACCu;
            // 0x2fbacc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBAD0u;
        goto label_2fbad0;
    }
    ctx->pc = 0x2FBAC8u;
    {
        const bool branch_taken_0x2fbac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBAC8u;
            // 0x2fbacc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbac8) {
            ctx->pc = 0x2FBAD8u;
            goto label_2fbad8;
        }
    }
    ctx->pc = 0x2FBAD0u;
label_2fbad0:
    // 0x2fbad0: 0xc07507c  jal         func_1D41F0
label_2fbad4:
    if (ctx->pc == 0x2FBAD4u) {
        ctx->pc = 0x2FBAD4u;
            // 0x2fbad4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FBAD8u;
        goto label_2fbad8;
    }
    ctx->pc = 0x2FBAD0u;
    SET_GPR_U32(ctx, 31, 0x2FBAD8u);
    ctx->pc = 0x2FBAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBAD0u;
            // 0x2fbad4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBAD8u; }
        if (ctx->pc != 0x2FBAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBAD8u; }
        if (ctx->pc != 0x2FBAD8u) { return; }
    }
    ctx->pc = 0x2FBAD8u;
label_2fbad8:
    // 0x2fbad8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fbad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fbadc:
    // 0x2fbadc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fbadcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fbae0:
    // 0x2fbae0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fbae4:
    if (ctx->pc == 0x2FBAE4u) {
        ctx->pc = 0x2FBAE4u;
            // 0x2fbae4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBAE8u;
        goto label_2fbae8;
    }
    ctx->pc = 0x2FBAE0u;
    {
        const bool branch_taken_0x2fbae0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbae0) {
            ctx->pc = 0x2FBAE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBAE0u;
            // 0x2fbae4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBAF4u;
            goto label_2fbaf4;
        }
    }
    ctx->pc = 0x2FBAE8u;
label_2fbae8:
    // 0x2fbae8: 0xc0400a8  jal         func_1002A0
label_2fbaec:
    if (ctx->pc == 0x2FBAECu) {
        ctx->pc = 0x2FBAECu;
            // 0x2fbaec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBAF0u;
        goto label_2fbaf0;
    }
    ctx->pc = 0x2FBAE8u;
    SET_GPR_U32(ctx, 31, 0x2FBAF0u);
    ctx->pc = 0x2FBAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBAE8u;
            // 0x2fbaec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBAF0u; }
        if (ctx->pc != 0x2FBAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBAF0u; }
        if (ctx->pc != 0x2FBAF0u) { return; }
    }
    ctx->pc = 0x2FBAF0u;
label_2fbaf0:
    // 0x2fbaf0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fbaf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fbaf4:
    // 0x2fbaf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbaf8:
    // 0x2fbaf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbaf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbafc:
    // 0x2fbafc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbb00:
    // 0x2fbb00: 0x3e00008  jr          $ra
label_2fbb04:
    if (ctx->pc == 0x2FBB04u) {
        ctx->pc = 0x2FBB04u;
            // 0x2fbb04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBB08u;
        goto label_2fbb08;
    }
    ctx->pc = 0x2FBB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB00u;
            // 0x2fbb04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBB08u;
label_2fbb08:
    // 0x2fbb08: 0x0  nop
    ctx->pc = 0x2fbb08u;
    // NOP
label_2fbb0c:
    // 0x2fbb0c: 0x0  nop
    ctx->pc = 0x2fbb0cu;
    // NOP
label_2fbb10:
    // 0x2fbb10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbb14:
    // 0x2fbb14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbb18:
    // 0x2fbb18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbb1c:
    // 0x2fbb1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fbb20:
    // 0x2fbb20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbb24:
    // 0x2fbb24: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2fbb28:
    if (ctx->pc == 0x2FBB28u) {
        ctx->pc = 0x2FBB28u;
            // 0x2fbb28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB2Cu;
        goto label_2fbb2c;
    }
    ctx->pc = 0x2FBB24u;
    {
        const bool branch_taken_0x2fbb24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB24u;
            // 0x2fbb28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb24) {
            ctx->pc = 0x2FBB80u;
            goto label_2fbb80;
        }
    }
    ctx->pc = 0x2FBB2Cu;
label_2fbb2c:
    // 0x2fbb2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbb30:
    // 0x2fbb30: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x2fbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
label_2fbb34:
    // 0x2fbb34: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2fbb38:
    if (ctx->pc == 0x2FBB38u) {
        ctx->pc = 0x2FBB38u;
            // 0x2fbb38: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBB3Cu;
        goto label_2fbb3c;
    }
    ctx->pc = 0x2FBB34u;
    {
        const bool branch_taken_0x2fbb34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB34u;
            // 0x2fbb38: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb34) {
            ctx->pc = 0x2FBB68u;
            goto label_2fbb68;
        }
    }
    ctx->pc = 0x2FBB3Cu;
label_2fbb3c:
    // 0x2fbb3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbb40:
    // 0x2fbb40: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fbb44:
    // 0x2fbb44: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2fbb48:
    if (ctx->pc == 0x2FBB48u) {
        ctx->pc = 0x2FBB48u;
            // 0x2fbb48: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBB4Cu;
        goto label_2fbb4c;
    }
    ctx->pc = 0x2FBB44u;
    {
        const bool branch_taken_0x2fbb44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB44u;
            // 0x2fbb48: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb44) {
            ctx->pc = 0x2FBB68u;
            goto label_2fbb68;
        }
    }
    ctx->pc = 0x2FBB4Cu;
label_2fbb4c:
    // 0x2fbb4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fbb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fbb50:
    // 0x2fbb50: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2fbb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2fbb54:
    // 0x2fbb54: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fbb58:
    // 0x2fbb58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fbb5c:
    if (ctx->pc == 0x2FBB5Cu) {
        ctx->pc = 0x2FBB5Cu;
            // 0x2fbb5c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBB60u;
        goto label_2fbb60;
    }
    ctx->pc = 0x2FBB58u;
    {
        const bool branch_taken_0x2fbb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB58u;
            // 0x2fbb5c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb58) {
            ctx->pc = 0x2FBB68u;
            goto label_2fbb68;
        }
    }
    ctx->pc = 0x2FBB60u;
label_2fbb60:
    // 0x2fbb60: 0xc07507c  jal         func_1D41F0
label_2fbb64:
    if (ctx->pc == 0x2FBB64u) {
        ctx->pc = 0x2FBB64u;
            // 0x2fbb64: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x2FBB68u;
        goto label_2fbb68;
    }
    ctx->pc = 0x2FBB60u;
    SET_GPR_U32(ctx, 31, 0x2FBB68u);
    ctx->pc = 0x2FBB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB60u;
            // 0x2fbb64: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBB68u; }
        if (ctx->pc != 0x2FBB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBB68u; }
        if (ctx->pc != 0x2FBB68u) { return; }
    }
    ctx->pc = 0x2FBB68u;
label_2fbb68:
    // 0x2fbb68: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2fbb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2fbb6c:
    // 0x2fbb6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fbb6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fbb70:
    // 0x2fbb70: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fbb74:
    if (ctx->pc == 0x2FBB74u) {
        ctx->pc = 0x2FBB74u;
            // 0x2fbb74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB78u;
        goto label_2fbb78;
    }
    ctx->pc = 0x2FBB70u;
    {
        const bool branch_taken_0x2fbb70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbb70) {
            ctx->pc = 0x2FBB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB70u;
            // 0x2fbb74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB84u;
            goto label_2fbb84;
        }
    }
    ctx->pc = 0x2FBB78u;
label_2fbb78:
    // 0x2fbb78: 0xc0400a8  jal         func_1002A0
label_2fbb7c:
    if (ctx->pc == 0x2FBB7Cu) {
        ctx->pc = 0x2FBB7Cu;
            // 0x2fbb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB80u;
        goto label_2fbb80;
    }
    ctx->pc = 0x2FBB78u;
    SET_GPR_U32(ctx, 31, 0x2FBB80u);
    ctx->pc = 0x2FBB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB78u;
            // 0x2fbb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBB80u; }
        if (ctx->pc != 0x2FBB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBB80u; }
        if (ctx->pc != 0x2FBB80u) { return; }
    }
    ctx->pc = 0x2FBB80u;
label_2fbb80:
    // 0x2fbb80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbb80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fbb84:
    // 0x2fbb84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbb88:
    // 0x2fbb88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbb88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbb8c:
    // 0x2fbb8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbb90:
    // 0x2fbb90: 0x3e00008  jr          $ra
label_2fbb94:
    if (ctx->pc == 0x2FBB94u) {
        ctx->pc = 0x2FBB94u;
            // 0x2fbb94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBB98u;
        goto label_2fbb98;
    }
    ctx->pc = 0x2FBB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB90u;
            // 0x2fbb94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBB98u;
label_2fbb98:
    // 0x2fbb98: 0x0  nop
    ctx->pc = 0x2fbb98u;
    // NOP
label_2fbb9c:
    // 0x2fbb9c: 0x0  nop
    ctx->pc = 0x2fbb9cu;
    // NOP
label_2fbba0:
    // 0x2fbba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbba4:
    // 0x2fbba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbba8:
    // 0x2fbba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbbac:
    // 0x2fbbac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fbbb0:
    // 0x2fbbb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbbb4:
    // 0x2fbbb4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2fbbb8:
    if (ctx->pc == 0x2FBBB8u) {
        ctx->pc = 0x2FBBB8u;
            // 0x2fbbb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBBCu;
        goto label_2fbbbc;
    }
    ctx->pc = 0x2FBBB4u;
    {
        const bool branch_taken_0x2fbbb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBBB4u;
            // 0x2fbbb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbb4) {
            ctx->pc = 0x2FBC10u;
            goto label_2fbc10;
        }
    }
    ctx->pc = 0x2FBBBCu;
label_2fbbbc:
    // 0x2fbbbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbbc0:
    // 0x2fbbc0: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fbbc4:
    // 0x2fbbc4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2fbbc8:
    if (ctx->pc == 0x2FBBC8u) {
        ctx->pc = 0x2FBBC8u;
            // 0x2fbbc8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBBCCu;
        goto label_2fbbcc;
    }
    ctx->pc = 0x2FBBC4u;
    {
        const bool branch_taken_0x2fbbc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBBC4u;
            // 0x2fbbc8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbc4) {
            ctx->pc = 0x2FBBF8u;
            goto label_2fbbf8;
        }
    }
    ctx->pc = 0x2FBBCCu;
label_2fbbcc:
    // 0x2fbbcc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbbd0:
    // 0x2fbbd0: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fbbd4:
    // 0x2fbbd4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2fbbd8:
    if (ctx->pc == 0x2FBBD8u) {
        ctx->pc = 0x2FBBD8u;
            // 0x2fbbd8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBBDCu;
        goto label_2fbbdc;
    }
    ctx->pc = 0x2FBBD4u;
    {
        const bool branch_taken_0x2fbbd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBBD4u;
            // 0x2fbbd8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbd4) {
            ctx->pc = 0x2FBBF8u;
            goto label_2fbbf8;
        }
    }
    ctx->pc = 0x2FBBDCu;
label_2fbbdc:
    // 0x2fbbdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fbbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fbbe0:
    // 0x2fbbe0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2fbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2fbbe4:
    // 0x2fbbe4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fbbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fbbe8:
    // 0x2fbbe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fbbec:
    if (ctx->pc == 0x2FBBECu) {
        ctx->pc = 0x2FBBECu;
            // 0x2fbbec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBBF0u;
        goto label_2fbbf0;
    }
    ctx->pc = 0x2FBBE8u;
    {
        const bool branch_taken_0x2fbbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBBE8u;
            // 0x2fbbec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbe8) {
            ctx->pc = 0x2FBBF8u;
            goto label_2fbbf8;
        }
    }
    ctx->pc = 0x2FBBF0u;
label_2fbbf0:
    // 0x2fbbf0: 0xc07507c  jal         func_1D41F0
label_2fbbf4:
    if (ctx->pc == 0x2FBBF4u) {
        ctx->pc = 0x2FBBF4u;
            // 0x2fbbf4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x2FBBF8u;
        goto label_2fbbf8;
    }
    ctx->pc = 0x2FBBF0u;
    SET_GPR_U32(ctx, 31, 0x2FBBF8u);
    ctx->pc = 0x2FBBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBBF0u;
            // 0x2fbbf4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBBF8u; }
        if (ctx->pc != 0x2FBBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBBF8u; }
        if (ctx->pc != 0x2FBBF8u) { return; }
    }
    ctx->pc = 0x2FBBF8u;
label_2fbbf8:
    // 0x2fbbf8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2fbbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2fbbfc:
    // 0x2fbbfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fbbfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fbc00:
    // 0x2fbc00: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fbc04:
    if (ctx->pc == 0x2FBC04u) {
        ctx->pc = 0x2FBC04u;
            // 0x2fbc04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC08u;
        goto label_2fbc08;
    }
    ctx->pc = 0x2FBC00u;
    {
        const bool branch_taken_0x2fbc00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbc00) {
            ctx->pc = 0x2FBC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC00u;
            // 0x2fbc04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBC14u;
            goto label_2fbc14;
        }
    }
    ctx->pc = 0x2FBC08u;
label_2fbc08:
    // 0x2fbc08: 0xc0400a8  jal         func_1002A0
label_2fbc0c:
    if (ctx->pc == 0x2FBC0Cu) {
        ctx->pc = 0x2FBC0Cu;
            // 0x2fbc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC10u;
        goto label_2fbc10;
    }
    ctx->pc = 0x2FBC08u;
    SET_GPR_U32(ctx, 31, 0x2FBC10u);
    ctx->pc = 0x2FBC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC08u;
            // 0x2fbc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC10u; }
        if (ctx->pc != 0x2FBC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC10u; }
        if (ctx->pc != 0x2FBC10u) { return; }
    }
    ctx->pc = 0x2FBC10u;
label_2fbc10:
    // 0x2fbc10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fbc14:
    // 0x2fbc14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbc18:
    // 0x2fbc18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbc18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbc1c:
    // 0x2fbc1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbc20:
    // 0x2fbc20: 0x3e00008  jr          $ra
label_2fbc24:
    if (ctx->pc == 0x2FBC24u) {
        ctx->pc = 0x2FBC24u;
            // 0x2fbc24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBC28u;
        goto label_2fbc28;
    }
    ctx->pc = 0x2FBC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC20u;
            // 0x2fbc24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBC28u;
label_2fbc28:
    // 0x2fbc28: 0x0  nop
    ctx->pc = 0x2fbc28u;
    // NOP
label_2fbc2c:
    // 0x2fbc2c: 0x0  nop
    ctx->pc = 0x2fbc2cu;
    // NOP
label_2fbc30:
    // 0x2fbc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbc34:
    // 0x2fbc34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbc38:
    // 0x2fbc38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbc3c:
    // 0x2fbc3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fbc40:
    // 0x2fbc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbc44:
    // 0x2fbc44: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2fbc48:
    if (ctx->pc == 0x2FBC48u) {
        ctx->pc = 0x2FBC48u;
            // 0x2fbc48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC4Cu;
        goto label_2fbc4c;
    }
    ctx->pc = 0x2FBC44u;
    {
        const bool branch_taken_0x2fbc44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC44u;
            // 0x2fbc48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc44) {
            ctx->pc = 0x2FBCA0u;
            goto label_2fbca0;
        }
    }
    ctx->pc = 0x2FBC4Cu;
label_2fbc4c:
    // 0x2fbc4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbc50:
    // 0x2fbc50: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x2fbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
label_2fbc54:
    // 0x2fbc54: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2fbc58:
    if (ctx->pc == 0x2FBC58u) {
        ctx->pc = 0x2FBC58u;
            // 0x2fbc58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBC5Cu;
        goto label_2fbc5c;
    }
    ctx->pc = 0x2FBC54u;
    {
        const bool branch_taken_0x2fbc54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC54u;
            // 0x2fbc58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc54) {
            ctx->pc = 0x2FBC88u;
            goto label_2fbc88;
        }
    }
    ctx->pc = 0x2FBC5Cu;
label_2fbc5c:
    // 0x2fbc5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbc60:
    // 0x2fbc60: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fbc64:
    // 0x2fbc64: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2fbc68:
    if (ctx->pc == 0x2FBC68u) {
        ctx->pc = 0x2FBC68u;
            // 0x2fbc68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBC6Cu;
        goto label_2fbc6c;
    }
    ctx->pc = 0x2FBC64u;
    {
        const bool branch_taken_0x2fbc64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC64u;
            // 0x2fbc68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc64) {
            ctx->pc = 0x2FBC88u;
            goto label_2fbc88;
        }
    }
    ctx->pc = 0x2FBC6Cu;
label_2fbc6c:
    // 0x2fbc6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fbc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fbc70:
    // 0x2fbc70: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2fbc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2fbc74:
    // 0x2fbc74: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fbc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fbc78:
    // 0x2fbc78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fbc7c:
    if (ctx->pc == 0x2FBC7Cu) {
        ctx->pc = 0x2FBC7Cu;
            // 0x2fbc7c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBC80u;
        goto label_2fbc80;
    }
    ctx->pc = 0x2FBC78u;
    {
        const bool branch_taken_0x2fbc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC78u;
            // 0x2fbc7c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc78) {
            ctx->pc = 0x2FBC88u;
            goto label_2fbc88;
        }
    }
    ctx->pc = 0x2FBC80u;
label_2fbc80:
    // 0x2fbc80: 0xc07507c  jal         func_1D41F0
label_2fbc84:
    if (ctx->pc == 0x2FBC84u) {
        ctx->pc = 0x2FBC84u;
            // 0x2fbc84: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x2FBC88u;
        goto label_2fbc88;
    }
    ctx->pc = 0x2FBC80u;
    SET_GPR_U32(ctx, 31, 0x2FBC88u);
    ctx->pc = 0x2FBC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC80u;
            // 0x2fbc84: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC88u; }
        if (ctx->pc != 0x2FBC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC88u; }
        if (ctx->pc != 0x2FBC88u) { return; }
    }
    ctx->pc = 0x2FBC88u;
label_2fbc88:
    // 0x2fbc88: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2fbc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2fbc8c:
    // 0x2fbc8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fbc8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fbc90:
    // 0x2fbc90: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fbc94:
    if (ctx->pc == 0x2FBC94u) {
        ctx->pc = 0x2FBC94u;
            // 0x2fbc94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC98u;
        goto label_2fbc98;
    }
    ctx->pc = 0x2FBC90u;
    {
        const bool branch_taken_0x2fbc90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbc90) {
            ctx->pc = 0x2FBC94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC90u;
            // 0x2fbc94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBCA4u;
            goto label_2fbca4;
        }
    }
    ctx->pc = 0x2FBC98u;
label_2fbc98:
    // 0x2fbc98: 0xc0400a8  jal         func_1002A0
label_2fbc9c:
    if (ctx->pc == 0x2FBC9Cu) {
        ctx->pc = 0x2FBC9Cu;
            // 0x2fbc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCA0u;
        goto label_2fbca0;
    }
    ctx->pc = 0x2FBC98u;
    SET_GPR_U32(ctx, 31, 0x2FBCA0u);
    ctx->pc = 0x2FBC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC98u;
            // 0x2fbc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBCA0u; }
        if (ctx->pc != 0x2FBCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBCA0u; }
        if (ctx->pc != 0x2FBCA0u) { return; }
    }
    ctx->pc = 0x2FBCA0u;
label_2fbca0:
    // 0x2fbca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fbca4:
    // 0x2fbca4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbca8:
    // 0x2fbca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbcac:
    // 0x2fbcac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbcacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbcb0:
    // 0x2fbcb0: 0x3e00008  jr          $ra
label_2fbcb4:
    if (ctx->pc == 0x2FBCB4u) {
        ctx->pc = 0x2FBCB4u;
            // 0x2fbcb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBCB8u;
        goto label_2fbcb8;
    }
    ctx->pc = 0x2FBCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBCB0u;
            // 0x2fbcb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBCB8u;
label_2fbcb8:
    // 0x2fbcb8: 0x0  nop
    ctx->pc = 0x2fbcb8u;
    // NOP
label_2fbcbc:
    // 0x2fbcbc: 0x0  nop
    ctx->pc = 0x2fbcbcu;
    // NOP
label_2fbcc0:
    // 0x2fbcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbcc4:
    // 0x2fbcc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbcc8:
    // 0x2fbcc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbccc:
    // 0x2fbccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fbcd0:
    // 0x2fbcd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fbcd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbcd4:
    // 0x2fbcd4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_2fbcd8:
    if (ctx->pc == 0x2FBCD8u) {
        ctx->pc = 0x2FBCD8u;
            // 0x2fbcd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCDCu;
        goto label_2fbcdc;
    }
    ctx->pc = 0x2FBCD4u;
    {
        const bool branch_taken_0x2fbcd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBCD4u;
            // 0x2fbcd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcd4) {
            ctx->pc = 0x2FBD20u;
            goto label_2fbd20;
        }
    }
    ctx->pc = 0x2FBCDCu;
label_2fbcdc:
    // 0x2fbcdc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbce0:
    // 0x2fbce0: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fbce4:
    // 0x2fbce4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fbce8:
    if (ctx->pc == 0x2FBCE8u) {
        ctx->pc = 0x2FBCE8u;
            // 0x2fbce8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBCECu;
        goto label_2fbcec;
    }
    ctx->pc = 0x2FBCE4u;
    {
        const bool branch_taken_0x2fbce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBCE4u;
            // 0x2fbce8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbce4) {
            ctx->pc = 0x2FBD08u;
            goto label_2fbd08;
        }
    }
    ctx->pc = 0x2FBCECu;
label_2fbcec:
    // 0x2fbcec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fbcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fbcf0:
    // 0x2fbcf0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fbcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fbcf4:
    // 0x2fbcf4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fbcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fbcf8:
    // 0x2fbcf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fbcfc:
    if (ctx->pc == 0x2FBCFCu) {
        ctx->pc = 0x2FBCFCu;
            // 0x2fbcfc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBD00u;
        goto label_2fbd00;
    }
    ctx->pc = 0x2FBCF8u;
    {
        const bool branch_taken_0x2fbcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBCF8u;
            // 0x2fbcfc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcf8) {
            ctx->pc = 0x2FBD08u;
            goto label_2fbd08;
        }
    }
    ctx->pc = 0x2FBD00u;
label_2fbd00:
    // 0x2fbd00: 0xc07507c  jal         func_1D41F0
label_2fbd04:
    if (ctx->pc == 0x2FBD04u) {
        ctx->pc = 0x2FBD04u;
            // 0x2fbd04: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FBD08u;
        goto label_2fbd08;
    }
    ctx->pc = 0x2FBD00u;
    SET_GPR_U32(ctx, 31, 0x2FBD08u);
    ctx->pc = 0x2FBD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD00u;
            // 0x2fbd04: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD08u; }
        if (ctx->pc != 0x2FBD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD08u; }
        if (ctx->pc != 0x2FBD08u) { return; }
    }
    ctx->pc = 0x2FBD08u;
label_2fbd08:
    // 0x2fbd08: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fbd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fbd0c:
    // 0x2fbd0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fbd0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fbd10:
    // 0x2fbd10: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fbd14:
    if (ctx->pc == 0x2FBD14u) {
        ctx->pc = 0x2FBD14u;
            // 0x2fbd14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD18u;
        goto label_2fbd18;
    }
    ctx->pc = 0x2FBD10u;
    {
        const bool branch_taken_0x2fbd10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbd10) {
            ctx->pc = 0x2FBD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD10u;
            // 0x2fbd14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBD24u;
            goto label_2fbd24;
        }
    }
    ctx->pc = 0x2FBD18u;
label_2fbd18:
    // 0x2fbd18: 0xc0400a8  jal         func_1002A0
label_2fbd1c:
    if (ctx->pc == 0x2FBD1Cu) {
        ctx->pc = 0x2FBD1Cu;
            // 0x2fbd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD20u;
        goto label_2fbd20;
    }
    ctx->pc = 0x2FBD18u;
    SET_GPR_U32(ctx, 31, 0x2FBD20u);
    ctx->pc = 0x2FBD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD18u;
            // 0x2fbd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD20u; }
        if (ctx->pc != 0x2FBD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD20u; }
        if (ctx->pc != 0x2FBD20u) { return; }
    }
    ctx->pc = 0x2FBD20u;
label_2fbd20:
    // 0x2fbd20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fbd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fbd24:
    // 0x2fbd24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbd28:
    // 0x2fbd28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbd2c:
    // 0x2fbd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbd30:
    // 0x2fbd30: 0x3e00008  jr          $ra
label_2fbd34:
    if (ctx->pc == 0x2FBD34u) {
        ctx->pc = 0x2FBD34u;
            // 0x2fbd34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBD38u;
        goto label_2fbd38;
    }
    ctx->pc = 0x2FBD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD30u;
            // 0x2fbd34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBD38u;
label_2fbd38:
    // 0x2fbd38: 0x0  nop
    ctx->pc = 0x2fbd38u;
    // NOP
label_2fbd3c:
    // 0x2fbd3c: 0x0  nop
    ctx->pc = 0x2fbd3cu;
    // NOP
label_2fbd40:
    // 0x2fbd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbd44:
    // 0x2fbd44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbd48:
    // 0x2fbd48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbd4c:
    // 0x2fbd4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fbd50:
    // 0x2fbd50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fbd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbd54:
    // 0x2fbd54: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_2fbd58:
    if (ctx->pc == 0x2FBD58u) {
        ctx->pc = 0x2FBD58u;
            // 0x2fbd58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD5Cu;
        goto label_2fbd5c;
    }
    ctx->pc = 0x2FBD54u;
    {
        const bool branch_taken_0x2fbd54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD54u;
            // 0x2fbd58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd54) {
            ctx->pc = 0x2FBD90u;
            goto label_2fbd90;
        }
    }
    ctx->pc = 0x2FBD5Cu;
label_2fbd5c:
    // 0x2fbd5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fbd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fbd60:
    // 0x2fbd60: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fbd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fbd64:
    // 0x2fbd64: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fbd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fbd68:
    // 0x2fbd68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fbd6c:
    if (ctx->pc == 0x2FBD6Cu) {
        ctx->pc = 0x2FBD6Cu;
            // 0x2fbd6c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBD70u;
        goto label_2fbd70;
    }
    ctx->pc = 0x2FBD68u;
    {
        const bool branch_taken_0x2fbd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD68u;
            // 0x2fbd6c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd68) {
            ctx->pc = 0x2FBD78u;
            goto label_2fbd78;
        }
    }
    ctx->pc = 0x2FBD70u;
label_2fbd70:
    // 0x2fbd70: 0xc07507c  jal         func_1D41F0
label_2fbd74:
    if (ctx->pc == 0x2FBD74u) {
        ctx->pc = 0x2FBD74u;
            // 0x2fbd74: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FBD78u;
        goto label_2fbd78;
    }
    ctx->pc = 0x2FBD70u;
    SET_GPR_U32(ctx, 31, 0x2FBD78u);
    ctx->pc = 0x2FBD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD70u;
            // 0x2fbd74: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD78u; }
        if (ctx->pc != 0x2FBD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD78u; }
        if (ctx->pc != 0x2FBD78u) { return; }
    }
    ctx->pc = 0x2FBD78u;
label_2fbd78:
    // 0x2fbd78: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fbd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fbd7c:
    // 0x2fbd7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fbd7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fbd80:
    // 0x2fbd80: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fbd84:
    if (ctx->pc == 0x2FBD84u) {
        ctx->pc = 0x2FBD84u;
            // 0x2fbd84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD88u;
        goto label_2fbd88;
    }
    ctx->pc = 0x2FBD80u;
    {
        const bool branch_taken_0x2fbd80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbd80) {
            ctx->pc = 0x2FBD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD80u;
            // 0x2fbd84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBD94u;
            goto label_2fbd94;
        }
    }
    ctx->pc = 0x2FBD88u;
label_2fbd88:
    // 0x2fbd88: 0xc0400a8  jal         func_1002A0
label_2fbd8c:
    if (ctx->pc == 0x2FBD8Cu) {
        ctx->pc = 0x2FBD8Cu;
            // 0x2fbd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD90u;
        goto label_2fbd90;
    }
    ctx->pc = 0x2FBD88u;
    SET_GPR_U32(ctx, 31, 0x2FBD90u);
    ctx->pc = 0x2FBD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD88u;
            // 0x2fbd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD90u; }
        if (ctx->pc != 0x2FBD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD90u; }
        if (ctx->pc != 0x2FBD90u) { return; }
    }
    ctx->pc = 0x2FBD90u;
label_2fbd90:
    // 0x2fbd90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fbd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fbd94:
    // 0x2fbd94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbd98:
    // 0x2fbd98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbd9c:
    // 0x2fbd9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbd9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbda0:
    // 0x2fbda0: 0x3e00008  jr          $ra
label_2fbda4:
    if (ctx->pc == 0x2FBDA4u) {
        ctx->pc = 0x2FBDA4u;
            // 0x2fbda4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBDA8u;
        goto label_2fbda8;
    }
    ctx->pc = 0x2FBDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBDA0u;
            // 0x2fbda4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBDA8u;
label_2fbda8:
    // 0x2fbda8: 0x0  nop
    ctx->pc = 0x2fbda8u;
    // NOP
label_2fbdac:
    // 0x2fbdac: 0x0  nop
    ctx->pc = 0x2fbdacu;
    // NOP
label_2fbdb0:
    // 0x2fbdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbdb4:
    // 0x2fbdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbdb8:
    // 0x2fbdb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbdbc:
    // 0x2fbdbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fbdc0:
    // 0x2fbdc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbdc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbdc4:
    // 0x2fbdc4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2fbdc8:
    if (ctx->pc == 0x2FBDC8u) {
        ctx->pc = 0x2FBDC8u;
            // 0x2fbdc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDCCu;
        goto label_2fbdcc;
    }
    ctx->pc = 0x2FBDC4u;
    {
        const bool branch_taken_0x2fbdc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBDC4u;
            // 0x2fbdc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdc4) {
            ctx->pc = 0x2FBE20u;
            goto label_2fbe20;
        }
    }
    ctx->pc = 0x2FBDCCu;
label_2fbdcc:
    // 0x2fbdcc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbdd0:
    // 0x2fbdd0: 0x2442b380  addiu       $v0, $v0, -0x4C80
    ctx->pc = 0x2fbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947712));
label_2fbdd4:
    // 0x2fbdd4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2fbdd8:
    if (ctx->pc == 0x2FBDD8u) {
        ctx->pc = 0x2FBDD8u;
            // 0x2fbdd8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBDDCu;
        goto label_2fbddc;
    }
    ctx->pc = 0x2FBDD4u;
    {
        const bool branch_taken_0x2fbdd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBDD4u;
            // 0x2fbdd8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdd4) {
            ctx->pc = 0x2FBE08u;
            goto label_2fbe08;
        }
    }
    ctx->pc = 0x2FBDDCu;
label_2fbddc:
    // 0x2fbddc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbde0:
    // 0x2fbde0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fbde4:
    // 0x2fbde4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2fbde8:
    if (ctx->pc == 0x2FBDE8u) {
        ctx->pc = 0x2FBDE8u;
            // 0x2fbde8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBDECu;
        goto label_2fbdec;
    }
    ctx->pc = 0x2FBDE4u;
    {
        const bool branch_taken_0x2fbde4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBDE4u;
            // 0x2fbde8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbde4) {
            ctx->pc = 0x2FBE08u;
            goto label_2fbe08;
        }
    }
    ctx->pc = 0x2FBDECu;
label_2fbdec:
    // 0x2fbdec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fbdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fbdf0:
    // 0x2fbdf0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2fbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2fbdf4:
    // 0x2fbdf4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fbdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fbdf8:
    // 0x2fbdf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fbdfc:
    if (ctx->pc == 0x2FBDFCu) {
        ctx->pc = 0x2FBDFCu;
            // 0x2fbdfc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBE00u;
        goto label_2fbe00;
    }
    ctx->pc = 0x2FBDF8u;
    {
        const bool branch_taken_0x2fbdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBDF8u;
            // 0x2fbdfc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdf8) {
            ctx->pc = 0x2FBE08u;
            goto label_2fbe08;
        }
    }
    ctx->pc = 0x2FBE00u;
label_2fbe00:
    // 0x2fbe00: 0xc07507c  jal         func_1D41F0
label_2fbe04:
    if (ctx->pc == 0x2FBE04u) {
        ctx->pc = 0x2FBE04u;
            // 0x2fbe04: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x2FBE08u;
        goto label_2fbe08;
    }
    ctx->pc = 0x2FBE00u;
    SET_GPR_U32(ctx, 31, 0x2FBE08u);
    ctx->pc = 0x2FBE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE00u;
            // 0x2fbe04: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBE08u; }
        if (ctx->pc != 0x2FBE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBE08u; }
        if (ctx->pc != 0x2FBE08u) { return; }
    }
    ctx->pc = 0x2FBE08u;
label_2fbe08:
    // 0x2fbe08: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2fbe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2fbe0c:
    // 0x2fbe0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fbe0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fbe10:
    // 0x2fbe10: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fbe14:
    if (ctx->pc == 0x2FBE14u) {
        ctx->pc = 0x2FBE14u;
            // 0x2fbe14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE18u;
        goto label_2fbe18;
    }
    ctx->pc = 0x2FBE10u;
    {
        const bool branch_taken_0x2fbe10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbe10) {
            ctx->pc = 0x2FBE14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE10u;
            // 0x2fbe14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBE24u;
            goto label_2fbe24;
        }
    }
    ctx->pc = 0x2FBE18u;
label_2fbe18:
    // 0x2fbe18: 0xc0400a8  jal         func_1002A0
label_2fbe1c:
    if (ctx->pc == 0x2FBE1Cu) {
        ctx->pc = 0x2FBE1Cu;
            // 0x2fbe1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE20u;
        goto label_2fbe20;
    }
    ctx->pc = 0x2FBE18u;
    SET_GPR_U32(ctx, 31, 0x2FBE20u);
    ctx->pc = 0x2FBE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE18u;
            // 0x2fbe1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBE20u; }
        if (ctx->pc != 0x2FBE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBE20u; }
        if (ctx->pc != 0x2FBE20u) { return; }
    }
    ctx->pc = 0x2FBE20u;
label_2fbe20:
    // 0x2fbe20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbe20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fbe24:
    // 0x2fbe24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbe24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbe28:
    // 0x2fbe28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbe28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbe2c:
    // 0x2fbe2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbe2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbe30:
    // 0x2fbe30: 0x3e00008  jr          $ra
label_2fbe34:
    if (ctx->pc == 0x2FBE34u) {
        ctx->pc = 0x2FBE34u;
            // 0x2fbe34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBE38u;
        goto label_2fbe38;
    }
    ctx->pc = 0x2FBE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE30u;
            // 0x2fbe34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBE38u;
label_2fbe38:
    // 0x2fbe38: 0x0  nop
    ctx->pc = 0x2fbe38u;
    // NOP
label_2fbe3c:
    // 0x2fbe3c: 0x0  nop
    ctx->pc = 0x2fbe3cu;
    // NOP
label_2fbe40:
    // 0x2fbe40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbe44:
    // 0x2fbe44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbe48:
    // 0x2fbe48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbe4c:
    // 0x2fbe4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fbe50:
    // 0x2fbe50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbe50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbe54:
    // 0x2fbe54: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2fbe58:
    if (ctx->pc == 0x2FBE58u) {
        ctx->pc = 0x2FBE58u;
            // 0x2fbe58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE5Cu;
        goto label_2fbe5c;
    }
    ctx->pc = 0x2FBE54u;
    {
        const bool branch_taken_0x2fbe54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE54u;
            // 0x2fbe58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe54) {
            ctx->pc = 0x2FBEB0u;
            goto label_2fbeb0;
        }
    }
    ctx->pc = 0x2FBE5Cu;
label_2fbe5c:
    // 0x2fbe5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbe60:
    // 0x2fbe60: 0x24429140  addiu       $v0, $v0, -0x6EC0
    ctx->pc = 0x2fbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938944));
label_2fbe64:
    // 0x2fbe64: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2fbe68:
    if (ctx->pc == 0x2FBE68u) {
        ctx->pc = 0x2FBE68u;
            // 0x2fbe68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBE6Cu;
        goto label_2fbe6c;
    }
    ctx->pc = 0x2FBE64u;
    {
        const bool branch_taken_0x2fbe64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE64u;
            // 0x2fbe68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe64) {
            ctx->pc = 0x2FBE98u;
            goto label_2fbe98;
        }
    }
    ctx->pc = 0x2FBE6Cu;
label_2fbe6c:
    // 0x2fbe6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbe70:
    // 0x2fbe70: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fbe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fbe74:
    // 0x2fbe74: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2fbe78:
    if (ctx->pc == 0x2FBE78u) {
        ctx->pc = 0x2FBE78u;
            // 0x2fbe78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBE7Cu;
        goto label_2fbe7c;
    }
    ctx->pc = 0x2FBE74u;
    {
        const bool branch_taken_0x2fbe74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE74u;
            // 0x2fbe78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe74) {
            ctx->pc = 0x2FBE98u;
            goto label_2fbe98;
        }
    }
    ctx->pc = 0x2FBE7Cu;
label_2fbe7c:
    // 0x2fbe7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fbe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fbe80:
    // 0x2fbe80: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2fbe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2fbe84:
    // 0x2fbe84: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fbe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fbe88:
    // 0x2fbe88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fbe8c:
    if (ctx->pc == 0x2FBE8Cu) {
        ctx->pc = 0x2FBE8Cu;
            // 0x2fbe8c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBE90u;
        goto label_2fbe90;
    }
    ctx->pc = 0x2FBE88u;
    {
        const bool branch_taken_0x2fbe88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE88u;
            // 0x2fbe8c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe88) {
            ctx->pc = 0x2FBE98u;
            goto label_2fbe98;
        }
    }
    ctx->pc = 0x2FBE90u;
label_2fbe90:
    // 0x2fbe90: 0xc07507c  jal         func_1D41F0
label_2fbe94:
    if (ctx->pc == 0x2FBE94u) {
        ctx->pc = 0x2FBE94u;
            // 0x2fbe94: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x2FBE98u;
        goto label_2fbe98;
    }
    ctx->pc = 0x2FBE90u;
    SET_GPR_U32(ctx, 31, 0x2FBE98u);
    ctx->pc = 0x2FBE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBE90u;
            // 0x2fbe94: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBE98u; }
        if (ctx->pc != 0x2FBE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBE98u; }
        if (ctx->pc != 0x2FBE98u) { return; }
    }
    ctx->pc = 0x2FBE98u;
label_2fbe98:
    // 0x2fbe98: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2fbe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2fbe9c:
    // 0x2fbe9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fbe9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fbea0:
    // 0x2fbea0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fbea4:
    if (ctx->pc == 0x2FBEA4u) {
        ctx->pc = 0x2FBEA4u;
            // 0x2fbea4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEA8u;
        goto label_2fbea8;
    }
    ctx->pc = 0x2FBEA0u;
    {
        const bool branch_taken_0x2fbea0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbea0) {
            ctx->pc = 0x2FBEA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBEA0u;
            // 0x2fbea4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBEB4u;
            goto label_2fbeb4;
        }
    }
    ctx->pc = 0x2FBEA8u;
label_2fbea8:
    // 0x2fbea8: 0xc0400a8  jal         func_1002A0
label_2fbeac:
    if (ctx->pc == 0x2FBEACu) {
        ctx->pc = 0x2FBEACu;
            // 0x2fbeac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEB0u;
        goto label_2fbeb0;
    }
    ctx->pc = 0x2FBEA8u;
    SET_GPR_U32(ctx, 31, 0x2FBEB0u);
    ctx->pc = 0x2FBEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBEA8u;
            // 0x2fbeac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBEB0u; }
        if (ctx->pc != 0x2FBEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBEB0u; }
        if (ctx->pc != 0x2FBEB0u) { return; }
    }
    ctx->pc = 0x2FBEB0u;
label_2fbeb0:
    // 0x2fbeb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbeb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fbeb4:
    // 0x2fbeb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbeb8:
    // 0x2fbeb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbeb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbebc:
    // 0x2fbebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbec0:
    // 0x2fbec0: 0x3e00008  jr          $ra
label_2fbec4:
    if (ctx->pc == 0x2FBEC4u) {
        ctx->pc = 0x2FBEC4u;
            // 0x2fbec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBEC8u;
        goto label_2fbec8;
    }
    ctx->pc = 0x2FBEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBEC0u;
            // 0x2fbec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBEC8u;
label_2fbec8:
    // 0x2fbec8: 0x0  nop
    ctx->pc = 0x2fbec8u;
    // NOP
label_2fbecc:
    // 0x2fbecc: 0x0  nop
    ctx->pc = 0x2fbeccu;
    // NOP
label_2fbed0:
    // 0x2fbed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbed4:
    // 0x2fbed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbed8:
    // 0x2fbed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbedc:
    // 0x2fbedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fbee0:
    // 0x2fbee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbee4:
    // 0x2fbee4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2fbee8:
    if (ctx->pc == 0x2FBEE8u) {
        ctx->pc = 0x2FBEE8u;
            // 0x2fbee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEECu;
        goto label_2fbeec;
    }
    ctx->pc = 0x2FBEE4u;
    {
        const bool branch_taken_0x2fbee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBEE4u;
            // 0x2fbee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbee4) {
            ctx->pc = 0x2FBF40u;
            goto label_2fbf40;
        }
    }
    ctx->pc = 0x2FBEECu;
label_2fbeec:
    // 0x2fbeec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fbef0:
    // 0x2fbef0: 0x24423e70  addiu       $v0, $v0, 0x3E70
    ctx->pc = 0x2fbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15984));
label_2fbef4:
    // 0x2fbef4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2fbef8:
    if (ctx->pc == 0x2FBEF8u) {
        ctx->pc = 0x2FBEF8u;
            // 0x2fbef8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBEFCu;
        goto label_2fbefc;
    }
    ctx->pc = 0x2FBEF4u;
    {
        const bool branch_taken_0x2fbef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBEF4u;
            // 0x2fbef8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbef4) {
            ctx->pc = 0x2FBF28u;
            goto label_2fbf28;
        }
    }
    ctx->pc = 0x2FBEFCu;
label_2fbefc:
    // 0x2fbefc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbf00:
    // 0x2fbf00: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fbf04:
    // 0x2fbf04: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2fbf08:
    if (ctx->pc == 0x2FBF08u) {
        ctx->pc = 0x2FBF08u;
            // 0x2fbf08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBF0Cu;
        goto label_2fbf0c;
    }
    ctx->pc = 0x2FBF04u;
    {
        const bool branch_taken_0x2fbf04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF04u;
            // 0x2fbf08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf04) {
            ctx->pc = 0x2FBF28u;
            goto label_2fbf28;
        }
    }
    ctx->pc = 0x2FBF0Cu;
label_2fbf0c:
    // 0x2fbf0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fbf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fbf10:
    // 0x2fbf10: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2fbf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2fbf14:
    // 0x2fbf14: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fbf18:
    // 0x2fbf18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fbf1c:
    if (ctx->pc == 0x2FBF1Cu) {
        ctx->pc = 0x2FBF1Cu;
            // 0x2fbf1c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBF20u;
        goto label_2fbf20;
    }
    ctx->pc = 0x2FBF18u;
    {
        const bool branch_taken_0x2fbf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF18u;
            // 0x2fbf1c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf18) {
            ctx->pc = 0x2FBF28u;
            goto label_2fbf28;
        }
    }
    ctx->pc = 0x2FBF20u;
label_2fbf20:
    // 0x2fbf20: 0xc07507c  jal         func_1D41F0
label_2fbf24:
    if (ctx->pc == 0x2FBF24u) {
        ctx->pc = 0x2FBF24u;
            // 0x2fbf24: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x2FBF28u;
        goto label_2fbf28;
    }
    ctx->pc = 0x2FBF20u;
    SET_GPR_U32(ctx, 31, 0x2FBF28u);
    ctx->pc = 0x2FBF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF20u;
            // 0x2fbf24: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBF28u; }
        if (ctx->pc != 0x2FBF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBF28u; }
        if (ctx->pc != 0x2FBF28u) { return; }
    }
    ctx->pc = 0x2FBF28u;
label_2fbf28:
    // 0x2fbf28: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2fbf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2fbf2c:
    // 0x2fbf2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fbf2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fbf30:
    // 0x2fbf30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fbf34:
    if (ctx->pc == 0x2FBF34u) {
        ctx->pc = 0x2FBF34u;
            // 0x2fbf34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF38u;
        goto label_2fbf38;
    }
    ctx->pc = 0x2FBF30u;
    {
        const bool branch_taken_0x2fbf30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbf30) {
            ctx->pc = 0x2FBF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF30u;
            // 0x2fbf34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBF44u;
            goto label_2fbf44;
        }
    }
    ctx->pc = 0x2FBF38u;
label_2fbf38:
    // 0x2fbf38: 0xc0400a8  jal         func_1002A0
label_2fbf3c:
    if (ctx->pc == 0x2FBF3Cu) {
        ctx->pc = 0x2FBF3Cu;
            // 0x2fbf3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF40u;
        goto label_2fbf40;
    }
    ctx->pc = 0x2FBF38u;
    SET_GPR_U32(ctx, 31, 0x2FBF40u);
    ctx->pc = 0x2FBF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF38u;
            // 0x2fbf3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBF40u; }
        if (ctx->pc != 0x2FBF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBF40u; }
        if (ctx->pc != 0x2FBF40u) { return; }
    }
    ctx->pc = 0x2FBF40u;
label_2fbf40:
    // 0x2fbf40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fbf44:
    // 0x2fbf44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbf48:
    // 0x2fbf48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbf48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbf4c:
    // 0x2fbf4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbf50:
    // 0x2fbf50: 0x3e00008  jr          $ra
label_2fbf54:
    if (ctx->pc == 0x2FBF54u) {
        ctx->pc = 0x2FBF54u;
            // 0x2fbf54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBF58u;
        goto label_2fbf58;
    }
    ctx->pc = 0x2FBF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF50u;
            // 0x2fbf54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBF58u;
label_2fbf58:
    // 0x2fbf58: 0x0  nop
    ctx->pc = 0x2fbf58u;
    // NOP
label_2fbf5c:
    // 0x2fbf5c: 0x0  nop
    ctx->pc = 0x2fbf5cu;
    // NOP
label_2fbf60:
    // 0x2fbf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbf64:
    // 0x2fbf64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbf68:
    // 0x2fbf68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbf6c:
    // 0x2fbf6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fbf70:
    // 0x2fbf70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbf70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbf74:
    // 0x2fbf74: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2fbf78:
    if (ctx->pc == 0x2FBF78u) {
        ctx->pc = 0x2FBF78u;
            // 0x2fbf78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF7Cu;
        goto label_2fbf7c;
    }
    ctx->pc = 0x2FBF74u;
    {
        const bool branch_taken_0x2fbf74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF74u;
            // 0x2fbf78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf74) {
            ctx->pc = 0x2FBFD0u;
            goto label_2fbfd0;
        }
    }
    ctx->pc = 0x2FBF7Cu;
label_2fbf7c:
    // 0x2fbf7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fbf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fbf80:
    // 0x2fbf80: 0x24423ef0  addiu       $v0, $v0, 0x3EF0
    ctx->pc = 0x2fbf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16112));
label_2fbf84:
    // 0x2fbf84: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2fbf88:
    if (ctx->pc == 0x2FBF88u) {
        ctx->pc = 0x2FBF88u;
            // 0x2fbf88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBF8Cu;
        goto label_2fbf8c;
    }
    ctx->pc = 0x2FBF84u;
    {
        const bool branch_taken_0x2fbf84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF84u;
            // 0x2fbf88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf84) {
            ctx->pc = 0x2FBFB8u;
            goto label_2fbfb8;
        }
    }
    ctx->pc = 0x2FBF8Cu;
label_2fbf8c:
    // 0x2fbf8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fbf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fbf90:
    // 0x2fbf90: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fbf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fbf94:
    // 0x2fbf94: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2fbf98:
    if (ctx->pc == 0x2FBF98u) {
        ctx->pc = 0x2FBF98u;
            // 0x2fbf98: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBF9Cu;
        goto label_2fbf9c;
    }
    ctx->pc = 0x2FBF94u;
    {
        const bool branch_taken_0x2fbf94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBF94u;
            // 0x2fbf98: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf94) {
            ctx->pc = 0x2FBFB8u;
            goto label_2fbfb8;
        }
    }
    ctx->pc = 0x2FBF9Cu;
label_2fbf9c:
    // 0x2fbf9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fbf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fbfa0:
    // 0x2fbfa0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2fbfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2fbfa4:
    // 0x2fbfa4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fbfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fbfa8:
    // 0x2fbfa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fbfac:
    if (ctx->pc == 0x2FBFACu) {
        ctx->pc = 0x2FBFACu;
            // 0x2fbfac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FBFB0u;
        goto label_2fbfb0;
    }
    ctx->pc = 0x2FBFA8u;
    {
        const bool branch_taken_0x2fbfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBFA8u;
            // 0x2fbfac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbfa8) {
            ctx->pc = 0x2FBFB8u;
            goto label_2fbfb8;
        }
    }
    ctx->pc = 0x2FBFB0u;
label_2fbfb0:
    // 0x2fbfb0: 0xc07507c  jal         func_1D41F0
label_2fbfb4:
    if (ctx->pc == 0x2FBFB4u) {
        ctx->pc = 0x2FBFB4u;
            // 0x2fbfb4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x2FBFB8u;
        goto label_2fbfb8;
    }
    ctx->pc = 0x2FBFB0u;
    SET_GPR_U32(ctx, 31, 0x2FBFB8u);
    ctx->pc = 0x2FBFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBFB0u;
            // 0x2fbfb4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBFB8u; }
        if (ctx->pc != 0x2FBFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBFB8u; }
        if (ctx->pc != 0x2FBFB8u) { return; }
    }
    ctx->pc = 0x2FBFB8u;
label_2fbfb8:
    // 0x2fbfb8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2fbfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2fbfbc:
    // 0x2fbfbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fbfbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fbfc0:
    // 0x2fbfc0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fbfc4:
    if (ctx->pc == 0x2FBFC4u) {
        ctx->pc = 0x2FBFC4u;
            // 0x2fbfc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBFC8u;
        goto label_2fbfc8;
    }
    ctx->pc = 0x2FBFC0u;
    {
        const bool branch_taken_0x2fbfc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbfc0) {
            ctx->pc = 0x2FBFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBFC0u;
            // 0x2fbfc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FBFD4u;
            goto label_2fbfd4;
        }
    }
    ctx->pc = 0x2FBFC8u;
label_2fbfc8:
    // 0x2fbfc8: 0xc0400a8  jal         func_1002A0
label_2fbfcc:
    if (ctx->pc == 0x2FBFCCu) {
        ctx->pc = 0x2FBFCCu;
            // 0x2fbfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBFD0u;
        goto label_2fbfd0;
    }
    ctx->pc = 0x2FBFC8u;
    SET_GPR_U32(ctx, 31, 0x2FBFD0u);
    ctx->pc = 0x2FBFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBFC8u;
            // 0x2fbfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBFD0u; }
        if (ctx->pc != 0x2FBFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBFD0u; }
        if (ctx->pc != 0x2FBFD0u) { return; }
    }
    ctx->pc = 0x2FBFD0u;
label_2fbfd0:
    // 0x2fbfd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbfd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fbfd4:
    // 0x2fbfd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbfd8:
    // 0x2fbfd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbfd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbfdc:
    // 0x2fbfdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbfdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbfe0:
    // 0x2fbfe0: 0x3e00008  jr          $ra
label_2fbfe4:
    if (ctx->pc == 0x2FBFE4u) {
        ctx->pc = 0x2FBFE4u;
            // 0x2fbfe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FBFE8u;
        goto label_2fbfe8;
    }
    ctx->pc = 0x2FBFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBFE0u;
            // 0x2fbfe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBFE8u;
label_2fbfe8:
    // 0x2fbfe8: 0x0  nop
    ctx->pc = 0x2fbfe8u;
    // NOP
label_2fbfec:
    // 0x2fbfec: 0x0  nop
    ctx->pc = 0x2fbfecu;
    // NOP
label_2fbff0:
    // 0x2fbff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fbff4:
    // 0x2fbff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbff8:
    // 0x2fbff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbffc:
    // 0x2fbffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fbffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fc000:
    // 0x2fc000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc004:
    // 0x2fc004: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2fc008:
    if (ctx->pc == 0x2FC008u) {
        ctx->pc = 0x2FC008u;
            // 0x2fc008: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC00Cu;
        goto label_2fc00c;
    }
    ctx->pc = 0x2FC004u;
    {
        const bool branch_taken_0x2fc004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC004u;
            // 0x2fc008: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc004) {
            ctx->pc = 0x2FC060u;
            goto label_2fc060;
        }
    }
    ctx->pc = 0x2FC00Cu;
label_2fc00c:
    // 0x2fc00c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fc010:
    // 0x2fc010: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x2fc010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_2fc014:
    // 0x2fc014: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2fc018:
    if (ctx->pc == 0x2FC018u) {
        ctx->pc = 0x2FC018u;
            // 0x2fc018: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FC01Cu;
        goto label_2fc01c;
    }
    ctx->pc = 0x2FC014u;
    {
        const bool branch_taken_0x2fc014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC014u;
            // 0x2fc018: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc014) {
            ctx->pc = 0x2FC048u;
            goto label_2fc048;
        }
    }
    ctx->pc = 0x2FC01Cu;
label_2fc01c:
    // 0x2fc01c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fc020:
    // 0x2fc020: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fc020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fc024:
    // 0x2fc024: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2fc028:
    if (ctx->pc == 0x2FC028u) {
        ctx->pc = 0x2FC028u;
            // 0x2fc028: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FC02Cu;
        goto label_2fc02c;
    }
    ctx->pc = 0x2FC024u;
    {
        const bool branch_taken_0x2fc024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC024u;
            // 0x2fc028: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc024) {
            ctx->pc = 0x2FC048u;
            goto label_2fc048;
        }
    }
    ctx->pc = 0x2FC02Cu;
label_2fc02c:
    // 0x2fc02c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fc02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fc030:
    // 0x2fc030: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2fc030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2fc034:
    // 0x2fc034: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fc034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fc038:
    // 0x2fc038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fc03c:
    if (ctx->pc == 0x2FC03Cu) {
        ctx->pc = 0x2FC03Cu;
            // 0x2fc03c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FC040u;
        goto label_2fc040;
    }
    ctx->pc = 0x2FC038u;
    {
        const bool branch_taken_0x2fc038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC038u;
            // 0x2fc03c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc038) {
            ctx->pc = 0x2FC048u;
            goto label_2fc048;
        }
    }
    ctx->pc = 0x2FC040u;
label_2fc040:
    // 0x2fc040: 0xc07507c  jal         func_1D41F0
label_2fc044:
    if (ctx->pc == 0x2FC044u) {
        ctx->pc = 0x2FC044u;
            // 0x2fc044: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x2FC048u;
        goto label_2fc048;
    }
    ctx->pc = 0x2FC040u;
    SET_GPR_U32(ctx, 31, 0x2FC048u);
    ctx->pc = 0x2FC044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC040u;
            // 0x2fc044: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC048u; }
        if (ctx->pc != 0x2FC048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC048u; }
        if (ctx->pc != 0x2FC048u) { return; }
    }
    ctx->pc = 0x2FC048u;
label_2fc048:
    // 0x2fc048: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2fc048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2fc04c:
    // 0x2fc04c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fc04cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fc050:
    // 0x2fc050: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fc054:
    if (ctx->pc == 0x2FC054u) {
        ctx->pc = 0x2FC054u;
            // 0x2fc054: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC058u;
        goto label_2fc058;
    }
    ctx->pc = 0x2FC050u;
    {
        const bool branch_taken_0x2fc050 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fc050) {
            ctx->pc = 0x2FC054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC050u;
            // 0x2fc054: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FC064u;
            goto label_2fc064;
        }
    }
    ctx->pc = 0x2FC058u;
label_2fc058:
    // 0x2fc058: 0xc0400a8  jal         func_1002A0
label_2fc05c:
    if (ctx->pc == 0x2FC05Cu) {
        ctx->pc = 0x2FC05Cu;
            // 0x2fc05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC060u;
        goto label_2fc060;
    }
    ctx->pc = 0x2FC058u;
    SET_GPR_U32(ctx, 31, 0x2FC060u);
    ctx->pc = 0x2FC05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC058u;
            // 0x2fc05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC060u; }
        if (ctx->pc != 0x2FC060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC060u; }
        if (ctx->pc != 0x2FC060u) { return; }
    }
    ctx->pc = 0x2FC060u;
label_2fc060:
    // 0x2fc060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fc060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc064:
    // 0x2fc064: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fc064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fc068:
    // 0x2fc068: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc06c:
    // 0x2fc06c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc070:
    // 0x2fc070: 0x3e00008  jr          $ra
label_2fc074:
    if (ctx->pc == 0x2FC074u) {
        ctx->pc = 0x2FC074u;
            // 0x2fc074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FC078u;
        goto label_2fc078;
    }
    ctx->pc = 0x2FC070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC070u;
            // 0x2fc074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC078u;
label_2fc078:
    // 0x2fc078: 0x0  nop
    ctx->pc = 0x2fc078u;
    // NOP
label_2fc07c:
    // 0x2fc07c: 0x0  nop
    ctx->pc = 0x2fc07cu;
    // NOP
}
