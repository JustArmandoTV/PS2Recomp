#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DABF0
// Address: 0x3dabf0 - 0x3db4e0
void sub_003DABF0_0x3dabf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DABF0_0x3dabf0");
#endif

    switch (ctx->pc) {
        case 0x3dabf0u: goto label_3dabf0;
        case 0x3dabf4u: goto label_3dabf4;
        case 0x3dabf8u: goto label_3dabf8;
        case 0x3dabfcu: goto label_3dabfc;
        case 0x3dac00u: goto label_3dac00;
        case 0x3dac04u: goto label_3dac04;
        case 0x3dac08u: goto label_3dac08;
        case 0x3dac0cu: goto label_3dac0c;
        case 0x3dac10u: goto label_3dac10;
        case 0x3dac14u: goto label_3dac14;
        case 0x3dac18u: goto label_3dac18;
        case 0x3dac1cu: goto label_3dac1c;
        case 0x3dac20u: goto label_3dac20;
        case 0x3dac24u: goto label_3dac24;
        case 0x3dac28u: goto label_3dac28;
        case 0x3dac2cu: goto label_3dac2c;
        case 0x3dac30u: goto label_3dac30;
        case 0x3dac34u: goto label_3dac34;
        case 0x3dac38u: goto label_3dac38;
        case 0x3dac3cu: goto label_3dac3c;
        case 0x3dac40u: goto label_3dac40;
        case 0x3dac44u: goto label_3dac44;
        case 0x3dac48u: goto label_3dac48;
        case 0x3dac4cu: goto label_3dac4c;
        case 0x3dac50u: goto label_3dac50;
        case 0x3dac54u: goto label_3dac54;
        case 0x3dac58u: goto label_3dac58;
        case 0x3dac5cu: goto label_3dac5c;
        case 0x3dac60u: goto label_3dac60;
        case 0x3dac64u: goto label_3dac64;
        case 0x3dac68u: goto label_3dac68;
        case 0x3dac6cu: goto label_3dac6c;
        case 0x3dac70u: goto label_3dac70;
        case 0x3dac74u: goto label_3dac74;
        case 0x3dac78u: goto label_3dac78;
        case 0x3dac7cu: goto label_3dac7c;
        case 0x3dac80u: goto label_3dac80;
        case 0x3dac84u: goto label_3dac84;
        case 0x3dac88u: goto label_3dac88;
        case 0x3dac8cu: goto label_3dac8c;
        case 0x3dac90u: goto label_3dac90;
        case 0x3dac94u: goto label_3dac94;
        case 0x3dac98u: goto label_3dac98;
        case 0x3dac9cu: goto label_3dac9c;
        case 0x3daca0u: goto label_3daca0;
        case 0x3daca4u: goto label_3daca4;
        case 0x3daca8u: goto label_3daca8;
        case 0x3dacacu: goto label_3dacac;
        case 0x3dacb0u: goto label_3dacb0;
        case 0x3dacb4u: goto label_3dacb4;
        case 0x3dacb8u: goto label_3dacb8;
        case 0x3dacbcu: goto label_3dacbc;
        case 0x3dacc0u: goto label_3dacc0;
        case 0x3dacc4u: goto label_3dacc4;
        case 0x3dacc8u: goto label_3dacc8;
        case 0x3dacccu: goto label_3daccc;
        case 0x3dacd0u: goto label_3dacd0;
        case 0x3dacd4u: goto label_3dacd4;
        case 0x3dacd8u: goto label_3dacd8;
        case 0x3dacdcu: goto label_3dacdc;
        case 0x3dace0u: goto label_3dace0;
        case 0x3dace4u: goto label_3dace4;
        case 0x3dace8u: goto label_3dace8;
        case 0x3dacecu: goto label_3dacec;
        case 0x3dacf0u: goto label_3dacf0;
        case 0x3dacf4u: goto label_3dacf4;
        case 0x3dacf8u: goto label_3dacf8;
        case 0x3dacfcu: goto label_3dacfc;
        case 0x3dad00u: goto label_3dad00;
        case 0x3dad04u: goto label_3dad04;
        case 0x3dad08u: goto label_3dad08;
        case 0x3dad0cu: goto label_3dad0c;
        case 0x3dad10u: goto label_3dad10;
        case 0x3dad14u: goto label_3dad14;
        case 0x3dad18u: goto label_3dad18;
        case 0x3dad1cu: goto label_3dad1c;
        case 0x3dad20u: goto label_3dad20;
        case 0x3dad24u: goto label_3dad24;
        case 0x3dad28u: goto label_3dad28;
        case 0x3dad2cu: goto label_3dad2c;
        case 0x3dad30u: goto label_3dad30;
        case 0x3dad34u: goto label_3dad34;
        case 0x3dad38u: goto label_3dad38;
        case 0x3dad3cu: goto label_3dad3c;
        case 0x3dad40u: goto label_3dad40;
        case 0x3dad44u: goto label_3dad44;
        case 0x3dad48u: goto label_3dad48;
        case 0x3dad4cu: goto label_3dad4c;
        case 0x3dad50u: goto label_3dad50;
        case 0x3dad54u: goto label_3dad54;
        case 0x3dad58u: goto label_3dad58;
        case 0x3dad5cu: goto label_3dad5c;
        case 0x3dad60u: goto label_3dad60;
        case 0x3dad64u: goto label_3dad64;
        case 0x3dad68u: goto label_3dad68;
        case 0x3dad6cu: goto label_3dad6c;
        case 0x3dad70u: goto label_3dad70;
        case 0x3dad74u: goto label_3dad74;
        case 0x3dad78u: goto label_3dad78;
        case 0x3dad7cu: goto label_3dad7c;
        case 0x3dad80u: goto label_3dad80;
        case 0x3dad84u: goto label_3dad84;
        case 0x3dad88u: goto label_3dad88;
        case 0x3dad8cu: goto label_3dad8c;
        case 0x3dad90u: goto label_3dad90;
        case 0x3dad94u: goto label_3dad94;
        case 0x3dad98u: goto label_3dad98;
        case 0x3dad9cu: goto label_3dad9c;
        case 0x3dada0u: goto label_3dada0;
        case 0x3dada4u: goto label_3dada4;
        case 0x3dada8u: goto label_3dada8;
        case 0x3dadacu: goto label_3dadac;
        case 0x3dadb0u: goto label_3dadb0;
        case 0x3dadb4u: goto label_3dadb4;
        case 0x3dadb8u: goto label_3dadb8;
        case 0x3dadbcu: goto label_3dadbc;
        case 0x3dadc0u: goto label_3dadc0;
        case 0x3dadc4u: goto label_3dadc4;
        case 0x3dadc8u: goto label_3dadc8;
        case 0x3dadccu: goto label_3dadcc;
        case 0x3dadd0u: goto label_3dadd0;
        case 0x3dadd4u: goto label_3dadd4;
        case 0x3dadd8u: goto label_3dadd8;
        case 0x3daddcu: goto label_3daddc;
        case 0x3dade0u: goto label_3dade0;
        case 0x3dade4u: goto label_3dade4;
        case 0x3dade8u: goto label_3dade8;
        case 0x3dadecu: goto label_3dadec;
        case 0x3dadf0u: goto label_3dadf0;
        case 0x3dadf4u: goto label_3dadf4;
        case 0x3dadf8u: goto label_3dadf8;
        case 0x3dadfcu: goto label_3dadfc;
        case 0x3dae00u: goto label_3dae00;
        case 0x3dae04u: goto label_3dae04;
        case 0x3dae08u: goto label_3dae08;
        case 0x3dae0cu: goto label_3dae0c;
        case 0x3dae10u: goto label_3dae10;
        case 0x3dae14u: goto label_3dae14;
        case 0x3dae18u: goto label_3dae18;
        case 0x3dae1cu: goto label_3dae1c;
        case 0x3dae20u: goto label_3dae20;
        case 0x3dae24u: goto label_3dae24;
        case 0x3dae28u: goto label_3dae28;
        case 0x3dae2cu: goto label_3dae2c;
        case 0x3dae30u: goto label_3dae30;
        case 0x3dae34u: goto label_3dae34;
        case 0x3dae38u: goto label_3dae38;
        case 0x3dae3cu: goto label_3dae3c;
        case 0x3dae40u: goto label_3dae40;
        case 0x3dae44u: goto label_3dae44;
        case 0x3dae48u: goto label_3dae48;
        case 0x3dae4cu: goto label_3dae4c;
        case 0x3dae50u: goto label_3dae50;
        case 0x3dae54u: goto label_3dae54;
        case 0x3dae58u: goto label_3dae58;
        case 0x3dae5cu: goto label_3dae5c;
        case 0x3dae60u: goto label_3dae60;
        case 0x3dae64u: goto label_3dae64;
        case 0x3dae68u: goto label_3dae68;
        case 0x3dae6cu: goto label_3dae6c;
        case 0x3dae70u: goto label_3dae70;
        case 0x3dae74u: goto label_3dae74;
        case 0x3dae78u: goto label_3dae78;
        case 0x3dae7cu: goto label_3dae7c;
        case 0x3dae80u: goto label_3dae80;
        case 0x3dae84u: goto label_3dae84;
        case 0x3dae88u: goto label_3dae88;
        case 0x3dae8cu: goto label_3dae8c;
        case 0x3dae90u: goto label_3dae90;
        case 0x3dae94u: goto label_3dae94;
        case 0x3dae98u: goto label_3dae98;
        case 0x3dae9cu: goto label_3dae9c;
        case 0x3daea0u: goto label_3daea0;
        case 0x3daea4u: goto label_3daea4;
        case 0x3daea8u: goto label_3daea8;
        case 0x3daeacu: goto label_3daeac;
        case 0x3daeb0u: goto label_3daeb0;
        case 0x3daeb4u: goto label_3daeb4;
        case 0x3daeb8u: goto label_3daeb8;
        case 0x3daebcu: goto label_3daebc;
        case 0x3daec0u: goto label_3daec0;
        case 0x3daec4u: goto label_3daec4;
        case 0x3daec8u: goto label_3daec8;
        case 0x3daeccu: goto label_3daecc;
        case 0x3daed0u: goto label_3daed0;
        case 0x3daed4u: goto label_3daed4;
        case 0x3daed8u: goto label_3daed8;
        case 0x3daedcu: goto label_3daedc;
        case 0x3daee0u: goto label_3daee0;
        case 0x3daee4u: goto label_3daee4;
        case 0x3daee8u: goto label_3daee8;
        case 0x3daeecu: goto label_3daeec;
        case 0x3daef0u: goto label_3daef0;
        case 0x3daef4u: goto label_3daef4;
        case 0x3daef8u: goto label_3daef8;
        case 0x3daefcu: goto label_3daefc;
        case 0x3daf00u: goto label_3daf00;
        case 0x3daf04u: goto label_3daf04;
        case 0x3daf08u: goto label_3daf08;
        case 0x3daf0cu: goto label_3daf0c;
        case 0x3daf10u: goto label_3daf10;
        case 0x3daf14u: goto label_3daf14;
        case 0x3daf18u: goto label_3daf18;
        case 0x3daf1cu: goto label_3daf1c;
        case 0x3daf20u: goto label_3daf20;
        case 0x3daf24u: goto label_3daf24;
        case 0x3daf28u: goto label_3daf28;
        case 0x3daf2cu: goto label_3daf2c;
        case 0x3daf30u: goto label_3daf30;
        case 0x3daf34u: goto label_3daf34;
        case 0x3daf38u: goto label_3daf38;
        case 0x3daf3cu: goto label_3daf3c;
        case 0x3daf40u: goto label_3daf40;
        case 0x3daf44u: goto label_3daf44;
        case 0x3daf48u: goto label_3daf48;
        case 0x3daf4cu: goto label_3daf4c;
        case 0x3daf50u: goto label_3daf50;
        case 0x3daf54u: goto label_3daf54;
        case 0x3daf58u: goto label_3daf58;
        case 0x3daf5cu: goto label_3daf5c;
        case 0x3daf60u: goto label_3daf60;
        case 0x3daf64u: goto label_3daf64;
        case 0x3daf68u: goto label_3daf68;
        case 0x3daf6cu: goto label_3daf6c;
        case 0x3daf70u: goto label_3daf70;
        case 0x3daf74u: goto label_3daf74;
        case 0x3daf78u: goto label_3daf78;
        case 0x3daf7cu: goto label_3daf7c;
        case 0x3daf80u: goto label_3daf80;
        case 0x3daf84u: goto label_3daf84;
        case 0x3daf88u: goto label_3daf88;
        case 0x3daf8cu: goto label_3daf8c;
        case 0x3daf90u: goto label_3daf90;
        case 0x3daf94u: goto label_3daf94;
        case 0x3daf98u: goto label_3daf98;
        case 0x3daf9cu: goto label_3daf9c;
        case 0x3dafa0u: goto label_3dafa0;
        case 0x3dafa4u: goto label_3dafa4;
        case 0x3dafa8u: goto label_3dafa8;
        case 0x3dafacu: goto label_3dafac;
        case 0x3dafb0u: goto label_3dafb0;
        case 0x3dafb4u: goto label_3dafb4;
        case 0x3dafb8u: goto label_3dafb8;
        case 0x3dafbcu: goto label_3dafbc;
        case 0x3dafc0u: goto label_3dafc0;
        case 0x3dafc4u: goto label_3dafc4;
        case 0x3dafc8u: goto label_3dafc8;
        case 0x3dafccu: goto label_3dafcc;
        case 0x3dafd0u: goto label_3dafd0;
        case 0x3dafd4u: goto label_3dafd4;
        case 0x3dafd8u: goto label_3dafd8;
        case 0x3dafdcu: goto label_3dafdc;
        case 0x3dafe0u: goto label_3dafe0;
        case 0x3dafe4u: goto label_3dafe4;
        case 0x3dafe8u: goto label_3dafe8;
        case 0x3dafecu: goto label_3dafec;
        case 0x3daff0u: goto label_3daff0;
        case 0x3daff4u: goto label_3daff4;
        case 0x3daff8u: goto label_3daff8;
        case 0x3daffcu: goto label_3daffc;
        case 0x3db000u: goto label_3db000;
        case 0x3db004u: goto label_3db004;
        case 0x3db008u: goto label_3db008;
        case 0x3db00cu: goto label_3db00c;
        case 0x3db010u: goto label_3db010;
        case 0x3db014u: goto label_3db014;
        case 0x3db018u: goto label_3db018;
        case 0x3db01cu: goto label_3db01c;
        case 0x3db020u: goto label_3db020;
        case 0x3db024u: goto label_3db024;
        case 0x3db028u: goto label_3db028;
        case 0x3db02cu: goto label_3db02c;
        case 0x3db030u: goto label_3db030;
        case 0x3db034u: goto label_3db034;
        case 0x3db038u: goto label_3db038;
        case 0x3db03cu: goto label_3db03c;
        case 0x3db040u: goto label_3db040;
        case 0x3db044u: goto label_3db044;
        case 0x3db048u: goto label_3db048;
        case 0x3db04cu: goto label_3db04c;
        case 0x3db050u: goto label_3db050;
        case 0x3db054u: goto label_3db054;
        case 0x3db058u: goto label_3db058;
        case 0x3db05cu: goto label_3db05c;
        case 0x3db060u: goto label_3db060;
        case 0x3db064u: goto label_3db064;
        case 0x3db068u: goto label_3db068;
        case 0x3db06cu: goto label_3db06c;
        case 0x3db070u: goto label_3db070;
        case 0x3db074u: goto label_3db074;
        case 0x3db078u: goto label_3db078;
        case 0x3db07cu: goto label_3db07c;
        case 0x3db080u: goto label_3db080;
        case 0x3db084u: goto label_3db084;
        case 0x3db088u: goto label_3db088;
        case 0x3db08cu: goto label_3db08c;
        case 0x3db090u: goto label_3db090;
        case 0x3db094u: goto label_3db094;
        case 0x3db098u: goto label_3db098;
        case 0x3db09cu: goto label_3db09c;
        case 0x3db0a0u: goto label_3db0a0;
        case 0x3db0a4u: goto label_3db0a4;
        case 0x3db0a8u: goto label_3db0a8;
        case 0x3db0acu: goto label_3db0ac;
        case 0x3db0b0u: goto label_3db0b0;
        case 0x3db0b4u: goto label_3db0b4;
        case 0x3db0b8u: goto label_3db0b8;
        case 0x3db0bcu: goto label_3db0bc;
        case 0x3db0c0u: goto label_3db0c0;
        case 0x3db0c4u: goto label_3db0c4;
        case 0x3db0c8u: goto label_3db0c8;
        case 0x3db0ccu: goto label_3db0cc;
        case 0x3db0d0u: goto label_3db0d0;
        case 0x3db0d4u: goto label_3db0d4;
        case 0x3db0d8u: goto label_3db0d8;
        case 0x3db0dcu: goto label_3db0dc;
        case 0x3db0e0u: goto label_3db0e0;
        case 0x3db0e4u: goto label_3db0e4;
        case 0x3db0e8u: goto label_3db0e8;
        case 0x3db0ecu: goto label_3db0ec;
        case 0x3db0f0u: goto label_3db0f0;
        case 0x3db0f4u: goto label_3db0f4;
        case 0x3db0f8u: goto label_3db0f8;
        case 0x3db0fcu: goto label_3db0fc;
        case 0x3db100u: goto label_3db100;
        case 0x3db104u: goto label_3db104;
        case 0x3db108u: goto label_3db108;
        case 0x3db10cu: goto label_3db10c;
        case 0x3db110u: goto label_3db110;
        case 0x3db114u: goto label_3db114;
        case 0x3db118u: goto label_3db118;
        case 0x3db11cu: goto label_3db11c;
        case 0x3db120u: goto label_3db120;
        case 0x3db124u: goto label_3db124;
        case 0x3db128u: goto label_3db128;
        case 0x3db12cu: goto label_3db12c;
        case 0x3db130u: goto label_3db130;
        case 0x3db134u: goto label_3db134;
        case 0x3db138u: goto label_3db138;
        case 0x3db13cu: goto label_3db13c;
        case 0x3db140u: goto label_3db140;
        case 0x3db144u: goto label_3db144;
        case 0x3db148u: goto label_3db148;
        case 0x3db14cu: goto label_3db14c;
        case 0x3db150u: goto label_3db150;
        case 0x3db154u: goto label_3db154;
        case 0x3db158u: goto label_3db158;
        case 0x3db15cu: goto label_3db15c;
        case 0x3db160u: goto label_3db160;
        case 0x3db164u: goto label_3db164;
        case 0x3db168u: goto label_3db168;
        case 0x3db16cu: goto label_3db16c;
        case 0x3db170u: goto label_3db170;
        case 0x3db174u: goto label_3db174;
        case 0x3db178u: goto label_3db178;
        case 0x3db17cu: goto label_3db17c;
        case 0x3db180u: goto label_3db180;
        case 0x3db184u: goto label_3db184;
        case 0x3db188u: goto label_3db188;
        case 0x3db18cu: goto label_3db18c;
        case 0x3db190u: goto label_3db190;
        case 0x3db194u: goto label_3db194;
        case 0x3db198u: goto label_3db198;
        case 0x3db19cu: goto label_3db19c;
        case 0x3db1a0u: goto label_3db1a0;
        case 0x3db1a4u: goto label_3db1a4;
        case 0x3db1a8u: goto label_3db1a8;
        case 0x3db1acu: goto label_3db1ac;
        case 0x3db1b0u: goto label_3db1b0;
        case 0x3db1b4u: goto label_3db1b4;
        case 0x3db1b8u: goto label_3db1b8;
        case 0x3db1bcu: goto label_3db1bc;
        case 0x3db1c0u: goto label_3db1c0;
        case 0x3db1c4u: goto label_3db1c4;
        case 0x3db1c8u: goto label_3db1c8;
        case 0x3db1ccu: goto label_3db1cc;
        case 0x3db1d0u: goto label_3db1d0;
        case 0x3db1d4u: goto label_3db1d4;
        case 0x3db1d8u: goto label_3db1d8;
        case 0x3db1dcu: goto label_3db1dc;
        case 0x3db1e0u: goto label_3db1e0;
        case 0x3db1e4u: goto label_3db1e4;
        case 0x3db1e8u: goto label_3db1e8;
        case 0x3db1ecu: goto label_3db1ec;
        case 0x3db1f0u: goto label_3db1f0;
        case 0x3db1f4u: goto label_3db1f4;
        case 0x3db1f8u: goto label_3db1f8;
        case 0x3db1fcu: goto label_3db1fc;
        case 0x3db200u: goto label_3db200;
        case 0x3db204u: goto label_3db204;
        case 0x3db208u: goto label_3db208;
        case 0x3db20cu: goto label_3db20c;
        case 0x3db210u: goto label_3db210;
        case 0x3db214u: goto label_3db214;
        case 0x3db218u: goto label_3db218;
        case 0x3db21cu: goto label_3db21c;
        case 0x3db220u: goto label_3db220;
        case 0x3db224u: goto label_3db224;
        case 0x3db228u: goto label_3db228;
        case 0x3db22cu: goto label_3db22c;
        case 0x3db230u: goto label_3db230;
        case 0x3db234u: goto label_3db234;
        case 0x3db238u: goto label_3db238;
        case 0x3db23cu: goto label_3db23c;
        case 0x3db240u: goto label_3db240;
        case 0x3db244u: goto label_3db244;
        case 0x3db248u: goto label_3db248;
        case 0x3db24cu: goto label_3db24c;
        case 0x3db250u: goto label_3db250;
        case 0x3db254u: goto label_3db254;
        case 0x3db258u: goto label_3db258;
        case 0x3db25cu: goto label_3db25c;
        case 0x3db260u: goto label_3db260;
        case 0x3db264u: goto label_3db264;
        case 0x3db268u: goto label_3db268;
        case 0x3db26cu: goto label_3db26c;
        case 0x3db270u: goto label_3db270;
        case 0x3db274u: goto label_3db274;
        case 0x3db278u: goto label_3db278;
        case 0x3db27cu: goto label_3db27c;
        case 0x3db280u: goto label_3db280;
        case 0x3db284u: goto label_3db284;
        case 0x3db288u: goto label_3db288;
        case 0x3db28cu: goto label_3db28c;
        case 0x3db290u: goto label_3db290;
        case 0x3db294u: goto label_3db294;
        case 0x3db298u: goto label_3db298;
        case 0x3db29cu: goto label_3db29c;
        case 0x3db2a0u: goto label_3db2a0;
        case 0x3db2a4u: goto label_3db2a4;
        case 0x3db2a8u: goto label_3db2a8;
        case 0x3db2acu: goto label_3db2ac;
        case 0x3db2b0u: goto label_3db2b0;
        case 0x3db2b4u: goto label_3db2b4;
        case 0x3db2b8u: goto label_3db2b8;
        case 0x3db2bcu: goto label_3db2bc;
        case 0x3db2c0u: goto label_3db2c0;
        case 0x3db2c4u: goto label_3db2c4;
        case 0x3db2c8u: goto label_3db2c8;
        case 0x3db2ccu: goto label_3db2cc;
        case 0x3db2d0u: goto label_3db2d0;
        case 0x3db2d4u: goto label_3db2d4;
        case 0x3db2d8u: goto label_3db2d8;
        case 0x3db2dcu: goto label_3db2dc;
        case 0x3db2e0u: goto label_3db2e0;
        case 0x3db2e4u: goto label_3db2e4;
        case 0x3db2e8u: goto label_3db2e8;
        case 0x3db2ecu: goto label_3db2ec;
        case 0x3db2f0u: goto label_3db2f0;
        case 0x3db2f4u: goto label_3db2f4;
        case 0x3db2f8u: goto label_3db2f8;
        case 0x3db2fcu: goto label_3db2fc;
        case 0x3db300u: goto label_3db300;
        case 0x3db304u: goto label_3db304;
        case 0x3db308u: goto label_3db308;
        case 0x3db30cu: goto label_3db30c;
        case 0x3db310u: goto label_3db310;
        case 0x3db314u: goto label_3db314;
        case 0x3db318u: goto label_3db318;
        case 0x3db31cu: goto label_3db31c;
        case 0x3db320u: goto label_3db320;
        case 0x3db324u: goto label_3db324;
        case 0x3db328u: goto label_3db328;
        case 0x3db32cu: goto label_3db32c;
        case 0x3db330u: goto label_3db330;
        case 0x3db334u: goto label_3db334;
        case 0x3db338u: goto label_3db338;
        case 0x3db33cu: goto label_3db33c;
        case 0x3db340u: goto label_3db340;
        case 0x3db344u: goto label_3db344;
        case 0x3db348u: goto label_3db348;
        case 0x3db34cu: goto label_3db34c;
        case 0x3db350u: goto label_3db350;
        case 0x3db354u: goto label_3db354;
        case 0x3db358u: goto label_3db358;
        case 0x3db35cu: goto label_3db35c;
        case 0x3db360u: goto label_3db360;
        case 0x3db364u: goto label_3db364;
        case 0x3db368u: goto label_3db368;
        case 0x3db36cu: goto label_3db36c;
        case 0x3db370u: goto label_3db370;
        case 0x3db374u: goto label_3db374;
        case 0x3db378u: goto label_3db378;
        case 0x3db37cu: goto label_3db37c;
        case 0x3db380u: goto label_3db380;
        case 0x3db384u: goto label_3db384;
        case 0x3db388u: goto label_3db388;
        case 0x3db38cu: goto label_3db38c;
        case 0x3db390u: goto label_3db390;
        case 0x3db394u: goto label_3db394;
        case 0x3db398u: goto label_3db398;
        case 0x3db39cu: goto label_3db39c;
        case 0x3db3a0u: goto label_3db3a0;
        case 0x3db3a4u: goto label_3db3a4;
        case 0x3db3a8u: goto label_3db3a8;
        case 0x3db3acu: goto label_3db3ac;
        case 0x3db3b0u: goto label_3db3b0;
        case 0x3db3b4u: goto label_3db3b4;
        case 0x3db3b8u: goto label_3db3b8;
        case 0x3db3bcu: goto label_3db3bc;
        case 0x3db3c0u: goto label_3db3c0;
        case 0x3db3c4u: goto label_3db3c4;
        case 0x3db3c8u: goto label_3db3c8;
        case 0x3db3ccu: goto label_3db3cc;
        case 0x3db3d0u: goto label_3db3d0;
        case 0x3db3d4u: goto label_3db3d4;
        case 0x3db3d8u: goto label_3db3d8;
        case 0x3db3dcu: goto label_3db3dc;
        case 0x3db3e0u: goto label_3db3e0;
        case 0x3db3e4u: goto label_3db3e4;
        case 0x3db3e8u: goto label_3db3e8;
        case 0x3db3ecu: goto label_3db3ec;
        case 0x3db3f0u: goto label_3db3f0;
        case 0x3db3f4u: goto label_3db3f4;
        case 0x3db3f8u: goto label_3db3f8;
        case 0x3db3fcu: goto label_3db3fc;
        case 0x3db400u: goto label_3db400;
        case 0x3db404u: goto label_3db404;
        case 0x3db408u: goto label_3db408;
        case 0x3db40cu: goto label_3db40c;
        case 0x3db410u: goto label_3db410;
        case 0x3db414u: goto label_3db414;
        case 0x3db418u: goto label_3db418;
        case 0x3db41cu: goto label_3db41c;
        case 0x3db420u: goto label_3db420;
        case 0x3db424u: goto label_3db424;
        case 0x3db428u: goto label_3db428;
        case 0x3db42cu: goto label_3db42c;
        case 0x3db430u: goto label_3db430;
        case 0x3db434u: goto label_3db434;
        case 0x3db438u: goto label_3db438;
        case 0x3db43cu: goto label_3db43c;
        case 0x3db440u: goto label_3db440;
        case 0x3db444u: goto label_3db444;
        case 0x3db448u: goto label_3db448;
        case 0x3db44cu: goto label_3db44c;
        case 0x3db450u: goto label_3db450;
        case 0x3db454u: goto label_3db454;
        case 0x3db458u: goto label_3db458;
        case 0x3db45cu: goto label_3db45c;
        case 0x3db460u: goto label_3db460;
        case 0x3db464u: goto label_3db464;
        case 0x3db468u: goto label_3db468;
        case 0x3db46cu: goto label_3db46c;
        case 0x3db470u: goto label_3db470;
        case 0x3db474u: goto label_3db474;
        case 0x3db478u: goto label_3db478;
        case 0x3db47cu: goto label_3db47c;
        case 0x3db480u: goto label_3db480;
        case 0x3db484u: goto label_3db484;
        case 0x3db488u: goto label_3db488;
        case 0x3db48cu: goto label_3db48c;
        case 0x3db490u: goto label_3db490;
        case 0x3db494u: goto label_3db494;
        case 0x3db498u: goto label_3db498;
        case 0x3db49cu: goto label_3db49c;
        case 0x3db4a0u: goto label_3db4a0;
        case 0x3db4a4u: goto label_3db4a4;
        case 0x3db4a8u: goto label_3db4a8;
        case 0x3db4acu: goto label_3db4ac;
        case 0x3db4b0u: goto label_3db4b0;
        case 0x3db4b4u: goto label_3db4b4;
        case 0x3db4b8u: goto label_3db4b8;
        case 0x3db4bcu: goto label_3db4bc;
        case 0x3db4c0u: goto label_3db4c0;
        case 0x3db4c4u: goto label_3db4c4;
        case 0x3db4c8u: goto label_3db4c8;
        case 0x3db4ccu: goto label_3db4cc;
        case 0x3db4d0u: goto label_3db4d0;
        case 0x3db4d4u: goto label_3db4d4;
        case 0x3db4d8u: goto label_3db4d8;
        case 0x3db4dcu: goto label_3db4dc;
        default: break;
    }

    ctx->pc = 0x3dabf0u;

