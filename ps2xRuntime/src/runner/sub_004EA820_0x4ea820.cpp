#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EA820
// Address: 0x4ea820 - 0x4eafc0
void sub_004EA820_0x4ea820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA820_0x4ea820");
#endif

    switch (ctx->pc) {
        case 0x4ea820u: goto label_4ea820;
        case 0x4ea824u: goto label_4ea824;
        case 0x4ea828u: goto label_4ea828;
        case 0x4ea82cu: goto label_4ea82c;
        case 0x4ea830u: goto label_4ea830;
        case 0x4ea834u: goto label_4ea834;
        case 0x4ea838u: goto label_4ea838;
        case 0x4ea83cu: goto label_4ea83c;
        case 0x4ea840u: goto label_4ea840;
        case 0x4ea844u: goto label_4ea844;
        case 0x4ea848u: goto label_4ea848;
        case 0x4ea84cu: goto label_4ea84c;
        case 0x4ea850u: goto label_4ea850;
        case 0x4ea854u: goto label_4ea854;
        case 0x4ea858u: goto label_4ea858;
        case 0x4ea85cu: goto label_4ea85c;
        case 0x4ea860u: goto label_4ea860;
        case 0x4ea864u: goto label_4ea864;
        case 0x4ea868u: goto label_4ea868;
        case 0x4ea86cu: goto label_4ea86c;
        case 0x4ea870u: goto label_4ea870;
        case 0x4ea874u: goto label_4ea874;
        case 0x4ea878u: goto label_4ea878;
        case 0x4ea87cu: goto label_4ea87c;
        case 0x4ea880u: goto label_4ea880;
        case 0x4ea884u: goto label_4ea884;
        case 0x4ea888u: goto label_4ea888;
        case 0x4ea88cu: goto label_4ea88c;
        case 0x4ea890u: goto label_4ea890;
        case 0x4ea894u: goto label_4ea894;
        case 0x4ea898u: goto label_4ea898;
        case 0x4ea89cu: goto label_4ea89c;
        case 0x4ea8a0u: goto label_4ea8a0;
        case 0x4ea8a4u: goto label_4ea8a4;
        case 0x4ea8a8u: goto label_4ea8a8;
        case 0x4ea8acu: goto label_4ea8ac;
        case 0x4ea8b0u: goto label_4ea8b0;
        case 0x4ea8b4u: goto label_4ea8b4;
        case 0x4ea8b8u: goto label_4ea8b8;
        case 0x4ea8bcu: goto label_4ea8bc;
        case 0x4ea8c0u: goto label_4ea8c0;
        case 0x4ea8c4u: goto label_4ea8c4;
        case 0x4ea8c8u: goto label_4ea8c8;
        case 0x4ea8ccu: goto label_4ea8cc;
        case 0x4ea8d0u: goto label_4ea8d0;
        case 0x4ea8d4u: goto label_4ea8d4;
        case 0x4ea8d8u: goto label_4ea8d8;
        case 0x4ea8dcu: goto label_4ea8dc;
        case 0x4ea8e0u: goto label_4ea8e0;
        case 0x4ea8e4u: goto label_4ea8e4;
        case 0x4ea8e8u: goto label_4ea8e8;
        case 0x4ea8ecu: goto label_4ea8ec;
        case 0x4ea8f0u: goto label_4ea8f0;
        case 0x4ea8f4u: goto label_4ea8f4;
        case 0x4ea8f8u: goto label_4ea8f8;
        case 0x4ea8fcu: goto label_4ea8fc;
        case 0x4ea900u: goto label_4ea900;
        case 0x4ea904u: goto label_4ea904;
        case 0x4ea908u: goto label_4ea908;
        case 0x4ea90cu: goto label_4ea90c;
        case 0x4ea910u: goto label_4ea910;
        case 0x4ea914u: goto label_4ea914;
        case 0x4ea918u: goto label_4ea918;
        case 0x4ea91cu: goto label_4ea91c;
        case 0x4ea920u: goto label_4ea920;
        case 0x4ea924u: goto label_4ea924;
        case 0x4ea928u: goto label_4ea928;
        case 0x4ea92cu: goto label_4ea92c;
        case 0x4ea930u: goto label_4ea930;
        case 0x4ea934u: goto label_4ea934;
        case 0x4ea938u: goto label_4ea938;
        case 0x4ea93cu: goto label_4ea93c;
        case 0x4ea940u: goto label_4ea940;
        case 0x4ea944u: goto label_4ea944;
        case 0x4ea948u: goto label_4ea948;
        case 0x4ea94cu: goto label_4ea94c;
        case 0x4ea950u: goto label_4ea950;
        case 0x4ea954u: goto label_4ea954;
        case 0x4ea958u: goto label_4ea958;
        case 0x4ea95cu: goto label_4ea95c;
        case 0x4ea960u: goto label_4ea960;
        case 0x4ea964u: goto label_4ea964;
        case 0x4ea968u: goto label_4ea968;
        case 0x4ea96cu: goto label_4ea96c;
        case 0x4ea970u: goto label_4ea970;
        case 0x4ea974u: goto label_4ea974;
        case 0x4ea978u: goto label_4ea978;
        case 0x4ea97cu: goto label_4ea97c;
        case 0x4ea980u: goto label_4ea980;
        case 0x4ea984u: goto label_4ea984;
        case 0x4ea988u: goto label_4ea988;
        case 0x4ea98cu: goto label_4ea98c;
        case 0x4ea990u: goto label_4ea990;
        case 0x4ea994u: goto label_4ea994;
        case 0x4ea998u: goto label_4ea998;
        case 0x4ea99cu: goto label_4ea99c;
        case 0x4ea9a0u: goto label_4ea9a0;
        case 0x4ea9a4u: goto label_4ea9a4;
        case 0x4ea9a8u: goto label_4ea9a8;
        case 0x4ea9acu: goto label_4ea9ac;
        case 0x4ea9b0u: goto label_4ea9b0;
        case 0x4ea9b4u: goto label_4ea9b4;
        case 0x4ea9b8u: goto label_4ea9b8;
        case 0x4ea9bcu: goto label_4ea9bc;
        case 0x4ea9c0u: goto label_4ea9c0;
        case 0x4ea9c4u: goto label_4ea9c4;
        case 0x4ea9c8u: goto label_4ea9c8;
        case 0x4ea9ccu: goto label_4ea9cc;
        case 0x4ea9d0u: goto label_4ea9d0;
        case 0x4ea9d4u: goto label_4ea9d4;
        case 0x4ea9d8u: goto label_4ea9d8;
        case 0x4ea9dcu: goto label_4ea9dc;
        case 0x4ea9e0u: goto label_4ea9e0;
        case 0x4ea9e4u: goto label_4ea9e4;
        case 0x4ea9e8u: goto label_4ea9e8;
        case 0x4ea9ecu: goto label_4ea9ec;
        case 0x4ea9f0u: goto label_4ea9f0;
        case 0x4ea9f4u: goto label_4ea9f4;
        case 0x4ea9f8u: goto label_4ea9f8;
        case 0x4ea9fcu: goto label_4ea9fc;
        case 0x4eaa00u: goto label_4eaa00;
        case 0x4eaa04u: goto label_4eaa04;
        case 0x4eaa08u: goto label_4eaa08;
        case 0x4eaa0cu: goto label_4eaa0c;
        case 0x4eaa10u: goto label_4eaa10;
        case 0x4eaa14u: goto label_4eaa14;
        case 0x4eaa18u: goto label_4eaa18;
        case 0x4eaa1cu: goto label_4eaa1c;
        case 0x4eaa20u: goto label_4eaa20;
        case 0x4eaa24u: goto label_4eaa24;
        case 0x4eaa28u: goto label_4eaa28;
        case 0x4eaa2cu: goto label_4eaa2c;
        case 0x4eaa30u: goto label_4eaa30;
        case 0x4eaa34u: goto label_4eaa34;
        case 0x4eaa38u: goto label_4eaa38;
        case 0x4eaa3cu: goto label_4eaa3c;
        case 0x4eaa40u: goto label_4eaa40;
        case 0x4eaa44u: goto label_4eaa44;
        case 0x4eaa48u: goto label_4eaa48;
        case 0x4eaa4cu: goto label_4eaa4c;
        case 0x4eaa50u: goto label_4eaa50;
        case 0x4eaa54u: goto label_4eaa54;
        case 0x4eaa58u: goto label_4eaa58;
        case 0x4eaa5cu: goto label_4eaa5c;
        case 0x4eaa60u: goto label_4eaa60;
        case 0x4eaa64u: goto label_4eaa64;
        case 0x4eaa68u: goto label_4eaa68;
        case 0x4eaa6cu: goto label_4eaa6c;
        case 0x4eaa70u: goto label_4eaa70;
        case 0x4eaa74u: goto label_4eaa74;
        case 0x4eaa78u: goto label_4eaa78;
        case 0x4eaa7cu: goto label_4eaa7c;
        case 0x4eaa80u: goto label_4eaa80;
        case 0x4eaa84u: goto label_4eaa84;
        case 0x4eaa88u: goto label_4eaa88;
        case 0x4eaa8cu: goto label_4eaa8c;
        case 0x4eaa90u: goto label_4eaa90;
        case 0x4eaa94u: goto label_4eaa94;
        case 0x4eaa98u: goto label_4eaa98;
        case 0x4eaa9cu: goto label_4eaa9c;
        case 0x4eaaa0u: goto label_4eaaa0;
        case 0x4eaaa4u: goto label_4eaaa4;
        case 0x4eaaa8u: goto label_4eaaa8;
        case 0x4eaaacu: goto label_4eaaac;
        case 0x4eaab0u: goto label_4eaab0;
        case 0x4eaab4u: goto label_4eaab4;
        case 0x4eaab8u: goto label_4eaab8;
        case 0x4eaabcu: goto label_4eaabc;
        case 0x4eaac0u: goto label_4eaac0;
        case 0x4eaac4u: goto label_4eaac4;
        case 0x4eaac8u: goto label_4eaac8;
        case 0x4eaaccu: goto label_4eaacc;
        case 0x4eaad0u: goto label_4eaad0;
        case 0x4eaad4u: goto label_4eaad4;
        case 0x4eaad8u: goto label_4eaad8;
        case 0x4eaadcu: goto label_4eaadc;
        case 0x4eaae0u: goto label_4eaae0;
        case 0x4eaae4u: goto label_4eaae4;
        case 0x4eaae8u: goto label_4eaae8;
        case 0x4eaaecu: goto label_4eaaec;
        case 0x4eaaf0u: goto label_4eaaf0;
        case 0x4eaaf4u: goto label_4eaaf4;
        case 0x4eaaf8u: goto label_4eaaf8;
        case 0x4eaafcu: goto label_4eaafc;
        case 0x4eab00u: goto label_4eab00;
        case 0x4eab04u: goto label_4eab04;
        case 0x4eab08u: goto label_4eab08;
        case 0x4eab0cu: goto label_4eab0c;
        case 0x4eab10u: goto label_4eab10;
        case 0x4eab14u: goto label_4eab14;
        case 0x4eab18u: goto label_4eab18;
        case 0x4eab1cu: goto label_4eab1c;
        case 0x4eab20u: goto label_4eab20;
        case 0x4eab24u: goto label_4eab24;
        case 0x4eab28u: goto label_4eab28;
        case 0x4eab2cu: goto label_4eab2c;
        case 0x4eab30u: goto label_4eab30;
        case 0x4eab34u: goto label_4eab34;
        case 0x4eab38u: goto label_4eab38;
        case 0x4eab3cu: goto label_4eab3c;
        case 0x4eab40u: goto label_4eab40;
        case 0x4eab44u: goto label_4eab44;
        case 0x4eab48u: goto label_4eab48;
        case 0x4eab4cu: goto label_4eab4c;
        case 0x4eab50u: goto label_4eab50;
        case 0x4eab54u: goto label_4eab54;
        case 0x4eab58u: goto label_4eab58;
        case 0x4eab5cu: goto label_4eab5c;
        case 0x4eab60u: goto label_4eab60;
        case 0x4eab64u: goto label_4eab64;
        case 0x4eab68u: goto label_4eab68;
        case 0x4eab6cu: goto label_4eab6c;
        case 0x4eab70u: goto label_4eab70;
        case 0x4eab74u: goto label_4eab74;
        case 0x4eab78u: goto label_4eab78;
        case 0x4eab7cu: goto label_4eab7c;
        case 0x4eab80u: goto label_4eab80;
        case 0x4eab84u: goto label_4eab84;
        case 0x4eab88u: goto label_4eab88;
        case 0x4eab8cu: goto label_4eab8c;
        case 0x4eab90u: goto label_4eab90;
        case 0x4eab94u: goto label_4eab94;
        case 0x4eab98u: goto label_4eab98;
        case 0x4eab9cu: goto label_4eab9c;
        case 0x4eaba0u: goto label_4eaba0;
        case 0x4eaba4u: goto label_4eaba4;
        case 0x4eaba8u: goto label_4eaba8;
        case 0x4eabacu: goto label_4eabac;
        case 0x4eabb0u: goto label_4eabb0;
        case 0x4eabb4u: goto label_4eabb4;
        case 0x4eabb8u: goto label_4eabb8;
        case 0x4eabbcu: goto label_4eabbc;
        case 0x4eabc0u: goto label_4eabc0;
        case 0x4eabc4u: goto label_4eabc4;
        case 0x4eabc8u: goto label_4eabc8;
        case 0x4eabccu: goto label_4eabcc;
        case 0x4eabd0u: goto label_4eabd0;
        case 0x4eabd4u: goto label_4eabd4;
        case 0x4eabd8u: goto label_4eabd8;
        case 0x4eabdcu: goto label_4eabdc;
        case 0x4eabe0u: goto label_4eabe0;
        case 0x4eabe4u: goto label_4eabe4;
        case 0x4eabe8u: goto label_4eabe8;
        case 0x4eabecu: goto label_4eabec;
        case 0x4eabf0u: goto label_4eabf0;
        case 0x4eabf4u: goto label_4eabf4;
        case 0x4eabf8u: goto label_4eabf8;
        case 0x4eabfcu: goto label_4eabfc;
        case 0x4eac00u: goto label_4eac00;
        case 0x4eac04u: goto label_4eac04;
        case 0x4eac08u: goto label_4eac08;
        case 0x4eac0cu: goto label_4eac0c;
        case 0x4eac10u: goto label_4eac10;
        case 0x4eac14u: goto label_4eac14;
        case 0x4eac18u: goto label_4eac18;
        case 0x4eac1cu: goto label_4eac1c;
        case 0x4eac20u: goto label_4eac20;
        case 0x4eac24u: goto label_4eac24;
        case 0x4eac28u: goto label_4eac28;
        case 0x4eac2cu: goto label_4eac2c;
        case 0x4eac30u: goto label_4eac30;
        case 0x4eac34u: goto label_4eac34;
        case 0x4eac38u: goto label_4eac38;
        case 0x4eac3cu: goto label_4eac3c;
        case 0x4eac40u: goto label_4eac40;
        case 0x4eac44u: goto label_4eac44;
        case 0x4eac48u: goto label_4eac48;
        case 0x4eac4cu: goto label_4eac4c;
        case 0x4eac50u: goto label_4eac50;
        case 0x4eac54u: goto label_4eac54;
        case 0x4eac58u: goto label_4eac58;
        case 0x4eac5cu: goto label_4eac5c;
        case 0x4eac60u: goto label_4eac60;
        case 0x4eac64u: goto label_4eac64;
        case 0x4eac68u: goto label_4eac68;
        case 0x4eac6cu: goto label_4eac6c;
        case 0x4eac70u: goto label_4eac70;
        case 0x4eac74u: goto label_4eac74;
        case 0x4eac78u: goto label_4eac78;
        case 0x4eac7cu: goto label_4eac7c;
        case 0x4eac80u: goto label_4eac80;
        case 0x4eac84u: goto label_4eac84;
        case 0x4eac88u: goto label_4eac88;
        case 0x4eac8cu: goto label_4eac8c;
        case 0x4eac90u: goto label_4eac90;
        case 0x4eac94u: goto label_4eac94;
        case 0x4eac98u: goto label_4eac98;
        case 0x4eac9cu: goto label_4eac9c;
        case 0x4eaca0u: goto label_4eaca0;
        case 0x4eaca4u: goto label_4eaca4;
        case 0x4eaca8u: goto label_4eaca8;
        case 0x4eacacu: goto label_4eacac;
        case 0x4eacb0u: goto label_4eacb0;
        case 0x4eacb4u: goto label_4eacb4;
        case 0x4eacb8u: goto label_4eacb8;
        case 0x4eacbcu: goto label_4eacbc;
        case 0x4eacc0u: goto label_4eacc0;
        case 0x4eacc4u: goto label_4eacc4;
        case 0x4eacc8u: goto label_4eacc8;
        case 0x4eacccu: goto label_4eaccc;
        case 0x4eacd0u: goto label_4eacd0;
        case 0x4eacd4u: goto label_4eacd4;
        case 0x4eacd8u: goto label_4eacd8;
        case 0x4eacdcu: goto label_4eacdc;
        case 0x4eace0u: goto label_4eace0;
        case 0x4eace4u: goto label_4eace4;
        case 0x4eace8u: goto label_4eace8;
        case 0x4eacecu: goto label_4eacec;
        case 0x4eacf0u: goto label_4eacf0;
        case 0x4eacf4u: goto label_4eacf4;
        case 0x4eacf8u: goto label_4eacf8;
        case 0x4eacfcu: goto label_4eacfc;
        case 0x4ead00u: goto label_4ead00;
        case 0x4ead04u: goto label_4ead04;
        case 0x4ead08u: goto label_4ead08;
        case 0x4ead0cu: goto label_4ead0c;
        case 0x4ead10u: goto label_4ead10;
        case 0x4ead14u: goto label_4ead14;
        case 0x4ead18u: goto label_4ead18;
        case 0x4ead1cu: goto label_4ead1c;
        case 0x4ead20u: goto label_4ead20;
        case 0x4ead24u: goto label_4ead24;
        case 0x4ead28u: goto label_4ead28;
        case 0x4ead2cu: goto label_4ead2c;
        case 0x4ead30u: goto label_4ead30;
        case 0x4ead34u: goto label_4ead34;
        case 0x4ead38u: goto label_4ead38;
        case 0x4ead3cu: goto label_4ead3c;
        case 0x4ead40u: goto label_4ead40;
        case 0x4ead44u: goto label_4ead44;
        case 0x4ead48u: goto label_4ead48;
        case 0x4ead4cu: goto label_4ead4c;
        case 0x4ead50u: goto label_4ead50;
        case 0x4ead54u: goto label_4ead54;
        case 0x4ead58u: goto label_4ead58;
        case 0x4ead5cu: goto label_4ead5c;
        case 0x4ead60u: goto label_4ead60;
        case 0x4ead64u: goto label_4ead64;
        case 0x4ead68u: goto label_4ead68;
        case 0x4ead6cu: goto label_4ead6c;
        case 0x4ead70u: goto label_4ead70;
        case 0x4ead74u: goto label_4ead74;
        case 0x4ead78u: goto label_4ead78;
        case 0x4ead7cu: goto label_4ead7c;
        case 0x4ead80u: goto label_4ead80;
        case 0x4ead84u: goto label_4ead84;
        case 0x4ead88u: goto label_4ead88;
        case 0x4ead8cu: goto label_4ead8c;
        case 0x4ead90u: goto label_4ead90;
        case 0x4ead94u: goto label_4ead94;
        case 0x4ead98u: goto label_4ead98;
        case 0x4ead9cu: goto label_4ead9c;
        case 0x4eada0u: goto label_4eada0;
        case 0x4eada4u: goto label_4eada4;
        case 0x4eada8u: goto label_4eada8;
        case 0x4eadacu: goto label_4eadac;
        case 0x4eadb0u: goto label_4eadb0;
        case 0x4eadb4u: goto label_4eadb4;
        case 0x4eadb8u: goto label_4eadb8;
        case 0x4eadbcu: goto label_4eadbc;
        case 0x4eadc0u: goto label_4eadc0;
        case 0x4eadc4u: goto label_4eadc4;
        case 0x4eadc8u: goto label_4eadc8;
        case 0x4eadccu: goto label_4eadcc;
        case 0x4eadd0u: goto label_4eadd0;
        case 0x4eadd4u: goto label_4eadd4;
        case 0x4eadd8u: goto label_4eadd8;
        case 0x4eaddcu: goto label_4eaddc;
        case 0x4eade0u: goto label_4eade0;
        case 0x4eade4u: goto label_4eade4;
        case 0x4eade8u: goto label_4eade8;
        case 0x4eadecu: goto label_4eadec;
        case 0x4eadf0u: goto label_4eadf0;
        case 0x4eadf4u: goto label_4eadf4;
        case 0x4eadf8u: goto label_4eadf8;
        case 0x4eadfcu: goto label_4eadfc;
        case 0x4eae00u: goto label_4eae00;
        case 0x4eae04u: goto label_4eae04;
        case 0x4eae08u: goto label_4eae08;
        case 0x4eae0cu: goto label_4eae0c;
        case 0x4eae10u: goto label_4eae10;
        case 0x4eae14u: goto label_4eae14;
        case 0x4eae18u: goto label_4eae18;
        case 0x4eae1cu: goto label_4eae1c;
        case 0x4eae20u: goto label_4eae20;
        case 0x4eae24u: goto label_4eae24;
        case 0x4eae28u: goto label_4eae28;
        case 0x4eae2cu: goto label_4eae2c;
        case 0x4eae30u: goto label_4eae30;
        case 0x4eae34u: goto label_4eae34;
        case 0x4eae38u: goto label_4eae38;
        case 0x4eae3cu: goto label_4eae3c;
        case 0x4eae40u: goto label_4eae40;
        case 0x4eae44u: goto label_4eae44;
        case 0x4eae48u: goto label_4eae48;
        case 0x4eae4cu: goto label_4eae4c;
        case 0x4eae50u: goto label_4eae50;
        case 0x4eae54u: goto label_4eae54;
        case 0x4eae58u: goto label_4eae58;
        case 0x4eae5cu: goto label_4eae5c;
        case 0x4eae60u: goto label_4eae60;
        case 0x4eae64u: goto label_4eae64;
        case 0x4eae68u: goto label_4eae68;
        case 0x4eae6cu: goto label_4eae6c;
        case 0x4eae70u: goto label_4eae70;
        case 0x4eae74u: goto label_4eae74;
        case 0x4eae78u: goto label_4eae78;
        case 0x4eae7cu: goto label_4eae7c;
        case 0x4eae80u: goto label_4eae80;
        case 0x4eae84u: goto label_4eae84;
        case 0x4eae88u: goto label_4eae88;
        case 0x4eae8cu: goto label_4eae8c;
        case 0x4eae90u: goto label_4eae90;
        case 0x4eae94u: goto label_4eae94;
        case 0x4eae98u: goto label_4eae98;
        case 0x4eae9cu: goto label_4eae9c;
        case 0x4eaea0u: goto label_4eaea0;
        case 0x4eaea4u: goto label_4eaea4;
        case 0x4eaea8u: goto label_4eaea8;
        case 0x4eaeacu: goto label_4eaeac;
        case 0x4eaeb0u: goto label_4eaeb0;
        case 0x4eaeb4u: goto label_4eaeb4;
        case 0x4eaeb8u: goto label_4eaeb8;
        case 0x4eaebcu: goto label_4eaebc;
        case 0x4eaec0u: goto label_4eaec0;
        case 0x4eaec4u: goto label_4eaec4;
        case 0x4eaec8u: goto label_4eaec8;
        case 0x4eaeccu: goto label_4eaecc;
        case 0x4eaed0u: goto label_4eaed0;
        case 0x4eaed4u: goto label_4eaed4;
        case 0x4eaed8u: goto label_4eaed8;
        case 0x4eaedcu: goto label_4eaedc;
        case 0x4eaee0u: goto label_4eaee0;
        case 0x4eaee4u: goto label_4eaee4;
        case 0x4eaee8u: goto label_4eaee8;
        case 0x4eaeecu: goto label_4eaeec;
        case 0x4eaef0u: goto label_4eaef0;
        case 0x4eaef4u: goto label_4eaef4;
        case 0x4eaef8u: goto label_4eaef8;
        case 0x4eaefcu: goto label_4eaefc;
        case 0x4eaf00u: goto label_4eaf00;
        case 0x4eaf04u: goto label_4eaf04;
        case 0x4eaf08u: goto label_4eaf08;
        case 0x4eaf0cu: goto label_4eaf0c;
        case 0x4eaf10u: goto label_4eaf10;
        case 0x4eaf14u: goto label_4eaf14;
        case 0x4eaf18u: goto label_4eaf18;
        case 0x4eaf1cu: goto label_4eaf1c;
        case 0x4eaf20u: goto label_4eaf20;
        case 0x4eaf24u: goto label_4eaf24;
        case 0x4eaf28u: goto label_4eaf28;
        case 0x4eaf2cu: goto label_4eaf2c;
        case 0x4eaf30u: goto label_4eaf30;
        case 0x4eaf34u: goto label_4eaf34;
        case 0x4eaf38u: goto label_4eaf38;
        case 0x4eaf3cu: goto label_4eaf3c;
        case 0x4eaf40u: goto label_4eaf40;
        case 0x4eaf44u: goto label_4eaf44;
        case 0x4eaf48u: goto label_4eaf48;
        case 0x4eaf4cu: goto label_4eaf4c;
        case 0x4eaf50u: goto label_4eaf50;
        case 0x4eaf54u: goto label_4eaf54;
        case 0x4eaf58u: goto label_4eaf58;
        case 0x4eaf5cu: goto label_4eaf5c;
        case 0x4eaf60u: goto label_4eaf60;
        case 0x4eaf64u: goto label_4eaf64;
        case 0x4eaf68u: goto label_4eaf68;
        case 0x4eaf6cu: goto label_4eaf6c;
        case 0x4eaf70u: goto label_4eaf70;
        case 0x4eaf74u: goto label_4eaf74;
        case 0x4eaf78u: goto label_4eaf78;
        case 0x4eaf7cu: goto label_4eaf7c;
        case 0x4eaf80u: goto label_4eaf80;
        case 0x4eaf84u: goto label_4eaf84;
        case 0x4eaf88u: goto label_4eaf88;
        case 0x4eaf8cu: goto label_4eaf8c;
        case 0x4eaf90u: goto label_4eaf90;
        case 0x4eaf94u: goto label_4eaf94;
        case 0x4eaf98u: goto label_4eaf98;
        case 0x4eaf9cu: goto label_4eaf9c;
        case 0x4eafa0u: goto label_4eafa0;
        case 0x4eafa4u: goto label_4eafa4;
        case 0x4eafa8u: goto label_4eafa8;
        case 0x4eafacu: goto label_4eafac;
        case 0x4eafb0u: goto label_4eafb0;
        case 0x4eafb4u: goto label_4eafb4;
        case 0x4eafb8u: goto label_4eafb8;
        case 0x4eafbcu: goto label_4eafbc;
        default: break;
    }

    ctx->pc = 0x4ea820u;

