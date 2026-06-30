#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EA6F0
// Address: 0x3ea6f0 - 0x3eb0e0
void sub_003EA6F0_0x3ea6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA6F0_0x3ea6f0");
#endif

    switch (ctx->pc) {
        case 0x3ea6f0u: goto label_3ea6f0;
        case 0x3ea6f4u: goto label_3ea6f4;
        case 0x3ea6f8u: goto label_3ea6f8;
        case 0x3ea6fcu: goto label_3ea6fc;
        case 0x3ea700u: goto label_3ea700;
        case 0x3ea704u: goto label_3ea704;
        case 0x3ea708u: goto label_3ea708;
        case 0x3ea70cu: goto label_3ea70c;
        case 0x3ea710u: goto label_3ea710;
        case 0x3ea714u: goto label_3ea714;
        case 0x3ea718u: goto label_3ea718;
        case 0x3ea71cu: goto label_3ea71c;
        case 0x3ea720u: goto label_3ea720;
        case 0x3ea724u: goto label_3ea724;
        case 0x3ea728u: goto label_3ea728;
        case 0x3ea72cu: goto label_3ea72c;
        case 0x3ea730u: goto label_3ea730;
        case 0x3ea734u: goto label_3ea734;
        case 0x3ea738u: goto label_3ea738;
        case 0x3ea73cu: goto label_3ea73c;
        case 0x3ea740u: goto label_3ea740;
        case 0x3ea744u: goto label_3ea744;
        case 0x3ea748u: goto label_3ea748;
        case 0x3ea74cu: goto label_3ea74c;
        case 0x3ea750u: goto label_3ea750;
        case 0x3ea754u: goto label_3ea754;
        case 0x3ea758u: goto label_3ea758;
        case 0x3ea75cu: goto label_3ea75c;
        case 0x3ea760u: goto label_3ea760;
        case 0x3ea764u: goto label_3ea764;
        case 0x3ea768u: goto label_3ea768;
        case 0x3ea76cu: goto label_3ea76c;
        case 0x3ea770u: goto label_3ea770;
        case 0x3ea774u: goto label_3ea774;
        case 0x3ea778u: goto label_3ea778;
        case 0x3ea77cu: goto label_3ea77c;
        case 0x3ea780u: goto label_3ea780;
        case 0x3ea784u: goto label_3ea784;
        case 0x3ea788u: goto label_3ea788;
        case 0x3ea78cu: goto label_3ea78c;
        case 0x3ea790u: goto label_3ea790;
        case 0x3ea794u: goto label_3ea794;
        case 0x3ea798u: goto label_3ea798;
        case 0x3ea79cu: goto label_3ea79c;
        case 0x3ea7a0u: goto label_3ea7a0;
        case 0x3ea7a4u: goto label_3ea7a4;
        case 0x3ea7a8u: goto label_3ea7a8;
        case 0x3ea7acu: goto label_3ea7ac;
        case 0x3ea7b0u: goto label_3ea7b0;
        case 0x3ea7b4u: goto label_3ea7b4;
        case 0x3ea7b8u: goto label_3ea7b8;
        case 0x3ea7bcu: goto label_3ea7bc;
        case 0x3ea7c0u: goto label_3ea7c0;
        case 0x3ea7c4u: goto label_3ea7c4;
        case 0x3ea7c8u: goto label_3ea7c8;
        case 0x3ea7ccu: goto label_3ea7cc;
        case 0x3ea7d0u: goto label_3ea7d0;
        case 0x3ea7d4u: goto label_3ea7d4;
        case 0x3ea7d8u: goto label_3ea7d8;
        case 0x3ea7dcu: goto label_3ea7dc;
        case 0x3ea7e0u: goto label_3ea7e0;
        case 0x3ea7e4u: goto label_3ea7e4;
        case 0x3ea7e8u: goto label_3ea7e8;
        case 0x3ea7ecu: goto label_3ea7ec;
        case 0x3ea7f0u: goto label_3ea7f0;
        case 0x3ea7f4u: goto label_3ea7f4;
        case 0x3ea7f8u: goto label_3ea7f8;
        case 0x3ea7fcu: goto label_3ea7fc;
        case 0x3ea800u: goto label_3ea800;
        case 0x3ea804u: goto label_3ea804;
        case 0x3ea808u: goto label_3ea808;
        case 0x3ea80cu: goto label_3ea80c;
        case 0x3ea810u: goto label_3ea810;
        case 0x3ea814u: goto label_3ea814;
        case 0x3ea818u: goto label_3ea818;
        case 0x3ea81cu: goto label_3ea81c;
        case 0x3ea820u: goto label_3ea820;
        case 0x3ea824u: goto label_3ea824;
        case 0x3ea828u: goto label_3ea828;
        case 0x3ea82cu: goto label_3ea82c;
        case 0x3ea830u: goto label_3ea830;
        case 0x3ea834u: goto label_3ea834;
        case 0x3ea838u: goto label_3ea838;
        case 0x3ea83cu: goto label_3ea83c;
        case 0x3ea840u: goto label_3ea840;
        case 0x3ea844u: goto label_3ea844;
        case 0x3ea848u: goto label_3ea848;
        case 0x3ea84cu: goto label_3ea84c;
        case 0x3ea850u: goto label_3ea850;
        case 0x3ea854u: goto label_3ea854;
        case 0x3ea858u: goto label_3ea858;
        case 0x3ea85cu: goto label_3ea85c;
        case 0x3ea860u: goto label_3ea860;
        case 0x3ea864u: goto label_3ea864;
        case 0x3ea868u: goto label_3ea868;
        case 0x3ea86cu: goto label_3ea86c;
        case 0x3ea870u: goto label_3ea870;
        case 0x3ea874u: goto label_3ea874;
        case 0x3ea878u: goto label_3ea878;
        case 0x3ea87cu: goto label_3ea87c;
        case 0x3ea880u: goto label_3ea880;
        case 0x3ea884u: goto label_3ea884;
        case 0x3ea888u: goto label_3ea888;
        case 0x3ea88cu: goto label_3ea88c;
        case 0x3ea890u: goto label_3ea890;
        case 0x3ea894u: goto label_3ea894;
        case 0x3ea898u: goto label_3ea898;
        case 0x3ea89cu: goto label_3ea89c;
        case 0x3ea8a0u: goto label_3ea8a0;
        case 0x3ea8a4u: goto label_3ea8a4;
        case 0x3ea8a8u: goto label_3ea8a8;
        case 0x3ea8acu: goto label_3ea8ac;
        case 0x3ea8b0u: goto label_3ea8b0;
        case 0x3ea8b4u: goto label_3ea8b4;
        case 0x3ea8b8u: goto label_3ea8b8;
        case 0x3ea8bcu: goto label_3ea8bc;
        case 0x3ea8c0u: goto label_3ea8c0;
        case 0x3ea8c4u: goto label_3ea8c4;
        case 0x3ea8c8u: goto label_3ea8c8;
        case 0x3ea8ccu: goto label_3ea8cc;
        case 0x3ea8d0u: goto label_3ea8d0;
        case 0x3ea8d4u: goto label_3ea8d4;
        case 0x3ea8d8u: goto label_3ea8d8;
        case 0x3ea8dcu: goto label_3ea8dc;
        case 0x3ea8e0u: goto label_3ea8e0;
        case 0x3ea8e4u: goto label_3ea8e4;
        case 0x3ea8e8u: goto label_3ea8e8;
        case 0x3ea8ecu: goto label_3ea8ec;
        case 0x3ea8f0u: goto label_3ea8f0;
        case 0x3ea8f4u: goto label_3ea8f4;
        case 0x3ea8f8u: goto label_3ea8f8;
        case 0x3ea8fcu: goto label_3ea8fc;
        case 0x3ea900u: goto label_3ea900;
        case 0x3ea904u: goto label_3ea904;
        case 0x3ea908u: goto label_3ea908;
        case 0x3ea90cu: goto label_3ea90c;
        case 0x3ea910u: goto label_3ea910;
        case 0x3ea914u: goto label_3ea914;
        case 0x3ea918u: goto label_3ea918;
        case 0x3ea91cu: goto label_3ea91c;
        case 0x3ea920u: goto label_3ea920;
        case 0x3ea924u: goto label_3ea924;
        case 0x3ea928u: goto label_3ea928;
        case 0x3ea92cu: goto label_3ea92c;
        case 0x3ea930u: goto label_3ea930;
        case 0x3ea934u: goto label_3ea934;
        case 0x3ea938u: goto label_3ea938;
        case 0x3ea93cu: goto label_3ea93c;
        case 0x3ea940u: goto label_3ea940;
        case 0x3ea944u: goto label_3ea944;
        case 0x3ea948u: goto label_3ea948;
        case 0x3ea94cu: goto label_3ea94c;
        case 0x3ea950u: goto label_3ea950;
        case 0x3ea954u: goto label_3ea954;
        case 0x3ea958u: goto label_3ea958;
        case 0x3ea95cu: goto label_3ea95c;
        case 0x3ea960u: goto label_3ea960;
        case 0x3ea964u: goto label_3ea964;
        case 0x3ea968u: goto label_3ea968;
        case 0x3ea96cu: goto label_3ea96c;
        case 0x3ea970u: goto label_3ea970;
        case 0x3ea974u: goto label_3ea974;
        case 0x3ea978u: goto label_3ea978;
        case 0x3ea97cu: goto label_3ea97c;
        case 0x3ea980u: goto label_3ea980;
        case 0x3ea984u: goto label_3ea984;
        case 0x3ea988u: goto label_3ea988;
        case 0x3ea98cu: goto label_3ea98c;
        case 0x3ea990u: goto label_3ea990;
        case 0x3ea994u: goto label_3ea994;
        case 0x3ea998u: goto label_3ea998;
        case 0x3ea99cu: goto label_3ea99c;
        case 0x3ea9a0u: goto label_3ea9a0;
        case 0x3ea9a4u: goto label_3ea9a4;
        case 0x3ea9a8u: goto label_3ea9a8;
        case 0x3ea9acu: goto label_3ea9ac;
        case 0x3ea9b0u: goto label_3ea9b0;
        case 0x3ea9b4u: goto label_3ea9b4;
        case 0x3ea9b8u: goto label_3ea9b8;
        case 0x3ea9bcu: goto label_3ea9bc;
        case 0x3ea9c0u: goto label_3ea9c0;
        case 0x3ea9c4u: goto label_3ea9c4;
        case 0x3ea9c8u: goto label_3ea9c8;
        case 0x3ea9ccu: goto label_3ea9cc;
        case 0x3ea9d0u: goto label_3ea9d0;
        case 0x3ea9d4u: goto label_3ea9d4;
        case 0x3ea9d8u: goto label_3ea9d8;
        case 0x3ea9dcu: goto label_3ea9dc;
        case 0x3ea9e0u: goto label_3ea9e0;
        case 0x3ea9e4u: goto label_3ea9e4;
        case 0x3ea9e8u: goto label_3ea9e8;
        case 0x3ea9ecu: goto label_3ea9ec;
        case 0x3ea9f0u: goto label_3ea9f0;
        case 0x3ea9f4u: goto label_3ea9f4;
        case 0x3ea9f8u: goto label_3ea9f8;
        case 0x3ea9fcu: goto label_3ea9fc;
        case 0x3eaa00u: goto label_3eaa00;
        case 0x3eaa04u: goto label_3eaa04;
        case 0x3eaa08u: goto label_3eaa08;
        case 0x3eaa0cu: goto label_3eaa0c;
        case 0x3eaa10u: goto label_3eaa10;
        case 0x3eaa14u: goto label_3eaa14;
        case 0x3eaa18u: goto label_3eaa18;
        case 0x3eaa1cu: goto label_3eaa1c;
        case 0x3eaa20u: goto label_3eaa20;
        case 0x3eaa24u: goto label_3eaa24;
        case 0x3eaa28u: goto label_3eaa28;
        case 0x3eaa2cu: goto label_3eaa2c;
        case 0x3eaa30u: goto label_3eaa30;
        case 0x3eaa34u: goto label_3eaa34;
        case 0x3eaa38u: goto label_3eaa38;
        case 0x3eaa3cu: goto label_3eaa3c;
        case 0x3eaa40u: goto label_3eaa40;
        case 0x3eaa44u: goto label_3eaa44;
        case 0x3eaa48u: goto label_3eaa48;
        case 0x3eaa4cu: goto label_3eaa4c;
        case 0x3eaa50u: goto label_3eaa50;
        case 0x3eaa54u: goto label_3eaa54;
        case 0x3eaa58u: goto label_3eaa58;
        case 0x3eaa5cu: goto label_3eaa5c;
        case 0x3eaa60u: goto label_3eaa60;
        case 0x3eaa64u: goto label_3eaa64;
        case 0x3eaa68u: goto label_3eaa68;
        case 0x3eaa6cu: goto label_3eaa6c;
        case 0x3eaa70u: goto label_3eaa70;
        case 0x3eaa74u: goto label_3eaa74;
        case 0x3eaa78u: goto label_3eaa78;
        case 0x3eaa7cu: goto label_3eaa7c;
        case 0x3eaa80u: goto label_3eaa80;
        case 0x3eaa84u: goto label_3eaa84;
        case 0x3eaa88u: goto label_3eaa88;
        case 0x3eaa8cu: goto label_3eaa8c;
        case 0x3eaa90u: goto label_3eaa90;
        case 0x3eaa94u: goto label_3eaa94;
        case 0x3eaa98u: goto label_3eaa98;
        case 0x3eaa9cu: goto label_3eaa9c;
        case 0x3eaaa0u: goto label_3eaaa0;
        case 0x3eaaa4u: goto label_3eaaa4;
        case 0x3eaaa8u: goto label_3eaaa8;
        case 0x3eaaacu: goto label_3eaaac;
        case 0x3eaab0u: goto label_3eaab0;
        case 0x3eaab4u: goto label_3eaab4;
        case 0x3eaab8u: goto label_3eaab8;
        case 0x3eaabcu: goto label_3eaabc;
        case 0x3eaac0u: goto label_3eaac0;
        case 0x3eaac4u: goto label_3eaac4;
        case 0x3eaac8u: goto label_3eaac8;
        case 0x3eaaccu: goto label_3eaacc;
        case 0x3eaad0u: goto label_3eaad0;
        case 0x3eaad4u: goto label_3eaad4;
        case 0x3eaad8u: goto label_3eaad8;
        case 0x3eaadcu: goto label_3eaadc;
        case 0x3eaae0u: goto label_3eaae0;
        case 0x3eaae4u: goto label_3eaae4;
        case 0x3eaae8u: goto label_3eaae8;
        case 0x3eaaecu: goto label_3eaaec;
        case 0x3eaaf0u: goto label_3eaaf0;
        case 0x3eaaf4u: goto label_3eaaf4;
        case 0x3eaaf8u: goto label_3eaaf8;
        case 0x3eaafcu: goto label_3eaafc;
        case 0x3eab00u: goto label_3eab00;
        case 0x3eab04u: goto label_3eab04;
        case 0x3eab08u: goto label_3eab08;
        case 0x3eab0cu: goto label_3eab0c;
        case 0x3eab10u: goto label_3eab10;
        case 0x3eab14u: goto label_3eab14;
        case 0x3eab18u: goto label_3eab18;
        case 0x3eab1cu: goto label_3eab1c;
        case 0x3eab20u: goto label_3eab20;
        case 0x3eab24u: goto label_3eab24;
        case 0x3eab28u: goto label_3eab28;
        case 0x3eab2cu: goto label_3eab2c;
        case 0x3eab30u: goto label_3eab30;
        case 0x3eab34u: goto label_3eab34;
        case 0x3eab38u: goto label_3eab38;
        case 0x3eab3cu: goto label_3eab3c;
        case 0x3eab40u: goto label_3eab40;
        case 0x3eab44u: goto label_3eab44;
        case 0x3eab48u: goto label_3eab48;
        case 0x3eab4cu: goto label_3eab4c;
        case 0x3eab50u: goto label_3eab50;
        case 0x3eab54u: goto label_3eab54;
        case 0x3eab58u: goto label_3eab58;
        case 0x3eab5cu: goto label_3eab5c;
        case 0x3eab60u: goto label_3eab60;
        case 0x3eab64u: goto label_3eab64;
        case 0x3eab68u: goto label_3eab68;
        case 0x3eab6cu: goto label_3eab6c;
        case 0x3eab70u: goto label_3eab70;
        case 0x3eab74u: goto label_3eab74;
        case 0x3eab78u: goto label_3eab78;
        case 0x3eab7cu: goto label_3eab7c;
        case 0x3eab80u: goto label_3eab80;
        case 0x3eab84u: goto label_3eab84;
        case 0x3eab88u: goto label_3eab88;
        case 0x3eab8cu: goto label_3eab8c;
        case 0x3eab90u: goto label_3eab90;
        case 0x3eab94u: goto label_3eab94;
        case 0x3eab98u: goto label_3eab98;
        case 0x3eab9cu: goto label_3eab9c;
        case 0x3eaba0u: goto label_3eaba0;
        case 0x3eaba4u: goto label_3eaba4;
        case 0x3eaba8u: goto label_3eaba8;
        case 0x3eabacu: goto label_3eabac;
        case 0x3eabb0u: goto label_3eabb0;
        case 0x3eabb4u: goto label_3eabb4;
        case 0x3eabb8u: goto label_3eabb8;
        case 0x3eabbcu: goto label_3eabbc;
        case 0x3eabc0u: goto label_3eabc0;
        case 0x3eabc4u: goto label_3eabc4;
        case 0x3eabc8u: goto label_3eabc8;
        case 0x3eabccu: goto label_3eabcc;
        case 0x3eabd0u: goto label_3eabd0;
        case 0x3eabd4u: goto label_3eabd4;
        case 0x3eabd8u: goto label_3eabd8;
        case 0x3eabdcu: goto label_3eabdc;
        case 0x3eabe0u: goto label_3eabe0;
        case 0x3eabe4u: goto label_3eabe4;
        case 0x3eabe8u: goto label_3eabe8;
        case 0x3eabecu: goto label_3eabec;
        case 0x3eabf0u: goto label_3eabf0;
        case 0x3eabf4u: goto label_3eabf4;
        case 0x3eabf8u: goto label_3eabf8;
        case 0x3eabfcu: goto label_3eabfc;
        case 0x3eac00u: goto label_3eac00;
        case 0x3eac04u: goto label_3eac04;
        case 0x3eac08u: goto label_3eac08;
        case 0x3eac0cu: goto label_3eac0c;
        case 0x3eac10u: goto label_3eac10;
        case 0x3eac14u: goto label_3eac14;
        case 0x3eac18u: goto label_3eac18;
        case 0x3eac1cu: goto label_3eac1c;
        case 0x3eac20u: goto label_3eac20;
        case 0x3eac24u: goto label_3eac24;
        case 0x3eac28u: goto label_3eac28;
        case 0x3eac2cu: goto label_3eac2c;
        case 0x3eac30u: goto label_3eac30;
        case 0x3eac34u: goto label_3eac34;
        case 0x3eac38u: goto label_3eac38;
        case 0x3eac3cu: goto label_3eac3c;
        case 0x3eac40u: goto label_3eac40;
        case 0x3eac44u: goto label_3eac44;
        case 0x3eac48u: goto label_3eac48;
        case 0x3eac4cu: goto label_3eac4c;
        case 0x3eac50u: goto label_3eac50;
        case 0x3eac54u: goto label_3eac54;
        case 0x3eac58u: goto label_3eac58;
        case 0x3eac5cu: goto label_3eac5c;
        case 0x3eac60u: goto label_3eac60;
        case 0x3eac64u: goto label_3eac64;
        case 0x3eac68u: goto label_3eac68;
        case 0x3eac6cu: goto label_3eac6c;
        case 0x3eac70u: goto label_3eac70;
        case 0x3eac74u: goto label_3eac74;
        case 0x3eac78u: goto label_3eac78;
        case 0x3eac7cu: goto label_3eac7c;
        case 0x3eac80u: goto label_3eac80;
        case 0x3eac84u: goto label_3eac84;
        case 0x3eac88u: goto label_3eac88;
        case 0x3eac8cu: goto label_3eac8c;
        case 0x3eac90u: goto label_3eac90;
        case 0x3eac94u: goto label_3eac94;
        case 0x3eac98u: goto label_3eac98;
        case 0x3eac9cu: goto label_3eac9c;
        case 0x3eaca0u: goto label_3eaca0;
        case 0x3eaca4u: goto label_3eaca4;
        case 0x3eaca8u: goto label_3eaca8;
        case 0x3eacacu: goto label_3eacac;
        case 0x3eacb0u: goto label_3eacb0;
        case 0x3eacb4u: goto label_3eacb4;
        case 0x3eacb8u: goto label_3eacb8;
        case 0x3eacbcu: goto label_3eacbc;
        case 0x3eacc0u: goto label_3eacc0;
        case 0x3eacc4u: goto label_3eacc4;
        case 0x3eacc8u: goto label_3eacc8;
        case 0x3eacccu: goto label_3eaccc;
        case 0x3eacd0u: goto label_3eacd0;
        case 0x3eacd4u: goto label_3eacd4;
        case 0x3eacd8u: goto label_3eacd8;
        case 0x3eacdcu: goto label_3eacdc;
        case 0x3eace0u: goto label_3eace0;
        case 0x3eace4u: goto label_3eace4;
        case 0x3eace8u: goto label_3eace8;
        case 0x3eacecu: goto label_3eacec;
        case 0x3eacf0u: goto label_3eacf0;
        case 0x3eacf4u: goto label_3eacf4;
        case 0x3eacf8u: goto label_3eacf8;
        case 0x3eacfcu: goto label_3eacfc;
        case 0x3ead00u: goto label_3ead00;
        case 0x3ead04u: goto label_3ead04;
        case 0x3ead08u: goto label_3ead08;
        case 0x3ead0cu: goto label_3ead0c;
        case 0x3ead10u: goto label_3ead10;
        case 0x3ead14u: goto label_3ead14;
        case 0x3ead18u: goto label_3ead18;
        case 0x3ead1cu: goto label_3ead1c;
        case 0x3ead20u: goto label_3ead20;
        case 0x3ead24u: goto label_3ead24;
        case 0x3ead28u: goto label_3ead28;
        case 0x3ead2cu: goto label_3ead2c;
        case 0x3ead30u: goto label_3ead30;
        case 0x3ead34u: goto label_3ead34;
        case 0x3ead38u: goto label_3ead38;
        case 0x3ead3cu: goto label_3ead3c;
        case 0x3ead40u: goto label_3ead40;
        case 0x3ead44u: goto label_3ead44;
        case 0x3ead48u: goto label_3ead48;
        case 0x3ead4cu: goto label_3ead4c;
        case 0x3ead50u: goto label_3ead50;
        case 0x3ead54u: goto label_3ead54;
        case 0x3ead58u: goto label_3ead58;
        case 0x3ead5cu: goto label_3ead5c;
        case 0x3ead60u: goto label_3ead60;
        case 0x3ead64u: goto label_3ead64;
        case 0x3ead68u: goto label_3ead68;
        case 0x3ead6cu: goto label_3ead6c;
        case 0x3ead70u: goto label_3ead70;
        case 0x3ead74u: goto label_3ead74;
        case 0x3ead78u: goto label_3ead78;
        case 0x3ead7cu: goto label_3ead7c;
        case 0x3ead80u: goto label_3ead80;
        case 0x3ead84u: goto label_3ead84;
        case 0x3ead88u: goto label_3ead88;
        case 0x3ead8cu: goto label_3ead8c;
        case 0x3ead90u: goto label_3ead90;
        case 0x3ead94u: goto label_3ead94;
        case 0x3ead98u: goto label_3ead98;
        case 0x3ead9cu: goto label_3ead9c;
        case 0x3eada0u: goto label_3eada0;
        case 0x3eada4u: goto label_3eada4;
        case 0x3eada8u: goto label_3eada8;
        case 0x3eadacu: goto label_3eadac;
        case 0x3eadb0u: goto label_3eadb0;
        case 0x3eadb4u: goto label_3eadb4;
        case 0x3eadb8u: goto label_3eadb8;
        case 0x3eadbcu: goto label_3eadbc;
        case 0x3eadc0u: goto label_3eadc0;
        case 0x3eadc4u: goto label_3eadc4;
        case 0x3eadc8u: goto label_3eadc8;
        case 0x3eadccu: goto label_3eadcc;
        case 0x3eadd0u: goto label_3eadd0;
        case 0x3eadd4u: goto label_3eadd4;
        case 0x3eadd8u: goto label_3eadd8;
        case 0x3eaddcu: goto label_3eaddc;
        case 0x3eade0u: goto label_3eade0;
        case 0x3eade4u: goto label_3eade4;
        case 0x3eade8u: goto label_3eade8;
        case 0x3eadecu: goto label_3eadec;
        case 0x3eadf0u: goto label_3eadf0;
        case 0x3eadf4u: goto label_3eadf4;
        case 0x3eadf8u: goto label_3eadf8;
        case 0x3eadfcu: goto label_3eadfc;
        case 0x3eae00u: goto label_3eae00;
        case 0x3eae04u: goto label_3eae04;
        case 0x3eae08u: goto label_3eae08;
        case 0x3eae0cu: goto label_3eae0c;
        case 0x3eae10u: goto label_3eae10;
        case 0x3eae14u: goto label_3eae14;
        case 0x3eae18u: goto label_3eae18;
        case 0x3eae1cu: goto label_3eae1c;
        case 0x3eae20u: goto label_3eae20;
        case 0x3eae24u: goto label_3eae24;
        case 0x3eae28u: goto label_3eae28;
        case 0x3eae2cu: goto label_3eae2c;
        case 0x3eae30u: goto label_3eae30;
        case 0x3eae34u: goto label_3eae34;
        case 0x3eae38u: goto label_3eae38;
        case 0x3eae3cu: goto label_3eae3c;
        case 0x3eae40u: goto label_3eae40;
        case 0x3eae44u: goto label_3eae44;
        case 0x3eae48u: goto label_3eae48;
        case 0x3eae4cu: goto label_3eae4c;
        case 0x3eae50u: goto label_3eae50;
        case 0x3eae54u: goto label_3eae54;
        case 0x3eae58u: goto label_3eae58;
        case 0x3eae5cu: goto label_3eae5c;
        case 0x3eae60u: goto label_3eae60;
        case 0x3eae64u: goto label_3eae64;
        case 0x3eae68u: goto label_3eae68;
        case 0x3eae6cu: goto label_3eae6c;
        case 0x3eae70u: goto label_3eae70;
        case 0x3eae74u: goto label_3eae74;
        case 0x3eae78u: goto label_3eae78;
        case 0x3eae7cu: goto label_3eae7c;
        case 0x3eae80u: goto label_3eae80;
        case 0x3eae84u: goto label_3eae84;
        case 0x3eae88u: goto label_3eae88;
        case 0x3eae8cu: goto label_3eae8c;
        case 0x3eae90u: goto label_3eae90;
        case 0x3eae94u: goto label_3eae94;
        case 0x3eae98u: goto label_3eae98;
        case 0x3eae9cu: goto label_3eae9c;
        case 0x3eaea0u: goto label_3eaea0;
        case 0x3eaea4u: goto label_3eaea4;
        case 0x3eaea8u: goto label_3eaea8;
        case 0x3eaeacu: goto label_3eaeac;
        case 0x3eaeb0u: goto label_3eaeb0;
        case 0x3eaeb4u: goto label_3eaeb4;
        case 0x3eaeb8u: goto label_3eaeb8;
        case 0x3eaebcu: goto label_3eaebc;
        case 0x3eaec0u: goto label_3eaec0;
        case 0x3eaec4u: goto label_3eaec4;
        case 0x3eaec8u: goto label_3eaec8;
        case 0x3eaeccu: goto label_3eaecc;
        case 0x3eaed0u: goto label_3eaed0;
        case 0x3eaed4u: goto label_3eaed4;
        case 0x3eaed8u: goto label_3eaed8;
        case 0x3eaedcu: goto label_3eaedc;
        case 0x3eaee0u: goto label_3eaee0;
        case 0x3eaee4u: goto label_3eaee4;
        case 0x3eaee8u: goto label_3eaee8;
        case 0x3eaeecu: goto label_3eaeec;
        case 0x3eaef0u: goto label_3eaef0;
        case 0x3eaef4u: goto label_3eaef4;
        case 0x3eaef8u: goto label_3eaef8;
        case 0x3eaefcu: goto label_3eaefc;
        case 0x3eaf00u: goto label_3eaf00;
        case 0x3eaf04u: goto label_3eaf04;
        case 0x3eaf08u: goto label_3eaf08;
        case 0x3eaf0cu: goto label_3eaf0c;
        case 0x3eaf10u: goto label_3eaf10;
        case 0x3eaf14u: goto label_3eaf14;
        case 0x3eaf18u: goto label_3eaf18;
        case 0x3eaf1cu: goto label_3eaf1c;
        case 0x3eaf20u: goto label_3eaf20;
        case 0x3eaf24u: goto label_3eaf24;
        case 0x3eaf28u: goto label_3eaf28;
        case 0x3eaf2cu: goto label_3eaf2c;
        case 0x3eaf30u: goto label_3eaf30;
        case 0x3eaf34u: goto label_3eaf34;
        case 0x3eaf38u: goto label_3eaf38;
        case 0x3eaf3cu: goto label_3eaf3c;
        case 0x3eaf40u: goto label_3eaf40;
        case 0x3eaf44u: goto label_3eaf44;
        case 0x3eaf48u: goto label_3eaf48;
        case 0x3eaf4cu: goto label_3eaf4c;
        case 0x3eaf50u: goto label_3eaf50;
        case 0x3eaf54u: goto label_3eaf54;
        case 0x3eaf58u: goto label_3eaf58;
        case 0x3eaf5cu: goto label_3eaf5c;
        case 0x3eaf60u: goto label_3eaf60;
        case 0x3eaf64u: goto label_3eaf64;
        case 0x3eaf68u: goto label_3eaf68;
        case 0x3eaf6cu: goto label_3eaf6c;
        case 0x3eaf70u: goto label_3eaf70;
        case 0x3eaf74u: goto label_3eaf74;
        case 0x3eaf78u: goto label_3eaf78;
        case 0x3eaf7cu: goto label_3eaf7c;
        case 0x3eaf80u: goto label_3eaf80;
        case 0x3eaf84u: goto label_3eaf84;
        case 0x3eaf88u: goto label_3eaf88;
        case 0x3eaf8cu: goto label_3eaf8c;
        case 0x3eaf90u: goto label_3eaf90;
        case 0x3eaf94u: goto label_3eaf94;
        case 0x3eaf98u: goto label_3eaf98;
        case 0x3eaf9cu: goto label_3eaf9c;
        case 0x3eafa0u: goto label_3eafa0;
        case 0x3eafa4u: goto label_3eafa4;
        case 0x3eafa8u: goto label_3eafa8;
        case 0x3eafacu: goto label_3eafac;
        case 0x3eafb0u: goto label_3eafb0;
        case 0x3eafb4u: goto label_3eafb4;
        case 0x3eafb8u: goto label_3eafb8;
        case 0x3eafbcu: goto label_3eafbc;
        case 0x3eafc0u: goto label_3eafc0;
        case 0x3eafc4u: goto label_3eafc4;
        case 0x3eafc8u: goto label_3eafc8;
        case 0x3eafccu: goto label_3eafcc;
        case 0x3eafd0u: goto label_3eafd0;
        case 0x3eafd4u: goto label_3eafd4;
        case 0x3eafd8u: goto label_3eafd8;
        case 0x3eafdcu: goto label_3eafdc;
        case 0x3eafe0u: goto label_3eafe0;
        case 0x3eafe4u: goto label_3eafe4;
        case 0x3eafe8u: goto label_3eafe8;
        case 0x3eafecu: goto label_3eafec;
        case 0x3eaff0u: goto label_3eaff0;
        case 0x3eaff4u: goto label_3eaff4;
        case 0x3eaff8u: goto label_3eaff8;
        case 0x3eaffcu: goto label_3eaffc;
        case 0x3eb000u: goto label_3eb000;
        case 0x3eb004u: goto label_3eb004;
        case 0x3eb008u: goto label_3eb008;
        case 0x3eb00cu: goto label_3eb00c;
        case 0x3eb010u: goto label_3eb010;
        case 0x3eb014u: goto label_3eb014;
        case 0x3eb018u: goto label_3eb018;
        case 0x3eb01cu: goto label_3eb01c;
        case 0x3eb020u: goto label_3eb020;
        case 0x3eb024u: goto label_3eb024;
        case 0x3eb028u: goto label_3eb028;
        case 0x3eb02cu: goto label_3eb02c;
        case 0x3eb030u: goto label_3eb030;
        case 0x3eb034u: goto label_3eb034;
        case 0x3eb038u: goto label_3eb038;
        case 0x3eb03cu: goto label_3eb03c;
        case 0x3eb040u: goto label_3eb040;
        case 0x3eb044u: goto label_3eb044;
        case 0x3eb048u: goto label_3eb048;
        case 0x3eb04cu: goto label_3eb04c;
        case 0x3eb050u: goto label_3eb050;
        case 0x3eb054u: goto label_3eb054;
        case 0x3eb058u: goto label_3eb058;
        case 0x3eb05cu: goto label_3eb05c;
        case 0x3eb060u: goto label_3eb060;
        case 0x3eb064u: goto label_3eb064;
        case 0x3eb068u: goto label_3eb068;
        case 0x3eb06cu: goto label_3eb06c;
        case 0x3eb070u: goto label_3eb070;
        case 0x3eb074u: goto label_3eb074;
        case 0x3eb078u: goto label_3eb078;
        case 0x3eb07cu: goto label_3eb07c;
        case 0x3eb080u: goto label_3eb080;
        case 0x3eb084u: goto label_3eb084;
        case 0x3eb088u: goto label_3eb088;
        case 0x3eb08cu: goto label_3eb08c;
        case 0x3eb090u: goto label_3eb090;
        case 0x3eb094u: goto label_3eb094;
        case 0x3eb098u: goto label_3eb098;
        case 0x3eb09cu: goto label_3eb09c;
        case 0x3eb0a0u: goto label_3eb0a0;
        case 0x3eb0a4u: goto label_3eb0a4;
        case 0x3eb0a8u: goto label_3eb0a8;
        case 0x3eb0acu: goto label_3eb0ac;
        case 0x3eb0b0u: goto label_3eb0b0;
        case 0x3eb0b4u: goto label_3eb0b4;
        case 0x3eb0b8u: goto label_3eb0b8;
        case 0x3eb0bcu: goto label_3eb0bc;
        case 0x3eb0c0u: goto label_3eb0c0;
        case 0x3eb0c4u: goto label_3eb0c4;
        case 0x3eb0c8u: goto label_3eb0c8;
        case 0x3eb0ccu: goto label_3eb0cc;
        case 0x3eb0d0u: goto label_3eb0d0;
        case 0x3eb0d4u: goto label_3eb0d4;
        case 0x3eb0d8u: goto label_3eb0d8;
        case 0x3eb0dcu: goto label_3eb0dc;
        default: break;
    }

    ctx->pc = 0x3ea6f0u;

