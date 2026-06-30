#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C9550
// Address: 0x3c9550 - 0x3c9c50
void sub_003C9550_0x3c9550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9550_0x3c9550");
#endif

    switch (ctx->pc) {
        case 0x3c9550u: goto label_3c9550;
        case 0x3c9554u: goto label_3c9554;
        case 0x3c9558u: goto label_3c9558;
        case 0x3c955cu: goto label_3c955c;
        case 0x3c9560u: goto label_3c9560;
        case 0x3c9564u: goto label_3c9564;
        case 0x3c9568u: goto label_3c9568;
        case 0x3c956cu: goto label_3c956c;
        case 0x3c9570u: goto label_3c9570;
        case 0x3c9574u: goto label_3c9574;
        case 0x3c9578u: goto label_3c9578;
        case 0x3c957cu: goto label_3c957c;
        case 0x3c9580u: goto label_3c9580;
        case 0x3c9584u: goto label_3c9584;
        case 0x3c9588u: goto label_3c9588;
        case 0x3c958cu: goto label_3c958c;
        case 0x3c9590u: goto label_3c9590;
        case 0x3c9594u: goto label_3c9594;
        case 0x3c9598u: goto label_3c9598;
        case 0x3c959cu: goto label_3c959c;
        case 0x3c95a0u: goto label_3c95a0;
        case 0x3c95a4u: goto label_3c95a4;
        case 0x3c95a8u: goto label_3c95a8;
        case 0x3c95acu: goto label_3c95ac;
        case 0x3c95b0u: goto label_3c95b0;
        case 0x3c95b4u: goto label_3c95b4;
        case 0x3c95b8u: goto label_3c95b8;
        case 0x3c95bcu: goto label_3c95bc;
        case 0x3c95c0u: goto label_3c95c0;
        case 0x3c95c4u: goto label_3c95c4;
        case 0x3c95c8u: goto label_3c95c8;
        case 0x3c95ccu: goto label_3c95cc;
        case 0x3c95d0u: goto label_3c95d0;
        case 0x3c95d4u: goto label_3c95d4;
        case 0x3c95d8u: goto label_3c95d8;
        case 0x3c95dcu: goto label_3c95dc;
        case 0x3c95e0u: goto label_3c95e0;
        case 0x3c95e4u: goto label_3c95e4;
        case 0x3c95e8u: goto label_3c95e8;
        case 0x3c95ecu: goto label_3c95ec;
        case 0x3c95f0u: goto label_3c95f0;
        case 0x3c95f4u: goto label_3c95f4;
        case 0x3c95f8u: goto label_3c95f8;
        case 0x3c95fcu: goto label_3c95fc;
        case 0x3c9600u: goto label_3c9600;
        case 0x3c9604u: goto label_3c9604;
        case 0x3c9608u: goto label_3c9608;
        case 0x3c960cu: goto label_3c960c;
        case 0x3c9610u: goto label_3c9610;
        case 0x3c9614u: goto label_3c9614;
        case 0x3c9618u: goto label_3c9618;
        case 0x3c961cu: goto label_3c961c;
        case 0x3c9620u: goto label_3c9620;
        case 0x3c9624u: goto label_3c9624;
        case 0x3c9628u: goto label_3c9628;
        case 0x3c962cu: goto label_3c962c;
        case 0x3c9630u: goto label_3c9630;
        case 0x3c9634u: goto label_3c9634;
        case 0x3c9638u: goto label_3c9638;
        case 0x3c963cu: goto label_3c963c;
        case 0x3c9640u: goto label_3c9640;
        case 0x3c9644u: goto label_3c9644;
        case 0x3c9648u: goto label_3c9648;
        case 0x3c964cu: goto label_3c964c;
        case 0x3c9650u: goto label_3c9650;
        case 0x3c9654u: goto label_3c9654;
        case 0x3c9658u: goto label_3c9658;
        case 0x3c965cu: goto label_3c965c;
        case 0x3c9660u: goto label_3c9660;
        case 0x3c9664u: goto label_3c9664;
        case 0x3c9668u: goto label_3c9668;
        case 0x3c966cu: goto label_3c966c;
        case 0x3c9670u: goto label_3c9670;
        case 0x3c9674u: goto label_3c9674;
        case 0x3c9678u: goto label_3c9678;
        case 0x3c967cu: goto label_3c967c;
        case 0x3c9680u: goto label_3c9680;
        case 0x3c9684u: goto label_3c9684;
        case 0x3c9688u: goto label_3c9688;
        case 0x3c968cu: goto label_3c968c;
        case 0x3c9690u: goto label_3c9690;
        case 0x3c9694u: goto label_3c9694;
        case 0x3c9698u: goto label_3c9698;
        case 0x3c969cu: goto label_3c969c;
        case 0x3c96a0u: goto label_3c96a0;
        case 0x3c96a4u: goto label_3c96a4;
        case 0x3c96a8u: goto label_3c96a8;
        case 0x3c96acu: goto label_3c96ac;
        case 0x3c96b0u: goto label_3c96b0;
        case 0x3c96b4u: goto label_3c96b4;
        case 0x3c96b8u: goto label_3c96b8;
        case 0x3c96bcu: goto label_3c96bc;
        case 0x3c96c0u: goto label_3c96c0;
        case 0x3c96c4u: goto label_3c96c4;
        case 0x3c96c8u: goto label_3c96c8;
        case 0x3c96ccu: goto label_3c96cc;
        case 0x3c96d0u: goto label_3c96d0;
        case 0x3c96d4u: goto label_3c96d4;
        case 0x3c96d8u: goto label_3c96d8;
        case 0x3c96dcu: goto label_3c96dc;
        case 0x3c96e0u: goto label_3c96e0;
        case 0x3c96e4u: goto label_3c96e4;
        case 0x3c96e8u: goto label_3c96e8;
        case 0x3c96ecu: goto label_3c96ec;
        case 0x3c96f0u: goto label_3c96f0;
        case 0x3c96f4u: goto label_3c96f4;
        case 0x3c96f8u: goto label_3c96f8;
        case 0x3c96fcu: goto label_3c96fc;
        case 0x3c9700u: goto label_3c9700;
        case 0x3c9704u: goto label_3c9704;
        case 0x3c9708u: goto label_3c9708;
        case 0x3c970cu: goto label_3c970c;
        case 0x3c9710u: goto label_3c9710;
        case 0x3c9714u: goto label_3c9714;
        case 0x3c9718u: goto label_3c9718;
        case 0x3c971cu: goto label_3c971c;
        case 0x3c9720u: goto label_3c9720;
        case 0x3c9724u: goto label_3c9724;
        case 0x3c9728u: goto label_3c9728;
        case 0x3c972cu: goto label_3c972c;
        case 0x3c9730u: goto label_3c9730;
        case 0x3c9734u: goto label_3c9734;
        case 0x3c9738u: goto label_3c9738;
        case 0x3c973cu: goto label_3c973c;
        case 0x3c9740u: goto label_3c9740;
        case 0x3c9744u: goto label_3c9744;
        case 0x3c9748u: goto label_3c9748;
        case 0x3c974cu: goto label_3c974c;
        case 0x3c9750u: goto label_3c9750;
        case 0x3c9754u: goto label_3c9754;
        case 0x3c9758u: goto label_3c9758;
        case 0x3c975cu: goto label_3c975c;
        case 0x3c9760u: goto label_3c9760;
        case 0x3c9764u: goto label_3c9764;
        case 0x3c9768u: goto label_3c9768;
        case 0x3c976cu: goto label_3c976c;
        case 0x3c9770u: goto label_3c9770;
        case 0x3c9774u: goto label_3c9774;
        case 0x3c9778u: goto label_3c9778;
        case 0x3c977cu: goto label_3c977c;
        case 0x3c9780u: goto label_3c9780;
        case 0x3c9784u: goto label_3c9784;
        case 0x3c9788u: goto label_3c9788;
        case 0x3c978cu: goto label_3c978c;
        case 0x3c9790u: goto label_3c9790;
        case 0x3c9794u: goto label_3c9794;
        case 0x3c9798u: goto label_3c9798;
        case 0x3c979cu: goto label_3c979c;
        case 0x3c97a0u: goto label_3c97a0;
        case 0x3c97a4u: goto label_3c97a4;
        case 0x3c97a8u: goto label_3c97a8;
        case 0x3c97acu: goto label_3c97ac;
        case 0x3c97b0u: goto label_3c97b0;
        case 0x3c97b4u: goto label_3c97b4;
        case 0x3c97b8u: goto label_3c97b8;
        case 0x3c97bcu: goto label_3c97bc;
        case 0x3c97c0u: goto label_3c97c0;
        case 0x3c97c4u: goto label_3c97c4;
        case 0x3c97c8u: goto label_3c97c8;
        case 0x3c97ccu: goto label_3c97cc;
        case 0x3c97d0u: goto label_3c97d0;
        case 0x3c97d4u: goto label_3c97d4;
        case 0x3c97d8u: goto label_3c97d8;
        case 0x3c97dcu: goto label_3c97dc;
        case 0x3c97e0u: goto label_3c97e0;
        case 0x3c97e4u: goto label_3c97e4;
        case 0x3c97e8u: goto label_3c97e8;
        case 0x3c97ecu: goto label_3c97ec;
        case 0x3c97f0u: goto label_3c97f0;
        case 0x3c97f4u: goto label_3c97f4;
        case 0x3c97f8u: goto label_3c97f8;
        case 0x3c97fcu: goto label_3c97fc;
        case 0x3c9800u: goto label_3c9800;
        case 0x3c9804u: goto label_3c9804;
        case 0x3c9808u: goto label_3c9808;
        case 0x3c980cu: goto label_3c980c;
        case 0x3c9810u: goto label_3c9810;
        case 0x3c9814u: goto label_3c9814;
        case 0x3c9818u: goto label_3c9818;
        case 0x3c981cu: goto label_3c981c;
        case 0x3c9820u: goto label_3c9820;
        case 0x3c9824u: goto label_3c9824;
        case 0x3c9828u: goto label_3c9828;
        case 0x3c982cu: goto label_3c982c;
        case 0x3c9830u: goto label_3c9830;
        case 0x3c9834u: goto label_3c9834;
        case 0x3c9838u: goto label_3c9838;
        case 0x3c983cu: goto label_3c983c;
        case 0x3c9840u: goto label_3c9840;
        case 0x3c9844u: goto label_3c9844;
        case 0x3c9848u: goto label_3c9848;
        case 0x3c984cu: goto label_3c984c;
        case 0x3c9850u: goto label_3c9850;
        case 0x3c9854u: goto label_3c9854;
        case 0x3c9858u: goto label_3c9858;
        case 0x3c985cu: goto label_3c985c;
        case 0x3c9860u: goto label_3c9860;
        case 0x3c9864u: goto label_3c9864;
        case 0x3c9868u: goto label_3c9868;
        case 0x3c986cu: goto label_3c986c;
        case 0x3c9870u: goto label_3c9870;
        case 0x3c9874u: goto label_3c9874;
        case 0x3c9878u: goto label_3c9878;
        case 0x3c987cu: goto label_3c987c;
        case 0x3c9880u: goto label_3c9880;
        case 0x3c9884u: goto label_3c9884;
        case 0x3c9888u: goto label_3c9888;
        case 0x3c988cu: goto label_3c988c;
        case 0x3c9890u: goto label_3c9890;
        case 0x3c9894u: goto label_3c9894;
        case 0x3c9898u: goto label_3c9898;
        case 0x3c989cu: goto label_3c989c;
        case 0x3c98a0u: goto label_3c98a0;
        case 0x3c98a4u: goto label_3c98a4;
        case 0x3c98a8u: goto label_3c98a8;
        case 0x3c98acu: goto label_3c98ac;
        case 0x3c98b0u: goto label_3c98b0;
        case 0x3c98b4u: goto label_3c98b4;
        case 0x3c98b8u: goto label_3c98b8;
        case 0x3c98bcu: goto label_3c98bc;
        case 0x3c98c0u: goto label_3c98c0;
        case 0x3c98c4u: goto label_3c98c4;
        case 0x3c98c8u: goto label_3c98c8;
        case 0x3c98ccu: goto label_3c98cc;
        case 0x3c98d0u: goto label_3c98d0;
        case 0x3c98d4u: goto label_3c98d4;
        case 0x3c98d8u: goto label_3c98d8;
        case 0x3c98dcu: goto label_3c98dc;
        case 0x3c98e0u: goto label_3c98e0;
        case 0x3c98e4u: goto label_3c98e4;
        case 0x3c98e8u: goto label_3c98e8;
        case 0x3c98ecu: goto label_3c98ec;
        case 0x3c98f0u: goto label_3c98f0;
        case 0x3c98f4u: goto label_3c98f4;
        case 0x3c98f8u: goto label_3c98f8;
        case 0x3c98fcu: goto label_3c98fc;
        case 0x3c9900u: goto label_3c9900;
        case 0x3c9904u: goto label_3c9904;
        case 0x3c9908u: goto label_3c9908;
        case 0x3c990cu: goto label_3c990c;
        case 0x3c9910u: goto label_3c9910;
        case 0x3c9914u: goto label_3c9914;
        case 0x3c9918u: goto label_3c9918;
        case 0x3c991cu: goto label_3c991c;
        case 0x3c9920u: goto label_3c9920;
        case 0x3c9924u: goto label_3c9924;
        case 0x3c9928u: goto label_3c9928;
        case 0x3c992cu: goto label_3c992c;
        case 0x3c9930u: goto label_3c9930;
        case 0x3c9934u: goto label_3c9934;
        case 0x3c9938u: goto label_3c9938;
        case 0x3c993cu: goto label_3c993c;
        case 0x3c9940u: goto label_3c9940;
        case 0x3c9944u: goto label_3c9944;
        case 0x3c9948u: goto label_3c9948;
        case 0x3c994cu: goto label_3c994c;
        case 0x3c9950u: goto label_3c9950;
        case 0x3c9954u: goto label_3c9954;
        case 0x3c9958u: goto label_3c9958;
        case 0x3c995cu: goto label_3c995c;
        case 0x3c9960u: goto label_3c9960;
        case 0x3c9964u: goto label_3c9964;
        case 0x3c9968u: goto label_3c9968;
        case 0x3c996cu: goto label_3c996c;
        case 0x3c9970u: goto label_3c9970;
        case 0x3c9974u: goto label_3c9974;
        case 0x3c9978u: goto label_3c9978;
        case 0x3c997cu: goto label_3c997c;
        case 0x3c9980u: goto label_3c9980;
        case 0x3c9984u: goto label_3c9984;
        case 0x3c9988u: goto label_3c9988;
        case 0x3c998cu: goto label_3c998c;
        case 0x3c9990u: goto label_3c9990;
        case 0x3c9994u: goto label_3c9994;
        case 0x3c9998u: goto label_3c9998;
        case 0x3c999cu: goto label_3c999c;
        case 0x3c99a0u: goto label_3c99a0;
        case 0x3c99a4u: goto label_3c99a4;
        case 0x3c99a8u: goto label_3c99a8;
        case 0x3c99acu: goto label_3c99ac;
        case 0x3c99b0u: goto label_3c99b0;
        case 0x3c99b4u: goto label_3c99b4;
        case 0x3c99b8u: goto label_3c99b8;
        case 0x3c99bcu: goto label_3c99bc;
        case 0x3c99c0u: goto label_3c99c0;
        case 0x3c99c4u: goto label_3c99c4;
        case 0x3c99c8u: goto label_3c99c8;
        case 0x3c99ccu: goto label_3c99cc;
        case 0x3c99d0u: goto label_3c99d0;
        case 0x3c99d4u: goto label_3c99d4;
        case 0x3c99d8u: goto label_3c99d8;
        case 0x3c99dcu: goto label_3c99dc;
        case 0x3c99e0u: goto label_3c99e0;
        case 0x3c99e4u: goto label_3c99e4;
        case 0x3c99e8u: goto label_3c99e8;
        case 0x3c99ecu: goto label_3c99ec;
        case 0x3c99f0u: goto label_3c99f0;
        case 0x3c99f4u: goto label_3c99f4;
        case 0x3c99f8u: goto label_3c99f8;
        case 0x3c99fcu: goto label_3c99fc;
        case 0x3c9a00u: goto label_3c9a00;
        case 0x3c9a04u: goto label_3c9a04;
        case 0x3c9a08u: goto label_3c9a08;
        case 0x3c9a0cu: goto label_3c9a0c;
        case 0x3c9a10u: goto label_3c9a10;
        case 0x3c9a14u: goto label_3c9a14;
        case 0x3c9a18u: goto label_3c9a18;
        case 0x3c9a1cu: goto label_3c9a1c;
        case 0x3c9a20u: goto label_3c9a20;
        case 0x3c9a24u: goto label_3c9a24;
        case 0x3c9a28u: goto label_3c9a28;
        case 0x3c9a2cu: goto label_3c9a2c;
        case 0x3c9a30u: goto label_3c9a30;
        case 0x3c9a34u: goto label_3c9a34;
        case 0x3c9a38u: goto label_3c9a38;
        case 0x3c9a3cu: goto label_3c9a3c;
        case 0x3c9a40u: goto label_3c9a40;
        case 0x3c9a44u: goto label_3c9a44;
        case 0x3c9a48u: goto label_3c9a48;
        case 0x3c9a4cu: goto label_3c9a4c;
        case 0x3c9a50u: goto label_3c9a50;
        case 0x3c9a54u: goto label_3c9a54;
        case 0x3c9a58u: goto label_3c9a58;
        case 0x3c9a5cu: goto label_3c9a5c;
        case 0x3c9a60u: goto label_3c9a60;
        case 0x3c9a64u: goto label_3c9a64;
        case 0x3c9a68u: goto label_3c9a68;
        case 0x3c9a6cu: goto label_3c9a6c;
        case 0x3c9a70u: goto label_3c9a70;
        case 0x3c9a74u: goto label_3c9a74;
        case 0x3c9a78u: goto label_3c9a78;
        case 0x3c9a7cu: goto label_3c9a7c;
        case 0x3c9a80u: goto label_3c9a80;
        case 0x3c9a84u: goto label_3c9a84;
        case 0x3c9a88u: goto label_3c9a88;
        case 0x3c9a8cu: goto label_3c9a8c;
        case 0x3c9a90u: goto label_3c9a90;
        case 0x3c9a94u: goto label_3c9a94;
        case 0x3c9a98u: goto label_3c9a98;
        case 0x3c9a9cu: goto label_3c9a9c;
        case 0x3c9aa0u: goto label_3c9aa0;
        case 0x3c9aa4u: goto label_3c9aa4;
        case 0x3c9aa8u: goto label_3c9aa8;
        case 0x3c9aacu: goto label_3c9aac;
        case 0x3c9ab0u: goto label_3c9ab0;
        case 0x3c9ab4u: goto label_3c9ab4;
        case 0x3c9ab8u: goto label_3c9ab8;
        case 0x3c9abcu: goto label_3c9abc;
        case 0x3c9ac0u: goto label_3c9ac0;
        case 0x3c9ac4u: goto label_3c9ac4;
        case 0x3c9ac8u: goto label_3c9ac8;
        case 0x3c9accu: goto label_3c9acc;
        case 0x3c9ad0u: goto label_3c9ad0;
        case 0x3c9ad4u: goto label_3c9ad4;
        case 0x3c9ad8u: goto label_3c9ad8;
        case 0x3c9adcu: goto label_3c9adc;
        case 0x3c9ae0u: goto label_3c9ae0;
        case 0x3c9ae4u: goto label_3c9ae4;
        case 0x3c9ae8u: goto label_3c9ae8;
        case 0x3c9aecu: goto label_3c9aec;
        case 0x3c9af0u: goto label_3c9af0;
        case 0x3c9af4u: goto label_3c9af4;
        case 0x3c9af8u: goto label_3c9af8;
        case 0x3c9afcu: goto label_3c9afc;
        case 0x3c9b00u: goto label_3c9b00;
        case 0x3c9b04u: goto label_3c9b04;
        case 0x3c9b08u: goto label_3c9b08;
        case 0x3c9b0cu: goto label_3c9b0c;
        case 0x3c9b10u: goto label_3c9b10;
        case 0x3c9b14u: goto label_3c9b14;
        case 0x3c9b18u: goto label_3c9b18;
        case 0x3c9b1cu: goto label_3c9b1c;
        case 0x3c9b20u: goto label_3c9b20;
        case 0x3c9b24u: goto label_3c9b24;
        case 0x3c9b28u: goto label_3c9b28;
        case 0x3c9b2cu: goto label_3c9b2c;
        case 0x3c9b30u: goto label_3c9b30;
        case 0x3c9b34u: goto label_3c9b34;
        case 0x3c9b38u: goto label_3c9b38;
        case 0x3c9b3cu: goto label_3c9b3c;
        case 0x3c9b40u: goto label_3c9b40;
        case 0x3c9b44u: goto label_3c9b44;
        case 0x3c9b48u: goto label_3c9b48;
        case 0x3c9b4cu: goto label_3c9b4c;
        case 0x3c9b50u: goto label_3c9b50;
        case 0x3c9b54u: goto label_3c9b54;
        case 0x3c9b58u: goto label_3c9b58;
        case 0x3c9b5cu: goto label_3c9b5c;
        case 0x3c9b60u: goto label_3c9b60;
        case 0x3c9b64u: goto label_3c9b64;
        case 0x3c9b68u: goto label_3c9b68;
        case 0x3c9b6cu: goto label_3c9b6c;
        case 0x3c9b70u: goto label_3c9b70;
        case 0x3c9b74u: goto label_3c9b74;
        case 0x3c9b78u: goto label_3c9b78;
        case 0x3c9b7cu: goto label_3c9b7c;
        case 0x3c9b80u: goto label_3c9b80;
        case 0x3c9b84u: goto label_3c9b84;
        case 0x3c9b88u: goto label_3c9b88;
        case 0x3c9b8cu: goto label_3c9b8c;
        case 0x3c9b90u: goto label_3c9b90;
        case 0x3c9b94u: goto label_3c9b94;
        case 0x3c9b98u: goto label_3c9b98;
        case 0x3c9b9cu: goto label_3c9b9c;
        case 0x3c9ba0u: goto label_3c9ba0;
        case 0x3c9ba4u: goto label_3c9ba4;
        case 0x3c9ba8u: goto label_3c9ba8;
        case 0x3c9bacu: goto label_3c9bac;
        case 0x3c9bb0u: goto label_3c9bb0;
        case 0x3c9bb4u: goto label_3c9bb4;
        case 0x3c9bb8u: goto label_3c9bb8;
        case 0x3c9bbcu: goto label_3c9bbc;
        case 0x3c9bc0u: goto label_3c9bc0;
        case 0x3c9bc4u: goto label_3c9bc4;
        case 0x3c9bc8u: goto label_3c9bc8;
        case 0x3c9bccu: goto label_3c9bcc;
        case 0x3c9bd0u: goto label_3c9bd0;
        case 0x3c9bd4u: goto label_3c9bd4;
        case 0x3c9bd8u: goto label_3c9bd8;
        case 0x3c9bdcu: goto label_3c9bdc;
        case 0x3c9be0u: goto label_3c9be0;
        case 0x3c9be4u: goto label_3c9be4;
        case 0x3c9be8u: goto label_3c9be8;
        case 0x3c9becu: goto label_3c9bec;
        case 0x3c9bf0u: goto label_3c9bf0;
        case 0x3c9bf4u: goto label_3c9bf4;
        case 0x3c9bf8u: goto label_3c9bf8;
        case 0x3c9bfcu: goto label_3c9bfc;
        case 0x3c9c00u: goto label_3c9c00;
        case 0x3c9c04u: goto label_3c9c04;
        case 0x3c9c08u: goto label_3c9c08;
        case 0x3c9c0cu: goto label_3c9c0c;
        case 0x3c9c10u: goto label_3c9c10;
        case 0x3c9c14u: goto label_3c9c14;
        case 0x3c9c18u: goto label_3c9c18;
        case 0x3c9c1cu: goto label_3c9c1c;
        case 0x3c9c20u: goto label_3c9c20;
        case 0x3c9c24u: goto label_3c9c24;
        case 0x3c9c28u: goto label_3c9c28;
        case 0x3c9c2cu: goto label_3c9c2c;
        case 0x3c9c30u: goto label_3c9c30;
        case 0x3c9c34u: goto label_3c9c34;
        case 0x3c9c38u: goto label_3c9c38;
        case 0x3c9c3cu: goto label_3c9c3c;
        case 0x3c9c40u: goto label_3c9c40;
        case 0x3c9c44u: goto label_3c9c44;
        case 0x3c9c48u: goto label_3c9c48;
        case 0x3c9c4cu: goto label_3c9c4c;
        default: break;
    }

    ctx->pc = 0x3c9550u;