label_4ea820:
    // 0x4ea820: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4ea820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4ea824:
    // 0x4ea824: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x4ea824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4ea828:
    // 0x4ea828: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x4ea828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_4ea82c:
    // 0x4ea82c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x4ea82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_4ea830:
    // 0x4ea830: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x4ea830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_4ea834:
    // 0x4ea834: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x4ea834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_4ea838:
    // 0x4ea838: 0x3c170064  lui         $s7, 0x64
    ctx->pc = 0x4ea838u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)100 << 16));
label_4ea83c:
    // 0x4ea83c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x4ea83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_4ea840:
    // 0x4ea840: 0x3c160067  lui         $s6, 0x67
    ctx->pc = 0x4ea840u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)103 << 16));
label_4ea844:
    // 0x4ea844: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4ea844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_4ea848:
    // 0x4ea848: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4ea848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ea84c:
    // 0x4ea84c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4ea84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4ea850:
    // 0x4ea850: 0x26d6a580  addiu       $s6, $s6, -0x5A80
    ctx->pc = 0x4ea850u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944128));
label_4ea854:
    // 0x4ea854: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4ea854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4ea858:
    // 0x4ea858: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x4ea858u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_4ea85c:
    // 0x4ea85c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4ea85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4ea860:
    // 0x4ea860: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x4ea860u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_4ea864:
    // 0x4ea864: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ea864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ea868:
    // 0x4ea868: 0x26739bc0  addiu       $s3, $s3, -0x6440
    ctx->pc = 0x4ea868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941632));
