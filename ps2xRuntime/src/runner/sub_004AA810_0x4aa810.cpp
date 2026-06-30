#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AA810
// Address: 0x4aa810 - 0x4aafe0
void sub_004AA810_0x4aa810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA810_0x4aa810");
#endif

    switch (ctx->pc) {
        case 0x4aa810u: goto label_4aa810;
        case 0x4aa814u: goto label_4aa814;
        case 0x4aa818u: goto label_4aa818;
        case 0x4aa81cu: goto label_4aa81c;
        case 0x4aa820u: goto label_4aa820;
        case 0x4aa824u: goto label_4aa824;
        case 0x4aa828u: goto label_4aa828;
        case 0x4aa82cu: goto label_4aa82c;
        case 0x4aa830u: goto label_4aa830;
        case 0x4aa834u: goto label_4aa834;
        case 0x4aa838u: goto label_4aa838;
        case 0x4aa83cu: goto label_4aa83c;
        case 0x4aa840u: goto label_4aa840;
        case 0x4aa844u: goto label_4aa844;
        case 0x4aa848u: goto label_4aa848;
        case 0x4aa84cu: goto label_4aa84c;
        case 0x4aa850u: goto label_4aa850;
        case 0x4aa854u: goto label_4aa854;
        case 0x4aa858u: goto label_4aa858;
        case 0x4aa85cu: goto label_4aa85c;
        case 0x4aa860u: goto label_4aa860;
        case 0x4aa864u: goto label_4aa864;
        case 0x4aa868u: goto label_4aa868;
        case 0x4aa86cu: goto label_4aa86c;
        case 0x4aa870u: goto label_4aa870;
        case 0x4aa874u: goto label_4aa874;
        case 0x4aa878u: goto label_4aa878;
        case 0x4aa87cu: goto label_4aa87c;
        case 0x4aa880u: goto label_4aa880;
        case 0x4aa884u: goto label_4aa884;
        case 0x4aa888u: goto label_4aa888;
        case 0x4aa88cu: goto label_4aa88c;
        case 0x4aa890u: goto label_4aa890;
        case 0x4aa894u: goto label_4aa894;
        case 0x4aa898u: goto label_4aa898;
        case 0x4aa89cu: goto label_4aa89c;
        case 0x4aa8a0u: goto label_4aa8a0;
        case 0x4aa8a4u: goto label_4aa8a4;
        case 0x4aa8a8u: goto label_4aa8a8;
        case 0x4aa8acu: goto label_4aa8ac;
        case 0x4aa8b0u: goto label_4aa8b0;
        case 0x4aa8b4u: goto label_4aa8b4;
        case 0x4aa8b8u: goto label_4aa8b8;
        case 0x4aa8bcu: goto label_4aa8bc;
        case 0x4aa8c0u: goto label_4aa8c0;
        case 0x4aa8c4u: goto label_4aa8c4;
        case 0x4aa8c8u: goto label_4aa8c8;
        case 0x4aa8ccu: goto label_4aa8cc;
        case 0x4aa8d0u: goto label_4aa8d0;
        case 0x4aa8d4u: goto label_4aa8d4;
        case 0x4aa8d8u: goto label_4aa8d8;
        case 0x4aa8dcu: goto label_4aa8dc;
        case 0x4aa8e0u: goto label_4aa8e0;
        case 0x4aa8e4u: goto label_4aa8e4;
        case 0x4aa8e8u: goto label_4aa8e8;
        case 0x4aa8ecu: goto label_4aa8ec;
        case 0x4aa8f0u: goto label_4aa8f0;
        case 0x4aa8f4u: goto label_4aa8f4;
        case 0x4aa8f8u: goto label_4aa8f8;
        case 0x4aa8fcu: goto label_4aa8fc;
        case 0x4aa900u: goto label_4aa900;
        case 0x4aa904u: goto label_4aa904;
        case 0x4aa908u: goto label_4aa908;
        case 0x4aa90cu: goto label_4aa90c;
        case 0x4aa910u: goto label_4aa910;
        case 0x4aa914u: goto label_4aa914;
        case 0x4aa918u: goto label_4aa918;
        case 0x4aa91cu: goto label_4aa91c;
        case 0x4aa920u: goto label_4aa920;
        case 0x4aa924u: goto label_4aa924;
        case 0x4aa928u: goto label_4aa928;
        case 0x4aa92cu: goto label_4aa92c;
        case 0x4aa930u: goto label_4aa930;
        case 0x4aa934u: goto label_4aa934;
        case 0x4aa938u: goto label_4aa938;
        case 0x4aa93cu: goto label_4aa93c;
        case 0x4aa940u: goto label_4aa940;
        case 0x4aa944u: goto label_4aa944;
        case 0x4aa948u: goto label_4aa948;
        case 0x4aa94cu: goto label_4aa94c;
        case 0x4aa950u: goto label_4aa950;
        case 0x4aa954u: goto label_4aa954;
        case 0x4aa958u: goto label_4aa958;
        case 0x4aa95cu: goto label_4aa95c;
        case 0x4aa960u: goto label_4aa960;
        case 0x4aa964u: goto label_4aa964;
        case 0x4aa968u: goto label_4aa968;
        case 0x4aa96cu: goto label_4aa96c;
        case 0x4aa970u: goto label_4aa970;
        case 0x4aa974u: goto label_4aa974;
        case 0x4aa978u: goto label_4aa978;
        case 0x4aa97cu: goto label_4aa97c;
        case 0x4aa980u: goto label_4aa980;
        case 0x4aa984u: goto label_4aa984;
        case 0x4aa988u: goto label_4aa988;
        case 0x4aa98cu: goto label_4aa98c;
        case 0x4aa990u: goto label_4aa990;
        case 0x4aa994u: goto label_4aa994;
        case 0x4aa998u: goto label_4aa998;
        case 0x4aa99cu: goto label_4aa99c;
        case 0x4aa9a0u: goto label_4aa9a0;
        case 0x4aa9a4u: goto label_4aa9a4;
        case 0x4aa9a8u: goto label_4aa9a8;
        case 0x4aa9acu: goto label_4aa9ac;
        case 0x4aa9b0u: goto label_4aa9b0;
        case 0x4aa9b4u: goto label_4aa9b4;
        case 0x4aa9b8u: goto label_4aa9b8;
        case 0x4aa9bcu: goto label_4aa9bc;
        case 0x4aa9c0u: goto label_4aa9c0;
        case 0x4aa9c4u: goto label_4aa9c4;
        case 0x4aa9c8u: goto label_4aa9c8;
        case 0x4aa9ccu: goto label_4aa9cc;
        case 0x4aa9d0u: goto label_4aa9d0;
        case 0x4aa9d4u: goto label_4aa9d4;
        case 0x4aa9d8u: goto label_4aa9d8;
        case 0x4aa9dcu: goto label_4aa9dc;
        case 0x4aa9e0u: goto label_4aa9e0;
        case 0x4aa9e4u: goto label_4aa9e4;
        case 0x4aa9e8u: goto label_4aa9e8;
        case 0x4aa9ecu: goto label_4aa9ec;
        case 0x4aa9f0u: goto label_4aa9f0;
        case 0x4aa9f4u: goto label_4aa9f4;
        case 0x4aa9f8u: goto label_4aa9f8;
        case 0x4aa9fcu: goto label_4aa9fc;
        case 0x4aaa00u: goto label_4aaa00;
        case 0x4aaa04u: goto label_4aaa04;
        case 0x4aaa08u: goto label_4aaa08;
        case 0x4aaa0cu: goto label_4aaa0c;
        case 0x4aaa10u: goto label_4aaa10;
        case 0x4aaa14u: goto label_4aaa14;
        case 0x4aaa18u: goto label_4aaa18;
        case 0x4aaa1cu: goto label_4aaa1c;
        case 0x4aaa20u: goto label_4aaa20;
        case 0x4aaa24u: goto label_4aaa24;
        case 0x4aaa28u: goto label_4aaa28;
        case 0x4aaa2cu: goto label_4aaa2c;
        case 0x4aaa30u: goto label_4aaa30;
        case 0x4aaa34u: goto label_4aaa34;
        case 0x4aaa38u: goto label_4aaa38;
        case 0x4aaa3cu: goto label_4aaa3c;
        case 0x4aaa40u: goto label_4aaa40;
        case 0x4aaa44u: goto label_4aaa44;
        case 0x4aaa48u: goto label_4aaa48;
        case 0x4aaa4cu: goto label_4aaa4c;
        case 0x4aaa50u: goto label_4aaa50;
        case 0x4aaa54u: goto label_4aaa54;
        case 0x4aaa58u: goto label_4aaa58;
        case 0x4aaa5cu: goto label_4aaa5c;
        case 0x4aaa60u: goto label_4aaa60;
        case 0x4aaa64u: goto label_4aaa64;
        case 0x4aaa68u: goto label_4aaa68;
        case 0x4aaa6cu: goto label_4aaa6c;
        case 0x4aaa70u: goto label_4aaa70;
        case 0x4aaa74u: goto label_4aaa74;
        case 0x4aaa78u: goto label_4aaa78;
        case 0x4aaa7cu: goto label_4aaa7c;
        case 0x4aaa80u: goto label_4aaa80;
        case 0x4aaa84u: goto label_4aaa84;
        case 0x4aaa88u: goto label_4aaa88;
        case 0x4aaa8cu: goto label_4aaa8c;
        case 0x4aaa90u: goto label_4aaa90;
        case 0x4aaa94u: goto label_4aaa94;
        case 0x4aaa98u: goto label_4aaa98;
        case 0x4aaa9cu: goto label_4aaa9c;
        case 0x4aaaa0u: goto label_4aaaa0;
        case 0x4aaaa4u: goto label_4aaaa4;
        case 0x4aaaa8u: goto label_4aaaa8;
        case 0x4aaaacu: goto label_4aaaac;
        case 0x4aaab0u: goto label_4aaab0;
        case 0x4aaab4u: goto label_4aaab4;
        case 0x4aaab8u: goto label_4aaab8;
        case 0x4aaabcu: goto label_4aaabc;
        case 0x4aaac0u: goto label_4aaac0;
        case 0x4aaac4u: goto label_4aaac4;
        case 0x4aaac8u: goto label_4aaac8;
        case 0x4aaaccu: goto label_4aaacc;
        case 0x4aaad0u: goto label_4aaad0;
        case 0x4aaad4u: goto label_4aaad4;
        case 0x4aaad8u: goto label_4aaad8;
        case 0x4aaadcu: goto label_4aaadc;
        case 0x4aaae0u: goto label_4aaae0;
        case 0x4aaae4u: goto label_4aaae4;
        case 0x4aaae8u: goto label_4aaae8;
        case 0x4aaaecu: goto label_4aaaec;
        case 0x4aaaf0u: goto label_4aaaf0;
        case 0x4aaaf4u: goto label_4aaaf4;
        case 0x4aaaf8u: goto label_4aaaf8;
        case 0x4aaafcu: goto label_4aaafc;
        case 0x4aab00u: goto label_4aab00;
        case 0x4aab04u: goto label_4aab04;
        case 0x4aab08u: goto label_4aab08;
        case 0x4aab0cu: goto label_4aab0c;
        case 0x4aab10u: goto label_4aab10;
        case 0x4aab14u: goto label_4aab14;
        case 0x4aab18u: goto label_4aab18;
        case 0x4aab1cu: goto label_4aab1c;
        case 0x4aab20u: goto label_4aab20;
        case 0x4aab24u: goto label_4aab24;
        case 0x4aab28u: goto label_4aab28;
        case 0x4aab2cu: goto label_4aab2c;
        case 0x4aab30u: goto label_4aab30;
        case 0x4aab34u: goto label_4aab34;
        case 0x4aab38u: goto label_4aab38;
        case 0x4aab3cu: goto label_4aab3c;
        case 0x4aab40u: goto label_4aab40;
        case 0x4aab44u: goto label_4aab44;
        case 0x4aab48u: goto label_4aab48;
        case 0x4aab4cu: goto label_4aab4c;
        case 0x4aab50u: goto label_4aab50;
        case 0x4aab54u: goto label_4aab54;
        case 0x4aab58u: goto label_4aab58;
        case 0x4aab5cu: goto label_4aab5c;
        case 0x4aab60u: goto label_4aab60;
        case 0x4aab64u: goto label_4aab64;
        case 0x4aab68u: goto label_4aab68;
        case 0x4aab6cu: goto label_4aab6c;
        case 0x4aab70u: goto label_4aab70;
        case 0x4aab74u: goto label_4aab74;
        case 0x4aab78u: goto label_4aab78;
        case 0x4aab7cu: goto label_4aab7c;
        case 0x4aab80u: goto label_4aab80;
        case 0x4aab84u: goto label_4aab84;
        case 0x4aab88u: goto label_4aab88;
        case 0x4aab8cu: goto label_4aab8c;
        case 0x4aab90u: goto label_4aab90;
        case 0x4aab94u: goto label_4aab94;
        case 0x4aab98u: goto label_4aab98;
        case 0x4aab9cu: goto label_4aab9c;
        case 0x4aaba0u: goto label_4aaba0;
        case 0x4aaba4u: goto label_4aaba4;
        case 0x4aaba8u: goto label_4aaba8;
        case 0x4aabacu: goto label_4aabac;
        case 0x4aabb0u: goto label_4aabb0;
        case 0x4aabb4u: goto label_4aabb4;
        case 0x4aabb8u: goto label_4aabb8;
        case 0x4aabbcu: goto label_4aabbc;
        case 0x4aabc0u: goto label_4aabc0;
        case 0x4aabc4u: goto label_4aabc4;
        case 0x4aabc8u: goto label_4aabc8;
        case 0x4aabccu: goto label_4aabcc;
        case 0x4aabd0u: goto label_4aabd0;
        case 0x4aabd4u: goto label_4aabd4;
        case 0x4aabd8u: goto label_4aabd8;
        case 0x4aabdcu: goto label_4aabdc;
        case 0x4aabe0u: goto label_4aabe0;
        case 0x4aabe4u: goto label_4aabe4;
        case 0x4aabe8u: goto label_4aabe8;
        case 0x4aabecu: goto label_4aabec;
        case 0x4aabf0u: goto label_4aabf0;
        case 0x4aabf4u: goto label_4aabf4;
        case 0x4aabf8u: goto label_4aabf8;
        case 0x4aabfcu: goto label_4aabfc;
        case 0x4aac00u: goto label_4aac00;
        case 0x4aac04u: goto label_4aac04;
        case 0x4aac08u: goto label_4aac08;
        case 0x4aac0cu: goto label_4aac0c;
        case 0x4aac10u: goto label_4aac10;
        case 0x4aac14u: goto label_4aac14;
        case 0x4aac18u: goto label_4aac18;
        case 0x4aac1cu: goto label_4aac1c;
        case 0x4aac20u: goto label_4aac20;
        case 0x4aac24u: goto label_4aac24;
        case 0x4aac28u: goto label_4aac28;
        case 0x4aac2cu: goto label_4aac2c;
        case 0x4aac30u: goto label_4aac30;
        case 0x4aac34u: goto label_4aac34;
        case 0x4aac38u: goto label_4aac38;
        case 0x4aac3cu: goto label_4aac3c;
        case 0x4aac40u: goto label_4aac40;
        case 0x4aac44u: goto label_4aac44;
        case 0x4aac48u: goto label_4aac48;
        case 0x4aac4cu: goto label_4aac4c;
        case 0x4aac50u: goto label_4aac50;
        case 0x4aac54u: goto label_4aac54;
        case 0x4aac58u: goto label_4aac58;
        case 0x4aac5cu: goto label_4aac5c;
        case 0x4aac60u: goto label_4aac60;
        case 0x4aac64u: goto label_4aac64;
        case 0x4aac68u: goto label_4aac68;
        case 0x4aac6cu: goto label_4aac6c;
        case 0x4aac70u: goto label_4aac70;
        case 0x4aac74u: goto label_4aac74;
        case 0x4aac78u: goto label_4aac78;
        case 0x4aac7cu: goto label_4aac7c;
        case 0x4aac80u: goto label_4aac80;
        case 0x4aac84u: goto label_4aac84;
        case 0x4aac88u: goto label_4aac88;
        case 0x4aac8cu: goto label_4aac8c;
        case 0x4aac90u: goto label_4aac90;
        case 0x4aac94u: goto label_4aac94;
        case 0x4aac98u: goto label_4aac98;
        case 0x4aac9cu: goto label_4aac9c;
        case 0x4aaca0u: goto label_4aaca0;
        case 0x4aaca4u: goto label_4aaca4;
        case 0x4aaca8u: goto label_4aaca8;
        case 0x4aacacu: goto label_4aacac;
        case 0x4aacb0u: goto label_4aacb0;
        case 0x4aacb4u: goto label_4aacb4;
        case 0x4aacb8u: goto label_4aacb8;
        case 0x4aacbcu: goto label_4aacbc;
        case 0x4aacc0u: goto label_4aacc0;
        case 0x4aacc4u: goto label_4aacc4;
        case 0x4aacc8u: goto label_4aacc8;
        case 0x4aacccu: goto label_4aaccc;
        case 0x4aacd0u: goto label_4aacd0;
        case 0x4aacd4u: goto label_4aacd4;
        case 0x4aacd8u: goto label_4aacd8;
        case 0x4aacdcu: goto label_4aacdc;
        case 0x4aace0u: goto label_4aace0;
        case 0x4aace4u: goto label_4aace4;
        case 0x4aace8u: goto label_4aace8;
        case 0x4aacecu: goto label_4aacec;
        case 0x4aacf0u: goto label_4aacf0;
        case 0x4aacf4u: goto label_4aacf4;
        case 0x4aacf8u: goto label_4aacf8;
        case 0x4aacfcu: goto label_4aacfc;
        case 0x4aad00u: goto label_4aad00;
        case 0x4aad04u: goto label_4aad04;
        case 0x4aad08u: goto label_4aad08;
        case 0x4aad0cu: goto label_4aad0c;
        case 0x4aad10u: goto label_4aad10;
        case 0x4aad14u: goto label_4aad14;
        case 0x4aad18u: goto label_4aad18;
        case 0x4aad1cu: goto label_4aad1c;
        case 0x4aad20u: goto label_4aad20;
        case 0x4aad24u: goto label_4aad24;
        case 0x4aad28u: goto label_4aad28;
        case 0x4aad2cu: goto label_4aad2c;
        case 0x4aad30u: goto label_4aad30;
        case 0x4aad34u: goto label_4aad34;
        case 0x4aad38u: goto label_4aad38;
        case 0x4aad3cu: goto label_4aad3c;
        case 0x4aad40u: goto label_4aad40;
        case 0x4aad44u: goto label_4aad44;
        case 0x4aad48u: goto label_4aad48;
        case 0x4aad4cu: goto label_4aad4c;
        case 0x4aad50u: goto label_4aad50;
        case 0x4aad54u: goto label_4aad54;
        case 0x4aad58u: goto label_4aad58;
        case 0x4aad5cu: goto label_4aad5c;
        case 0x4aad60u: goto label_4aad60;
        case 0x4aad64u: goto label_4aad64;
        case 0x4aad68u: goto label_4aad68;
        case 0x4aad6cu: goto label_4aad6c;
        case 0x4aad70u: goto label_4aad70;
        case 0x4aad74u: goto label_4aad74;
        case 0x4aad78u: goto label_4aad78;
        case 0x4aad7cu: goto label_4aad7c;
        case 0x4aad80u: goto label_4aad80;
        case 0x4aad84u: goto label_4aad84;
        case 0x4aad88u: goto label_4aad88;
        case 0x4aad8cu: goto label_4aad8c;
        case 0x4aad90u: goto label_4aad90;
        case 0x4aad94u: goto label_4aad94;
        case 0x4aad98u: goto label_4aad98;
        case 0x4aad9cu: goto label_4aad9c;
        case 0x4aada0u: goto label_4aada0;
        case 0x4aada4u: goto label_4aada4;
        case 0x4aada8u: goto label_4aada8;
        case 0x4aadacu: goto label_4aadac;
        case 0x4aadb0u: goto label_4aadb0;
        case 0x4aadb4u: goto label_4aadb4;
        case 0x4aadb8u: goto label_4aadb8;
        case 0x4aadbcu: goto label_4aadbc;
        case 0x4aadc0u: goto label_4aadc0;
        case 0x4aadc4u: goto label_4aadc4;
        case 0x4aadc8u: goto label_4aadc8;
        case 0x4aadccu: goto label_4aadcc;
        case 0x4aadd0u: goto label_4aadd0;
        case 0x4aadd4u: goto label_4aadd4;
        case 0x4aadd8u: goto label_4aadd8;
        case 0x4aaddcu: goto label_4aaddc;
        case 0x4aade0u: goto label_4aade0;
        case 0x4aade4u: goto label_4aade4;
        case 0x4aade8u: goto label_4aade8;
        case 0x4aadecu: goto label_4aadec;
        case 0x4aadf0u: goto label_4aadf0;
        case 0x4aadf4u: goto label_4aadf4;
        case 0x4aadf8u: goto label_4aadf8;
        case 0x4aadfcu: goto label_4aadfc;
        case 0x4aae00u: goto label_4aae00;
        case 0x4aae04u: goto label_4aae04;
        case 0x4aae08u: goto label_4aae08;
        case 0x4aae0cu: goto label_4aae0c;
        case 0x4aae10u: goto label_4aae10;
        case 0x4aae14u: goto label_4aae14;
        case 0x4aae18u: goto label_4aae18;
        case 0x4aae1cu: goto label_4aae1c;
        case 0x4aae20u: goto label_4aae20;
        case 0x4aae24u: goto label_4aae24;
        case 0x4aae28u: goto label_4aae28;
        case 0x4aae2cu: goto label_4aae2c;
        case 0x4aae30u: goto label_4aae30;
        case 0x4aae34u: goto label_4aae34;
        case 0x4aae38u: goto label_4aae38;
        case 0x4aae3cu: goto label_4aae3c;
        case 0x4aae40u: goto label_4aae40;
        case 0x4aae44u: goto label_4aae44;
        case 0x4aae48u: goto label_4aae48;
        case 0x4aae4cu: goto label_4aae4c;
        case 0x4aae50u: goto label_4aae50;
        case 0x4aae54u: goto label_4aae54;
        case 0x4aae58u: goto label_4aae58;
        case 0x4aae5cu: goto label_4aae5c;
        case 0x4aae60u: goto label_4aae60;
        case 0x4aae64u: goto label_4aae64;
        case 0x4aae68u: goto label_4aae68;
        case 0x4aae6cu: goto label_4aae6c;
        case 0x4aae70u: goto label_4aae70;
        case 0x4aae74u: goto label_4aae74;
        case 0x4aae78u: goto label_4aae78;
        case 0x4aae7cu: goto label_4aae7c;
        case 0x4aae80u: goto label_4aae80;
        case 0x4aae84u: goto label_4aae84;
        case 0x4aae88u: goto label_4aae88;
        case 0x4aae8cu: goto label_4aae8c;
        case 0x4aae90u: goto label_4aae90;
        case 0x4aae94u: goto label_4aae94;
        case 0x4aae98u: goto label_4aae98;
        case 0x4aae9cu: goto label_4aae9c;
        case 0x4aaea0u: goto label_4aaea0;
        case 0x4aaea4u: goto label_4aaea4;
        case 0x4aaea8u: goto label_4aaea8;
        case 0x4aaeacu: goto label_4aaeac;
        case 0x4aaeb0u: goto label_4aaeb0;
        case 0x4aaeb4u: goto label_4aaeb4;
        case 0x4aaeb8u: goto label_4aaeb8;
        case 0x4aaebcu: goto label_4aaebc;
        case 0x4aaec0u: goto label_4aaec0;
        case 0x4aaec4u: goto label_4aaec4;
        case 0x4aaec8u: goto label_4aaec8;
        case 0x4aaeccu: goto label_4aaecc;
        case 0x4aaed0u: goto label_4aaed0;
        case 0x4aaed4u: goto label_4aaed4;
        case 0x4aaed8u: goto label_4aaed8;
        case 0x4aaedcu: goto label_4aaedc;
        case 0x4aaee0u: goto label_4aaee0;
        case 0x4aaee4u: goto label_4aaee4;
        case 0x4aaee8u: goto label_4aaee8;
        case 0x4aaeecu: goto label_4aaeec;
        case 0x4aaef0u: goto label_4aaef0;
        case 0x4aaef4u: goto label_4aaef4;
        case 0x4aaef8u: goto label_4aaef8;
        case 0x4aaefcu: goto label_4aaefc;
        case 0x4aaf00u: goto label_4aaf00;
        case 0x4aaf04u: goto label_4aaf04;
        case 0x4aaf08u: goto label_4aaf08;
        case 0x4aaf0cu: goto label_4aaf0c;
        case 0x4aaf10u: goto label_4aaf10;
        case 0x4aaf14u: goto label_4aaf14;
        case 0x4aaf18u: goto label_4aaf18;
        case 0x4aaf1cu: goto label_4aaf1c;
        case 0x4aaf20u: goto label_4aaf20;
        case 0x4aaf24u: goto label_4aaf24;
        case 0x4aaf28u: goto label_4aaf28;
        case 0x4aaf2cu: goto label_4aaf2c;
        case 0x4aaf30u: goto label_4aaf30;
        case 0x4aaf34u: goto label_4aaf34;
        case 0x4aaf38u: goto label_4aaf38;
        case 0x4aaf3cu: goto label_4aaf3c;
        case 0x4aaf40u: goto label_4aaf40;
        case 0x4aaf44u: goto label_4aaf44;
        case 0x4aaf48u: goto label_4aaf48;
        case 0x4aaf4cu: goto label_4aaf4c;
        case 0x4aaf50u: goto label_4aaf50;
        case 0x4aaf54u: goto label_4aaf54;
        case 0x4aaf58u: goto label_4aaf58;
        case 0x4aaf5cu: goto label_4aaf5c;
        case 0x4aaf60u: goto label_4aaf60;
        case 0x4aaf64u: goto label_4aaf64;
        case 0x4aaf68u: goto label_4aaf68;
        case 0x4aaf6cu: goto label_4aaf6c;
        case 0x4aaf70u: goto label_4aaf70;
        case 0x4aaf74u: goto label_4aaf74;
        case 0x4aaf78u: goto label_4aaf78;
        case 0x4aaf7cu: goto label_4aaf7c;
        case 0x4aaf80u: goto label_4aaf80;
        case 0x4aaf84u: goto label_4aaf84;
        case 0x4aaf88u: goto label_4aaf88;
        case 0x4aaf8cu: goto label_4aaf8c;
        case 0x4aaf90u: goto label_4aaf90;
        case 0x4aaf94u: goto label_4aaf94;
        case 0x4aaf98u: goto label_4aaf98;
        case 0x4aaf9cu: goto label_4aaf9c;
        case 0x4aafa0u: goto label_4aafa0;
        case 0x4aafa4u: goto label_4aafa4;
        case 0x4aafa8u: goto label_4aafa8;
        case 0x4aafacu: goto label_4aafac;
        case 0x4aafb0u: goto label_4aafb0;
        case 0x4aafb4u: goto label_4aafb4;
        case 0x4aafb8u: goto label_4aafb8;
        case 0x4aafbcu: goto label_4aafbc;
        case 0x4aafc0u: goto label_4aafc0;
        case 0x4aafc4u: goto label_4aafc4;
        case 0x4aafc8u: goto label_4aafc8;
        case 0x4aafccu: goto label_4aafcc;
        case 0x4aafd0u: goto label_4aafd0;
        case 0x4aafd4u: goto label_4aafd4;
        case 0x4aafd8u: goto label_4aafd8;
        case 0x4aafdcu: goto label_4aafdc;
        default: break;
    }

    ctx->pc = 0x4aa810u;