label_3c9550:
    // 0x3c9550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c9550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c9554:
    // 0x3c9554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c9554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c9558:
    // 0x3c9558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c9558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c955c:
    // 0x3c955c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c9560:
    // 0x3c9560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c9560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c9564:
    // 0x3c9564: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3c9568:
    if (ctx->pc == 0x3C9568u) {
        ctx->pc = 0x3C9568u;
            // 0x3c9568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C956Cu;
        goto label_3c956c;
    }
    ctx->pc = 0x3C9564u;
    {
        const bool branch_taken_0x3c9564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9564u;
            // 0x3c9568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9564) {
            ctx->pc = 0x3C9698u;
            goto label_3c9698;
        }
    }
    ctx->pc = 0x3C956Cu;
label_3c956c:
    // 0x3c956c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c956cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c9570:
    // 0x3c9570: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c9570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c9574:
    // 0x3c9574: 0x24638f00  addiu       $v1, $v1, -0x7100
    ctx->pc = 0x3c9574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938368));
label_3c9578:
    // 0x3c9578: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3c9578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3c957c:
    // 0x3c957c: 0x24428f38  addiu       $v0, $v0, -0x70C8
    ctx->pc = 0x3c957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938424));
label_3c9580:
    // 0x3c9580: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c9580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3c9584:
    // 0x3c9584: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3c9584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3c9588:
    // 0x3c9588: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3c9588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3c958c:
    // 0x3c958c: 0xc0407c0  jal         func_101F00