label_4ea86c:
    // 0x4ea86c: 0xe7ba0028  swc1        $f26, 0x28($sp)
    ctx->pc = 0x4ea86cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_4ea870:
    // 0x4ea870: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4ea870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ea874:
    // 0x4ea874: 0xe7b90024  swc1        $f25, 0x24($sp)
    ctx->pc = 0x4ea874u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4ea878:
    // 0x4ea878: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x4ea878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ea87c:
    // 0x4ea87c: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x4ea87cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4ea880:
    // 0x4ea880: 0xafa6014c  sw          $a2, 0x14C($sp)
    ctx->pc = 0x4ea880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 6));
label_4ea884:
    // 0x4ea884: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x4ea884u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_4ea888:
    // 0x4ea888: 0x26522100  addiu       $s2, $s2, 0x2100
    ctx->pc = 0x4ea888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8448));
label_4ea88c:
    // 0x4ea88c: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x4ea88cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_4ea890:
    // 0x4ea890: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x4ea890u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4ea894:
    // 0x4ea894: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x4ea894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4ea898:
    // 0x4ea898: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4ea898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4ea89c:
    // 0x4ea89c: 0x8c910018  lw          $s1, 0x18($a0)
    ctx->pc = 0x4ea89cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_4ea8a0:
    // 0x4ea8a0: 0x90740116  lbu         $s4, 0x116($v1)
    ctx->pc = 0x4ea8a0u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_4ea8a4:
    // 0x4ea8a4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4ea8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4ea8a8:
    // 0x4ea8a8: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x4ea8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_4ea8ac:
    // 0x4ea8ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4ea8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4ea8b0:
    // 0x4ea8b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4ea8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ea8b4:
    // 0x4ea8b4: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x4ea8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4ea8b8:
    // 0x4ea8b8: 0x7fa400f0  sq          $a0, 0xF0($sp)
    ctx->pc = 0x4ea8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 4));
label_4ea8bc:
    // 0x4ea8bc: 0x2a52021  addu        $a0, $s5, $a1
    ctx->pc = 0x4ea8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_4ea8c0:
    // 0x4ea8c0: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x4ea8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_4ea8c4:
    // 0x4ea8c4: 0x7fa400e0  sq          $a0, 0xE0($sp)
    ctx->pc = 0x4ea8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
label_4ea8c8:
    // 0x4ea8c8: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x4ea8c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4ea8cc:
    // 0x4ea8cc: 0x908411a1  lbu         $a0, 0x11A1($a0)
    ctx->pc = 0x4ea8ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4513)));
label_4ea8d0:
    // 0x4ea8d0: 0x10800182  beqz        $a0, . + 4 + (0x182 << 2)
label_4ea8d4:
    if (ctx->pc == 0x4EA8D4u) {
        ctx->pc = 0x4EA8D4u;
            // 0x4ea8d4: 0x26f72104  addiu       $s7, $s7, 0x2104 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8452));
        ctx->pc = 0x4EA8D8u;
        goto label_4ea8d8;
    }
    ctx->pc = 0x4EA8D0u;
    {
        const bool branch_taken_0x4ea8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA8D0u;
            // 0x4ea8d4: 0x26f72104  addiu       $s7, $s7, 0x2104 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea8d0) {
            ctx->pc = 0x4EAEDCu;
            goto label_4eaedc;
        }
    }
    ctx->pc = 0x4EA8D8u;
