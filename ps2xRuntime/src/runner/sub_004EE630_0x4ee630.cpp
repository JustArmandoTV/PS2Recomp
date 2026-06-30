#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EE630
// Address: 0x4ee630 - 0x4ef030
void sub_004EE630_0x4ee630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE630_0x4ee630");
#endif

    switch (ctx->pc) {
        case 0x4ee630u: goto label_4ee630;
        case 0x4ee634u: goto label_4ee634;
        case 0x4ee638u: goto label_4ee638;
        case 0x4ee63cu: goto label_4ee63c;
        case 0x4ee640u: goto label_4ee640;
        case 0x4ee644u: goto label_4ee644;
        case 0x4ee648u: goto label_4ee648;
        case 0x4ee64cu: goto label_4ee64c;
        case 0x4ee650u: goto label_4ee650;
        case 0x4ee654u: goto label_4ee654;
        case 0x4ee658u: goto label_4ee658;
        case 0x4ee65cu: goto label_4ee65c;
        case 0x4ee660u: goto label_4ee660;
        case 0x4ee664u: goto label_4ee664;
        case 0x4ee668u: goto label_4ee668;
        case 0x4ee66cu: goto label_4ee66c;
        case 0x4ee670u: goto label_4ee670;
        case 0x4ee674u: goto label_4ee674;
        case 0x4ee678u: goto label_4ee678;
        case 0x4ee67cu: goto label_4ee67c;
        case 0x4ee680u: goto label_4ee680;
        case 0x4ee684u: goto label_4ee684;
        case 0x4ee688u: goto label_4ee688;
        case 0x4ee68cu: goto label_4ee68c;
        case 0x4ee690u: goto label_4ee690;
        case 0x4ee694u: goto label_4ee694;
        case 0x4ee698u: goto label_4ee698;
        case 0x4ee69cu: goto label_4ee69c;
        case 0x4ee6a0u: goto label_4ee6a0;
        case 0x4ee6a4u: goto label_4ee6a4;
        case 0x4ee6a8u: goto label_4ee6a8;
        case 0x4ee6acu: goto label_4ee6ac;
        case 0x4ee6b0u: goto label_4ee6b0;
        case 0x4ee6b4u: goto label_4ee6b4;
        case 0x4ee6b8u: goto label_4ee6b8;
        case 0x4ee6bcu: goto label_4ee6bc;
        case 0x4ee6c0u: goto label_4ee6c0;
        case 0x4ee6c4u: goto label_4ee6c4;
        case 0x4ee6c8u: goto label_4ee6c8;
        case 0x4ee6ccu: goto label_4ee6cc;
        case 0x4ee6d0u: goto label_4ee6d0;
        case 0x4ee6d4u: goto label_4ee6d4;
        case 0x4ee6d8u: goto label_4ee6d8;
        case 0x4ee6dcu: goto label_4ee6dc;
        case 0x4ee6e0u: goto label_4ee6e0;
        case 0x4ee6e4u: goto label_4ee6e4;
        case 0x4ee6e8u: goto label_4ee6e8;
        case 0x4ee6ecu: goto label_4ee6ec;
        case 0x4ee6f0u: goto label_4ee6f0;
        case 0x4ee6f4u: goto label_4ee6f4;
        case 0x4ee6f8u: goto label_4ee6f8;
        case 0x4ee6fcu: goto label_4ee6fc;
        case 0x4ee700u: goto label_4ee700;
        case 0x4ee704u: goto label_4ee704;
        case 0x4ee708u: goto label_4ee708;
        case 0x4ee70cu: goto label_4ee70c;
        case 0x4ee710u: goto label_4ee710;
        case 0x4ee714u: goto label_4ee714;
        case 0x4ee718u: goto label_4ee718;
        case 0x4ee71cu: goto label_4ee71c;
        case 0x4ee720u: goto label_4ee720;
        case 0x4ee724u: goto label_4ee724;
        case 0x4ee728u: goto label_4ee728;
        case 0x4ee72cu: goto label_4ee72c;
        case 0x4ee730u: goto label_4ee730;
        case 0x4ee734u: goto label_4ee734;
        case 0x4ee738u: goto label_4ee738;
        case 0x4ee73cu: goto label_4ee73c;
        case 0x4ee740u: goto label_4ee740;
        case 0x4ee744u: goto label_4ee744;
        case 0x4ee748u: goto label_4ee748;
        case 0x4ee74cu: goto label_4ee74c;
        case 0x4ee750u: goto label_4ee750;
        case 0x4ee754u: goto label_4ee754;
        case 0x4ee758u: goto label_4ee758;
        case 0x4ee75cu: goto label_4ee75c;
        case 0x4ee760u: goto label_4ee760;
        case 0x4ee764u: goto label_4ee764;
        case 0x4ee768u: goto label_4ee768;
        case 0x4ee76cu: goto label_4ee76c;
        case 0x4ee770u: goto label_4ee770;
        case 0x4ee774u: goto label_4ee774;
        case 0x4ee778u: goto label_4ee778;
        case 0x4ee77cu: goto label_4ee77c;
        case 0x4ee780u: goto label_4ee780;
        case 0x4ee784u: goto label_4ee784;
        case 0x4ee788u: goto label_4ee788;
        case 0x4ee78cu: goto label_4ee78c;
        case 0x4ee790u: goto label_4ee790;
        case 0x4ee794u: goto label_4ee794;
        case 0x4ee798u: goto label_4ee798;
        case 0x4ee79cu: goto label_4ee79c;
        case 0x4ee7a0u: goto label_4ee7a0;
        case 0x4ee7a4u: goto label_4ee7a4;
        case 0x4ee7a8u: goto label_4ee7a8;
        case 0x4ee7acu: goto label_4ee7ac;
        case 0x4ee7b0u: goto label_4ee7b0;
        case 0x4ee7b4u: goto label_4ee7b4;
        case 0x4ee7b8u: goto label_4ee7b8;
        case 0x4ee7bcu: goto label_4ee7bc;
        case 0x4ee7c0u: goto label_4ee7c0;
        case 0x4ee7c4u: goto label_4ee7c4;
        case 0x4ee7c8u: goto label_4ee7c8;
        case 0x4ee7ccu: goto label_4ee7cc;
        case 0x4ee7d0u: goto label_4ee7d0;
        case 0x4ee7d4u: goto label_4ee7d4;
        case 0x4ee7d8u: goto label_4ee7d8;
        case 0x4ee7dcu: goto label_4ee7dc;
        case 0x4ee7e0u: goto label_4ee7e0;
        case 0x4ee7e4u: goto label_4ee7e4;
        case 0x4ee7e8u: goto label_4ee7e8;
        case 0x4ee7ecu: goto label_4ee7ec;
        case 0x4ee7f0u: goto label_4ee7f0;
        case 0x4ee7f4u: goto label_4ee7f4;
        case 0x4ee7f8u: goto label_4ee7f8;
        case 0x4ee7fcu: goto label_4ee7fc;
        case 0x4ee800u: goto label_4ee800;
        case 0x4ee804u: goto label_4ee804;
        case 0x4ee808u: goto label_4ee808;
        case 0x4ee80cu: goto label_4ee80c;
        case 0x4ee810u: goto label_4ee810;
        case 0x4ee814u: goto label_4ee814;
        case 0x4ee818u: goto label_4ee818;
        case 0x4ee81cu: goto label_4ee81c;
        case 0x4ee820u: goto label_4ee820;
        case 0x4ee824u: goto label_4ee824;
        case 0x4ee828u: goto label_4ee828;
        case 0x4ee82cu: goto label_4ee82c;
        case 0x4ee830u: goto label_4ee830;
        case 0x4ee834u: goto label_4ee834;
        case 0x4ee838u: goto label_4ee838;
        case 0x4ee83cu: goto label_4ee83c;
        case 0x4ee840u: goto label_4ee840;
        case 0x4ee844u: goto label_4ee844;
        case 0x4ee848u: goto label_4ee848;
        case 0x4ee84cu: goto label_4ee84c;
        case 0x4ee850u: goto label_4ee850;
        case 0x4ee854u: goto label_4ee854;
        case 0x4ee858u: goto label_4ee858;
        case 0x4ee85cu: goto label_4ee85c;
        case 0x4ee860u: goto label_4ee860;
        case 0x4ee864u: goto label_4ee864;
        case 0x4ee868u: goto label_4ee868;
        case 0x4ee86cu: goto label_4ee86c;
        case 0x4ee870u: goto label_4ee870;
        case 0x4ee874u: goto label_4ee874;
        case 0x4ee878u: goto label_4ee878;
        case 0x4ee87cu: goto label_4ee87c;
        case 0x4ee880u: goto label_4ee880;
        case 0x4ee884u: goto label_4ee884;
        case 0x4ee888u: goto label_4ee888;
        case 0x4ee88cu: goto label_4ee88c;
        case 0x4ee890u: goto label_4ee890;
        case 0x4ee894u: goto label_4ee894;
        case 0x4ee898u: goto label_4ee898;
        case 0x4ee89cu: goto label_4ee89c;
        case 0x4ee8a0u: goto label_4ee8a0;
        case 0x4ee8a4u: goto label_4ee8a4;
        case 0x4ee8a8u: goto label_4ee8a8;
        case 0x4ee8acu: goto label_4ee8ac;
        case 0x4ee8b0u: goto label_4ee8b0;
        case 0x4ee8b4u: goto label_4ee8b4;
        case 0x4ee8b8u: goto label_4ee8b8;
        case 0x4ee8bcu: goto label_4ee8bc;
        case 0x4ee8c0u: goto label_4ee8c0;
        case 0x4ee8c4u: goto label_4ee8c4;
        case 0x4ee8c8u: goto label_4ee8c8;
        case 0x4ee8ccu: goto label_4ee8cc;
        case 0x4ee8d0u: goto label_4ee8d0;
        case 0x4ee8d4u: goto label_4ee8d4;
        case 0x4ee8d8u: goto label_4ee8d8;
        case 0x4ee8dcu: goto label_4ee8dc;
        case 0x4ee8e0u: goto label_4ee8e0;
        case 0x4ee8e4u: goto label_4ee8e4;
        case 0x4ee8e8u: goto label_4ee8e8;
        case 0x4ee8ecu: goto label_4ee8ec;
        case 0x4ee8f0u: goto label_4ee8f0;
        case 0x4ee8f4u: goto label_4ee8f4;
        case 0x4ee8f8u: goto label_4ee8f8;
        case 0x4ee8fcu: goto label_4ee8fc;
        case 0x4ee900u: goto label_4ee900;
        case 0x4ee904u: goto label_4ee904;
        case 0x4ee908u: goto label_4ee908;
        case 0x4ee90cu: goto label_4ee90c;
        case 0x4ee910u: goto label_4ee910;
        case 0x4ee914u: goto label_4ee914;
        case 0x4ee918u: goto label_4ee918;
        case 0x4ee91cu: goto label_4ee91c;
        case 0x4ee920u: goto label_4ee920;
        case 0x4ee924u: goto label_4ee924;
        case 0x4ee928u: goto label_4ee928;
        case 0x4ee92cu: goto label_4ee92c;
        case 0x4ee930u: goto label_4ee930;
        case 0x4ee934u: goto label_4ee934;
        case 0x4ee938u: goto label_4ee938;
        case 0x4ee93cu: goto label_4ee93c;
        case 0x4ee940u: goto label_4ee940;
        case 0x4ee944u: goto label_4ee944;
        case 0x4ee948u: goto label_4ee948;
        case 0x4ee94cu: goto label_4ee94c;
        case 0x4ee950u: goto label_4ee950;
        case 0x4ee954u: goto label_4ee954;
        case 0x4ee958u: goto label_4ee958;
        case 0x4ee95cu: goto label_4ee95c;
        case 0x4ee960u: goto label_4ee960;
        case 0x4ee964u: goto label_4ee964;
        case 0x4ee968u: goto label_4ee968;
        case 0x4ee96cu: goto label_4ee96c;
        case 0x4ee970u: goto label_4ee970;
        case 0x4ee974u: goto label_4ee974;
        case 0x4ee978u: goto label_4ee978;
        case 0x4ee97cu: goto label_4ee97c;
        case 0x4ee980u: goto label_4ee980;
        case 0x4ee984u: goto label_4ee984;
        case 0x4ee988u: goto label_4ee988;
        case 0x4ee98cu: goto label_4ee98c;
        case 0x4ee990u: goto label_4ee990;
        case 0x4ee994u: goto label_4ee994;
        case 0x4ee998u: goto label_4ee998;
        case 0x4ee99cu: goto label_4ee99c;
        case 0x4ee9a0u: goto label_4ee9a0;
        case 0x4ee9a4u: goto label_4ee9a4;
        case 0x4ee9a8u: goto label_4ee9a8;
        case 0x4ee9acu: goto label_4ee9ac;
        case 0x4ee9b0u: goto label_4ee9b0;
        case 0x4ee9b4u: goto label_4ee9b4;
        case 0x4ee9b8u: goto label_4ee9b8;
        case 0x4ee9bcu: goto label_4ee9bc;
        case 0x4ee9c0u: goto label_4ee9c0;
        case 0x4ee9c4u: goto label_4ee9c4;
        case 0x4ee9c8u: goto label_4ee9c8;
        case 0x4ee9ccu: goto label_4ee9cc;
        case 0x4ee9d0u: goto label_4ee9d0;
        case 0x4ee9d4u: goto label_4ee9d4;
        case 0x4ee9d8u: goto label_4ee9d8;
        case 0x4ee9dcu: goto label_4ee9dc;
        case 0x4ee9e0u: goto label_4ee9e0;
        case 0x4ee9e4u: goto label_4ee9e4;
        case 0x4ee9e8u: goto label_4ee9e8;
        case 0x4ee9ecu: goto label_4ee9ec;
        case 0x4ee9f0u: goto label_4ee9f0;
        case 0x4ee9f4u: goto label_4ee9f4;
        case 0x4ee9f8u: goto label_4ee9f8;
        case 0x4ee9fcu: goto label_4ee9fc;
        case 0x4eea00u: goto label_4eea00;
        case 0x4eea04u: goto label_4eea04;
        case 0x4eea08u: goto label_4eea08;
        case 0x4eea0cu: goto label_4eea0c;
        case 0x4eea10u: goto label_4eea10;
        case 0x4eea14u: goto label_4eea14;
        case 0x4eea18u: goto label_4eea18;
        case 0x4eea1cu: goto label_4eea1c;
        case 0x4eea20u: goto label_4eea20;
        case 0x4eea24u: goto label_4eea24;
        case 0x4eea28u: goto label_4eea28;
        case 0x4eea2cu: goto label_4eea2c;
        case 0x4eea30u: goto label_4eea30;
        case 0x4eea34u: goto label_4eea34;
        case 0x4eea38u: goto label_4eea38;
        case 0x4eea3cu: goto label_4eea3c;
        case 0x4eea40u: goto label_4eea40;
        case 0x4eea44u: goto label_4eea44;
        case 0x4eea48u: goto label_4eea48;
        case 0x4eea4cu: goto label_4eea4c;
        case 0x4eea50u: goto label_4eea50;
        case 0x4eea54u: goto label_4eea54;
        case 0x4eea58u: goto label_4eea58;
        case 0x4eea5cu: goto label_4eea5c;
        case 0x4eea60u: goto label_4eea60;
        case 0x4eea64u: goto label_4eea64;
        case 0x4eea68u: goto label_4eea68;
        case 0x4eea6cu: goto label_4eea6c;
        case 0x4eea70u: goto label_4eea70;
        case 0x4eea74u: goto label_4eea74;
        case 0x4eea78u: goto label_4eea78;
        case 0x4eea7cu: goto label_4eea7c;
        case 0x4eea80u: goto label_4eea80;
        case 0x4eea84u: goto label_4eea84;
        case 0x4eea88u: goto label_4eea88;
        case 0x4eea8cu: goto label_4eea8c;
        case 0x4eea90u: goto label_4eea90;
        case 0x4eea94u: goto label_4eea94;
        case 0x4eea98u: goto label_4eea98;
        case 0x4eea9cu: goto label_4eea9c;
        case 0x4eeaa0u: goto label_4eeaa0;
        case 0x4eeaa4u: goto label_4eeaa4;
        case 0x4eeaa8u: goto label_4eeaa8;
        case 0x4eeaacu: goto label_4eeaac;
        case 0x4eeab0u: goto label_4eeab0;
        case 0x4eeab4u: goto label_4eeab4;
        case 0x4eeab8u: goto label_4eeab8;
        case 0x4eeabcu: goto label_4eeabc;
        case 0x4eeac0u: goto label_4eeac0;
        case 0x4eeac4u: goto label_4eeac4;
        case 0x4eeac8u: goto label_4eeac8;
        case 0x4eeaccu: goto label_4eeacc;
        case 0x4eead0u: goto label_4eead0;
        case 0x4eead4u: goto label_4eead4;
        case 0x4eead8u: goto label_4eead8;
        case 0x4eeadcu: goto label_4eeadc;
        case 0x4eeae0u: goto label_4eeae0;
        case 0x4eeae4u: goto label_4eeae4;
        case 0x4eeae8u: goto label_4eeae8;
        case 0x4eeaecu: goto label_4eeaec;
        case 0x4eeaf0u: goto label_4eeaf0;
        case 0x4eeaf4u: goto label_4eeaf4;
        case 0x4eeaf8u: goto label_4eeaf8;
        case 0x4eeafcu: goto label_4eeafc;
        case 0x4eeb00u: goto label_4eeb00;
        case 0x4eeb04u: goto label_4eeb04;
        case 0x4eeb08u: goto label_4eeb08;
        case 0x4eeb0cu: goto label_4eeb0c;
        case 0x4eeb10u: goto label_4eeb10;
        case 0x4eeb14u: goto label_4eeb14;
        case 0x4eeb18u: goto label_4eeb18;
        case 0x4eeb1cu: goto label_4eeb1c;
        case 0x4eeb20u: goto label_4eeb20;
        case 0x4eeb24u: goto label_4eeb24;
        case 0x4eeb28u: goto label_4eeb28;
        case 0x4eeb2cu: goto label_4eeb2c;
        case 0x4eeb30u: goto label_4eeb30;
        case 0x4eeb34u: goto label_4eeb34;
        case 0x4eeb38u: goto label_4eeb38;
        case 0x4eeb3cu: goto label_4eeb3c;
        case 0x4eeb40u: goto label_4eeb40;
        case 0x4eeb44u: goto label_4eeb44;
        case 0x4eeb48u: goto label_4eeb48;
        case 0x4eeb4cu: goto label_4eeb4c;
        case 0x4eeb50u: goto label_4eeb50;
        case 0x4eeb54u: goto label_4eeb54;
        case 0x4eeb58u: goto label_4eeb58;
        case 0x4eeb5cu: goto label_4eeb5c;
        case 0x4eeb60u: goto label_4eeb60;
        case 0x4eeb64u: goto label_4eeb64;
        case 0x4eeb68u: goto label_4eeb68;
        case 0x4eeb6cu: goto label_4eeb6c;
        case 0x4eeb70u: goto label_4eeb70;
        case 0x4eeb74u: goto label_4eeb74;
        case 0x4eeb78u: goto label_4eeb78;
        case 0x4eeb7cu: goto label_4eeb7c;
        case 0x4eeb80u: goto label_4eeb80;
        case 0x4eeb84u: goto label_4eeb84;
        case 0x4eeb88u: goto label_4eeb88;
        case 0x4eeb8cu: goto label_4eeb8c;
        case 0x4eeb90u: goto label_4eeb90;
        case 0x4eeb94u: goto label_4eeb94;
        case 0x4eeb98u: goto label_4eeb98;
        case 0x4eeb9cu: goto label_4eeb9c;
        case 0x4eeba0u: goto label_4eeba0;
        case 0x4eeba4u: goto label_4eeba4;
        case 0x4eeba8u: goto label_4eeba8;
        case 0x4eebacu: goto label_4eebac;
        case 0x4eebb0u: goto label_4eebb0;
        case 0x4eebb4u: goto label_4eebb4;
        case 0x4eebb8u: goto label_4eebb8;
        case 0x4eebbcu: goto label_4eebbc;
        case 0x4eebc0u: goto label_4eebc0;
        case 0x4eebc4u: goto label_4eebc4;
        case 0x4eebc8u: goto label_4eebc8;
        case 0x4eebccu: goto label_4eebcc;
        case 0x4eebd0u: goto label_4eebd0;
        case 0x4eebd4u: goto label_4eebd4;
        case 0x4eebd8u: goto label_4eebd8;
        case 0x4eebdcu: goto label_4eebdc;
        case 0x4eebe0u: goto label_4eebe0;
        case 0x4eebe4u: goto label_4eebe4;
        case 0x4eebe8u: goto label_4eebe8;
        case 0x4eebecu: goto label_4eebec;
        case 0x4eebf0u: goto label_4eebf0;
        case 0x4eebf4u: goto label_4eebf4;
        case 0x4eebf8u: goto label_4eebf8;
        case 0x4eebfcu: goto label_4eebfc;
        case 0x4eec00u: goto label_4eec00;
        case 0x4eec04u: goto label_4eec04;
        case 0x4eec08u: goto label_4eec08;
        case 0x4eec0cu: goto label_4eec0c;
        case 0x4eec10u: goto label_4eec10;
        case 0x4eec14u: goto label_4eec14;
        case 0x4eec18u: goto label_4eec18;
        case 0x4eec1cu: goto label_4eec1c;
        case 0x4eec20u: goto label_4eec20;
        case 0x4eec24u: goto label_4eec24;
        case 0x4eec28u: goto label_4eec28;
        case 0x4eec2cu: goto label_4eec2c;
        case 0x4eec30u: goto label_4eec30;
        case 0x4eec34u: goto label_4eec34;
        case 0x4eec38u: goto label_4eec38;
        case 0x4eec3cu: goto label_4eec3c;
        case 0x4eec40u: goto label_4eec40;
        case 0x4eec44u: goto label_4eec44;
        case 0x4eec48u: goto label_4eec48;
        case 0x4eec4cu: goto label_4eec4c;
        case 0x4eec50u: goto label_4eec50;
        case 0x4eec54u: goto label_4eec54;
        case 0x4eec58u: goto label_4eec58;
        case 0x4eec5cu: goto label_4eec5c;
        case 0x4eec60u: goto label_4eec60;
        case 0x4eec64u: goto label_4eec64;
        case 0x4eec68u: goto label_4eec68;
        case 0x4eec6cu: goto label_4eec6c;
        case 0x4eec70u: goto label_4eec70;
        case 0x4eec74u: goto label_4eec74;
        case 0x4eec78u: goto label_4eec78;
        case 0x4eec7cu: goto label_4eec7c;
        case 0x4eec80u: goto label_4eec80;
        case 0x4eec84u: goto label_4eec84;
        case 0x4eec88u: goto label_4eec88;
        case 0x4eec8cu: goto label_4eec8c;
        case 0x4eec90u: goto label_4eec90;
        case 0x4eec94u: goto label_4eec94;
        case 0x4eec98u: goto label_4eec98;
        case 0x4eec9cu: goto label_4eec9c;
        case 0x4eeca0u: goto label_4eeca0;
        case 0x4eeca4u: goto label_4eeca4;
        case 0x4eeca8u: goto label_4eeca8;
        case 0x4eecacu: goto label_4eecac;
        case 0x4eecb0u: goto label_4eecb0;
        case 0x4eecb4u: goto label_4eecb4;
        case 0x4eecb8u: goto label_4eecb8;
        case 0x4eecbcu: goto label_4eecbc;
        case 0x4eecc0u: goto label_4eecc0;
        case 0x4eecc4u: goto label_4eecc4;
        case 0x4eecc8u: goto label_4eecc8;
        case 0x4eecccu: goto label_4eeccc;
        case 0x4eecd0u: goto label_4eecd0;
        case 0x4eecd4u: goto label_4eecd4;
        case 0x4eecd8u: goto label_4eecd8;
        case 0x4eecdcu: goto label_4eecdc;
        case 0x4eece0u: goto label_4eece0;
        case 0x4eece4u: goto label_4eece4;
        case 0x4eece8u: goto label_4eece8;
        case 0x4eececu: goto label_4eecec;
        case 0x4eecf0u: goto label_4eecf0;
        case 0x4eecf4u: goto label_4eecf4;
        case 0x4eecf8u: goto label_4eecf8;
        case 0x4eecfcu: goto label_4eecfc;
        case 0x4eed00u: goto label_4eed00;
        case 0x4eed04u: goto label_4eed04;
        case 0x4eed08u: goto label_4eed08;
        case 0x4eed0cu: goto label_4eed0c;
        case 0x4eed10u: goto label_4eed10;
        case 0x4eed14u: goto label_4eed14;
        case 0x4eed18u: goto label_4eed18;
        case 0x4eed1cu: goto label_4eed1c;
        case 0x4eed20u: goto label_4eed20;
        case 0x4eed24u: goto label_4eed24;
        case 0x4eed28u: goto label_4eed28;
        case 0x4eed2cu: goto label_4eed2c;
        case 0x4eed30u: goto label_4eed30;
        case 0x4eed34u: goto label_4eed34;
        case 0x4eed38u: goto label_4eed38;
        case 0x4eed3cu: goto label_4eed3c;
        case 0x4eed40u: goto label_4eed40;
        case 0x4eed44u: goto label_4eed44;
        case 0x4eed48u: goto label_4eed48;
        case 0x4eed4cu: goto label_4eed4c;
        case 0x4eed50u: goto label_4eed50;
        case 0x4eed54u: goto label_4eed54;
        case 0x4eed58u: goto label_4eed58;
        case 0x4eed5cu: goto label_4eed5c;
        case 0x4eed60u: goto label_4eed60;
        case 0x4eed64u: goto label_4eed64;
        case 0x4eed68u: goto label_4eed68;
        case 0x4eed6cu: goto label_4eed6c;
        case 0x4eed70u: goto label_4eed70;
        case 0x4eed74u: goto label_4eed74;
        case 0x4eed78u: goto label_4eed78;
        case 0x4eed7cu: goto label_4eed7c;
        case 0x4eed80u: goto label_4eed80;
        case 0x4eed84u: goto label_4eed84;
        case 0x4eed88u: goto label_4eed88;
        case 0x4eed8cu: goto label_4eed8c;
        case 0x4eed90u: goto label_4eed90;
        case 0x4eed94u: goto label_4eed94;
        case 0x4eed98u: goto label_4eed98;
        case 0x4eed9cu: goto label_4eed9c;
        case 0x4eeda0u: goto label_4eeda0;
        case 0x4eeda4u: goto label_4eeda4;
        case 0x4eeda8u: goto label_4eeda8;
        case 0x4eedacu: goto label_4eedac;
        case 0x4eedb0u: goto label_4eedb0;
        case 0x4eedb4u: goto label_4eedb4;
        case 0x4eedb8u: goto label_4eedb8;
        case 0x4eedbcu: goto label_4eedbc;
        case 0x4eedc0u: goto label_4eedc0;
        case 0x4eedc4u: goto label_4eedc4;
        case 0x4eedc8u: goto label_4eedc8;
        case 0x4eedccu: goto label_4eedcc;
        case 0x4eedd0u: goto label_4eedd0;
        case 0x4eedd4u: goto label_4eedd4;
        case 0x4eedd8u: goto label_4eedd8;
        case 0x4eeddcu: goto label_4eeddc;
        case 0x4eede0u: goto label_4eede0;
        case 0x4eede4u: goto label_4eede4;
        case 0x4eede8u: goto label_4eede8;
        case 0x4eedecu: goto label_4eedec;
        case 0x4eedf0u: goto label_4eedf0;
        case 0x4eedf4u: goto label_4eedf4;
        case 0x4eedf8u: goto label_4eedf8;
        case 0x4eedfcu: goto label_4eedfc;
        case 0x4eee00u: goto label_4eee00;
        case 0x4eee04u: goto label_4eee04;
        case 0x4eee08u: goto label_4eee08;
        case 0x4eee0cu: goto label_4eee0c;
        case 0x4eee10u: goto label_4eee10;
        case 0x4eee14u: goto label_4eee14;
        case 0x4eee18u: goto label_4eee18;
        case 0x4eee1cu: goto label_4eee1c;
        case 0x4eee20u: goto label_4eee20;
        case 0x4eee24u: goto label_4eee24;
        case 0x4eee28u: goto label_4eee28;
        case 0x4eee2cu: goto label_4eee2c;
        case 0x4eee30u: goto label_4eee30;
        case 0x4eee34u: goto label_4eee34;
        case 0x4eee38u: goto label_4eee38;
        case 0x4eee3cu: goto label_4eee3c;
        case 0x4eee40u: goto label_4eee40;
        case 0x4eee44u: goto label_4eee44;
        case 0x4eee48u: goto label_4eee48;
        case 0x4eee4cu: goto label_4eee4c;
        case 0x4eee50u: goto label_4eee50;
        case 0x4eee54u: goto label_4eee54;
        case 0x4eee58u: goto label_4eee58;
        case 0x4eee5cu: goto label_4eee5c;
        case 0x4eee60u: goto label_4eee60;
        case 0x4eee64u: goto label_4eee64;
        case 0x4eee68u: goto label_4eee68;
        case 0x4eee6cu: goto label_4eee6c;
        case 0x4eee70u: goto label_4eee70;
        case 0x4eee74u: goto label_4eee74;
        case 0x4eee78u: goto label_4eee78;
        case 0x4eee7cu: goto label_4eee7c;
        case 0x4eee80u: goto label_4eee80;
        case 0x4eee84u: goto label_4eee84;
        case 0x4eee88u: goto label_4eee88;
        case 0x4eee8cu: goto label_4eee8c;
        case 0x4eee90u: goto label_4eee90;
        case 0x4eee94u: goto label_4eee94;
        case 0x4eee98u: goto label_4eee98;
        case 0x4eee9cu: goto label_4eee9c;
        case 0x4eeea0u: goto label_4eeea0;
        case 0x4eeea4u: goto label_4eeea4;
        case 0x4eeea8u: goto label_4eeea8;
        case 0x4eeeacu: goto label_4eeeac;
        case 0x4eeeb0u: goto label_4eeeb0;
        case 0x4eeeb4u: goto label_4eeeb4;
        case 0x4eeeb8u: goto label_4eeeb8;
        case 0x4eeebcu: goto label_4eeebc;
        case 0x4eeec0u: goto label_4eeec0;
        case 0x4eeec4u: goto label_4eeec4;
        case 0x4eeec8u: goto label_4eeec8;
        case 0x4eeeccu: goto label_4eeecc;
        case 0x4eeed0u: goto label_4eeed0;
        case 0x4eeed4u: goto label_4eeed4;
        case 0x4eeed8u: goto label_4eeed8;
        case 0x4eeedcu: goto label_4eeedc;
        case 0x4eeee0u: goto label_4eeee0;
        case 0x4eeee4u: goto label_4eeee4;
        case 0x4eeee8u: goto label_4eeee8;
        case 0x4eeeecu: goto label_4eeeec;
        case 0x4eeef0u: goto label_4eeef0;
        case 0x4eeef4u: goto label_4eeef4;
        case 0x4eeef8u: goto label_4eeef8;
        case 0x4eeefcu: goto label_4eeefc;
        case 0x4eef00u: goto label_4eef00;
        case 0x4eef04u: goto label_4eef04;
        case 0x4eef08u: goto label_4eef08;
        case 0x4eef0cu: goto label_4eef0c;
        case 0x4eef10u: goto label_4eef10;
        case 0x4eef14u: goto label_4eef14;
        case 0x4eef18u: goto label_4eef18;
        case 0x4eef1cu: goto label_4eef1c;
        case 0x4eef20u: goto label_4eef20;
        case 0x4eef24u: goto label_4eef24;
        case 0x4eef28u: goto label_4eef28;
        case 0x4eef2cu: goto label_4eef2c;
        case 0x4eef30u: goto label_4eef30;
        case 0x4eef34u: goto label_4eef34;
        case 0x4eef38u: goto label_4eef38;
        case 0x4eef3cu: goto label_4eef3c;
        case 0x4eef40u: goto label_4eef40;
        case 0x4eef44u: goto label_4eef44;
        case 0x4eef48u: goto label_4eef48;
        case 0x4eef4cu: goto label_4eef4c;
        case 0x4eef50u: goto label_4eef50;
        case 0x4eef54u: goto label_4eef54;
        case 0x4eef58u: goto label_4eef58;
        case 0x4eef5cu: goto label_4eef5c;
        case 0x4eef60u: goto label_4eef60;
        case 0x4eef64u: goto label_4eef64;
        case 0x4eef68u: goto label_4eef68;
        case 0x4eef6cu: goto label_4eef6c;
        case 0x4eef70u: goto label_4eef70;
        case 0x4eef74u: goto label_4eef74;
        case 0x4eef78u: goto label_4eef78;
        case 0x4eef7cu: goto label_4eef7c;
        case 0x4eef80u: goto label_4eef80;
        case 0x4eef84u: goto label_4eef84;
        case 0x4eef88u: goto label_4eef88;
        case 0x4eef8cu: goto label_4eef8c;
        case 0x4eef90u: goto label_4eef90;
        case 0x4eef94u: goto label_4eef94;
        case 0x4eef98u: goto label_4eef98;
        case 0x4eef9cu: goto label_4eef9c;
        case 0x4eefa0u: goto label_4eefa0;
        case 0x4eefa4u: goto label_4eefa4;
        case 0x4eefa8u: goto label_4eefa8;
        case 0x4eefacu: goto label_4eefac;
        case 0x4eefb0u: goto label_4eefb0;
        case 0x4eefb4u: goto label_4eefb4;
        case 0x4eefb8u: goto label_4eefb8;
        case 0x4eefbcu: goto label_4eefbc;
        case 0x4eefc0u: goto label_4eefc0;
        case 0x4eefc4u: goto label_4eefc4;
        case 0x4eefc8u: goto label_4eefc8;
        case 0x4eefccu: goto label_4eefcc;
        case 0x4eefd0u: goto label_4eefd0;
        case 0x4eefd4u: goto label_4eefd4;
        case 0x4eefd8u: goto label_4eefd8;
        case 0x4eefdcu: goto label_4eefdc;
        case 0x4eefe0u: goto label_4eefe0;
        case 0x4eefe4u: goto label_4eefe4;
        case 0x4eefe8u: goto label_4eefe8;
        case 0x4eefecu: goto label_4eefec;
        case 0x4eeff0u: goto label_4eeff0;
        case 0x4eeff4u: goto label_4eeff4;
        case 0x4eeff8u: goto label_4eeff8;
        case 0x4eeffcu: goto label_4eeffc;
        case 0x4ef000u: goto label_4ef000;
        case 0x4ef004u: goto label_4ef004;
        case 0x4ef008u: goto label_4ef008;
        case 0x4ef00cu: goto label_4ef00c;
        case 0x4ef010u: goto label_4ef010;
        case 0x4ef014u: goto label_4ef014;
        case 0x4ef018u: goto label_4ef018;
        case 0x4ef01cu: goto label_4ef01c;
        case 0x4ef020u: goto label_4ef020;
        case 0x4ef024u: goto label_4ef024;
        case 0x4ef028u: goto label_4ef028;
        case 0x4ef02cu: goto label_4ef02c;
        default: break;
    }

    ctx->pc = 0x4ee630u;