label_3c9590:
    if (ctx->pc == 0x3C9590u) {
        ctx->pc = 0x3C9590u;
            // 0x3c9590: 0x24a596b0  addiu       $a1, $a1, -0x6950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940336));
        ctx->pc = 0x3C9594u;
        goto label_3c9594;
    }
    ctx->pc = 0x3C958Cu;
    SET_GPR_U32(ctx, 31, 0x3C9594u);
    ctx->pc = 0x3C9590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C958Cu;
            // 0x3c9590: 0x24a596b0  addiu       $a1, $a1, -0x6950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9594u; }
        if (ctx->pc != 0x3C9594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9594u; }
        if (ctx->pc != 0x3C9594u) { return; }
    }
    ctx->pc = 0x3C9594u;
label_3c9594:
    // 0x3c9594: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3c9594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3c9598:
    // 0x3c9598: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3c959c:
    if (ctx->pc == 0x3C959Cu) {
        ctx->pc = 0x3C959Cu;
            // 0x3c959c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3C95A0u;
        goto label_3c95a0;
    }
    ctx->pc = 0x3C9598u;
    {
        const bool branch_taken_0x3c9598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9598) {
            ctx->pc = 0x3C959Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9598u;
            // 0x3c959c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C95ACu;
            goto label_3c95ac;
        }
    }
    ctx->pc = 0x3C95A0u;
label_3c95a0:
    // 0x3c95a0: 0xc07507c  jal         func_1D41F0
label_3c95a4:
    if (ctx->pc == 0x3C95A4u) {
        ctx->pc = 0x3C95A4u;
            // 0x3c95a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3C95A8u;
        goto label_3c95a8;
    }
    ctx->pc = 0x3C95A0u;
    SET_GPR_U32(ctx, 31, 0x3C95A8u);
    ctx->pc = 0x3C95A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C95A0u;
            // 0x3c95a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C95A8u; }
        if (ctx->pc != 0x3C95A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C95A8u; }
        if (ctx->pc != 0x3C95A8u) { return; }
    }
    ctx->pc = 0x3C95A8u;
label_3c95a8:
    // 0x3c95a8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3c95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3c95ac:
    // 0x3c95ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3c95b0:
    if (ctx->pc == 0x3C95B0u) {
        ctx->pc = 0x3C95B0u;
            // 0x3c95b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3C95B4u;
        goto label_3c95b4;
    }
    ctx->pc = 0x3C95ACu;
    {
        const bool branch_taken_0x3c95ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c95ac) {
            ctx->pc = 0x3C95B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C95ACu;
            // 0x3c95b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C95DCu;
            goto label_3c95dc;
        }
    }
    ctx->pc = 0x3C95B4u;
label_3c95b4:
    // 0x3c95b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3c95b8:
    if (ctx->pc == 0x3C95B8u) {
        ctx->pc = 0x3C95BCu;
        goto label_3c95bc;
    }
    ctx->pc = 0x3C95B4u;
    {
        const bool branch_taken_0x3c95b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c95b4) {
            ctx->pc = 0x3C95D8u;
            goto label_3c95d8;
        }
    }
    ctx->pc = 0x3C95BCu;
label_3c95bc:
    // 0x3c95bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3c95c0:
    if (ctx->pc == 0x3C95C0u) {
        ctx->pc = 0x3C95C4u;
        goto label_3c95c4;
    }
    ctx->pc = 0x3C95BCu;
    {
        const bool branch_taken_0x3c95bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c95bc) {
            ctx->pc = 0x3C95D8u;
            goto label_3c95d8;
        }
    }
    ctx->pc = 0x3C95C4u;
label_3c95c4:
    // 0x3c95c4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3c95c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3c95c8:
    // 0x3c95c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3c95cc:
    if (ctx->pc == 0x3C95CCu) {
        ctx->pc = 0x3C95D0u;
        goto label_3c95d0;
    }
    ctx->pc = 0x3C95C8u;
    {
        const bool branch_taken_0x3c95c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c95c8) {
            ctx->pc = 0x3C95D8u;
            goto label_3c95d8;
        }
    }
    ctx->pc = 0x3C95D0u;
label_3c95d0:
    // 0x3c95d0: 0xc0400a8  jal         func_1002A0
label_3c95d4:
    if (ctx->pc == 0x3C95D4u) {
        ctx->pc = 0x3C95D8u;
        goto label_3c95d8;
    }
    ctx->pc = 0x3C95D0u;
    SET_GPR_U32(ctx, 31, 0x3C95D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C95D8u; }
        if (ctx->pc != 0x3C95D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C95D8u; }
        if (ctx->pc != 0x3C95D8u) { return; }
    }
    ctx->pc = 0x3C95D8u;
label_3c95d8:
    // 0x3c95d8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3c95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3c95dc:
    // 0x3c95dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3c95e0:
    if (ctx->pc == 0x3C95E0u) {
        ctx->pc = 0x3C95E0u;
            // 0x3c95e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3C95E4u;
        goto label_3c95e4;
    }
    ctx->pc = 0x3C95DCu;
    {
        const bool branch_taken_0x3c95dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c95dc) {
            ctx->pc = 0x3C95E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C95DCu;
            // 0x3c95e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C960Cu;
            goto label_3c960c;
        }
    }
    ctx->pc = 0x3C95E4u;
label_3c95e4:
    // 0x3c95e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3c95e8:
    if (ctx->pc == 0x3C95E8u) {
        ctx->pc = 0x3C95ECu;
        goto label_3c95ec;
    }
    ctx->pc = 0x3C95E4u;
    {
        const bool branch_taken_0x3c95e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c95e4) {
            ctx->pc = 0x3C9608u;
            goto label_3c9608;
        }
    }
    ctx->pc = 0x3C95ECu;
label_3c95ec:
    // 0x3c95ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3c95f0:
    if (ctx->pc == 0x3C95F0u) {
        ctx->pc = 0x3C95F4u;
        goto label_3c95f4;
    }
    ctx->pc = 0x3C95ECu;
    {
        const bool branch_taken_0x3c95ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c95ec) {
            ctx->pc = 0x3C9608u;
            goto label_3c9608;
        }
    }
    ctx->pc = 0x3C95F4u;
label_3c95f4:
    // 0x3c95f4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3c95f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3c95f8:
    // 0x3c95f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3c95fc:
    if (ctx->pc == 0x3C95FCu) {
        ctx->pc = 0x3C9600u;
        goto label_3c9600;
    }
    ctx->pc = 0x3C95F8u;
    {
        const bool branch_taken_0x3c95f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c95f8) {
            ctx->pc = 0x3C9608u;
            goto label_3c9608;
        }
    }
    ctx->pc = 0x3C9600u;
label_3c9600:
    // 0x3c9600: 0xc0400a8  jal         func_1002A0
label_3c9604:
    if (ctx->pc == 0x3C9604u) {
        ctx->pc = 0x3C9608u;
        goto label_3c9608;
    }
    ctx->pc = 0x3C9600u;
    SET_GPR_U32(ctx, 31, 0x3C9608u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9608u; }
        if (ctx->pc != 0x3C9608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9608u; }
        if (ctx->pc != 0x3C9608u) { return; }
    }
    ctx->pc = 0x3C9608u;
label_3c9608:
    // 0x3c9608: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3c9608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3c960c:
    // 0x3c960c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3c9610:
    if (ctx->pc == 0x3C9610u) {
        ctx->pc = 0x3C9614u;
        goto label_3c9614;
    }
    ctx->pc = 0x3C960Cu;
    {
        const bool branch_taken_0x3c960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c960c) {
            ctx->pc = 0x3C9628u;
            goto label_3c9628;
        }
    }
    ctx->pc = 0x3C9614u;
label_3c9614:
    // 0x3c9614: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c9614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c9618:
    // 0x3c9618: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c9618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c961c:
    // 0x3c961c: 0x24638ee8  addiu       $v1, $v1, -0x7118
    ctx->pc = 0x3c961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938344));