label_4ea8d8:
    // 0x4ea8d8: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x4ea8d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4ea8dc:
    // 0x4ea8dc: 0x8c850da0  lw          $a1, 0xDA0($a0)
    ctx->pc = 0x4ea8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_4ea8e0:
    // 0x4ea8e0: 0x30a40010  andi        $a0, $a1, 0x10
    ctx->pc = 0x4ea8e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_4ea8e4:
    // 0x4ea8e4: 0x5480017e  bnel        $a0, $zero, . + 4 + (0x17E << 2)
label_4ea8e8:
    if (ctx->pc == 0x4EA8E8u) {
        ctx->pc = 0x4EA8E8u;
            // 0x4ea8e8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x4EA8ECu;
        goto label_4ea8ec;
    }
    ctx->pc = 0x4EA8E4u;
    {
        const bool branch_taken_0x4ea8e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea8e4) {
            ctx->pc = 0x4EA8E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA8E4u;
            // 0x4ea8e8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EAEE0u;
            goto label_4eaee0;
        }
    }
    ctx->pc = 0x4EA8ECu;
label_4ea8ec:
    // 0x4ea8ec: 0x30a40080  andi        $a0, $a1, 0x80
    ctx->pc = 0x4ea8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_4ea8f0:
    // 0x4ea8f0: 0x1480017a  bnez        $a0, . + 4 + (0x17A << 2)
label_4ea8f4:
    if (ctx->pc == 0x4EA8F4u) {
        ctx->pc = 0x4EA8F8u;
        goto label_4ea8f8;
    }
    ctx->pc = 0x4EA8F0u;
    {
        const bool branch_taken_0x4ea8f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea8f0) {
            ctx->pc = 0x4EAEDCu;
            goto label_4eaedc;
        }
    }
    ctx->pc = 0x4EA8F8u;
label_4ea8f8:
    // 0x4ea8f8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x4ea8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_4ea8fc:
    // 0x4ea8fc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x4ea8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_4ea900:
    // 0x4ea900: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ea900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ea904:
    // 0x4ea904: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4ea904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4ea908:
    // 0x4ea908: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x4ea908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4ea90c:
    // 0x4ea90c: 0x247e0094  addiu       $fp, $v1, 0x94
    ctx->pc = 0x4ea90cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
label_4ea910:
    // 0x4ea910: 0x24c68690  addiu       $a2, $a2, -0x7970
    ctx->pc = 0x4ea910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936208));
label_4ea914:
    // 0x4ea914: 0xc04ccc4  jal         func_133310
label_4ea918:
    if (ctx->pc == 0x4EA918u) {
        ctx->pc = 0x4EA918u;
            // 0x4ea918: 0x24450890  addiu       $a1, $v0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
        ctx->pc = 0x4EA91Cu;
        goto label_4ea91c;
    }
    ctx->pc = 0x4EA914u;
    SET_GPR_U32(ctx, 31, 0x4EA91Cu);
    ctx->pc = 0x4EA918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA914u;
            // 0x4ea918: 0x24450890  addiu       $a1, $v0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA91Cu; }
        if (ctx->pc != 0x4EA91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA91Cu; }
        if (ctx->pc != 0x4EA91Cu) { return; }
    }
    ctx->pc = 0x4EA91Cu;
label_4ea91c:
    // 0x4ea91c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x4ea91cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4ea920:
    // 0x4ea920: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x4ea920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_4ea924:
    // 0x4ea924: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4ea924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4ea928:
    // 0x4ea928: 0x24c686a0  addiu       $a2, $a2, -0x7960
    ctx->pc = 0x4ea928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936224));
label_4ea92c:
    // 0x4ea92c: 0xc04ccc4  jal         func_133310
label_4ea930:
    if (ctx->pc == 0x4EA930u) {
        ctx->pc = 0x4EA930u;
            // 0x4ea930: 0x24450890  addiu       $a1, $v0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
        ctx->pc = 0x4EA934u;
        goto label_4ea934;
    }
    ctx->pc = 0x4EA92Cu;
    SET_GPR_U32(ctx, 31, 0x4EA934u);
    ctx->pc = 0x4EA930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA92Cu;
            // 0x4ea930: 0x24450890  addiu       $a1, $v0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA934u; }
        if (ctx->pc != 0x4EA934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA934u; }
        if (ctx->pc != 0x4EA934u) { return; }
    }
    ctx->pc = 0x4EA934u;
label_4ea934:
    // 0x4ea934: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4ea934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4ea938:
    // 0x4ea938: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4ea938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4ea93c:
    // 0x4ea93c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4ea93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4ea940:
    // 0x4ea940: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4ea940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4ea944:
    // 0x4ea944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ea944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ea948:
    // 0x4ea948: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ea948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ea94c:
    // 0x4ea94c: 0xc04ce84  jal         func_133A10
label_4ea950:
    if (ctx->pc == 0x4EA950u) {
        ctx->pc = 0x4EA950u;
            // 0x4ea950: 0x8c440194  lw          $a0, 0x194($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
        ctx->pc = 0x4EA954u;
        goto label_4ea954;
    }
    ctx->pc = 0x4EA94Cu;
    SET_GPR_U32(ctx, 31, 0x4EA954u);
    ctx->pc = 0x4EA950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA94Cu;
            // 0x4ea950: 0x8c440194  lw          $a0, 0x194($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA954u; }
        if (ctx->pc != 0x4EA954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA954u; }
        if (ctx->pc != 0x4EA954u) { return; }
    }
    ctx->pc = 0x4EA954u;
label_4ea954:
    // 0x4ea954: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x4ea954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_4ea958:
    // 0x4ea958: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x4ea958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4ea95c:
    // 0x4ea95c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x4ea95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_4ea960:
    // 0x4ea960: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x4ea960u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
label_4ea964:
    // 0x4ea964: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ea964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4ea968:
    // 0x4ea968: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x4ea968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_4ea96c:
    // 0x4ea96c: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x4ea96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_4ea970:
    // 0x4ea970: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x4ea970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_4ea974:
    // 0x4ea974: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x4ea974u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
label_4ea978:
    // 0x4ea978: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4ea978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4ea97c:
    // 0x4ea97c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4ea97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ea980:
    // 0x4ea980: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x4ea980u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4ea984:
    // 0x4ea984: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x4ea984u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ea988:
    // 0x4ea988: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4ea988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4ea98c:
    // 0x4ea98c: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x4ea98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_4ea990:
    // 0x4ea990: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x4ea990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_4ea994:
    // 0x4ea994: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x4ea994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_4ea998:
    // 0x4ea998: 0x10830143  beq         $a0, $v1, . + 4 + (0x143 << 2)
label_4ea99c:
    if (ctx->pc == 0x4EA99Cu) {
        ctx->pc = 0x4EA9A0u;
        goto label_4ea9a0;
    }
    ctx->pc = 0x4EA998u;
    {
        const bool branch_taken_0x4ea998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ea998) {
            ctx->pc = 0x4EAEA8u;
            goto label_4eaea8;
        }
    }
    ctx->pc = 0x4EA9A0u;
label_4ea9a0:
    // 0x4ea9a0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x4ea9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_4ea9a4:
    // 0x4ea9a4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x4ea9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4ea9a8:
    // 0x4ea9a8: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x4ea9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4ea9ac:
    // 0x4ea9ac: 0x8e030d6c  lw          $v1, 0xD6C($s0)
    ctx->pc = 0x4ea9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_4ea9b0:
    // 0x4ea9b0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x4ea9b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_4ea9b4:
    // 0x4ea9b4: 0xa3a30120  sb          $v1, 0x120($sp)
    ctx->pc = 0x4ea9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 3));
label_4ea9b8:
    // 0x4ea9b8: 0x93a30120  lbu         $v1, 0x120($sp)
    ctx->pc = 0x4ea9b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
label_4ea9bc:
    // 0x4ea9bc: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_4ea9c0:
    if (ctx->pc == 0x4EA9C0u) {
        ctx->pc = 0x4EA9C4u;
        goto label_4ea9c4;
    }
    ctx->pc = 0x4EA9BCu;
    {
        const bool branch_taken_0x4ea9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4ea9bc) {
            ctx->pc = 0x4EA9C8u;
            goto label_4ea9c8;
        }
    }
    ctx->pc = 0x4EA9C4u;
label_4ea9c4:
    // 0x4ea9c4: 0xa3a00120  sb          $zero, 0x120($sp)
    ctx->pc = 0x4ea9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 0));
label_4ea9c8:
    // 0x4ea9c8: 0x93a30120  lbu         $v1, 0x120($sp)
    ctx->pc = 0x4ea9c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
label_4ea9cc:
    // 0x4ea9cc: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x4ea9ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4ea9d0:
    // 0x4ea9d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4ea9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ea9d4:
    // 0x4ea9d4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x4ea9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_4ea9d8:
    // 0x4ea9d8: 0x2463cd10  addiu       $v1, $v1, -0x32F0
    ctx->pc = 0x4ea9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954256));
label_4ea9dc:
    // 0x4ea9dc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x4ea9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ea9e0:
    // 0x4ea9e0: 0x8e030d70  lw          $v1, 0xD70($s0)
    ctx->pc = 0x4ea9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_4ea9e4:
    // 0x4ea9e4: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x4ea9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_4ea9e8:
    // 0x4ea9e8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x4ea9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_4ea9ec:
    // 0x4ea9ec: 0x1460012e  bnez        $v1, . + 4 + (0x12E << 2)
label_4ea9f0:
    if (ctx->pc == 0x4EA9F0u) {
        ctx->pc = 0x4EA9F0u;
            // 0x4ea9f0: 0x8c940000  lw          $s4, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4EA9F4u;
        goto label_4ea9f4;
    }
    ctx->pc = 0x4EA9ECu;
    {
        const bool branch_taken_0x4ea9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EA9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA9ECu;
            // 0x4ea9f0: 0x8c940000  lw          $s4, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea9ec) {
            ctx->pc = 0x4EAEA8u;
            goto label_4eaea8;
        }
    }
    ctx->pc = 0x4EA9F4u;
label_4ea9f4:
    // 0x4ea9f4: 0x920311a1  lbu         $v1, 0x11A1($s0)
    ctx->pc = 0x4ea9f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4513)));
label_4ea9f8:
    // 0x4ea9f8: 0x1060012b  beqz        $v1, . + 4 + (0x12B << 2)
label_4ea9fc:
    if (ctx->pc == 0x4EA9FCu) {
        ctx->pc = 0x4EAA00u;
        goto label_4eaa00;
    }
    ctx->pc = 0x4EA9F8u;
    {
        const bool branch_taken_0x4ea9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea9f8) {
            ctx->pc = 0x4EAEA8u;
            goto label_4eaea8;
        }
    }
    ctx->pc = 0x4EAA00u;
label_4eaa00:
    // 0x4eaa00: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x4eaa00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4eaa04:
    // 0x4eaa04: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4eaa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4eaa08:
    // 0x4eaa08: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x4eaa08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_4eaa0c:
    // 0x4eaa0c: 0xc04cc90  jal         func_133240