label_4ee630:
    // 0x4ee630: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4ee630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4ee634:
    // 0x4ee634: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4ee634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4ee638:
    // 0x4ee638: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4ee638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4ee63c:
    // 0x4ee63c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4ee63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4ee640:
    // 0x4ee640: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x4ee640u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee644:
    // 0x4ee644: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4ee644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4ee648:
    // 0x4ee648: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4ee648u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee64c:
    // 0x4ee64c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4ee64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4ee650:
    // 0x4ee650: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ee650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ee654:
    // 0x4ee654: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4ee654u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ee658:
    // 0x4ee658: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ee658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ee65c:
    // 0x4ee65c: 0x26a40838  addiu       $a0, $s5, 0x838
    ctx->pc = 0x4ee65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2104));
label_4ee660:
    // 0x4ee660: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ee660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ee664:
    // 0x4ee664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ee664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ee668:
    // 0x4ee668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ee668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ee66c:
    // 0x4ee66c: 0xc0bc6ec  jal         func_2F1BB0
label_4ee670:
    if (ctx->pc == 0x4EE670u) {
        ctx->pc = 0x4EE670u;
            // 0x4ee670: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x4EE674u;
        goto label_4ee674;
    }
    ctx->pc = 0x4EE66Cu;
    SET_GPR_U32(ctx, 31, 0x4EE674u);
    ctx->pc = 0x4EE670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE66Cu;
            // 0x4ee670: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BB0u;
    if (runtime->hasFunction(0x2F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE674u; }
        if (ctx->pc != 0x4EE674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BB0_0x2f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE674u; }
        if (ctx->pc != 0x4EE674u) { return; }
    }
    ctx->pc = 0x4EE674u;