label_3c9620:
    // 0x3c9620: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3c9620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3c9624:
    // 0x3c9624: 0xac4065b0  sw          $zero, 0x65B0($v0)
    ctx->pc = 0x3c9624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26032), GPR_U32(ctx, 0));
label_3c9628:
    // 0x3c9628: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3c962c:
    if (ctx->pc == 0x3C962Cu) {
        ctx->pc = 0x3C962Cu;
            // 0x3c962c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3C9630u;
        goto label_3c9630;
    }
    ctx->pc = 0x3C9628u;
    {
        const bool branch_taken_0x3c9628 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9628) {
            ctx->pc = 0x3C962Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9628u;
            // 0x3c962c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9684u;
            goto label_3c9684;
        }
    }
    ctx->pc = 0x3C9630u;
label_3c9630:
    // 0x3c9630: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c9630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c9634:
    // 0x3c9634: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3c9634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3c9638:
    // 0x3c9638: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c9638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3c963c:
    // 0x3c963c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3c963cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3c9640:
    // 0x3c9640: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3c9644:
    if (ctx->pc == 0x3C9644u) {
        ctx->pc = 0x3C9644u;
            // 0x3c9644: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3C9648u;
        goto label_3c9648;
    }
    ctx->pc = 0x3C9640u;
    {
        const bool branch_taken_0x3c9640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9640) {
            ctx->pc = 0x3C9644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9640u;
            // 0x3c9644: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C965Cu;
            goto label_3c965c;
        }
    }
    ctx->pc = 0x3C9648u;
label_3c9648:
    // 0x3c9648: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c9648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c964c:
    // 0x3c964c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3c964cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3c9650:
    // 0x3c9650: 0x320f809  jalr        $t9
label_3c9654:
    if (ctx->pc == 0x3C9654u) {
        ctx->pc = 0x3C9654u;
            // 0x3c9654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C9658u;
        goto label_3c9658;
    }
    ctx->pc = 0x3C9650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9658u);
        ctx->pc = 0x3C9654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9650u;
            // 0x3c9654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C9658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C9658u; }
            if (ctx->pc != 0x3C9658u) { return; }
        }
        }
    }
    ctx->pc = 0x3C9658u;
label_3c9658:
    // 0x3c9658: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3c9658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3c965c:
    // 0x3c965c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3c9660:
    if (ctx->pc == 0x3C9660u) {
        ctx->pc = 0x3C9660u;
            // 0x3c9660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9664u;
        goto label_3c9664;
    }
    ctx->pc = 0x3C965Cu;
    {
        const bool branch_taken_0x3c965c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c965c) {
            ctx->pc = 0x3C9660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C965Cu;
            // 0x3c9660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9678u;
            goto label_3c9678;
        }
    }
    ctx->pc = 0x3C9664u;
label_3c9664:
    // 0x3c9664: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c9664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c9668:
    // 0x3c9668: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3c9668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3c966c:
    // 0x3c966c: 0x320f809  jalr        $t9
label_3c9670:
    if (ctx->pc == 0x3C9670u) {
        ctx->pc = 0x3C9670u;
            // 0x3c9670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C9674u;
        goto label_3c9674;
    }
    ctx->pc = 0x3C966Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9674u);
        ctx->pc = 0x3C9670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C966Cu;
            // 0x3c9670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C9674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C9674u; }
            if (ctx->pc != 0x3C9674u) { return; }
        }
        }
    }
    ctx->pc = 0x3C9674u;
label_3c9674:
    // 0x3c9674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9678:
    // 0x3c9678: 0xc075bf8  jal         func_1D6FE0
label_3c967c:
    if (ctx->pc == 0x3C967Cu) {
        ctx->pc = 0x3C967Cu;
            // 0x3c967c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9680u;
        goto label_3c9680;
    }
    ctx->pc = 0x3C9678u;
    SET_GPR_U32(ctx, 31, 0x3C9680u);
    ctx->pc = 0x3C967Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9678u;
            // 0x3c967c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9680u; }
        if (ctx->pc != 0x3C9680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9680u; }
        if (ctx->pc != 0x3C9680u) { return; }
    }
    ctx->pc = 0x3C9680u;
label_3c9680:
    // 0x3c9680: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c9680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3c9684:
    // 0x3c9684: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c9684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c9688:
    // 0x3c9688: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c968c:
    if (ctx->pc == 0x3C968Cu) {
        ctx->pc = 0x3C968Cu;
            // 0x3c968c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9690u;
        goto label_3c9690;
    }
    ctx->pc = 0x3C9688u;
    {
        const bool branch_taken_0x3c9688 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c9688) {
            ctx->pc = 0x3C968Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9688u;
            // 0x3c968c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C969Cu;
            goto label_3c969c;
        }
    }
    ctx->pc = 0x3C9690u;
label_3c9690:
    // 0x3c9690: 0xc0400a8  jal         func_1002A0
label_3c9694:
    if (ctx->pc == 0x3C9694u) {
        ctx->pc = 0x3C9694u;
            // 0x3c9694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9698u;
        goto label_3c9698;
    }
    ctx->pc = 0x3C9690u;
    SET_GPR_U32(ctx, 31, 0x3C9698u);
    ctx->pc = 0x3C9694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9690u;
            // 0x3c9694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9698u; }
        if (ctx->pc != 0x3C9698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9698u; }
        if (ctx->pc != 0x3C9698u) { return; }
    }
    ctx->pc = 0x3C9698u;
label_3c9698:
    // 0x3c9698: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c9698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c969c:
    // 0x3c969c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c969cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c96a0:
    // 0x3c96a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c96a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c96a4:
    // 0x3c96a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c96a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c96a8:
    // 0x3c96a8: 0x3e00008  jr          $ra
label_3c96ac:
    if (ctx->pc == 0x3C96ACu) {
        ctx->pc = 0x3C96ACu;
            // 0x3c96ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C96B0u;
        goto label_3c96b0;
    }
    ctx->pc = 0x3C96A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C96ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C96A8u;
            // 0x3c96ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C96B0u;
label_3c96b0:
    // 0x3c96b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c96b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c96b4:
    // 0x3c96b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c96b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c96b8:
    // 0x3c96b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c96b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c96bc:
    // 0x3c96bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c96bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c96c0:
    // 0x3c96c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c96c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c96c4:
    // 0x3c96c4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_3c96c8:
    if (ctx->pc == 0x3C96C8u) {
        ctx->pc = 0x3C96C8u;
            // 0x3c96c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C96CCu;
        goto label_3c96cc;
    }
    ctx->pc = 0x3C96C4u;
    {
        const bool branch_taken_0x3c96c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C96C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C96C4u;
            // 0x3c96c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c96c4) {
            ctx->pc = 0x3C978Cu;
            goto label_3c978c;
        }
    }
    ctx->pc = 0x3C96CCu;
label_3c96cc:
    // 0x3c96cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c96ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c96d0:
    // 0x3c96d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c96d4:
    // 0x3c96d4: 0x24638fa0  addiu       $v1, $v1, -0x7060
    ctx->pc = 0x3c96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938528));
label_3c96d8:
    // 0x3c96d8: 0x24428fe0  addiu       $v0, $v0, -0x7020
    ctx->pc = 0x3c96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938592));
label_3c96dc:
    // 0x3c96dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3c96dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3c96e0:
    // 0x3c96e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3c96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3c96e4:
    // 0x3c96e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c96e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c96e8:
    // 0x3c96e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3c96e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3c96ec:
    // 0x3c96ec: 0x320f809  jalr        $t9
label_3c96f0:
    if (ctx->pc == 0x3C96F0u) {
        ctx->pc = 0x3C96F4u;
        goto label_3c96f4;
    }
    ctx->pc = 0x3C96ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C96F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C96F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C96F4u; }
            if (ctx->pc != 0x3C96F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C96F4u;
label_3c96f4:
    // 0x3c96f4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_3c96f8:
    if (ctx->pc == 0x3C96F8u) {
        ctx->pc = 0x3C96F8u;
            // 0x3c96f8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3C96FCu;
        goto label_3c96fc;
    }
    ctx->pc = 0x3C96F4u;
    {
        const bool branch_taken_0x3c96f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c96f4) {
            ctx->pc = 0x3C96F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C96F4u;
            // 0x3c96f8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9778u;
            goto label_3c9778;
        }
    }
    ctx->pc = 0x3C96FCu;
label_3c96fc:
    // 0x3c96fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3c96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3c9700:
    // 0x3c9700: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c9700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c9704:
    // 0x3c9704: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3c9704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_3c9708:
    // 0x3c9708: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3c9708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_3c970c:
    // 0x3c970c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3c970cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3c9710:
    // 0x3c9710: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3c9710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3c9714:
    // 0x3c9714: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x3c9714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_3c9718:
    // 0x3c9718: 0xc0aecc4  jal         func_2BB310
label_3c971c:
    if (ctx->pc == 0x3C971Cu) {
        ctx->pc = 0x3C971Cu;
            // 0x3c971c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C9720u;
        goto label_3c9720;
    }
    ctx->pc = 0x3C9718u;
    SET_GPR_U32(ctx, 31, 0x3C9720u);
    ctx->pc = 0x3C971Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9718u;
            // 0x3c971c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9720u; }
        if (ctx->pc != 0x3C9720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9720u; }
        if (ctx->pc != 0x3C9720u) { return; }
    }
    ctx->pc = 0x3C9720u;
label_3c9720:
    // 0x3c9720: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3c9720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_3c9724:
    // 0x3c9724: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x3c9724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3c9728:
    // 0x3c9728: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3c972c:
    if (ctx->pc == 0x3C972Cu) {
        ctx->pc = 0x3C972Cu;
            // 0x3c972c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x3C9730u;
        goto label_3c9730;
    }
    ctx->pc = 0x3C9728u;
    {
        const bool branch_taken_0x3c9728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9728) {
            ctx->pc = 0x3C972Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9728u;
            // 0x3c972c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9744u;
            goto label_3c9744;
        }
    }
    ctx->pc = 0x3C9730u;
label_3c9730:
    // 0x3c9730: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3c9730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3c9734:
    // 0x3c9734: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3c9734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3c9738:
    // 0x3c9738: 0x320f809  jalr        $t9
label_3c973c:
    if (ctx->pc == 0x3C973Cu) {
        ctx->pc = 0x3C973Cu;
            // 0x3c973c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C9740u;
        goto label_3c9740;
    }
    ctx->pc = 0x3C9738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9740u);
        ctx->pc = 0x3C973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9738u;
            // 0x3c973c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C9740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C9740u; }
            if (ctx->pc != 0x3C9740u) { return; }
        }
        }
    }
    ctx->pc = 0x3C9740u;
label_3c9740:
    // 0x3c9740: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3c9740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3c9744:
    // 0x3c9744: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3c9744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c9748:
    // 0x3c9748: 0xc0aec9c  jal         func_2BB270
label_3c974c:
    if (ctx->pc == 0x3C974Cu) {
        ctx->pc = 0x3C974Cu;
            // 0x3c974c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3C9750u;
        goto label_3c9750;
    }
    ctx->pc = 0x3C9748u;
    SET_GPR_U32(ctx, 31, 0x3C9750u);
    ctx->pc = 0x3C974Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9748u;
            // 0x3c974c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9750u; }
        if (ctx->pc != 0x3C9750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9750u; }
        if (ctx->pc != 0x3C9750u) { return; }
    }
    ctx->pc = 0x3C9750u;
label_3c9750:
    // 0x3c9750: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3c9750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_3c9754:
    // 0x3c9754: 0xc0aec88  jal         func_2BB220