label_3ea6f0:
    // 0x3ea6f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3ea6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3ea6f4:
    // 0x3ea6f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ea6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ea6f8:
    // 0x3ea6f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3ea6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3ea6fc:
    // 0x3ea6fc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3ea6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3ea700:
    // 0x3ea700: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3ea700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3ea704:
    // 0x3ea704: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ea704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3ea708:
    // 0x3ea708: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ea708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ea70c:
    // 0x3ea70c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ea70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ea710:
    // 0x3ea710: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ea710u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea714:
    // 0x3ea714: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ea714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ea718:
    // 0x3ea718: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ea718u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ea71c:
    // 0x3ea71c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ea71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ea720:
    // 0x3ea720: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ea720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ea724:
    // 0x3ea724: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ea724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea728:
    // 0x3ea728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ea728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ea72c:
    // 0x3ea72c: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x3ea72cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea730:
    // 0x3ea730: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3ea730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3ea734:
    // 0x3ea734: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x3ea734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_3ea738:
    // 0x3ea738: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x3ea738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
label_3ea73c:
    // 0x3ea73c: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x3ea73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
label_3ea740:
    // 0x3ea740: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x3ea740u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
label_3ea744:
    // 0x3ea744: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3ea744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_3ea748:
    // 0x3ea748: 0x10000231  b           . + 4 + (0x231 << 2)