label_3dabf0:
    // 0x3dabf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dabf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3dabf4:
    // 0x3dabf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dabf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3dabf8:
    // 0x3dabf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dabf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dabfc:
    // 0x3dabfc: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x3dabfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3dac00:
    // 0x3dac00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dac00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dac04:
    // 0x3dac04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3dac04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dac08:
    // 0x3dac08: 0x10a40058  beq         $a1, $a0, . + 4 + (0x58 << 2)
label_3dac0c:
    if (ctx->pc == 0x3DAC0Cu) {
        ctx->pc = 0x3DAC10u;
        goto label_3dac10;
    }
    ctx->pc = 0x3DAC08u;
    {
        const bool branch_taken_0x3dac08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3dac08) {
            ctx->pc = 0x3DAD6Cu;
            goto label_3dad6c;
        }
    }
    ctx->pc = 0x3DAC10u;
label_3dac10:
    // 0x3dac10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3dac10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dac14:
    // 0x3dac14: 0x50a30044  beql        $a1, $v1, . + 4 + (0x44 << 2)
label_3dac18:
    if (ctx->pc == 0x3DAC18u) {
        ctx->pc = 0x3DAC18u;
            // 0x3dac18: 0xc6020078  lwc1        $f2, 0x78($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3DAC1Cu;
        goto label_3dac1c;
    }
    ctx->pc = 0x3DAC14u;
    {
        const bool branch_taken_0x3dac14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dac14) {
            ctx->pc = 0x3DAC18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAC14u;
            // 0x3dac18: 0xc6020078  lwc1        $f2, 0x78($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DAD28u;
            goto label_3dad28;
        }
    }
    ctx->pc = 0x3DAC1Cu;