label_3c9758:
    if (ctx->pc == 0x3C9758u) {
        ctx->pc = 0x3C9758u;
            // 0x3c9758: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3C975Cu;
        goto label_3c975c;
    }
    ctx->pc = 0x3C9754u;
    SET_GPR_U32(ctx, 31, 0x3C975Cu);
    ctx->pc = 0x3C9758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9754u;
            // 0x3c9758: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C975Cu; }
        if (ctx->pc != 0x3C975Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C975Cu; }
        if (ctx->pc != 0x3C975Cu) { return; }
    }
    ctx->pc = 0x3C975Cu;
label_3c975c:
    // 0x3c975c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3c975cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3c9760:
    // 0x3c9760: 0xc0aec0c  jal         func_2BB030
label_3c9764:
    if (ctx->pc == 0x3C9764u) {
        ctx->pc = 0x3C9764u;
            // 0x3c9764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9768u;
        goto label_3c9768;
    }
    ctx->pc = 0x3C9760u;
    SET_GPR_U32(ctx, 31, 0x3C9768u);
    ctx->pc = 0x3C9764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9760u;
            // 0x3c9764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9768u; }
        if (ctx->pc != 0x3C9768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9768u; }
        if (ctx->pc != 0x3C9768u) { return; }
    }
    ctx->pc = 0x3C9768u;
label_3c9768:
    // 0x3c9768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c976c:
    // 0x3c976c: 0xc0aeaa8  jal         func_2BAAA0
label_3c9770:
    if (ctx->pc == 0x3C9770u) {
        ctx->pc = 0x3C9770u;
            // 0x3c9770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9774u;
        goto label_3c9774;
    }
    ctx->pc = 0x3C976Cu;
    SET_GPR_U32(ctx, 31, 0x3C9774u);
    ctx->pc = 0x3C9770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C976Cu;
            // 0x3c9770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9774u; }
        if (ctx->pc != 0x3C9774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9774u; }
        if (ctx->pc != 0x3C9774u) { return; }
    }
    ctx->pc = 0x3C9774u;
label_3c9774:
    // 0x3c9774: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3c9774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3c9778:
    // 0x3c9778: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c9778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c977c:
    // 0x3c977c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c9780:
    if (ctx->pc == 0x3C9780u) {
        ctx->pc = 0x3C9780u;
            // 0x3c9780: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9784u;
        goto label_3c9784;
    }
    ctx->pc = 0x3C977Cu;
    {
        const bool branch_taken_0x3c977c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c977c) {
            ctx->pc = 0x3C9780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C977Cu;
            // 0x3c9780: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9790u;
            goto label_3c9790;
        }
    }
    ctx->pc = 0x3C9784u;
label_3c9784:
    // 0x3c9784: 0xc0400a8  jal         func_1002A0
label_3c9788:
    if (ctx->pc == 0x3C9788u) {
        ctx->pc = 0x3C9788u;
            // 0x3c9788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C978Cu;
        goto label_3c978c;
    }
    ctx->pc = 0x3C9784u;
    SET_GPR_U32(ctx, 31, 0x3C978Cu);
    ctx->pc = 0x3C9788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9784u;
            // 0x3c9788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C978Cu; }
        if (ctx->pc != 0x3C978Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C978Cu; }
        if (ctx->pc != 0x3C978Cu) { return; }
    }
    ctx->pc = 0x3C978Cu;
label_3c978c:
    // 0x3c978c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c978cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9790:
    // 0x3c9790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c9790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9794:
    // 0x3c9794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c9798:
    // 0x3c9798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c979c:
    // 0x3c979c: 0x3e00008  jr          $ra
label_3c97a0:
    if (ctx->pc == 0x3C97A0u) {
        ctx->pc = 0x3C97A0u;
            // 0x3c97a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C97A4u;
        goto label_3c97a4;
    }
    ctx->pc = 0x3C979Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C97A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C979Cu;
            // 0x3c97a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C97A4u;
label_3c97a4:
    // 0x3c97a4: 0x0  nop
    ctx->pc = 0x3c97a4u;
    // NOP
label_3c97a8:
    // 0x3c97a8: 0x0  nop
    ctx->pc = 0x3c97a8u;
    // NOP
label_3c97ac:
    // 0x3c97ac: 0x0  nop
    ctx->pc = 0x3c97acu;
    // NOP
label_3c97b0:
    // 0x3c97b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c97b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c97b4:
    // 0x3c97b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c97b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c97b8:
    // 0x3c97b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c97b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c97bc:
    // 0x3c97bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c97bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c97c0:
    // 0x3c97c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c97c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c97c4:
    // 0x3c97c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c97c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c97c8:
    // 0x3c97c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c97c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c97cc:
    // 0x3c97cc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3c97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3c97d0:
    // 0x3c97d0: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_3c97d4:
    if (ctx->pc == 0x3C97D4u) {
        ctx->pc = 0x3C97D4u;
            // 0x3c97d4: 0x26500084  addiu       $s0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x3C97D8u;
        goto label_3c97d8;
    }
    ctx->pc = 0x3C97D0u;
    {
        const bool branch_taken_0x3c97d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C97D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C97D0u;
            // 0x3c97d4: 0x26500084  addiu       $s0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c97d0) {
            ctx->pc = 0x3C995Cu;
            goto label_3c995c;
        }
    }
    ctx->pc = 0x3C97D8u;
label_3c97d8:
    // 0x3c97d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c97dc:
    // 0x3c97dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c97dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c97e0:
    // 0x3c97e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c97e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c97e4:
    // 0x3c97e4: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3c97e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3c97e8:
    // 0x3c97e8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3c97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3c97ec:
    // 0x3c97ec: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3c97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3c97f0:
    // 0x3c97f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3c97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c97f4:
    // 0x3c97f4: 0xc074f30  jal         func_1D3CC0
label_3c97f8:
    if (ctx->pc == 0x3C97F8u) {
        ctx->pc = 0x3C97F8u;
            // 0x3c97f8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3C97FCu;
        goto label_3c97fc;
    }
    ctx->pc = 0x3C97F4u;
    SET_GPR_U32(ctx, 31, 0x3C97FCu);
    ctx->pc = 0x3C97F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C97F4u;
            // 0x3c97f8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C97FCu; }
        if (ctx->pc != 0x3C97FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C97FCu; }
        if (ctx->pc != 0x3C97FCu) { return; }
    }
    ctx->pc = 0x3C97FCu;
label_3c97fc:
    // 0x3c97fc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3c97fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3c9800:
    // 0x3c9800: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3c9800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3c9804:
    // 0x3c9804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c9804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9808:
    // 0x3c9808: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x3c9808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3c980c:
    // 0x3c980c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3c980cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_3c9810:
    // 0x3c9810: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3c9810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3c9814:
    // 0x3c9814: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3c9814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3c9818:
    // 0x3c9818: 0xc0751b8  jal         func_1D46E0
label_3c981c:
    if (ctx->pc == 0x3C981Cu) {
        ctx->pc = 0x3C981Cu;
            // 0x3c981c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3C9820u;
        goto label_3c9820;
    }
    ctx->pc = 0x3C9818u;
    SET_GPR_U32(ctx, 31, 0x3C9820u);
    ctx->pc = 0x3C981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9818u;
            // 0x3c981c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9820u; }
        if (ctx->pc != 0x3C9820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9820u; }
        if (ctx->pc != 0x3C9820u) { return; }
    }
    ctx->pc = 0x3C9820u;
label_3c9820:
    // 0x3c9820: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3c9820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3c9824:
    // 0x3c9824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9828:
    // 0x3c9828: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3c9828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3c982c:
    // 0x3c982c: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x3c982cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_3c9830:
    // 0x3c9830: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x3c9830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3c9834:
    // 0x3c9834: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x3c9834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3c9838:
    // 0x3c9838: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x3c9838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_3c983c:
    // 0x3c983c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3c983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3c9840:
    // 0x3c9840: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3c9840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3c9844:
    // 0x3c9844: 0xc075188  jal         func_1D4620
label_3c9848:
    if (ctx->pc == 0x3C9848u) {
        ctx->pc = 0x3C9848u;
            // 0x3c9848: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3C984Cu;
        goto label_3c984c;
    }
    ctx->pc = 0x3C9844u;
    SET_GPR_U32(ctx, 31, 0x3C984Cu);
    ctx->pc = 0x3C9848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9844u;
            // 0x3c9848: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C984Cu; }
        if (ctx->pc != 0x3C984Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C984Cu; }
        if (ctx->pc != 0x3C984Cu) { return; }
    }
    ctx->pc = 0x3C984Cu;
label_3c984c:
    // 0x3c984c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3c984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3c9850:
    // 0x3c9850: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c9850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c9854:
    // 0x3c9854: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c9854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3c9858:
    // 0x3c9858: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x3c9858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_3c985c:
    // 0x3c985c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c9860:
    // 0x3c9860: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3c9860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3c9864:
    // 0x3c9864: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3c9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3c9868:
    // 0x3c9868: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3c9868u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c986c:
    // 0x3c986c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3c9870:
    if (ctx->pc == 0x3C9870u) {
        ctx->pc = 0x3C9870u;
            // 0x3c9870: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C9874u;
        goto label_3c9874;
    }
    ctx->pc = 0x3C986Cu;
    {
        const bool branch_taken_0x3c986c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c986c) {
            ctx->pc = 0x3C9870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C986Cu;
            // 0x3c9870: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9880u;
            goto label_3c9880;
        }
    }
    ctx->pc = 0x3C9874u;
label_3c9874:
    // 0x3c9874: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c9874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c9878:
    // 0x3c9878: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3c9878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3c987c:
    // 0x3c987c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c9880:
    // 0x3c9880: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c9880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c9884:
    // 0x3c9884: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3c9884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3c9888:
    // 0x3c9888: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3c9888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3c988c:
    // 0x3c988c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3c988cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c9890:
    // 0x3c9890: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3c9894:
    if (ctx->pc == 0x3C9894u) {
        ctx->pc = 0x3C9894u;
            // 0x3c9894: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C9898u;
        goto label_3c9898;
    }
    ctx->pc = 0x3C9890u;
    {
        const bool branch_taken_0x3c9890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9890) {
            ctx->pc = 0x3C9894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9890u;
            // 0x3c9894: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C98A4u;
            goto label_3c98a4;
        }
    }
    ctx->pc = 0x3C9898u;
label_3c9898:
    // 0x3c9898: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c9898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c989c:
    // 0x3c989c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3c989cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3c98a0:
    // 0x3c98a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c98a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c98a4:
    // 0x3c98a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c98a8:
    // 0x3c98a8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3c98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3c98ac:
    // 0x3c98ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3c98acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3c98b0:
    // 0x3c98b0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3c98b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c98b4:
    // 0x3c98b4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3c98b8:
    if (ctx->pc == 0x3C98B8u) {
        ctx->pc = 0x3C98B8u;
            // 0x3c98b8: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3C98BCu;
        goto label_3c98bc;
    }
    ctx->pc = 0x3C98B4u;
    {
        const bool branch_taken_0x3c98b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c98b4) {
            ctx->pc = 0x3C98B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C98B4u;
            // 0x3c98b8: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C98C8u;
            goto label_3c98c8;
        }
    }
    ctx->pc = 0x3C98BCu;
label_3c98bc:
    // 0x3c98bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c98c0:
    // 0x3c98c0: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3c98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3c98c4:
    // 0x3c98c4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3c98c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c98c8:
    // 0x3c98c8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3c98c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3c98cc:
    // 0x3c98cc: 0x320f809  jalr        $t9