label_3ea74c:
    if (ctx->pc == 0x3EA74Cu) {
        ctx->pc = 0x3EA74Cu;
            // 0x3ea74c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x3EA750u;
        goto label_3ea750;
    }
    ctx->pc = 0x3EA748u;
    {
        const bool branch_taken_0x3ea748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA748u;
            // 0x3ea74c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea748) {
            ctx->pc = 0x3EB010u;
            goto label_3eb010;
        }
    }
    ctx->pc = 0x3EA750u;
label_3ea750:
    // 0x3ea750: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x3ea750u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_3ea754:
    // 0x3ea754: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x3ea754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_3ea758:
    // 0x3ea758: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x3ea758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3ea75c:
    // 0x3ea75c: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x3ea75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_3ea760:
    // 0x3ea760: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ea760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3ea764:
    // 0x3ea764: 0xc0aabb0  jal         func_2AAEC0
label_3ea768:
    if (ctx->pc == 0x3EA768u) {
        ctx->pc = 0x3EA768u;
            // 0x3ea768: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x3EA76Cu;
        goto label_3ea76c;
    }
    ctx->pc = 0x3EA764u;
    SET_GPR_U32(ctx, 31, 0x3EA76Cu);
    ctx->pc = 0x3EA768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA764u;
            // 0x3ea768: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAEC0u;
    if (runtime->hasFunction(0x2AAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x2AAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA76Cu; }
        if (ctx->pc != 0x3EA76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAEC0_0x2aaec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA76Cu; }
        if (ctx->pc != 0x3EA76Cu) { return; }
    }
    ctx->pc = 0x3EA76Cu;
label_3ea76c:
    // 0x3ea76c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3ea76cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea770:
    // 0x3ea770: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3ea770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3ea774:
    // 0x3ea774: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_3ea778:
    if (ctx->pc == 0x3EA778u) {
        ctx->pc = 0x3EA77Cu;
        goto label_3ea77c;
    }
    ctx->pc = 0x3EA774u;
    {
        const bool branch_taken_0x3ea774 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3ea774) {
            ctx->pc = 0x3EA790u;
            goto label_3ea790;
        }
    }
    ctx->pc = 0x3EA77Cu;
label_3ea77c:
    // 0x3ea77c: 0xc0fa724  jal         func_3E9C90
label_3ea780:
    if (ctx->pc == 0x3EA780u) {
        ctx->pc = 0x3EA780u;
            // 0x3ea780: 0x8fa400d4  lw          $a0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->pc = 0x3EA784u;
        goto label_3ea784;
    }
    ctx->pc = 0x3EA77Cu;
    SET_GPR_U32(ctx, 31, 0x3EA784u);
    ctx->pc = 0x3EA780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA77Cu;
            // 0x3ea780: 0x8fa400d4  lw          $a0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9C90u;
    if (runtime->hasFunction(0x3E9C90u)) {
        auto targetFn = runtime->lookupFunction(0x3E9C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA784u; }
        if (ctx->pc != 0x3EA784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9C90_0x3e9c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA784u; }
        if (ctx->pc != 0x3EA784u) { return; }
    }
    ctx->pc = 0x3EA784u;
label_3ea784:
    // 0x3ea784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ea788:
    if (ctx->pc == 0x3EA788u) {
        ctx->pc = 0x3EA78Cu;
        goto label_3ea78c;
    }
    ctx->pc = 0x3EA784u;
    {
        const bool branch_taken_0x3ea784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea784) {
            ctx->pc = 0x3EA798u;
            goto label_3ea798;
        }
    }
    ctx->pc = 0x3EA78Cu;
label_3ea78c:
    // 0x3ea78c: 0x0  nop
    ctx->pc = 0x3ea78cu;
    // NOP
label_3ea790:
    // 0x3ea790: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ea794:
    if (ctx->pc == 0x3EA794u) {
        ctx->pc = 0x3EA798u;
        goto label_3ea798;
    }
    ctx->pc = 0x3EA790u;
    {
        const bool branch_taken_0x3ea790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea790) {
            ctx->pc = 0x3EA7C8u;
            goto label_3ea7c8;
        }
    }
    ctx->pc = 0x3EA798u;
label_3ea798:
    // 0x3ea798: 0xc0fa720  jal         func_3E9C80
label_3ea79c:
    if (ctx->pc == 0x3EA79Cu) {
        ctx->pc = 0x3EA79Cu;
            // 0x3ea79c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3EA7A0u;
        goto label_3ea7a0;
    }
    ctx->pc = 0x3EA798u;
    SET_GPR_U32(ctx, 31, 0x3EA7A0u);
    ctx->pc = 0x3EA79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA798u;
            // 0x3ea79c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9C80u;
    if (runtime->hasFunction(0x3E9C80u)) {
        auto targetFn = runtime->lookupFunction(0x3E9C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA7A0u; }
        if (ctx->pc != 0x3EA7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9C80_0x3e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA7A0u; }
        if (ctx->pc != 0x3EA7A0u) { return; }
    }
    ctx->pc = 0x3EA7A0u;
label_3ea7a0:
    // 0x3ea7a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3ea7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3ea7a4:
    // 0x3ea7a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3ea7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea7a8:
    // 0x3ea7a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ea7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ea7ac:
    // 0x3ea7ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ea7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ea7b0:
    // 0x3ea7b0: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
label_3ea7b4:
    if (ctx->pc == 0x3EA7B4u) {
        ctx->pc = 0x3EA7B4u;
            // 0x3ea7b4: 0x92a20006  lbu         $v0, 0x6($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
        ctx->pc = 0x3EA7B8u;
        goto label_3ea7b8;
    }
    ctx->pc = 0x3EA7B0u;
    {
        const bool branch_taken_0x3ea7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea7b0) {
            ctx->pc = 0x3EA7B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA7B0u;
            // 0x3ea7b4: 0x92a20006  lbu         $v0, 0x6($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EA754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea754;
        }
    }
    ctx->pc = 0x3EA7B8u;
label_3ea7b8:
    // 0x3ea7b8: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3ea7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3ea7bc:
    // 0x3ea7bc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3ea7bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea7c0:
    // 0x3ea7c0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3ea7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3ea7c4:
    // 0x3ea7c4: 0x0  nop
    ctx->pc = 0x3ea7c4u;
    // NOP
label_3ea7c8:
    // 0x3ea7c8: 0x52c00238  beql        $s6, $zero, . + 4 + (0x238 << 2)
label_3ea7cc:
    if (ctx->pc == 0x3EA7CCu) {
        ctx->pc = 0x3EA7CCu;
            // 0x3ea7cc: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x3EA7D0u;
        goto label_3ea7d0;
    }
    ctx->pc = 0x3EA7C8u;
    {
        const bool branch_taken_0x3ea7c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea7c8) {
            ctx->pc = 0x3EA7CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA7C8u;
            // 0x3ea7cc: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EB0ACu;
            goto label_3eb0ac;
        }
    }
    ctx->pc = 0x3EA7D0u;
label_3ea7d0:
    // 0x3ea7d0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x3ea7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3ea7d4:
    // 0x3ea7d4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3ea7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3ea7d8:
    // 0x3ea7d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3ea7dc:
    if (ctx->pc == 0x3EA7DCu) {
        ctx->pc = 0x3EA7E0u;
        goto label_3ea7e0;
    }
    ctx->pc = 0x3EA7D8u;
    {
        const bool branch_taken_0x3ea7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea7d8) {
            ctx->pc = 0x3EA800u;
            goto label_3ea800;
        }
    }
    ctx->pc = 0x3EA7E0u;
label_3ea7e0:
    // 0x3ea7e0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x3ea7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3ea7e4:
    // 0x3ea7e4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3ea7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3ea7e8:
    // 0x3ea7e8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3ea7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3ea7ec:
    // 0x3ea7ec: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3ea7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ea7f0:
    // 0x3ea7f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ea7f4:
    if (ctx->pc == 0x3EA7F4u) {
        ctx->pc = 0x3EA7F8u;
        goto label_3ea7f8;
    }
    ctx->pc = 0x3EA7F0u;
    {
        const bool branch_taken_0x3ea7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea7f0) {
            ctx->pc = 0x3EA800u;
            goto label_3ea800;
        }
    }
    ctx->pc = 0x3EA7F8u;
label_3ea7f8:
    // 0x3ea7f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ea7fc:
    if (ctx->pc == 0x3EA7FCu) {
        ctx->pc = 0x3EA7FCu;
            // 0x3ea7fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EA800u;
        goto label_3ea800;
    }
    ctx->pc = 0x3EA7F8u;
    {
        const bool branch_taken_0x3ea7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA7F8u;
            // 0x3ea7fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea7f8) {
            ctx->pc = 0x3EA808u;
            goto label_3ea808;
        }
    }
    ctx->pc = 0x3EA800u;
label_3ea800:
    // 0x3ea800: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ea800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea804:
    // 0x3ea804: 0x0  nop
    ctx->pc = 0x3ea804u;
    // NOP
label_3ea808:
    // 0x3ea808: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ea808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ea80c:
    // 0x3ea80c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3ea80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3ea810:
    // 0x3ea810: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3ea810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3ea814:
    // 0x3ea814: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3ea818:
    if (ctx->pc == 0x3EA818u) {
        ctx->pc = 0x3EA81Cu;
        goto label_3ea81c;
    }
    ctx->pc = 0x3EA814u;
    {
        const bool branch_taken_0x3ea814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea814) {
            ctx->pc = 0x3EA840u;
            goto label_3ea840;
        }
    }
    ctx->pc = 0x3EA81Cu;