label_4aa810:
    // 0x4aa810: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4aa810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4aa814:
    // 0x4aa814: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4aa814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4aa818:
    // 0x4aa818: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4aa818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4aa81c:
    // 0x4aa81c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4aa81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4aa820:
    // 0x4aa820: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4aa820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4aa824:
    // 0x4aa824: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4aa824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4aa828:
    // 0x4aa828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4aa828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4aa82c:
    // 0x4aa82c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4aa82cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4aa830:
    // 0x4aa830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4aa830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4aa834:
    // 0x4aa834: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4aa834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4aa838:
    // 0x4aa838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aa838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4aa83c:
    // 0x4aa83c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4aa83cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4aa840:
    // 0x4aa840: 0x1260016b  beqz        $s3, . + 4 + (0x16B << 2)
label_4aa844:
    if (ctx->pc == 0x4AA844u) {
        ctx->pc = 0x4AA844u;
            // 0x4aa844: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4AA848u;
        goto label_4aa848;
    }
    ctx->pc = 0x4AA840u;
    {
        const bool branch_taken_0x4aa840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA840u;
            // 0x4aa844: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa840) {
            ctx->pc = 0x4AADF0u;
            goto label_4aadf0;
        }
    }
    ctx->pc = 0x4AA848u;
label_4aa848:
    // 0x4aa848: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x4aa848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4aa84c:
    // 0x4aa84c: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