label_3c98d0:
    if (ctx->pc == 0x3C98D0u) {
        ctx->pc = 0x3C98D0u;
            // 0x3c98d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C98D4u;
        goto label_3c98d4;
    }
    ctx->pc = 0x3C98CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C98D4u);
        ctx->pc = 0x3C98D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C98CCu;
            // 0x3c98d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C98D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C98D4u; }
            if (ctx->pc != 0x3C98D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C98D4u;
label_3c98d4:
    // 0x3c98d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c98d8:
    // 0x3c98d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c98d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c98dc:
    // 0x3c98dc: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3c98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3c98e0:
    // 0x3c98e0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3c98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3c98e4:
    // 0x3c98e4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3c98e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3c98e8:
    // 0x3c98e8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3c98e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3c98ec:
    // 0x3c98ec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3c98f0:
    if (ctx->pc == 0x3C98F0u) {
        ctx->pc = 0x3C98F0u;
            // 0x3c98f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C98F4u;
        goto label_3c98f4;
    }
    ctx->pc = 0x3C98ECu;
    {
        const bool branch_taken_0x3c98ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c98ec) {
            ctx->pc = 0x3C98F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C98ECu;
            // 0x3c98f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9900u;
            goto label_3c9900;
        }
    }
    ctx->pc = 0x3C98F4u;
label_3c98f4:
    // 0x3c98f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c98f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c98f8:
    // 0x3c98f8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3c98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3c98fc:
    // 0x3c98fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c98fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c9900:
    // 0x3c9900: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9904:
    // 0x3c9904: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3c9904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3c9908:
    // 0x3c9908: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3c9908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3c990c:
    // 0x3c990c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3c990cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3c9910:
    // 0x3c9910: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3c9910u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3c9914:
    // 0x3c9914: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3c9918:
    if (ctx->pc == 0x3C9918u) {
        ctx->pc = 0x3C991Cu;
        goto label_3c991c;
    }
    ctx->pc = 0x3C9914u;
    {
        const bool branch_taken_0x3c9914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9914) {
            ctx->pc = 0x3C9924u;
            goto label_3c9924;
        }
    }
    ctx->pc = 0x3C991Cu;
label_3c991c:
    // 0x3c991c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c991cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9920:
    // 0x3c9920: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3c9920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3c9924:
    // 0x3c9924: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9928:
    // 0x3c9928: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3c9928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3c992c:
    // 0x3c992c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3c992cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3c9930:
    // 0x3c9930: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3c9934:
    if (ctx->pc == 0x3C9934u) {
        ctx->pc = 0x3C9938u;
        goto label_3c9938;
    }
    ctx->pc = 0x3C9930u;
    {
        const bool branch_taken_0x3c9930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9930) {
            ctx->pc = 0x3C9940u;
            goto label_3c9940;
        }
    }
    ctx->pc = 0x3C9938u;
label_3c9938:
    // 0x3c9938: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c993c:
    // 0x3c993c: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3c993cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3c9940:
    // 0x3c9940: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9944:
    // 0x3c9944: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3c9944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3c9948:
    // 0x3c9948: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3c9948u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3c994c:
    // 0x3c994c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3c9950:
    if (ctx->pc == 0x3C9950u) {
        ctx->pc = 0x3C9950u;
            // 0x3c9950: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3C9954u;
        goto label_3c9954;
    }
    ctx->pc = 0x3C994Cu;
    {
        const bool branch_taken_0x3c994c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c994c) {
            ctx->pc = 0x3C9950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C994Cu;
            // 0x3c9950: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9960u;
            goto label_3c9960;
        }
    }
    ctx->pc = 0x3C9954u;
label_3c9954:
    // 0x3c9954: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9958:
    // 0x3c9958: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3c9958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3c995c:
    // 0x3c995c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c995cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c9960:
    // 0x3c9960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c9960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9964:
    // 0x3c9964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c9968:
    // 0x3c9968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c996c:
    // 0x3c996c: 0x3e00008  jr          $ra
label_3c9970:
    if (ctx->pc == 0x3C9970u) {
        ctx->pc = 0x3C9970u;
            // 0x3c9970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3C9974u;
        goto label_3c9974;
    }
    ctx->pc = 0x3C996Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C996Cu;
            // 0x3c9970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C9974u;
label_3c9974:
    // 0x3c9974: 0x0  nop
    ctx->pc = 0x3c9974u;
    // NOP
label_3c9978:
    // 0x3c9978: 0x0  nop
    ctx->pc = 0x3c9978u;
    // NOP
label_3c997c:
    // 0x3c997c: 0x0  nop
    ctx->pc = 0x3c997cu;
    // NOP
label_3c9980:
    // 0x3c9980: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3c9980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3c9984:
    // 0x3c9984: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c9984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c9988:
    // 0x3c9988: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3c9988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3c998c:
    // 0x3c998c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3c998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3c9990:
    // 0x3c9990: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3c9990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3c9994:
    // 0x3c9994: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c9994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c9998:
    // 0x3c9998: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c9998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c999c:
    // 0x3c999c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c999cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c99a0:
    // 0x3c99a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c99a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c99a4:
    // 0x3c99a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c99a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c99a8:
    // 0x3c99a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c99a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c99ac:
    // 0x3c99ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c99acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c99b0:
    // 0x3c99b0: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3c99b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c99b4:
    // 0x3c99b4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3c99b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c99b8:
    // 0x3c99b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c99bc:
    // 0x3c99bc: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3c99c0:
    if (ctx->pc == 0x3C99C0u) {
        ctx->pc = 0x3C99C0u;
            // 0x3c99c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C99C4u;
        goto label_3c99c4;
    }
    ctx->pc = 0x3C99BCu;
    {
        const bool branch_taken_0x3c99bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C99C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C99BCu;
            // 0x3c99c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c99bc) {
            ctx->pc = 0x3C9A00u;
            goto label_3c9a00;
        }
    }
    ctx->pc = 0x3C99C4u;
label_3c99c4:
    // 0x3c99c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c99c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c99c8:
    // 0x3c99c8: 0x50a30095  beql        $a1, $v1, . + 4 + (0x95 << 2)
label_3c99cc:
    if (ctx->pc == 0x3C99CCu) {
        ctx->pc = 0x3C99CCu;
            // 0x3c99cc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3C99D0u;
        goto label_3c99d0;
    }
    ctx->pc = 0x3C99C8u;
    {
        const bool branch_taken_0x3c99c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c99c8) {
            ctx->pc = 0x3C99CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C99C8u;
            // 0x3c99cc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9C20u;
            goto label_3c9c20;
        }
    }
    ctx->pc = 0x3C99D0u;
label_3c99d0:
    // 0x3c99d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c99d4:
    // 0x3c99d4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3c99d8:
    if (ctx->pc == 0x3C99D8u) {
        ctx->pc = 0x3C99D8u;
            // 0x3c99d8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C99DCu;
        goto label_3c99dc;
    }
    ctx->pc = 0x3C99D4u;
    {
        const bool branch_taken_0x3c99d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c99d4) {
            ctx->pc = 0x3C99D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C99D4u;
            // 0x3c99d8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C99E4u;
            goto label_3c99e4;
        }
    }
    ctx->pc = 0x3C99DCu;
label_3c99dc:
    // 0x3c99dc: 0x1000008f  b           . + 4 + (0x8F << 2)
label_3c99e0:
    if (ctx->pc == 0x3C99E0u) {
        ctx->pc = 0x3C99E4u;
        goto label_3c99e4;
    }
    ctx->pc = 0x3C99DCu;
    {
        const bool branch_taken_0x3c99dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c99dc) {
            ctx->pc = 0x3C9C1Cu;
            goto label_3c9c1c;
        }
    }
    ctx->pc = 0x3C99E4u;
label_3c99e4:
    // 0x3c99e4: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3c99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3c99e8:
    // 0x3c99e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3c99e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3c99ec:
    // 0x3c99ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3c99ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3c99f0:
    // 0x3c99f0: 0x320f809  jalr        $t9
label_3c99f4:
    if (ctx->pc == 0x3C99F4u) {
        ctx->pc = 0x3C99F4u;
            // 0x3c99f4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3C99F8u;
        goto label_3c99f8;
    }
    ctx->pc = 0x3C99F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C99F8u);
        ctx->pc = 0x3C99F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C99F0u;
            // 0x3c99f4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C99F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C99F8u; }
            if (ctx->pc != 0x3C99F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3C99F8u;
label_3c99f8:
    // 0x3c99f8: 0x10000088  b           . + 4 + (0x88 << 2)
label_3c99fc:
    if (ctx->pc == 0x3C99FCu) {
        ctx->pc = 0x3C9A00u;
        goto label_3c9a00;
    }
    ctx->pc = 0x3C99F8u;
    {
        const bool branch_taken_0x3c99f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c99f8) {
            ctx->pc = 0x3C9C1Cu;
            goto label_3c9c1c;
        }
    }
    ctx->pc = 0x3C9A00u;
label_3c9a00:
    // 0x3c9a00: 0x8e360070  lw          $s6, 0x70($s1)
    ctx->pc = 0x3c9a00u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_3c9a04:
    // 0x3c9a04: 0x12c00085  beqz        $s6, . + 4 + (0x85 << 2)
label_3c9a08:
    if (ctx->pc == 0x3C9A08u) {
        ctx->pc = 0x3C9A0Cu;
        goto label_3c9a0c;
    }
    ctx->pc = 0x3C9A04u;
    {
        const bool branch_taken_0x3c9a04 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9a04) {
            ctx->pc = 0x3C9C1Cu;
            goto label_3c9c1c;
        }
    }
    ctx->pc = 0x3C9A0Cu;
label_3c9a0c:
    // 0x3c9a0c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3c9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3c9a10:
    // 0x3c9a10: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3c9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3c9a14:
    // 0x3c9a14: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x3c9a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3c9a18:
    // 0x3c9a18: 0x26320084  addiu       $s2, $s1, 0x84
    ctx->pc = 0x3c9a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3c9a1c:
    // 0x3c9a1c: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x3c9a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3c9a20:
    // 0x3c9a20: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x3c9a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3c9a24:
    // 0x3c9a24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3c9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3c9a28:
    // 0x3c9a28: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3c9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3c9a2c:
    // 0x3c9a2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c9a30:
    // 0x3c9a30: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3c9a30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3c9a34:
    // 0x3c9a34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3c9a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3c9a38:
    // 0x3c9a38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3c9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c9a3c:
    // 0x3c9a3c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3c9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_3c9a40:
    // 0x3c9a40: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3c9a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_3c9a44:
    // 0x3c9a44: 0x922200a8  lbu         $v0, 0xA8($s1)
    ctx->pc = 0x3c9a44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 168)));
label_3c9a48:
    // 0x3c9a48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3c9a4c:
    if (ctx->pc == 0x3C9A4Cu) {
        ctx->pc = 0x3C9A4Cu;
            // 0x3c9a4c: 0x24970010  addiu       $s7, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x3C9A50u;
        goto label_3c9a50;
    }
    ctx->pc = 0x3C9A48u;
    {
        const bool branch_taken_0x3c9a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9A48u;
            // 0x3c9a4c: 0x24970010  addiu       $s7, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9a48) {
            ctx->pc = 0x3C9A68u;
            goto label_3c9a68;
        }
    }
    ctx->pc = 0x3C9A50u;