label_3ea81c:
    // 0x3ea81c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3ea81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3ea820:
    // 0x3ea820: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x3ea820u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3ea824:
    // 0x3ea824: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x3ea824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3ea828:
    // 0x3ea828: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3ea828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3ea82c:
    // 0x3ea82c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3ea82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_3ea830:
    // 0x3ea830: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3ea830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3ea834:
    // 0x3ea834: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ea834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ea838:
    // 0x3ea838: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3ea838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_3ea83c:
    // 0x3ea83c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3ea83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_3ea840:
    // 0x3ea840: 0x1640002d  bnez        $s2, . + 4 + (0x2D << 2)
label_3ea844:
    if (ctx->pc == 0x3EA844u) {
        ctx->pc = 0x3EA848u;
        goto label_3ea848;
    }
    ctx->pc = 0x3EA840u;
    {
        const bool branch_taken_0x3ea840 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea840) {
            ctx->pc = 0x3EA8F8u;
            goto label_3ea8f8;
        }
    }
    ctx->pc = 0x3EA848u;
label_3ea848:
    // 0x3ea848: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x3ea848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ea84c:
    // 0x3ea84c: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x3ea84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3ea850:
    // 0x3ea850: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x3ea850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_3ea854:
    // 0x3ea854: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x3ea854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3ea858:
    // 0x3ea858: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x3ea858u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3ea85c:
    // 0x3ea85c: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x3ea85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3ea860:
    // 0x3ea860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ea860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ea864:
    // 0x3ea864: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ea864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ea868:
    // 0x3ea868: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x3ea868u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3ea86c:
    // 0x3ea86c: 0x1012  mflo        $v0
    ctx->pc = 0x3ea86cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3ea870:
    // 0x3ea870: 0xc29018  mult        $s2, $a2, $v0
    ctx->pc = 0x3ea870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_3ea874:
    // 0x3ea874: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_3ea878:
    if (ctx->pc == 0x3EA878u) {
        ctx->pc = 0x3EA87Cu;
        goto label_3ea87c;
    }
    ctx->pc = 0x3EA874u;
    {
        const bool branch_taken_0x3ea874 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ea874) {
            ctx->pc = 0x3EA8A0u;
            goto label_3ea8a0;
        }
    }
    ctx->pc = 0x3EA87Cu;
label_3ea87c:
    // 0x3ea87c: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x3ea87cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ea880:
    // 0x3ea880: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x3ea880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ea884:
    // 0x3ea884: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x3ea884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_3ea888:
    // 0x3ea888: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3ea888u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ea88c:
    // 0x3ea88c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3ea890:
    if (ctx->pc == 0x3EA890u) {
        ctx->pc = 0x3EA894u;
        goto label_3ea894;
    }
    ctx->pc = 0x3EA88Cu;
    {
        const bool branch_taken_0x3ea88c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea88c) {
            ctx->pc = 0x3EA898u;
            goto label_3ea898;
        }
    }
    ctx->pc = 0x3EA894u;
label_3ea894:
    // 0x3ea894: 0x739023  subu        $s2, $v1, $s3
    ctx->pc = 0x3ea894u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3ea898:
    // 0x3ea898: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ea89c:
    if (ctx->pc == 0x3EA89Cu) {
        ctx->pc = 0x3EA8A0u;
        goto label_3ea8a0;
    }
    ctx->pc = 0x3EA898u;
    {
        const bool branch_taken_0x3ea898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea898) {
            ctx->pc = 0x3EA8A8u;
            goto label_3ea8a8;
        }
    }
    ctx->pc = 0x3EA8A0u;
label_3ea8a0:
    // 0x3ea8a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ea8a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea8a4:
    // 0x3ea8a4: 0x0  nop
    ctx->pc = 0x3ea8a4u;
    // NOP
label_3ea8a8:
    // 0x3ea8a8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_3ea8ac:
    if (ctx->pc == 0x3EA8ACu) {
        ctx->pc = 0x3EA8B0u;
        goto label_3ea8b0;
    }
    ctx->pc = 0x3EA8A8u;
    {
        const bool branch_taken_0x3ea8a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea8a8) {
            ctx->pc = 0x3EA8B8u;
            goto label_3ea8b8;
        }
    }
    ctx->pc = 0x3EA8B0u;
label_3ea8b0:
    // 0x3ea8b0: 0x1000000f  b           . + 4 + (0xF << 2)
label_3ea8b4:
    if (ctx->pc == 0x3EA8B4u) {
        ctx->pc = 0x3EA8B8u;
        goto label_3ea8b8;
    }
    ctx->pc = 0x3EA8B0u;
    {
        const bool branch_taken_0x3ea8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea8b0) {
            ctx->pc = 0x3EA8F0u;
            goto label_3ea8f0;
        }
    }
    ctx->pc = 0x3EA8B8u;
label_3ea8b8:
    // 0x3ea8b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ea8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ea8bc:
    // 0x3ea8bc: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3ea8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3ea8c0:
    // 0x3ea8c0: 0x40f809  jalr        $v0
label_3ea8c4:
    if (ctx->pc == 0x3EA8C4u) {
        ctx->pc = 0x3EA8C4u;
            // 0x3ea8c4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3EA8C8u;
        goto label_3ea8c8;
    }
    ctx->pc = 0x3EA8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA8C8u);
        ctx->pc = 0x3EA8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA8C0u;
            // 0x3ea8c4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EA8C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EA8C8u; }
            if (ctx->pc != 0x3EA8C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3EA8C8u;
label_3ea8c8:
    // 0x3ea8c8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3ea8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3ea8cc:
    // 0x3ea8cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3ea8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea8d0:
    // 0x3ea8d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ea8d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ea8d4:
    // 0x3ea8d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ea8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ea8d8:
    // 0x3ea8d8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_3ea8dc:
    if (ctx->pc == 0x3EA8DCu) {
        ctx->pc = 0x3EA8E0u;
        goto label_3ea8e0;
    }
    ctx->pc = 0x3EA8D8u;
    {
        const bool branch_taken_0x3ea8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea8d8) {
            ctx->pc = 0x3EA848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea848;
        }
    }
    ctx->pc = 0x3EA8E0u;
label_3ea8e0:
    // 0x3ea8e0: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3ea8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3ea8e4:
    // 0x3ea8e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ea8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea8e8:
    // 0x3ea8e8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3ea8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3ea8ec:
    // 0x3ea8ec: 0x0  nop
    ctx->pc = 0x3ea8ecu;
    // NOP
label_3ea8f0:
    // 0x3ea8f0: 0x126001ed  beqz        $s3, . + 4 + (0x1ED << 2)
label_3ea8f4:
    if (ctx->pc == 0x3EA8F4u) {
        ctx->pc = 0x3EA8F8u;
        goto label_3ea8f8;
    }
    ctx->pc = 0x3EA8F0u;
    {
        const bool branch_taken_0x3ea8f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea8f0) {
            ctx->pc = 0x3EB0A8u;
            goto label_3eb0a8;
        }
    }
    ctx->pc = 0x3EA8F8u;
label_3ea8f8:
    // 0x3ea8f8: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x3ea8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea8fc:
    // 0x3ea8fc: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_3ea900:
    if (ctx->pc == 0x3EA900u) {
        ctx->pc = 0x3EA904u;
        goto label_3ea904;
    }
    ctx->pc = 0x3EA8FCu;
    {
        const bool branch_taken_0x3ea8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea8fc) {
            ctx->pc = 0x3EABA0u;
            goto label_3eaba0;
        }
    }
    ctx->pc = 0x3EA904u;
label_3ea904:
    // 0x3ea904: 0x92a20054  lbu         $v0, 0x54($s5)
    ctx->pc = 0x3ea904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 84)));
label_3ea908:
    // 0x3ea908: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3ea90c:
    if (ctx->pc == 0x3EA90Cu) {
        ctx->pc = 0x3EA910u;
        goto label_3ea910;
    }
    ctx->pc = 0x3EA908u;
    {
        const bool branch_taken_0x3ea908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea908) {
            ctx->pc = 0x3EA990u;
            goto label_3ea990;
        }
    }
    ctx->pc = 0x3EA910u;
label_3ea910:
    // 0x3ea910: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3ea914:
    if (ctx->pc == 0x3EA914u) {
        ctx->pc = 0x3EA918u;
        goto label_3ea918;
    }
    ctx->pc = 0x3EA910u;
    {
        const bool branch_taken_0x3ea910 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3ea910) {
            ctx->pc = 0x3EA920u;
            goto label_3ea920;
        }
    }
    ctx->pc = 0x3EA918u;
label_3ea918:
    // 0x3ea918: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3ea91c:
    if (ctx->pc == 0x3EA91Cu) {
        ctx->pc = 0x3EA91Cu;
            // 0x3ea91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA920u;
        goto label_3ea920;
    }
    ctx->pc = 0x3EA918u;
    {
        const bool branch_taken_0x3ea918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA918u;
            // 0x3ea91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea918) {
            ctx->pc = 0x3EABA8u;
            goto label_3eaba8;
        }
    }
    ctx->pc = 0x3EA920u;
label_3ea920:
    // 0x3ea920: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3ea920u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3ea924:
    // 0x3ea924: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_3ea928:
    if (ctx->pc == 0x3EA928u) {
        ctx->pc = 0x3EA92Cu;
        goto label_3ea92c;
    }
    ctx->pc = 0x3EA924u;
    {
        const bool branch_taken_0x3ea924 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea924) {
            ctx->pc = 0x3EA958u;
            goto label_3ea958;
        }
    }
    ctx->pc = 0x3EA92Cu;
label_3ea92c:
    // 0x3ea92c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea930:
    // 0x3ea930: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3ea930u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea934:
    // 0x3ea934: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3ea934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3ea938:
    // 0x3ea938: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea938u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea93c:
    // 0x3ea93c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea940:
    // 0x3ea940: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3ea940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3ea944:
    // 0x3ea944: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea944u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_3ea948:
    // 0x3ea948: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea94c:
    // 0x3ea94c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ea94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ea950:
    // 0x3ea950: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ea954:
    if (ctx->pc == 0x3EA954u) {
        ctx->pc = 0x3EA954u;
            // 0x3ea954: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3EA958u;
        goto label_3ea958;
    }
    ctx->pc = 0x3EA950u;
    {
        const bool branch_taken_0x3ea950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA950u;
            // 0x3ea954: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea950) {
            ctx->pc = 0x3EA988u;
            goto label_3ea988;
        }
    }
    ctx->pc = 0x3EA958u;
label_3ea958:
    // 0x3ea958: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3ea958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea95c:
    // 0x3ea95c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3ea95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3ea960:
    // 0x3ea960: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ea960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea964:
    // 0x3ea964: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ea964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ea968:
    // 0x3ea968: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3ea968u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ea96c:
    // 0x3ea96c: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3ea96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3ea970:
    // 0x3ea970: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3ea970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3ea974:
    // 0x3ea974: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea974u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea978:
    // 0x3ea978: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea97c:
    // 0x3ea97c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3ea97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ea980:
    // 0x3ea980: 0x30510007  andi        $s1, $v0, 0x7
    ctx->pc = 0x3ea980u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3ea984:
    // 0x3ea984: 0x0  nop
    ctx->pc = 0x3ea984u;
    // NOP
label_3ea988:
    // 0x3ea988: 0xa2a00054  sb          $zero, 0x54($s5)
    ctx->pc = 0x3ea988u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 0));
label_3ea98c:
    // 0x3ea98c: 0x0  nop
    ctx->pc = 0x3ea98cu;
    // NOP
label_3ea990:
    // 0x3ea990: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3ea990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea994:
    // 0x3ea994: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
label_3ea998:
    if (ctx->pc == 0x3EA998u) {
        ctx->pc = 0x3EA99Cu;
        goto label_3ea99c;
    }
    ctx->pc = 0x3EA994u;
    {
        const bool branch_taken_0x3ea994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea994) {
            ctx->pc = 0x3EABA0u;
            goto label_3eaba0;
        }
    }
    ctx->pc = 0x3EA99Cu;
label_3ea99c:
    // 0x3ea99c: 0x0  nop
    ctx->pc = 0x3ea99cu;
    // NOP
label_3ea9a0:
    // 0x3ea9a0: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3ea9a4:
    if (ctx->pc == 0x3EA9A4u) {
        ctx->pc = 0x3EA9A8u;
        goto label_3ea9a8;
    }
    ctx->pc = 0x3EA9A0u;
    {
        const bool branch_taken_0x3ea9a0 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3ea9a0) {
            ctx->pc = 0x3EA9B0u;
            goto label_3ea9b0;
        }
    }
    ctx->pc = 0x3EA9A8u;
label_3ea9a8:
    // 0x3ea9a8: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3ea9ac:
    if (ctx->pc == 0x3EA9ACu) {
        ctx->pc = 0x3EA9ACu;
            // 0x3ea9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA9B0u;
        goto label_3ea9b0;
    }
    ctx->pc = 0x3EA9A8u;
    {
        const bool branch_taken_0x3ea9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA9A8u;
            // 0x3ea9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea9a8) {
            ctx->pc = 0x3EABA8u;
            goto label_3eaba8;
        }
    }
    ctx->pc = 0x3EA9B0u;
label_3ea9b0:
    // 0x3ea9b0: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x3ea9b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3ea9b4:
    // 0x3ea9b4: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_3ea9b8:
    if (ctx->pc == 0x3EA9B8u) {
        ctx->pc = 0x3EA9BCu;
        goto label_3ea9bc;
    }
    ctx->pc = 0x3EA9B4u;
    {
        const bool branch_taken_0x3ea9b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea9b4) {
            ctx->pc = 0x3EAA70u;
            goto label_3eaa70;
        }
    }
    ctx->pc = 0x3EA9BCu;
label_3ea9bc:
    // 0x3ea9bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ea9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea9c0:
    // 0x3ea9c0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_3ea9c4:
    if (ctx->pc == 0x3EA9C4u) {
        ctx->pc = 0x3EA9C8u;
        goto label_3ea9c8;
    }
    ctx->pc = 0x3EA9C0u;
    {
        const bool branch_taken_0x3ea9c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ea9c0) {
            ctx->pc = 0x3EA9F0u;
            goto label_3ea9f0;
        }
    }
    ctx->pc = 0x3EA9C8u;
label_3ea9c8:
    // 0x3ea9c8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea9cc:
    // 0x3ea9cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ea9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ea9d0:
    // 0x3ea9d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ea9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea9d4:
    // 0x3ea9d4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ea9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ea9d8:
    // 0x3ea9d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3ea9d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea9dc:
    // 0x3ea9dc: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea9e0:
    // 0x3ea9e0: 0xc0aacd0  jal         func_2AB340
label_3ea9e4:
    if (ctx->pc == 0x3EA9E4u) {
        ctx->pc = 0x3EA9E4u;
            // 0x3ea9e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EA9E8u;
        goto label_3ea9e8;
    }
    ctx->pc = 0x3EA9E0u;
    SET_GPR_U32(ctx, 31, 0x3EA9E8u);
    ctx->pc = 0x3EA9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA9E0u;
            // 0x3ea9e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA9E8u; }
        if (ctx->pc != 0x3EA9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA9E8u; }
        if (ctx->pc != 0x3EA9E8u) { return; }
    }
    ctx->pc = 0x3EA9E8u;