label_3dac1c:
    // 0x3dac1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dac20:
    // 0x3dac20: 0x50a30020  beql        $a1, $v1, . + 4 + (0x20 << 2)
label_3dac24:
    if (ctx->pc == 0x3DAC24u) {
        ctx->pc = 0x3DAC24u;
            // 0x3dac24: 0xc6000078  lwc1        $f0, 0x78($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3DAC28u;
        goto label_3dac28;
    }
    ctx->pc = 0x3DAC20u;
    {
        const bool branch_taken_0x3dac20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dac20) {
            ctx->pc = 0x3DAC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAC20u;
            // 0x3dac24: 0xc6000078  lwc1        $f0, 0x78($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DACA4u;
            goto label_3daca4;
        }
    }
    ctx->pc = 0x3DAC28u;
label_3dac28:
    // 0x3dac28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dac2c:
    // 0x3dac2c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_3dac30:
    if (ctx->pc == 0x3DAC30u) {
        ctx->pc = 0x3DAC34u;
        goto label_3dac34;
    }
    ctx->pc = 0x3DAC2Cu;
    {
        const bool branch_taken_0x3dac2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dac2c) {
            ctx->pc = 0x3DAC44u;
            goto label_3dac44;
        }
    }
    ctx->pc = 0x3DAC34u;
label_3dac34:
    // 0x3dac34: 0x50a0006f  beql        $a1, $zero, . + 4 + (0x6F << 2)
label_3dac38:
    if (ctx->pc == 0x3DAC38u) {
        ctx->pc = 0x3DAC38u;
            // 0x3dac38: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3DAC3Cu;
        goto label_3dac3c;
    }
    ctx->pc = 0x3DAC34u;
    {
        const bool branch_taken_0x3dac34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dac34) {
            ctx->pc = 0x3DAC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAC34u;
            // 0x3dac38: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DADF4u;
            goto label_3dadf4;
        }
    }
    ctx->pc = 0x3DAC3Cu;
label_3dac3c:
    // 0x3dac3c: 0x10000057  b           . + 4 + (0x57 << 2)
label_3dac40:
    if (ctx->pc == 0x3DAC40u) {
        ctx->pc = 0x3DAC44u;
        goto label_3dac44;
    }
    ctx->pc = 0x3DAC3Cu;
    {
        const bool branch_taken_0x3dac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dac3c) {
            ctx->pc = 0x3DAD9Cu;
            goto label_3dad9c;
        }
    }
    ctx->pc = 0x3DAC44u;
label_3dac44:
    // 0x3dac44: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3dac44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3dac48:
    // 0x3dac48: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3dac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3dac4c:
    // 0x3dac4c: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x3dac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dac50:
    // 0x3dac50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3dac50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dac54:
    // 0x3dac54: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3dac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dac58:
    // 0x3dac58: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3dac58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3dac5c:
    // 0x3dac5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3dac5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dac60:
    // 0x3dac60: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_3dac64:
    if (ctx->pc == 0x3DAC64u) {
        ctx->pc = 0x3DAC64u;
            // 0x3dac64: 0xe601007c  swc1        $f1, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->pc = 0x3DAC68u;
        goto label_3dac68;
    }
    ctx->pc = 0x3DAC60u;
    {
        const bool branch_taken_0x3dac60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DAC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAC60u;
            // 0x3dac64: 0xe601007c  swc1        $f1, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dac60) {
            ctx->pc = 0x3DAD9Cu;
            goto label_3dad9c;
        }
    }
    ctx->pc = 0x3DAC68u;
label_3dac68:
    // 0x3dac68: 0xc0f0f8c  jal         func_3C3E30
label_3dac6c:
    if (ctx->pc == 0x3DAC6Cu) {
        ctx->pc = 0x3DAC70u;
        goto label_3dac70;
    }
    ctx->pc = 0x3DAC68u;
    SET_GPR_U32(ctx, 31, 0x3DAC70u);
    ctx->pc = 0x3C3E30u;
    if (runtime->hasFunction(0x3C3E30u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAC70u; }
        if (ctx->pc != 0x3DAC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E30_0x3c3e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAC70u; }
        if (ctx->pc != 0x3DAC70u) { return; }
    }
    ctx->pc = 0x3DAC70u;
label_3dac70:
    // 0x3dac70: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x3dac70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3dac74:
    // 0x3dac74: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3dac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_3dac78:
    // 0x3dac78: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3dac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3dac7c:
    // 0x3dac7c: 0xc0d37ec  jal         func_34DFB0
label_3dac80:
    if (ctx->pc == 0x3DAC80u) {
        ctx->pc = 0x3DAC80u;
            // 0x3dac80: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x3DAC84u;
        goto label_3dac84;
    }
    ctx->pc = 0x3DAC7Cu;
    SET_GPR_U32(ctx, 31, 0x3DAC84u);
    ctx->pc = 0x3DAC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAC7Cu;
            // 0x3dac80: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAC84u; }
        if (ctx->pc != 0x3DAC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAC84u; }
        if (ctx->pc != 0x3DAC84u) { return; }
    }
    ctx->pc = 0x3DAC84u;
label_3dac84:
    // 0x3dac84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3dac84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3dac88:
    // 0x3dac88: 0x3c044461  lui         $a0, 0x4461
    ctx->pc = 0x3dac88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17505 << 16));
label_3dac8c:
    // 0x3dac8c: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x3dac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_3dac90:
    // 0x3dac90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dac94:
    // 0x3dac94: 0xae04007c  sw          $a0, 0x7C($s0)
    ctx->pc = 0x3dac94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 4));
label_3dac98:
    // 0x3dac98: 0x10000040  b           . + 4 + (0x40 << 2)
label_3dac9c:
    if (ctx->pc == 0x3DAC9Cu) {
        ctx->pc = 0x3DAC9Cu;
            // 0x3dac9c: 0xae030070  sw          $v1, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x3DACA0u;
        goto label_3daca0;
    }
    ctx->pc = 0x3DAC98u;
    {
        const bool branch_taken_0x3dac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAC98u;
            // 0x3dac9c: 0xae030070  sw          $v1, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dac98) {
            ctx->pc = 0x3DAD9Cu;
            goto label_3dad9c;
        }
    }
    ctx->pc = 0x3DACA0u;
label_3daca0:
    // 0x3daca0: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x3daca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3daca4:
    // 0x3daca4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3daca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3daca8:
    // 0x3daca8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3daca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dacac:
    // 0x3dacac: 0x0  nop
    ctx->pc = 0x3dacacu;
    // NOP
label_3dacb0:
    // 0x3dacb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dacb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dacb4:
    // 0x3dacb4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_3dacb8:
    if (ctx->pc == 0x3DACB8u) {
        ctx->pc = 0x3DACBCu;
        goto label_3dacbc;
    }
    ctx->pc = 0x3DACB4u;
    {
        const bool branch_taken_0x3dacb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dacb4) {
            ctx->pc = 0x3DACD0u;
            goto label_3dacd0;
        }
    }
    ctx->pc = 0x3DACBCu;
label_3dacbc:
    // 0x3dacbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3dacbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3dacc0:
    // 0x3dacc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3dacc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dacc4:
    // 0x3dacc4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3dacc8:
    if (ctx->pc == 0x3DACC8u) {
        ctx->pc = 0x3DACC8u;
            // 0x3dacc8: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->pc = 0x3DACCCu;
        goto label_3daccc;
    }
    ctx->pc = 0x3DACC4u;
    {
        const bool branch_taken_0x3dacc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DACC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DACC4u;
            // 0x3dacc8: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dacc4) {
            ctx->pc = 0x3DACD0u;
            goto label_3dacd0;
        }
    }
    ctx->pc = 0x3DACCCu;
label_3daccc:
    // 0x3daccc: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x3dacccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_3dacd0:
    // 0x3dacd0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3dacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3dacd4:
    // 0x3dacd4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3dacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3dacd8:
    // 0x3dacd8: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x3dacd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dacdc:
    // 0x3dacdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3dacdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dace0:
    // 0x3dace0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3dace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dace4:
    // 0x3dace4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3dace4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3dace8:
    // 0x3dace8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3dace8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dacec:
    // 0x3dacec: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_3dacf0:
    if (ctx->pc == 0x3DACF0u) {
        ctx->pc = 0x3DACF0u;
            // 0x3dacf0: 0xe601007c  swc1        $f1, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->pc = 0x3DACF4u;
        goto label_3dacf4;
    }
    ctx->pc = 0x3DACECu;
    {
        const bool branch_taken_0x3dacec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DACF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DACECu;
            // 0x3dacf0: 0xe601007c  swc1        $f1, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dacec) {
            ctx->pc = 0x3DAD9Cu;
            goto label_3dad9c;
        }
    }
    ctx->pc = 0x3DACF4u;