label_3c9a50:
    // 0x3c9a50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c9a54:
    // 0x3c9a54: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x3c9a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_3c9a58:
    // 0x3c9a58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c9a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c9a5c:
    // 0x3c9a5c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3c9a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3c9a60:
    // 0x3c9a60: 0x320f809  jalr        $t9
label_3c9a64:
    if (ctx->pc == 0x3C9A64u) {
        ctx->pc = 0x3C9A68u;
        goto label_3c9a68;
    }
    ctx->pc = 0x3C9A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9A68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C9A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C9A68u; }
            if (ctx->pc != 0x3C9A68u) { return; }
        }
        }
    }
    ctx->pc = 0x3C9A68u;
label_3c9a68:
    // 0x3c9a68: 0xc04e738  jal         func_139CE0
label_3c9a6c:
    if (ctx->pc == 0x3C9A6Cu) {
        ctx->pc = 0x3C9A6Cu;
            // 0x3c9a6c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x3C9A70u;
        goto label_3c9a70;
    }
    ctx->pc = 0x3C9A68u;
    SET_GPR_U32(ctx, 31, 0x3C9A70u);
    ctx->pc = 0x3C9A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9A68u;
            // 0x3c9a6c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9A70u; }
        if (ctx->pc != 0x3C9A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9A70u; }
        if (ctx->pc != 0x3C9A70u) { return; }
    }
    ctx->pc = 0x3C9A70u;
label_3c9a70:
    // 0x3c9a70: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3c9a74:
    // 0x3c9a74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c9a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a78:
    // 0x3c9a78: 0xc4548f28  lwc1        $f20, -0x70D8($v0)
    ctx->pc = 0x3c9a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294938408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c9a7c:
    // 0x3c9a7c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3c9a7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a80:
    // 0x3c9a80: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x3c9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_3c9a84:
    // 0x3c9a84: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x3c9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3c9a88:
    // 0x3c9a88: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x3c9a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
label_3c9a8c:
    // 0x3c9a8c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3c9a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3c9a90:
    // 0x3c9a90: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3c9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3c9a94:
    // 0x3c9a94: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3c9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3c9a98:
    // 0x3c9a98: 0xc0b36b4  jal         func_2CDAD0
label_3c9a9c:
    if (ctx->pc == 0x3C9A9Cu) {
        ctx->pc = 0x3C9A9Cu;
            // 0x3c9a9c: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3C9AA0u;
        goto label_3c9aa0;
    }
    ctx->pc = 0x3C9A98u;
    SET_GPR_U32(ctx, 31, 0x3C9AA0u);
    ctx->pc = 0x3C9A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9A98u;
            // 0x3c9a9c: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AA0u; }
        if (ctx->pc != 0x3C9AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AA0u; }
        if (ctx->pc != 0x3C9AA0u) { return; }
    }
    ctx->pc = 0x3C9AA0u;
label_3c9aa0:
    // 0x3c9aa0: 0xc0b9c64  jal         func_2E7190
label_3c9aa4:
    if (ctx->pc == 0x3C9AA4u) {
        ctx->pc = 0x3C9AA4u;
            // 0x3c9aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9AA8u;
        goto label_3c9aa8;
    }
    ctx->pc = 0x3C9AA0u;
    SET_GPR_U32(ctx, 31, 0x3C9AA8u);
    ctx->pc = 0x3C9AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9AA0u;
            // 0x3c9aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AA8u; }
        if (ctx->pc != 0x3C9AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AA8u; }
        if (ctx->pc != 0x3C9AA8u) { return; }
    }
    ctx->pc = 0x3C9AA8u;
label_3c9aa8:
    // 0x3c9aa8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c9aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9aac:
    // 0x3c9aac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c9aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ab0:
    // 0x3c9ab0: 0xc0d63a0  jal         func_358E80
label_3c9ab4:
    if (ctx->pc == 0x3C9AB4u) {
        ctx->pc = 0x3C9AB4u;
            // 0x3c9ab4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9AB8u;
        goto label_3c9ab8;
    }
    ctx->pc = 0x3C9AB0u;
    SET_GPR_U32(ctx, 31, 0x3C9AB8u);
    ctx->pc = 0x3C9AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9AB0u;
            // 0x3c9ab4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E80u;
    if (runtime->hasFunction(0x358E80u)) {
        auto targetFn = runtime->lookupFunction(0x358E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AB8u; }
        if (ctx->pc != 0x3C9AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E80_0x358e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AB8u; }
        if (ctx->pc != 0x3C9AB8u) { return; }
    }
    ctx->pc = 0x3C9AB8u;
label_3c9ab8:
    // 0x3c9ab8: 0xc0d410c  jal         func_350430
label_3c9abc:
    if (ctx->pc == 0x3C9ABCu) {
        ctx->pc = 0x3C9ABCu;
            // 0x3c9abc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9AC0u;
        goto label_3c9ac0;
    }
    ctx->pc = 0x3C9AB8u;
    SET_GPR_U32(ctx, 31, 0x3C9AC0u);
    ctx->pc = 0x3C9ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9AB8u;
            // 0x3c9abc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350430u;
    if (runtime->hasFunction(0x350430u)) {
        auto targetFn = runtime->lookupFunction(0x350430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AC0u; }
        if (ctx->pc != 0x3C9AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350430_0x350430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AC0u; }
        if (ctx->pc != 0x3C9AC0u) { return; }
    }
    ctx->pc = 0x3C9AC0u;
label_3c9ac0:
    // 0x3c9ac0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3c9ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3c9ac4:
    // 0x3c9ac4: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_3c9ac8:
    if (ctx->pc == 0x3C9AC8u) {
        ctx->pc = 0x3C9ACCu;
        goto label_3c9acc;
    }
    ctx->pc = 0x3C9AC4u;
    {
        const bool branch_taken_0x3c9ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9ac4) {
            ctx->pc = 0x3C9BE8u;
            goto label_3c9be8;
        }
    }
    ctx->pc = 0x3C9ACCu;
label_3c9acc:
    // 0x3c9acc: 0xc0d639c  jal         func_358E70
label_3c9ad0:
    if (ctx->pc == 0x3C9AD0u) {
        ctx->pc = 0x3C9AD0u;
            // 0x3c9ad0: 0x26a4006c  addiu       $a0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x3C9AD4u;
        goto label_3c9ad4;
    }
    ctx->pc = 0x3C9ACCu;
    SET_GPR_U32(ctx, 31, 0x3C9AD4u);
    ctx->pc = 0x3C9AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9ACCu;
            // 0x3c9ad0: 0x26a4006c  addiu       $a0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AD4u; }
        if (ctx->pc != 0x3C9AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AD4u; }
        if (ctx->pc != 0x3C9AD4u) { return; }
    }
    ctx->pc = 0x3C9AD4u;
label_3c9ad4:
    // 0x3c9ad4: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_3c9ad8:
    if (ctx->pc == 0x3C9AD8u) {
        ctx->pc = 0x3C9ADCu;
        goto label_3c9adc;
    }
    ctx->pc = 0x3C9AD4u;
    {
        const bool branch_taken_0x3c9ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9ad4) {
            ctx->pc = 0x3C9BE8u;
            goto label_3c9be8;
        }
    }
    ctx->pc = 0x3C9ADCu;
label_3c9adc:
    // 0x3c9adc: 0xc0d1c14  jal         func_347050
label_3c9ae0:
    if (ctx->pc == 0x3C9AE0u) {
        ctx->pc = 0x3C9AE0u;
            // 0x3c9ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9AE4u;
        goto label_3c9ae4;
    }
    ctx->pc = 0x3C9ADCu;
    SET_GPR_U32(ctx, 31, 0x3C9AE4u);
    ctx->pc = 0x3C9AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9ADCu;
            // 0x3c9ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AE4u; }
        if (ctx->pc != 0x3C9AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AE4u; }
        if (ctx->pc != 0x3C9AE4u) { return; }
    }
    ctx->pc = 0x3C9AE4u;
label_3c9ae4:
    // 0x3c9ae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c9ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ae8:
    // 0x3c9ae8: 0xc04f278  jal         func_13C9E0
label_3c9aec:
    if (ctx->pc == 0x3C9AECu) {
        ctx->pc = 0x3C9AECu;
            // 0x3c9aec: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3C9AF0u;
        goto label_3c9af0;
    }
    ctx->pc = 0x3C9AE8u;
    SET_GPR_U32(ctx, 31, 0x3C9AF0u);
    ctx->pc = 0x3C9AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9AE8u;
            // 0x3c9aec: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AF0u; }
        if (ctx->pc != 0x3C9AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AF0u; }
        if (ctx->pc != 0x3C9AF0u) { return; }
    }
    ctx->pc = 0x3C9AF0u;
label_3c9af0:
    // 0x3c9af0: 0xc0d1c10  jal         func_347040
label_3c9af4:
    if (ctx->pc == 0x3C9AF4u) {
        ctx->pc = 0x3C9AF4u;
            // 0x3c9af4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9AF8u;
        goto label_3c9af8;
    }
    ctx->pc = 0x3C9AF0u;
    SET_GPR_U32(ctx, 31, 0x3C9AF8u);
    ctx->pc = 0x3C9AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9AF0u;
            // 0x3c9af4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AF8u; }
        if (ctx->pc != 0x3C9AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9AF8u; }
        if (ctx->pc != 0x3C9AF8u) { return; }
    }
    ctx->pc = 0x3C9AF8u;
label_3c9af8:
    // 0x3c9af8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c9af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9afc:
    // 0x3c9afc: 0xc04ce80  jal         func_133A00
label_3c9b00:
    if (ctx->pc == 0x3C9B00u) {
        ctx->pc = 0x3C9B00u;
            // 0x3c9b00: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3C9B04u;
        goto label_3c9b04;
    }
    ctx->pc = 0x3C9AFCu;
    SET_GPR_U32(ctx, 31, 0x3C9B04u);
    ctx->pc = 0x3C9B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9AFCu;
            // 0x3c9b00: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B04u; }
        if (ctx->pc != 0x3C9B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B04u; }
        if (ctx->pc != 0x3C9B04u) { return; }
    }
    ctx->pc = 0x3C9B04u;
label_3c9b04:
    // 0x3c9b04: 0xc6ac00d4  lwc1        $f12, 0xD4($s5)
    ctx->pc = 0x3c9b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c9b08:
    // 0x3c9b08: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3c9b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c9b0c:
    // 0x3c9b0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c9b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b10:
    // 0x3c9b10: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3c9b10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3c9b14:
    // 0x3c9b14: 0xc04ce50  jal         func_133940
label_3c9b18:
    if (ctx->pc == 0x3C9B18u) {
        ctx->pc = 0x3C9B18u;
            // 0x3c9b18: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3C9B1Cu;
        goto label_3c9b1c;
    }
    ctx->pc = 0x3C9B14u;
    SET_GPR_U32(ctx, 31, 0x3C9B1Cu);
    ctx->pc = 0x3C9B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9B14u;
            // 0x3c9b18: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B1Cu; }
        if (ctx->pc != 0x3C9B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B1Cu; }
        if (ctx->pc != 0x3C9B1Cu) { return; }
    }
    ctx->pc = 0x3C9B1Cu;
label_3c9b1c:
    // 0x3c9b1c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3c9b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c9b20:
    // 0x3c9b20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c9b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b24:
    // 0x3c9b24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c9b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b28:
    // 0x3c9b28: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3c9b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c9b2c:
    // 0x3c9b2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c9b2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c9b30:
    // 0x3c9b30: 0xc0d6334  jal         func_358CD0