label_3ea9e8:
    // 0x3ea9e8: 0x10000019  b           . + 4 + (0x19 << 2)
label_3ea9ec:
    if (ctx->pc == 0x3EA9ECu) {
        ctx->pc = 0x3EA9F0u;
        goto label_3ea9f0;
    }
    ctx->pc = 0x3EA9E8u;
    {
        const bool branch_taken_0x3ea9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea9e8) {
            ctx->pc = 0x3EAA50u;
            goto label_3eaa50;
        }
    }
    ctx->pc = 0x3EA9F0u;
label_3ea9f0:
    // 0x3ea9f0: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x3ea9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea9f4:
    // 0x3ea9f4: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x3ea9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3ea9f8:
    // 0x3ea9f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ea9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ea9fc:
    // 0x3ea9fc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3ea9fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3eaa00:
    // 0x3eaa00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eaa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eaa04:
    // 0x3eaa04: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x3eaa04u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3eaa08:
    // 0x3eaa08: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eaa08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3eaa0c:
    // 0x3eaa0c: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3eaa0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3eaa10:
    // 0x3eaa10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3eaa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3eaa14:
    // 0x3eaa14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3eaa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3eaa18:
    // 0x3eaa18: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eaa18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eaa1c:
    // 0x3eaa1c: 0xc0aacd0  jal         func_2AB340
label_3eaa20:
    if (ctx->pc == 0x3EAA20u) {
        ctx->pc = 0x3EAA20u;
            // 0x3eaa20: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EAA24u;
        goto label_3eaa24;
    }
    ctx->pc = 0x3EAA1Cu;
    SET_GPR_U32(ctx, 31, 0x3EAA24u);
    ctx->pc = 0x3EAA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAA1Cu;
            // 0x3eaa20: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAA24u; }
        if (ctx->pc != 0x3EAA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAA24u; }
        if (ctx->pc != 0x3EAA24u) { return; }
    }
    ctx->pc = 0x3EAA24u;
label_3eaa24:
    // 0x3eaa24: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
label_3eaa28:
    if (ctx->pc == 0x3EAA28u) {
        ctx->pc = 0x3EAA2Cu;
        goto label_3eaa2c;
    }
    ctx->pc = 0x3EAA24u;
    {
        const bool branch_taken_0x3eaa24 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3eaa24) {
            ctx->pc = 0x3EAA40u;
            goto label_3eaa40;
        }
    }
    ctx->pc = 0x3EAA2Cu;
label_3eaa2c:
    // 0x3eaa2c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3eaa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eaa30:
    // 0x3eaa30: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3eaa30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaa34:
    // 0x3eaa34: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3eaa34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3eaa38:
    // 0x3eaa38: 0x10000005  b           . + 4 + (0x5 << 2)
label_3eaa3c:
    if (ctx->pc == 0x3EAA3Cu) {
        ctx->pc = 0x3EAA3Cu;
            // 0x3eaa3c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EAA40u;
        goto label_3eaa40;
    }
    ctx->pc = 0x3EAA38u;
    {
        const bool branch_taken_0x3eaa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAA38u;
            // 0x3eaa3c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaa38) {
            ctx->pc = 0x3EAA50u;
            goto label_3eaa50;
        }
    }
    ctx->pc = 0x3EAA40u;
label_3eaa40:
    // 0x3eaa40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eaa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eaa44:
    // 0x3eaa44: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3eaa44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3eaa48:
    // 0x3eaa48: 0x10000057  b           . + 4 + (0x57 << 2)
label_3eaa4c:
    if (ctx->pc == 0x3EAA4Cu) {
        ctx->pc = 0x3EAA4Cu;
            // 0x3eaa4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EAA50u;
        goto label_3eaa50;
    }
    ctx->pc = 0x3EAA48u;
    {
        const bool branch_taken_0x3eaa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAA48u;
            // 0x3eaa4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaa48) {
            ctx->pc = 0x3EABA8u;
            goto label_3eaba8;
        }
    }
    ctx->pc = 0x3EAA50u;
label_3eaa50:
    // 0x3eaa50: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3eaa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eaa54:
    // 0x3eaa54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eaa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eaa58:
    // 0x3eaa58: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x3eaa58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_3eaa5c:
    // 0x3eaa5c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3eaa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eaa60:
    // 0x3eaa60: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3eaa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3eaa64:
    // 0x3eaa64: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3eaa68:
    if (ctx->pc == 0x3EAA68u) {
        ctx->pc = 0x3EAA68u;
            // 0x3eaa68: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x3EAA6Cu;
        goto label_3eaa6c;
    }
    ctx->pc = 0x3EAA64u;
    {
        const bool branch_taken_0x3eaa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAA64u;
            // 0x3eaa68: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaa64) {
            ctx->pc = 0x3EAB90u;
            goto label_3eab90;
        }
    }
    ctx->pc = 0x3EAA6Cu;
label_3eaa6c:
    // 0x3eaa6c: 0x0  nop
    ctx->pc = 0x3eaa6cu;
    // NOP
label_3eaa70:
    // 0x3eaa70: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x3eaa70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3eaa74:
    // 0x3eaa74: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_3eaa78:
    if (ctx->pc == 0x3EAA78u) {
        ctx->pc = 0x3EAA7Cu;
        goto label_3eaa7c;
    }
    ctx->pc = 0x3EAA74u;
    {
        const bool branch_taken_0x3eaa74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eaa74) {
            ctx->pc = 0x3EAB00u;
            goto label_3eab00;
        }
    }
    ctx->pc = 0x3EAA7Cu;
label_3eaa7c:
    // 0x3eaa7c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eaa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eaa80:
    // 0x3eaa80: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_3eaa84:
    if (ctx->pc == 0x3EAA84u) {
        ctx->pc = 0x3EAA88u;
        goto label_3eaa88;
    }
    ctx->pc = 0x3EAA80u;
    {
        const bool branch_taken_0x3eaa80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eaa80) {
            ctx->pc = 0x3EAAA8u;
            goto label_3eaaa8;
        }
    }
    ctx->pc = 0x3EAA88u;
label_3eaa88:
    // 0x3eaa88: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3eaa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eaa8c:
    // 0x3eaa8c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3eaa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3eaa90:
    // 0x3eaa90: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x3eaa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3eaa94:
    // 0x3eaa94: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3eaa94u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3eaa98:
    // 0x3eaa98: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x3eaa98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3eaa9c:
    // 0x3eaa9c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3eaa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3eaaa0:
    // 0x3eaaa0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3eaaa4:
    if (ctx->pc == 0x3EAAA4u) {
        ctx->pc = 0x3EAAA4u;
            // 0x3eaaa4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EAAA8u;
        goto label_3eaaa8;
    }
    ctx->pc = 0x3EAAA0u;
    {
        const bool branch_taken_0x3eaaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAAA0u;
            // 0x3eaaa4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaaa0) {
            ctx->pc = 0x3EAAD0u;
            goto label_3eaad0;
        }
    }
    ctx->pc = 0x3EAAA8u;
label_3eaaa8:
    // 0x3eaaa8: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x3eaaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3eaaac:
    // 0x3eaaac: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x3eaaacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3eaab0:
    // 0x3eaab0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3eaab0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3eaab4:
    // 0x3eaab4: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x3eaab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eaab8:
    // 0x3eaab8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3eaab8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3eaabc:
    // 0x3eaabc: 0x852007  srav        $a0, $a1, $a0
    ctx->pc = 0x3eaabcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3eaac0:
    // 0x3eaac0: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x3eaac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3eaac4:
    // 0x3eaac4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3eaac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3eaac8:
    // 0x3eaac8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3eaac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3eaacc:
    // 0x3eaacc: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eaaccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eaad0:
    // 0x3eaad0: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3eaad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eaad4:
    // 0x3eaad4: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x3eaad4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3eaad8:
    // 0x3eaad8: 0x1e20002b  bgtz        $s1, . + 4 + (0x2B << 2)
label_3eaadc:
    if (ctx->pc == 0x3EAADCu) {
        ctx->pc = 0x3EAAE0u;
        goto label_3eaae0;
    }
    ctx->pc = 0x3EAAD8u;
    {
        const bool branch_taken_0x3eaad8 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x3eaad8) {
            ctx->pc = 0x3EAB88u;
            goto label_3eab88;
        }
    }
    ctx->pc = 0x3EAAE0u;
label_3eaae0:
    // 0x3eaae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3eaae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eaae4:
    // 0x3eaae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eaae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eaae8:
    // 0x3eaae8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eaae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3eaaec:
    // 0x3eaaec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eaaecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3eaaf0:
    // 0x3eaaf0: 0xc0aacd0  jal         func_2AB340
label_3eaaf4:
    if (ctx->pc == 0x3EAAF4u) {
        ctx->pc = 0x3EAAF4u;
            // 0x3eaaf4: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3EAAF8u;
        goto label_3eaaf8;
    }
    ctx->pc = 0x3EAAF0u;
    SET_GPR_U32(ctx, 31, 0x3EAAF8u);
    ctx->pc = 0x3EAAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAAF0u;
            // 0x3eaaf4: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAAF8u; }
        if (ctx->pc != 0x3EAAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAAF8u; }
        if (ctx->pc != 0x3EAAF8u) { return; }
    }
    ctx->pc = 0x3EAAF8u;
label_3eaaf8:
    // 0x3eaaf8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3eaafc:
    if (ctx->pc == 0x3EAAFCu) {
        ctx->pc = 0x3EAB00u;
        goto label_3eab00;
    }
    ctx->pc = 0x3EAAF8u;
    {
        const bool branch_taken_0x3eaaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eaaf8) {
            ctx->pc = 0x3EAB88u;
            goto label_3eab88;
        }
    }
    ctx->pc = 0x3EAB00u;
label_3eab00:
    // 0x3eab00: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3eab00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eab04:
    // 0x3eab04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3eab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eab08:
    // 0x3eab08: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3eab08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3eab0c:
    // 0x3eab0c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3eab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3eab10:
    // 0x3eab10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eab10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eab14:
    // 0x3eab14: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3eab14u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3eab18:
    // 0x3eab18: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eab18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3eab1c:
    // 0x3eab1c: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3eab1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3eab20:
    // 0x3eab20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3eab20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eab24:
    // 0x3eab24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3eab24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3eab28:
    // 0x3eab28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3eab28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3eab2c:
    // 0x3eab2c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eab2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eab30:
    // 0x3eab30: 0xc0aacd0  jal         func_2AB340
label_3eab34:
    if (ctx->pc == 0x3EAB34u) {
        ctx->pc = 0x3EAB34u;
            // 0x3eab34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EAB38u;
        goto label_3eab38;
    }
    ctx->pc = 0x3EAB30u;
    SET_GPR_U32(ctx, 31, 0x3EAB38u);
    ctx->pc = 0x3EAB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAB30u;
            // 0x3eab34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAB38u; }
        if (ctx->pc != 0x3EAB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAB38u; }
        if (ctx->pc != 0x3EAB38u) { return; }
    }
    ctx->pc = 0x3EAB38u;
label_3eab38:
    // 0x3eab38: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
label_3eab3c:
    if (ctx->pc == 0x3EAB3Cu) {
        ctx->pc = 0x3EAB40u;
        goto label_3eab40;
    }
    ctx->pc = 0x3EAB38u;
    {
        const bool branch_taken_0x3eab38 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3eab38) {
            ctx->pc = 0x3EAB78u;
            goto label_3eab78;
        }
    }
    ctx->pc = 0x3EAB40u;
label_3eab40:
    // 0x3eab40: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3eab40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eab44:
    // 0x3eab44: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3eab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eab48:
    // 0x3eab48: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3eab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eab4c:
    // 0x3eab4c: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3eab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3eab50:
    // 0x3eab50: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x3eab50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3eab54:
    // 0x3eab54: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3eab54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3eab58:
    // 0x3eab58: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x3eab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3eab5c:
    // 0x3eab5c: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x3eab5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_3eab60:
    // 0x3eab60: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3eab60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3eab64:
    // 0x3eab64: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eab64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eab68:
    // 0x3eab68: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3eab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eab6c:
    // 0x3eab6c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3eab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3eab70:
    // 0x3eab70: 0x10000005  b           . + 4 + (0x5 << 2)
label_3eab74:
    if (ctx->pc == 0x3EAB74u) {
        ctx->pc = 0x3EAB74u;
            // 0x3eab74: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->pc = 0x3EAB78u;
        goto label_3eab78;
    }
    ctx->pc = 0x3EAB70u;
    {
        const bool branch_taken_0x3eab70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAB70u;
            // 0x3eab74: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab70) {
            ctx->pc = 0x3EAB88u;
            goto label_3eab88;
        }
    }
    ctx->pc = 0x3EAB78u;
label_3eab78:
    // 0x3eab78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eab78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eab7c:
    // 0x3eab7c: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3eab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3eab80:
    // 0x3eab80: 0x10000009  b           . + 4 + (0x9 << 2)
label_3eab84:
    if (ctx->pc == 0x3EAB84u) {
        ctx->pc = 0x3EAB84u;
            // 0x3eab84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EAB88u;
        goto label_3eab88;
    }
    ctx->pc = 0x3EAB80u;
    {
        const bool branch_taken_0x3eab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAB80u;
            // 0x3eab84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab80) {
            ctx->pc = 0x3EABA8u;
            goto label_3eaba8;
        }
    }
    ctx->pc = 0x3EAB88u;
label_3eab88:
    // 0x3eab88: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x3eab88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
label_3eab8c:
    // 0x3eab8c: 0x0  nop
    ctx->pc = 0x3eab8cu;
    // NOP
label_3eab90:
    // 0x3eab90: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3eab90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eab94:
    // 0x3eab94: 0x14a0ff82  bnez        $a1, . + 4 + (-0x7E << 2)
label_3eab98:
    if (ctx->pc == 0x3EAB98u) {
        ctx->pc = 0x3EAB9Cu;
        goto label_3eab9c;
    }
    ctx->pc = 0x3EAB94u;
    {
        const bool branch_taken_0x3eab94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eab94) {
            ctx->pc = 0x3EA9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea9a0;
        }
    }
    ctx->pc = 0x3EAB9Cu;
label_3eab9c:
    // 0x3eab9c: 0x0  nop
    ctx->pc = 0x3eab9cu;
    // NOP
label_3eaba0:
    // 0x3eaba0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3eaba0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3eaba4:
    // 0x3eaba4: 0x0  nop
    ctx->pc = 0x3eaba4u;
    // NOP
label_3eaba8:
    // 0x3eaba8: 0x1040ff25  beqz        $v0, . + 4 + (-0xDB << 2)
label_3eabac:
    if (ctx->pc == 0x3EABACu) {
        ctx->pc = 0x3EABB0u;
        goto label_3eabb0;
    }
    ctx->pc = 0x3EABA8u;
    {
        const bool branch_taken_0x3eaba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eaba8) {
            ctx->pc = 0x3EA840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea840;
        }
    }
    ctx->pc = 0x3EABB0u;
label_3eabb0:
    // 0x3eabb0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3eabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3eabb4:
    // 0x3eabb4: 0x18400116  blez        $v0, . + 4 + (0x116 << 2)
label_3eabb8:
    if (ctx->pc == 0x3EABB8u) {
        ctx->pc = 0x3EABBCu;
        goto label_3eabbc;
    }
    ctx->pc = 0x3EABB4u;
    {
        const bool branch_taken_0x3eabb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3eabb4) {
            ctx->pc = 0x3EB010u;
            goto label_3eb010;
        }
    }
    ctx->pc = 0x3EABBCu;