label_4eaa10:
    if (ctx->pc == 0x4EAA10u) {
        ctx->pc = 0x4EAA10u;
            // 0x4eaa10: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x4EAA14u;
        goto label_4eaa14;
    }
    ctx->pc = 0x4EAA0Cu;
    SET_GPR_U32(ctx, 31, 0x4EAA14u);
    ctx->pc = 0x4EAA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAA0Cu;
            // 0x4eaa10: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAA14u; }
        if (ctx->pc != 0x4EAA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAA14u; }
        if (ctx->pc != 0x4EAA14u) { return; }
    }
    ctx->pc = 0x4EAA14u;
label_4eaa14:
    // 0x4eaa14: 0xc04cc14  jal         func_133050
label_4eaa18:
    if (ctx->pc == 0x4EAA18u) {
        ctx->pc = 0x4EAA18u;
            // 0x4eaa18: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x4EAA1Cu;
        goto label_4eaa1c;
    }
    ctx->pc = 0x4EAA14u;
    SET_GPR_U32(ctx, 31, 0x4EAA1Cu);
    ctx->pc = 0x4EAA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAA14u;
            // 0x4eaa18: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAA1Cu; }
        if (ctx->pc != 0x4EAA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAA1Cu; }
        if (ctx->pc != 0x4EAA1Cu) { return; }
    }
    ctx->pc = 0x4EAA1Cu;
label_4eaa1c:
    // 0x4eaa1c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4eaa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4eaa20:
    // 0x4eaa20: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x4eaa20u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_4eaa24:
    // 0x4eaa24: 0xc04cc44  jal         func_133110
label_4eaa28:
    if (ctx->pc == 0x4EAA28u) {
        ctx->pc = 0x4EAA28u;
            // 0x4eaa28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EAA2Cu;
        goto label_4eaa2c;
    }
    ctx->pc = 0x4EAA24u;
    SET_GPR_U32(ctx, 31, 0x4EAA2Cu);
    ctx->pc = 0x4EAA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAA24u;
            // 0x4eaa28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAA2Cu; }
        if (ctx->pc != 0x4EAA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAA2Cu; }
        if (ctx->pc != 0x4EAA2Cu) { return; }
    }
    ctx->pc = 0x4EAA2Cu;
label_4eaa2c:
    // 0x4eaa2c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4eaa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4eaa30:
    // 0x4eaa30: 0xc04cc08  jal         func_133020
label_4eaa34:
    if (ctx->pc == 0x4EAA34u) {
        ctx->pc = 0x4EAA34u;
            // 0x4eaa34: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x4EAA38u;
        goto label_4eaa38;
    }
    ctx->pc = 0x4EAA30u;
    SET_GPR_U32(ctx, 31, 0x4EAA38u);
    ctx->pc = 0x4EAA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAA30u;
            // 0x4eaa34: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAA38u; }
        if (ctx->pc != 0x4EAA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAA38u; }
        if (ctx->pc != 0x4EAA38u) { return; }
    }
    ctx->pc = 0x4EAA38u;
label_4eaa38:
    // 0x4eaa38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4eaa38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4eaa3c:
    // 0x4eaa3c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4eaa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4eaa40:
    // 0x4eaa40: 0xc04cc08  jal         func_133020
label_4eaa44:
    if (ctx->pc == 0x4EAA44u) {
        ctx->pc = 0x4EAA44u;
            // 0x4eaa44: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x4EAA48u;
        goto label_4eaa48;
    }
    ctx->pc = 0x4EAA40u;
    SET_GPR_U32(ctx, 31, 0x4EAA48u);
    ctx->pc = 0x4EAA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAA40u;
            // 0x4eaa44: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAA48u; }
        if (ctx->pc != 0x4EAA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAA48u; }
        if (ctx->pc != 0x4EAA48u) { return; }
    }
    ctx->pc = 0x4EAA48u;
label_4eaa48:
    // 0x4eaa48: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4eaa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4eaa4c:
    // 0x4eaa4c: 0x0  nop
    ctx->pc = 0x4eaa4cu;
    // NOP
label_4eaa50:
    // 0x4eaa50: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x4eaa50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4eaa54:
    // 0x4eaa54: 0x45010114  bc1t        . + 4 + (0x114 << 2)
label_4eaa58:
    if (ctx->pc == 0x4EAA58u) {
        ctx->pc = 0x4EAA5Cu;
        goto label_4eaa5c;
    }
    ctx->pc = 0x4EAA54u;
    {
        const bool branch_taken_0x4eaa54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4eaa54) {
            ctx->pc = 0x4EAEA8u;
            goto label_4eaea8;
        }
    }
    ctx->pc = 0x4EAA5Cu;
label_4eaa5c:
    // 0x4eaa5c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4eaa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eaa60:
    // 0x4eaa60: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x4eaa60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4eaa64:
    // 0x4eaa64: 0x45010110  bc1t        . + 4 + (0x110 << 2)
label_4eaa68:
    if (ctx->pc == 0x4EAA68u) {
        ctx->pc = 0x4EAA6Cu;
        goto label_4eaa6c;
    }
    ctx->pc = 0x4EAA64u;
    {
        const bool branch_taken_0x4eaa64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4eaa64) {
            ctx->pc = 0x4EAEA8u;
            goto label_4eaea8;
        }
    }
    ctx->pc = 0x4EAA6Cu;
label_4eaa6c:
    // 0x4eaa6c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4eaa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eaa70:
    // 0x4eaa70: 0x4601b836  c.le.s      $f23, $f1
    ctx->pc = 0x4eaa70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4eaa74:
    // 0x4eaa74: 0x4500010c  bc1f        . + 4 + (0x10C << 2)
label_4eaa78:
    if (ctx->pc == 0x4EAA78u) {
        ctx->pc = 0x4EAA7Cu;
        goto label_4eaa7c;
    }
    ctx->pc = 0x4EAA74u;
    {
        const bool branch_taken_0x4eaa74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4eaa74) {
            ctx->pc = 0x4EAEA8u;
            goto label_4eaea8;
        }
    }
    ctx->pc = 0x4EAA7Cu;
label_4eaa7c:
    // 0x4eaa7c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x4eaa7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4eaa80:
    // 0x4eaa80: 0x45010109  bc1t        . + 4 + (0x109 << 2)
label_4eaa84:
    if (ctx->pc == 0x4EAA84u) {
        ctx->pc = 0x4EAA88u;
        goto label_4eaa88;
    }
    ctx->pc = 0x4EAA80u;
    {
        const bool branch_taken_0x4eaa80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4eaa80) {
            ctx->pc = 0x4EAEA8u;
            goto label_4eaea8;
        }
    }
    ctx->pc = 0x4EAA88u;
label_4eaa88:
    // 0x4eaa88: 0x461a0036  c.le.s      $f0, $f26
    ctx->pc = 0x4eaa88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4eaa8c:
    // 0x4eaa8c: 0x45000106  bc1f        . + 4 + (0x106 << 2)
label_4eaa90:
    if (ctx->pc == 0x4EAA90u) {
        ctx->pc = 0x4EAA94u;
        goto label_4eaa94;
    }
    ctx->pc = 0x4EAA8Cu;
    {
        const bool branch_taken_0x4eaa8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4eaa8c) {
            ctx->pc = 0x4EAEA8u;
            goto label_4eaea8;
        }
    }
    ctx->pc = 0x4EAA94u;
label_4eaa94:
    // 0x4eaa94: 0x0  nop
    ctx->pc = 0x4eaa94u;
    // NOP
label_4eaa98:
    // 0x4eaa98: 0x0  nop
    ctx->pc = 0x4eaa98u;
    // NOP
label_4eaa9c:
    // 0x4eaa9c: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x4eaa9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
label_4eaaa0:
    // 0x4eaaa0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x4eaaa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4eaaa4:
    // 0x4eaaa4: 0x86280004  lh          $t0, 0x4($s1)
    ctx->pc = 0x4eaaa4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_4eaaa8:
    // 0x4eaaa8: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x4eaaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_4eaaac:
    // 0x4eaaac: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x4eaaacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_4eaab0:
    // 0x4eaab0: 0x46150083  div.s       $f2, $f0, $f21
    ctx->pc = 0x4eaab0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[21];
label_4eaab4:
    // 0x4eaab4: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x4eaab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_4eaab8:
    // 0x4eaab8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4eaab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4eaabc:
    // 0x4eaabc: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4eaabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4eaac0:
    // 0x4eaac0: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x4eaac0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_4eaac4:
    // 0x4eaac4: 0xa23823  subu        $a3, $a1, $v0
    ctx->pc = 0x4eaac4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4eaac8:
    // 0x4eaac8: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x4eaac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4eaacc:
    // 0x4eaacc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4eaaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eaad0:
    // 0x4eaad0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4eaad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4eaad4:
    // 0x4eaad4: 0x4601be43  div.s       $f25, $f23, $f1
    ctx->pc = 0x4eaad4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[25] = ctx->f[23] / ctx->f[1];
label_4eaad8:
    // 0x4eaad8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4eaad8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eaadc:
    // 0x4eaadc: 0x0  nop
    ctx->pc = 0x4eaadcu;
    // NOP
label_4eaae0:
    // 0x4eaae0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4eaae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4eaae4:
    // 0x4eaae4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4eaae4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eaae8:
    // 0x4eaae8: 0x0  nop
    ctx->pc = 0x4eaae8u;
    // NOP
label_4eaaec:
    // 0x4eaaec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4eaaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4eaaf0:
    // 0x4eaaf0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x4eaaf0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_4eaaf4:
    // 0x4eaaf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4eaaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eaaf8:
    // 0x4eaaf8: 0x0  nop
    ctx->pc = 0x4eaaf8u;
    // NOP
label_4eaafc:
    // 0x4eaafc: 0x46020e1c  madd.s      $f24, $f1, $f2
    ctx->pc = 0x4eaafcu;
    ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_4eab00:
    // 0x4eab00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4eab00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4eab04:
    // 0x4eab04: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x4eab04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_4eab08:
    // 0x4eab08: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x4eab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4eab0c:
    // 0x4eab0c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x4eab0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4eab10:
    // 0x4eab10: 0x0  nop
    ctx->pc = 0x4eab10u;
    // NOP
label_4eab14:
    // 0x4eab14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4eab14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4eab18:
    // 0x4eab18: 0xc0506ac  jal         func_141AB0
label_4eab1c:
    if (ctx->pc == 0x4EAB1Cu) {
        ctx->pc = 0x4EAB1Cu;
            // 0x4eab1c: 0x4619051c  madd.s      $f20, $f0, $f25 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[25]));
        ctx->pc = 0x4EAB20u;
        goto label_4eab20;
    }
    ctx->pc = 0x4EAB18u;
    SET_GPR_U32(ctx, 31, 0x4EAB20u);
    ctx->pc = 0x4EAB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAB18u;
            // 0x4eab1c: 0x4619051c  madd.s      $f20, $f0, $f25 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[25]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAB20u; }
        if (ctx->pc != 0x4EAB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAB20u; }
        if (ctx->pc != 0x4EAB20u) { return; }
    }
    ctx->pc = 0x4EAB20u;