label_4ee674:
    // 0x4ee674: 0x8ea3077c  lw          $v1, 0x77C($s5)
    ctx->pc = 0x4ee674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_4ee678:
    // 0x4ee678: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x4ee678u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_4ee67c:
    // 0x4ee67c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4ee67cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee680:
    // 0x4ee680: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ee680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee684:
    // 0x4ee684: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x4ee684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_4ee688:
    // 0x4ee688: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x4ee688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_4ee68c:
    // 0x4ee68c: 0x8ea30cbc  lw          $v1, 0xCBC($s5)
    ctx->pc = 0x4ee68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3260)));
label_4ee690:
    // 0x4ee690: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4ee690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4ee694:
    // 0x4ee694: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4ee694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4ee698:
    // 0x4ee698: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
label_4ee69c:
    if (ctx->pc == 0x4EE69Cu) {
        ctx->pc = 0x4EE6A0u;
        goto label_4ee6a0;
    }
    ctx->pc = 0x4EE698u;
    {
        const bool branch_taken_0x4ee698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee698) {
            ctx->pc = 0x4EE790u;
            goto label_4ee790;
        }
    }
    ctx->pc = 0x4EE6A0u;
label_4ee6a0:
    // 0x4ee6a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ee6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ee6a4:
    // 0x4ee6a4: 0x263b004  sllv        $s6, $v1, $s3
    ctx->pc = 0x4ee6a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
label_4ee6a8:
    // 0x4ee6a8: 0x8ea30ccc  lw          $v1, 0xCCC($s5)
    ctx->pc = 0x4ee6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3276)));
label_4ee6ac:
    // 0x4ee6ac: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x4ee6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
label_4ee6b0:
    // 0x4ee6b0: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
label_4ee6b4:
    if (ctx->pc == 0x4EE6B4u) {
        ctx->pc = 0x4EE6B4u;
            // 0x4ee6b4: 0x8e340004  lw          $s4, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x4EE6B8u;
        goto label_4ee6b8;
    }
    ctx->pc = 0x4EE6B0u;
    {
        const bool branch_taken_0x4ee6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE6B0u;
            // 0x4ee6b4: 0x8e340004  lw          $s4, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee6b0) {
            ctx->pc = 0x4EE740u;
            goto label_4ee740;
        }
    }
    ctx->pc = 0x4EE6B8u;
label_4ee6b8:
    // 0x4ee6b8: 0xa28011a1  sb          $zero, 0x11A1($s4)
    ctx->pc = 0x4ee6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4513), (uint8_t)GPR_U32(ctx, 0));
label_4ee6bc:
    // 0x4ee6bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ee6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee6c0:
    // 0x4ee6c0: 0x8e900d74  lw          $s0, 0xD74($s4)
    ctx->pc = 0x4ee6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
label_4ee6c4:
    // 0x4ee6c4: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x4ee6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
label_4ee6c8:
    // 0x4ee6c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4ee6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4ee6cc:
    // 0x4ee6cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4ee6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4ee6d0:
    // 0x4ee6d0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x4ee6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4ee6d4:
    // 0x4ee6d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ee6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ee6d8:
    // 0x4ee6d8: 0xc0a545c  jal         func_295170
label_4ee6dc:
    if (ctx->pc == 0x4EE6DCu) {
        ctx->pc = 0x4EE6DCu;
            // 0x4ee6dc: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->pc = 0x4EE6E0u;
        goto label_4ee6e0;
    }
    ctx->pc = 0x4EE6D8u;
    SET_GPR_U32(ctx, 31, 0x4EE6E0u);
    ctx->pc = 0x4EE6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE6D8u;
            // 0x4ee6dc: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE6E0u; }
        if (ctx->pc != 0x4EE6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE6E0u; }
        if (ctx->pc != 0x4EE6E0u) { return; }
    }
    ctx->pc = 0x4EE6E0u;
label_4ee6e0:
    // 0x4ee6e0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x4ee6e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4ee6e4:
    // 0x4ee6e4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x4ee6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_4ee6e8:
    // 0x4ee6e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ee6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ee6ec:
    // 0x4ee6ec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4ee6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4ee6f0:
    // 0x4ee6f0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4ee6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4ee6f4:
    // 0x4ee6f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4ee6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4ee6f8:
    // 0x4ee6f8: 0xc08bf20  jal         func_22FC80
label_4ee6fc:
    if (ctx->pc == 0x4EE6FCu) {
        ctx->pc = 0x4EE6FCu;
            // 0x4ee6fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE700u;
        goto label_4ee700;
    }
    ctx->pc = 0x4EE6F8u;
    SET_GPR_U32(ctx, 31, 0x4EE700u);
    ctx->pc = 0x4EE6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE6F8u;
            // 0x4ee6fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE700u; }
        if (ctx->pc != 0x4EE700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE700u; }
        if (ctx->pc != 0x4EE700u) { return; }
    }
    ctx->pc = 0x4EE700u;
label_4ee700:
    // 0x4ee700: 0xae800db8  sw          $zero, 0xDB8($s4)
    ctx->pc = 0x4ee700u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3512), GPR_U32(ctx, 0));
label_4ee704:
    // 0x4ee704: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4ee704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ee708:
    // 0x4ee708: 0x8e830d60  lw          $v1, 0xD60($s4)
    ctx->pc = 0x4ee708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
label_4ee70c:
    // 0x4ee70c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ee70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ee710:
    // 0x4ee710: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4ee710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4ee714:
    // 0x4ee714: 0x8e850d98  lw          $a1, 0xD98($s4)
    ctx->pc = 0x4ee714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3480)));
label_4ee718:
    // 0x4ee718: 0xc1443f8  jal         func_510FE0
label_4ee71c:
    if (ctx->pc == 0x4EE71Cu) {
        ctx->pc = 0x4EE71Cu;
            // 0x4ee71c: 0x8c440cc8  lw          $a0, 0xCC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
        ctx->pc = 0x4EE720u;
        goto label_4ee720;
    }
    ctx->pc = 0x4EE718u;
    SET_GPR_U32(ctx, 31, 0x4EE720u);
    ctx->pc = 0x4EE71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE718u;
            // 0x4ee71c: 0x8c440cc8  lw          $a0, 0xCC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510FE0u;
    if (runtime->hasFunction(0x510FE0u)) {
        auto targetFn = runtime->lookupFunction(0x510FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE720u; }
        if (ctx->pc != 0x4EE720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510FE0_0x510fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE720u; }
        if (ctx->pc != 0x4EE720u) { return; }
    }
    ctx->pc = 0x4EE720u;
label_4ee720:
    // 0x4ee720: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ee720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ee724:
    // 0x4ee724: 0x8c443fe8  lw          $a0, 0x3FE8($v0)
    ctx->pc = 0x4ee724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
label_4ee728:
    // 0x4ee728: 0xc14b7d4  jal         func_52DF50
label_4ee72c:
    if (ctx->pc == 0x4EE72Cu) {
        ctx->pc = 0x4EE72Cu;
            // 0x4ee72c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE730u;
        goto label_4ee730;
    }
    ctx->pc = 0x4EE728u;
    SET_GPR_U32(ctx, 31, 0x4EE730u);
    ctx->pc = 0x4EE72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE728u;
            // 0x4ee72c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52DF50u;
    if (runtime->hasFunction(0x52DF50u)) {
        auto targetFn = runtime->lookupFunction(0x52DF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE730u; }
        if (ctx->pc != 0x4EE730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052DF50_0x52df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE730u; }
        if (ctx->pc != 0x4EE730u) { return; }
    }
    ctx->pc = 0x4EE730u;
label_4ee730:
    // 0x4ee730: 0x8ea30ccc  lw          $v1, 0xCCC($s5)
    ctx->pc = 0x4ee730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3276)));
label_4ee734:
    // 0x4ee734: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x4ee734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
label_4ee738:
    // 0x4ee738: 0xaea30ccc  sw          $v1, 0xCCC($s5)
    ctx->pc = 0x4ee738u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3276), GPR_U32(ctx, 3));
label_4ee73c:
    // 0x4ee73c: 0x0  nop
    ctx->pc = 0x4ee73cu;
    // NOP
label_4ee740:
    // 0x4ee740: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x4ee740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_4ee744:
    // 0x4ee744: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4ee744u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4ee748:
    // 0x4ee748: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4ee74c:
    if (ctx->pc == 0x4EE74Cu) {
        ctx->pc = 0x4EE74Cu;
            // 0x4ee74c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE750u;
        goto label_4ee750;
    }
    ctx->pc = 0x4EE748u;
    {
        const bool branch_taken_0x4ee748 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4EE74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE748u;
            // 0x4ee74c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee748) {
            ctx->pc = 0x4EE760u;
            goto label_4ee760;
        }
    }
    ctx->pc = 0x4EE750u;
label_4ee750:
    // 0x4ee750: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4ee750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4ee754:
    // 0x4ee754: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ee758:
    if (ctx->pc == 0x4EE758u) {
        ctx->pc = 0x4EE75Cu;
        goto label_4ee75c;
    }
    ctx->pc = 0x4EE754u;
    {
        const bool branch_taken_0x4ee754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee754) {
            ctx->pc = 0x4EE760u;
            goto label_4ee760;
        }
    }
    ctx->pc = 0x4EE75Cu;
label_4ee75c:
    // 0x4ee75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ee760:
    // 0x4ee760: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_4ee764:
    if (ctx->pc == 0x4EE764u) {
        ctx->pc = 0x4EE768u;
        goto label_4ee768;
    }
    ctx->pc = 0x4EE760u;
    {
        const bool branch_taken_0x4ee760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee760) {
            ctx->pc = 0x4EE780u;
            goto label_4ee780;
        }
    }
    ctx->pc = 0x4EE768u;
label_4ee768:
    // 0x4ee768: 0xc075eb4  jal         func_1D7AD0
label_4ee76c:
    if (ctx->pc == 0x4EE76Cu) {
        ctx->pc = 0x4EE76Cu;
            // 0x4ee76c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE770u;
        goto label_4ee770;
    }
    ctx->pc = 0x4EE768u;
    SET_GPR_U32(ctx, 31, 0x4EE770u);
    ctx->pc = 0x4EE76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE768u;
            // 0x4ee76c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE770u; }
        if (ctx->pc != 0x4EE770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE770u; }
        if (ctx->pc != 0x4EE770u) { return; }
    }
    ctx->pc = 0x4EE770u;
label_4ee770:
    // 0x4ee770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4ee774:
    if (ctx->pc == 0x4EE774u) {
        ctx->pc = 0x4EE778u;
        goto label_4ee778;
    }
    ctx->pc = 0x4EE770u;
    {
        const bool branch_taken_0x4ee770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee770) {
            ctx->pc = 0x4EE780u;
            goto label_4ee780;
        }
    }
    ctx->pc = 0x4EE778u;
label_4ee778:
    // 0x4ee778: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4ee778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee77c:
    // 0x4ee77c: 0x0  nop
    ctx->pc = 0x4ee77cu;
    // NOP
label_4ee780:
    // 0x4ee780: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x4ee780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4ee784:
    // 0x4ee784: 0x10000004  b           . + 4 + (0x4 << 2)
label_4ee788:
    if (ctx->pc == 0x4EE788u) {
        ctx->pc = 0x4EE788u;
            // 0x4ee788: 0x3c3f021  addu        $fp, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->pc = 0x4EE78Cu;
        goto label_4ee78c;
    }
    ctx->pc = 0x4EE784u;
    {
        const bool branch_taken_0x4ee784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE784u;
            // 0x4ee788: 0x3c3f021  addu        $fp, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee784) {
            ctx->pc = 0x4EE798u;
            goto label_4ee798;
        }
    }
    ctx->pc = 0x4EE78Cu;
label_4ee78c:
    // 0x4ee78c: 0x0  nop
    ctx->pc = 0x4ee78cu;
    // NOP
label_4ee790:
    // 0x4ee790: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x4ee790u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4ee794:
    // 0x4ee794: 0xafb300cc  sw          $s3, 0xCC($sp)
    ctx->pc = 0x4ee794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 19));
label_4ee798:
    // 0x4ee798: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x4ee798u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4ee79c:
    // 0x4ee79c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4ee79cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4ee7a0:
    // 0x4ee7a0: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x4ee7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_4ee7a4:
    // 0x4ee7a4: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x4ee7a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4ee7a8:
    // 0x4ee7a8: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_4ee7ac:
    if (ctx->pc == 0x4EE7ACu) {
        ctx->pc = 0x4EE7ACu;
            // 0x4ee7ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4EE7B0u;
        goto label_4ee7b0;
    }
    ctx->pc = 0x4EE7A8u;
    {
        const bool branch_taken_0x4ee7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE7A8u;
            // 0x4ee7ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee7a8) {
            ctx->pc = 0x4EE68Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ee68c;
        }
    }
    ctx->pc = 0x4EE7B0u;
label_4ee7b0:
    // 0x4ee7b0: 0x2ae10002  slti        $at, $s7, 0x2
    ctx->pc = 0x4ee7b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_4ee7b4:
    // 0x4ee7b4: 0x5020001f  beql        $at, $zero, . + 4 + (0x1F << 2)
label_4ee7b8:
    if (ctx->pc == 0x4EE7B8u) {
        ctx->pc = 0x4EE7B8u;
            // 0x4ee7b8: 0x8ea30780  lw          $v1, 0x780($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
        ctx->pc = 0x4EE7BCu;
        goto label_4ee7bc;
    }
    ctx->pc = 0x4EE7B4u;
    {
        const bool branch_taken_0x4ee7b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee7b4) {
            ctx->pc = 0x4EE7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE7B4u;
            // 0x4ee7b8: 0x8ea30780  lw          $v1, 0x780($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE834u;
            goto label_4ee834;
        }
    }
    ctx->pc = 0x4EE7BCu;