label_3eabbc:
    // 0x3eabbc: 0x0  nop
    ctx->pc = 0x3eabbcu;
    // NOP
label_3eabc0:
    // 0x3eabc0: 0x92a50006  lbu         $a1, 0x6($s5)
    ctx->pc = 0x3eabc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_3eabc4:
    // 0x3eabc4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3eabc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3eabc8:
    // 0x3eabc8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x3eabc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3eabcc:
    // 0x3eabcc: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x3eabccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3eabd0:
    // 0x3eabd0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3eabd4:
    if (ctx->pc == 0x3EABD4u) {
        ctx->pc = 0x3EABD4u;
            // 0x3eabd4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EABD8u;
        goto label_3eabd8;
    }
    ctx->pc = 0x3EABD0u;
    {
        const bool branch_taken_0x3eabd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EABD0u;
            // 0x3eabd4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eabd0) {
            ctx->pc = 0x3EABE0u;
            goto label_3eabe0;
        }
    }
    ctx->pc = 0x3EABD8u;
label_3eabd8:
    // 0x3eabd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3eabdc:
    if (ctx->pc == 0x3EABDCu) {
        ctx->pc = 0x3EABDCu;
            // 0x3eabdc: 0x2c51823  subu        $v1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->pc = 0x3EABE0u;
        goto label_3eabe0;
    }
    ctx->pc = 0x3EABD8u;
    {
        const bool branch_taken_0x3eabd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EABDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EABD8u;
            // 0x3eabdc: 0x2c51823  subu        $v1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eabd8) {
            ctx->pc = 0x3EABE8u;
            goto label_3eabe8;
        }
    }
    ctx->pc = 0x3EABE0u;
label_3eabe0:
    // 0x3eabe0: 0x2c41823  subu        $v1, $s6, $a0
    ctx->pc = 0x3eabe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_3eabe4:
    // 0x3eabe4: 0x0  nop
    ctx->pc = 0x3eabe4u;
    // NOP
label_3eabe8:
    // 0x3eabe8: 0x76082b  sltu        $at, $v1, $s6
    ctx->pc = 0x3eabe8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3eabec:
    // 0x3eabec: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_3eabf0:
    if (ctx->pc == 0x3EABF0u) {
        ctx->pc = 0x3EABF4u;
        goto label_3eabf4;
    }
    ctx->pc = 0x3EABECu;
    {
        const bool branch_taken_0x3eabec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eabec) {
            ctx->pc = 0x3EACB8u;
            goto label_3eacb8;
        }
    }
    ctx->pc = 0x3EABF4u;
label_3eabf4:
    // 0x3eabf4: 0x92c80000  lbu         $t0, 0x0($s6)
    ctx->pc = 0x3eabf4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3eabf8:
    // 0x3eabf8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x3eabf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3eabfc:
    // 0x3eabfc: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3eabfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3eac00:
    // 0x3eac00: 0x14880029  bne         $a0, $t0, . + 4 + (0x29 << 2)
label_3eac04:
    if (ctx->pc == 0x3EAC04u) {
        ctx->pc = 0x3EAC04u;
            // 0x3eac04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC08u;
        goto label_3eac08;
    }
    ctx->pc = 0x3EAC00u;
    {
        const bool branch_taken_0x3eac00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x3EAC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAC00u;
            // 0x3eac04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac00) {
            ctx->pc = 0x3EACA8u;
            goto label_3eaca8;
        }
    }
    ctx->pc = 0x3EAC08u;
label_3eac08:
    // 0x3eac08: 0x92a70008  lbu         $a3, 0x8($s5)
    ctx->pc = 0x3eac08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
label_3eac0c:
    // 0x3eac0c: 0x2c32823  subu        $a1, $s6, $v1
    ctx->pc = 0x3eac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_3eac10:
    // 0x3eac10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3eac10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3eac14:
    // 0x3eac14: 0x207202b  sltu        $a0, $s0, $a3
    ctx->pc = 0x3eac14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3eac18:
    // 0x3eac18: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_3eac1c:
    if (ctx->pc == 0x3EAC1Cu) {
        ctx->pc = 0x3EAC20u;
        goto label_3eac20;
    }
    ctx->pc = 0x3EAC18u;
    {
        const bool branch_taken_0x3eac18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eac18) {
            ctx->pc = 0x3EAC70u;
            goto label_3eac70;
        }
    }
    ctx->pc = 0x3EAC20u;
label_3eac20:
    // 0x3eac20: 0x2f0082b  sltu        $at, $s7, $s0
    ctx->pc = 0x3eac20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3eac24:
    // 0x3eac24: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_3eac28:
    if (ctx->pc == 0x3EAC28u) {
        ctx->pc = 0x3EAC2Cu;
        goto label_3eac2c;
    }
    ctx->pc = 0x3EAC24u;
    {
        const bool branch_taken_0x3eac24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eac24) {
            ctx->pc = 0x3EAC70u;
            goto label_3eac70;
        }
    }
    ctx->pc = 0x3EAC2Cu;
label_3eac2c:
    // 0x3eac2c: 0x92a40007  lbu         $a0, 0x7($s5)
    ctx->pc = 0x3eac2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
label_3eac30:
    // 0x3eac30: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x3eac30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eac34:
    // 0x3eac34: 0x204202b  sltu        $a0, $s0, $a0
    ctx->pc = 0x3eac34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3eac38:
    // 0x3eac38: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_3eac3c:
    if (ctx->pc == 0x3EAC3Cu) {
        ctx->pc = 0x3EAC3Cu;
            // 0x3eac3c: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC40u;
        goto label_3eac40;
    }
    ctx->pc = 0x3EAC38u;
    {
        const bool branch_taken_0x3eac38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAC38u;
            // 0x3eac3c: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac38) {
            ctx->pc = 0x3EAC70u;
            goto label_3eac70;
        }
    }
    ctx->pc = 0x3EAC40u;
label_3eac40:
    // 0x3eac40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3eac40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3eac44:
    // 0x3eac44: 0xc0fa458  jal         func_3E9160
label_3eac48:
    if (ctx->pc == 0x3EAC48u) {
        ctx->pc = 0x3EAC48u;
            // 0x3eac48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC4Cu;
        goto label_3eac4c;
    }
    ctx->pc = 0x3EAC44u;
    SET_GPR_U32(ctx, 31, 0x3EAC4Cu);
    ctx->pc = 0x3EAC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAC44u;
            // 0x3eac48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9160u;
    if (runtime->hasFunction(0x3E9160u)) {
        auto targetFn = runtime->lookupFunction(0x3E9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAC4Cu; }
        if (ctx->pc != 0x3EAC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9160_0x3e9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAC4Cu; }
        if (ctx->pc != 0x3EAC4Cu) { return; }
    }
    ctx->pc = 0x3EAC4Cu;
label_3eac4c:
    // 0x3eac4c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x3eac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3eac50:
    // 0x3eac50: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x3eac50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_3eac54:
    // 0x3eac54: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3eac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3eac58:
    // 0x3eac58: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x3eac58u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3eac5c:
    // 0x3eac5c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x3eac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3eac60:
    // 0x3eac60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3eac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3eac64:
    // 0x3eac64: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x3eac64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_3eac68:
    // 0x3eac68: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3eac6c:
    if (ctx->pc == 0x3EAC6Cu) {
        ctx->pc = 0x3EAC6Cu;
            // 0x3eac6c: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x3EAC70u;
        goto label_3eac70;
    }
    ctx->pc = 0x3EAC68u;
    {
        const bool branch_taken_0x3eac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAC68u;
            // 0x3eac6c: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac68) {
            ctx->pc = 0x3EAD20u;
            goto label_3ead20;
        }
    }
    ctx->pc = 0x3EAC70u;
label_3eac70:
    // 0x3eac70: 0x2d03021  addu        $a2, $s6, $s0
    ctx->pc = 0x3eac70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_3eac74:
    // 0x3eac74: 0xc2202b  sltu        $a0, $a2, $v0
    ctx->pc = 0x3eac74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3eac78:
    // 0x3eac78: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3eac7c:
    if (ctx->pc == 0x3EAC7Cu) {
        ctx->pc = 0x3EAC7Cu;
            // 0x3eac7c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x3EAC80u;
        goto label_3eac80;
    }
    ctx->pc = 0x3EAC78u;
    {
        const bool branch_taken_0x3eac78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAC78u;
            // 0x3eac7c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac78) {
            ctx->pc = 0x3EAC98u;
            goto label_3eac98;
        }
    }
    ctx->pc = 0x3EAC80u;
label_3eac80:
    // 0x3eac80: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3eac80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3eac84:
    // 0x3eac84: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3eac88:
    if (ctx->pc == 0x3EAC88u) {
        ctx->pc = 0x3EAC8Cu;
        goto label_3eac8c;
    }
    ctx->pc = 0x3EAC84u;
    {
        const bool branch_taken_0x3eac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eac84) {
            ctx->pc = 0x3EACB8u;
            goto label_3eacb8;
        }
    }
    ctx->pc = 0x3EAC8Cu;
label_3eac8c:
    // 0x3eac8c: 0x10000024  b           . + 4 + (0x24 << 2)
label_3eac90:
    if (ctx->pc == 0x3EAC90u) {
        ctx->pc = 0x3EAC90u;
            // 0x3eac90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC94u;
        goto label_3eac94;
    }
    ctx->pc = 0x3EAC8Cu;
    {
        const bool branch_taken_0x3eac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAC8Cu;
            // 0x3eac90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac8c) {
            ctx->pc = 0x3EAD20u;
            goto label_3ead20;
        }
    }
    ctx->pc = 0x3EAC94u;
label_3eac94:
    // 0x3eac94: 0x0  nop
    ctx->pc = 0x3eac94u;
    // NOP
label_3eac98:
    // 0x3eac98: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3eac98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3eac9c:
    // 0x3eac9c: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x3eac9cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3eaca0:
    // 0x3eaca0: 0x10c4ffdb  beq         $a2, $a0, . + 4 + (-0x25 << 2)
label_3eaca4:
    if (ctx->pc == 0x3EACA4u) {
        ctx->pc = 0x3EACA8u;
        goto label_3eaca8;
    }
    ctx->pc = 0x3EACA0u;
    {
        const bool branch_taken_0x3eaca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3eaca0) {
            ctx->pc = 0x3EAC10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eac10;
        }
    }
    ctx->pc = 0x3EACA8u;
label_3eaca8:
    // 0x3eaca8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eaca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3eacac:
    // 0x3eacac: 0x76202b  sltu        $a0, $v1, $s6
    ctx->pc = 0x3eacacu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3eacb0:
    // 0x3eacb0: 0x1480ffd1  bnez        $a0, . + 4 + (-0x2F << 2)
label_3eacb4:
    if (ctx->pc == 0x3EACB4u) {
        ctx->pc = 0x3EACB8u;
        goto label_3eacb8;
    }
    ctx->pc = 0x3EACB0u;
    {
        const bool branch_taken_0x3eacb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eacb0) {
            ctx->pc = 0x3EABF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eabf8;
        }
    }
    ctx->pc = 0x3EACB8u;
label_3eacb8:
    // 0x3eacb8: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
label_3eacbc:
    if (ctx->pc == 0x3EACBCu) {
        ctx->pc = 0x3EACC0u;
        goto label_3eacc0;
    }
    ctx->pc = 0x3EACB8u;
    {
        const bool branch_taken_0x3eacb8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eacb8) {
            ctx->pc = 0x3EACF0u;
            goto label_3eacf0;
        }
    }
    ctx->pc = 0x3EACC0u;
label_3eacc0:
    // 0x3eacc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3eacc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3eacc4:
    // 0x3eacc4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3eacc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3eacc8:
    // 0x3eacc8: 0xc0fa458  jal         func_3E9160
label_3eaccc:
    if (ctx->pc == 0x3EACCCu) {
        ctx->pc = 0x3EACCCu;
            // 0x3eaccc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EACD0u;
        goto label_3eacd0;
    }
    ctx->pc = 0x3EACC8u;
    SET_GPR_U32(ctx, 31, 0x3EACD0u);
    ctx->pc = 0x3EACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EACC8u;
            // 0x3eaccc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9160u;
    if (runtime->hasFunction(0x3E9160u)) {
        auto targetFn = runtime->lookupFunction(0x3E9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EACD0u; }
        if (ctx->pc != 0x3EACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9160_0x3e9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EACD0u; }
        if (ctx->pc != 0x3EACD0u) { return; }
    }
    ctx->pc = 0x3EACD0u;
label_3eacd0:
    // 0x3eacd0: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x3eacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3eacd4:
    // 0x3eacd4: 0x2d7b021  addu        $s6, $s6, $s7
    ctx->pc = 0x3eacd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_3eacd8:
    // 0x3eacd8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3eacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3eacdc:
    // 0x3eacdc: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x3eacdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_3eace0:
    // 0x3eace0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3eace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3eace4:
    // 0x3eace4: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x3eace4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_3eace8:
    // 0x3eace8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3eacec:
    if (ctx->pc == 0x3EACECu) {
        ctx->pc = 0x3EACECu;
            // 0x3eacec: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x3EACF0u;
        goto label_3eacf0;
    }
    ctx->pc = 0x3EACE8u;
    {
        const bool branch_taken_0x3eace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EACE8u;
            // 0x3eacec: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eace8) {
            ctx->pc = 0x3EAD18u;
            goto label_3ead18;
        }
    }
    ctx->pc = 0x3EACF0u;
label_3eacf0:
    // 0x3eacf0: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3eacf0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3eacf4:
    // 0x3eacf4: 0xc0fa44c  jal         func_3E9130
label_3eacf8:
    if (ctx->pc == 0x3EACF8u) {
        ctx->pc = 0x3EACF8u;
            // 0x3eacf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EACFCu;
        goto label_3eacfc;
    }
    ctx->pc = 0x3EACF4u;
    SET_GPR_U32(ctx, 31, 0x3EACFCu);
    ctx->pc = 0x3EACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EACF4u;
            // 0x3eacf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9130u;
    if (runtime->hasFunction(0x3E9130u)) {
        auto targetFn = runtime->lookupFunction(0x3E9130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EACFCu; }
        if (ctx->pc != 0x3EACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9130_0x3e9130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EACFCu; }
        if (ctx->pc != 0x3EACFCu) { return; }
    }
    ctx->pc = 0x3EACFCu;
label_3eacfc:
    // 0x3eacfc: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x3eacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3ead00:
    // 0x3ead00: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3ead00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3ead04:
    // 0x3ead04: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3ead04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3ead08:
    // 0x3ead08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ead08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3ead0c:
    // 0x3ead0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ead0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ead10:
    // 0x3ead10: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x3ead10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_3ead14:
    // 0x3ead14: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3ead14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_3ead18:
    // 0x3ead18: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x3ead18u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ead1c:
    // 0x3ead1c: 0x0  nop
    ctx->pc = 0x3ead1cu;
    // NOP
label_3ead20:
    // 0x3ead20: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_3ead24:
    if (ctx->pc == 0x3EAD24u) {
        ctx->pc = 0x3EAD28u;
        goto label_3ead28;
    }
    ctx->pc = 0x3EAD20u;
    {
        const bool branch_taken_0x3ead20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ead20) {
            ctx->pc = 0x3EAD38u;
            goto label_3ead38;
        }
    }
    ctx->pc = 0x3EAD28u;