label_4aa850:
    if (ctx->pc == 0x4AA850u) {
        ctx->pc = 0x4AA850u;
            // 0x4aa850: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x4AA854u;
        goto label_4aa854;
    }
    ctx->pc = 0x4AA84Cu;
    {
        const bool branch_taken_0x4aa84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa84c) {
            ctx->pc = 0x4AA850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA84Cu;
            // 0x4aa850: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA858u;
            goto label_4aa858;
        }
    }
    ctx->pc = 0x4AA854u;
label_4aa854:
    // 0x4aa854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4aa854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aa858:
    // 0x4aa858: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x4aa858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4aa85c:
    // 0x4aa85c: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x4aa85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4aa860:
    // 0x4aa860: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x4aa860u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4aa864:
    // 0x4aa864: 0x142000ed  bnez        $at, . + 4 + (0xED << 2)
label_4aa868:
    if (ctx->pc == 0x4AA868u) {
        ctx->pc = 0x4AA86Cu;
        goto label_4aa86c;
    }
    ctx->pc = 0x4AA864u;
    {
        const bool branch_taken_0x4aa864 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa864) {
            ctx->pc = 0x4AAC1Cu;
            goto label_4aac1c;
        }
    }
    ctx->pc = 0x4AA86Cu;
label_4aa86c:
    // 0x4aa86c: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x4aa86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4aa870:
    // 0x4aa870: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x4aa870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4aa874:
    // 0x4aa874: 0x8ea70010  lw          $a3, 0x10($s5)
    ctx->pc = 0x4aa874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4aa878:
    // 0x4aa878: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4aa878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4aa87c:
    // 0x4aa87c: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4aa87cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4aa880:
    // 0x4aa880: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4aa880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4aa884:
    // 0x4aa884: 0x8e8a0008  lw          $t2, 0x8($s4)
    ctx->pc = 0x4aa884u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4aa888:
    // 0x4aa888: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x4aa888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_4aa88c:
    // 0x4aa88c: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x4aa88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4aa890:
    // 0x4aa890: 0x1262023  subu        $a0, $t1, $a2
    ctx->pc = 0x4aa890u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_4aa894:
    // 0x4aa894: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_4aa898:
    if (ctx->pc == 0x4AA898u) {
        ctx->pc = 0x4AA898u;
            // 0x4aa898: 0x44083  sra         $t0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 2));
        ctx->pc = 0x4AA89Cu;
        goto label_4aa89c;
    }
    ctx->pc = 0x4AA894u;
    {
        const bool branch_taken_0x4aa894 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4AA898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA894u;
            // 0x4aa898: 0x44083  sra         $t0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa894) {
            ctx->pc = 0x4AA8A4u;
            goto label_4aa8a4;
        }
    }
    ctx->pc = 0x4AA89Cu;
label_4aa89c:
    // 0x4aa89c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x4aa89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_4aa8a0:
    // 0x4aa8a0: 0x44083  sra         $t0, $a0, 2
    ctx->pc = 0x4aa8a0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 2));
label_4aa8a4:
    // 0x4aa8a4: 0x12a202b  sltu        $a0, $t1, $t2
    ctx->pc = 0x4aa8a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_4aa8a8:
    // 0x4aa8a8: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
label_4aa8ac:
    if (ctx->pc == 0x4AA8ACu) {
        ctx->pc = 0x4AA8ACu;
            // 0x4aa8ac: 0xca202b  sltu        $a0, $a2, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
        ctx->pc = 0x4AA8B0u;
        goto label_4aa8b0;
    }
    ctx->pc = 0x4AA8A8u;
    {
        const bool branch_taken_0x4aa8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa8a8) {
            ctx->pc = 0x4AA8ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA8A8u;
            // 0x4aa8ac: 0xca202b  sltu        $a0, $a2, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA8E0u;
            goto label_4aa8e0;
        }
    }
    ctx->pc = 0x4AA8B0u;
label_4aa8b0:
    // 0x4aa8b0: 0xca082b  sltu        $at, $a2, $t2
    ctx->pc = 0x4aa8b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_4aa8b4:
    // 0x4aa8b4: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
label_4aa8b8:
    if (ctx->pc == 0x4AA8B8u) {
        ctx->pc = 0x4AA8B8u;
            // 0x4aa8b8: 0x247082b  sltu        $at, $s2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->pc = 0x4AA8BCu;
        goto label_4aa8bc;
    }
    ctx->pc = 0x4AA8B4u;
    {
        const bool branch_taken_0x4aa8b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa8b4) {
            ctx->pc = 0x4AA8B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA8B4u;
            // 0x4aa8b8: 0x247082b  sltu        $at, $s2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA90Cu;
            goto label_4aa90c;
        }
    }
    ctx->pc = 0x4AA8BCu;
label_4aa8bc:
    // 0x4aa8bc: 0x8e89000c  lw          $t1, 0xC($s4)
    ctx->pc = 0x4aa8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_4aa8c0:
    // 0x4aa8c0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4aa8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4aa8c4:
    // 0x4aa8c4: 0x1244823  subu        $t1, $t1, $a0
    ctx->pc = 0x4aa8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4aa8c8:
    // 0x4aa8c8: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_4aa8cc:
    if (ctx->pc == 0x4AA8CCu) {
        ctx->pc = 0x4AA8CCu;
            // 0x4aa8cc: 0x92083  sra         $a0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 2));
        ctx->pc = 0x4AA8D0u;
        goto label_4aa8d0;
    }
    ctx->pc = 0x4AA8C8u;
    {
        const bool branch_taken_0x4aa8c8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x4AA8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA8C8u;
            // 0x4aa8cc: 0x92083  sra         $a0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa8c8) {
            ctx->pc = 0x4AA8D8u;
            goto label_4aa8d8;
        }
    }
    ctx->pc = 0x4AA8D0u;
label_4aa8d0:
    // 0x4aa8d0: 0x25240003  addiu       $a0, $t1, 0x3
    ctx->pc = 0x4aa8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_4aa8d4:
    // 0x4aa8d4: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x4aa8d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_4aa8d8:
    // 0x4aa8d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_4aa8dc:
    if (ctx->pc == 0x4AA8DCu) {
        ctx->pc = 0x4AA8DCu;
            // 0x4aa8dc: 0x1044023  subu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->pc = 0x4AA8E0u;
        goto label_4aa8e0;
    }
    ctx->pc = 0x4AA8D8u;
    {
        const bool branch_taken_0x4aa8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA8D8u;
            // 0x4aa8dc: 0x1044023  subu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa8d8) {
            ctx->pc = 0x4AA908u;
            goto label_4aa908;
        }
    }
    ctx->pc = 0x4AA8E0u;
label_4aa8e0:
    // 0x4aa8e0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_4aa8e4:
    if (ctx->pc == 0x4AA8E4u) {
        ctx->pc = 0x4AA8E8u;
        goto label_4aa8e8;
    }
    ctx->pc = 0x4AA8E0u;
    {
        const bool branch_taken_0x4aa8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa8e0) {
            ctx->pc = 0x4AA908u;
            goto label_4aa908;
        }
    }
    ctx->pc = 0x4AA8E8u;
label_4aa8e8:
    // 0x4aa8e8: 0x8e89000c  lw          $t1, 0xC($s4)
    ctx->pc = 0x4aa8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_4aa8ec:
    // 0x4aa8ec: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4aa8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4aa8f0:
    // 0x4aa8f0: 0x1244823  subu        $t1, $t1, $a0
    ctx->pc = 0x4aa8f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4aa8f4:
    // 0x4aa8f4: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_4aa8f8:
    if (ctx->pc == 0x4AA8F8u) {
        ctx->pc = 0x4AA8F8u;
            // 0x4aa8f8: 0x92083  sra         $a0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 2));
        ctx->pc = 0x4AA8FCu;
        goto label_4aa8fc;
    }
    ctx->pc = 0x4AA8F4u;
    {
        const bool branch_taken_0x4aa8f4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x4AA8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA8F4u;
            // 0x4aa8f8: 0x92083  sra         $a0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa8f4) {
            ctx->pc = 0x4AA904u;
            goto label_4aa904;
        }
    }
    ctx->pc = 0x4AA8FCu;
label_4aa8fc:
    // 0x4aa8fc: 0x25240003  addiu       $a0, $t1, 0x3
    ctx->pc = 0x4aa8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_4aa900:
    // 0x4aa900: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x4aa900u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_4aa904:
    // 0x4aa904: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x4aa904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4aa908:
    // 0x4aa908: 0x247082b  sltu        $at, $s2, $a3
    ctx->pc = 0x4aa908u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4aa90c:
    // 0x4aa90c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_4aa910:
    if (ctx->pc == 0x4AA910u) {
        ctx->pc = 0x4AA910u;
            // 0x4aa910: 0x682023  subu        $a0, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->pc = 0x4AA914u;
        goto label_4aa914;
    }
    ctx->pc = 0x4AA90Cu;
    {
        const bool branch_taken_0x4aa90c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA90Cu;
            // 0x4aa910: 0x682023  subu        $a0, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa90c) {
            ctx->pc = 0x4AA920u;
            goto label_4aa920;
        }
    }
    ctx->pc = 0x4AA914u;
label_4aa914:
    // 0x4aa914: 0x245182b  sltu        $v1, $s2, $a1
    ctx->pc = 0x4aa914u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4aa918:
    // 0x4aa918: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
label_4aa91c:
    if (ctx->pc == 0x4AA91Cu) {
        ctx->pc = 0x4AA91Cu;
            // 0x4aa91c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4AA920u;
        goto label_4aa920;
    }
    ctx->pc = 0x4AA918u;
    {
        const bool branch_taken_0x4aa918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa918) {
            ctx->pc = 0x4AA91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA918u;
            // 0x4aa91c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA924u;
            goto label_4aa924;
        }
    }
    ctx->pc = 0x4AA920u;
label_4aa920:
    // 0x4aa920: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4aa920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4aa924:
    // 0x4aa924: 0x104082b  sltu        $at, $t0, $a0
    ctx->pc = 0x4aa924u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4aa928:
    // 0x4aa928: 0x50200052  beql        $at, $zero, . + 4 + (0x52 << 2)
label_4aa92c:
    if (ctx->pc == 0x4AA92Cu) {
        ctx->pc = 0x4AA92Cu;
            // 0x4aa92c: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x4AA930u;
        goto label_4aa930;
    }
    ctx->pc = 0x4AA928u;
    {
        const bool branch_taken_0x4aa928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa928) {
            ctx->pc = 0x4AA92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA928u;
            // 0x4aa92c: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAA74u;
            goto label_4aaa74;
        }
    }
    ctx->pc = 0x4AA930u;
label_4aa930:
    // 0x4aa930: 0xa72023  subu        $a0, $a1, $a3
    ctx->pc = 0x4aa930u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_4aa934:
    // 0x4aa934: 0x135823  negu        $t3, $s3
    ctx->pc = 0x4aa934u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_4aa938:
    // 0x4aa938: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_4aa93c:
    if (ctx->pc == 0x4AA93Cu) {
        ctx->pc = 0x4AA93Cu;
            // 0x4aa93c: 0x45083  sra         $t2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 2));
        ctx->pc = 0x4AA940u;
        goto label_4aa940;
    }
    ctx->pc = 0x4AA938u;
    {
        const bool branch_taken_0x4aa938 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4AA93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA938u;
            // 0x4aa93c: 0x45083  sra         $t2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa938) {
            ctx->pc = 0x4AA948u;
            goto label_4aa948;
        }
    }
    ctx->pc = 0x4AA940u;
label_4aa940:
    // 0x4aa940: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x4aa940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_4aa944:
    // 0x4aa944: 0x45083  sra         $t2, $a0, 2
    ctx->pc = 0x4aa944u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 2));
label_4aa948:
    // 0x4aa948: 0xc74823  subu        $t1, $a2, $a3
    ctx->pc = 0x4aa948u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4aa94c:
    // 0x4aa94c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_4aa950:
    if (ctx->pc == 0x4AA950u) {
        ctx->pc = 0x4AA950u;
            // 0x4aa950: 0x92083  sra         $a0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 2));
        ctx->pc = 0x4AA954u;
        goto label_4aa954;
    }
    ctx->pc = 0x4AA94Cu;
    {
        const bool branch_taken_0x4aa94c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x4AA950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA94Cu;
            // 0x4aa950: 0x92083  sra         $a0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa94c) {
            ctx->pc = 0x4AA95Cu;
            goto label_4aa95c;
        }
    }
    ctx->pc = 0x4AA954u;
label_4aa954:
    // 0x4aa954: 0x25240003  addiu       $a0, $t1, 0x3
    ctx->pc = 0x4aa954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_4aa958:
    // 0x4aa958: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x4aa958u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_4aa95c:
    // 0x4aa95c: 0x1644821  addu        $t1, $t3, $a0
    ctx->pc = 0x4aa95cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4aa960:
    // 0x4aa960: 0x5230003  bgezl       $t1, . + 4 + (0x3 << 2)
label_4aa964:
    if (ctx->pc == 0x4AA964u) {
        ctx->pc = 0x4AA964u;
            // 0x4aa964: 0x12a202a  slt         $a0, $t1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->pc = 0x4AA968u;
        goto label_4aa968;
    }
    ctx->pc = 0x4AA960u;
    {
        const bool branch_taken_0x4aa960 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x4aa960) {
            ctx->pc = 0x4AA964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA960u;
            // 0x4aa964: 0x12a202a  slt         $a0, $t1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA970u;
            goto label_4aa970;
        }
    }
    ctx->pc = 0x4AA968u;
label_4aa968:
    // 0x4aa968: 0x10000004  b           . + 4 + (0x4 << 2)