label_3dacf4:
    // 0x3dacf4: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x3dacf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3dacf8:
    // 0x3dacf8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dacfc:
    // 0x3dacfc: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3dacfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_3dad00:
    // 0x3dad00: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3dad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3dad04:
    // 0x3dad04: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3dad04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3dad08:
    // 0x3dad08: 0xc08bf20  jal         func_22FC80
label_3dad0c:
    if (ctx->pc == 0x3DAD0Cu) {
        ctx->pc = 0x3DAD0Cu;
            // 0x3dad0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DAD10u;
        goto label_3dad10;
    }
    ctx->pc = 0x3DAD08u;
    SET_GPR_U32(ctx, 31, 0x3DAD10u);
    ctx->pc = 0x3DAD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAD08u;
            // 0x3dad0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAD10u; }
        if (ctx->pc != 0x3DAD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAD10u; }
        if (ctx->pc != 0x3DAD10u) { return; }
    }
    ctx->pc = 0x3DAD10u;
label_3dad10:
    // 0x3dad10: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3dad10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3dad14:
    // 0x3dad14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3dad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dad18:
    // 0x3dad18: 0xae04007c  sw          $a0, 0x7C($s0)
    ctx->pc = 0x3dad18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 4));
label_3dad1c:
    // 0x3dad1c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3dad20:
    if (ctx->pc == 0x3DAD20u) {
        ctx->pc = 0x3DAD20u;
            // 0x3dad20: 0xae030070  sw          $v1, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x3DAD24u;
        goto label_3dad24;
    }
    ctx->pc = 0x3DAD1Cu;
    {
        const bool branch_taken_0x3dad1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAD1Cu;
            // 0x3dad20: 0xae030070  sw          $v1, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad1c) {
            ctx->pc = 0x3DAD9Cu;
            goto label_3dad9c;
        }
    }
    ctx->pc = 0x3DAD24u;
label_3dad24:
    // 0x3dad24: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x3dad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dad28:
    // 0x3dad28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3dad28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3dad2c:
    // 0x3dad2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3dad2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dad30:
    // 0x3dad30: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3dad30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3dad34:
    // 0x3dad34: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3dad34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3dad38:
    // 0x3dad38: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x3dad38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_3dad3c:
    // 0x3dad3c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3dad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3dad40:
    // 0x3dad40: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x3dad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dad44:
    // 0x3dad44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3dad44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dad48:
    // 0x3dad48: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3dad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dad4c:
    // 0x3dad4c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3dad4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3dad50:
    // 0x3dad50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3dad50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dad54:
    // 0x3dad54: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_3dad58:
    if (ctx->pc == 0x3DAD58u) {
        ctx->pc = 0x3DAD58u;
            // 0x3dad58: 0xe601007c  swc1        $f1, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->pc = 0x3DAD5Cu;
        goto label_3dad5c;
    }
    ctx->pc = 0x3DAD54u;
    {
        const bool branch_taken_0x3dad54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DAD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAD54u;
            // 0x3dad58: 0xe601007c  swc1        $f1, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad54) {
            ctx->pc = 0x3DAD9Cu;
            goto label_3dad9c;
        }
    }
    ctx->pc = 0x3DAD5Cu;
label_3dad5c:
    // 0x3dad5c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x3dad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_3dad60:
    // 0x3dad60: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x3dad60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_3dad64:
    // 0x3dad64: 0x1000000d  b           . + 4 + (0xD << 2)
label_3dad68:
    if (ctx->pc == 0x3DAD68u) {
        ctx->pc = 0x3DAD68u;
            // 0x3dad68: 0xae040070  sw          $a0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
        ctx->pc = 0x3DAD6Cu;
        goto label_3dad6c;
    }
    ctx->pc = 0x3DAD64u;
    {
        const bool branch_taken_0x3dad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAD64u;
            // 0x3dad68: 0xae040070  sw          $a0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad64) {
            ctx->pc = 0x3DAD9Cu;
            goto label_3dad9c;
        }
    }
    ctx->pc = 0x3DAD6Cu;
label_3dad6c:
    // 0x3dad6c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3dad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3dad70:
    // 0x3dad70: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3dad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3dad74:
    // 0x3dad74: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x3dad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dad78:
    // 0x3dad78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3dad78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dad7c:
    // 0x3dad7c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3dad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dad80:
    // 0x3dad80: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3dad80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3dad84:
    // 0x3dad84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3dad84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dad88:
    // 0x3dad88: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3dad8c:
    if (ctx->pc == 0x3DAD8Cu) {
        ctx->pc = 0x3DAD8Cu;
            // 0x3dad8c: 0xe601007c  swc1        $f1, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->pc = 0x3DAD90u;
        goto label_3dad90;
    }
    ctx->pc = 0x3DAD88u;
    {
        const bool branch_taken_0x3dad88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DAD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAD88u;
            // 0x3dad8c: 0xe601007c  swc1        $f1, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad88) {
            ctx->pc = 0x3DAD9Cu;
            goto label_3dad9c;
        }
    }
    ctx->pc = 0x3DAD90u;
label_3dad90:
    // 0x3dad90: 0xc0d37dc  jal         func_34DF70
label_3dad94:
    if (ctx->pc == 0x3DAD94u) {
        ctx->pc = 0x3DAD94u;
            // 0x3dad94: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x3DAD98u;
        goto label_3dad98;
    }
    ctx->pc = 0x3DAD90u;
    SET_GPR_U32(ctx, 31, 0x3DAD98u);
    ctx->pc = 0x3DAD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAD90u;
            // 0x3dad94: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAD98u; }
        if (ctx->pc != 0x3DAD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAD98u; }
        if (ctx->pc != 0x3DAD98u) { return; }
    }
    ctx->pc = 0x3DAD98u;
label_3dad98:
    // 0x3dad98: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3dad98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_3dad9c:
    // 0x3dad9c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3dad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3dada0:
    // 0x3dada0: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x3dada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dada4:
    // 0x3dada4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3dada4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3dada8:
    // 0x3dada8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3dada8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3dadac:
    // 0x3dadac: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x3dadacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dadb0:
    // 0x3dadb0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3dadb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3dadb4:
    // 0x3dadb4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3dadb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dadb8:
    // 0x3dadb8: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x3dadb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_3dadbc:
    // 0x3dadbc: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x3dadbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_3dadc0:
    // 0x3dadc0: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x3dadc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dadc4:
    // 0x3dadc4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x3dadc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dadc8:
    // 0x3dadc8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_3dadcc:
    if (ctx->pc == 0x3DADCCu) {
        ctx->pc = 0x3DADD0u;
        goto label_3dadd0;
    }
    ctx->pc = 0x3DADC8u;
    {
        const bool branch_taken_0x3dadc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dadc8) {
            ctx->pc = 0x3DADF0u;
            goto label_3dadf0;
        }
    }
    ctx->pc = 0x3DADD0u;
label_3dadd0:
    // 0x3dadd0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3dadd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3dadd4:
    // 0x3dadd4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3dadd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3dadd8:
    // 0x3dadd8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3dadd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3daddc:
    // 0x3daddc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3daddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3dade0:
    // 0x3dade0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3dade0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dade4:
    // 0x3dade4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3dade8:
    if (ctx->pc == 0x3DADE8u) {
        ctx->pc = 0x3DADE8u;
            // 0x3dade8: 0xe6000080  swc1        $f0, 0x80($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->pc = 0x3DADECu;
        goto label_3dadec;
    }
    ctx->pc = 0x3DADE4u;
    {
        const bool branch_taken_0x3dade4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DADE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DADE4u;
            // 0x3dade8: 0xe6000080  swc1        $f0, 0x80($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dade4) {
            ctx->pc = 0x3DADF0u;
            goto label_3dadf0;
        }
    }
    ctx->pc = 0x3DADECu;
label_3dadec:
    // 0x3dadec: 0xe6020080  swc1        $f2, 0x80($s0)
    ctx->pc = 0x3dadecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_3dadf0:
    // 0x3dadf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dadf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3dadf4:
    // 0x3dadf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dadf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dadf8:
    // 0x3dadf8: 0x3e00008  jr          $ra
label_3dadfc:
    if (ctx->pc == 0x3DADFCu) {
        ctx->pc = 0x3DADFCu;
            // 0x3dadfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3DAE00u;
        goto label_3dae00;
    }
    ctx->pc = 0x3DADF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DADF8u;
            // 0x3dadfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DAE00u;
label_3dae00:
    // 0x3dae00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3dae04:
    // 0x3dae04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dae08:
    // 0x3dae08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dae0c:
    // 0x3dae0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dae10:
    // 0x3dae10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3dae10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dae14:
    // 0x3dae14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dae18:
    // 0x3dae18: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3dae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dae1c:
    // 0x3dae1c: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x3dae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_3dae20:
    // 0x3dae20: 0x721826  xor         $v1, $v1, $s2
    ctx->pc = 0x3dae20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 18));
label_3dae24:
    // 0x3dae24: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3dae24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3dae28:
    // 0x3dae28: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3dae2c:
    if (ctx->pc == 0x3DAE2Cu) {
        ctx->pc = 0x3DAE30u;
        goto label_3dae30;
    }
    ctx->pc = 0x3DAE28u;
    {
        const bool branch_taken_0x3dae28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dae28) {
            ctx->pc = 0x3DAE4Cu;
            goto label_3dae4c;
        }
    }
    ctx->pc = 0x3DAE30u;
label_3dae30:
    // 0x3dae30: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x3dae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dae34:
    // 0x3dae34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3dae34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dae38:
    // 0x3dae38: 0x0  nop
    ctx->pc = 0x3dae38u;
    // NOP
label_3dae3c:
    // 0x3dae3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3dae3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dae40:
    // 0x3dae40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3dae44:
    if (ctx->pc == 0x3DAE44u) {
        ctx->pc = 0x3DAE44u;
            // 0x3dae44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DAE48u;
        goto label_3dae48;
    }
    ctx->pc = 0x3DAE40u;
    {
        const bool branch_taken_0x3dae40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DAE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAE40u;
            // 0x3dae44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae40) {
            ctx->pc = 0x3DAE4Cu;
            goto label_3dae4c;
        }
    }
    ctx->pc = 0x3DAE48u;
label_3dae48:
    // 0x3dae48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3dae48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dae4c:
    // 0x3dae4c: 0x546000f6  bnel        $v1, $zero, . + 4 + (0xF6 << 2)
label_3dae50:
    if (ctx->pc == 0x3DAE50u) {
        ctx->pc = 0x3DAE50u;
            // 0x3dae50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3DAE54u;
        goto label_3dae54;
    }
    ctx->pc = 0x3DAE4Cu;
    {
        const bool branch_taken_0x3dae4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dae4c) {
            ctx->pc = 0x3DAE50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAE4Cu;
            // 0x3dae50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB228u;
            goto label_3db228;
        }
    }
    ctx->pc = 0x3DAE54u;
label_3dae54:
    // 0x3dae54: 0x8e440a6c  lw          $a0, 0xA6C($s2)
    ctx->pc = 0x3dae54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2668)));
label_3dae58:
    // 0x3dae58: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3dae58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dae5c:
    // 0x3dae5c: 0x108800da  beq         $a0, $t0, . + 4 + (0xDA << 2)
label_3dae60:
    if (ctx->pc == 0x3DAE60u) {
        ctx->pc = 0x3DAE60u;
            // 0x3dae60: 0x26500a50  addiu       $s0, $s2, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
        ctx->pc = 0x3DAE64u;
        goto label_3dae64;
    }
    ctx->pc = 0x3DAE5Cu;
    {
        const bool branch_taken_0x3dae5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x3DAE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAE5Cu;
            // 0x3dae60: 0x26500a50  addiu       $s0, $s2, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae5c) {
            ctx->pc = 0x3DB1C8u;
            goto label_3db1c8;
        }
    }
    ctx->pc = 0x3DAE64u;
label_3dae64:
    // 0x3dae64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3dae64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dae68:
    // 0x3dae68: 0x508500d8  beql        $a0, $a1, . + 4 + (0xD8 << 2)
label_3dae6c:
    if (ctx->pc == 0x3DAE6Cu) {
        ctx->pc = 0x3DAE6Cu;
            // 0x3dae6c: 0x8e430d70  lw          $v1, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x3DAE70u;
        goto label_3dae70;
    }
    ctx->pc = 0x3DAE68u;
    {
        const bool branch_taken_0x3dae68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x3dae68) {
            ctx->pc = 0x3DAE6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAE68u;
            // 0x3dae6c: 0x8e430d70  lw          $v1, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB1CCu;
            goto label_3db1cc;
        }
    }
    ctx->pc = 0x3DAE70u;
label_3dae70:
    // 0x3dae70: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3dae70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dae74:
    // 0x3dae74: 0x108700d4  beq         $a0, $a3, . + 4 + (0xD4 << 2)
label_3dae78:
    if (ctx->pc == 0x3DAE78u) {
        ctx->pc = 0x3DAE7Cu;
        goto label_3dae7c;
    }
    ctx->pc = 0x3DAE74u;
    {
        const bool branch_taken_0x3dae74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x3dae74) {
            ctx->pc = 0x3DB1C8u;
            goto label_3db1c8;
        }
    }
    ctx->pc = 0x3DAE7Cu;
label_3dae7c:
    // 0x3dae7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dae80:
    // 0x3dae80: 0x508300b7  beql        $a0, $v1, . + 4 + (0xB7 << 2)