label_4ee7bc:
    // 0x4ee7bc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x4ee7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_4ee7c0:
    // 0x4ee7c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4ee7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ee7c4:
    // 0x4ee7c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ee7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ee7c8:
    // 0x4ee7c8: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x4ee7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4ee7cc:
    // 0x4ee7cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4ee7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ee7d0:
    // 0x4ee7d0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x4ee7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ee7d4:
    // 0x4ee7d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4ee7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4ee7d8:
    // 0x4ee7d8: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x4ee7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_4ee7dc:
    // 0x4ee7dc: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x4ee7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_4ee7e0:
    // 0x4ee7e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4ee7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4ee7e4:
    // 0x4ee7e4: 0xc0a545c  jal         func_295170
label_4ee7e8:
    if (ctx->pc == 0x4EE7E8u) {
        ctx->pc = 0x4EE7E8u;
            // 0x4ee7e8: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4EE7ECu;
        goto label_4ee7ec;
    }
    ctx->pc = 0x4EE7E4u;
    SET_GPR_U32(ctx, 31, 0x4EE7ECu);
    ctx->pc = 0x4EE7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE7E4u;
            // 0x4ee7e8: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE7ECu; }
        if (ctx->pc != 0x4EE7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE7ECu; }
        if (ctx->pc != 0x4EE7ECu) { return; }
    }
    ctx->pc = 0x4EE7ECu;
label_4ee7ec:
    // 0x4ee7ec: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x4ee7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_4ee7f0:
    // 0x4ee7f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ee7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ee7f4:
    // 0x4ee7f4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4ee7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4ee7f8:
    // 0x4ee7f8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4ee7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4ee7fc:
    // 0x4ee7fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4ee7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4ee800:
    // 0x4ee800: 0xc08bf20  jal         func_22FC80
label_4ee804:
    if (ctx->pc == 0x4EE804u) {
        ctx->pc = 0x4EE804u;
            // 0x4ee804: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE808u;
        goto label_4ee808;
    }
    ctx->pc = 0x4EE800u;
    SET_GPR_U32(ctx, 31, 0x4EE808u);
    ctx->pc = 0x4EE804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE800u;
            // 0x4ee804: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE808u; }
        if (ctx->pc != 0x4EE808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE808u; }
        if (ctx->pc != 0x4EE808u) { return; }
    }
    ctx->pc = 0x4EE808u;
label_4ee808:
    // 0x4ee808: 0x8e220d60  lw          $v0, 0xD60($s1)
    ctx->pc = 0x4ee808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_4ee80c:
    // 0x4ee80c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ee80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ee810:
    // 0x4ee810: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ee810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ee814:
    // 0x4ee814: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4ee814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_4ee818:
    // 0x4ee818: 0xae200db8  sw          $zero, 0xDB8($s1)
    ctx->pc = 0x4ee818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 0));
label_4ee81c:
    // 0x4ee81c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4ee81cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ee820:
    // 0x4ee820: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ee820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ee824:
    // 0x4ee824: 0x320f809  jalr        $t9
label_4ee828:
    if (ctx->pc == 0x4EE828u) {
        ctx->pc = 0x4EE828u;
            // 0x4ee828: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4EE82Cu;
        goto label_4ee82c;
    }
    ctx->pc = 0x4EE824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE82Cu);
        ctx->pc = 0x4EE828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE824u;
            // 0x4ee828: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE82Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE82Cu; }
            if (ctx->pc != 0x4EE82Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4EE82Cu;
label_4ee82c:
    // 0x4ee82c: 0x10000027  b           . + 4 + (0x27 << 2)
label_4ee830:
    if (ctx->pc == 0x4EE830u) {
        ctx->pc = 0x4EE830u;
            // 0x4ee830: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4EE834u;
        goto label_4ee834;
    }
    ctx->pc = 0x4EE82Cu;
    {
        const bool branch_taken_0x4ee82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE82Cu;
            // 0x4ee830: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee82c) {
            ctx->pc = 0x4EE8CCu;
            goto label_4ee8cc;
        }
    }
    ctx->pc = 0x4EE834u;
label_4ee834:
    // 0x4ee834: 0x53c30005  beql        $fp, $v1, . + 4 + (0x5 << 2)
label_4ee838:
    if (ctx->pc == 0x4EE838u) {
        ctx->pc = 0x4EE838u;
            // 0x4ee838: 0x8eb6077c  lw          $s6, 0x77C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
        ctx->pc = 0x4EE83Cu;
        goto label_4ee83c;
    }
    ctx->pc = 0x4EE834u;
    {
        const bool branch_taken_0x4ee834 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ee834) {
            ctx->pc = 0x4EE838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE834u;
            // 0x4ee838: 0x8eb6077c  lw          $s6, 0x77C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE84Cu;
            goto label_4ee84c;
        }
    }
    ctx->pc = 0x4EE83Cu;
label_4ee83c:
    // 0x4ee83c: 0x92a30859  lbu         $v1, 0x859($s5)
    ctx->pc = 0x4ee83cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2137)));
label_4ee840:
    // 0x4ee840: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_4ee844:
    if (ctx->pc == 0x4EE844u) {
        ctx->pc = 0x4EE848u;
        goto label_4ee848;
    }
    ctx->pc = 0x4EE840u;
    {
        const bool branch_taken_0x4ee840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee840) {
            ctx->pc = 0x4EE8C8u;
            goto label_4ee8c8;
        }
    }
    ctx->pc = 0x4EE848u;
label_4ee848:
    // 0x4ee848: 0x8eb6077c  lw          $s6, 0x77C($s5)
    ctx->pc = 0x4ee848u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_4ee84c:
    // 0x4ee84c: 0x3c1400af  lui         $s4, 0xAF
    ctx->pc = 0x4ee84cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)175 << 16));
label_4ee850:
    // 0x4ee850: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4ee850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee854:
    // 0x4ee854: 0x26940e80  addiu       $s4, $s4, 0xE80
    ctx->pc = 0x4ee854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3712));
label_4ee858:
    // 0x4ee858: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x4ee858u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4ee85c:
    // 0x4ee85c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4ee85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4ee860:
    // 0x4ee860: 0xa24011a1  sb          $zero, 0x11A1($s2)
    ctx->pc = 0x4ee860u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4513), (uint8_t)GPR_U32(ctx, 0));
label_4ee864:
    // 0x4ee864: 0x8e510d74  lw          $s1, 0xD74($s2)
    ctx->pc = 0x4ee864u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_4ee868:
    // 0x4ee868: 0x8e2302c8  lw          $v1, 0x2C8($s1)
    ctx->pc = 0x4ee868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_4ee86c:
    // 0x4ee86c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4ee86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4ee870:
    // 0x4ee870: 0xc0a545c  jal         func_295170
label_4ee874:
    if (ctx->pc == 0x4EE874u) {
        ctx->pc = 0x4EE874u;
            // 0x4ee874: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4EE878u;
        goto label_4ee878;
    }
    ctx->pc = 0x4EE870u;
    SET_GPR_U32(ctx, 31, 0x4EE878u);
    ctx->pc = 0x4EE874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE870u;
            // 0x4ee874: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE878u; }
        if (ctx->pc != 0x4EE878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE878u; }
        if (ctx->pc != 0x4EE878u) { return; }
    }
    ctx->pc = 0x4EE878u;
label_4ee878:
    // 0x4ee878: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x4ee878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
label_4ee87c:
    // 0x4ee87c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ee87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ee880:
    // 0x4ee880: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x4ee880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4ee884:
    // 0x4ee884: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4ee884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4ee888:
    // 0x4ee888: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4ee888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4ee88c:
    // 0x4ee88c: 0xc08bf20  jal         func_22FC80
label_4ee890:
    if (ctx->pc == 0x4EE890u) {
        ctx->pc = 0x4EE890u;
            // 0x4ee890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE894u;
        goto label_4ee894;
    }
    ctx->pc = 0x4EE88Cu;
    SET_GPR_U32(ctx, 31, 0x4EE894u);
    ctx->pc = 0x4EE890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE88Cu;
            // 0x4ee890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE894u; }
        if (ctx->pc != 0x4EE894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE894u; }
        if (ctx->pc != 0x4EE894u) { return; }
    }
    ctx->pc = 0x4EE894u;
label_4ee894:
    // 0x4ee894: 0xae400db8  sw          $zero, 0xDB8($s2)
    ctx->pc = 0x4ee894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 0));
label_4ee898:
    // 0x4ee898: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4ee898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4ee89c:
    // 0x4ee89c: 0x8e430d60  lw          $v1, 0xD60($s2)
    ctx->pc = 0x4ee89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_4ee8a0:
    // 0x4ee8a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4ee8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ee8a4:
    // 0x4ee8a4: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x4ee8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_4ee8a8:
    // 0x4ee8a8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4ee8a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_4ee8ac:
    // 0x4ee8ac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_4ee8b0:
    if (ctx->pc == 0x4EE8B0u) {
        ctx->pc = 0x4EE8B0u;
            // 0x4ee8b0: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->pc = 0x4EE8B4u;
        goto label_4ee8b4;
    }
    ctx->pc = 0x4EE8ACu;
    {
        const bool branch_taken_0x4ee8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE8ACu;
            // 0x4ee8b0: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee8ac) {
            ctx->pc = 0x4EE858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ee858;
        }
    }
    ctx->pc = 0x4EE8B4u;
label_4ee8b4:
    // 0x4ee8b4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4ee8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ee8b8:
    // 0x4ee8b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ee8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ee8bc:
    // 0x4ee8bc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ee8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ee8c0:
    // 0x4ee8c0: 0x320f809  jalr        $t9
label_4ee8c4:
    if (ctx->pc == 0x4EE8C4u) {
        ctx->pc = 0x4EE8C4u;
            // 0x4ee8c4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4EE8C8u;
        goto label_4ee8c8;
    }
    ctx->pc = 0x4EE8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE8C8u);
        ctx->pc = 0x4EE8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE8C0u;
            // 0x4ee8c4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE8C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE8C8u; }
            if (ctx->pc != 0x4EE8C8u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE8C8u;
label_4ee8c8:
    // 0x4ee8c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4ee8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4ee8cc:
    // 0x4ee8cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4ee8ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ee8d0:
    // 0x4ee8d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4ee8d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ee8d4:
    // 0x4ee8d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4ee8d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ee8d8:
    // 0x4ee8d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4ee8d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ee8dc:
    // 0x4ee8dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4ee8dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ee8e0:
    // 0x4ee8e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ee8e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ee8e4:
    // 0x4ee8e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ee8e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ee8e8:
    // 0x4ee8e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ee8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ee8ec:
    // 0x4ee8ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ee8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ee8f0:
    // 0x4ee8f0: 0x3e00008  jr          $ra
label_4ee8f4:
    if (ctx->pc == 0x4EE8F4u) {
        ctx->pc = 0x4EE8F4u;
            // 0x4ee8f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4EE8F8u;
        goto label_4ee8f8;
    }
    ctx->pc = 0x4EE8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE8F0u;
            // 0x4ee8f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EE8F8u;
label_4ee8f8:
    // 0x4ee8f8: 0x0  nop
    ctx->pc = 0x4ee8f8u;
    // NOP
label_4ee8fc:
    // 0x4ee8fc: 0x0  nop
    ctx->pc = 0x4ee8fcu;
    // NOP
label_4ee900:
    // 0x4ee900: 0x3e00008  jr          $ra
label_4ee904:
    if (ctx->pc == 0x4EE904u) {
        ctx->pc = 0x4EE908u;
        goto label_4ee908;
    }
    ctx->pc = 0x4EE900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EE908u;
label_4ee908:
    // 0x4ee908: 0x0  nop
    ctx->pc = 0x4ee908u;
    // NOP
label_4ee90c:
    // 0x4ee90c: 0x0  nop
    ctx->pc = 0x4ee90cu;
    // NOP
label_4ee910:
    // 0x4ee910: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4ee910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4ee914:
    // 0x4ee914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4ee914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ee918:
    // 0x4ee918: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4ee918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4ee91c:
    // 0x4ee91c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4ee91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4ee920:
    // 0x4ee920: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4ee920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4ee924:
    // 0x4ee924: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ee924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ee928:
    // 0x4ee928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ee928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ee92c:
    // 0x4ee92c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ee92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ee930:
    // 0x4ee930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ee930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ee934:
    // 0x4ee934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ee934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ee938:
    // 0x4ee938: 0x8c830cb4  lw          $v1, 0xCB4($a0)
    ctx->pc = 0x4ee938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_4ee93c:
    // 0x4ee93c: 0xac830cb8  sw          $v1, 0xCB8($a0)
    ctx->pc = 0x4ee93cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3256), GPR_U32(ctx, 3));
label_4ee940:
    // 0x4ee940: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x4ee940u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ee944:
    // 0x4ee944: 0x10c50131  beq         $a2, $a1, . + 4 + (0x131 << 2)
label_4ee948:
    if (ctx->pc == 0x4EE948u) {
        ctx->pc = 0x4EE948u;
            // 0x4ee948: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE94Cu;
        goto label_4ee94c;
    }
    ctx->pc = 0x4EE944u;
    {
        const bool branch_taken_0x4ee944 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x4EE948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE944u;
            // 0x4ee948: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee944) {
            ctx->pc = 0x4EEE0Cu;
            goto label_4eee0c;
        }
    }
    ctx->pc = 0x4EE94Cu;
label_4ee94c:
    // 0x4ee94c: 0x50c0012a  beql        $a2, $zero, . + 4 + (0x12A << 2)
label_4ee950:
    if (ctx->pc == 0x4EE950u) {
        ctx->pc = 0x4EE950u;
            // 0x4ee950: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4EE954u;
        goto label_4ee954;
    }
    ctx->pc = 0x4EE94Cu;
    {
        const bool branch_taken_0x4ee94c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee94c) {
            ctx->pc = 0x4EE950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE94Cu;
            // 0x4ee950: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EEDF8u;
            goto label_4eedf8;
        }
    }
    ctx->pc = 0x4EE954u;
label_4ee954:
    // 0x4ee954: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x4ee954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4ee958:
    // 0x4ee958: 0x50c30122  beql        $a2, $v1, . + 4 + (0x122 << 2)
label_4ee95c:
    if (ctx->pc == 0x4EE95Cu) {
        ctx->pc = 0x4EE95Cu;
            // 0x4ee95c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4EE960u;
        goto label_4ee960;
    }
    ctx->pc = 0x4EE958u;
    {
        const bool branch_taken_0x4ee958 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ee958) {
            ctx->pc = 0x4EE95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE958u;
            // 0x4ee95c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EEDE4u;
            goto label_4eede4;
        }
    }
    ctx->pc = 0x4EE960u;
label_4ee960:
    // 0x4ee960: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x4ee960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_4ee964:
    // 0x4ee964: 0x50c300ee  beql        $a2, $v1, . + 4 + (0xEE << 2)
label_4ee968:
    if (ctx->pc == 0x4EE968u) {
        ctx->pc = 0x4EE968u;
            // 0x4ee968: 0x92a30cd8  lbu         $v1, 0xCD8($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3288)));
        ctx->pc = 0x4EE96Cu;
        goto label_4ee96c;
    }
    ctx->pc = 0x4EE964u;
    {
        const bool branch_taken_0x4ee964 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ee964) {
            ctx->pc = 0x4EE968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE964u;
            // 0x4ee968: 0x92a30cd8  lbu         $v1, 0xCD8($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EED20u;
            goto label_4eed20;
        }
    }
    ctx->pc = 0x4EE96Cu;
label_4ee96c:
    // 0x4ee96c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x4ee96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4ee970:
    // 0x4ee970: 0x50c2008c  beql        $a2, $v0, . + 4 + (0x8C << 2)
label_4ee974:
    if (ctx->pc == 0x4EE974u) {
        ctx->pc = 0x4EE974u;
            // 0x4ee974: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x4EE978u;
        goto label_4ee978;
    }
    ctx->pc = 0x4EE970u;
    {
        const bool branch_taken_0x4ee970 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ee970) {
            ctx->pc = 0x4EE974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE970u;
            // 0x4ee974: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EEBA4u;
            goto label_4eeba4;
        }
    }
    ctx->pc = 0x4EE978u;
label_4ee978:
    // 0x4ee978: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x4ee978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_4ee97c:
    // 0x4ee97c: 0x50c2001e  beql        $a2, $v0, . + 4 + (0x1E << 2)
label_4ee980:
    if (ctx->pc == 0x4EE980u) {
        ctx->pc = 0x4EE980u;
            // 0x4ee980: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4EE984u;
        goto label_4ee984;
    }
    ctx->pc = 0x4EE97Cu;
    {
        const bool branch_taken_0x4ee97c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ee97c) {
            ctx->pc = 0x4EE980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE97Cu;
            // 0x4ee980: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE9F8u;
            goto label_4ee9f8;
        }
    }
    ctx->pc = 0x4EE984u;