label_4aa96c:
    if (ctx->pc == 0x4AA96Cu) {
        ctx->pc = 0x4AA96Cu;
            // 0x4aa96c: 0x12a4821  addu        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->pc = 0x4AA970u;
        goto label_4aa970;
    }
    ctx->pc = 0x4AA968u;
    {
        const bool branch_taken_0x4aa968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA968u;
            // 0x4aa96c: 0x12a4821  addu        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa968) {
            ctx->pc = 0x4AA97Cu;
            goto label_4aa97c;
        }
    }
    ctx->pc = 0x4AA970u;
label_4aa970:
    // 0x4aa970: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_4aa974:
    if (ctx->pc == 0x4AA974u) {
        ctx->pc = 0x4AA974u;
            // 0x4aa974: 0x92080  sll         $a0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->pc = 0x4AA978u;
        goto label_4aa978;
    }
    ctx->pc = 0x4AA970u;
    {
        const bool branch_taken_0x4aa970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa970) {
            ctx->pc = 0x4AA974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA970u;
            // 0x4aa974: 0x92080  sll         $a0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA980u;
            goto label_4aa980;
        }
    }
    ctx->pc = 0x4AA978u;
label_4aa978:
    // 0x4aa978: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x4aa978u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4aa97c:
    // 0x4aa97c: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x4aa97cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4aa980:
    // 0x4aa980: 0x8ea90010  lw          $t1, 0x10($s5)
    ctx->pc = 0x4aa980u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4aa984:
    // 0x4aa984: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4aa984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4aa988:
    // 0x4aa988: 0x895023  subu        $t2, $a0, $t1
    ctx->pc = 0x4aa988u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_4aa98c:
    // 0x4aa98c: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
label_4aa990:
    if (ctx->pc == 0x4AA990u) {
        ctx->pc = 0x4AA990u;
            // 0x4aa990: 0xa4883  sra         $t1, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 2));
        ctx->pc = 0x4AA994u;
        goto label_4aa994;
    }
    ctx->pc = 0x4AA98Cu;
    {
        const bool branch_taken_0x4aa98c = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x4AA990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA98Cu;
            // 0x4aa990: 0xa4883  sra         $t1, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa98c) {
            ctx->pc = 0x4AA99Cu;
            goto label_4aa99c;
        }
    }
    ctx->pc = 0x4AA994u;
label_4aa994:
    // 0x4aa994: 0x25490003  addiu       $t1, $t2, 0x3
    ctx->pc = 0x4aa994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_4aa998:
    // 0x4aa998: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x4aa998u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
label_4aa99c:
    // 0x4aa99c: 0xaea9000c  sw          $t1, 0xC($s5)
    ctx->pc = 0x4aa99cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 9));
label_4aa9a0:
    // 0x4aa9a0: 0x8ea90008  lw          $t1, 0x8($s5)
    ctx->pc = 0x4aa9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4aa9a4:
    // 0x4aa9a4: 0x1334821  addu        $t1, $t1, $s3
    ctx->pc = 0x4aa9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
label_4aa9a8:
    // 0x4aa9a8: 0x11000023  beqz        $t0, . + 4 + (0x23 << 2)
label_4aa9ac:
    if (ctx->pc == 0x4AA9ACu) {
        ctx->pc = 0x4AA9ACu;
            // 0x4aa9ac: 0xaea90008  sw          $t1, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 9));
        ctx->pc = 0x4AA9B0u;
        goto label_4aa9b0;
    }
    ctx->pc = 0x4AA9A8u;
    {
        const bool branch_taken_0x4aa9a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA9A8u;
            // 0x4aa9ac: 0xaea90008  sw          $t1, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa9a8) {
            ctx->pc = 0x4AAA38u;
            goto label_4aaa38;
        }
    }
    ctx->pc = 0x4AA9B0u;
label_4aa9b0:
    // 0x4aa9b0: 0xa74823  subu        $t1, $a1, $a3
    ctx->pc = 0x4aa9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_4aa9b4:
    // 0x4aa9b4: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_4aa9b8:
    if (ctx->pc == 0x4AA9B8u) {
        ctx->pc = 0x4AA9B8u;
            // 0x4aa9b8: 0x95883  sra         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 9), 2));
        ctx->pc = 0x4AA9BCu;
        goto label_4aa9bc;
    }
    ctx->pc = 0x4AA9B4u;
    {
        const bool branch_taken_0x4aa9b4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x4AA9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA9B4u;
            // 0x4aa9b8: 0x95883  sra         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa9b4) {
            ctx->pc = 0x4AA9C4u;
            goto label_4aa9c4;
        }
    }
    ctx->pc = 0x4AA9BCu;
label_4aa9bc:
    // 0x4aa9bc: 0x25290003  addiu       $t1, $t1, 0x3
    ctx->pc = 0x4aa9bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_4aa9c0:
    // 0x4aa9c0: 0x95883  sra         $t3, $t1, 2
    ctx->pc = 0x4aa9c0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 9), 2));
label_4aa9c4:
    // 0x4aa9c4: 0xc75023  subu        $t2, $a2, $a3
    ctx->pc = 0x4aa9c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4aa9c8:
    // 0x4aa9c8: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
label_4aa9cc:
    if (ctx->pc == 0x4AA9CCu) {
        ctx->pc = 0x4AA9CCu;
            // 0x4aa9cc: 0xa4883  sra         $t1, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 2));
        ctx->pc = 0x4AA9D0u;
        goto label_4aa9d0;
    }
    ctx->pc = 0x4AA9C8u;
    {
        const bool branch_taken_0x4aa9c8 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x4AA9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA9C8u;
            // 0x4aa9cc: 0xa4883  sra         $t1, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa9c8) {
            ctx->pc = 0x4AA9D8u;
            goto label_4aa9d8;
        }
    }
    ctx->pc = 0x4AA9D0u;
label_4aa9d0:
    // 0x4aa9d0: 0x25490003  addiu       $t1, $t2, 0x3
    ctx->pc = 0x4aa9d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_4aa9d4:
    // 0x4aa9d4: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x4aa9d4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
label_4aa9d8:
    // 0x4aa9d8: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x4aa9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4aa9dc:
    // 0x4aa9dc: 0x5230003  bgezl       $t1, . + 4 + (0x3 << 2)
label_4aa9e0:
    if (ctx->pc == 0x4AA9E0u) {
        ctx->pc = 0x4AA9E0u;
            // 0x4aa9e0: 0x12b402a  slt         $t0, $t1, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->pc = 0x4AA9E4u;
        goto label_4aa9e4;
    }
    ctx->pc = 0x4AA9DCu;
    {
        const bool branch_taken_0x4aa9dc = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x4aa9dc) {
            ctx->pc = 0x4AA9E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA9DCu;
            // 0x4aa9e0: 0x12b402a  slt         $t0, $t1, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA9ECu;
            goto label_4aa9ec;
        }
    }
    ctx->pc = 0x4AA9E4u;
label_4aa9e4:
    // 0x4aa9e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4aa9e8:
    if (ctx->pc == 0x4AA9E8u) {
        ctx->pc = 0x4AA9E8u;
            // 0x4aa9e8: 0x12b4821  addu        $t1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->pc = 0x4AA9ECu;
        goto label_4aa9ec;
    }
    ctx->pc = 0x4AA9E4u;
    {
        const bool branch_taken_0x4aa9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA9E4u;
            // 0x4aa9e8: 0x12b4821  addu        $t1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa9e4) {
            ctx->pc = 0x4AA9F8u;
            goto label_4aa9f8;
        }
    }
    ctx->pc = 0x4AA9ECu;
label_4aa9ec:
    // 0x4aa9ec: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
label_4aa9f0:
    if (ctx->pc == 0x4AA9F0u) {
        ctx->pc = 0x4AA9F0u;
            // 0x4aa9f0: 0x94080  sll         $t0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->pc = 0x4AA9F4u;
        goto label_4aa9f4;
    }
    ctx->pc = 0x4AA9ECu;
    {
        const bool branch_taken_0x4aa9ec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa9ec) {
            ctx->pc = 0x4AA9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA9ECu;
            // 0x4aa9f0: 0x94080  sll         $t0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA9FCu;
            goto label_4aa9fc;
        }
    }
    ctx->pc = 0x4AA9F4u;
label_4aa9f4:
    // 0x4aa9f4: 0x12b4823  subu        $t1, $t1, $t3
    ctx->pc = 0x4aa9f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_4aa9f8:
    // 0x4aa9f8: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x4aa9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4aa9fc:
    // 0x4aa9fc: 0xe84821  addu        $t1, $a3, $t0
    ctx->pc = 0x4aa9fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4aaa00:
    // 0x4aaa00: 0x10c9000d  beq         $a2, $t1, . + 4 + (0xD << 2)
label_4aaa04:
    if (ctx->pc == 0x4AAA04u) {
        ctx->pc = 0x4AAA08u;
        goto label_4aaa08;
    }
    ctx->pc = 0x4AAA00u;
    {
        const bool branch_taken_0x4aaa00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x4aaa00) {
            ctx->pc = 0x4AAA38u;
            goto label_4aaa38;
        }
    }
    ctx->pc = 0x4AAA08u;
label_4aaa08:
    // 0x4aaa08: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4aaa08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4aaa0c:
    // 0x4aaa0c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4aaa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4aaa10:
    // 0x4aaa10: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
label_4aaa14:
    if (ctx->pc == 0x4AAA14u) {
        ctx->pc = 0x4AAA14u;
            // 0x4aaa14: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->pc = 0x4AAA18u;
        goto label_4aaa18;
    }
    ctx->pc = 0x4AAA10u;
    {
        const bool branch_taken_0x4aaa10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x4AAA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAA10u;
            // 0x4aaa14: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaa10) {
            ctx->pc = 0x4AAA20u;
            goto label_4aaa20;
        }
    }
    ctx->pc = 0x4AAA18u;
label_4aaa18:
    // 0x4aaa18: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4aaa18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4aaa1c:
    // 0x4aaa1c: 0x0  nop
    ctx->pc = 0x4aaa1cu;
    // NOP
label_4aaa20:
    // 0x4aaa20: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4aaa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4aaa24:
    // 0x4aaa24: 0x14850002  bne         $a0, $a1, . + 4 + (0x2 << 2)
label_4aaa28:
    if (ctx->pc == 0x4AAA28u) {
        ctx->pc = 0x4AAA2Cu;
        goto label_4aaa2c;
    }
    ctx->pc = 0x4AAA24u;
    {
        const bool branch_taken_0x4aaa24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x4aaa24) {
            ctx->pc = 0x4AAA30u;
            goto label_4aaa30;
        }
    }
    ctx->pc = 0x4AAA2Cu;
label_4aaa2c:
    // 0x4aaa2c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4aaa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4aaa30:
    // 0x4aaa30: 0x54c9fff6  bnel        $a2, $t1, . + 4 + (-0xA << 2)
label_4aaa34:
    if (ctx->pc == 0x4AAA34u) {
        ctx->pc = 0x4AAA34u;
            // 0x4aaa34: 0x8cc80000  lw          $t0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x4AAA38u;
        goto label_4aaa38;
    }
    ctx->pc = 0x4AAA30u;
    {
        const bool branch_taken_0x4aaa30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        if (branch_taken_0x4aaa30) {
            ctx->pc = 0x4AAA34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAA30u;
            // 0x4aaa34: 0x8cc80000  lw          $t0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAA0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aaa0c;
        }
    }
    ctx->pc = 0x4AAA38u;
label_4aaa38:
    // 0x4aaa38: 0x526000ee  beql        $s3, $zero, . + 4 + (0xEE << 2)
label_4aaa3c:
    if (ctx->pc == 0x4AAA3Cu) {
        ctx->pc = 0x4AAA3Cu;
            // 0x4aaa3c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4AAA40u;
        goto label_4aaa40;
    }
    ctx->pc = 0x4AAA38u;
    {
        const bool branch_taken_0x4aaa38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aaa38) {
            ctx->pc = 0x4AAA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAA38u;
            // 0x4aaa3c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AADF4u;
            goto label_4aadf4;
        }
    }
    ctx->pc = 0x4AAA40u;
label_4aaa40:
    // 0x4aaa40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4aaa40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4aaa44:
    // 0x4aaa44: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4aaa44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4aaa48:
    // 0x4aaa48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4aaa48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4aaa4c:
    // 0x4aaa4c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4aaa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4aaa50:
    // 0x4aaa50: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
label_4aaa54:
    if (ctx->pc == 0x4AAA54u) {
        ctx->pc = 0x4AAA58u;
        goto label_4aaa58;
    }
    ctx->pc = 0x4AAA50u;
    {
        const bool branch_taken_0x4aaa50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x4aaa50) {
            ctx->pc = 0x4AAA60u;
            goto label_4aaa60;
        }
    }
    ctx->pc = 0x4AAA58u;
label_4aaa58:
    // 0x4aaa58: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4aaa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4aaa5c:
    // 0x4aaa5c: 0x0  nop
    ctx->pc = 0x4aaa5cu;
    // NOP
label_4aaa60:
    // 0x4aaa60: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4aaa60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4aaa64:
    // 0x4aaa64: 0x1660fff8  bnez        $s3, . + 4 + (-0x8 << 2)
label_4aaa68:
    if (ctx->pc == 0x4AAA68u) {
        ctx->pc = 0x4AAA6Cu;
        goto label_4aaa6c;
    }
    ctx->pc = 0x4AAA64u;
    {
        const bool branch_taken_0x4aaa64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aaa64) {
            ctx->pc = 0x4AAA48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aaa48;
        }
    }
    ctx->pc = 0x4AAA6Cu;
label_4aaa6c:
    // 0x4aaa6c: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_4aaa70:
    if (ctx->pc == 0x4AAA70u) {
        ctx->pc = 0x4AAA74u;
        goto label_4aaa74;
    }
    ctx->pc = 0x4AAA6Cu;
    {
        const bool branch_taken_0x4aaa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aaa6c) {
            ctx->pc = 0x4AADF0u;
            goto label_4aadf0;
        }
    }
    ctx->pc = 0x4AAA74u;
label_4aaa74:
    // 0x4aaa74: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x4aaa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_4aaa78:
    // 0x4aaa78: 0xaea50008  sw          $a1, 0x8($s5)
    ctx->pc = 0x4aaa78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 5));
label_4aaa7c:
    // 0x4aaa7c: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x4aaa7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4aaa80:
    // 0x4aaa80: 0x51000006  beql        $t0, $zero, . + 4 + (0x6 << 2)