label_3dae84:
    if (ctx->pc == 0x3DAE84u) {
        ctx->pc = 0x3DAE84u;
            // 0x3dae84: 0x8e430d70  lw          $v1, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x3DAE88u;
        goto label_3dae88;
    }
    ctx->pc = 0x3DAE80u;
    {
        const bool branch_taken_0x3dae80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dae80) {
            ctx->pc = 0x3DAE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAE80u;
            // 0x3dae84: 0x8e430d70  lw          $v1, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB160u;
            goto label_3db160;
        }
    }
    ctx->pc = 0x3DAE88u;
label_3dae88:
    // 0x3dae88: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3dae8c:
    if (ctx->pc == 0x3DAE8Cu) {
        ctx->pc = 0x3DAE8Cu;
            // 0x3dae8c: 0x8e440db0  lw          $a0, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->pc = 0x3DAE90u;
        goto label_3dae90;
    }
    ctx->pc = 0x3DAE88u;
    {
        const bool branch_taken_0x3dae88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dae88) {
            ctx->pc = 0x3DAE8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAE88u;
            // 0x3dae8c: 0x8e440db0  lw          $a0, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DAE9Cu;
            goto label_3dae9c;
        }
    }
    ctx->pc = 0x3DAE90u;
label_3dae90:
    // 0x3dae90: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_3dae94:
    if (ctx->pc == 0x3DAE94u) {
        ctx->pc = 0x3DAE98u;
        goto label_3dae98;
    }
    ctx->pc = 0x3DAE90u;
    {
        const bool branch_taken_0x3dae90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dae90) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DAE98u;
label_3dae98:
    // 0x3dae98: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x3dae98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_3dae9c:
    // 0x3dae9c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3dae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3daea0:
    // 0x3daea0: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
label_3daea4:
    if (ctx->pc == 0x3DAEA4u) {
        ctx->pc = 0x3DAEA4u;
            // 0x3daea4: 0x3c023e6d  lui         $v0, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
        ctx->pc = 0x3DAEA8u;
        goto label_3daea8;
    }
    ctx->pc = 0x3DAEA0u;
    {
        const bool branch_taken_0x3daea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3daea0) {
            ctx->pc = 0x3DAEA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAEA0u;
            // 0x3daea4: 0x3c023e6d  lui         $v0, 0x3E6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DAEE0u;
            goto label_3daee0;
        }
    }
    ctx->pc = 0x3DAEA8u;
label_3daea8:
    // 0x3daea8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3daea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3daeac:
    // 0x3daeac: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_3daeb0:
    if (ctx->pc == 0x3DAEB0u) {
        ctx->pc = 0x3DAEB4u;
        goto label_3daeb4;
    }
    ctx->pc = 0x3DAEACu;
    {
        const bool branch_taken_0x3daeac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3daeac) {
            ctx->pc = 0x3DAEDCu;
            goto label_3daedc;
        }
    }
    ctx->pc = 0x3DAEB4u;
label_3daeb4:
    // 0x3daeb4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3daeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3daeb8:
    // 0x3daeb8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_3daebc:
    if (ctx->pc == 0x3DAEBCu) {
        ctx->pc = 0x3DAEC0u;
        goto label_3daec0;
    }
    ctx->pc = 0x3DAEB8u;
    {
        const bool branch_taken_0x3daeb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3daeb8) {
            ctx->pc = 0x3DAEDCu;
            goto label_3daedc;
        }
    }
    ctx->pc = 0x3DAEC0u;
label_3daec0:
    // 0x3daec0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3daec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3daec4:
    // 0x3daec4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_3daec8:
    if (ctx->pc == 0x3DAEC8u) {
        ctx->pc = 0x3DAECCu;
        goto label_3daecc;
    }
    ctx->pc = 0x3DAEC4u;
    {
        const bool branch_taken_0x3daec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3daec4) {
            ctx->pc = 0x3DAEDCu;
            goto label_3daedc;
        }
    }
    ctx->pc = 0x3DAECCu;
label_3daecc:
    // 0x3daecc: 0x8e430d70  lw          $v1, 0xD70($s2)
    ctx->pc = 0x3daeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_3daed0:
    // 0x3daed0: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x3daed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3daed4:
    // 0x3daed4: 0x146000d3  bnez        $v1, . + 4 + (0xD3 << 2)
label_3daed8:
    if (ctx->pc == 0x3DAED8u) {
        ctx->pc = 0x3DAEDCu;
        goto label_3daedc;
    }
    ctx->pc = 0x3DAED4u;
    {
        const bool branch_taken_0x3daed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3daed4) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DAEDCu;
label_3daedc:
    // 0x3daedc: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x3daedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_3daee0:
    // 0x3daee0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3daee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3daee4:
    // 0x3daee4: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3daee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3daee8:
    // 0x3daee8: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x3daee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_3daeec:
    // 0x3daeec: 0xc6410de0  lwc1        $f1, 0xDE0($s2)
    ctx->pc = 0x3daeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3daef0:
    // 0x3daef0: 0x24a59c10  addiu       $a1, $a1, -0x63F0
    ctx->pc = 0x3daef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941712));
label_3daef4:
    // 0x3daef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3daef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3daef8:
    // 0x3daef8: 0x0  nop
    ctx->pc = 0x3daef8u;
    // NOP
label_3daefc:
    // 0x3daefc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3daefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3daf00:
    // 0x3daf00: 0xc04cc04  jal         func_133010
label_3daf04:
    if (ctx->pc == 0x3DAF04u) {
        ctx->pc = 0x3DAF04u;
            // 0x3daf04: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x3DAF08u;
        goto label_3daf08;
    }
    ctx->pc = 0x3DAF00u;
    SET_GPR_U32(ctx, 31, 0x3DAF08u);
    ctx->pc = 0x3DAF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAF00u;
            // 0x3daf04: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAF08u; }
        if (ctx->pc != 0x3DAF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAF08u; }
        if (ctx->pc != 0x3DAF08u) { return; }
    }
    ctx->pc = 0x3DAF08u;
label_3daf08:
    // 0x3daf08: 0x8e460d60  lw          $a2, 0xD60($s2)
    ctx->pc = 0x3daf08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_3daf0c:
    // 0x3daf0c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x3daf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_3daf10:
    // 0x3daf10: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x3daf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_3daf14:
    // 0x3daf14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3daf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3daf18:
    // 0x3daf18: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x3daf18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
label_3daf1c:
    // 0x3daf1c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3daf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_3daf20:
    // 0x3daf20: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x3daf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_3daf24:
    // 0x3daf24: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3daf24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3daf28:
    // 0x3daf28: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3daf28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3daf2c:
    // 0x3daf2c: 0x320f809  jalr        $t9
label_3daf30:
    if (ctx->pc == 0x3DAF30u) {
        ctx->pc = 0x3DAF30u;
            // 0x3daf30: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3DAF34u;
        goto label_3daf34;
    }
    ctx->pc = 0x3DAF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DAF34u);
        ctx->pc = 0x3DAF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAF2Cu;
            // 0x3daf30: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DAF34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DAF34u; }
            if (ctx->pc != 0x3DAF34u) { return; }
        }
        }
    }
    ctx->pc = 0x3DAF34u;
label_3daf34:
    // 0x3daf34: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x3daf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_3daf38:
    // 0x3daf38: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3daf38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3daf3c:
    // 0x3daf3c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3daf3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3daf40:
    // 0x3daf40: 0x320f809  jalr        $t9
label_3daf44:
    if (ctx->pc == 0x3DAF44u) {
        ctx->pc = 0x3DAF44u;
            // 0x3daf44: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x3DAF48u;
        goto label_3daf48;
    }
    ctx->pc = 0x3DAF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DAF48u);
        ctx->pc = 0x3DAF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAF40u;
            // 0x3daf44: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DAF48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DAF48u; }
            if (ctx->pc != 0x3DAF48u) { return; }
        }
        }
    }
    ctx->pc = 0x3DAF48u;
label_3daf48:
    // 0x3daf48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3daf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3daf4c:
    // 0x3daf4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3daf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3daf50:
    // 0x3daf50: 0xc07649c  jal         func_1D9270
label_3daf54:
    if (ctx->pc == 0x3DAF54u) {
        ctx->pc = 0x3DAF54u;
            // 0x3daf54: 0xae40068c  sw          $zero, 0x68C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 0));
        ctx->pc = 0x3DAF58u;
        goto label_3daf58;
    }
    ctx->pc = 0x3DAF50u;
    SET_GPR_U32(ctx, 31, 0x3DAF58u);
    ctx->pc = 0x3DAF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAF50u;
            // 0x3daf54: 0xae40068c  sw          $zero, 0x68C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAF58u; }
        if (ctx->pc != 0x3DAF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAF58u; }
        if (ctx->pc != 0x3DAF58u) { return; }
    }
    ctx->pc = 0x3DAF58u;
label_3daf58:
    // 0x3daf58: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x3daf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_3daf5c:
    // 0x3daf5c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3daf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3daf60:
    // 0x3daf60: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_3daf64:
    if (ctx->pc == 0x3DAF64u) {
        ctx->pc = 0x3DAF64u;
            // 0x3daf64: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->pc = 0x3DAF68u;
        goto label_3daf68;
    }
    ctx->pc = 0x3DAF60u;
    {
        const bool branch_taken_0x3daf60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3daf60) {
            ctx->pc = 0x3DAF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAF60u;
            // 0x3daf64: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DAF80u;
            goto label_3daf80;
        }
    }
    ctx->pc = 0x3DAF68u;
label_3daf68:
    // 0x3daf68: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3daf68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3daf6c:
    // 0x3daf6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3daf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3daf70:
    // 0x3daf70: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3daf70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3daf74:
    // 0x3daf74: 0x320f809  jalr        $t9
label_3daf78:
    if (ctx->pc == 0x3DAF78u) {
        ctx->pc = 0x3DAF78u;
            // 0x3daf78: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3DAF7Cu;
        goto label_3daf7c;
    }
    ctx->pc = 0x3DAF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DAF7Cu);
        ctx->pc = 0x3DAF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAF74u;
            // 0x3daf78: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DAF7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DAF7Cu; }
            if (ctx->pc != 0x3DAF7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3DAF7Cu;
label_3daf7c:
    // 0x3daf7c: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x3daf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_3daf80:
    // 0x3daf80: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3daf80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3daf84:
    // 0x3daf84: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
label_3daf88:
    if (ctx->pc == 0x3DAF88u) {
        ctx->pc = 0x3DAF88u;
            // 0x3daf88: 0x8e430d70  lw          $v1, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x3DAF8Cu;
        goto label_3daf8c;
    }
    ctx->pc = 0x3DAF84u;
    {
        const bool branch_taken_0x3daf84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3daf84) {
            ctx->pc = 0x3DAF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAF84u;
            // 0x3daf88: 0x8e430d70  lw          $v1, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DAFB0u;
            goto label_3dafb0;
        }
    }
    ctx->pc = 0x3DAF8Cu;
label_3daf8c:
    // 0x3daf8c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x3daf8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3daf90:
    // 0x3daf90: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3daf94:
    if (ctx->pc == 0x3DAF94u) {
        ctx->pc = 0x3DAF98u;
        goto label_3daf98;
    }
    ctx->pc = 0x3DAF90u;
    {
        const bool branch_taken_0x3daf90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3daf90) {
            ctx->pc = 0x3DAFACu;
            goto label_3dafac;
        }
    }
    ctx->pc = 0x3DAF98u;
label_3daf98:
    // 0x3daf98: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3daf98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3daf9c:
    // 0x3daf9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3daf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dafa0:
    // 0x3dafa0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3dafa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3dafa4:
    // 0x3dafa4: 0x320f809  jalr        $t9
label_3dafa8:
    if (ctx->pc == 0x3DAFA8u) {
        ctx->pc = 0x3DAFA8u;
            // 0x3dafa8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3DAFACu;
        goto label_3dafac;
    }
    ctx->pc = 0x3DAFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DAFACu);
        ctx->pc = 0x3DAFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAFA4u;
            // 0x3dafa8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DAFACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DAFACu; }
            if (ctx->pc != 0x3DAFACu) { return; }
        }
        }
    }
    ctx->pc = 0x3DAFACu;
label_3dafac:
    // 0x3dafac: 0x8e430d70  lw          $v1, 0xD70($s2)
    ctx->pc = 0x3dafacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_3dafb0:
    // 0x3dafb0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3dafb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dafb4:
    // 0x3dafb4: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x3dafb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3dafb8:
    // 0x3dafb8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3dafb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3dafbc:
    // 0x3dafbc: 0x1468002c  bne         $v1, $t0, . + 4 + (0x2C << 2)
label_3dafc0:
    if (ctx->pc == 0x3DAFC0u) {
        ctx->pc = 0x3DAFC4u;
        goto label_3dafc4;
    }
    ctx->pc = 0x3DAFBCu;
    {
        const bool branch_taken_0x3dafbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x3dafbc) {
            ctx->pc = 0x3DB070u;
            goto label_3db070;
        }
    }
    ctx->pc = 0x3DAFC4u;
label_3dafc4:
    // 0x3dafc4: 0x8e4311d4  lw          $v1, 0x11D4($s2)
    ctx->pc = 0x3dafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