label_4eab20:
    // 0x4eab20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4eab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4eab24:
    // 0x4eab24: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4eab24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4eab28:
    // 0x4eab28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4eab28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4eab2c:
    // 0x4eab2c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4eab2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4eab30:
    // 0x4eab30: 0x320f809  jalr        $t9
label_4eab34:
    if (ctx->pc == 0x4EAB34u) {
        ctx->pc = 0x4EAB34u;
            // 0x4eab34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4EAB38u;
        goto label_4eab38;
    }
    ctx->pc = 0x4EAB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EAB38u);
        ctx->pc = 0x4EAB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAB30u;
            // 0x4eab34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EAB38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EAB38u; }
            if (ctx->pc != 0x4EAB38u) { return; }
        }
        }
    }
    ctx->pc = 0x4EAB38u;
label_4eab38:
    // 0x4eab38: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4eab38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4eab3c:
    // 0x4eab3c: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x4eab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4eab40:
    // 0x4eab40: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x4eab40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4eab44:
    // 0x4eab44: 0xc661068c  lwc1        $f1, 0x68C($s3)
    ctx->pc = 0x4eab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eab48:
    // 0x4eab48: 0xc6620688  lwc1        $f2, 0x688($s3)
    ctx->pc = 0x4eab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4eab4c:
    // 0x4eab4c: 0x26650680  addiu       $a1, $s3, 0x680
    ctx->pc = 0x4eab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1664));
label_4eab50:
    // 0x4eab50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4eab50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eab54:
    // 0x4eab54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4eab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4eab58:
    // 0x4eab58: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x4eab58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_4eab5c:
    // 0x4eab5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4eab5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eab60:
    // 0x4eab60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4eab60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4eab64:
    // 0x4eab64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4eab64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4eab68:
    // 0x4eab68: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4eab68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4eab6c:
    // 0x4eab6c: 0x46040dc2  mul.s       $f23, $f1, $f4
    ctx->pc = 0x4eab6cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4eab70:
    // 0x4eab70: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x4eab70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4eab74:
    // 0x4eab74: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4eab74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4eab78:
    // 0x4eab78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4eab78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eab7c:
    // 0x4eab7c: 0x0  nop
    ctx->pc = 0x4eab7cu;
    // NOP
label_4eab80:
    // 0x4eab80: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4eab80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4eab84:
    // 0x4eab84: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x4eab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eab88:
    // 0x4eab88: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4eab88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4eab8c:
    // 0x4eab8c: 0x460410c2  mul.s       $f3, $f2, $f4
    ctx->pc = 0x4eab8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_4eab90:
    // 0x4eab90: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x4eab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4eab94:
    // 0x4eab94: 0x46800ce0  cvt.s.w     $f19, $f1
    ctx->pc = 0x4eab94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
label_4eab98:
    // 0x4eab98: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x4eab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4eab9c:
    // 0x4eab9c: 0x468014a0  cvt.s.w     $f18, $f2
    ctx->pc = 0x4eab9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
label_4eaba0:
    // 0x4eaba0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4eaba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4eaba4:
    // 0x4eaba4: 0xc7c0000c  lwc1        $f0, 0xC($fp)
    ctx->pc = 0x4eaba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4eaba8:
    // 0x4eaba8: 0x4603c301  sub.s       $f12, $f24, $f3
    ctx->pc = 0x4eaba8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[3]);
label_4eabac:
    // 0x4eabac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4eabacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4eabb0:
    // 0x4eabb0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x4eabb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4eabb4:
    // 0x4eabb4: 0x4603c380  add.s       $f14, $f24, $f3
    ctx->pc = 0x4eabb4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[3]);
label_4eabb8:
    // 0x4eabb8: 0x4617a341  sub.s       $f13, $f20, $f23
    ctx->pc = 0x4eabb8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
label_4eabbc:
    // 0x4eabbc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x4eabbcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_4eabc0:
    // 0x4eabc0: 0xc0bc228  jal         func_2F08A0
label_4eabc4:
    if (ctx->pc == 0x4EABC4u) {
        ctx->pc = 0x4EABC4u;
            // 0x4eabc4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x4EABC8u;
        goto label_4eabc8;
    }
    ctx->pc = 0x4EABC0u;
    SET_GPR_U32(ctx, 31, 0x4EABC8u);
    ctx->pc = 0x4EABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EABC0u;
            // 0x4eabc4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EABC8u; }
        if (ctx->pc != 0x4EABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EABC8u; }
        if (ctx->pc != 0x4EABC8u) { return; }
    }
    ctx->pc = 0x4EABC8u;
label_4eabc8:
    // 0x4eabc8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x4eabc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_4eabcc:
    // 0x4eabcc: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x4eabccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
label_4eabd0:
    // 0x4eabd0: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x4eabd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4eabd4:
    // 0x4eabd4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4eabd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4eabd8:
    // 0x4eabd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4eabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4eabdc:
    // 0x4eabdc: 0x26740670  addiu       $s4, $s3, 0x670
    ctx->pc = 0x4eabdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1648));
label_4eabe0:
    // 0x4eabe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4eabe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eabe4:
    // 0x4eabe4: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x4eabe4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4eabe8:
    // 0x4eabe8: 0x461900c1  sub.s       $f3, $f0, $f25
    ctx->pc = 0x4eabe8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
label_4eabec:
    // 0x4eabec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4eabecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4eabf0:
    // 0x4eabf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4eabf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4eabf4:
    // 0x4eabf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4eabf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4eabf8:
    // 0x4eabf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4eabf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eabfc:
    // 0x4eabfc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4eabfcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eac00:
    // 0x4eac00: 0x0  nop
    ctx->pc = 0x4eac00u;
    // NOP
label_4eac04:
    // 0x4eac04: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4eac04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4eac08:
    // 0x4eac08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4eac08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4eac0c:
    // 0x4eac0c: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x4eac0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4eac10:
    // 0x4eac10: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x4eac10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_4eac14:
    // 0x4eac14: 0x0  nop
    ctx->pc = 0x4eac14u;
    // NOP
label_4eac18:
    // 0x4eac18: 0x46142818  adda.s      $f5, $f20
    ctx->pc = 0x4eac18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
label_4eac1c:
    // 0x4eac1c: 0x4617099d  msub.s      $f6, $f1, $f23
    ctx->pc = 0x4eac1cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[23]));
label_4eac20:
    // 0x4eac20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4eac20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eac24:
    // 0x4eac24: 0x0  nop
    ctx->pc = 0x4eac24u;
    // NOP
label_4eac28:
    // 0x4eac28: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4eac28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4eac2c:
    // 0x4eac2c: 0x44892000  mtc1        $t1, $f4
    ctx->pc = 0x4eac2cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4eac30:
    // 0x4eac30: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x4eac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4eac34:
    // 0x4eac34: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x4eac34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_4eac38:
    // 0x4eac38: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x4eac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eac3c:
    // 0x4eac3c: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x4eac3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4eac40:
    // 0x4eac40: 0xc6600678  lwc1        $f0, 0x678($s3)
    ctx->pc = 0x4eac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4eac44:
    // 0x4eac44: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x4eac44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4eac48:
    // 0x4eac48: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x4eac48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4eac4c:
    // 0x4eac4c: 0xc661067c  lwc1        $f1, 0x67C($s3)
    ctx->pc = 0x4eac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eac50:
    // 0x4eac50: 0x46062818  adda.s      $f5, $f6
    ctx->pc = 0x4eac50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_4eac54:
    // 0x4eac54: 0x4602c301  sub.s       $f12, $f24, $f2
    ctx->pc = 0x4eac54u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
label_4eac58:
    // 0x4eac58: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x4eac58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_4eac5c:
    // 0x4eac5c: 0x4601251d  msub.s      $f20, $f4, $f1
    ctx->pc = 0x4eac5cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_4eac60:
    // 0x4eac60: 0x4602c380  add.s       $f14, $f24, $f2
    ctx->pc = 0x4eac60u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
label_4eac64:
    // 0x4eac64: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x4eac64u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4eac68:
    // 0x4eac68: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4eac68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4eac6c:
    // 0x4eac6c: 0xc0bc284  jal         func_2F0A10
label_4eac70:
    if (ctx->pc == 0x4EAC70u) {
        ctx->pc = 0x4EAC70u;
            // 0x4eac70: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4EAC74u;
        goto label_4eac74;
    }
    ctx->pc = 0x4EAC6Cu;
    SET_GPR_U32(ctx, 31, 0x4EAC74u);
    ctx->pc = 0x4EAC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAC6Cu;
            // 0x4eac70: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAC74u; }
        if (ctx->pc != 0x4EAC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAC74u; }
        if (ctx->pc != 0x4EAC74u) { return; }
    }
    ctx->pc = 0x4EAC74u;
label_4eac74:
    // 0x4eac74: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4eac74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4eac78:
    // 0x4eac78: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4eac78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_4eac7c:
    // 0x4eac7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4eac7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4eac80:
    // 0x4eac80: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x4eac80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4eac84:
    // 0x4eac84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4eac84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4eac88:
    // 0x4eac88: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x4eac88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_4eac8c:
    // 0x4eac8c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4eac8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eac90:
    // 0x4eac90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4eac90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4eac94:
    // 0x4eac94: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4eac94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4eac98:
    // 0x4eac98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4eac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4eac9c:
    // 0x4eac9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4eac9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4eaca0:
    // 0x4eaca0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4eaca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eaca4:
    // 0x4eaca4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x4eaca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eaca8:
    // 0x4eaca8: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x4eaca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4eacac:
    // 0x4eacac: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4eacacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4eacb0:
    // 0x4eacb0: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x4eacb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4eacb4:
    // 0x4eacb4: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x4eacb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_4eacb8:
    // 0x4eacb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4eacb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eacbc:
    // 0x4eacbc: 0x0  nop
    ctx->pc = 0x4eacbcu;
    // NOP
label_4eacc0:
    // 0x4eacc0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4eacc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4eacc4:
    // 0x4eacc4: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x4eacc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eacc8:
    // 0x4eacc8: 0x4602c301  sub.s       $f12, $f24, $f2
    ctx->pc = 0x4eacc8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
label_4eaccc:
    // 0x4eaccc: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x4eacccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4eacd0:
    // 0x4eacd0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4eacd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_4eacd4:
    // 0x4eacd4: 0x4602c380  add.s       $f14, $f24, $f2
    ctx->pc = 0x4eacd4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
label_4eacd8:
    // 0x4eacd8: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x4eacd8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4eacdc:
    // 0x4eacdc: 0xc0bc284  jal         func_2F0A10