label_4aaa84:
    if (ctx->pc == 0x4AAA84u) {
        ctx->pc = 0x4AAA84u;
            // 0x4aaa84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AAA88u;
        goto label_4aaa88;
    }
    ctx->pc = 0x4AAA80u;
    {
        const bool branch_taken_0x4aaa80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aaa80) {
            ctx->pc = 0x4AAA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAA80u;
            // 0x4aaa84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAA9Cu;
            goto label_4aaa9c;
        }
    }
    ctx->pc = 0x4AAA88u;
label_4aaa88:
    // 0x4aaa88: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x4aaa88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4aaa8c:
    // 0x4aaa8c: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x4aaa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4aaa90:
    // 0x4aaa90: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4aaa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4aaa94:
    // 0x4aaa94: 0xa8001b  divu        $zero, $a1, $t0
    ctx->pc = 0x4aaa94u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4aaa98:
    // 0x4aaa98: 0x2810  mfhi        $a1
    ctx->pc = 0x4aaa98u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4aaa9c:
    // 0x4aaa9c: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x4aaa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4aaaa0:
    // 0x4aaaa0: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x4aaaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4aaaa4:
    // 0x4aaaa4: 0x8ea8000c  lw          $t0, 0xC($s5)
    ctx->pc = 0x4aaaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4aaaa8:
    // 0x4aaaa8: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x4aaaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4aaaac:
    // 0x4aaaac: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4aaaacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4aaab0:
    // 0x4aaab0: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x4aaab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_4aaab4:
    // 0x4aaab4: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x4aaab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4aaab8:
    // 0x4aaab8: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
label_4aaabc:
    if (ctx->pc == 0x4AAABCu) {
        ctx->pc = 0x4AAABCu;
            // 0x4aaabc: 0xa86021  addu        $t4, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->pc = 0x4AAAC0u;
        goto label_4aaac0;
    }
    ctx->pc = 0x4AAAB8u;
    {
        const bool branch_taken_0x4aaab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAAB8u;
            // 0x4aaabc: 0xa86021  addu        $t4, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaab8) {
            ctx->pc = 0x4AABE0u;
            goto label_4aabe0;
        }
    }
    ctx->pc = 0x4AAAC0u;
label_4aaac0:
    // 0x4aaac0: 0xc54023  subu        $t0, $a2, $a1
    ctx->pc = 0x4aaac0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4aaac4:
    // 0x4aaac4: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x4aaac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
label_4aaac8:
    // 0x4aaac8: 0x135823  negu        $t3, $s3
    ctx->pc = 0x4aaac8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_4aaacc:
    // 0x4aaacc: 0xafa50094  sw          $a1, 0x94($sp)
    ctx->pc = 0x4aaaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
label_4aaad0:
    // 0x4aaad0: 0xafac0098  sw          $t4, 0x98($sp)
    ctx->pc = 0x4aaad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 12));
label_4aaad4:
    // 0x4aaad4: 0x85083  sra         $t2, $t0, 2
    ctx->pc = 0x4aaad4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 2));
label_4aaad8:
    // 0x4aaad8: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_4aaadc:
    if (ctx->pc == 0x4AAADCu) {
        ctx->pc = 0x4AAADCu;
            // 0x4aaadc: 0xafa6009c  sw          $a2, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
        ctx->pc = 0x4AAAE0u;
        goto label_4aaae0;
    }
    ctx->pc = 0x4AAAD8u;
    {
        const bool branch_taken_0x4aaad8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x4AAADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAAD8u;
            // 0x4aaadc: 0xafa6009c  sw          $a2, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaad8) {
            ctx->pc = 0x4AAAE8u;
            goto label_4aaae8;
        }
    }
    ctx->pc = 0x4AAAE0u;
label_4aaae0:
    // 0x4aaae0: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x4aaae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_4aaae4:
    // 0x4aaae4: 0x85083  sra         $t2, $t0, 2
    ctx->pc = 0x4aaae4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 2));
label_4aaae8:
    // 0x4aaae8: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x4aaae8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4aaaec:
    // 0x4aaaec: 0x1054823  subu        $t1, $t0, $a1
    ctx->pc = 0x4aaaecu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4aaaf0:
    // 0x4aaaf0: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_4aaaf4:
    if (ctx->pc == 0x4AAAF4u) {
        ctx->pc = 0x4AAAF4u;
            // 0x4aaaf4: 0x94083  sra         $t0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 2));
        ctx->pc = 0x4AAAF8u;
        goto label_4aaaf8;
    }
    ctx->pc = 0x4AAAF0u;
    {
        const bool branch_taken_0x4aaaf0 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x4AAAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAAF0u;
            // 0x4aaaf4: 0x94083  sra         $t0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaaf0) {
            ctx->pc = 0x4AAB00u;
            goto label_4aab00;
        }
    }
    ctx->pc = 0x4AAAF8u;
label_4aaaf8:
    // 0x4aaaf8: 0x25280003  addiu       $t0, $t1, 0x3
    ctx->pc = 0x4aaaf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_4aaafc:
    // 0x4aaafc: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x4aaafcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
label_4aab00:
    // 0x4aab00: 0x1684821  addu        $t1, $t3, $t0
    ctx->pc = 0x4aab00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_4aab04:
    // 0x4aab04: 0x5230003  bgezl       $t1, . + 4 + (0x3 << 2)
label_4aab08:
    if (ctx->pc == 0x4AAB08u) {
        ctx->pc = 0x4AAB08u;
            // 0x4aab08: 0x12a402a  slt         $t0, $t1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->pc = 0x4AAB0Cu;
        goto label_4aab0c;
    }
    ctx->pc = 0x4AAB04u;
    {
        const bool branch_taken_0x4aab04 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x4aab04) {
            ctx->pc = 0x4AAB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAB04u;
            // 0x4aab08: 0x12a402a  slt         $t0, $t1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAB14u;
            goto label_4aab14;
        }
    }
    ctx->pc = 0x4AAB0Cu;
label_4aab0c:
    // 0x4aab0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_4aab10:
    if (ctx->pc == 0x4AAB10u) {
        ctx->pc = 0x4AAB10u;
            // 0x4aab10: 0x12a4821  addu        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->pc = 0x4AAB14u;
        goto label_4aab14;
    }
    ctx->pc = 0x4AAB0Cu;
    {
        const bool branch_taken_0x4aab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAB0Cu;
            // 0x4aab10: 0x12a4821  addu        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aab0c) {
            ctx->pc = 0x4AAB20u;
            goto label_4aab20;
        }
    }
    ctx->pc = 0x4AAB14u;
label_4aab14:
    // 0x4aab14: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
label_4aab18:
    if (ctx->pc == 0x4AAB18u) {
        ctx->pc = 0x4AAB18u;
            // 0x4aab18: 0x8fa80094  lw          $t0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->pc = 0x4AAB1Cu;
        goto label_4aab1c;
    }
    ctx->pc = 0x4AAB14u;
    {
        const bool branch_taken_0x4aab14 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aab14) {
            ctx->pc = 0x4AAB18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAB14u;
            // 0x4aab18: 0x8fa80094  lw          $t0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAB24u;
            goto label_4aab24;
        }
    }
    ctx->pc = 0x4AAB1Cu;
label_4aab1c:
    // 0x4aab1c: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x4aab1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4aab20:
    // 0x4aab20: 0x8fa80094  lw          $t0, 0x94($sp)
    ctx->pc = 0x4aab20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4aab24:
    // 0x4aab24: 0x95880  sll         $t3, $t1, 2
    ctx->pc = 0x4aab24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4aab28:
    // 0x4aab28: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x4aab28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_4aab2c:
    // 0x4aab2c: 0xafac0088  sw          $t4, 0x88($sp)
    ctx->pc = 0x4aab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 12));
label_4aab30:
    // 0x4aab30: 0x45023  negu        $t2, $a0
    ctx->pc = 0x4aab30u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_4aab34:
    // 0x4aab34: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x4aab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
label_4aab38:
    // 0x4aab38: 0x10b6821  addu        $t5, $t0, $t3
    ctx->pc = 0x4aab38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_4aab3c:
    // 0x4aab3c: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x4aab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4aab40:
    // 0x4aab40: 0xafad0090  sw          $t5, 0x90($sp)
    ctx->pc = 0x4aab40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 13));
label_4aab44:
    // 0x4aab44: 0x44883  sra         $t1, $a0, 2
    ctx->pc = 0x4aab44u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 2));
label_4aab48:
    // 0x4aab48: 0x8fab0094  lw          $t3, 0x94($sp)
    ctx->pc = 0x4aab48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4aab4c:
    // 0x4aab4c: 0x8fac009c  lw          $t4, 0x9C($sp)
    ctx->pc = 0x4aab4cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_4aab50:
    // 0x4aab50: 0xafa50084  sw          $a1, 0x84($sp)
    ctx->pc = 0x4aab50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 5));
label_4aab54:
    // 0x4aab54: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_4aab58:
    if (ctx->pc == 0x4AAB58u) {
        ctx->pc = 0x4AAB58u;
            // 0x4aab58: 0xafa6008c  sw          $a2, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 6));
        ctx->pc = 0x4AAB5Cu;
        goto label_4aab5c;
    }
    ctx->pc = 0x4AAB54u;
    {
        const bool branch_taken_0x4aab54 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4AAB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAB54u;
            // 0x4aab58: 0xafa6008c  sw          $a2, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aab54) {
            ctx->pc = 0x4AAB64u;
            goto label_4aab64;
        }
    }
    ctx->pc = 0x4AAB5Cu;
label_4aab5c:
    // 0x4aab5c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x4aab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_4aab60:
    // 0x4aab60: 0x44883  sra         $t1, $a0, 2
    ctx->pc = 0x4aab60u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 2));
label_4aab64:
    // 0x4aab64: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x4aab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4aab68:
    // 0x4aab68: 0x854023  subu        $t0, $a0, $a1
    ctx->pc = 0x4aab68u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4aab6c:
    // 0x4aab6c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_4aab70:
    if (ctx->pc == 0x4AAB70u) {
        ctx->pc = 0x4AAB70u;
            // 0x4aab70: 0x82083  sra         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 2));
        ctx->pc = 0x4AAB74u;
        goto label_4aab74;
    }
    ctx->pc = 0x4AAB6Cu;
    {
        const bool branch_taken_0x4aab6c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x4AAB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAB6Cu;
            // 0x4aab70: 0x82083  sra         $a0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aab6c) {
            ctx->pc = 0x4AAB7Cu;
            goto label_4aab7c;
        }
    }
    ctx->pc = 0x4AAB74u;
label_4aab74:
    // 0x4aab74: 0x25040003  addiu       $a0, $t0, 0x3
    ctx->pc = 0x4aab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_4aab78:
    // 0x4aab78: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x4aab78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_4aab7c:
    // 0x4aab7c: 0x1444021  addu        $t0, $t2, $a0
    ctx->pc = 0x4aab7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_4aab80:
    // 0x4aab80: 0x5030003  bgezl       $t0, . + 4 + (0x3 << 2)
label_4aab84:
    if (ctx->pc == 0x4AAB84u) {
        ctx->pc = 0x4AAB84u;
            // 0x4aab84: 0x109202a  slt         $a0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->pc = 0x4AAB88u;
        goto label_4aab88;
    }
    ctx->pc = 0x4AAB80u;
    {
        const bool branch_taken_0x4aab80 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x4aab80) {
            ctx->pc = 0x4AAB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAB80u;
            // 0x4aab84: 0x109202a  slt         $a0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAB90u;
            goto label_4aab90;
        }
    }
    ctx->pc = 0x4AAB88u;
label_4aab88:
    // 0x4aab88: 0x10000004  b           . + 4 + (0x4 << 2)
label_4aab8c:
    if (ctx->pc == 0x4AAB8Cu) {
        ctx->pc = 0x4AAB8Cu;
            // 0x4aab8c: 0x1094021  addu        $t0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->pc = 0x4AAB90u;
        goto label_4aab90;
    }
    ctx->pc = 0x4AAB88u;
    {
        const bool branch_taken_0x4aab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAB88u;
            // 0x4aab8c: 0x1094021  addu        $t0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aab88) {
            ctx->pc = 0x4AAB9Cu;
            goto label_4aab9c;
        }
    }
    ctx->pc = 0x4AAB90u;
label_4aab90:
    // 0x4aab90: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_4aab94:
    if (ctx->pc == 0x4AAB94u) {
        ctx->pc = 0x4AAB94u;
            // 0x4aab94: 0x8fa40084  lw          $a0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->pc = 0x4AAB98u;
        goto label_4aab98;
    }
    ctx->pc = 0x4AAB90u;
    {
        const bool branch_taken_0x4aab90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aab90) {
            ctx->pc = 0x4AAB94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAB90u;
            // 0x4aab94: 0x8fa40084  lw          $a0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AABA0u;
            goto label_4aaba0;
        }
    }
    ctx->pc = 0x4AAB98u;
label_4aab98:
    // 0x4aab98: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x4aab98u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4aab9c:
    // 0x4aab9c: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x4aab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_4aaba0:
    // 0x4aaba0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4aaba0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4aaba4:
    // 0x4aaba4: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x4aaba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_4aaba8:
    // 0x4aaba8: 0x11a8000d  beq         $t5, $t0, . + 4 + (0xD << 2)
label_4aabac:
    if (ctx->pc == 0x4AABACu) {
        ctx->pc = 0x4AABACu;
            // 0x4aabac: 0xafa80080  sw          $t0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
        ctx->pc = 0x4AABB0u;
        goto label_4aabb0;
    }
    ctx->pc = 0x4AABA8u;
    {
        const bool branch_taken_0x4aaba8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 8));
        ctx->pc = 0x4AABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AABA8u;
            // 0x4aabac: 0xafa80080  sw          $t0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaba8) {
            ctx->pc = 0x4AABE0u;
            goto label_4aabe0;
        }
    }
    ctx->pc = 0x4AABB0u;
label_4aabb0:
    // 0x4aabb0: 0x14e50003  bne         $a3, $a1, . + 4 + (0x3 << 2)
label_4aabb4:
    if (ctx->pc == 0x4AABB4u) {
        ctx->pc = 0x4AABB8u;
        goto label_4aabb8;
    }
    ctx->pc = 0x4AABB0u;
    {
        const bool branch_taken_0x4aabb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x4aabb0) {
            ctx->pc = 0x4AABC0u;
            goto label_4aabc0;
        }
    }
    ctx->pc = 0x4AABB8u;