label_3dafc8:
    // 0x3dafc8: 0x602026  xor         $a0, $v1, $zero
    ctx->pc = 0x3dafc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_3dafcc:
    // 0x3dafcc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3dafccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3dafd0:
    // 0x3dafd0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x3dafd0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3dafd4:
    // 0x3dafd4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3dafd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3dafd8:
    // 0x3dafd8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3dafd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3dafdc:
    // 0x3dafdc: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_3dafe0:
    if (ctx->pc == 0x3DAFE0u) {
        ctx->pc = 0x3DAFE4u;
        goto label_3dafe4;
    }
    ctx->pc = 0x3DAFDCu;
    {
        const bool branch_taken_0x3dafdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dafdc) {
            ctx->pc = 0x3DB070u;
            goto label_3db070;
        }
    }
    ctx->pc = 0x3DAFE4u;
label_3dafe4:
    // 0x3dafe4: 0x8e500550  lw          $s0, 0x550($s2)
    ctx->pc = 0x3dafe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_3dafe8:
    // 0x3dafe8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3dafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3dafec:
    // 0x3dafec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3dafecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3daff0:
    // 0x3daff0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3daff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3daff4:
    // 0x3daff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3daff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3daff8:
    // 0x3daff8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3daff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3daffc:
    // 0x3daffc: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x3daffcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3db000:
    // 0x3db000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3db000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db004:
    // 0x3db004: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x3db004u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_3db008:
    // 0x3db008: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3db008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3db00c:
    // 0x3db00c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3db00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3db010:
    // 0x3db010: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3db010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3db014:
    // 0x3db014: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3db014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3db018:
    // 0x3db018: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3db018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3db01c:
    // 0x3db01c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3db01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3db020:
    // 0x3db020: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3db020u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3db024:
    // 0x3db024: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3db024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3db028:
    // 0x3db028: 0x320f809  jalr        $t9
label_3db02c:
    if (ctx->pc == 0x3DB02Cu) {
        ctx->pc = 0x3DB02Cu;
            // 0x3db02c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3DB030u;
        goto label_3db030;
    }
    ctx->pc = 0x3DB028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB030u);
        ctx->pc = 0x3DB02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB028u;
            // 0x3db02c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB030u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB030u; }
            if (ctx->pc != 0x3DB030u) { return; }
        }
        }
    }
    ctx->pc = 0x3DB030u;
label_3db030:
    // 0x3db030: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3db030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3db034:
    // 0x3db034: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3db034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3db038:
    // 0x3db038: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3db038u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3db03c:
    // 0x3db03c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3db03cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db040:
    // 0x3db040: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3db040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3db044:
    // 0x3db044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3db044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db048:
    // 0x3db048: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3db048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3db04c:
    // 0x3db04c: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x3db04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3db050:
    // 0x3db050: 0x320f809  jalr        $t9
label_3db054:
    if (ctx->pc == 0x3DB054u) {
        ctx->pc = 0x3DB054u;
            // 0x3db054: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3DB058u;
        goto label_3db058;
    }
    ctx->pc = 0x3DB050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB058u);
        ctx->pc = 0x3DB054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB050u;
            // 0x3db054: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB058u; }
            if (ctx->pc != 0x3DB058u) { return; }
        }
        }
    }
    ctx->pc = 0x3DB058u;
label_3db058:
    // 0x3db058: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3db058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3db05c:
    // 0x3db05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3db05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db060:
    // 0x3db060: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3db060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3db064:
    // 0x3db064: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3db064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3db068:
    // 0x3db068: 0x320f809  jalr        $t9
label_3db06c:
    if (ctx->pc == 0x3DB06Cu) {
        ctx->pc = 0x3DB06Cu;
            // 0x3db06c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3DB070u;
        goto label_3db070;
    }
    ctx->pc = 0x3DB068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB070u);
        ctx->pc = 0x3DB06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB068u;
            // 0x3db06c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB070u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB070u; }
            if (ctx->pc != 0x3DB070u) { return; }
        }
        }
    }
    ctx->pc = 0x3DB070u;
label_3db070:
    // 0x3db070: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3db070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3db074:
    // 0x3db074: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3db074u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3db078:
    // 0x3db078: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x3db078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3db07c:
    // 0x3db07c: 0x8e430e38  lw          $v1, 0xE38($s2)
    ctx->pc = 0x3db07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_3db080:
    // 0x3db080: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3db084:
    if (ctx->pc == 0x3DB084u) {
        ctx->pc = 0x3DB084u;
            // 0x3db084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB088u;
        goto label_3db088;
    }
    ctx->pc = 0x3DB080u;
    {
        const bool branch_taken_0x3db080 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3DB084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB080u;
            // 0x3db084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db080) {
            ctx->pc = 0x3DB098u;
            goto label_3db098;
        }
    }
    ctx->pc = 0x3DB088u;
label_3db088:
    // 0x3db088: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3db088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3db08c:
    // 0x3db08c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3db090:
    if (ctx->pc == 0x3DB090u) {
        ctx->pc = 0x3DB094u;
        goto label_3db094;
    }
    ctx->pc = 0x3DB08Cu;
    {
        const bool branch_taken_0x3db08c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db08c) {
            ctx->pc = 0x3DB098u;
            goto label_3db098;
        }
    }
    ctx->pc = 0x3DB094u;
label_3db094:
    // 0x3db094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3db094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db098:
    // 0x3db098: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3db09c:
    if (ctx->pc == 0x3DB09Cu) {
        ctx->pc = 0x3DB0A0u;
        goto label_3db0a0;
    }
    ctx->pc = 0x3DB098u;
    {
        const bool branch_taken_0x3db098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3db098) {
            ctx->pc = 0x3DB0B4u;
            goto label_3db0b4;
        }
    }
    ctx->pc = 0x3DB0A0u;
label_3db0a0:
    // 0x3db0a0: 0xc075eb4  jal         func_1D7AD0
label_3db0a4:
    if (ctx->pc == 0x3DB0A4u) {
        ctx->pc = 0x3DB0A4u;
            // 0x3db0a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB0A8u;
        goto label_3db0a8;
    }
    ctx->pc = 0x3DB0A0u;
    SET_GPR_U32(ctx, 31, 0x3DB0A8u);
    ctx->pc = 0x3DB0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB0A0u;
            // 0x3db0a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB0A8u; }
        if (ctx->pc != 0x3DB0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB0A8u; }
        if (ctx->pc != 0x3DB0A8u) { return; }
    }
    ctx->pc = 0x3DB0A8u;
label_3db0a8:
    // 0x3db0a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3db0ac:
    if (ctx->pc == 0x3DB0ACu) {
        ctx->pc = 0x3DB0B0u;
        goto label_3db0b0;
    }
    ctx->pc = 0x3DB0A8u;
    {
        const bool branch_taken_0x3db0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3db0a8) {
            ctx->pc = 0x3DB0B4u;
            goto label_3db0b4;
        }
    }
    ctx->pc = 0x3DB0B0u;
label_3db0b0:
    // 0x3db0b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3db0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3db0b4:
    // 0x3db0b4: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
label_3db0b8:
    if (ctx->pc == 0x3DB0B8u) {
        ctx->pc = 0x3DB0BCu;
        goto label_3db0bc;
    }
    ctx->pc = 0x3DB0B4u;
    {
        const bool branch_taken_0x3db0b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db0b4) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB0BCu;
label_3db0bc:
    // 0x3db0bc: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x3db0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3db0c0:
    // 0x3db0c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3db0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3db0c4:
    // 0x3db0c4: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
label_3db0c8:
    if (ctx->pc == 0x3DB0C8u) {
        ctx->pc = 0x3DB0CCu;
        goto label_3db0cc;
    }
    ctx->pc = 0x3DB0C4u;
    {
        const bool branch_taken_0x3db0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3db0c4) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB0CCu;
label_3db0cc:
    // 0x3db0cc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3db0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3db0d0:
    // 0x3db0d0: 0x8e450d98  lw          $a1, 0xD98($s2)
    ctx->pc = 0x3db0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_3db0d4:
    // 0x3db0d4: 0x90643db0  lbu         $a0, 0x3DB0($v1)
    ctx->pc = 0x3db0d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15792)));
label_3db0d8:
    // 0x3db0d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3db0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3db0dc:
    // 0x3db0dc: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x3db0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_3db0e0:
    // 0x3db0e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3db0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3db0e4:
    // 0x3db0e4: 0x1c60004f  bgtz        $v1, . + 4 + (0x4F << 2)
label_3db0e8:
    if (ctx->pc == 0x3DB0E8u) {
        ctx->pc = 0x3DB0ECu;
        goto label_3db0ec;
    }
    ctx->pc = 0x3DB0E4u;
    {
        const bool branch_taken_0x3db0e4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3db0e4) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB0ECu;
label_3db0ec:
    // 0x3db0ec: 0xc040180  jal         func_100600
label_3db0f0:
    if (ctx->pc == 0x3DB0F0u) {
        ctx->pc = 0x3DB0F0u;
            // 0x3db0f0: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x3DB0F4u;
        goto label_3db0f4;
    }
    ctx->pc = 0x3DB0ECu;
    SET_GPR_U32(ctx, 31, 0x3DB0F4u);
    ctx->pc = 0x3DB0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB0ECu;
            // 0x3db0f0: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB0F4u; }
        if (ctx->pc != 0x3DB0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB0F4u; }
        if (ctx->pc != 0x3DB0F4u) { return; }
    }
    ctx->pc = 0x3DB0F4u;
label_3db0f4:
    // 0x3db0f4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3db0f8:
    if (ctx->pc == 0x3DB0F8u) {
        ctx->pc = 0x3DB0F8u;
            // 0x3db0f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB0FCu;
        goto label_3db0fc;
    }
    ctx->pc = 0x3DB0F4u;
    {
        const bool branch_taken_0x3db0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB0F4u;
            // 0x3db0f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db0f4) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB0FCu;
label_3db0fc:
    // 0x3db0fc: 0x260702b8  addiu       $a3, $s0, 0x2B8
    ctx->pc = 0x3db0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
label_3db100:
    // 0x3db100: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3db100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3db104:
    // 0x3db104: 0x8e500d98  lw          $s0, 0xD98($s2)
    ctx->pc = 0x3db104u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_3db108:
    // 0x3db108: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3db108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db10c:
    // 0x3db10c: 0x824911aa  lb          $t1, 0x11AA($s2)
    ctx->pc = 0x3db10cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_3db110:
    // 0x3db110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3db110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db114:
    // 0x3db114: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x3db114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_3db118:
    // 0x3db118: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3db118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3db11c:
    // 0x3db11c: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x3db11cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_3db120:
    // 0x3db120: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x3db120u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db124:
    // 0x3db124: 0xc0b9404  jal         func_2E5010
label_3db128:
    if (ctx->pc == 0x3DB128u) {
        ctx->pc = 0x3DB128u;
            // 0x3db128: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB12Cu;
        goto label_3db12c;
    }
    ctx->pc = 0x3DB124u;
    SET_GPR_U32(ctx, 31, 0x3DB12Cu);
    ctx->pc = 0x3DB128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB124u;
            // 0x3db128: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB12Cu; }
        if (ctx->pc != 0x3DB12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB12Cu; }
        if (ctx->pc != 0x3DB12Cu) { return; }
    }
    ctx->pc = 0x3DB12Cu;
label_3db12c:
    // 0x3db12c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3db12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3db130:
    // 0x3db130: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3db130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3db134:
    // 0x3db134: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x3db134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_3db138:
    // 0x3db138: 0x24844160  addiu       $a0, $a0, 0x4160
    ctx->pc = 0x3db138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16736));
label_3db13c:
    // 0x3db13c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3db13cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3db140:
    // 0x3db140: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3db140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_3db144:
    // 0x3db144: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3db144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3db148:
    // 0x3db148: 0x90643db0  lbu         $a0, 0x3DB0($v1)
    ctx->pc = 0x3db148u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15792)));
label_3db14c:
    // 0x3db14c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3db14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3db150:
    // 0x3db150: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3db150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_3db154:
    // 0x3db154: 0x10000033  b           . + 4 + (0x33 << 2)
label_3db158:
    if (ctx->pc == 0x3DB158u) {
        ctx->pc = 0x3DB158u;
            // 0x3db158: 0xa0643db0  sb          $a0, 0x3DB0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 15792), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3DB15Cu;
        goto label_3db15c;
    }
    ctx->pc = 0x3DB154u;
    {
        const bool branch_taken_0x3db154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB154u;
            // 0x3db158: 0xa0643db0  sb          $a0, 0x3DB0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 15792), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db154) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB15Cu;
label_3db15c:
    // 0x3db15c: 0x8e430d70  lw          $v1, 0xD70($s2)
    ctx->pc = 0x3db15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_3db160:
    // 0x3db160: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x3db160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3db164:
    // 0x3db164: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_3db168:
    if (ctx->pc == 0x3DB168u) {
        ctx->pc = 0x3DB16Cu;
        goto label_3db16c;
    }
    ctx->pc = 0x3DB164u;
    {
        const bool branch_taken_0x3db164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db164) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB16Cu;
label_3db16c:
    // 0x3db16c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3db16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3db170:
    // 0x3db170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3db170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3db174:
    // 0x3db174: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3db174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3db178:
    // 0x3db178: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3db178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3db17c:
    // 0x3db17c: 0x8c8601a8  lw          $a2, 0x1A8($a0)
    ctx->pc = 0x3db17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
label_3db180:
    // 0x3db180: 0x10c80028  beq         $a2, $t0, . + 4 + (0x28 << 2)
label_3db184:
    if (ctx->pc == 0x3DB184u) {
        ctx->pc = 0x3DB188u;
        goto label_3db188;
    }
    ctx->pc = 0x3DB180u;
    {
        const bool branch_taken_0x3db180 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x3db180) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB188u;
label_3db188:
    // 0x3db188: 0x10c70026  beq         $a2, $a3, . + 4 + (0x26 << 2)
label_3db18c:
    if (ctx->pc == 0x3DB18Cu) {
        ctx->pc = 0x3DB190u;
        goto label_3db190;
    }
    ctx->pc = 0x3DB188u;
    {
        const bool branch_taken_0x3db188 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x3db188) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB190u;
label_3db190:
    // 0x3db190: 0x10c50024  beq         $a2, $a1, . + 4 + (0x24 << 2)
label_3db194:
    if (ctx->pc == 0x3DB194u) {
        ctx->pc = 0x3DB198u;
        goto label_3db198;
    }
    ctx->pc = 0x3DB190u;
    {
        const bool branch_taken_0x3db190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3db190) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB198u;
label_3db198:
    // 0x3db198: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3db198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3db19c:
    // 0x3db19c: 0x10c30021  beq         $a2, $v1, . + 4 + (0x21 << 2)
label_3db1a0:
    if (ctx->pc == 0x3DB1A0u) {
        ctx->pc = 0x3DB1A4u;
        goto label_3db1a4;
    }
    ctx->pc = 0x3DB19Cu;
    {
        const bool branch_taken_0x3db19c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3db19c) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB1A4u;
label_3db1a4:
    // 0x3db1a4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3db1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3db1a8:
    // 0x3db1a8: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_3db1ac:
    if (ctx->pc == 0x3DB1ACu) {
        ctx->pc = 0x3DB1B0u;
        goto label_3db1b0;
    }
    ctx->pc = 0x3DB1A8u;
    {
        const bool branch_taken_0x3db1a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x3db1a8) {
            ctx->pc = 0x3DB1B8u;
            goto label_3db1b8;
        }
    }
    ctx->pc = 0x3DB1B0u;