label_4ee984:
    // 0x4ee984: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4ee984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4ee988:
    // 0x4ee988: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
label_4ee98c:
    if (ctx->pc == 0x4EE98Cu) {
        ctx->pc = 0x4EE990u;
        goto label_4ee990;
    }
    ctx->pc = 0x4EE988u;
    {
        const bool branch_taken_0x4ee988 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ee988) {
            ctx->pc = 0x4EE998u;
            goto label_4ee998;
        }
    }
    ctx->pc = 0x4EE990u;
label_4ee990:
    // 0x4ee990: 0x10000125  b           . + 4 + (0x125 << 2)
label_4ee994:
    if (ctx->pc == 0x4EE994u) {
        ctx->pc = 0x4EE998u;
        goto label_4ee998;
    }
    ctx->pc = 0x4EE990u;
    {
        const bool branch_taken_0x4ee990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee990) {
            ctx->pc = 0x4EEE28u;
            goto label_4eee28;
        }
    }
    ctx->pc = 0x4EE998u;
label_4ee998:
    // 0x4ee998: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x4ee998u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_4ee99c:
    // 0x4ee99c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4ee99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee9a0:
    // 0x4ee9a0: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x4ee9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_4ee9a4:
    // 0x4ee9a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4ee9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4ee9a8:
    // 0x4ee9a8: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x4ee9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_4ee9ac:
    // 0x4ee9ac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4ee9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4ee9b0:
    // 0x4ee9b0: 0xac820db8  sw          $v0, 0xDB8($a0)
    ctx->pc = 0x4ee9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3512), GPR_U32(ctx, 2));
label_4ee9b4:
    // 0x4ee9b4: 0x8c820d60  lw          $v0, 0xD60($a0)
    ctx->pc = 0x4ee9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_4ee9b8:
    // 0x4ee9b8: 0xc077fb0  jal         func_1DFEC0
label_4ee9bc:
    if (ctx->pc == 0x4EE9BCu) {
        ctx->pc = 0x4EE9BCu;
            // 0x4ee9bc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x4EE9C0u;
        goto label_4ee9c0;
    }
    ctx->pc = 0x4EE9B8u;
    SET_GPR_U32(ctx, 31, 0x4EE9C0u);
    ctx->pc = 0x4EE9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE9B8u;
            // 0x4ee9bc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE9C0u; }
        if (ctx->pc != 0x4EE9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE9C0u; }
        if (ctx->pc != 0x4EE9C0u) { return; }
    }
    ctx->pc = 0x4EE9C0u;
label_4ee9c0:
    // 0x4ee9c0: 0x8ea2077c  lw          $v0, 0x77C($s5)
    ctx->pc = 0x4ee9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_4ee9c4:
    // 0x4ee9c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4ee9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4ee9c8:
    // 0x4ee9c8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4ee9c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ee9cc:
    // 0x4ee9cc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4ee9d0:
    if (ctx->pc == 0x4EE9D0u) {
        ctx->pc = 0x4EE9D0u;
            // 0x4ee9d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4EE9D4u;
        goto label_4ee9d4;
    }
    ctx->pc = 0x4EE9CCu;
    {
        const bool branch_taken_0x4ee9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE9CCu;
            // 0x4ee9d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee9cc) {
            ctx->pc = 0x4EE9A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ee9a4;
        }
    }
    ctx->pc = 0x4EE9D4u;
label_4ee9d4:
    // 0x4ee9d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4ee9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4ee9d8:
    // 0x4ee9d8: 0xc073234  jal         func_1CC8D0
label_4ee9dc:
    if (ctx->pc == 0x4EE9DCu) {
        ctx->pc = 0x4EE9DCu;
            // 0x4ee9dc: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x4EE9E0u;
        goto label_4ee9e0;
    }
    ctx->pc = 0x4EE9D8u;
    SET_GPR_U32(ctx, 31, 0x4EE9E0u);
    ctx->pc = 0x4EE9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE9D8u;
            // 0x4ee9dc: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE9E0u; }
        if (ctx->pc != 0x4EE9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE9E0u; }
        if (ctx->pc != 0x4EE9E0u) { return; }
    }
    ctx->pc = 0x4EE9E0u;
label_4ee9e0:
    // 0x4ee9e0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4ee9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ee9e4:
    // 0x4ee9e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ee9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ee9e8:
    // 0x4ee9e8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ee9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ee9ec:
    // 0x4ee9ec: 0x320f809  jalr        $t9
label_4ee9f0:
    if (ctx->pc == 0x4EE9F0u) {
        ctx->pc = 0x4EE9F0u;
            // 0x4ee9f0: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x4EE9F4u;
        goto label_4ee9f4;
    }
    ctx->pc = 0x4EE9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE9F4u);
        ctx->pc = 0x4EE9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE9ECu;
            // 0x4ee9f0: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE9F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE9F4u; }
            if (ctx->pc != 0x4EE9F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE9F4u;
label_4ee9f4:
    // 0x4ee9f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4ee9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4ee9f8:
    // 0x4ee9f8: 0xaea20cb4  sw          $v0, 0xCB4($s5)
    ctx->pc = 0x4ee9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3252), GPR_U32(ctx, 2));
label_4ee9fc:
    // 0x4ee9fc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4ee9fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4eea00:
    // 0x4eea00: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x4eea00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_4eea04:
    // 0x4eea04: 0x320f809  jalr        $t9
label_4eea08:
    if (ctx->pc == 0x4EEA08u) {
        ctx->pc = 0x4EEA08u;
            // 0x4eea08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEA0Cu;
        goto label_4eea0c;
    }
    ctx->pc = 0x4EEA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EEA0Cu);
        ctx->pc = 0x4EEA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEA04u;
            // 0x4eea08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EEA0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EEA0Cu; }
            if (ctx->pc != 0x4EEA0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4EEA0Cu;
label_4eea0c:
    // 0x4eea0c: 0x8ea30cc0  lw          $v1, 0xCC0($s5)
    ctx->pc = 0x4eea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3264)));
label_4eea10:
    // 0x4eea10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4eea10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4eea14:
    // 0x4eea14: 0x50620042  beql        $v1, $v0, . + 4 + (0x42 << 2)
label_4eea18:
    if (ctx->pc == 0x4EEA18u) {
        ctx->pc = 0x4EEA18u;
            // 0x4eea18: 0x8ea5077c  lw          $a1, 0x77C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
        ctx->pc = 0x4EEA1Cu;
        goto label_4eea1c;
    }
    ctx->pc = 0x4EEA14u;
    {
        const bool branch_taken_0x4eea14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4eea14) {
            ctx->pc = 0x4EEA18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEA14u;
            // 0x4eea18: 0x8ea5077c  lw          $a1, 0x77C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EEB20u;
            goto label_4eeb20;
        }
    }
    ctx->pc = 0x4EEA1Cu;
label_4eea1c:
    // 0x4eea1c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4eea20:
    if (ctx->pc == 0x4EEA20u) {
        ctx->pc = 0x4EEA20u;
            // 0x4eea20: 0x8ea5077c  lw          $a1, 0x77C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
        ctx->pc = 0x4EEA24u;
        goto label_4eea24;
    }
    ctx->pc = 0x4EEA1Cu;
    {
        const bool branch_taken_0x4eea1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eea1c) {
            ctx->pc = 0x4EEA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEA1Cu;
            // 0x4eea20: 0x8ea5077c  lw          $a1, 0x77C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EEA2Cu;
            goto label_4eea2c;
        }
    }
    ctx->pc = 0x4EEA24u;
label_4eea24:
    // 0x4eea24: 0x10000059  b           . + 4 + (0x59 << 2)
label_4eea28:
    if (ctx->pc == 0x4EEA28u) {
        ctx->pc = 0x4EEA28u;
            // 0x4eea28: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x4EEA2Cu;
        goto label_4eea2c;
    }
    ctx->pc = 0x4EEA24u;
    {
        const bool branch_taken_0x4eea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEA24u;
            // 0x4eea28: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eea24) {
            ctx->pc = 0x4EEB8Cu;
            goto label_4eeb8c;
        }
    }
    ctx->pc = 0x4EEA2Cu;
label_4eea2c:
    // 0x4eea2c: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x4eea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_4eea30:
    // 0x4eea30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4eea30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eea34:
    // 0x4eea34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4eea34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eea38:
    // 0x4eea38: 0x24c60e80  addiu       $a2, $a2, 0xE80
    ctx->pc = 0x4eea38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3712));
label_4eea3c:
    // 0x4eea3c: 0x8ea80cbc  lw          $t0, 0xCBC($s5)
    ctx->pc = 0x4eea3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3260)));
label_4eea40:
    // 0x4eea40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4eea40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eea44:
    // 0x4eea44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4eea44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eea48:
    // 0x4eea48: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x4eea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4eea4c:
    // 0x4eea4c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4eea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4eea50:
    // 0x4eea50: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x4eea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_4eea54:
    // 0x4eea54: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4eea54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_4eea58:
    // 0x4eea58: 0x145102a  slt         $v0, $t2, $a1
    ctx->pc = 0x4eea58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4eea5c:
    // 0x4eea5c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4eea5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4eea60:
    // 0x4eea60: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x4eea60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_4eea64:
    // 0x4eea64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4eea68:
    if (ctx->pc == 0x4EEA68u) {
        ctx->pc = 0x4EEA68u;
            // 0x4eea68: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->pc = 0x4EEA6Cu;
        goto label_4eea6c;
    }
    ctx->pc = 0x4EEA64u;
    {
        const bool branch_taken_0x4eea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EEA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEA64u;
            // 0x4eea68: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eea64) {
            ctx->pc = 0x4EEA50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eea50;
        }
    }
    ctx->pc = 0x4EEA6Cu;
label_4eea6c:
    // 0x4eea6c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4eea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4eea70:
    // 0x4eea70: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4eea70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4eea74:
    // 0x4eea74: 0x165102a  slt         $v0, $t3, $a1
    ctx->pc = 0x4eea74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4eea78:
    // 0x4eea78: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x4eea78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_4eea7c:
    // 0x4eea7c: 0xa0690e3f  sb          $t1, 0xE3F($v1)
    ctx->pc = 0x4eea7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3647), (uint8_t)GPR_U32(ctx, 9));
label_4eea80:
    // 0x4eea80: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_4eea84:
    if (ctx->pc == 0x4EEA84u) {
        ctx->pc = 0x4EEA84u;
            // 0x4eea84: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x4EEA88u;
        goto label_4eea88;
    }
    ctx->pc = 0x4EEA80u;
    {
        const bool branch_taken_0x4eea80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EEA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEA80u;
            // 0x4eea84: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eea80) {
            ctx->pc = 0x4EEA3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eea3c;
        }
    }
    ctx->pc = 0x4EEA88u;
label_4eea88:
    // 0x4eea88: 0xc0bc6ec  jal         func_2F1BB0
label_4eea8c:
    if (ctx->pc == 0x4EEA8Cu) {
        ctx->pc = 0x4EEA8Cu;
            // 0x4eea8c: 0x26a40838  addiu       $a0, $s5, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2104));
        ctx->pc = 0x4EEA90u;
        goto label_4eea90;
    }
    ctx->pc = 0x4EEA88u;
    SET_GPR_U32(ctx, 31, 0x4EEA90u);
    ctx->pc = 0x4EEA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEA88u;
            // 0x4eea8c: 0x26a40838  addiu       $a0, $s5, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BB0u;
    if (runtime->hasFunction(0x2F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEA90u; }
        if (ctx->pc != 0x4EEA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BB0_0x2f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEA90u; }
        if (ctx->pc != 0x4EEA90u) { return; }
    }
    ctx->pc = 0x4EEA90u;
label_4eea90:
    // 0x4eea90: 0x92a20859  lbu         $v0, 0x859($s5)
    ctx->pc = 0x4eea90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2137)));
label_4eea94:
    // 0x4eea94: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_4eea98:
    if (ctx->pc == 0x4EEA98u) {
        ctx->pc = 0x4EEA9Cu;
        goto label_4eea9c;
    }
    ctx->pc = 0x4EEA94u;
    {
        const bool branch_taken_0x4eea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eea94) {
            ctx->pc = 0x4EEB88u;
            goto label_4eeb88;
        }
    }
    ctx->pc = 0x4EEA9Cu;
label_4eea9c:
    // 0x4eea9c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4eea9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4eeaa0:
    // 0x4eeaa0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4eeaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4eeaa4:
    // 0x4eeaa4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4eeaa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4eeaa8:
    // 0x4eeaa8: 0x320f809  jalr        $t9
label_4eeaac:
    if (ctx->pc == 0x4EEAACu) {
        ctx->pc = 0x4EEAACu;
            // 0x4eeaac: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4EEAB0u;
        goto label_4eeab0;
    }
    ctx->pc = 0x4EEAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EEAB0u);
        ctx->pc = 0x4EEAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEAA8u;
            // 0x4eeaac: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EEAB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EEAB0u; }
            if (ctx->pc != 0x4EEAB0u) { return; }
        }
        }
    }
    ctx->pc = 0x4EEAB0u;
label_4eeab0:
    // 0x4eeab0: 0x8eb6077c  lw          $s6, 0x77C($s5)
    ctx->pc = 0x4eeab0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_4eeab4:
    // 0x4eeab4: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x4eeab4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_4eeab8:
    // 0x4eeab8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4eeab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eeabc:
    // 0x4eeabc: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x4eeabcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_4eeac0:
    // 0x4eeac0: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x4eeac0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4eeac4:
    // 0x4eeac4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4eeac8:
    // 0x4eeac8: 0x8e510d74  lw          $s1, 0xD74($s2)
    ctx->pc = 0x4eeac8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_4eeacc:
    // 0x4eeacc: 0x8e2302c8  lw          $v1, 0x2C8($s1)
    ctx->pc = 0x4eeaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_4eead0:
    // 0x4eead0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4eead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4eead4:
    // 0x4eead4: 0xc0a545c  jal         func_295170
label_4eead8:
    if (ctx->pc == 0x4EEAD8u) {
        ctx->pc = 0x4EEAD8u;
            // 0x4eead8: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4EEADCu;
        goto label_4eeadc;
    }
    ctx->pc = 0x4EEAD4u;
    SET_GPR_U32(ctx, 31, 0x4EEADCu);
    ctx->pc = 0x4EEAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEAD4u;
            // 0x4eead8: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEADCu; }
        if (ctx->pc != 0x4EEADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEADCu; }
        if (ctx->pc != 0x4EEADCu) { return; }
    }
    ctx->pc = 0x4EEADCu;
label_4eeadc:
    // 0x4eeadc: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x4eeadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
label_4eeae0:
    // 0x4eeae0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4eeae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4eeae4:
    // 0x4eeae4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x4eeae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4eeae8:
    // 0x4eeae8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4eeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4eeaec:
    // 0x4eeaec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4eeaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4eeaf0:
    // 0x4eeaf0: 0xc08bf20  jal         func_22FC80
label_4eeaf4:
    if (ctx->pc == 0x4EEAF4u) {
        ctx->pc = 0x4EEAF4u;
            // 0x4eeaf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEAF8u;
        goto label_4eeaf8;
    }
    ctx->pc = 0x4EEAF0u;
    SET_GPR_U32(ctx, 31, 0x4EEAF8u);
    ctx->pc = 0x4EEAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEAF0u;
            // 0x4eeaf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEAF8u; }
        if (ctx->pc != 0x4EEAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEAF8u; }
        if (ctx->pc != 0x4EEAF8u) { return; }
    }
    ctx->pc = 0x4EEAF8u;
label_4eeaf8:
    // 0x4eeaf8: 0xae400db8  sw          $zero, 0xDB8($s2)
    ctx->pc = 0x4eeaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 0));
label_4eeafc:
    // 0x4eeafc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4eeafcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4eeb00:
    // 0x4eeb00: 0x8e430d60  lw          $v1, 0xD60($s2)
    ctx->pc = 0x4eeb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_4eeb04:
    // 0x4eeb04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4eeb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4eeb08:
    // 0x4eeb08: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x4eeb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_4eeb0c:
    // 0x4eeb0c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4eeb0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4eeb10:
    // 0x4eeb10: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_4eeb14:
    if (ctx->pc == 0x4EEB14u) {
        ctx->pc = 0x4EEB14u;
            // 0x4eeb14: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->pc = 0x4EEB18u;
        goto label_4eeb18;
    }
    ctx->pc = 0x4EEB10u;
    {
        const bool branch_taken_0x4eeb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EEB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEB10u;
            // 0x4eeb14: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeb10) {
            ctx->pc = 0x4EEAC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eeac0;
        }
    }
    ctx->pc = 0x4EEB18u;
label_4eeb18:
    // 0x4eeb18: 0x1000001b  b           . + 4 + (0x1B << 2)
label_4eeb1c:
    if (ctx->pc == 0x4EEB1Cu) {
        ctx->pc = 0x4EEB20u;
        goto label_4eeb20;
    }
    ctx->pc = 0x4EEB18u;
    {
        const bool branch_taken_0x4eeb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eeb18) {
            ctx->pc = 0x4EEB88u;
            goto label_4eeb88;
        }
    }
    ctx->pc = 0x4EEB20u;