label_4aabb8:
    // 0x4aabb8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4aabb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4aabbc:
    // 0x4aabbc: 0x0  nop
    ctx->pc = 0x4aabbcu;
    // NOP
label_4aabc0:
    // 0x4aabc0: 0x15ab0003  bne         $t5, $t3, . + 4 + (0x3 << 2)
label_4aabc4:
    if (ctx->pc == 0x4AABC4u) {
        ctx->pc = 0x4AABC4u;
            // 0x4aabc4: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->pc = 0x4AABC8u;
        goto label_4aabc8;
    }
    ctx->pc = 0x4AABC0u;
    {
        const bool branch_taken_0x4aabc0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 11));
        ctx->pc = 0x4AABC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AABC0u;
            // 0x4aabc4: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aabc0) {
            ctx->pc = 0x4AABD0u;
            goto label_4aabd0;
        }
    }
    ctx->pc = 0x4AABC8u;
label_4aabc8:
    // 0x4aabc8: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x4aabc8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_4aabcc:
    // 0x4aabcc: 0x0  nop
    ctx->pc = 0x4aabccu;
    // NOP
label_4aabd0:
    // 0x4aabd0: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x4aabd0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
label_4aabd4:
    // 0x4aabd4: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x4aabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4aabd8:
    // 0x4aabd8: 0x15a8fff5  bne         $t5, $t0, . + 4 + (-0xB << 2)
label_4aabdc:
    if (ctx->pc == 0x4AABDCu) {
        ctx->pc = 0x4AABDCu;
            // 0x4aabdc: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x4AABE0u;
        goto label_4aabe0;
    }
    ctx->pc = 0x4AABD8u;
    {
        const bool branch_taken_0x4aabd8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 8));
        ctx->pc = 0x4AABDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AABD8u;
            // 0x4aabdc: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aabd8) {
            ctx->pc = 0x4AABB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aabb0;
        }
    }
    ctx->pc = 0x4AABE0u;
label_4aabe0:
    // 0x4aabe0: 0x12600083  beqz        $s3, . + 4 + (0x83 << 2)
label_4aabe4:
    if (ctx->pc == 0x4AABE4u) {
        ctx->pc = 0x4AABE8u;
        goto label_4aabe8;
    }
    ctx->pc = 0x4AABE0u;
    {
        const bool branch_taken_0x4aabe0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aabe0) {
            ctx->pc = 0x4AADF0u;
            goto label_4aadf0;
        }
    }
    ctx->pc = 0x4AABE8u;
label_4aabe8:
    // 0x4aabe8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4aabe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4aabec:
    // 0x4aabec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4aabecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4aabf0:
    // 0x4aabf0: 0x14e50003  bne         $a3, $a1, . + 4 + (0x3 << 2)
label_4aabf4:
    if (ctx->pc == 0x4AABF4u) {
        ctx->pc = 0x4AABF8u;
        goto label_4aabf8;
    }
    ctx->pc = 0x4AABF0u;
    {
        const bool branch_taken_0x4aabf0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x4aabf0) {
            ctx->pc = 0x4AAC00u;
            goto label_4aac00;
        }
    }
    ctx->pc = 0x4AABF8u;
label_4aabf8:
    // 0x4aabf8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4aabf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4aabfc:
    // 0x4aabfc: 0x0  nop
    ctx->pc = 0x4aabfcu;
    // NOP
label_4aac00:
    // 0x4aac00: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x4aac00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_4aac04:
    // 0x4aac04: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4aac04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4aac08:
    // 0x4aac08: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4aac08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4aac0c:
    // 0x4aac0c: 0x1660fff8  bnez        $s3, . + 4 + (-0x8 << 2)
label_4aac10:
    if (ctx->pc == 0x4AAC10u) {
        ctx->pc = 0x4AAC14u;
        goto label_4aac14;
    }
    ctx->pc = 0x4AAC0Cu;
    {
        const bool branch_taken_0x4aac0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aac0c) {
            ctx->pc = 0x4AABF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aabf0;
        }
    }
    ctx->pc = 0x4AAC14u;
label_4aac14:
    // 0x4aac14: 0x10000076  b           . + 4 + (0x76 << 2)
label_4aac18:
    if (ctx->pc == 0x4AAC18u) {
        ctx->pc = 0x4AAC1Cu;
        goto label_4aac1c;
    }
    ctx->pc = 0x4AAC14u;
    {
        const bool branch_taken_0x4aac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aac14) {
            ctx->pc = 0x4AADF0u;
            goto label_4aadf0;
        }
    }
    ctx->pc = 0x4AAC1Cu;
label_4aac1c:
    // 0x4aac1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4aac20:
    // 0x4aac20: 0x80420e70  lb          $v0, 0xE70($v0)
    ctx->pc = 0x4aac20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3696)));
label_4aac24:
    // 0x4aac24: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4aac28:
    if (ctx->pc == 0x4AAC28u) {
        ctx->pc = 0x4AAC2Cu;
        goto label_4aac2c;
    }
    ctx->pc = 0x4AAC24u;
    {
        const bool branch_taken_0x4aac24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aac24) {
            ctx->pc = 0x4AAC4Cu;
            goto label_4aac4c;
        }
    }
    ctx->pc = 0x4AAC2Cu;
label_4aac2c:
    // 0x4aac2c: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x4aac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
label_4aac30:
    // 0x4aac30: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x4aac30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_4aac34:
    // 0x4aac34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aac34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4aac38:
    // 0x4aac38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4aac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4aac3c:
    // 0x4aac3c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x4aac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4aac40:
    // 0x4aac40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aac40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4aac44:
    // 0x4aac44: 0xac6517d0  sw          $a1, 0x17D0($v1)
    ctx->pc = 0x4aac44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6096), GPR_U32(ctx, 5));
label_4aac48:
    // 0x4aac48: 0xa0440e70  sb          $a0, 0xE70($v0)
    ctx->pc = 0x4aac48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3696), (uint8_t)GPR_U32(ctx, 4));
label_4aac4c:
    // 0x4aac4c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4aac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4aac50:
    // 0x4aac50: 0x8c5617d0  lw          $s6, 0x17D0($v0)
    ctx->pc = 0x4aac50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6096)));
label_4aac54:
    // 0x4aac54: 0x2d0082b  sltu        $at, $s6, $s0
    ctx->pc = 0x4aac54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4aac58:
    // 0x4aac58: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
label_4aac5c:
    if (ctx->pc == 0x4AAC5Cu) {
        ctx->pc = 0x4AAC5Cu;
            // 0x4aac5c: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x4AAC60u;
        goto label_4aac60;
    }
    ctx->pc = 0x4AAC58u;
    {
        const bool branch_taken_0x4aac58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aac58) {
            ctx->pc = 0x4AAC5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAC58u;
            // 0x4aac5c: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAC84u;
            goto label_4aac84;
        }
    }
    ctx->pc = 0x4AAC60u;
label_4aac60:
    // 0x4aac60: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4aac60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_4aac64:
    // 0x4aac64: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4aac64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4aac68:
    // 0x4aac68: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4aac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_4aac6c:
    // 0x4aac6c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4aac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4aac70:
    // 0x4aac70: 0xc049e92  jal         func_127A48
label_4aac74:
    if (ctx->pc == 0x4AAC74u) {
        ctx->pc = 0x4AAC74u;
            // 0x4aac74: 0x24a552f0  addiu       $a1, $a1, 0x52F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21232));
        ctx->pc = 0x4AAC78u;
        goto label_4aac78;
    }
    ctx->pc = 0x4AAC70u;
    SET_GPR_U32(ctx, 31, 0x4AAC78u);
    ctx->pc = 0x4AAC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAC70u;
            // 0x4aac74: 0x24a552f0  addiu       $a1, $a1, 0x52F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAC78u; }
        if (ctx->pc != 0x4AAC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAC78u; }
        if (ctx->pc != 0x4AAC78u) { return; }
    }
    ctx->pc = 0x4AAC78u;
label_4aac78:
    // 0x4aac78: 0xc04981a  jal         func_126068
label_4aac7c:
    if (ctx->pc == 0x4AAC7Cu) {
        ctx->pc = 0x4AAC80u;
        goto label_4aac80;
    }
    ctx->pc = 0x4AAC78u;
    SET_GPR_U32(ctx, 31, 0x4AAC80u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAC80u; }
        if (ctx->pc != 0x4AAC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAC80u; }
        if (ctx->pc != 0x4AAC80u) { return; }
    }
    ctx->pc = 0x4AAC80u;
label_4aac80:
    // 0x4aac80: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4aac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4aac84:
    // 0x4aac84: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_4aac88:
    if (ctx->pc == 0x4AAC88u) {
        ctx->pc = 0x4AAC88u;
            // 0x4aac88: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4AAC8Cu;
        goto label_4aac8c;
    }
    ctx->pc = 0x4AAC84u;
    {
        const bool branch_taken_0x4aac84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aac84) {
            ctx->pc = 0x4AAC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAC84u;
            // 0x4aac88: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAC90u;
            goto label_4aac90;
        }
    }
    ctx->pc = 0x4AAC8Cu;
label_4aac8c:
    // 0x4aac8c: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x4aac8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4aac90:
    // 0x4aac90: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x4aac90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4aac94:
    // 0x4aac94: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_4aac98:
    if (ctx->pc == 0x4AAC98u) {
        ctx->pc = 0x4AAC9Cu;
        goto label_4aac9c;
    }
    ctx->pc = 0x4AAC94u;
    {
        const bool branch_taken_0x4aac94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aac94) {
            ctx->pc = 0x4AACD0u;
            goto label_4aacd0;
        }
    }
    ctx->pc = 0x4AAC9Cu;
label_4aac9c:
    // 0x4aac9c: 0x161042  srl         $v0, $s6, 1
    ctx->pc = 0x4aac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_4aaca0:
    // 0x4aaca0: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x4aaca0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4aaca4:
    // 0x4aaca4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_4aaca8:
    if (ctx->pc == 0x4AACA8u) {
        ctx->pc = 0x4AACACu;
        goto label_4aacac;
    }
    ctx->pc = 0x4AACA4u;
    {
        const bool branch_taken_0x4aaca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aaca4) {
            ctx->pc = 0x4AACB8u;
            goto label_4aacb8;
        }
    }
    ctx->pc = 0x4AACACu;
label_4aacac:
    // 0x4aacac: 0x10000004  b           . + 4 + (0x4 << 2)
label_4aacb0:
    if (ctx->pc == 0x4AACB0u) {
        ctx->pc = 0x4AACB0u;
            // 0x4aacb0: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x4AACB4u;
        goto label_4aacb4;
    }
    ctx->pc = 0x4AACACu;
    {
        const bool branch_taken_0x4aacac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AACB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AACACu;
            // 0x4aacb0: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aacac) {
            ctx->pc = 0x4AACC0u;
            goto label_4aacc0;
        }
    }
    ctx->pc = 0x4AACB4u;
label_4aacb4:
    // 0x4aacb4: 0x0  nop
    ctx->pc = 0x4aacb4u;
    // NOP
label_4aacb8:
    // 0x4aacb8: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x4aacb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4aacbc:
    // 0x4aacbc: 0x0  nop
    ctx->pc = 0x4aacbcu;
    // NOP
label_4aacc0:
    // 0x4aacc0: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x4aacc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4aacc4:
    // 0x4aacc4: 0x5420fff7  bnel        $at, $zero, . + 4 + (-0x9 << 2)
label_4aacc8:
    if (ctx->pc == 0x4AACC8u) {
        ctx->pc = 0x4AACC8u;
            // 0x4aacc8: 0x222082b  sltu        $at, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4AACCCu;
        goto label_4aaccc;
    }
    ctx->pc = 0x4AACC4u;
    {
        const bool branch_taken_0x4aacc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aacc4) {
            ctx->pc = 0x4AACC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AACC4u;
            // 0x4aacc8: 0x222082b  sltu        $at, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AACA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aaca4;
        }
    }
    ctx->pc = 0x4AACCCu;
label_4aaccc:
    // 0x4aaccc: 0x0  nop
    ctx->pc = 0x4aacccu;
    // NOP
label_4aacd0:
    // 0x4aacd0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x4aacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4aacd4:
    // 0x4aacd4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x4aacd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4aacd8:
    // 0x4aacd8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4aacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4aacdc:
    // 0x4aacdc: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x4aacdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
label_4aace0:
    // 0x4aace0: 0xc0fe54c  jal         func_3F9530
label_4aace4:
    if (ctx->pc == 0x4AACE4u) {
        ctx->pc = 0x4AACE4u;
            // 0x4aace4: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x4AACE8u;
        goto label_4aace8;
    }
    ctx->pc = 0x4AACE0u;
    SET_GPR_U32(ctx, 31, 0x4AACE8u);
    ctx->pc = 0x4AACE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AACE0u;
            // 0x4aace4: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AACE8u; }
        if (ctx->pc != 0x4AACE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AACE8u; }
        if (ctx->pc != 0x4AACE8u) { return; }
    }
    ctx->pc = 0x4AACE8u;
label_4aace8:
    // 0x4aace8: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x4aace8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4aacec:
    // 0x4aacec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aacecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4aacf0:
    // 0x4aacf0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x4aacf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4aacf4:
    // 0x4aacf4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4aacf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4aacf8:
    // 0x4aacf8: 0x8ea60010  lw          $a2, 0x10($s5)
    ctx->pc = 0x4aacf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4aacfc:
    // 0x4aacfc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4aacfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4aad00:
    // 0x4aad00: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4aad00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4aad04:
    // 0x4aad04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4aad04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4aad08:
    // 0x4aad08: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x4aad08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4aad0c:
    // 0x4aad0c: 0x10e40008  beq         $a3, $a0, . + 4 + (0x8 << 2)
label_4aad10:
    if (ctx->pc == 0x4AAD10u) {
        ctx->pc = 0x4AAD10u;
            // 0x4aad10: 0xc32821  addu        $a1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->pc = 0x4AAD14u;
        goto label_4aad14;
    }
    ctx->pc = 0x4AAD0Cu;
    {
        const bool branch_taken_0x4aad0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x4AAD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAD0Cu;
            // 0x4aad10: 0xc32821  addu        $a1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aad0c) {
            ctx->pc = 0x4AAD30u;
            goto label_4aad30;
        }
    }
    ctx->pc = 0x4AAD14u;