label_4eace0:
    if (ctx->pc == 0x4EACE0u) {
        ctx->pc = 0x4EACE0u;
            // 0x4eace0: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4EACE4u;
        goto label_4eace4;
    }
    ctx->pc = 0x4EACDCu;
    SET_GPR_U32(ctx, 31, 0x4EACE4u);
    ctx->pc = 0x4EACE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EACDCu;
            // 0x4eace0: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EACE4u; }
        if (ctx->pc != 0x4EACE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EACE4u; }
        if (ctx->pc != 0x4EACE4u) { return; }
    }
    ctx->pc = 0x4EACE4u;
label_4eace4:
    // 0x4eace4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4eace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4eace8:
    // 0x4eace8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4eace8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4eacec:
    // 0x4eacec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4eacecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4eacf0:
    // 0x4eacf0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4eacf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4eacf4:
    // 0x4eacf4: 0x320f809  jalr        $t9
label_4eacf8:
    if (ctx->pc == 0x4EACF8u) {
        ctx->pc = 0x4EACFCu;
        goto label_4eacfc;
    }
    ctx->pc = 0x4EACF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EACFCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EACFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EACFCu; }
            if (ctx->pc != 0x4EACFCu) { return; }
        }
        }
    }
    ctx->pc = 0x4EACFCu;
label_4eacfc:
    // 0x4eacfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4eacfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ead00:
    // 0x4ead00: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4ead00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4ead04:
    // 0x4ead04: 0xc0506ac  jal         func_141AB0
label_4ead08:
    if (ctx->pc == 0x4EAD08u) {
        ctx->pc = 0x4EAD08u;
            // 0x4ead08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EAD0Cu;
        goto label_4ead0c;
    }
    ctx->pc = 0x4EAD04u;
    SET_GPR_U32(ctx, 31, 0x4EAD0Cu);
    ctx->pc = 0x4EAD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAD04u;
            // 0x4ead08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAD0Cu; }
        if (ctx->pc != 0x4EAD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAD0Cu; }
        if (ctx->pc != 0x4EAD0Cu) { return; }
    }
    ctx->pc = 0x4EAD0Cu;
label_4ead0c:
    // 0x4ead0c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ead0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ead10:
    // 0x4ead10: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4ead10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4ead14:
    // 0x4ead14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ead14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ead18:
    // 0x4ead18: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4ead18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4ead1c:
    // 0x4ead1c: 0x320f809  jalr        $t9
label_4ead20:
    if (ctx->pc == 0x4EAD20u) {
        ctx->pc = 0x4EAD20u;
            // 0x4ead20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4EAD24u;
        goto label_4ead24;
    }
    ctx->pc = 0x4EAD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EAD24u);
        ctx->pc = 0x4EAD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAD1Cu;
            // 0x4ead20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EAD24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EAD24u; }
            if (ctx->pc != 0x4EAD24u) { return; }
        }
        }
    }
    ctx->pc = 0x4EAD24u;
label_4ead24:
    // 0x4ead24: 0x8e020d74  lw          $v0, 0xD74($s0)
    ctx->pc = 0x4ead24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_4ead28:
    // 0x4ead28: 0x904202c4  lbu         $v0, 0x2C4($v0)
    ctx->pc = 0x4ead28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 708)));
label_4ead2c:
    // 0x4ead2c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_4ead30:
    if (ctx->pc == 0x4EAD30u) {
        ctx->pc = 0x4EAD34u;
        goto label_4ead34;
    }
    ctx->pc = 0x4EAD2Cu;
    {
        const bool branch_taken_0x4ead2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ead2c) {
            ctx->pc = 0x4EADF0u;
            goto label_4eadf0;
        }
    }
    ctx->pc = 0x4EAD34u;
label_4ead34:
    // 0x4ead34: 0x86e40000  lh          $a0, 0x0($s7)
    ctx->pc = 0x4ead34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4ead38:
    // 0x4ead38: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4ead38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4ead3c:
    // 0x4ead3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4ead3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ead40:
    // 0x4ead40: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x4ead40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_4ead44:
    // 0x4ead44: 0xc6c10138  lwc1        $f1, 0x138($s6)
    ctx->pc = 0x4ead44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ead48:
    // 0x4ead48: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ead48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ead4c:
    // 0x4ead4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ead4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ead50:
    // 0x4ead50: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x4ead50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_4ead54:
    // 0x4ead54: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4ead54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4ead58:
    // 0x4ead58: 0x26c50130  addiu       $a1, $s6, 0x130
    ctx->pc = 0x4ead58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 304));
label_4ead5c:
    // 0x4ead5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ead5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ead60:
    // 0x4ead60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ead60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ead64:
    // 0x4ead64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ead64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ead68:
    // 0x4ead68: 0x0  nop
    ctx->pc = 0x4ead68u;
    // NOP
label_4ead6c:
    // 0x4ead6c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4ead6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4ead70:
    // 0x4ead70: 0xc6c0013c  lwc1        $f0, 0x13C($s6)
    ctx->pc = 0x4ead70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ead74:
    // 0x4ead74: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4ead74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4ead78:
    // 0x4ead78: 0xc6a4000c  lwc1        $f4, 0xC($s5)
    ctx->pc = 0x4ead78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4ead7c:
    // 0x4ead7c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4ead7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4ead80:
    // 0x4ead80: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4ead80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4ead84:
    // 0x4ead84: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x4ead84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ead88:
    // 0x4ead88: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4ead88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_4ead8c:
    // 0x4ead8c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x4ead8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4ead90:
    // 0x4ead90: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4ead90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4ead94:
    // 0x4ead94: 0x4601c301  sub.s       $f12, $f24, $f1
    ctx->pc = 0x4ead94u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
label_4ead98:
    // 0x4ead98: 0x4601c380  add.s       $f14, $f24, $f1
    ctx->pc = 0x4ead98u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_4ead9c:
    // 0x4ead9c: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x4ead9cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4eada0:
    // 0x4eada0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4eada0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4eada4:
    // 0x4eada4: 0xc0bc284  jal         func_2F0A10
label_4eada8:
    if (ctx->pc == 0x4EADA8u) {
        ctx->pc = 0x4EADA8u;
            // 0x4eada8: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4EADACu;
        goto label_4eadac;
    }
    ctx->pc = 0x4EADA4u;
    SET_GPR_U32(ctx, 31, 0x4EADACu);
    ctx->pc = 0x4EADA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EADA4u;
            // 0x4eada8: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EADACu; }
        if (ctx->pc != 0x4EADACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EADACu; }
        if (ctx->pc != 0x4EADACu) { return; }
    }
    ctx->pc = 0x4EADACu;
label_4eadac:
    // 0x4eadac: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x4eadacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eadb0:
    // 0x4eadb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4eadb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eadb4:
    // 0x4eadb4: 0x0  nop
    ctx->pc = 0x4eadb4u;
    // NOP
label_4eadb8:
    // 0x4eadb8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4eadb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4eadbc:
    // 0x4eadbc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_4eadc0:
    if (ctx->pc == 0x4EADC0u) {
        ctx->pc = 0x4EADC4u;
        goto label_4eadc4;
    }
    ctx->pc = 0x4EADBCu;
    {
        const bool branch_taken_0x4eadbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4eadbc) {
            ctx->pc = 0x4EADF0u;
            goto label_4eadf0;
        }
    }
    ctx->pc = 0x4EADC4u;
label_4eadc4:
    // 0x4eadc4: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x4eadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_4eadc8:
    // 0x4eadc8: 0xc073234  jal         func_1CC8D0
label_4eadcc:
    if (ctx->pc == 0x4EADCCu) {
        ctx->pc = 0x4EADCCu;
            // 0x4eadcc: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x4EADD0u;
        goto label_4eadd0;
    }
    ctx->pc = 0x4EADC8u;
    SET_GPR_U32(ctx, 31, 0x4EADD0u);
    ctx->pc = 0x4EADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EADC8u;
            // 0x4eadcc: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EADD0u; }
        if (ctx->pc != 0x4EADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EADD0u; }
        if (ctx->pc != 0x4EADD0u) { return; }
    }
    ctx->pc = 0x4EADD0u;
label_4eadd0:
    // 0x4eadd0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x4eadd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4eadd4:
    // 0x4eadd4: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x4eadd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_4eadd8:
    // 0x4eadd8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4eadd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4eaddc:
    // 0x4eaddc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4eaddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4eade0:
    // 0x4eade0: 0x320f809  jalr        $t9
label_4eade4:
    if (ctx->pc == 0x4EADE4u) {
        ctx->pc = 0x4EADE4u;
            // 0x4eade4: 0x8c450098  lw          $a1, 0x98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
        ctx->pc = 0x4EADE8u;
        goto label_4eade8;
    }
    ctx->pc = 0x4EADE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EADE8u);
        ctx->pc = 0x4EADE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EADE0u;
            // 0x4eade4: 0x8c450098  lw          $a1, 0x98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EADE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EADE8u; }
            if (ctx->pc != 0x4EADE8u) { return; }
        }
        }
    }
    ctx->pc = 0x4EADE8u;
label_4eade8:
    // 0x4eade8: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x4eade8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_4eadec:
    // 0x4eadec: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x4eadecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_4eadf0:
    // 0x4eadf0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4eadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4eadf4:
    // 0x4eadf4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4eadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4eadf8:
    // 0x4eadf8: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x4eadf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eadfc:
    // 0x4eadfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4eadfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eae00:
    // 0x4eae00: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4eae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4eae04:
    // 0x4eae04: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4eae04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4eae08:
    // 0x4eae08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4eae08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4eae0c:
    // 0x4eae0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4eae10:
    if (ctx->pc == 0x4EAE10u) {
        ctx->pc = 0x4EAE10u;
            // 0x4eae10: 0xe6a10014  swc1        $f1, 0x14($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
        ctx->pc = 0x4EAE14u;
        goto label_4eae14;
    }
    ctx->pc = 0x4EAE0Cu;
    {
        const bool branch_taken_0x4eae0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4EAE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAE0Cu;
            // 0x4eae10: 0xe6a10014  swc1        $f1, 0x14($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eae0c) {
            ctx->pc = 0x4EAE18u;
            goto label_4eae18;
        }
    }
    ctx->pc = 0x4EAE14u;
label_4eae14:
    // 0x4eae14: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x4eae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
label_4eae18:
    // 0x4eae18: 0x86e40000  lh          $a0, 0x0($s7)
    ctx->pc = 0x4eae18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4eae1c:
    // 0x4eae1c: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x4eae1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