label_3ead28:
    // 0x3ead28: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3ead28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3ead2c:
    // 0x3ead2c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3ead2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3ead30:
    // 0x3ead30: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3ead30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3ead34:
    // 0x3ead34: 0x0  nop
    ctx->pc = 0x3ead34u;
    // NOP
label_3ead38:
    // 0x3ead38: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x3ead38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ead3c:
    // 0x3ead3c: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_3ead40:
    if (ctx->pc == 0x3EAD40u) {
        ctx->pc = 0x3EAD44u;
        goto label_3ead44;
    }
    ctx->pc = 0x3EAD3Cu;
    {
        const bool branch_taken_0x3ead3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ead3c) {
            ctx->pc = 0x3EAFE0u;
            goto label_3eafe0;
        }
    }
    ctx->pc = 0x3EAD44u;
label_3ead44:
    // 0x3ead44: 0x92a20054  lbu         $v0, 0x54($s5)
    ctx->pc = 0x3ead44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 84)));
label_3ead48:
    // 0x3ead48: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3ead4c:
    if (ctx->pc == 0x3EAD4Cu) {
        ctx->pc = 0x3EAD50u;
        goto label_3ead50;
    }
    ctx->pc = 0x3EAD48u;
    {
        const bool branch_taken_0x3ead48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ead48) {
            ctx->pc = 0x3EADD0u;
            goto label_3eadd0;
        }
    }
    ctx->pc = 0x3EAD50u;
label_3ead50:
    // 0x3ead50: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3ead54:
    if (ctx->pc == 0x3EAD54u) {
        ctx->pc = 0x3EAD58u;
        goto label_3ead58;
    }
    ctx->pc = 0x3EAD50u;
    {
        const bool branch_taken_0x3ead50 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3ead50) {
            ctx->pc = 0x3EAD60u;
            goto label_3ead60;
        }
    }
    ctx->pc = 0x3EAD58u;
label_3ead58:
    // 0x3ead58: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3ead5c:
    if (ctx->pc == 0x3EAD5Cu) {
        ctx->pc = 0x3EAD5Cu;
            // 0x3ead5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EAD60u;
        goto label_3ead60;
    }
    ctx->pc = 0x3EAD58u;
    {
        const bool branch_taken_0x3ead58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAD58u;
            // 0x3ead5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead58) {
            ctx->pc = 0x3EAFE8u;
            goto label_3eafe8;
        }
    }
    ctx->pc = 0x3EAD60u;
label_3ead60:
    // 0x3ead60: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3ead60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3ead64:
    // 0x3ead64: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_3ead68:
    if (ctx->pc == 0x3EAD68u) {
        ctx->pc = 0x3EAD6Cu;
        goto label_3ead6c;
    }
    ctx->pc = 0x3EAD64u;
    {
        const bool branch_taken_0x3ead64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ead64) {
            ctx->pc = 0x3EAD98u;
            goto label_3ead98;
        }
    }
    ctx->pc = 0x3EAD6Cu;
label_3ead6c:
    // 0x3ead6c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ead6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ead70:
    // 0x3ead70: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3ead70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ead74:
    // 0x3ead74: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3ead74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3ead78:
    // 0x3ead78: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ead78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ead7c:
    // 0x3ead7c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ead7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ead80:
    // 0x3ead80: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3ead80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3ead84:
    // 0x3ead84: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x3ead84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_3ead88:
    // 0x3ead88: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ead88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ead8c:
    // 0x3ead8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ead8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ead90:
    // 0x3ead90: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ead94:
    if (ctx->pc == 0x3EAD94u) {
        ctx->pc = 0x3EAD94u;
            // 0x3ead94: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3EAD98u;
        goto label_3ead98;
    }
    ctx->pc = 0x3EAD90u;
    {
        const bool branch_taken_0x3ead90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAD90u;
            // 0x3ead94: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead90) {
            ctx->pc = 0x3EADC8u;
            goto label_3eadc8;
        }
    }
    ctx->pc = 0x3EAD98u;
label_3ead98:
    // 0x3ead98: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3ead98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ead9c:
    // 0x3ead9c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3ead9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3eada0:
    // 0x3eada0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eada4:
    // 0x3eada4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3eada4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3eada8:
    // 0x3eada8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3eada8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3eadac:
    // 0x3eadac: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3eadacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3eadb0:
    // 0x3eadb0: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3eadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3eadb4:
    // 0x3eadb4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eadb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eadb8:
    // 0x3eadb8: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3eadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eadbc:
    // 0x3eadbc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3eadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3eadc0:
    // 0x3eadc0: 0x30510007  andi        $s1, $v0, 0x7
    ctx->pc = 0x3eadc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3eadc4:
    // 0x3eadc4: 0x0  nop
    ctx->pc = 0x3eadc4u;
    // NOP
label_3eadc8:
    // 0x3eadc8: 0xa2a00054  sb          $zero, 0x54($s5)
    ctx->pc = 0x3eadc8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 0));
label_3eadcc:
    // 0x3eadcc: 0x0  nop
    ctx->pc = 0x3eadccu;
    // NOP
label_3eadd0:
    // 0x3eadd0: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3eadd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eadd4:
    // 0x3eadd4: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
label_3eadd8:
    if (ctx->pc == 0x3EADD8u) {
        ctx->pc = 0x3EADDCu;
        goto label_3eaddc;
    }
    ctx->pc = 0x3EADD4u;
    {
        const bool branch_taken_0x3eadd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eadd4) {
            ctx->pc = 0x3EAFE0u;
            goto label_3eafe0;
        }
    }
    ctx->pc = 0x3EADDCu;
label_3eaddc:
    // 0x3eaddc: 0x0  nop
    ctx->pc = 0x3eaddcu;
    // NOP
label_3eade0:
    // 0x3eade0: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3eade4:
    if (ctx->pc == 0x3EADE4u) {
        ctx->pc = 0x3EADE8u;
        goto label_3eade8;
    }
    ctx->pc = 0x3EADE0u;
    {
        const bool branch_taken_0x3eade0 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3eade0) {
            ctx->pc = 0x3EADF0u;
            goto label_3eadf0;
        }
    }
    ctx->pc = 0x3EADE8u;
label_3eade8:
    // 0x3eade8: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3eadec:
    if (ctx->pc == 0x3EADECu) {
        ctx->pc = 0x3EADECu;
            // 0x3eadec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EADF0u;
        goto label_3eadf0;
    }
    ctx->pc = 0x3EADE8u;
    {
        const bool branch_taken_0x3eade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EADECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EADE8u;
            // 0x3eadec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eade8) {
            ctx->pc = 0x3EAFE8u;
            goto label_3eafe8;
        }
    }
    ctx->pc = 0x3EADF0u;
label_3eadf0:
    // 0x3eadf0: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x3eadf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3eadf4:
    // 0x3eadf4: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_3eadf8:
    if (ctx->pc == 0x3EADF8u) {
        ctx->pc = 0x3EADFCu;
        goto label_3eadfc;
    }
    ctx->pc = 0x3EADF4u;
    {
        const bool branch_taken_0x3eadf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eadf4) {
            ctx->pc = 0x3EAEB0u;
            goto label_3eaeb0;
        }
    }
    ctx->pc = 0x3EADFCu;
label_3eadfc:
    // 0x3eadfc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eadfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eae00:
    // 0x3eae00: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_3eae04:
    if (ctx->pc == 0x3EAE04u) {
        ctx->pc = 0x3EAE08u;
        goto label_3eae08;
    }
    ctx->pc = 0x3EAE00u;
    {
        const bool branch_taken_0x3eae00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eae00) {
            ctx->pc = 0x3EAE30u;
            goto label_3eae30;
        }
    }
    ctx->pc = 0x3EAE08u;
label_3eae08:
    // 0x3eae08: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3eae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eae0c:
    // 0x3eae0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3eae0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eae10:
    // 0x3eae10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eae10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eae14:
    // 0x3eae14: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eae14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3eae18:
    // 0x3eae18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3eae18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3eae1c:
    // 0x3eae1c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eae1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eae20:
    // 0x3eae20: 0xc0aacd0  jal         func_2AB340
label_3eae24:
    if (ctx->pc == 0x3EAE24u) {
        ctx->pc = 0x3EAE24u;
            // 0x3eae24: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EAE28u;
        goto label_3eae28;
    }
    ctx->pc = 0x3EAE20u;
    SET_GPR_U32(ctx, 31, 0x3EAE28u);
    ctx->pc = 0x3EAE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAE20u;
            // 0x3eae24: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAE28u; }
        if (ctx->pc != 0x3EAE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAE28u; }
        if (ctx->pc != 0x3EAE28u) { return; }
    }
    ctx->pc = 0x3EAE28u;
label_3eae28:
    // 0x3eae28: 0x10000019  b           . + 4 + (0x19 << 2)
label_3eae2c:
    if (ctx->pc == 0x3EAE2Cu) {
        ctx->pc = 0x3EAE30u;
        goto label_3eae30;
    }
    ctx->pc = 0x3EAE28u;
    {
        const bool branch_taken_0x3eae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eae28) {
            ctx->pc = 0x3EAE90u;
            goto label_3eae90;
        }
    }
    ctx->pc = 0x3EAE30u;
label_3eae30:
    // 0x3eae30: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x3eae30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eae34:
    // 0x3eae34: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x3eae34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3eae38:
    // 0x3eae38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3eae38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eae3c:
    // 0x3eae3c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3eae3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3eae40:
    // 0x3eae40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eae44:
    // 0x3eae44: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x3eae44u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3eae48:
    // 0x3eae48: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eae48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3eae4c:
    // 0x3eae4c: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3eae4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3eae50:
    // 0x3eae50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3eae50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3eae54:
    // 0x3eae54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3eae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3eae58:
    // 0x3eae58: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eae58u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eae5c:
    // 0x3eae5c: 0xc0aacd0  jal         func_2AB340
label_3eae60:
    if (ctx->pc == 0x3EAE60u) {
        ctx->pc = 0x3EAE60u;
            // 0x3eae60: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EAE64u;
        goto label_3eae64;
    }
    ctx->pc = 0x3EAE5Cu;
    SET_GPR_U32(ctx, 31, 0x3EAE64u);
    ctx->pc = 0x3EAE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAE5Cu;
            // 0x3eae60: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAE64u; }
        if (ctx->pc != 0x3EAE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAE64u; }
        if (ctx->pc != 0x3EAE64u) { return; }
    }
    ctx->pc = 0x3EAE64u;
label_3eae64:
    // 0x3eae64: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
label_3eae68:
    if (ctx->pc == 0x3EAE68u) {
        ctx->pc = 0x3EAE6Cu;
        goto label_3eae6c;
    }
    ctx->pc = 0x3EAE64u;
    {
        const bool branch_taken_0x3eae64 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3eae64) {
            ctx->pc = 0x3EAE80u;
            goto label_3eae80;
        }
    }
    ctx->pc = 0x3EAE6Cu;
label_3eae6c:
    // 0x3eae6c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3eae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eae70:
    // 0x3eae70: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3eae70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3eae74:
    // 0x3eae74: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3eae74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3eae78:
    // 0x3eae78: 0x10000005  b           . + 4 + (0x5 << 2)
label_3eae7c:
    if (ctx->pc == 0x3EAE7Cu) {
        ctx->pc = 0x3EAE7Cu;
            // 0x3eae7c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EAE80u;
        goto label_3eae80;
    }
    ctx->pc = 0x3EAE78u;
    {
        const bool branch_taken_0x3eae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAE78u;
            // 0x3eae7c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae78) {
            ctx->pc = 0x3EAE90u;
            goto label_3eae90;
        }
    }
    ctx->pc = 0x3EAE80u;
label_3eae80:
    // 0x3eae80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eae84:
    // 0x3eae84: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3eae84u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3eae88:
    // 0x3eae88: 0x10000057  b           . + 4 + (0x57 << 2)
label_3eae8c:
    if (ctx->pc == 0x3EAE8Cu) {
        ctx->pc = 0x3EAE8Cu;
            // 0x3eae8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE90u;
        goto label_3eae90;
    }
    ctx->pc = 0x3EAE88u;
    {
        const bool branch_taken_0x3eae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAE88u;
            // 0x3eae8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae88) {
            ctx->pc = 0x3EAFE8u;
            goto label_3eafe8;
        }
    }
    ctx->pc = 0x3EAE90u;
label_3eae90:
    // 0x3eae90: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3eae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eae94:
    // 0x3eae94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eae98:
    // 0x3eae98: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x3eae98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_3eae9c:
    // 0x3eae9c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3eae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eaea0:
    // 0x3eaea0: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3eaea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3eaea4:
    // 0x3eaea4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3eaea8:
    if (ctx->pc == 0x3EAEA8u) {
        ctx->pc = 0x3EAEA8u;
            // 0x3eaea8: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x3EAEACu;
        goto label_3eaeac;
    }
    ctx->pc = 0x3EAEA4u;
    {
        const bool branch_taken_0x3eaea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAEA4u;
            // 0x3eaea8: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaea4) {
            ctx->pc = 0x3EAFD0u;
            goto label_3eafd0;
        }
    }
    ctx->pc = 0x3EAEACu;
label_3eaeac:
    // 0x3eaeac: 0x0  nop
    ctx->pc = 0x3eaeacu;
    // NOP
label_3eaeb0:
    // 0x3eaeb0: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x3eaeb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3eaeb4:
    // 0x3eaeb4: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_3eaeb8:
    if (ctx->pc == 0x3EAEB8u) {
        ctx->pc = 0x3EAEBCu;
        goto label_3eaebc;
    }
    ctx->pc = 0x3EAEB4u;
    {
        const bool branch_taken_0x3eaeb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eaeb4) {
            ctx->pc = 0x3EAF40u;
            goto label_3eaf40;
        }
    }
    ctx->pc = 0x3EAEBCu;
label_3eaebc:
    // 0x3eaebc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eaebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eaec0:
    // 0x3eaec0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_3eaec4:
    if (ctx->pc == 0x3EAEC4u) {
        ctx->pc = 0x3EAEC8u;
        goto label_3eaec8;
    }
    ctx->pc = 0x3EAEC0u;
    {
        const bool branch_taken_0x3eaec0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eaec0) {
            ctx->pc = 0x3EAEE8u;
            goto label_3eaee8;
        }
    }
    ctx->pc = 0x3EAEC8u;
label_3eaec8:
    // 0x3eaec8: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3eaec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eaecc:
    // 0x3eaecc: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3eaeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3eaed0:
    // 0x3eaed0: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x3eaed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3eaed4:
    // 0x3eaed4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3eaed4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3eaed8:
    // 0x3eaed8: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x3eaed8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3eaedc:
    // 0x3eaedc: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3eaedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3eaee0:
    // 0x3eaee0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3eaee4:
    if (ctx->pc == 0x3EAEE4u) {
        ctx->pc = 0x3EAEE4u;
            // 0x3eaee4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EAEE8u;
        goto label_3eaee8;
    }
    ctx->pc = 0x3EAEE0u;
    {
        const bool branch_taken_0x3eaee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAEE0u;
            // 0x3eaee4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaee0) {
            ctx->pc = 0x3EAF10u;
            goto label_3eaf10;
        }
    }
    ctx->pc = 0x3EAEE8u;