label_4aad14:
    // 0x4aad14: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4aad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4aad18:
    // 0x4aad18: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4aad18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4aad1c:
    // 0x4aad1c: 0x14e50002  bne         $a3, $a1, . + 4 + (0x2 << 2)
label_4aad20:
    if (ctx->pc == 0x4AAD20u) {
        ctx->pc = 0x4AAD20u;
            // 0x4aad20: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4AAD24u;
        goto label_4aad24;
    }
    ctx->pc = 0x4AAD1Cu;
    {
        const bool branch_taken_0x4aad1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x4AAD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAD1Cu;
            // 0x4aad20: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aad1c) {
            ctx->pc = 0x4AAD28u;
            goto label_4aad28;
        }
    }
    ctx->pc = 0x4AAD24u;
label_4aad24:
    // 0x4aad24: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4aad24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4aad28:
    // 0x4aad28: 0x14e4fffa  bne         $a3, $a0, . + 4 + (-0x6 << 2)
label_4aad2c:
    if (ctx->pc == 0x4AAD2Cu) {
        ctx->pc = 0x4AAD2Cu;
            // 0x4aad2c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x4AAD30u;
        goto label_4aad30;
    }
    ctx->pc = 0x4AAD28u;
    {
        const bool branch_taken_0x4aad28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AAD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAD28u;
            // 0x4aad2c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aad28) {
            ctx->pc = 0x4AAD14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aad14;
        }
    }
    ctx->pc = 0x4AAD30u;
label_4aad30:
    // 0x4aad30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4aad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4aad34:
    // 0x4aad34: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_4aad38:
    if (ctx->pc == 0x4AAD38u) {
        ctx->pc = 0x4AAD38u;
            // 0x4aad38: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AAD3Cu;
        goto label_4aad3c;
    }
    ctx->pc = 0x4AAD34u;
    {
        const bool branch_taken_0x4aad34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAD34u;
            // 0x4aad38: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aad34) {
            ctx->pc = 0x4AAD58u;
            goto label_4aad58;
        }
    }
    ctx->pc = 0x4AAD3Cu;
label_4aad3c:
    // 0x4aad3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4aad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4aad40:
    // 0x4aad40: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4aad40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4aad44:
    // 0x4aad44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4aad44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4aad48:
    // 0x4aad48: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4aad48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4aad4c:
    // 0x4aad4c: 0x0  nop
    ctx->pc = 0x4aad4cu;
    // NOP
label_4aad50:
    // 0x4aad50: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_4aad54:
    if (ctx->pc == 0x4AAD54u) {
        ctx->pc = 0x4AAD58u;
        goto label_4aad58;
    }
    ctx->pc = 0x4AAD50u;
    {
        const bool branch_taken_0x4aad50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aad50) {
            ctx->pc = 0x4AAD3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aad3c;
        }
    }
    ctx->pc = 0x4AAD58u;
label_4aad58:
    // 0x4aad58: 0x8ea60010  lw          $a2, 0x10($s5)
    ctx->pc = 0x4aad58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4aad5c:
    // 0x4aad5c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x4aad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4aad60:
    // 0x4aad60: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
label_4aad64:
    if (ctx->pc == 0x4AAD64u) {
        ctx->pc = 0x4AAD64u;
            // 0x4aad64: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->pc = 0x4AAD68u;
        goto label_4aad68;
    }
    ctx->pc = 0x4AAD60u;
    {
        const bool branch_taken_0x4aad60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAD60u;
            // 0x4aad64: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aad60) {
            ctx->pc = 0x4AADD4u;
            goto label_4aadd4;
        }
    }
    ctx->pc = 0x4AAD68u;
label_4aad68:
    // 0x4aad68: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x4aad68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4aad6c:
    // 0x4aad6c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4aad70:
    if (ctx->pc == 0x4AAD70u) {
        ctx->pc = 0x4AAD70u;
            // 0x4aad70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AAD74u;
        goto label_4aad74;
    }
    ctx->pc = 0x4AAD6Cu;
    {
        const bool branch_taken_0x4aad6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aad6c) {
            ctx->pc = 0x4AAD70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAD6Cu;
            // 0x4aad70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAD88u;
            goto label_4aad88;
        }
    }
    ctx->pc = 0x4AAD74u;
label_4aad74:
    // 0x4aad74: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x4aad74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4aad78:
    // 0x4aad78: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x4aad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4aad7c:
    // 0x4aad7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4aad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4aad80:
    // 0x4aad80: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x4aad80u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4aad84:
    // 0x4aad84: 0x1810  mfhi        $v1
    ctx->pc = 0x4aad84u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4aad88:
    // 0x4aad88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4aad88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4aad8c:
    // 0x4aad8c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4aad8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4aad90:
    // 0x4aad90: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x4aad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4aad94:
    // 0x4aad94: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x4aad94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4aad98:
    // 0x4aad98: 0x10e50009  beq         $a3, $a1, . + 4 + (0x9 << 2)
label_4aad9c:
    if (ctx->pc == 0x4AAD9Cu) {
        ctx->pc = 0x4AAD9Cu;
            // 0x4aad9c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x4AADA0u;
        goto label_4aada0;
    }
    ctx->pc = 0x4AAD98u;
    {
        const bool branch_taken_0x4aad98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4AAD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAD98u;
            // 0x4aad9c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aad98) {
            ctx->pc = 0x4AADC0u;
            goto label_4aadc0;
        }
    }
    ctx->pc = 0x4AADA0u;
label_4aada0:
    // 0x4aada0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4aada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4aada4:
    // 0x4aada4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4aada4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4aada8:
    // 0x4aada8: 0x14e40003  bne         $a3, $a0, . + 4 + (0x3 << 2)
label_4aadac:
    if (ctx->pc == 0x4AADACu) {
        ctx->pc = 0x4AADACu;
            // 0x4aadac: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4AADB0u;
        goto label_4aadb0;
    }
    ctx->pc = 0x4AADA8u;
    {
        const bool branch_taken_0x4aada8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AADA8u;
            // 0x4aadac: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aada8) {
            ctx->pc = 0x4AADB8u;
            goto label_4aadb8;
        }
    }
    ctx->pc = 0x4AADB0u;
label_4aadb0:
    // 0x4aadb0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4aadb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4aadb4:
    // 0x4aadb4: 0x0  nop
    ctx->pc = 0x4aadb4u;
    // NOP
label_4aadb8:
    // 0x4aadb8: 0x14e5fff9  bne         $a3, $a1, . + 4 + (-0x7 << 2)
label_4aadbc:
    if (ctx->pc == 0x4AADBCu) {
        ctx->pc = 0x4AADBCu;
            // 0x4aadbc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x4AADC0u;
        goto label_4aadc0;
    }
    ctx->pc = 0x4AADB8u;
    {
        const bool branch_taken_0x4aadb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x4AADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AADB8u;
            // 0x4aadbc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aadb8) {
            ctx->pc = 0x4AADA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aada0;
        }
    }
    ctx->pc = 0x4AADC0u;
label_4aadc0:
    // 0x4aadc0: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x4aadc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4aadc4:
    // 0x4aadc4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_4aadc8:
    if (ctx->pc == 0x4AADC8u) {
        ctx->pc = 0x4AADC8u;
            // 0x4aadc8: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x4AADCCu;
        goto label_4aadcc;
    }
    ctx->pc = 0x4AADC4u;
    {
        const bool branch_taken_0x4aadc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aadc4) {
            ctx->pc = 0x4AADC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AADC4u;
            // 0x4aadc8: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AADD8u;
            goto label_4aadd8;
        }
    }
    ctx->pc = 0x4AADCCu;
label_4aadcc:
    // 0x4aadcc: 0xc0fe48c  jal         func_3F9230
label_4aadd0:
    if (ctx->pc == 0x4AADD0u) {
        ctx->pc = 0x4AADD0u;
            // 0x4aadd0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x4AADD4u;
        goto label_4aadd4;
    }
    ctx->pc = 0x4AADCCu;
    SET_GPR_U32(ctx, 31, 0x4AADD4u);
    ctx->pc = 0x4AADD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AADCCu;
            // 0x4aadd0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AADD4u; }
        if (ctx->pc != 0x4AADD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AADD4u; }
        if (ctx->pc != 0x4AADD4u) { return; }
    }
    ctx->pc = 0x4AADD4u;
label_4aadd4:
    // 0x4aadd4: 0xaeb00010  sw          $s0, 0x10($s5)
    ctx->pc = 0x4aadd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
label_4aadd8:
    // 0x4aadd8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4aadd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4aaddc:
    // 0x4aaddc: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x4aaddcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_4aade0:
    // 0x4aade0: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x4aade0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
label_4aade4:
    // 0x4aade4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x4aade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4aade8:
    // 0x4aade8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4aade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4aadec:
    // 0x4aadec: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x4aadecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_4aadf0:
    // 0x4aadf0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4aadf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4aadf4:
    // 0x4aadf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4aadf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4aadf8:
    // 0x4aadf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4aadf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4aadfc:
    // 0x4aadfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4aadfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4aae00:
    // 0x4aae00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4aae00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4aae04:
    // 0x4aae04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4aae04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4aae08:
    // 0x4aae08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aae08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4aae0c:
    // 0x4aae0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4aae0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4aae10:
    // 0x4aae10: 0x3e00008  jr          $ra
label_4aae14:
    if (ctx->pc == 0x4AAE14u) {
        ctx->pc = 0x4AAE14u;
            // 0x4aae14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4AAE18u;
        goto label_4aae18;
    }
    ctx->pc = 0x4AAE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAE10u;
            // 0x4aae14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AAE18u;
label_4aae18:
    // 0x4aae18: 0x0  nop
    ctx->pc = 0x4aae18u;
    // NOP
label_4aae1c:
    // 0x4aae1c: 0x0  nop
    ctx->pc = 0x4aae1cu;
    // NOP
label_4aae20:
    // 0x4aae20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4aae24:
    // 0x4aae24: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4aae24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4aae28:
    // 0x4aae28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4aae2c:
    // 0x4aae2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4aae30:
    // 0x4aae30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4aae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4aae34:
    // 0x4aae34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aae34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4aae38:
    // 0x4aae38: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x4aae38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4aae3c:
    // 0x4aae3c: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4aae3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4aae40:
    // 0x4aae40: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4aae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4aae44:
    // 0x4aae44: 0x50830018  beql        $a0, $v1, . + 4 + (0x18 << 2)
label_4aae48:
    if (ctx->pc == 0x4AAE48u) {
        ctx->pc = 0x4AAE48u;
            // 0x4aae48: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x4AAE4Cu;
        goto label_4aae4c;
    }
    ctx->pc = 0x4AAE44u;
    {
        const bool branch_taken_0x4aae44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4aae44) {
            ctx->pc = 0x4AAE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAE44u;
            // 0x4aae48: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAEA8u;
            goto label_4aaea8;
        }
    }
    ctx->pc = 0x4AAE4Cu;
label_4aae4c:
    // 0x4aae4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4aae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4aae50:
    // 0x4aae50: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_4aae54:
    if (ctx->pc == 0x4AAE54u) {
        ctx->pc = 0x4AAE58u;
        goto label_4aae58;
    }
    ctx->pc = 0x4AAE50u;
    {
        const bool branch_taken_0x4aae50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4aae50) {
            ctx->pc = 0x4AAEA4u;
            goto label_4aaea4;
        }
    }
    ctx->pc = 0x4AAE58u;
label_4aae58:
    // 0x4aae58: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4aae58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4aae5c:
    // 0x4aae5c: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_4aae60:
    if (ctx->pc == 0x4AAE60u) {
        ctx->pc = 0x4AAE60u;
            // 0x4aae60: 0x8e23005c  lw          $v1, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->pc = 0x4AAE64u;
        goto label_4aae64;
    }
    ctx->pc = 0x4AAE5Cu;
    {
        const bool branch_taken_0x4aae5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4aae5c) {
            ctx->pc = 0x4AAE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAE5Cu;
            // 0x4aae60: 0x8e23005c  lw          $v1, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAE7Cu;
            goto label_4aae7c;
        }
    }
    ctx->pc = 0x4AAE64u;
label_4aae64:
    // 0x4aae64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4aae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4aae68:
    // 0x4aae68: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4aae6c:
    if (ctx->pc == 0x4AAE6Cu) {
        ctx->pc = 0x4AAE70u;
        goto label_4aae70;
    }
    ctx->pc = 0x4AAE68u;
    {
        const bool branch_taken_0x4aae68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4aae68) {
            ctx->pc = 0x4AAE78u;
            goto label_4aae78;
        }
    }
    ctx->pc = 0x4AAE70u;
label_4aae70:
    // 0x4aae70: 0x10000054  b           . + 4 + (0x54 << 2)
label_4aae74:
    if (ctx->pc == 0x4AAE74u) {
        ctx->pc = 0x4AAE74u;
            // 0x4aae74: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4AAE78u;
        goto label_4aae78;
    }
    ctx->pc = 0x4AAE70u;
    {
        const bool branch_taken_0x4aae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAE70u;
            // 0x4aae74: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aae70) {
            ctx->pc = 0x4AAFC4u;
            goto label_4aafc4;
        }
    }
    ctx->pc = 0x4AAE78u;
label_4aae78:
    // 0x4aae78: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x4aae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4aae7c:
    // 0x4aae7c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4aae7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4aae80:
    // 0x4aae80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4aae84:
    if (ctx->pc == 0x4AAE84u) {
        ctx->pc = 0x4AAE88u;
        goto label_4aae88;
    }
    ctx->pc = 0x4AAE80u;
    {
        const bool branch_taken_0x4aae80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aae80) {
            ctx->pc = 0x4AAEA4u;
            goto label_4aaea4;
        }
    }
    ctx->pc = 0x4AAE88u;
label_4aae88:
    // 0x4aae88: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4aae88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4aae8c:
    // 0x4aae8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4aae90:
    if (ctx->pc == 0x4AAE90u) {
        ctx->pc = 0x4AAE94u;
        goto label_4aae94;
    }
    ctx->pc = 0x4AAE8Cu;
    {
        const bool branch_taken_0x4aae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aae8c) {
            ctx->pc = 0x4AAEA4u;
            goto label_4aaea4;
        }
    }
    ctx->pc = 0x4AAE94u;