label_3db1b0:
    // 0x3db1b0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3db1b4:
    if (ctx->pc == 0x3DB1B4u) {
        ctx->pc = 0x3DB1B8u;
        goto label_3db1b8;
    }
    ctx->pc = 0x3DB1B0u;
    {
        const bool branch_taken_0x3db1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db1b0) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB1B8u;
label_3db1b8:
    // 0x3db1b8: 0xc0f0f84  jal         func_3C3E10
label_3db1bc:
    if (ctx->pc == 0x3DB1BCu) {
        ctx->pc = 0x3DB1C0u;
        goto label_3db1c0;
    }
    ctx->pc = 0x3DB1B8u;
    SET_GPR_U32(ctx, 31, 0x3DB1C0u);
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB1C0u; }
        if (ctx->pc != 0x3DB1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB1C0u; }
        if (ctx->pc != 0x3DB1C0u) { return; }
    }
    ctx->pc = 0x3DB1C0u;
label_3db1c0:
    // 0x3db1c0: 0x10000018  b           . + 4 + (0x18 << 2)
label_3db1c4:
    if (ctx->pc == 0x3DB1C4u) {
        ctx->pc = 0x3DB1C8u;
        goto label_3db1c8;
    }
    ctx->pc = 0x3DB1C0u;
    {
        const bool branch_taken_0x3db1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db1c0) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB1C8u;
label_3db1c8:
    // 0x3db1c8: 0x8e430d70  lw          $v1, 0xD70($s2)
    ctx->pc = 0x3db1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_3db1cc:
    // 0x3db1cc: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x3db1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3db1d0:
    // 0x3db1d0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_3db1d4:
    if (ctx->pc == 0x3DB1D4u) {
        ctx->pc = 0x3DB1D8u;
        goto label_3db1d8;
    }
    ctx->pc = 0x3DB1D0u;
    {
        const bool branch_taken_0x3db1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db1d0) {
            ctx->pc = 0x3DB224u;
            goto label_3db224;
        }
    }
    ctx->pc = 0x3DB1D8u;
label_3db1d8:
    // 0x3db1d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3db1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3db1dc:
    // 0x3db1dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3db1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3db1e0:
    // 0x3db1e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3db1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3db1e4:
    // 0x3db1e4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3db1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3db1e8:
    // 0x3db1e8: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x3db1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3db1ec:
    // 0x3db1ec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3db1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3db1f0:
    // 0x3db1f0: 0x320f809  jalr        $t9
label_3db1f4:
    if (ctx->pc == 0x3DB1F4u) {
        ctx->pc = 0x3DB1F8u;
        goto label_3db1f8;
    }
    ctx->pc = 0x3DB1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB1F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB1F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB1F8u; }
            if (ctx->pc != 0x3DB1F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3DB1F8u;
label_3db1f8:
    // 0x3db1f8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3db1f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3db1fc:
    // 0x3db1fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3db200:
    // 0x3db200: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3db200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3db204:
    // 0x3db204: 0x320f809  jalr        $t9
label_3db208:
    if (ctx->pc == 0x3DB208u) {
        ctx->pc = 0x3DB208u;
            // 0x3db208: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x3DB20Cu;
        goto label_3db20c;
    }
    ctx->pc = 0x3DB204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB20Cu);
        ctx->pc = 0x3DB208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB204u;
            // 0x3db208: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB20Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB20Cu; }
            if (ctx->pc != 0x3DB20Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3DB20Cu;
label_3db20c:
    // 0x3db20c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3db20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3db210:
    // 0x3db210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3db210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3db214:
    // 0x3db214: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3db214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3db218:
    // 0x3db218: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3db218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3db21c:
    // 0x3db21c: 0xc0f0f84  jal         func_3C3E10
label_3db220:
    if (ctx->pc == 0x3DB220u) {
        ctx->pc = 0x3DB220u;
            // 0x3db220: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3DB224u;
        goto label_3db224;
    }
    ctx->pc = 0x3DB21Cu;
    SET_GPR_U32(ctx, 31, 0x3DB224u);
    ctx->pc = 0x3DB220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB21Cu;
            // 0x3db220: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB224u; }
        if (ctx->pc != 0x3DB224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB224u; }
        if (ctx->pc != 0x3DB224u) { return; }
    }
    ctx->pc = 0x3DB224u;
label_3db224:
    // 0x3db224: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3db224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3db228:
    // 0x3db228: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3db228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3db22c:
    // 0x3db22c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3db230:
    // 0x3db230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3db234:
    // 0x3db234: 0x3e00008  jr          $ra
label_3db238:
    if (ctx->pc == 0x3DB238u) {
        ctx->pc = 0x3DB238u;
            // 0x3db238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3DB23Cu;
        goto label_3db23c;
    }
    ctx->pc = 0x3DB234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB234u;
            // 0x3db238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DB23Cu;
label_3db23c:
    // 0x3db23c: 0x0  nop
    ctx->pc = 0x3db23cu;
    // NOP
label_3db240:
    // 0x3db240: 0x3e00008  jr          $ra
label_3db244:
    if (ctx->pc == 0x3DB244u) {
        ctx->pc = 0x3DB244u;
            // 0x3db244: 0x24020866  addiu       $v0, $zero, 0x866 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2150));
        ctx->pc = 0x3DB248u;
        goto label_3db248;
    }
    ctx->pc = 0x3DB240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB240u;
            // 0x3db244: 0x24020866  addiu       $v0, $zero, 0x866 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2150));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DB248u;
label_3db248:
    // 0x3db248: 0x0  nop
    ctx->pc = 0x3db248u;
    // NOP
label_3db24c:
    // 0x3db24c: 0x0  nop
    ctx->pc = 0x3db24cu;
    // NOP
label_3db250:
    // 0x3db250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3db250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3db254:
    // 0x3db254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3db254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3db258:
    // 0x3db258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3db258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3db25c:
    // 0x3db25c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3db25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3db260:
    // 0x3db260: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3db264:
    if (ctx->pc == 0x3DB264u) {
        ctx->pc = 0x3DB264u;
            // 0x3db264: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB268u;
        goto label_3db268;
    }
    ctx->pc = 0x3DB260u;
    {
        const bool branch_taken_0x3db260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB260u;
            // 0x3db264: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db260) {
            ctx->pc = 0x3DB380u;
            goto label_3db380;
        }
    }
    ctx->pc = 0x3DB268u;
label_3db268:
    // 0x3db268: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3db268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3db26c:
    // 0x3db26c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3db26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3db270:
    // 0x3db270: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3db270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3db274:
    // 0x3db274: 0xc075128  jal         func_1D44A0
label_3db278:
    if (ctx->pc == 0x3DB278u) {
        ctx->pc = 0x3DB278u;
            // 0x3db278: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3DB27Cu;
        goto label_3db27c;
    }
    ctx->pc = 0x3DB274u;
    SET_GPR_U32(ctx, 31, 0x3DB27Cu);
    ctx->pc = 0x3DB278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB274u;
            // 0x3db278: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB27Cu; }
        if (ctx->pc != 0x3DB27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB27Cu; }
        if (ctx->pc != 0x3DB27Cu) { return; }
    }
    ctx->pc = 0x3DB27Cu;
label_3db27c:
    // 0x3db27c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3db27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3db280:
    // 0x3db280: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3db280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3db284:
    // 0x3db284: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3db284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3db288:
    // 0x3db288: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3db288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3db28c:
    // 0x3db28c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3db28cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3db290:
    // 0x3db290: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3db294:
    if (ctx->pc == 0x3DB294u) {
        ctx->pc = 0x3DB294u;
            // 0x3db294: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3DB298u;
        goto label_3db298;
    }
    ctx->pc = 0x3DB290u;
    {
        const bool branch_taken_0x3db290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB290u;
            // 0x3db294: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db290) {
            ctx->pc = 0x3DB2A0u;
            goto label_3db2a0;
        }
    }
    ctx->pc = 0x3DB298u;
label_3db298:
    // 0x3db298: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3db298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3db29c:
    // 0x3db29c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3db29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3db2a0:
    // 0x3db2a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3db2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3db2a4:
    // 0x3db2a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3db2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3db2a8:
    // 0x3db2a8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3db2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3db2ac:
    // 0x3db2ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3db2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3db2b0:
    // 0x3db2b0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3db2b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3db2b4:
    // 0x3db2b4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3db2b8:
    if (ctx->pc == 0x3DB2B8u) {
        ctx->pc = 0x3DB2B8u;
            // 0x3db2b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3DB2BCu;
        goto label_3db2bc;
    }
    ctx->pc = 0x3DB2B4u;
    {
        const bool branch_taken_0x3db2b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db2b4) {
            ctx->pc = 0x3DB2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB2B4u;
            // 0x3db2b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB2C8u;
            goto label_3db2c8;
        }
    }
    ctx->pc = 0x3DB2BCu;
label_3db2bc:
    // 0x3db2bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3db2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3db2c0:
    // 0x3db2c0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3db2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3db2c4:
    // 0x3db2c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3db2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3db2c8:
    // 0x3db2c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3db2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3db2cc:
    // 0x3db2cc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3db2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3db2d0:
    // 0x3db2d0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3db2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3db2d4:
    // 0x3db2d4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3db2d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3db2d8:
    // 0x3db2d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3db2dc:
    if (ctx->pc == 0x3DB2DCu) {
        ctx->pc = 0x3DB2DCu;
            // 0x3db2dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3DB2E0u;
        goto label_3db2e0;
    }
    ctx->pc = 0x3DB2D8u;
    {
        const bool branch_taken_0x3db2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db2d8) {
            ctx->pc = 0x3DB2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB2D8u;
            // 0x3db2dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB2ECu;
            goto label_3db2ec;
        }
    }
    ctx->pc = 0x3DB2E0u;
label_3db2e0:
    // 0x3db2e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3db2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3db2e4:
    // 0x3db2e4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3db2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3db2e8:
    // 0x3db2e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3db2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3db2ec:
    // 0x3db2ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3db2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3db2f0:
    // 0x3db2f0: 0x320f809  jalr        $t9
label_3db2f4:
    if (ctx->pc == 0x3DB2F4u) {
        ctx->pc = 0x3DB2F4u;
            // 0x3db2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB2F8u;
        goto label_3db2f8;
    }
    ctx->pc = 0x3DB2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DB2F8u);
        ctx->pc = 0x3DB2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB2F0u;
            // 0x3db2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DB2F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DB2F8u; }
            if (ctx->pc != 0x3DB2F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3DB2F8u;
label_3db2f8:
    // 0x3db2f8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3db2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3db2fc:
    // 0x3db2fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3db2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3db300:
    // 0x3db300: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3db300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3db304:
    // 0x3db304: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3db304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3db308:
    // 0x3db308: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3db308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3db30c:
    // 0x3db30c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3db30cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3db310:
    // 0x3db310: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3db314:
    if (ctx->pc == 0x3DB314u) {
        ctx->pc = 0x3DB314u;
            // 0x3db314: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x3DB318u;
        goto label_3db318;
    }
    ctx->pc = 0x3DB310u;
    {
        const bool branch_taken_0x3db310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db310) {
            ctx->pc = 0x3DB314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB310u;
            // 0x3db314: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB324u;
            goto label_3db324;
        }
    }
    ctx->pc = 0x3DB318u;
label_3db318:
    // 0x3db318: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3db318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3db31c:
    // 0x3db31c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3db31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3db320:
    // 0x3db320: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3db320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3db324:
    // 0x3db324: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3db324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3db328:
    // 0x3db328: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3db328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3db32c:
    // 0x3db32c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3db32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3db330:
    // 0x3db330: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3db330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3db334:
    // 0x3db334: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3db334u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3db338:
    // 0x3db338: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3db33c:
    if (ctx->pc == 0x3DB33Cu) {
        ctx->pc = 0x3DB340u;
        goto label_3db340;
    }
    ctx->pc = 0x3DB338u;
    {
        const bool branch_taken_0x3db338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db338) {
            ctx->pc = 0x3DB348u;
            goto label_3db348;
        }
    }
    ctx->pc = 0x3DB340u;