label_3c9b34:
    if (ctx->pc == 0x3C9B34u) {
        ctx->pc = 0x3C9B34u;
            // 0x3c9b34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9B38u;
        goto label_3c9b38;
    }
    ctx->pc = 0x3C9B30u;
    SET_GPR_U32(ctx, 31, 0x3C9B38u);
    ctx->pc = 0x3C9B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9B30u;
            // 0x3c9b34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358CD0u;
    if (runtime->hasFunction(0x358CD0u)) {
        auto targetFn = runtime->lookupFunction(0x358CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B38u; }
        if (ctx->pc != 0x3C9B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358CD0_0x358cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B38u; }
        if (ctx->pc != 0x3C9B38u) { return; }
    }
    ctx->pc = 0x3C9B38u;
label_3c9b38:
    // 0x3c9b38: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_3c9b3c:
    if (ctx->pc == 0x3C9B3Cu) {
        ctx->pc = 0x3C9B40u;
        goto label_3c9b40;
    }
    ctx->pc = 0x3C9B38u;
    {
        const bool branch_taken_0x3c9b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9b38) {
            ctx->pc = 0x3C9BE8u;
            goto label_3c9be8;
        }
    }
    ctx->pc = 0x3C9B40u;
label_3c9b40:
    // 0x3c9b40: 0xc6a0014c  lwc1        $f0, 0x14C($s5)
    ctx->pc = 0x3c9b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9b44:
    // 0x3c9b44: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x3c9b44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c9b48:
    // 0x3c9b48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3c9b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c9b4c:
    // 0x3c9b4c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3c9b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b50:
    // 0x3c9b50: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3c9b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b54:
    // 0x3c9b54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c9b54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c9b58:
    // 0x3c9b58: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x3c9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_3c9b5c:
    // 0x3c9b5c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c9b5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c9b60:
    // 0x3c9b60: 0xc04cd60  jal         func_133580
label_3c9b64:
    if (ctx->pc == 0x3C9B64u) {
        ctx->pc = 0x3C9B64u;
            // 0x3c9b64: 0xac4300a8  sw          $v1, 0xA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
        ctx->pc = 0x3C9B68u;
        goto label_3c9b68;
    }
    ctx->pc = 0x3C9B60u;
    SET_GPR_U32(ctx, 31, 0x3C9B68u);
    ctx->pc = 0x3C9B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9B60u;
            // 0x3c9b64: 0xac4300a8  sw          $v1, 0xA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B68u; }
        if (ctx->pc != 0x3C9B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B68u; }
        if (ctx->pc != 0x3C9B68u) { return; }
    }
    ctx->pc = 0x3C9B68u;
label_3c9b68:
    // 0x3c9b68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c9b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9b6c:
    // 0x3c9b6c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3c9b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3c9b70:
    // 0x3c9b70: 0xc0f2714  jal         func_3C9C50
label_3c9b74:
    if (ctx->pc == 0x3C9B74u) {
        ctx->pc = 0x3C9B74u;
            // 0x3c9b74: 0x27a60138  addiu       $a2, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->pc = 0x3C9B78u;
        goto label_3c9b78;
    }
    ctx->pc = 0x3C9B70u;
    SET_GPR_U32(ctx, 31, 0x3C9B78u);
    ctx->pc = 0x3C9B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9B70u;
            // 0x3c9b74: 0x27a60138  addiu       $a2, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C50u;
    if (runtime->hasFunction(0x3C9C50u)) {
        auto targetFn = runtime->lookupFunction(0x3C9C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B78u; }
        if (ctx->pc != 0x3C9B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C9C50_0x3c9c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B78u; }
        if (ctx->pc != 0x3C9B78u) { return; }
    }
    ctx->pc = 0x3C9B78u;
label_3c9b78:
    // 0x3c9b78: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x3c9b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_3c9b7c:
    // 0x3c9b7c: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x3c9b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_3c9b80:
    // 0x3c9b80: 0xc04e4a4  jal         func_139290
label_3c9b84:
    if (ctx->pc == 0x3C9B84u) {
        ctx->pc = 0x3C9B84u;
            // 0x3c9b84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9B88u;
        goto label_3c9b88;
    }
    ctx->pc = 0x3C9B80u;
    SET_GPR_U32(ctx, 31, 0x3C9B88u);
    ctx->pc = 0x3C9B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9B80u;
            // 0x3c9b84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B88u; }
        if (ctx->pc != 0x3C9B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B88u; }
        if (ctx->pc != 0x3C9B88u) { return; }
    }
    ctx->pc = 0x3C9B88u;
label_3c9b88:
    // 0x3c9b88: 0xc6ac0150  lwc1        $f12, 0x150($s5)
    ctx->pc = 0x3c9b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c9b8c:
    // 0x3c9b8c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3c9b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c9b90:
    // 0x3c9b90: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x3c9b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3c9b94:
    // 0x3c9b94: 0xc054bbc  jal         func_152EF0
label_3c9b98:
    if (ctx->pc == 0x3C9B98u) {
        ctx->pc = 0x3C9B98u;
            // 0x3c9b98: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3C9B9Cu;
        goto label_3c9b9c;
    }
    ctx->pc = 0x3C9B94u;
    SET_GPR_U32(ctx, 31, 0x3C9B9Cu);
    ctx->pc = 0x3C9B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9B94u;
            // 0x3c9b98: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B9Cu; }
        if (ctx->pc != 0x3C9B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9B9Cu; }
        if (ctx->pc != 0x3C9B9Cu) { return; }
    }
    ctx->pc = 0x3C9B9Cu;
label_3c9b9c:
    // 0x3c9b9c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3c9b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c9ba0:
    // 0x3c9ba0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3c9ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3c9ba4:
    // 0x3c9ba4: 0x320f809  jalr        $t9
label_3c9ba8:
    if (ctx->pc == 0x3C9BA8u) {
        ctx->pc = 0x3C9BA8u;
            // 0x3c9ba8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9BACu;
        goto label_3c9bac;
    }
    ctx->pc = 0x3C9BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9BACu);
        ctx->pc = 0x3C9BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9BA4u;
            // 0x3c9ba8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C9BACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C9BACu; }
            if (ctx->pc != 0x3C9BACu) { return; }
        }
        }
    }
    ctx->pc = 0x3C9BACu;
label_3c9bac:
    // 0x3c9bac: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x3c9bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3c9bb0:
    // 0x3c9bb0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3c9bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3c9bb4:
    // 0x3c9bb4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x3c9bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_3c9bb8:
    // 0x3c9bb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c9bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c9bbc:
    // 0x3c9bbc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3c9bbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9bc0:
    // 0x3c9bc0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3c9bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c9bc4:
    // 0x3c9bc4: 0xc04cfcc  jal         func_133F30
label_3c9bc8:
    if (ctx->pc == 0x3C9BC8u) {
        ctx->pc = 0x3C9BC8u;
            // 0x3c9bc8: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x3C9BCCu;
        goto label_3c9bcc;
    }
    ctx->pc = 0x3C9BC4u;
    SET_GPR_U32(ctx, 31, 0x3C9BCCu);
    ctx->pc = 0x3C9BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9BC4u;
            // 0x3c9bc8: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9BCCu; }
        if (ctx->pc != 0x3C9BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9BCCu; }
        if (ctx->pc != 0x3C9BCCu) { return; }
    }
    ctx->pc = 0x3C9BCCu;
label_3c9bcc:
    // 0x3c9bcc: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3c9bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c9bd0:
    // 0x3c9bd0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3c9bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3c9bd4:
    // 0x3c9bd4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x3c9bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3c9bd8:
    // 0x3c9bd8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x3c9bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_3c9bdc:
    // 0x3c9bdc: 0xc054c2c  jal         func_1530B0
label_3c9be0:
    if (ctx->pc == 0x3C9BE0u) {
        ctx->pc = 0x3C9BE0u;
            // 0x3c9be0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C9BE4u;
        goto label_3c9be4;
    }
    ctx->pc = 0x3C9BDCu;
    SET_GPR_U32(ctx, 31, 0x3C9BE4u);
    ctx->pc = 0x3C9BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9BDCu;
            // 0x3c9be0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9BE4u; }
        if (ctx->pc != 0x3C9BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9BE4u; }
        if (ctx->pc != 0x3C9BE4u) { return; }
    }
    ctx->pc = 0x3C9BE4u;
label_3c9be4:
    // 0x3c9be4: 0x0  nop
    ctx->pc = 0x3c9be4u;
    // NOP
label_3c9be8:
    // 0x3c9be8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c9be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c9bec:
    // 0x3c9bec: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x3c9becu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3c9bf0:
    // 0x3c9bf0: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
label_3c9bf4:
    if (ctx->pc == 0x3C9BF4u) {
        ctx->pc = 0x3C9BF4u;
            // 0x3c9bf4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x3C9BF8u;
        goto label_3c9bf8;
    }
    ctx->pc = 0x3C9BF0u;
    {
        const bool branch_taken_0x3c9bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9BF0u;
            // 0x3c9bf4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9bf0) {
            ctx->pc = 0x3C9A80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c9a80;
        }
    }
    ctx->pc = 0x3C9BF8u;
label_3c9bf8:
    // 0x3c9bf8: 0x922300a8  lbu         $v1, 0xA8($s1)
    ctx->pc = 0x3c9bf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 168)));
label_3c9bfc:
    // 0x3c9bfc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3c9c00:
    if (ctx->pc == 0x3C9C00u) {
        ctx->pc = 0x3C9C04u;
        goto label_3c9c04;
    }
    ctx->pc = 0x3C9BFCu;
    {
        const bool branch_taken_0x3c9bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9bfc) {
            ctx->pc = 0x3C9C1Cu;
            goto label_3c9c1c;
        }
    }
    ctx->pc = 0x3C9C04u;
label_3c9c04:
    // 0x3c9c04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c9c08:
    // 0x3c9c08: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x3c9c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_3c9c0c:
    // 0x3c9c0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c9c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c9c10:
    // 0x3c9c10: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c9c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c9c14:
    // 0x3c9c14: 0x320f809  jalr        $t9
label_3c9c18:
    if (ctx->pc == 0x3C9C18u) {
        ctx->pc = 0x3C9C1Cu;
        goto label_3c9c1c;
    }
    ctx->pc = 0x3C9C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9C1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C9C1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C9C1Cu; }
            if (ctx->pc != 0x3C9C1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C9C1Cu;
label_3c9c1c:
    // 0x3c9c1c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3c9c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3c9c20:
    // 0x3c9c20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c9c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c9c24:
    // 0x3c9c24: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3c9c24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c9c28:
    // 0x3c9c28: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3c9c28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c9c2c:
    // 0x3c9c2c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c9c2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c9c30:
    // 0x3c9c30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c9c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c9c34:
    // 0x3c9c34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c9c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c9c38:
    // 0x3c9c38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c9c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c9c3c:
    // 0x3c9c3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c9c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9c40:
    // 0x3c9c40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c9c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c9c44:
    // 0x3c9c44: 0x3e00008  jr          $ra
label_3c9c48:
    if (ctx->pc == 0x3C9C48u) {
        ctx->pc = 0x3C9C48u;
            // 0x3c9c48: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x3C9C4Cu;
        goto label_3c9c4c;
    }
    ctx->pc = 0x3C9C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9C44u;
            // 0x3c9c48: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C9C4Cu;
label_3c9c4c:
    // 0x3c9c4c: 0x0  nop
    ctx->pc = 0x3c9c4cu;
    // NOP
}