label_4eae20:
    // 0x4eae20: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x4eae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4eae24:
    // 0x4eae24: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x4eae24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_4eae28:
    // 0x4eae28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4eae28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eae2c:
    // 0x4eae2c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4eae2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eae30:
    // 0x4eae30: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x4eae30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4eae34:
    // 0x4eae34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4eae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4eae38:
    // 0x4eae38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x4eae38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4eae3c:
    // 0x4eae3c: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x4eae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_4eae40:
    // 0x4eae40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4eae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4eae44:
    // 0x4eae44: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4eae44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4eae48:
    // 0x4eae48: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x4eae48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_4eae4c:
    // 0x4eae4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4eae4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eae50:
    // 0x4eae50: 0x0  nop
    ctx->pc = 0x4eae50u;
    // NOP
label_4eae54:
    // 0x4eae54: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4eae54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4eae58:
    // 0x4eae58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4eae58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4eae5c:
    // 0x4eae5c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4eae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eae60:
    // 0x4eae60: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4eae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4eae64:
    // 0x4eae64: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4eae64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4eae68:
    // 0x4eae68: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4eae68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4eae6c:
    // 0x4eae6c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4eae6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4eae70:
    // 0x4eae70: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x4eae70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_4eae74:
    // 0x4eae74: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4eae74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4eae78:
    // 0x4eae78: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4eae78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4eae7c:
    // 0x4eae7c: 0x4601c301  sub.s       $f12, $f24, $f1
    ctx->pc = 0x4eae7cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
label_4eae80:
    // 0x4eae80: 0x4601c380  add.s       $f14, $f24, $f1
    ctx->pc = 0x4eae80u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_4eae84:
    // 0x4eae84: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x4eae84u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4eae88:
    // 0x4eae88: 0xc0bc284  jal         func_2F0A10
label_4eae8c:
    if (ctx->pc == 0x4EAE8Cu) {
        ctx->pc = 0x4EAE8Cu;
            // 0x4eae8c: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4EAE90u;
        goto label_4eae90;
    }
    ctx->pc = 0x4EAE88u;
    SET_GPR_U32(ctx, 31, 0x4EAE90u);
    ctx->pc = 0x4EAE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAE88u;
            // 0x4eae8c: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAE90u; }
        if (ctx->pc != 0x4EAE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EAE90u; }
        if (ctx->pc != 0x4EAE90u) { return; }
    }
    ctx->pc = 0x4EAE90u;
label_4eae90:
    // 0x4eae90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4eae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4eae94:
    // 0x4eae94: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4eae94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4eae98:
    // 0x4eae98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4eae98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4eae9c:
    // 0x4eae9c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4eae9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4eaea0:
    // 0x4eaea0: 0x320f809  jalr        $t9
label_4eaea4:
    if (ctx->pc == 0x4EAEA4u) {
        ctx->pc = 0x4EAEA8u;
        goto label_4eaea8;
    }
    ctx->pc = 0x4EAEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EAEA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EAEA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EAEA8u; }
            if (ctx->pc != 0x4EAEA8u) { return; }
        }
        }
    }
    ctx->pc = 0x4EAEA8u;
label_4eaea8:
    // 0x4eaea8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x4eaea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_4eaeac:
    // 0x4eaeac: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4eaeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4eaeb0:
    // 0x4eaeb0: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x4eaeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_4eaeb4:
    // 0x4eaeb4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x4eaeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_4eaeb8:
    // 0x4eaeb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4eaeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4eaebc:
    // 0x4eaebc: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x4eaebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
label_4eaec0:
    // 0x4eaec0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4eaec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4eaec4:
    // 0x4eaec4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4eaec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4eaec8:
    // 0x4eaec8: 0x8c64077c  lw          $a0, 0x77C($v1)
    ctx->pc = 0x4eaec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_4eaecc:
    // 0x4eaecc: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x4eaeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_4eaed0:
    // 0x4eaed0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x4eaed0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4eaed4:
    // 0x4eaed4: 0x5460feaf  bnel        $v1, $zero, . + 4 + (-0x151 << 2)
label_4eaed8:
    if (ctx->pc == 0x4EAED8u) {
        ctx->pc = 0x4EAED8u;
            // 0x4eaed8: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->pc = 0x4EAEDCu;
        goto label_4eaedc;
    }
    ctx->pc = 0x4EAED4u;
    {
        const bool branch_taken_0x4eaed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eaed4) {
            ctx->pc = 0x4EAED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAED4u;
            // 0x4eaed8: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ea994;
        }
    }
    ctx->pc = 0x4EAEDCu;
label_4eaedc:
    // 0x4eaedc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x4eaedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_4eaee0:
    // 0x4eaee0: 0xc7ba0028  lwc1        $f26, 0x28($sp)
    ctx->pc = 0x4eaee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4eaee4:
    // 0x4eaee4: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x4eaee4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4eaee8:
    // 0x4eaee8: 0xc7b90024  lwc1        $f25, 0x24($sp)
    ctx->pc = 0x4eaee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4eaeec:
    // 0x4eaeec: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x4eaeecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4eaef0:
    // 0x4eaef0: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x4eaef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4eaef4:
    // 0x4eaef4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4eaef4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4eaef8:
    // 0x4eaef8: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x4eaef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4eaefc:
    // 0x4eaefc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4eaefcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4eaf00:
    // 0x4eaf00: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x4eaf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4eaf04:
    // 0x4eaf04: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4eaf04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4eaf08:
    // 0x4eaf08: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x4eaf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4eaf0c:
    // 0x4eaf0c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4eaf0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4eaf10:
    // 0x4eaf10: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x4eaf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4eaf14:
    // 0x4eaf14: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4eaf14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4eaf18:
    // 0x4eaf18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4eaf18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4eaf1c:
    // 0x4eaf1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eaf1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eaf20:
    // 0x4eaf20: 0x3e00008  jr          $ra
label_4eaf24:
    if (ctx->pc == 0x4EAF24u) {
        ctx->pc = 0x4EAF24u;
            // 0x4eaf24: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4EAF28u;
        goto label_4eaf28;
    }
    ctx->pc = 0x4EAF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAF20u;
            // 0x4eaf24: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EAF28u;
label_4eaf28:
    // 0x4eaf28: 0x0  nop
    ctx->pc = 0x4eaf28u;
    // NOP
label_4eaf2c:
    // 0x4eaf2c: 0x0  nop
    ctx->pc = 0x4eaf2cu;
    // NOP
label_4eaf30:
    // 0x4eaf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4eaf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4eaf34:
    // 0x4eaf34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4eaf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4eaf38:
    // 0x4eaf38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eaf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4eaf3c:
    // 0x4eaf3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4eaf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4eaf40:
    // 0x4eaf40: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x4eaf40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_4eaf44:
    // 0x4eaf44: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4eaf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4eaf48:
    // 0x4eaf48: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_4eaf4c:
    if (ctx->pc == 0x4EAF4Cu) {
        ctx->pc = 0x4EAF4Cu;
            // 0x4eaf4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EAF50u;
        goto label_4eaf50;
    }
    ctx->pc = 0x4EAF48u;
    {
        const bool branch_taken_0x4eaf48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EAF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAF48u;
            // 0x4eaf4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eaf48) {
            ctx->pc = 0x4EAFA0u;
            goto label_4eafa0;
        }
    }
    ctx->pc = 0x4EAF50u;
label_4eaf50:
    // 0x4eaf50: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x4eaf50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_4eaf54:
    // 0x4eaf54: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_4eaf58:
    if (ctx->pc == 0x4EAF58u) {
        ctx->pc = 0x4EAF58u;
            // 0x4eaf58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4EAF5Cu;
        goto label_4eaf5c;
    }
    ctx->pc = 0x4EAF54u;
    {
        const bool branch_taken_0x4eaf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eaf54) {
            ctx->pc = 0x4EAF58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAF54u;
            // 0x4eaf58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EAFA4u;
            goto label_4eafa4;
        }
    }
    ctx->pc = 0x4EAF5Cu;
label_4eaf5c:
    // 0x4eaf5c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4eaf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4eaf60:
    // 0x4eaf60: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4eaf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4eaf64:
    // 0x4eaf64: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x4eaf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_4eaf68:
    // 0x4eaf68: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x4eaf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_4eaf6c:
    // 0x4eaf6c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_4eaf70:
    if (ctx->pc == 0x4EAF70u) {
        ctx->pc = 0x4EAF74u;
        goto label_4eaf74;
    }
    ctx->pc = 0x4EAF6Cu;
    {
        const bool branch_taken_0x4eaf6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eaf6c) {
            ctx->pc = 0x4EAFA0u;
            goto label_4eafa0;
        }
    }
    ctx->pc = 0x4EAF74u;
label_4eaf74:
    // 0x4eaf74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4eaf74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eaf78:
    // 0x4eaf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eaf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eaf7c:
    // 0x4eaf7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4eaf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eaf80:
    // 0x4eaf80: 0xc13aa08  jal         func_4EA820
label_4eaf84:
    if (ctx->pc == 0x4EAF84u) {
        ctx->pc = 0x4EAF84u;
            // 0x4eaf84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EAF88u;
        goto label_4eaf88;
    }
    ctx->pc = 0x4EAF80u;
    SET_GPR_U32(ctx, 31, 0x4EAF88u);
    ctx->pc = 0x4EAF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAF80u;
            // 0x4eaf84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EA820u;
    goto label_4ea820;
    ctx->pc = 0x4EAF88u;
label_4eaf88:
    // 0x4eaf88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4eaf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4eaf8c:
    // 0x4eaf8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4eaf8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4eaf90:
    // 0x4eaf90: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x4eaf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_4eaf94:
    // 0x4eaf94: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x4eaf94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4eaf98:
    // 0x4eaf98: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_4eaf9c:
    if (ctx->pc == 0x4EAF9Cu) {
        ctx->pc = 0x4EAF9Cu;
            // 0x4eaf9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EAFA0u;
        goto label_4eafa0;
    }
    ctx->pc = 0x4EAF98u;
    {
        const bool branch_taken_0x4eaf98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eaf98) {
            ctx->pc = 0x4EAF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAF98u;
            // 0x4eaf9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EAF7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eaf7c;
        }
    }
    ctx->pc = 0x4EAFA0u;
label_4eafa0:
    // 0x4eafa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4eafa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4eafa4:
    // 0x4eafa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eafa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eafa8:
    // 0x4eafa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4eafa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4eafac:
    // 0x4eafac: 0x3e00008  jr          $ra
label_4eafb0:
    if (ctx->pc == 0x4EAFB0u) {
        ctx->pc = 0x4EAFB0u;
            // 0x4eafb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4EAFB4u;
        goto label_4eafb4;
    }
    ctx->pc = 0x4EAFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EAFACu;
            // 0x4eafb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EAFB4u;
label_4eafb4:
    // 0x4eafb4: 0x0  nop
    ctx->pc = 0x4eafb4u;
    // NOP
label_4eafb8:
    // 0x4eafb8: 0x0  nop
    ctx->pc = 0x4eafb8u;
    // NOP
label_4eafbc:
    // 0x4eafbc: 0x0  nop
    ctx->pc = 0x4eafbcu;
    // NOP
}