label_4eeb20:
    // 0x4eeb20: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x4eeb20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_4eeb24:
    // 0x4eeb24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4eeb24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eeb28:
    // 0x4eeb28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4eeb28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eeb2c:
    // 0x4eeb2c: 0x24c60e80  addiu       $a2, $a2, 0xE80
    ctx->pc = 0x4eeb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3712));
label_4eeb30:
    // 0x4eeb30: 0x8ea80cbc  lw          $t0, 0xCBC($s5)
    ctx->pc = 0x4eeb30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3260)));
label_4eeb34:
    // 0x4eeb34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4eeb34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eeb38:
    // 0x4eeb38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4eeb38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eeb3c:
    // 0x4eeb3c: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x4eeb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4eeb40:
    // 0x4eeb40: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4eeb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4eeb44:
    // 0x4eeb44: 0x0  nop
    ctx->pc = 0x4eeb44u;
    // NOP
label_4eeb48:
    // 0x4eeb48: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4eeb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4eeb4c:
    // 0x4eeb4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4eeb4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_4eeb50:
    // 0x4eeb50: 0x145102a  slt         $v0, $t2, $a1
    ctx->pc = 0x4eeb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4eeb54:
    // 0x4eeb54: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4eeb54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4eeb58:
    // 0x4eeb58: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x4eeb58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_4eeb5c:
    // 0x4eeb5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4eeb60:
    if (ctx->pc == 0x4EEB60u) {
        ctx->pc = 0x4EEB60u;
            // 0x4eeb60: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->pc = 0x4EEB64u;
        goto label_4eeb64;
    }
    ctx->pc = 0x4EEB5Cu;
    {
        const bool branch_taken_0x4eeb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EEB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEB5Cu;
            // 0x4eeb60: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeb5c) {
            ctx->pc = 0x4EEB48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eeb48;
        }
    }
    ctx->pc = 0x4EEB64u;
label_4eeb64:
    // 0x4eeb64: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4eeb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4eeb68:
    // 0x4eeb68: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4eeb68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4eeb6c:
    // 0x4eeb6c: 0x165102a  slt         $v0, $t3, $a1
    ctx->pc = 0x4eeb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4eeb70:
    // 0x4eeb70: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x4eeb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_4eeb74:
    // 0x4eeb74: 0xa0690e3f  sb          $t1, 0xE3F($v1)
    ctx->pc = 0x4eeb74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3647), (uint8_t)GPR_U32(ctx, 9));
label_4eeb78:
    // 0x4eeb78: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_4eeb7c:
    if (ctx->pc == 0x4EEB7Cu) {
        ctx->pc = 0x4EEB7Cu;
            // 0x4eeb7c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x4EEB80u;
        goto label_4eeb80;
    }
    ctx->pc = 0x4EEB78u;
    {
        const bool branch_taken_0x4eeb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EEB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEB78u;
            // 0x4eeb7c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeb78) {
            ctx->pc = 0x4EEB30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eeb30;
        }
    }
    ctx->pc = 0x4EEB80u;
label_4eeb80:
    // 0x4eeb80: 0xc13b98c  jal         func_4EE630
label_4eeb84:
    if (ctx->pc == 0x4EEB84u) {
        ctx->pc = 0x4EEB84u;
            // 0x4eeb84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEB88u;
        goto label_4eeb88;
    }
    ctx->pc = 0x4EEB80u;
    SET_GPR_U32(ctx, 31, 0x4EEB88u);
    ctx->pc = 0x4EEB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEB80u;
            // 0x4eeb84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EE630u;
    goto label_4ee630;
    ctx->pc = 0x4EEB88u;
label_4eeb88:
    // 0x4eeb88: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4eeb88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4eeb8c:
    // 0x4eeb8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4eeb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4eeb90:
    // 0x4eeb90: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x4eeb90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_4eeb94:
    // 0x4eeb94: 0x320f809  jalr        $t9
label_4eeb98:
    if (ctx->pc == 0x4EEB98u) {
        ctx->pc = 0x4EEB98u;
            // 0x4eeb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEB9Cu;
        goto label_4eeb9c;
    }
    ctx->pc = 0x4EEB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EEB9Cu);
        ctx->pc = 0x4EEB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEB94u;
            // 0x4eeb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EEB9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EEB9Cu; }
            if (ctx->pc != 0x4EEB9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4EEB9Cu;
label_4eeb9c:
    // 0x4eeb9c: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_4eeba0:
    if (ctx->pc == 0x4EEBA0u) {
        ctx->pc = 0x4EEBA0u;
            // 0x4eeba0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4EEBA4u;
        goto label_4eeba4;
    }
    ctx->pc = 0x4EEB9Cu;
    {
        const bool branch_taken_0x4eeb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEB9Cu;
            // 0x4eeba0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeb9c) {
            ctx->pc = 0x4EEE34u;
            goto label_4eee34;
        }
    }
    ctx->pc = 0x4EEBA4u;
label_4eeba4:
    // 0x4eeba4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4eeba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eeba8:
    // 0x4eeba8: 0xaea20cb4  sw          $v0, 0xCB4($s5)
    ctx->pc = 0x4eeba8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3252), GPR_U32(ctx, 2));
label_4eebac:
    // 0x4eebac: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4eebacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4eebb0:
    // 0x4eebb0: 0xa2a50cd8  sb          $a1, 0xCD8($s5)
    ctx->pc = 0x4eebb0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3288), (uint8_t)GPR_U32(ctx, 5));
label_4eebb4:
    // 0x4eebb4: 0xc073234  jal         func_1CC8D0
label_4eebb8:
    if (ctx->pc == 0x4EEBB8u) {
        ctx->pc = 0x4EEBB8u;
            // 0x4eebb8: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->pc = 0x4EEBBCu;
        goto label_4eebbc;
    }
    ctx->pc = 0x4EEBB4u;
    SET_GPR_U32(ctx, 31, 0x4EEBBCu);
    ctx->pc = 0x4EEBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEBB4u;
            // 0x4eebb8: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEBBCu; }
        if (ctx->pc != 0x4EEBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEBBCu; }
        if (ctx->pc != 0x4EEBBCu) { return; }
    }
    ctx->pc = 0x4EEBBCu;
label_4eebbc:
    // 0x4eebbc: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4eebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4eebc0:
    // 0x4eebc0: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x4eebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_4eebc4:
    // 0x4eebc4: 0x8c63aab0  lw          $v1, -0x5550($v1)
    ctx->pc = 0x4eebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945456)));
label_4eebc8:
    // 0x4eebc8: 0x3c0500be  lui         $a1, 0xBE
    ctx->pc = 0x4eebc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)190 << 16));
label_4eebcc:
    // 0x4eebcc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4eebccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4eebd0:
    // 0x4eebd0: 0x24c60e80  addiu       $a2, $a2, 0xE80
    ctx->pc = 0x4eebd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3712));
label_4eebd4:
    // 0x4eebd4: 0x24a5aac0  addiu       $a1, $a1, -0x5540
    ctx->pc = 0x4eebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945472));
label_4eebd8:
    // 0x4eebd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4eebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4eebdc:
    // 0x4eebdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4eebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4eebe0:
    // 0x4eebe0: 0xac43aab0  sw          $v1, -0x5550($v0)
    ctx->pc = 0x4eebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945456), GPR_U32(ctx, 3));
label_4eebe4:
    // 0x4eebe4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4eebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4eebe8:
    // 0x4eebe8: 0x80420e3f  lb          $v0, 0xE3F($v0)
    ctx->pc = 0x4eebe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3647)));
label_4eebec:
    // 0x4eebec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4eebf0:
    if (ctx->pc == 0x4EEBF0u) {
        ctx->pc = 0x4EEBF4u;
        goto label_4eebf4;
    }
    ctx->pc = 0x4EEBECu;
    {
        const bool branch_taken_0x4eebec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eebec) {
            ctx->pc = 0x4EEC00u;
            goto label_4eec00;
        }
    }
    ctx->pc = 0x4EEBF4u;
label_4eebf4:
    // 0x4eebf4: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x4eebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_4eebf8:
    // 0x4eebf8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4eebfc:
    if (ctx->pc == 0x4EEBFCu) {
        ctx->pc = 0x4EEBFCu;
            // 0x4eebfc: 0xa0400cd4  sb          $zero, 0xCD4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3284), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4EEC00u;
        goto label_4eec00;
    }
    ctx->pc = 0x4EEBF8u;
    {
        const bool branch_taken_0x4eebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEBF8u;
            // 0x4eebfc: 0xa0400cd4  sb          $zero, 0xCD4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3284), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eebf8) {
            ctx->pc = 0x4EEC18u;
            goto label_4eec18;
        }
    }
    ctx->pc = 0x4EEC00u;
label_4eec00:
    // 0x4eec00: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x4eec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_4eec04:
    // 0x4eec04: 0xa0440cd4  sb          $a0, 0xCD4($v0)
    ctx->pc = 0x4eec04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3284), (uint8_t)GPR_U32(ctx, 4));
label_4eec08:
    // 0x4eec08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4eec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4eec0c:
    // 0x4eec0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4eec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4eec10:
    // 0x4eec10: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4eec10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4eec14:
    // 0x4eec14: 0x0  nop
    ctx->pc = 0x4eec14u;
    // NOP
label_4eec18:
    // 0x4eec18: 0x8ea30780  lw          $v1, 0x780($s5)
    ctx->pc = 0x4eec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_4eec1c:
    // 0x4eec1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4eec1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4eec20:
    // 0x4eec20: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4eec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4eec24:
    // 0x4eec24: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x4eec24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4eec28:
    // 0x4eec28: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_4eec2c:
    if (ctx->pc == 0x4EEC2Cu) {
        ctx->pc = 0x4EEC2Cu;
            // 0x4eec2c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4EEC30u;
        goto label_4eec30;
    }
    ctx->pc = 0x4EEC28u;
    {
        const bool branch_taken_0x4eec28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EEC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEC28u;
            // 0x4eec2c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eec28) {
            ctx->pc = 0x4EEBE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eebe4;
        }
    }
    ctx->pc = 0x4EEC30u;
label_4eec30:
    // 0x4eec30: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_4eec34:
    if (ctx->pc == 0x4EEC34u) {
        ctx->pc = 0x4EEC34u;
            // 0x4eec34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEC38u;
        goto label_4eec38;
    }
    ctx->pc = 0x4EEC30u;
    {
        const bool branch_taken_0x4eec30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEC30u;
            // 0x4eec34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eec30) {
            ctx->pc = 0x4EEC80u;
            goto label_4eec80;
        }
    }
    ctx->pc = 0x4EEC38u;
label_4eec38:
    // 0x4eec38: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x4eec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_4eec3c:
    // 0x4eec3c: 0x90420cd4  lbu         $v0, 0xCD4($v0)
    ctx->pc = 0x4eec3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3284)));
label_4eec40:
    // 0x4eec40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4eec40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4eec44:
    // 0x4eec44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4eec44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4eec48:
    // 0x4eec48: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4eec4c:
    if (ctx->pc == 0x4EEC4Cu) {
        ctx->pc = 0x4EEC4Cu;
            // 0x4eec4c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4EEC50u;
        goto label_4eec50;
    }
    ctx->pc = 0x4EEC48u;
    {
        const bool branch_taken_0x4eec48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eec48) {
            ctx->pc = 0x4EEC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEC48u;
            // 0x4eec4c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EEC70u;
            goto label_4eec70;
        }
    }
    ctx->pc = 0x4EEC50u;
label_4eec50:
    // 0x4eec50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4eec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4eec54:
    // 0x4eec54: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4eec54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4eec58:
    // 0x4eec58: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4eec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4eec5c:
    // 0x4eec5c: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x4eec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_4eec60:
    // 0x4eec60: 0xc05d85a  jal         func_176168
label_4eec64:
    if (ctx->pc == 0x4EEC64u) {
        ctx->pc = 0x4EEC64u;
            // 0x4eec64: 0x24a58860  addiu       $a1, $a1, -0x77A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936672));
        ctx->pc = 0x4EEC68u;
        goto label_4eec68;
    }
    ctx->pc = 0x4EEC60u;
    SET_GPR_U32(ctx, 31, 0x4EEC68u);
    ctx->pc = 0x4EEC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEC60u;
            // 0x4eec64: 0x24a58860  addiu       $a1, $a1, -0x77A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEC68u; }
        if (ctx->pc != 0x4EEC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEC68u; }
        if (ctx->pc != 0x4EEC68u) { return; }
    }
    ctx->pc = 0x4EEC68u;
label_4eec68:
    // 0x4eec68: 0x10000005  b           . + 4 + (0x5 << 2)
label_4eec6c:
    if (ctx->pc == 0x4EEC6Cu) {
        ctx->pc = 0x4EEC70u;
        goto label_4eec70;
    }
    ctx->pc = 0x4EEC68u;
    {
        const bool branch_taken_0x4eec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eec68) {
            ctx->pc = 0x4EEC80u;
            goto label_4eec80;
        }
    }
    ctx->pc = 0x4EEC70u;
label_4eec70:
    // 0x4eec70: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x4eec70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4eec74:
    // 0x4eec74: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_4eec78:
    if (ctx->pc == 0x4EEC78u) {
        ctx->pc = 0x4EEC78u;
            // 0x4eec78: 0x2a41021  addu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->pc = 0x4EEC7Cu;
        goto label_4eec7c;
    }
    ctx->pc = 0x4EEC74u;
    {
        const bool branch_taken_0x4eec74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eec74) {
            ctx->pc = 0x4EEC78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEC74u;
            // 0x4eec78: 0x2a41021  addu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EEC3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eec3c;
        }
    }
    ctx->pc = 0x4EEC7Cu;
label_4eec7c:
    // 0x4eec7c: 0x0  nop
    ctx->pc = 0x4eec7cu;
    // NOP
label_4eec80:
    // 0x4eec80: 0xc040180  jal         func_100600
label_4eec84:
    if (ctx->pc == 0x4EEC84u) {
        ctx->pc = 0x4EEC84u;
            // 0x4eec84: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->pc = 0x4EEC88u;
        goto label_4eec88;
    }
    ctx->pc = 0x4EEC80u;
    SET_GPR_U32(ctx, 31, 0x4EEC88u);
    ctx->pc = 0x4EEC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEC80u;
            // 0x4eec84: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEC88u; }
        if (ctx->pc != 0x4EEC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEC88u; }
        if (ctx->pc != 0x4EEC88u) { return; }
    }
    ctx->pc = 0x4EEC88u;
label_4eec88:
    // 0x4eec88: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4eec8c:
    if (ctx->pc == 0x4EEC8Cu) {
        ctx->pc = 0x4EEC8Cu;
            // 0x4eec8c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEC90u;
        goto label_4eec90;
    }
    ctx->pc = 0x4EEC88u;
    {
        const bool branch_taken_0x4eec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEC88u;
            // 0x4eec8c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eec88) {
            ctx->pc = 0x4EED00u;
            goto label_4eed00;
        }
    }
    ctx->pc = 0x4EEC90u;
label_4eec90:
    // 0x4eec90: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4eec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4eec94:
    // 0x4eec94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eec98:
    // 0x4eec98: 0x8c50aab0  lw          $s0, -0x5550($v0)
    ctx->pc = 0x4eec98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945456)));
label_4eec9c:
    // 0x4eec9c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4eec9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4eeca0:
    // 0x4eeca0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4eeca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4eeca4:
    // 0x4eeca4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4eeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4eeca8:
    // 0x4eeca8: 0xc10ca68  jal         func_4329A0
label_4eecac:
    if (ctx->pc == 0x4EECACu) {
        ctx->pc = 0x4EECACu;
            // 0x4eecac: 0x3445af29  ori         $a1, $v0, 0xAF29 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
        ctx->pc = 0x4EECB0u;
        goto label_4eecb0;
    }
    ctx->pc = 0x4EECA8u;
    SET_GPR_U32(ctx, 31, 0x4EECB0u);
    ctx->pc = 0x4EECACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EECA8u;
            // 0x4eecac: 0x3445af29  ori         $a1, $v0, 0xAF29 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EECB0u; }
        if (ctx->pc != 0x4EECB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EECB0u; }
        if (ctx->pc != 0x4EECB0u) { return; }
    }
    ctx->pc = 0x4EECB0u;
label_4eecb0:
    // 0x4eecb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4eecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4eecb4:
    // 0x4eecb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4eecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4eecb8:
    // 0x4eecb8: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4eecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4eecbc:
    // 0x4eecbc: 0x2463c190  addiu       $v1, $v1, -0x3E70
    ctx->pc = 0x4eecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951312));
label_4eecc0:
    // 0x4eecc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4eecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4eecc4:
    // 0x4eecc4: 0x26a40cd8  addiu       $a0, $s5, 0xCD8
    ctx->pc = 0x4eecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3288));