label_4aae94:
    // 0x4aae94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aae94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4aae98:
    // 0x4aae98: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4aae98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4aae9c:
    // 0x4aae9c: 0xc0506ac  jal         func_141AB0
label_4aaea0:
    if (ctx->pc == 0x4AAEA0u) {
        ctx->pc = 0x4AAEA0u;
            // 0x4aaea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AAEA4u;
        goto label_4aaea4;
    }
    ctx->pc = 0x4AAE9Cu;
    SET_GPR_U32(ctx, 31, 0x4AAEA4u);
    ctx->pc = 0x4AAEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAE9Cu;
            // 0x4aaea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAEA4u; }
        if (ctx->pc != 0x4AAEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAEA4u; }
        if (ctx->pc != 0x4AAEA4u) { return; }
    }
    ctx->pc = 0x4AAEA4u;
label_4aaea4:
    // 0x4aaea4: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x4aaea4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_4aaea8:
    // 0x4aaea8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x4aaea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4aaeac:
    // 0x4aaeac: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_4aaeb0:
    if (ctx->pc == 0x4AAEB0u) {
        ctx->pc = 0x4AAEB4u;
        goto label_4aaeb4;
    }
    ctx->pc = 0x4AAEACu;
    {
        const bool branch_taken_0x4aaeac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4aaeac) {
            ctx->pc = 0x4AAED0u;
            goto label_4aaed0;
        }
    }
    ctx->pc = 0x4AAEB4u;
label_4aaeb4:
    // 0x4aaeb4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4aaeb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4aaeb8:
    // 0x4aaeb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aaeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4aaebc:
    // 0x4aaebc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4aaebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4aaec0:
    // 0x4aaec0: 0x320f809  jalr        $t9
label_4aaec4:
    if (ctx->pc == 0x4AAEC4u) {
        ctx->pc = 0x4AAEC4u;
            // 0x4aaec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AAEC8u;
        goto label_4aaec8;
    }
    ctx->pc = 0x4AAEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AAEC8u);
        ctx->pc = 0x4AAEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAEC0u;
            // 0x4aaec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AAEC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AAEC8u; }
            if (ctx->pc != 0x4AAEC8u) { return; }
        }
        }
    }
    ctx->pc = 0x4AAEC8u;
label_4aaec8:
    // 0x4aaec8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4aaecc:
    if (ctx->pc == 0x4AAECCu) {
        ctx->pc = 0x4AAED0u;
        goto label_4aaed0;
    }
    ctx->pc = 0x4AAEC8u;
    {
        const bool branch_taken_0x4aaec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aaec8) {
            ctx->pc = 0x4AAFC0u;
            goto label_4aafc0;
        }
    }
    ctx->pc = 0x4AAED0u;
label_4aaed0:
    // 0x4aaed0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aaed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4aaed4:
    // 0x4aaed4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4aaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4aaed8:
    // 0x4aaed8: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4aaed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4aaedc:
    // 0x4aaedc: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x4aaedcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_4aaee0:
    // 0x4aaee0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_4aaee4:
    if (ctx->pc == 0x4AAEE4u) {
        ctx->pc = 0x4AAEE8u;
        goto label_4aaee8;
    }
    ctx->pc = 0x4AAEE0u;
    {
        const bool branch_taken_0x4aaee0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aaee0) {
            ctx->pc = 0x4AAF04u;
            goto label_4aaf04;
        }
    }
    ctx->pc = 0x4AAEE8u;
label_4aaee8:
    // 0x4aaee8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4aaee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4aaeec:
    // 0x4aaeec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aaeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4aaef0:
    // 0x4aaef0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4aaef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4aaef4:
    // 0x4aaef4: 0x320f809  jalr        $t9
label_4aaef8:
    if (ctx->pc == 0x4AAEF8u) {
        ctx->pc = 0x4AAEF8u;
            // 0x4aaef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AAEFCu;
        goto label_4aaefc;
    }
    ctx->pc = 0x4AAEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AAEFCu);
        ctx->pc = 0x4AAEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAEF4u;
            // 0x4aaef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AAEFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AAEFCu; }
            if (ctx->pc != 0x4AAEFCu) { return; }
        }
        }
    }
    ctx->pc = 0x4AAEFCu;
label_4aaefc:
    // 0x4aaefc: 0x10000030  b           . + 4 + (0x30 << 2)
label_4aaf00:
    if (ctx->pc == 0x4AAF00u) {
        ctx->pc = 0x4AAF04u;
        goto label_4aaf04;
    }
    ctx->pc = 0x4AAEFCu;
    {
        const bool branch_taken_0x4aaefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aaefc) {
            ctx->pc = 0x4AAFC0u;
            goto label_4aafc0;
        }
    }
    ctx->pc = 0x4AAF04u;
label_4aaf04:
    // 0x4aaf04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aaf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4aaf08:
    // 0x4aaf08: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4aaf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4aaf0c:
    // 0x4aaf0c: 0xc0506ac  jal         func_141AB0
label_4aaf10:
    if (ctx->pc == 0x4AAF10u) {
        ctx->pc = 0x4AAF10u;
            // 0x4aaf10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AAF14u;
        goto label_4aaf14;
    }
    ctx->pc = 0x4AAF0Cu;
    SET_GPR_U32(ctx, 31, 0x4AAF14u);
    ctx->pc = 0x4AAF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAF0Cu;
            // 0x4aaf10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF14u; }
        if (ctx->pc != 0x4AAF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF14u; }
        if (ctx->pc != 0x4AAF14u) { return; }
    }
    ctx->pc = 0x4AAF14u;
label_4aaf14:
    // 0x4aaf14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4aaf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4aaf18:
    // 0x4aaf18: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4aaf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4aaf1c:
    // 0x4aaf1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4aaf1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4aaf20:
    // 0x4aaf20: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4aaf20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4aaf24:
    // 0x4aaf24: 0x320f809  jalr        $t9
label_4aaf28:
    if (ctx->pc == 0x4AAF28u) {
        ctx->pc = 0x4AAF28u;
            // 0x4aaf28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AAF2Cu;
        goto label_4aaf2c;
    }
    ctx->pc = 0x4AAF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AAF2Cu);
        ctx->pc = 0x4AAF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAF24u;
            // 0x4aaf28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AAF2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF2Cu; }
            if (ctx->pc != 0x4AAF2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AAF2Cu;
label_4aaf2c:
    // 0x4aaf2c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x4aaf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4aaf30:
    // 0x4aaf30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4aaf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4aaf34:
    // 0x4aaf34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4aaf38:
    if (ctx->pc == 0x4AAF38u) {
        ctx->pc = 0x4AAF38u;
            // 0x4aaf38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AAF3Cu;
        goto label_4aaf3c;
    }
    ctx->pc = 0x4AAF34u;
    {
        const bool branch_taken_0x4aaf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aaf34) {
            ctx->pc = 0x4AAF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAF34u;
            // 0x4aaf38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AAF48u;
            goto label_4aaf48;
        }
    }
    ctx->pc = 0x4AAF3Cu;
label_4aaf3c:
    // 0x4aaf3c: 0xc110754  jal         func_441D50
label_4aaf40:
    if (ctx->pc == 0x4AAF40u) {
        ctx->pc = 0x4AAF40u;
            // 0x4aaf40: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->pc = 0x4AAF44u;
        goto label_4aaf44;
    }
    ctx->pc = 0x4AAF3Cu;
    SET_GPR_U32(ctx, 31, 0x4AAF44u);
    ctx->pc = 0x4AAF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAF3Cu;
            // 0x4aaf40: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF44u; }
        if (ctx->pc != 0x4AAF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF44u; }
        if (ctx->pc != 0x4AAF44u) { return; }
    }
    ctx->pc = 0x4AAF44u;
label_4aaf44:
    // 0x4aaf44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aaf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4aaf48:
    // 0x4aaf48: 0xc12abf8  jal         func_4AAFE0
label_4aaf4c:
    if (ctx->pc == 0x4AAF4Cu) {
        ctx->pc = 0x4AAF50u;
        goto label_4aaf50;
    }
    ctx->pc = 0x4AAF48u;
    SET_GPR_U32(ctx, 31, 0x4AAF50u);
    ctx->pc = 0x4AAFE0u;
    if (runtime->hasFunction(0x4AAFE0u)) {
        auto targetFn = runtime->lookupFunction(0x4AAFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF50u; }
        if (ctx->pc != 0x4AAF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AAFE0_0x4aafe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF50u; }
        if (ctx->pc != 0x4AAF50u) { return; }
    }
    ctx->pc = 0x4AAF50u;
label_4aaf50:
    // 0x4aaf50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4aaf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4aaf54:
    // 0x4aaf54: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4aaf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4aaf58:
    // 0x4aaf58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4aaf58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4aaf5c:
    // 0x4aaf5c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4aaf5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4aaf60:
    // 0x4aaf60: 0x320f809  jalr        $t9
label_4aaf64:
    if (ctx->pc == 0x4AAF64u) {
        ctx->pc = 0x4AAF68u;
        goto label_4aaf68;
    }
    ctx->pc = 0x4AAF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AAF68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AAF68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF68u; }
            if (ctx->pc != 0x4AAF68u) { return; }
        }
        }
    }
    ctx->pc = 0x4AAF68u;
label_4aaf68:
    // 0x4aaf68: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x4aaf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4aaf6c:
    // 0x4aaf6c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4aaf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4aaf70:
    // 0x4aaf70: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_4aaf74:
    if (ctx->pc == 0x4AAF74u) {
        ctx->pc = 0x4AAF78u;
        goto label_4aaf78;
    }
    ctx->pc = 0x4AAF70u;
    {
        const bool branch_taken_0x4aaf70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aaf70) {
            ctx->pc = 0x4AAFC0u;
            goto label_4aafc0;
        }
    }
    ctx->pc = 0x4AAF78u;
label_4aaf78:
    // 0x4aaf78: 0xc05068c  jal         func_141A30
label_4aaf7c:
    if (ctx->pc == 0x4AAF7Cu) {
        ctx->pc = 0x4AAF7Cu;
            // 0x4aaf7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AAF80u;
        goto label_4aaf80;
    }
    ctx->pc = 0x4AAF78u;
    SET_GPR_U32(ctx, 31, 0x4AAF80u);
    ctx->pc = 0x4AAF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAF78u;
            // 0x4aaf7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF80u; }
        if (ctx->pc != 0x4AAF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF80u; }
        if (ctx->pc != 0x4AAF80u) { return; }
    }
    ctx->pc = 0x4AAF80u;
label_4aaf80:
    // 0x4aaf80: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4aaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4aaf84:
    // 0x4aaf84: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4aaf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4aaf88:
    // 0x4aaf88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4aaf88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4aaf8c:
    // 0x4aaf8c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4aaf8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4aaf90:
    // 0x4aaf90: 0x320f809  jalr        $t9
label_4aaf94:
    if (ctx->pc == 0x4AAF94u) {
        ctx->pc = 0x4AAF94u;
            // 0x4aaf94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AAF98u;
        goto label_4aaf98;
    }
    ctx->pc = 0x4AAF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AAF98u);
        ctx->pc = 0x4AAF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAF90u;
            // 0x4aaf94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AAF98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AAF98u; }
            if (ctx->pc != 0x4AAF98u) { return; }
        }
        }
    }
    ctx->pc = 0x4AAF98u;
label_4aaf98:
    // 0x4aaf98: 0xc110754  jal         func_441D50
label_4aaf9c:
    if (ctx->pc == 0x4AAF9Cu) {
        ctx->pc = 0x4AAF9Cu;
            // 0x4aaf9c: 0x8e240080  lw          $a0, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x4AAFA0u;
        goto label_4aafa0;
    }
    ctx->pc = 0x4AAF98u;
    SET_GPR_U32(ctx, 31, 0x4AAFA0u);
    ctx->pc = 0x4AAF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAF98u;
            // 0x4aaf9c: 0x8e240080  lw          $a0, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAFA0u; }
        if (ctx->pc != 0x4AAFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAFA0u; }
        if (ctx->pc != 0x4AAFA0u) { return; }
    }
    ctx->pc = 0x4AAFA0u;
label_4aafa0:
    // 0x4aafa0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4aafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4aafa4:
    // 0x4aafa4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4aafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4aafa8:
    // 0x4aafa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4aafa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4aafac:
    // 0x4aafac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4aafacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4aafb0:
    // 0x4aafb0: 0x320f809  jalr        $t9
label_4aafb4:
    if (ctx->pc == 0x4AAFB4u) {
        ctx->pc = 0x4AAFB8u;
        goto label_4aafb8;
    }
    ctx->pc = 0x4AAFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AAFB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AAFB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AAFB8u; }
            if (ctx->pc != 0x4AAFB8u) { return; }
        }
        }
    }
    ctx->pc = 0x4AAFB8u;
label_4aafb8:
    // 0x4aafb8: 0xc05068c  jal         func_141A30
label_4aafbc:
    if (ctx->pc == 0x4AAFBCu) {
        ctx->pc = 0x4AAFBCu;
            // 0x4aafbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4AAFC0u;
        goto label_4aafc0;
    }
    ctx->pc = 0x4AAFB8u;
    SET_GPR_U32(ctx, 31, 0x4AAFC0u);
    ctx->pc = 0x4AAFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAFB8u;
            // 0x4aafbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAFC0u; }
        if (ctx->pc != 0x4AAFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AAFC0u; }
        if (ctx->pc != 0x4AAFC0u) { return; }
    }
    ctx->pc = 0x4AAFC0u;
label_4aafc0:
    // 0x4aafc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aafc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4aafc4:
    // 0x4aafc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aafc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4aafc8:
    // 0x4aafc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4aafc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4aafcc:
    // 0x4aafcc: 0x3e00008  jr          $ra
label_4aafd0:
    if (ctx->pc == 0x4AAFD0u) {
        ctx->pc = 0x4AAFD0u;
            // 0x4aafd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AAFD4u;
        goto label_4aafd4;
    }
    ctx->pc = 0x4AAFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AAFCCu;
            // 0x4aafd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AAFD4u;
label_4aafd4:
    // 0x4aafd4: 0x0  nop
    ctx->pc = 0x4aafd4u;
    // NOP
label_4aafd8:
    // 0x4aafd8: 0x0  nop
    ctx->pc = 0x4aafd8u;
    // NOP
label_4aafdc:
    // 0x4aafdc: 0x0  nop
    ctx->pc = 0x4aafdcu;
    // NOP
}