label_3db340:
    // 0x3db340: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3db340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3db344:
    // 0x3db344: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3db344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3db348:
    // 0x3db348: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3db348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3db34c:
    // 0x3db34c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3db34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3db350:
    // 0x3db350: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3db350u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3db354:
    // 0x3db354: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3db358:
    if (ctx->pc == 0x3DB358u) {
        ctx->pc = 0x3DB35Cu;
        goto label_3db35c;
    }
    ctx->pc = 0x3DB354u;
    {
        const bool branch_taken_0x3db354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db354) {
            ctx->pc = 0x3DB364u;
            goto label_3db364;
        }
    }
    ctx->pc = 0x3DB35Cu;
label_3db35c:
    // 0x3db35c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3db35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3db360:
    // 0x3db360: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3db360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3db364:
    // 0x3db364: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3db364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3db368:
    // 0x3db368: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3db368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3db36c:
    // 0x3db36c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3db36cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3db370:
    // 0x3db370: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3db374:
    if (ctx->pc == 0x3DB374u) {
        ctx->pc = 0x3DB374u;
            // 0x3db374: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3DB378u;
        goto label_3db378;
    }
    ctx->pc = 0x3DB370u;
    {
        const bool branch_taken_0x3db370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db370) {
            ctx->pc = 0x3DB374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB370u;
            // 0x3db374: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB384u;
            goto label_3db384;
        }
    }
    ctx->pc = 0x3DB378u;
label_3db378:
    // 0x3db378: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3db378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3db37c:
    // 0x3db37c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3db37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3db380:
    // 0x3db380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3db380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3db384:
    // 0x3db384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3db388:
    // 0x3db388: 0x3e00008  jr          $ra
label_3db38c:
    if (ctx->pc == 0x3DB38Cu) {
        ctx->pc = 0x3DB38Cu;
            // 0x3db38c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3DB390u;
        goto label_3db390;
    }
    ctx->pc = 0x3DB388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB388u;
            // 0x3db38c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DB390u;
label_3db390:
    // 0x3db390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3db390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3db394:
    // 0x3db394: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3db394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3db398:
    // 0x3db398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3db398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3db39c:
    // 0x3db39c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3db39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3db3a0:
    // 0x3db3a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3db3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3db3a4:
    // 0x3db3a4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3db3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3db3a8:
    // 0x3db3a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3db3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3db3ac:
    // 0x3db3ac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3db3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3db3b0:
    // 0x3db3b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3db3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3db3b4:
    // 0x3db3b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3db3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3db3b8:
    // 0x3db3b8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3db3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3db3bc:
    // 0x3db3bc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3db3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3db3c0:
    // 0x3db3c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3db3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3db3c4:
    // 0x3db3c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3db3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3db3c8:
    // 0x3db3c8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3db3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3db3cc:
    // 0x3db3cc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3db3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3db3d0:
    // 0x3db3d0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3db3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3db3d4:
    // 0x3db3d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3db3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3db3d8:
    // 0x3db3d8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3db3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3db3dc:
    // 0x3db3dc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3db3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3db3e0:
    // 0x3db3e0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3db3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3db3e4:
    // 0x3db3e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3db3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3db3e8:
    // 0x3db3e8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3db3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3db3ec:
    // 0x3db3ec: 0xc0a997c  jal         func_2A65F0
label_3db3f0:
    if (ctx->pc == 0x3DB3F0u) {
        ctx->pc = 0x3DB3F0u;
            // 0x3db3f0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3DB3F4u;
        goto label_3db3f4;
    }
    ctx->pc = 0x3DB3ECu;
    SET_GPR_U32(ctx, 31, 0x3DB3F4u);
    ctx->pc = 0x3DB3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB3ECu;
            // 0x3db3f0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB3F4u; }
        if (ctx->pc != 0x3DB3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB3F4u; }
        if (ctx->pc != 0x3DB3F4u) { return; }
    }
    ctx->pc = 0x3DB3F4u;
label_3db3f4:
    // 0x3db3f4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3db3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3db3f8:
    // 0x3db3f8: 0xc0d879c  jal         func_361E70
label_3db3fc:
    if (ctx->pc == 0x3DB3FCu) {
        ctx->pc = 0x3DB3FCu;
            // 0x3db3fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB400u;
        goto label_3db400;
    }
    ctx->pc = 0x3DB3F8u;
    SET_GPR_U32(ctx, 31, 0x3DB400u);
    ctx->pc = 0x3DB3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB3F8u;
            // 0x3db3fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB400u; }
        if (ctx->pc != 0x3DB400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB400u; }
        if (ctx->pc != 0x3DB400u) { return; }
    }
    ctx->pc = 0x3DB400u;
label_3db400:
    // 0x3db400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3db400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3db404:
    // 0x3db404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3db408:
    // 0x3db408: 0x3e00008  jr          $ra
label_3db40c:
    if (ctx->pc == 0x3DB40Cu) {
        ctx->pc = 0x3DB40Cu;
            // 0x3db40c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DB410u;
        goto label_3db410;
    }
    ctx->pc = 0x3DB408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB408u;
            // 0x3db40c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DB410u;
label_3db410:
    // 0x3db410: 0x80f6904  j           func_3DA410
label_3db414:
    if (ctx->pc == 0x3DB414u) {
        ctx->pc = 0x3DB414u;
            // 0x3db414: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3DB418u;
        goto label_3db418;
    }
    ctx->pc = 0x3DB410u;
    ctx->pc = 0x3DB414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB410u;
            // 0x3db414: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA410u;
    {
        auto targetFn = runtime->lookupFunction(0x3DA410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3DB418u;
label_3db418:
    // 0x3db418: 0x0  nop
    ctx->pc = 0x3db418u;
    // NOP
label_3db41c:
    // 0x3db41c: 0x0  nop
    ctx->pc = 0x3db41cu;
    // NOP
label_3db420:
    // 0x3db420: 0x80f6704  j           func_3D9C10
label_3db424:
    if (ctx->pc == 0x3DB424u) {
        ctx->pc = 0x3DB424u;
            // 0x3db424: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3DB428u;
        goto label_3db428;
    }
    ctx->pc = 0x3DB420u;
    ctx->pc = 0x3DB424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB420u;
            // 0x3db424: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C10u;
    if (runtime->hasFunction(0x3D9C10u)) {
        auto targetFn = runtime->lookupFunction(0x3D9C10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003D9C10_0x3d9c10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3DB428u;
label_3db428:
    // 0x3db428: 0x0  nop
    ctx->pc = 0x3db428u;
    // NOP
label_3db42c:
    // 0x3db42c: 0x0  nop
    ctx->pc = 0x3db42cu;
    // NOP
label_3db430:
    // 0x3db430: 0x80f675c  j           func_3D9D70
label_3db434:
    if (ctx->pc == 0x3DB434u) {
        ctx->pc = 0x3DB434u;
            // 0x3db434: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3DB438u;
        goto label_3db438;
    }
    ctx->pc = 0x3DB430u;
    ctx->pc = 0x3DB434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB430u;
            // 0x3db434: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9D70u;
    {
        auto targetFn = runtime->lookupFunction(0x3D9D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3DB438u;
label_3db438:
    // 0x3db438: 0x0  nop
    ctx->pc = 0x3db438u;
    // NOP
label_3db43c:
    // 0x3db43c: 0x0  nop
    ctx->pc = 0x3db43cu;
    // NOP
label_3db440:
    // 0x3db440: 0x80f66e0  j           func_3D9B80
label_3db444:
    if (ctx->pc == 0x3DB444u) {
        ctx->pc = 0x3DB444u;
            // 0x3db444: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3DB448u;
        goto label_3db448;
    }
    ctx->pc = 0x3DB440u;
    ctx->pc = 0x3DB444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB440u;
            // 0x3db444: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9B80u;
    {
        auto targetFn = runtime->lookupFunction(0x3D9B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3DB448u;
label_3db448:
    // 0x3db448: 0x0  nop
    ctx->pc = 0x3db448u;
    // NOP
label_3db44c:
    // 0x3db44c: 0x0  nop
    ctx->pc = 0x3db44cu;
    // NOP
label_3db450:
    // 0x3db450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3db450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3db454:
    // 0x3db454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3db454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3db458:
    // 0x3db458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3db458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3db45c:
    // 0x3db45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3db45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3db460:
    // 0x3db460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3db460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db464:
    // 0x3db464: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3db468:
    if (ctx->pc == 0x3DB468u) {
        ctx->pc = 0x3DB468u;
            // 0x3db468: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB46Cu;
        goto label_3db46c;
    }
    ctx->pc = 0x3DB464u;
    {
        const bool branch_taken_0x3db464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB464u;
            // 0x3db468: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db464) {
            ctx->pc = 0x3DB4C0u;
            goto label_3db4c0;
        }
    }
    ctx->pc = 0x3DB46Cu;
label_3db46c:
    // 0x3db46c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3db46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3db470:
    // 0x3db470: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3db470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3db474:
    // 0x3db474: 0x24639920  addiu       $v1, $v1, -0x66E0
    ctx->pc = 0x3db474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940960));
label_3db478:
    // 0x3db478: 0x24429958  addiu       $v0, $v0, -0x66A8
    ctx->pc = 0x3db478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941016));
label_3db47c:
    // 0x3db47c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3db47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3db480:
    // 0x3db480: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3db484:
    if (ctx->pc == 0x3DB484u) {
        ctx->pc = 0x3DB484u;
            // 0x3db484: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3DB488u;
        goto label_3db488;
    }
    ctx->pc = 0x3DB480u;
    {
        const bool branch_taken_0x3db480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB480u;
            // 0x3db484: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db480) {
            ctx->pc = 0x3DB4A8u;
            goto label_3db4a8;
        }
    }
    ctx->pc = 0x3DB488u;
label_3db488:
    // 0x3db488: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3db488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3db48c:
    // 0x3db48c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3db48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3db490:
    // 0x3db490: 0x246399e0  addiu       $v1, $v1, -0x6620
    ctx->pc = 0x3db490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941152));
label_3db494:
    // 0x3db494: 0x24429a18  addiu       $v0, $v0, -0x65E8
    ctx->pc = 0x3db494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941208));
label_3db498:
    // 0x3db498: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3db498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3db49c:
    // 0x3db49c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3db49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3db4a0:
    // 0x3db4a0: 0xc0f6d38  jal         func_3DB4E0
label_3db4a4:
    if (ctx->pc == 0x3DB4A4u) {
        ctx->pc = 0x3DB4A4u;
            // 0x3db4a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3DB4A8u;
        goto label_3db4a8;
    }
    ctx->pc = 0x3DB4A0u;
    SET_GPR_U32(ctx, 31, 0x3DB4A8u);
    ctx->pc = 0x3DB4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB4A0u;
            // 0x3db4a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DB4E0u;
    if (runtime->hasFunction(0x3DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x3DB4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB4A8u; }
        if (ctx->pc != 0x3DB4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DB4E0_0x3db4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB4A8u; }
        if (ctx->pc != 0x3DB4A8u) { return; }
    }
    ctx->pc = 0x3DB4A8u;
label_3db4a8:
    // 0x3db4a8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3db4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3db4ac:
    // 0x3db4ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3db4acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3db4b0:
    // 0x3db4b0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3db4b4:
    if (ctx->pc == 0x3DB4B4u) {
        ctx->pc = 0x3DB4B4u;
            // 0x3db4b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB4B8u;
        goto label_3db4b8;
    }
    ctx->pc = 0x3DB4B0u;
    {
        const bool branch_taken_0x3db4b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3db4b0) {
            ctx->pc = 0x3DB4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB4B0u;
            // 0x3db4b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DB4C4u;
            goto label_3db4c4;
        }
    }
    ctx->pc = 0x3DB4B8u;
label_3db4b8:
    // 0x3db4b8: 0xc0400a8  jal         func_1002A0
label_3db4bc:
    if (ctx->pc == 0x3DB4BCu) {
        ctx->pc = 0x3DB4BCu;
            // 0x3db4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DB4C0u;
        goto label_3db4c0;
    }
    ctx->pc = 0x3DB4B8u;
    SET_GPR_U32(ctx, 31, 0x3DB4C0u);
    ctx->pc = 0x3DB4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB4B8u;
            // 0x3db4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB4C0u; }
        if (ctx->pc != 0x3DB4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DB4C0u; }
        if (ctx->pc != 0x3DB4C0u) { return; }
    }
    ctx->pc = 0x3DB4C0u;
label_3db4c0:
    // 0x3db4c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3db4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db4c4:
    // 0x3db4c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3db4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3db4c8:
    // 0x3db4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3db4cc:
    // 0x3db4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3db4d0:
    // 0x3db4d0: 0x3e00008  jr          $ra
label_3db4d4:
    if (ctx->pc == 0x3DB4D4u) {
        ctx->pc = 0x3DB4D4u;
            // 0x3db4d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DB4D8u;
        goto label_3db4d8;
    }
    ctx->pc = 0x3DB4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DB4D0u;
            // 0x3db4d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DB4D8u;
label_3db4d8:
    // 0x3db4d8: 0x0  nop
    ctx->pc = 0x3db4d8u;
    // NOP
label_3db4dc:
    // 0x3db4dc: 0x0  nop
    ctx->pc = 0x3db4dcu;
    // NOP
}