label_4eecc8:
    // 0x4eecc8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4eecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4eeccc:
    // 0x4eeccc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4eecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4eecd0:
    // 0x4eecd0: 0xa2220070  sb          $v0, 0x70($s1)
    ctx->pc = 0x4eecd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 2));
label_4eecd4:
    // 0x4eecd4: 0x26a30cd4  addiu       $v1, $s5, 0xCD4
    ctx->pc = 0x4eecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3284));
label_4eecd8:
    // 0x4eecd8: 0xa2200071  sb          $zero, 0x71($s1)
    ctx->pc = 0x4eecd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 0));
label_4eecdc:
    // 0x4eecdc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4eecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4eece0:
    // 0x4eece0: 0xae240080  sw          $a0, 0x80($s1)
    ctx->pc = 0x4eece0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 4));
label_4eece4:
    // 0x4eece4: 0x2442aac0  addiu       $v0, $v0, -0x5540
    ctx->pc = 0x4eece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945472));
label_4eece8:
    // 0x4eece8: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x4eece8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
label_4eecec:
    // 0x4eecec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eececu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eecf0:
    // 0x4eecf0: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x4eecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_4eecf4:
    // 0x4eecf4: 0xae30008c  sw          $s0, 0x8C($s1)
    ctx->pc = 0x4eecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 16));
label_4eecf8:
    // 0x4eecf8: 0xc128de4  jal         func_4A3790
label_4eecfc:
    if (ctx->pc == 0x4EECFCu) {
        ctx->pc = 0x4EECFCu;
            // 0x4eecfc: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x4EED00u;
        goto label_4eed00;
    }
    ctx->pc = 0x4EECF8u;
    SET_GPR_U32(ctx, 31, 0x4EED00u);
    ctx->pc = 0x4EECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EECF8u;
            // 0x4eecfc: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A3790u;
    if (runtime->hasFunction(0x4A3790u)) {
        auto targetFn = runtime->lookupFunction(0x4A3790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EED00u; }
        if (ctx->pc != 0x4EED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A3790_0x4a3790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EED00u; }
        if (ctx->pc != 0x4EED00u) { return; }
    }
    ctx->pc = 0x4EED00u;
label_4eed00:
    // 0x4eed00: 0xaeb10cd0  sw          $s1, 0xCD0($s5)
    ctx->pc = 0x4eed00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3280), GPR_U32(ctx, 17));
label_4eed04:
    // 0x4eed04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4eed04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4eed08:
    // 0x4eed08: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4eed08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4eed0c:
    // 0x4eed0c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4eed0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4eed10:
    // 0x4eed10: 0x320f809  jalr        $t9
label_4eed14:
    if (ctx->pc == 0x4EED14u) {
        ctx->pc = 0x4EED14u;
            // 0x4eed14: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x4EED18u;
        goto label_4eed18;
    }
    ctx->pc = 0x4EED10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EED18u);
        ctx->pc = 0x4EED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EED10u;
            // 0x4eed14: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EED18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EED18u; }
            if (ctx->pc != 0x4EED18u) { return; }
        }
        }
    }
    ctx->pc = 0x4EED18u;
label_4eed18:
    // 0x4eed18: 0x10000045  b           . + 4 + (0x45 << 2)
label_4eed1c:
    if (ctx->pc == 0x4EED1Cu) {
        ctx->pc = 0x4EED20u;
        goto label_4eed20;
    }
    ctx->pc = 0x4EED18u;
    {
        const bool branch_taken_0x4eed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eed18) {
            ctx->pc = 0x4EEE30u;
            goto label_4eee30;
        }
    }
    ctx->pc = 0x4EED20u;
label_4eed20:
    // 0x4eed20: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_4eed24:
    if (ctx->pc == 0x4EED24u) {
        ctx->pc = 0x4EED28u;
        goto label_4eed28;
    }
    ctx->pc = 0x4EED20u;
    {
        const bool branch_taken_0x4eed20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eed20) {
            ctx->pc = 0x4EEE30u;
            goto label_4eee30;
        }
    }
    ctx->pc = 0x4EED28u;
label_4eed28:
    // 0x4eed28: 0x92a30758  lbu         $v1, 0x758($s5)
    ctx->pc = 0x4eed28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1880)));
label_4eed2c:
    // 0x4eed2c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4eed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4eed30:
    // 0x4eed30: 0xaea20cb4  sw          $v0, 0xCB4($s5)
    ctx->pc = 0x4eed30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3252), GPR_U32(ctx, 2));
label_4eed34:
    // 0x4eed34: 0x8ea40cd0  lw          $a0, 0xCD0($s5)
    ctx->pc = 0x4eed34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3280)));
label_4eed38:
    // 0x4eed38: 0x3167c  dsll32      $v0, $v1, 25
    ctx->pc = 0x4eed38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 25));
label_4eed3c:
    // 0x4eed3c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4eed40:
    if (ctx->pc == 0x4EED40u) {
        ctx->pc = 0x4EED40u;
            // 0x4eed40: 0x287be  dsrl32      $s0, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->pc = 0x4EED44u;
        goto label_4eed44;
    }
    ctx->pc = 0x4EED3Cu;
    {
        const bool branch_taken_0x4eed3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EED3Cu;
            // 0x4eed40: 0x287be  dsrl32      $s0, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eed3c) {
            ctx->pc = 0x4EED58u;
            goto label_4eed58;
        }
    }
    ctx->pc = 0x4EED44u;
label_4eed44:
    // 0x4eed44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4eed44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4eed48:
    // 0x4eed48: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4eed48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4eed4c:
    // 0x4eed4c: 0x320f809  jalr        $t9
label_4eed50:
    if (ctx->pc == 0x4EED50u) {
        ctx->pc = 0x4EED50u;
            // 0x4eed50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EED54u;
        goto label_4eed54;
    }
    ctx->pc = 0x4EED4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EED54u);
        ctx->pc = 0x4EED50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EED4Cu;
            // 0x4eed50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EED54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EED54u; }
            if (ctx->pc != 0x4EED54u) { return; }
        }
        }
    }
    ctx->pc = 0x4EED54u;
label_4eed54:
    // 0x4eed54: 0xaea00cd0  sw          $zero, 0xCD0($s5)
    ctx->pc = 0x4eed54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3280), GPR_U32(ctx, 0));
label_4eed58:
    // 0x4eed58: 0xc040180  jal         func_100600
label_4eed5c:
    if (ctx->pc == 0x4EED5Cu) {
        ctx->pc = 0x4EED5Cu;
            // 0x4eed5c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x4EED60u;
        goto label_4eed60;
    }
    ctx->pc = 0x4EED58u;
    SET_GPR_U32(ctx, 31, 0x4EED60u);
    ctx->pc = 0x4EED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EED58u;
            // 0x4eed5c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EED60u; }
        if (ctx->pc != 0x4EED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EED60u; }
        if (ctx->pc != 0x4EED60u) { return; }
    }
    ctx->pc = 0x4EED60u;
label_4eed60:
    // 0x4eed60: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_4eed64:
    if (ctx->pc == 0x4EED64u) {
        ctx->pc = 0x4EED64u;
            // 0x4eed64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EED68u;
        goto label_4eed68;
    }
    ctx->pc = 0x4EED60u;
    {
        const bool branch_taken_0x4eed60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EED64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EED60u;
            // 0x4eed64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eed60) {
            ctx->pc = 0x4EEDC8u;
            goto label_4eedc8;
        }
    }
    ctx->pc = 0x4EED68u;
label_4eed68:
    // 0x4eed68: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4eed68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4eed6c:
    // 0x4eed6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eed6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eed70:
    // 0x4eed70: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x4eed70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_4eed74:
    // 0x4eed74: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4eed74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4eed78:
    // 0x4eed78: 0xc10ca68  jal         func_4329A0
label_4eed7c:
    if (ctx->pc == 0x4EED7Cu) {
        ctx->pc = 0x4EED7Cu;
            // 0x4eed7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EED80u;
        goto label_4eed80;
    }
    ctx->pc = 0x4EED78u;
    SET_GPR_U32(ctx, 31, 0x4EED80u);
    ctx->pc = 0x4EED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EED78u;
            // 0x4eed7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EED80u; }
        if (ctx->pc != 0x4EED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EED80u; }
        if (ctx->pc != 0x4EED80u) { return; }
    }
    ctx->pc = 0x4EED80u;
label_4eed80:
    // 0x4eed80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4eed80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4eed84:
    // 0x4eed84: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4eed84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4eed88:
    // 0x4eed88: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4eed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4eed8c:
    // 0x4eed8c: 0x24638350  addiu       $v1, $v1, -0x7CB0
    ctx->pc = 0x4eed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935376));
label_4eed90:
    // 0x4eed90: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4eed90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4eed94:
    // 0x4eed94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4eed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4eed98:
    // 0x4eed98: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4eed98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4eed9c:
    // 0x4eed9c: 0x26a20ca8  addiu       $v0, $s5, 0xCA8
    ctx->pc = 0x4eed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3240));
label_4eeda0:
    // 0x4eeda0: 0xa2300054  sb          $s0, 0x54($s1)
    ctx->pc = 0x4eeda0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 84), (uint8_t)GPR_U32(ctx, 16));
label_4eeda4:
    // 0x4eeda4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4eeda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4eeda8:
    // 0x4eeda8: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x4eeda8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_4eedac:
    // 0x4eedac: 0xa224005c  sb          $a0, 0x5C($s1)
    ctx->pc = 0x4eedacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 4));
label_4eedb0:
    // 0x4eedb0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4eedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4eedb4:
    // 0x4eedb4: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x4eedb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_4eedb8:
    // 0x4eedb8: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x4eedb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_4eedbc:
    // 0x4eedbc: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x4eedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4eedc0:
    // 0x4eedc0: 0xc073234  jal         func_1CC8D0
label_4eedc4:
    if (ctx->pc == 0x4EEDC4u) {
        ctx->pc = 0x4EEDC4u;
            // 0x4eedc4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4EEDC8u;
        goto label_4eedc8;
    }
    ctx->pc = 0x4EEDC0u;
    SET_GPR_U32(ctx, 31, 0x4EEDC8u);
    ctx->pc = 0x4EEDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEDC0u;
            // 0x4eedc4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEDC8u; }
        if (ctx->pc != 0x4EEDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEDC8u; }
        if (ctx->pc != 0x4EEDC8u) { return; }
    }
    ctx->pc = 0x4EEDC8u;
label_4eedc8:
    // 0x4eedc8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4eedc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4eedcc:
    // 0x4eedcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4eedccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4eedd0:
    // 0x4eedd0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4eedd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4eedd4:
    // 0x4eedd4: 0x320f809  jalr        $t9
label_4eedd8:
    if (ctx->pc == 0x4EEDD8u) {
        ctx->pc = 0x4EEDD8u;
            // 0x4eedd8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x4EEDDCu;
        goto label_4eeddc;
    }
    ctx->pc = 0x4EEDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EEDDCu);
        ctx->pc = 0x4EEDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEDD4u;
            // 0x4eedd8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EEDDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EEDDCu; }
            if (ctx->pc != 0x4EEDDCu) { return; }
        }
        }
    }
    ctx->pc = 0x4EEDDCu;
label_4eeddc:
    // 0x4eeddc: 0x10000014  b           . + 4 + (0x14 << 2)
label_4eede0:
    if (ctx->pc == 0x4EEDE0u) {
        ctx->pc = 0x4EEDE4u;
        goto label_4eede4;
    }
    ctx->pc = 0x4EEDDCu;
    {
        const bool branch_taken_0x4eeddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eeddc) {
            ctx->pc = 0x4EEE30u;
            goto label_4eee30;
        }
    }
    ctx->pc = 0x4EEDE4u;
label_4eede4:
    // 0x4eede4: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x4eede4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_4eede8:
    // 0x4eede8: 0x320f809  jalr        $t9
label_4eedec:
    if (ctx->pc == 0x4EEDECu) {
        ctx->pc = 0x4EEDF0u;
        goto label_4eedf0;
    }
    ctx->pc = 0x4EEDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EEDF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EEDF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EEDF0u; }
            if (ctx->pc != 0x4EEDF0u) { return; }
        }
        }
    }
    ctx->pc = 0x4EEDF0u;
label_4eedf0:
    // 0x4eedf0: 0x1000000f  b           . + 4 + (0xF << 2)
label_4eedf4:
    if (ctx->pc == 0x4EEDF4u) {
        ctx->pc = 0x4EEDF8u;
        goto label_4eedf8;
    }
    ctx->pc = 0x4EEDF0u;
    {
        const bool branch_taken_0x4eedf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eedf0) {
            ctx->pc = 0x4EEE30u;
            goto label_4eee30;
        }
    }
    ctx->pc = 0x4EEDF8u;
label_4eedf8:
    // 0x4eedf8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4eedf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4eedfc:
    // 0x4eedfc: 0x320f809  jalr        $t9
label_4eee00:
    if (ctx->pc == 0x4EEE00u) {
        ctx->pc = 0x4EEE04u;
        goto label_4eee04;
    }
    ctx->pc = 0x4EEDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EEE04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EEE04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EEE04u; }
            if (ctx->pc != 0x4EEE04u) { return; }
        }
        }
    }
    ctx->pc = 0x4EEE04u;
label_4eee04:
    // 0x4eee04: 0x1000000a  b           . + 4 + (0xA << 2)
label_4eee08:
    if (ctx->pc == 0x4EEE08u) {
        ctx->pc = 0x4EEE0Cu;
        goto label_4eee0c;
    }
    ctx->pc = 0x4EEE04u;
    {
        const bool branch_taken_0x4eee04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eee04) {
            ctx->pc = 0x4EEE30u;
            goto label_4eee30;
        }
    }
    ctx->pc = 0x4EEE0Cu;
label_4eee0c:
    // 0x4eee0c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4eee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4eee10:
    // 0x4eee10: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4eee10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4eee14:
    // 0x4eee14: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4eee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4eee18:
    // 0x4eee18: 0xc057b7c  jal         func_15EDF0
label_4eee1c:
    if (ctx->pc == 0x4EEE1Cu) {
        ctx->pc = 0x4EEE1Cu;
            // 0x4eee1c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4EEE20u;
        goto label_4eee20;
    }
    ctx->pc = 0x4EEE18u;
    SET_GPR_U32(ctx, 31, 0x4EEE20u);
    ctx->pc = 0x4EEE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEE18u;
            // 0x4eee1c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEE20u; }
        if (ctx->pc != 0x4EEE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEE20u; }
        if (ctx->pc != 0x4EEE20u) { return; }
    }
    ctx->pc = 0x4EEE20u;
label_4eee20:
    // 0x4eee20: 0x10000003  b           . + 4 + (0x3 << 2)
label_4eee24:
    if (ctx->pc == 0x4EEE24u) {
        ctx->pc = 0x4EEE28u;
        goto label_4eee28;
    }
    ctx->pc = 0x4EEE20u;
    {
        const bool branch_taken_0x4eee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eee20) {
            ctx->pc = 0x4EEE30u;
            goto label_4eee30;
        }
    }
    ctx->pc = 0x4EEE28u;
label_4eee28:
    // 0x4eee28: 0xc0cb834  jal         func_32E0D0
label_4eee2c:
    if (ctx->pc == 0x4EEE2Cu) {
        ctx->pc = 0x4EEE30u;
        goto label_4eee30;
    }
    ctx->pc = 0x4EEE28u;
    SET_GPR_U32(ctx, 31, 0x4EEE30u);
    ctx->pc = 0x32E0D0u;
    if (runtime->hasFunction(0x32E0D0u)) {
        auto targetFn = runtime->lookupFunction(0x32E0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEE30u; }
        if (ctx->pc != 0x4EEE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E0D0_0x32e0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEE30u; }
        if (ctx->pc != 0x4EEE30u) { return; }
    }
    ctx->pc = 0x4EEE30u;
label_4eee30:
    // 0x4eee30: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4eee30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4eee34:
    // 0x4eee34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4eee34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4eee38:
    // 0x4eee38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4eee38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4eee3c:
    // 0x4eee3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4eee3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4eee40:
    // 0x4eee40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4eee40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eee44:
    // 0x4eee44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4eee44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eee48:
    // 0x4eee48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eee48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eee4c:
    // 0x4eee4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4eee4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4eee50:
    // 0x4eee50: 0x3e00008  jr          $ra
label_4eee54:
    if (ctx->pc == 0x4EEE54u) {
        ctx->pc = 0x4EEE54u;
            // 0x4eee54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4EEE58u;
        goto label_4eee58;
    }
    ctx->pc = 0x4EEE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEE50u;
            // 0x4eee54: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EEE58u;
label_4eee58:
    // 0x4eee58: 0x0  nop
    ctx->pc = 0x4eee58u;
    // NOP
label_4eee5c:
    // 0x4eee5c: 0x0  nop
    ctx->pc = 0x4eee5cu;
    // NOP