label_3eaee8:
    // 0x3eaee8: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x3eaee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3eaeec:
    // 0x3eaeec: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x3eaeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3eaef0:
    // 0x3eaef0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3eaef0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3eaef4:
    // 0x3eaef4: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x3eaef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eaef8:
    // 0x3eaef8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3eaef8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3eaefc:
    // 0x3eaefc: 0x852007  srav        $a0, $a1, $a0
    ctx->pc = 0x3eaefcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3eaf00:
    // 0x3eaf00: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x3eaf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3eaf04:
    // 0x3eaf04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3eaf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3eaf08:
    // 0x3eaf08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3eaf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3eaf0c:
    // 0x3eaf0c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eaf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eaf10:
    // 0x3eaf10: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3eaf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eaf14:
    // 0x3eaf14: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x3eaf14u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3eaf18:
    // 0x3eaf18: 0x1e20002b  bgtz        $s1, . + 4 + (0x2B << 2)
label_3eaf1c:
    if (ctx->pc == 0x3EAF1Cu) {
        ctx->pc = 0x3EAF20u;
        goto label_3eaf20;
    }
    ctx->pc = 0x3EAF18u;
    {
        const bool branch_taken_0x3eaf18 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x3eaf18) {
            ctx->pc = 0x3EAFC8u;
            goto label_3eafc8;
        }
    }
    ctx->pc = 0x3EAF20u;
label_3eaf20:
    // 0x3eaf20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3eaf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eaf24:
    // 0x3eaf24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eaf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eaf28:
    // 0x3eaf28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eaf28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3eaf2c:
    // 0x3eaf2c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eaf2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3eaf30:
    // 0x3eaf30: 0xc0aacd0  jal         func_2AB340
label_3eaf34:
    if (ctx->pc == 0x3EAF34u) {
        ctx->pc = 0x3EAF34u;
            // 0x3eaf34: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3EAF38u;
        goto label_3eaf38;
    }
    ctx->pc = 0x3EAF30u;
    SET_GPR_U32(ctx, 31, 0x3EAF38u);
    ctx->pc = 0x3EAF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAF30u;
            // 0x3eaf34: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAF38u; }
        if (ctx->pc != 0x3EAF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAF38u; }
        if (ctx->pc != 0x3EAF38u) { return; }
    }
    ctx->pc = 0x3EAF38u;
label_3eaf38:
    // 0x3eaf38: 0x10000023  b           . + 4 + (0x23 << 2)
label_3eaf3c:
    if (ctx->pc == 0x3EAF3Cu) {
        ctx->pc = 0x3EAF40u;
        goto label_3eaf40;
    }
    ctx->pc = 0x3EAF38u;
    {
        const bool branch_taken_0x3eaf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eaf38) {
            ctx->pc = 0x3EAFC8u;
            goto label_3eafc8;
        }
    }
    ctx->pc = 0x3EAF40u;
label_3eaf40:
    // 0x3eaf40: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3eaf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eaf44:
    // 0x3eaf44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3eaf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eaf48:
    // 0x3eaf48: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3eaf48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3eaf4c:
    // 0x3eaf4c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3eaf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3eaf50:
    // 0x3eaf50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eaf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eaf54:
    // 0x3eaf54: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3eaf54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3eaf58:
    // 0x3eaf58: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eaf58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3eaf5c:
    // 0x3eaf5c: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3eaf5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3eaf60:
    // 0x3eaf60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3eaf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eaf64:
    // 0x3eaf64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3eaf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3eaf68:
    // 0x3eaf68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3eaf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3eaf6c:
    // 0x3eaf6c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eaf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eaf70:
    // 0x3eaf70: 0xc0aacd0  jal         func_2AB340
label_3eaf74:
    if (ctx->pc == 0x3EAF74u) {
        ctx->pc = 0x3EAF74u;
            // 0x3eaf74: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EAF78u;
        goto label_3eaf78;
    }
    ctx->pc = 0x3EAF70u;
    SET_GPR_U32(ctx, 31, 0x3EAF78u);
    ctx->pc = 0x3EAF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAF70u;
            // 0x3eaf74: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAF78u; }
        if (ctx->pc != 0x3EAF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EAF78u; }
        if (ctx->pc != 0x3EAF78u) { return; }
    }
    ctx->pc = 0x3EAF78u;
label_3eaf78:
    // 0x3eaf78: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
label_3eaf7c:
    if (ctx->pc == 0x3EAF7Cu) {
        ctx->pc = 0x3EAF80u;
        goto label_3eaf80;
    }
    ctx->pc = 0x3EAF78u;
    {
        const bool branch_taken_0x3eaf78 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3eaf78) {
            ctx->pc = 0x3EAFB8u;
            goto label_3eafb8;
        }
    }
    ctx->pc = 0x3EAF80u;
label_3eaf80:
    // 0x3eaf80: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3eaf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eaf84:
    // 0x3eaf84: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3eaf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eaf88:
    // 0x3eaf88: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3eaf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3eaf8c:
    // 0x3eaf8c: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3eaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3eaf90:
    // 0x3eaf90: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x3eaf90u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3eaf94:
    // 0x3eaf94: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3eaf94u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaf98:
    // 0x3eaf98: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x3eaf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3eaf9c:
    // 0x3eaf9c: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x3eaf9cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_3eafa0:
    // 0x3eafa0: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3eafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3eafa4:
    // 0x3eafa4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eafa4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eafa8:
    // 0x3eafa8: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3eafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eafac:
    // 0x3eafac: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3eafacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3eafb0:
    // 0x3eafb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3eafb4:
    if (ctx->pc == 0x3EAFB4u) {
        ctx->pc = 0x3EAFB4u;
            // 0x3eafb4: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->pc = 0x3EAFB8u;
        goto label_3eafb8;
    }
    ctx->pc = 0x3EAFB0u;
    {
        const bool branch_taken_0x3eafb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAFB0u;
            // 0x3eafb4: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eafb0) {
            ctx->pc = 0x3EAFC8u;
            goto label_3eafc8;
        }
    }
    ctx->pc = 0x3EAFB8u;
label_3eafb8:
    // 0x3eafb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eafbc:
    // 0x3eafbc: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3eafbcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3eafc0:
    // 0x3eafc0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3eafc4:
    if (ctx->pc == 0x3EAFC4u) {
        ctx->pc = 0x3EAFC4u;
            // 0x3eafc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFC8u;
        goto label_3eafc8;
    }
    ctx->pc = 0x3EAFC0u;
    {
        const bool branch_taken_0x3eafc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EAFC0u;
            // 0x3eafc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eafc0) {
            ctx->pc = 0x3EAFE8u;
            goto label_3eafe8;
        }
    }
    ctx->pc = 0x3EAFC8u;
label_3eafc8:
    // 0x3eafc8: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x3eafc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
label_3eafcc:
    // 0x3eafcc: 0x0  nop
    ctx->pc = 0x3eafccu;
    // NOP
label_3eafd0:
    // 0x3eafd0: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3eafd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3eafd4:
    // 0x3eafd4: 0x14a0ff82  bnez        $a1, . + 4 + (-0x7E << 2)
label_3eafd8:
    if (ctx->pc == 0x3EAFD8u) {
        ctx->pc = 0x3EAFDCu;
        goto label_3eafdc;
    }
    ctx->pc = 0x3EAFD4u;
    {
        const bool branch_taken_0x3eafd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eafd4) {
            ctx->pc = 0x3EADE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eade0;
        }
    }
    ctx->pc = 0x3EAFDCu;
label_3eafdc:
    // 0x3eafdc: 0x0  nop
    ctx->pc = 0x3eafdcu;
    // NOP
label_3eafe0:
    // 0x3eafe0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3eafe0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3eafe4:
    // 0x3eafe4: 0x0  nop
    ctx->pc = 0x3eafe4u;
    // NOP
label_3eafe8:
    // 0x3eafe8: 0x1040fe15  beqz        $v0, . + 4 + (-0x1EB << 2)
label_3eafec:
    if (ctx->pc == 0x3EAFECu) {
        ctx->pc = 0x3EAFF0u;
        goto label_3eaff0;
    }
    ctx->pc = 0x3EAFE8u;
    {
        const bool branch_taken_0x3eafe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eafe8) {
            ctx->pc = 0x3EA840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea840;
        }
    }
    ctx->pc = 0x3EAFF0u;
label_3eaff0:
    // 0x3eaff0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3eaff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3eaff4:
    // 0x3eaff4: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_3eaff8:
    if (ctx->pc == 0x3EAFF8u) {
        ctx->pc = 0x3EAFFCu;
        goto label_3eaffc;
    }
    ctx->pc = 0x3EAFF4u;
    {
        const bool branch_taken_0x3eaff4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3eaff4) {
            ctx->pc = 0x3EB010u;
            goto label_3eb010;
        }
    }
    ctx->pc = 0x3EAFFCu;
label_3eaffc:
    // 0x3eaffc: 0x1e40fef0  bgtz        $s2, . + 4 + (-0x110 << 2)
label_3eb000:
    if (ctx->pc == 0x3EB000u) {
        ctx->pc = 0x3EB004u;
        goto label_3eb004;
    }
    ctx->pc = 0x3EAFFCu;
    {
        const bool branch_taken_0x3eaffc = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3eaffc) {
            ctx->pc = 0x3EABC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eabc0;
        }
    }
    ctx->pc = 0x3EB004u;
label_3eb004:
    // 0x3eb004: 0x1000fe0e  b           . + 4 + (-0x1F2 << 2)
label_3eb008:
    if (ctx->pc == 0x3EB008u) {
        ctx->pc = 0x3EB00Cu;
        goto label_3eb00c;
    }
    ctx->pc = 0x3EB004u;
    {
        const bool branch_taken_0x3eb004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb004) {
            ctx->pc = 0x3EA840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea840;
        }
    }
    ctx->pc = 0x3EB00Cu;
label_3eb00c:
    // 0x3eb00c: 0x0  nop
    ctx->pc = 0x3eb00cu;
    // NOP
label_3eb010:
    // 0x3eb010: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x3eb010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3eb014:
    // 0x3eb014: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3eb014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3eb018:
    // 0x3eb018: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3eb018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3eb01c:
    // 0x3eb01c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3eb01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3eb020:
    // 0x3eb020: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3eb024:
    if (ctx->pc == 0x3EB024u) {
        ctx->pc = 0x3EB028u;
        goto label_3eb028;
    }
    ctx->pc = 0x3EB020u;
    {
        const bool branch_taken_0x3eb020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb020) {
            ctx->pc = 0x3EB048u;
            goto label_3eb048;
        }
    }
    ctx->pc = 0x3EB028u;
label_3eb028:
    // 0x3eb028: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x3eb028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3eb02c:
    // 0x3eb02c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3eb02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3eb030:
    // 0x3eb030: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3eb030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3eb034:
    // 0x3eb034: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3eb034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3eb038:
    // 0x3eb038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3eb03c:
    if (ctx->pc == 0x3EB03Cu) {
        ctx->pc = 0x3EB040u;
        goto label_3eb040;
    }
    ctx->pc = 0x3EB038u;
    {
        const bool branch_taken_0x3eb038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb038) {
            ctx->pc = 0x3EB048u;
            goto label_3eb048;
        }
    }
    ctx->pc = 0x3EB040u;
label_3eb040:
    // 0x3eb040: 0x10000003  b           . + 4 + (0x3 << 2)
label_3eb044:
    if (ctx->pc == 0x3EB044u) {
        ctx->pc = 0x3EB044u;
            // 0x3eb044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EB048u;
        goto label_3eb048;
    }
    ctx->pc = 0x3EB040u;
    {
        const bool branch_taken_0x3eb040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB040u;
            // 0x3eb044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb040) {
            ctx->pc = 0x3EB050u;
            goto label_3eb050;
        }
    }
    ctx->pc = 0x3EB048u;
label_3eb048:
    // 0x3eb048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eb048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb04c:
    // 0x3eb04c: 0x0  nop
    ctx->pc = 0x3eb04cu;
    // NOP
label_3eb050:
    // 0x3eb050: 0x1040fdbf  beqz        $v0, . + 4 + (-0x241 << 2)
label_3eb054:
    if (ctx->pc == 0x3EB054u) {
        ctx->pc = 0x3EB058u;
        goto label_3eb058;
    }
    ctx->pc = 0x3EB050u;
    {
        const bool branch_taken_0x3eb050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb050) {
            ctx->pc = 0x3EA750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea750;
        }
    }
    ctx->pc = 0x3EB058u;
label_3eb058:
    // 0x3eb058: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x3eb058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_3eb05c:
    // 0x3eb05c: 0x5020000f  beql        $at, $zero, . + 4 + (0xF << 2)
label_3eb060:
    if (ctx->pc == 0x3EB060u) {
        ctx->pc = 0x3EB060u;
            // 0x3eb060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EB064u;
        goto label_3eb064;
    }
    ctx->pc = 0x3EB05Cu;
    {
        const bool branch_taken_0x3eb05c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb05c) {
            ctx->pc = 0x3EB060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB05Cu;
            // 0x3eb060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EB09Cu;
            goto label_3eb09c;
        }
    }
    ctx->pc = 0x3EB064u;
label_3eb064:
    // 0x3eb064: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3eb064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3eb068:
    // 0x3eb068: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eb06c:
    // 0x3eb06c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3eb06cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3eb070:
    // 0x3eb070: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eb070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eb074:
    // 0x3eb074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eb078:
    // 0x3eb078: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3eb078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3eb07c:
    // 0x3eb07c: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3eb07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3eb080:
    // 0x3eb080: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3eb080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3eb084:
    // 0x3eb084: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3eb084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3eb088:
    // 0x3eb088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3eb08c:
    if (ctx->pc == 0x3EB08Cu) {
        ctx->pc = 0x3EB090u;
        goto label_3eb090;
    }
    ctx->pc = 0x3EB088u;
    {
        const bool branch_taken_0x3eb088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb088) {
            ctx->pc = 0x3EB098u;
            goto label_3eb098;
        }
    }
    ctx->pc = 0x3EB090u;
label_3eb090:
    // 0x3eb090: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3eb090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3eb094:
    // 0x3eb094: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3eb094u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3eb098:
    // 0x3eb098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eb098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb09c:
    // 0x3eb09c: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x3eb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_3eb0a0:
    // 0x3eb0a0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eb0a4:
    // 0x3eb0a4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3eb0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3eb0a8:
    // 0x3eb0a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3eb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3eb0ac:
    // 0x3eb0ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3eb0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3eb0b0:
    // 0x3eb0b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3eb0b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3eb0b4:
    // 0x3eb0b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3eb0b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3eb0b8:
    // 0x3eb0b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3eb0b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eb0bc:
    // 0x3eb0bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3eb0bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eb0c0:
    // 0x3eb0c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3eb0c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eb0c4:
    // 0x3eb0c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3eb0c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3eb0c8:
    // 0x3eb0c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3eb0c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb0cc:
    // 0x3eb0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3eb0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb0d0:
    // 0x3eb0d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3eb0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb0d4:
    // 0x3eb0d4: 0x3e00008  jr          $ra
label_3eb0d8:
    if (ctx->pc == 0x3EB0D8u) {
        ctx->pc = 0x3EB0D8u;
            // 0x3eb0d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3EB0DCu;
        goto label_3eb0dc;
    }
    ctx->pc = 0x3EB0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB0D4u;
            // 0x3eb0d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EB0DCu;
label_3eb0dc:
    // 0x3eb0dc: 0x0  nop
    ctx->pc = 0x3eb0dcu;
    // NOP
}