label_4eee60:
    // 0x4eee60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4eee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4eee64:
    // 0x4eee64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4eee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4eee68:
    // 0x4eee68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4eee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4eee6c:
    // 0x4eee6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4eee70:
    // 0x4eee70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4eee70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4eee74:
    // 0x4eee74: 0x8c850cdc  lw          $a1, 0xCDC($a0)
    ctx->pc = 0x4eee74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3292)));
label_4eee78:
    // 0x4eee78: 0x8c500ed0  lw          $s0, 0xED0($v0)
    ctx->pc = 0x4eee78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_4eee7c:
    // 0x4eee7c: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_4eee80:
    if (ctx->pc == 0x4EEE80u) {
        ctx->pc = 0x4EEE80u;
            // 0x4eee80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEE84u;
        goto label_4eee84;
    }
    ctx->pc = 0x4EEE7Cu;
    {
        const bool branch_taken_0x4eee7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEE7Cu;
            // 0x4eee80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eee7c) {
            ctx->pc = 0x4EEEDCu;
            goto label_4eeedc;
        }
    }
    ctx->pc = 0x4EEE84u;
label_4eee84:
    // 0x4eee84: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x4eee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
label_4eee88:
    // 0x4eee88: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_4eee8c:
    if (ctx->pc == 0x4EEE8Cu) {
        ctx->pc = 0x4EEE8Cu;
            // 0x4eee8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEE90u;
        goto label_4eee90;
    }
    ctx->pc = 0x4EEE88u;
    {
        const bool branch_taken_0x4eee88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eee88) {
            ctx->pc = 0x4EEE8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEE88u;
            // 0x4eee8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EEEE0u;
            goto label_4eeee0;
        }
    }
    ctx->pc = 0x4EEE90u;
label_4eee90:
    // 0x4eee90: 0x8e220ce4  lw          $v0, 0xCE4($s1)
    ctx->pc = 0x4eee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3300)));
label_4eee94:
    // 0x4eee94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_4eee98:
    if (ctx->pc == 0x4EEE98u) {
        ctx->pc = 0x4EEE9Cu;
        goto label_4eee9c;
    }
    ctx->pc = 0x4EEE94u;
    {
        const bool branch_taken_0x4eee94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eee94) {
            ctx->pc = 0x4EEEDCu;
            goto label_4eeedc;
        }
    }
    ctx->pc = 0x4EEE9Cu;
label_4eee9c:
    // 0x4eee9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eeea0:
    // 0x4eeea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4eeea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eeea4:
    // 0x4eeea4: 0xc0ab89c  jal         func_2AE270
label_4eeea8:
    if (ctx->pc == 0x4EEEA8u) {
        ctx->pc = 0x4EEEA8u;
            // 0x4eeea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEEACu;
        goto label_4eeeac;
    }
    ctx->pc = 0x4EEEA4u;
    SET_GPR_U32(ctx, 31, 0x4EEEACu);
    ctx->pc = 0x4EEEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEEA4u;
            // 0x4eeea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEEACu; }
        if (ctx->pc != 0x4EEEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEEACu; }
        if (ctx->pc != 0x4EEEACu) { return; }
    }
    ctx->pc = 0x4EEEACu;
label_4eeeac:
    // 0x4eeeac: 0x8e250ce0  lw          $a1, 0xCE0($s1)
    ctx->pc = 0x4eeeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
label_4eeeb0:
    // 0x4eeeb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eeeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eeeb4:
    // 0x4eeeb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4eeeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eeeb8:
    // 0x4eeeb8: 0xc0ab89c  jal         func_2AE270
label_4eeebc:
    if (ctx->pc == 0x4EEEBCu) {
        ctx->pc = 0x4EEEBCu;
            // 0x4eeebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEEC0u;
        goto label_4eeec0;
    }
    ctx->pc = 0x4EEEB8u;
    SET_GPR_U32(ctx, 31, 0x4EEEC0u);
    ctx->pc = 0x4EEEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEEB8u;
            // 0x4eeebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEEC0u; }
        if (ctx->pc != 0x4EEEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEEC0u; }
        if (ctx->pc != 0x4EEEC0u) { return; }
    }
    ctx->pc = 0x4EEEC0u;
label_4eeec0:
    // 0x4eeec0: 0x8e250ce4  lw          $a1, 0xCE4($s1)
    ctx->pc = 0x4eeec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3300)));
label_4eeec4:
    // 0x4eeec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eeec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eeec8:
    // 0x4eeec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4eeec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eeecc:
    // 0x4eeecc: 0xc0ab89c  jal         func_2AE270
label_4eeed0:
    if (ctx->pc == 0x4EEED0u) {
        ctx->pc = 0x4EEED0u;
            // 0x4eeed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEED4u;
        goto label_4eeed4;
    }
    ctx->pc = 0x4EEECCu;
    SET_GPR_U32(ctx, 31, 0x4EEED4u);
    ctx->pc = 0x4EEED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEECCu;
            // 0x4eeed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEED4u; }
        if (ctx->pc != 0x4EEED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEED4u; }
        if (ctx->pc != 0x4EEED4u) { return; }
    }
    ctx->pc = 0x4EEED4u;
label_4eeed4:
    // 0x4eeed4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4eeed8:
    if (ctx->pc == 0x4EEED8u) {
        ctx->pc = 0x4EEED8u;
            // 0x4eeed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EEEDCu;
        goto label_4eeedc;
    }
    ctx->pc = 0x4EEED4u;
    {
        const bool branch_taken_0x4eeed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEED4u;
            // 0x4eeed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeed4) {
            ctx->pc = 0x4EEEE0u;
            goto label_4eeee0;
        }
    }
    ctx->pc = 0x4EEEDCu;
label_4eeedc:
    // 0x4eeedc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4eeedcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eeee0:
    // 0x4eeee0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4eeee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4eeee4:
    // 0x4eeee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eeee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eeee8:
    // 0x4eeee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4eeee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4eeeec:
    // 0x4eeeec: 0x3e00008  jr          $ra
label_4eeef0:
    if (ctx->pc == 0x4EEEF0u) {
        ctx->pc = 0x4EEEF0u;
            // 0x4eeef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4EEEF4u;
        goto label_4eeef4;
    }
    ctx->pc = 0x4EEEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEEECu;
            // 0x4eeef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EEEF4u;
label_4eeef4:
    // 0x4eeef4: 0x0  nop
    ctx->pc = 0x4eeef4u;
    // NOP
label_4eeef8:
    // 0x4eeef8: 0x0  nop
    ctx->pc = 0x4eeef8u;
    // NOP
label_4eeefc:
    // 0x4eeefc: 0x0  nop
    ctx->pc = 0x4eeefcu;
    // NOP
label_4eef00:
    // 0x4eef00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4eef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4eef04:
    // 0x4eef04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4eef04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4eef08:
    // 0x4eef08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4eef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4eef0c:
    // 0x4eef0c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x4eef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4eef10:
    // 0x4eef10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4eef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4eef14:
    // 0x4eef14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4eef14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4eef18:
    // 0x4eef18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4eef1c:
    // 0x4eef1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4eef1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eef20:
    // 0x4eef20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4eef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4eef24:
    // 0x4eef24: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x4eef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4eef28:
    // 0x4eef28: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x4eef28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4eef2c:
    // 0x4eef2c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4eef30:
    if (ctx->pc == 0x4EEF30u) {
        ctx->pc = 0x4EEF30u;
            // 0x4eef30: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x4EEF34u;
        goto label_4eef34;
    }
    ctx->pc = 0x4EEF2Cu;
    {
        const bool branch_taken_0x4eef2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EEF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEF2Cu;
            // 0x4eef30: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eef2c) {
            ctx->pc = 0x4EEF50u;
            goto label_4eef50;
        }
    }
    ctx->pc = 0x4EEF34u;
label_4eef34:
    // 0x4eef34: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4eef34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_4eef38:
    // 0x4eef38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4eef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4eef3c:
    // 0x4eef3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4eef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4eef40:
    // 0x4eef40: 0x0  nop
    ctx->pc = 0x4eef40u;
    // NOP
label_4eef44:
    // 0x4eef44: 0x0  nop
    ctx->pc = 0x4eef44u;
    // NOP
label_4eef48:
    // 0x4eef48: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4eef4c:
    if (ctx->pc == 0x4EEF4Cu) {
        ctx->pc = 0x4EEF50u;
        goto label_4eef50;
    }
    ctx->pc = 0x4EEF48u;
    {
        const bool branch_taken_0x4eef48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eef48) {
            ctx->pc = 0x4EEF34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eef34;
        }
    }
    ctx->pc = 0x4EEF50u;
label_4eef50:
    // 0x4eef50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4eef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4eef54:
    // 0x4eef54: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4eef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4eef58:
    // 0x4eef58: 0x8c50a348  lw          $s0, -0x5CB8($v0)
    ctx->pc = 0x4eef58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_4eef5c:
    // 0x4eef5c: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x4eef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
label_4eef60:
    // 0x4eef60: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x4eef60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_4eef64:
    // 0x4eef64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4eef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4eef68:
    // 0x4eef68: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x4eef68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4eef6c:
    // 0x4eef6c: 0x24c68878  addiu       $a2, $a2, -0x7788
    ctx->pc = 0x4eef6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936696));
label_4eef70:
    // 0x4eef70: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x4eef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4eef74:
    // 0x4eef74: 0x80530000  lb          $s3, 0x0($v0)
    ctx->pc = 0x4eef74u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4eef78:
    // 0x4eef78: 0xc043be4  jal         func_10EF90
label_4eef7c:
    if (ctx->pc == 0x4EEF7Cu) {
        ctx->pc = 0x4EEF7Cu;
            // 0x4eef7c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEF80u;
        goto label_4eef80;
    }
    ctx->pc = 0x4EEF78u;
    SET_GPR_U32(ctx, 31, 0x4EEF80u);
    ctx->pc = 0x4EEF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEF78u;
            // 0x4eef7c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEF80u; }
        if (ctx->pc != 0x4EEF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEF80u; }
        if (ctx->pc != 0x4EEF80u) { return; }
    }
    ctx->pc = 0x4EEF80u;
label_4eef80:
    // 0x4eef80: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4eef80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4eef84:
    // 0x4eef84: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4eef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4eef88:
    // 0x4eef88: 0x26460cdc  addiu       $a2, $s2, 0xCDC
    ctx->pc = 0x4eef88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3292));
label_4eef8c:
    // 0x4eef8c: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x4eef8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4eef90:
    // 0x4eef90: 0xc0aa5d8  jal         func_2A9760
label_4eef94:
    if (ctx->pc == 0x4EEF94u) {
        ctx->pc = 0x4EEF94u;
            // 0x4eef94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEF98u;
        goto label_4eef98;
    }
    ctx->pc = 0x4EEF90u;
    SET_GPR_U32(ctx, 31, 0x4EEF98u);
    ctx->pc = 0x4EEF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEF90u;
            // 0x4eef94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEF98u; }
        if (ctx->pc != 0x4EEF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEF98u; }
        if (ctx->pc != 0x4EEF98u) { return; }
    }
    ctx->pc = 0x4EEF98u;
label_4eef98:
    // 0x4eef98: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x4eef98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_4eef9c:
    // 0x4eef9c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4eef9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4eefa0:
    // 0x4eefa0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4eefa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4eefa4:
    // 0x4eefa4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x4eefa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4eefa8:
    // 0x4eefa8: 0xc043be4  jal         func_10EF90
label_4eefac:
    if (ctx->pc == 0x4EEFACu) {
        ctx->pc = 0x4EEFACu;
            // 0x4eefac: 0x24c68890  addiu       $a2, $a2, -0x7770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936720));
        ctx->pc = 0x4EEFB0u;
        goto label_4eefb0;
    }
    ctx->pc = 0x4EEFA8u;
    SET_GPR_U32(ctx, 31, 0x4EEFB0u);
    ctx->pc = 0x4EEFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEFA8u;
            // 0x4eefac: 0x24c68890  addiu       $a2, $a2, -0x7770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEFB0u; }
        if (ctx->pc != 0x4EEFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEFB0u; }
        if (ctx->pc != 0x4EEFB0u) { return; }
    }
    ctx->pc = 0x4EEFB0u;
label_4eefb0:
    // 0x4eefb0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4eefb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4eefb4:
    // 0x4eefb4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4eefb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4eefb8:
    // 0x4eefb8: 0x26460ce0  addiu       $a2, $s2, 0xCE0
    ctx->pc = 0x4eefb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3296));
label_4eefbc:
    // 0x4eefbc: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x4eefbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4eefc0:
    // 0x4eefc0: 0xc0aa5d8  jal         func_2A9760
label_4eefc4:
    if (ctx->pc == 0x4EEFC4u) {
        ctx->pc = 0x4EEFC4u;
            // 0x4eefc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EEFC8u;
        goto label_4eefc8;
    }
    ctx->pc = 0x4EEFC0u;
    SET_GPR_U32(ctx, 31, 0x4EEFC8u);
    ctx->pc = 0x4EEFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEFC0u;
            // 0x4eefc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEFC8u; }
        if (ctx->pc != 0x4EEFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEFC8u; }
        if (ctx->pc != 0x4EEFC8u) { return; }
    }
    ctx->pc = 0x4EEFC8u;
label_4eefc8:
    // 0x4eefc8: 0x56200002  bnel        $s1, $zero, . + 4 + (0x2 << 2)
label_4eefcc:
    if (ctx->pc == 0x4EEFCCu) {
        ctx->pc = 0x4EEFCCu;
            // 0x4eefcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EEFD0u;
        goto label_4eefd0;
    }
    ctx->pc = 0x4EEFC8u;
    {
        const bool branch_taken_0x4eefc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eefc8) {
            ctx->pc = 0x4EEFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEFC8u;
            // 0x4eefcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EEFD4u;
            goto label_4eefd4;
        }
    }
    ctx->pc = 0x4EEFD0u;
label_4eefd0:
    // 0x4eefd0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4eefd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eefd4:
    // 0x4eefd4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4eefd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4eefd8:
    // 0x4eefd8: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x4eefd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_4eefdc:
    // 0x4eefdc: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x4eefdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
label_4eefe0:
    // 0x4eefe0: 0x8e470968  lw          $a3, 0x968($s2)
    ctx->pc = 0x4eefe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4eefe4:
    // 0x4eefe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4eefe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4eefe8:
    // 0x4eefe8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4eefe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4eefec:
    // 0x4eefec: 0x80480000  lb          $t0, 0x0($v0)
    ctx->pc = 0x4eefecu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4eeff0:
    // 0x4eeff0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x4eeff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4eeff4:
    // 0x4eeff4: 0xc043be4  jal         func_10EF90
label_4eeff8:
    if (ctx->pc == 0x4EEFF8u) {
        ctx->pc = 0x4EEFF8u;
            // 0x4eeff8: 0x24c688b0  addiu       $a2, $a2, -0x7750 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936752));
        ctx->pc = 0x4EEFFCu;
        goto label_4eeffc;
    }
    ctx->pc = 0x4EEFF4u;
    SET_GPR_U32(ctx, 31, 0x4EEFFCu);
    ctx->pc = 0x4EEFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EEFF4u;
            // 0x4eeff8: 0x24c688b0  addiu       $a2, $a2, -0x7750 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEFFCu; }
        if (ctx->pc != 0x4EEFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EEFFCu; }
        if (ctx->pc != 0x4EEFFCu) { return; }
    }
    ctx->pc = 0x4EEFFCu;
label_4eeffc:
    // 0x4eeffc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4eeffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4ef000:
    // 0x4ef000: 0x26460ce4  addiu       $a2, $s2, 0xCE4
    ctx->pc = 0x4ef000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3300));
label_4ef004:
    // 0x4ef004: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4ef004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4ef008:
    // 0x4ef008: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x4ef008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4ef00c:
    // 0x4ef00c: 0xc0aa5d8  jal         func_2A9760
label_4ef010:
    if (ctx->pc == 0x4EF010u) {
        ctx->pc = 0x4EF010u;
            // 0x4ef010: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF014u;
        goto label_4ef014;
    }
    ctx->pc = 0x4EF00Cu;
    SET_GPR_U32(ctx, 31, 0x4EF014u);
    ctx->pc = 0x4EF010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF00Cu;
            // 0x4ef010: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF014u; }
        if (ctx->pc != 0x4EF014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF014u; }
        if (ctx->pc != 0x4EF014u) { return; }
    }
    ctx->pc = 0x4EF014u;
label_4ef014:
    // 0x4ef014: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ef014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ef018:
    // 0x4ef018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ef018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ef01c:
    // 0x4ef01c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ef01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ef020:
    // 0x4ef020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ef020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ef024:
    // 0x4ef024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ef024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef028:
    // 0x4ef028: 0x3e00008  jr          $ra
label_4ef02c:
    if (ctx->pc == 0x4EF02Cu) {
        ctx->pc = 0x4EF02Cu;
            // 0x4ef02c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4EF030u;
        goto label_fallthrough_0x4ef028;
    }
    ctx->pc = 0x4EF028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF028u;
            // 0x4ef02c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4ef028:
    ctx->pc = 0x4EF030u;
}
