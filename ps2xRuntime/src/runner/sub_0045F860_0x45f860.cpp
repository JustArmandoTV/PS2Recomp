#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045F860
// Address: 0x45f860 - 0x460140
void sub_0045F860_0x45f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F860_0x45f860");
#endif

    switch (ctx->pc) {
        case 0x45f860u: goto label_45f860;
        case 0x45f864u: goto label_45f864;
        case 0x45f868u: goto label_45f868;
        case 0x45f86cu: goto label_45f86c;
        case 0x45f870u: goto label_45f870;
        case 0x45f874u: goto label_45f874;
        case 0x45f878u: goto label_45f878;
        case 0x45f87cu: goto label_45f87c;
        case 0x45f880u: goto label_45f880;
        case 0x45f884u: goto label_45f884;
        case 0x45f888u: goto label_45f888;
        case 0x45f88cu: goto label_45f88c;
        case 0x45f890u: goto label_45f890;
        case 0x45f894u: goto label_45f894;
        case 0x45f898u: goto label_45f898;
        case 0x45f89cu: goto label_45f89c;
        case 0x45f8a0u: goto label_45f8a0;
        case 0x45f8a4u: goto label_45f8a4;
        case 0x45f8a8u: goto label_45f8a8;
        case 0x45f8acu: goto label_45f8ac;
        case 0x45f8b0u: goto label_45f8b0;
        case 0x45f8b4u: goto label_45f8b4;
        case 0x45f8b8u: goto label_45f8b8;
        case 0x45f8bcu: goto label_45f8bc;
        case 0x45f8c0u: goto label_45f8c0;
        case 0x45f8c4u: goto label_45f8c4;
        case 0x45f8c8u: goto label_45f8c8;
        case 0x45f8ccu: goto label_45f8cc;
        case 0x45f8d0u: goto label_45f8d0;
        case 0x45f8d4u: goto label_45f8d4;
        case 0x45f8d8u: goto label_45f8d8;
        case 0x45f8dcu: goto label_45f8dc;
        case 0x45f8e0u: goto label_45f8e0;
        case 0x45f8e4u: goto label_45f8e4;
        case 0x45f8e8u: goto label_45f8e8;
        case 0x45f8ecu: goto label_45f8ec;
        case 0x45f8f0u: goto label_45f8f0;
        case 0x45f8f4u: goto label_45f8f4;
        case 0x45f8f8u: goto label_45f8f8;
        case 0x45f8fcu: goto label_45f8fc;
        case 0x45f900u: goto label_45f900;
        case 0x45f904u: goto label_45f904;
        case 0x45f908u: goto label_45f908;
        case 0x45f90cu: goto label_45f90c;
        case 0x45f910u: goto label_45f910;
        case 0x45f914u: goto label_45f914;
        case 0x45f918u: goto label_45f918;
        case 0x45f91cu: goto label_45f91c;
        case 0x45f920u: goto label_45f920;
        case 0x45f924u: goto label_45f924;
        case 0x45f928u: goto label_45f928;
        case 0x45f92cu: goto label_45f92c;
        case 0x45f930u: goto label_45f930;
        case 0x45f934u: goto label_45f934;
        case 0x45f938u: goto label_45f938;
        case 0x45f93cu: goto label_45f93c;
        case 0x45f940u: goto label_45f940;
        case 0x45f944u: goto label_45f944;
        case 0x45f948u: goto label_45f948;
        case 0x45f94cu: goto label_45f94c;
        case 0x45f950u: goto label_45f950;
        case 0x45f954u: goto label_45f954;
        case 0x45f958u: goto label_45f958;
        case 0x45f95cu: goto label_45f95c;
        case 0x45f960u: goto label_45f960;
        case 0x45f964u: goto label_45f964;
        case 0x45f968u: goto label_45f968;
        case 0x45f96cu: goto label_45f96c;
        case 0x45f970u: goto label_45f970;
        case 0x45f974u: goto label_45f974;
        case 0x45f978u: goto label_45f978;
        case 0x45f97cu: goto label_45f97c;
        case 0x45f980u: goto label_45f980;
        case 0x45f984u: goto label_45f984;
        case 0x45f988u: goto label_45f988;
        case 0x45f98cu: goto label_45f98c;
        case 0x45f990u: goto label_45f990;
        case 0x45f994u: goto label_45f994;
        case 0x45f998u: goto label_45f998;
        case 0x45f99cu: goto label_45f99c;
        case 0x45f9a0u: goto label_45f9a0;
        case 0x45f9a4u: goto label_45f9a4;
        case 0x45f9a8u: goto label_45f9a8;
        case 0x45f9acu: goto label_45f9ac;
        case 0x45f9b0u: goto label_45f9b0;
        case 0x45f9b4u: goto label_45f9b4;
        case 0x45f9b8u: goto label_45f9b8;
        case 0x45f9bcu: goto label_45f9bc;
        case 0x45f9c0u: goto label_45f9c0;
        case 0x45f9c4u: goto label_45f9c4;
        case 0x45f9c8u: goto label_45f9c8;
        case 0x45f9ccu: goto label_45f9cc;
        case 0x45f9d0u: goto label_45f9d0;
        case 0x45f9d4u: goto label_45f9d4;
        case 0x45f9d8u: goto label_45f9d8;
        case 0x45f9dcu: goto label_45f9dc;
        case 0x45f9e0u: goto label_45f9e0;
        case 0x45f9e4u: goto label_45f9e4;
        case 0x45f9e8u: goto label_45f9e8;
        case 0x45f9ecu: goto label_45f9ec;
        case 0x45f9f0u: goto label_45f9f0;
        case 0x45f9f4u: goto label_45f9f4;
        case 0x45f9f8u: goto label_45f9f8;
        case 0x45f9fcu: goto label_45f9fc;
        case 0x45fa00u: goto label_45fa00;
        case 0x45fa04u: goto label_45fa04;
        case 0x45fa08u: goto label_45fa08;
        case 0x45fa0cu: goto label_45fa0c;
        case 0x45fa10u: goto label_45fa10;
        case 0x45fa14u: goto label_45fa14;
        case 0x45fa18u: goto label_45fa18;
        case 0x45fa1cu: goto label_45fa1c;
        case 0x45fa20u: goto label_45fa20;
        case 0x45fa24u: goto label_45fa24;
        case 0x45fa28u: goto label_45fa28;
        case 0x45fa2cu: goto label_45fa2c;
        case 0x45fa30u: goto label_45fa30;
        case 0x45fa34u: goto label_45fa34;
        case 0x45fa38u: goto label_45fa38;
        case 0x45fa3cu: goto label_45fa3c;
        case 0x45fa40u: goto label_45fa40;
        case 0x45fa44u: goto label_45fa44;
        case 0x45fa48u: goto label_45fa48;
        case 0x45fa4cu: goto label_45fa4c;
        case 0x45fa50u: goto label_45fa50;
        case 0x45fa54u: goto label_45fa54;
        case 0x45fa58u: goto label_45fa58;
        case 0x45fa5cu: goto label_45fa5c;
        case 0x45fa60u: goto label_45fa60;
        case 0x45fa64u: goto label_45fa64;
        case 0x45fa68u: goto label_45fa68;
        case 0x45fa6cu: goto label_45fa6c;
        case 0x45fa70u: goto label_45fa70;
        case 0x45fa74u: goto label_45fa74;
        case 0x45fa78u: goto label_45fa78;
        case 0x45fa7cu: goto label_45fa7c;
        case 0x45fa80u: goto label_45fa80;
        case 0x45fa84u: goto label_45fa84;
        case 0x45fa88u: goto label_45fa88;
        case 0x45fa8cu: goto label_45fa8c;
        case 0x45fa90u: goto label_45fa90;
        case 0x45fa94u: goto label_45fa94;
        case 0x45fa98u: goto label_45fa98;
        case 0x45fa9cu: goto label_45fa9c;
        case 0x45faa0u: goto label_45faa0;
        case 0x45faa4u: goto label_45faa4;
        case 0x45faa8u: goto label_45faa8;
        case 0x45faacu: goto label_45faac;
        case 0x45fab0u: goto label_45fab0;
        case 0x45fab4u: goto label_45fab4;
        case 0x45fab8u: goto label_45fab8;
        case 0x45fabcu: goto label_45fabc;
        case 0x45fac0u: goto label_45fac0;
        case 0x45fac4u: goto label_45fac4;
        case 0x45fac8u: goto label_45fac8;
        case 0x45faccu: goto label_45facc;
        case 0x45fad0u: goto label_45fad0;
        case 0x45fad4u: goto label_45fad4;
        case 0x45fad8u: goto label_45fad8;
        case 0x45fadcu: goto label_45fadc;
        case 0x45fae0u: goto label_45fae0;
        case 0x45fae4u: goto label_45fae4;
        case 0x45fae8u: goto label_45fae8;
        case 0x45faecu: goto label_45faec;
        case 0x45faf0u: goto label_45faf0;
        case 0x45faf4u: goto label_45faf4;
        case 0x45faf8u: goto label_45faf8;
        case 0x45fafcu: goto label_45fafc;
        case 0x45fb00u: goto label_45fb00;
        case 0x45fb04u: goto label_45fb04;
        case 0x45fb08u: goto label_45fb08;
        case 0x45fb0cu: goto label_45fb0c;
        case 0x45fb10u: goto label_45fb10;
        case 0x45fb14u: goto label_45fb14;
        case 0x45fb18u: goto label_45fb18;
        case 0x45fb1cu: goto label_45fb1c;
        case 0x45fb20u: goto label_45fb20;
        case 0x45fb24u: goto label_45fb24;
        case 0x45fb28u: goto label_45fb28;
        case 0x45fb2cu: goto label_45fb2c;
        case 0x45fb30u: goto label_45fb30;
        case 0x45fb34u: goto label_45fb34;
        case 0x45fb38u: goto label_45fb38;
        case 0x45fb3cu: goto label_45fb3c;
        case 0x45fb40u: goto label_45fb40;
        case 0x45fb44u: goto label_45fb44;
        case 0x45fb48u: goto label_45fb48;
        case 0x45fb4cu: goto label_45fb4c;
        case 0x45fb50u: goto label_45fb50;
        case 0x45fb54u: goto label_45fb54;
        case 0x45fb58u: goto label_45fb58;
        case 0x45fb5cu: goto label_45fb5c;
        case 0x45fb60u: goto label_45fb60;
        case 0x45fb64u: goto label_45fb64;
        case 0x45fb68u: goto label_45fb68;
        case 0x45fb6cu: goto label_45fb6c;
        case 0x45fb70u: goto label_45fb70;
        case 0x45fb74u: goto label_45fb74;
        case 0x45fb78u: goto label_45fb78;
        case 0x45fb7cu: goto label_45fb7c;
        case 0x45fb80u: goto label_45fb80;
        case 0x45fb84u: goto label_45fb84;
        case 0x45fb88u: goto label_45fb88;
        case 0x45fb8cu: goto label_45fb8c;
        case 0x45fb90u: goto label_45fb90;
        case 0x45fb94u: goto label_45fb94;
        case 0x45fb98u: goto label_45fb98;
        case 0x45fb9cu: goto label_45fb9c;
        case 0x45fba0u: goto label_45fba0;
        case 0x45fba4u: goto label_45fba4;
        case 0x45fba8u: goto label_45fba8;
        case 0x45fbacu: goto label_45fbac;
        case 0x45fbb0u: goto label_45fbb0;
        case 0x45fbb4u: goto label_45fbb4;
        case 0x45fbb8u: goto label_45fbb8;
        case 0x45fbbcu: goto label_45fbbc;
        case 0x45fbc0u: goto label_45fbc0;
        case 0x45fbc4u: goto label_45fbc4;
        case 0x45fbc8u: goto label_45fbc8;
        case 0x45fbccu: goto label_45fbcc;
        case 0x45fbd0u: goto label_45fbd0;
        case 0x45fbd4u: goto label_45fbd4;
        case 0x45fbd8u: goto label_45fbd8;
        case 0x45fbdcu: goto label_45fbdc;
        case 0x45fbe0u: goto label_45fbe0;
        case 0x45fbe4u: goto label_45fbe4;
        case 0x45fbe8u: goto label_45fbe8;
        case 0x45fbecu: goto label_45fbec;
        case 0x45fbf0u: goto label_45fbf0;
        case 0x45fbf4u: goto label_45fbf4;
        case 0x45fbf8u: goto label_45fbf8;
        case 0x45fbfcu: goto label_45fbfc;
        case 0x45fc00u: goto label_45fc00;
        case 0x45fc04u: goto label_45fc04;
        case 0x45fc08u: goto label_45fc08;
        case 0x45fc0cu: goto label_45fc0c;
        case 0x45fc10u: goto label_45fc10;
        case 0x45fc14u: goto label_45fc14;
        case 0x45fc18u: goto label_45fc18;
        case 0x45fc1cu: goto label_45fc1c;
        case 0x45fc20u: goto label_45fc20;
        case 0x45fc24u: goto label_45fc24;
        case 0x45fc28u: goto label_45fc28;
        case 0x45fc2cu: goto label_45fc2c;
        case 0x45fc30u: goto label_45fc30;
        case 0x45fc34u: goto label_45fc34;
        case 0x45fc38u: goto label_45fc38;
        case 0x45fc3cu: goto label_45fc3c;
        case 0x45fc40u: goto label_45fc40;
        case 0x45fc44u: goto label_45fc44;
        case 0x45fc48u: goto label_45fc48;
        case 0x45fc4cu: goto label_45fc4c;
        case 0x45fc50u: goto label_45fc50;
        case 0x45fc54u: goto label_45fc54;
        case 0x45fc58u: goto label_45fc58;
        case 0x45fc5cu: goto label_45fc5c;
        case 0x45fc60u: goto label_45fc60;
        case 0x45fc64u: goto label_45fc64;
        case 0x45fc68u: goto label_45fc68;
        case 0x45fc6cu: goto label_45fc6c;
        case 0x45fc70u: goto label_45fc70;
        case 0x45fc74u: goto label_45fc74;
        case 0x45fc78u: goto label_45fc78;
        case 0x45fc7cu: goto label_45fc7c;
        case 0x45fc80u: goto label_45fc80;
        case 0x45fc84u: goto label_45fc84;
        case 0x45fc88u: goto label_45fc88;
        case 0x45fc8cu: goto label_45fc8c;
        case 0x45fc90u: goto label_45fc90;
        case 0x45fc94u: goto label_45fc94;
        case 0x45fc98u: goto label_45fc98;
        case 0x45fc9cu: goto label_45fc9c;
        case 0x45fca0u: goto label_45fca0;
        case 0x45fca4u: goto label_45fca4;
        case 0x45fca8u: goto label_45fca8;
        case 0x45fcacu: goto label_45fcac;
        case 0x45fcb0u: goto label_45fcb0;
        case 0x45fcb4u: goto label_45fcb4;
        case 0x45fcb8u: goto label_45fcb8;
        case 0x45fcbcu: goto label_45fcbc;
        case 0x45fcc0u: goto label_45fcc0;
        case 0x45fcc4u: goto label_45fcc4;
        case 0x45fcc8u: goto label_45fcc8;
        case 0x45fcccu: goto label_45fccc;
        case 0x45fcd0u: goto label_45fcd0;
        case 0x45fcd4u: goto label_45fcd4;
        case 0x45fcd8u: goto label_45fcd8;
        case 0x45fcdcu: goto label_45fcdc;
        case 0x45fce0u: goto label_45fce0;
        case 0x45fce4u: goto label_45fce4;
        case 0x45fce8u: goto label_45fce8;
        case 0x45fcecu: goto label_45fcec;
        case 0x45fcf0u: goto label_45fcf0;
        case 0x45fcf4u: goto label_45fcf4;
        case 0x45fcf8u: goto label_45fcf8;
        case 0x45fcfcu: goto label_45fcfc;
        case 0x45fd00u: goto label_45fd00;
        case 0x45fd04u: goto label_45fd04;
        case 0x45fd08u: goto label_45fd08;
        case 0x45fd0cu: goto label_45fd0c;
        case 0x45fd10u: goto label_45fd10;
        case 0x45fd14u: goto label_45fd14;
        case 0x45fd18u: goto label_45fd18;
        case 0x45fd1cu: goto label_45fd1c;
        case 0x45fd20u: goto label_45fd20;
        case 0x45fd24u: goto label_45fd24;
        case 0x45fd28u: goto label_45fd28;
        case 0x45fd2cu: goto label_45fd2c;
        case 0x45fd30u: goto label_45fd30;
        case 0x45fd34u: goto label_45fd34;
        case 0x45fd38u: goto label_45fd38;
        case 0x45fd3cu: goto label_45fd3c;
        case 0x45fd40u: goto label_45fd40;
        case 0x45fd44u: goto label_45fd44;
        case 0x45fd48u: goto label_45fd48;
        case 0x45fd4cu: goto label_45fd4c;
        case 0x45fd50u: goto label_45fd50;
        case 0x45fd54u: goto label_45fd54;
        case 0x45fd58u: goto label_45fd58;
        case 0x45fd5cu: goto label_45fd5c;
        case 0x45fd60u: goto label_45fd60;
        case 0x45fd64u: goto label_45fd64;
        case 0x45fd68u: goto label_45fd68;
        case 0x45fd6cu: goto label_45fd6c;
        case 0x45fd70u: goto label_45fd70;
        case 0x45fd74u: goto label_45fd74;
        case 0x45fd78u: goto label_45fd78;
        case 0x45fd7cu: goto label_45fd7c;
        case 0x45fd80u: goto label_45fd80;
        case 0x45fd84u: goto label_45fd84;
        case 0x45fd88u: goto label_45fd88;
        case 0x45fd8cu: goto label_45fd8c;
        case 0x45fd90u: goto label_45fd90;
        case 0x45fd94u: goto label_45fd94;
        case 0x45fd98u: goto label_45fd98;
        case 0x45fd9cu: goto label_45fd9c;
        case 0x45fda0u: goto label_45fda0;
        case 0x45fda4u: goto label_45fda4;
        case 0x45fda8u: goto label_45fda8;
        case 0x45fdacu: goto label_45fdac;
        case 0x45fdb0u: goto label_45fdb0;
        case 0x45fdb4u: goto label_45fdb4;
        case 0x45fdb8u: goto label_45fdb8;
        case 0x45fdbcu: goto label_45fdbc;
        case 0x45fdc0u: goto label_45fdc0;
        case 0x45fdc4u: goto label_45fdc4;
        case 0x45fdc8u: goto label_45fdc8;
        case 0x45fdccu: goto label_45fdcc;
        case 0x45fdd0u: goto label_45fdd0;
        case 0x45fdd4u: goto label_45fdd4;
        case 0x45fdd8u: goto label_45fdd8;
        case 0x45fddcu: goto label_45fddc;
        case 0x45fde0u: goto label_45fde0;
        case 0x45fde4u: goto label_45fde4;
        case 0x45fde8u: goto label_45fde8;
        case 0x45fdecu: goto label_45fdec;
        case 0x45fdf0u: goto label_45fdf0;
        case 0x45fdf4u: goto label_45fdf4;
        case 0x45fdf8u: goto label_45fdf8;
        case 0x45fdfcu: goto label_45fdfc;
        case 0x45fe00u: goto label_45fe00;
        case 0x45fe04u: goto label_45fe04;
        case 0x45fe08u: goto label_45fe08;
        case 0x45fe0cu: goto label_45fe0c;
        case 0x45fe10u: goto label_45fe10;
        case 0x45fe14u: goto label_45fe14;
        case 0x45fe18u: goto label_45fe18;
        case 0x45fe1cu: goto label_45fe1c;
        case 0x45fe20u: goto label_45fe20;
        case 0x45fe24u: goto label_45fe24;
        case 0x45fe28u: goto label_45fe28;
        case 0x45fe2cu: goto label_45fe2c;
        case 0x45fe30u: goto label_45fe30;
        case 0x45fe34u: goto label_45fe34;
        case 0x45fe38u: goto label_45fe38;
        case 0x45fe3cu: goto label_45fe3c;
        case 0x45fe40u: goto label_45fe40;
        case 0x45fe44u: goto label_45fe44;
        case 0x45fe48u: goto label_45fe48;
        case 0x45fe4cu: goto label_45fe4c;
        case 0x45fe50u: goto label_45fe50;
        case 0x45fe54u: goto label_45fe54;
        case 0x45fe58u: goto label_45fe58;
        case 0x45fe5cu: goto label_45fe5c;
        case 0x45fe60u: goto label_45fe60;
        case 0x45fe64u: goto label_45fe64;
        case 0x45fe68u: goto label_45fe68;
        case 0x45fe6cu: goto label_45fe6c;
        case 0x45fe70u: goto label_45fe70;
        case 0x45fe74u: goto label_45fe74;
        case 0x45fe78u: goto label_45fe78;
        case 0x45fe7cu: goto label_45fe7c;
        case 0x45fe80u: goto label_45fe80;
        case 0x45fe84u: goto label_45fe84;
        case 0x45fe88u: goto label_45fe88;
        case 0x45fe8cu: goto label_45fe8c;
        case 0x45fe90u: goto label_45fe90;
        case 0x45fe94u: goto label_45fe94;
        case 0x45fe98u: goto label_45fe98;
        case 0x45fe9cu: goto label_45fe9c;
        case 0x45fea0u: goto label_45fea0;
        case 0x45fea4u: goto label_45fea4;
        case 0x45fea8u: goto label_45fea8;
        case 0x45feacu: goto label_45feac;
        case 0x45feb0u: goto label_45feb0;
        case 0x45feb4u: goto label_45feb4;
        case 0x45feb8u: goto label_45feb8;
        case 0x45febcu: goto label_45febc;
        case 0x45fec0u: goto label_45fec0;
        case 0x45fec4u: goto label_45fec4;
        case 0x45fec8u: goto label_45fec8;
        case 0x45feccu: goto label_45fecc;
        case 0x45fed0u: goto label_45fed0;
        case 0x45fed4u: goto label_45fed4;
        case 0x45fed8u: goto label_45fed8;
        case 0x45fedcu: goto label_45fedc;
        case 0x45fee0u: goto label_45fee0;
        case 0x45fee4u: goto label_45fee4;
        case 0x45fee8u: goto label_45fee8;
        case 0x45feecu: goto label_45feec;
        case 0x45fef0u: goto label_45fef0;
        case 0x45fef4u: goto label_45fef4;
        case 0x45fef8u: goto label_45fef8;
        case 0x45fefcu: goto label_45fefc;
        case 0x45ff00u: goto label_45ff00;
        case 0x45ff04u: goto label_45ff04;
        case 0x45ff08u: goto label_45ff08;
        case 0x45ff0cu: goto label_45ff0c;
        case 0x45ff10u: goto label_45ff10;
        case 0x45ff14u: goto label_45ff14;
        case 0x45ff18u: goto label_45ff18;
        case 0x45ff1cu: goto label_45ff1c;
        case 0x45ff20u: goto label_45ff20;
        case 0x45ff24u: goto label_45ff24;
        case 0x45ff28u: goto label_45ff28;
        case 0x45ff2cu: goto label_45ff2c;
        case 0x45ff30u: goto label_45ff30;
        case 0x45ff34u: goto label_45ff34;
        case 0x45ff38u: goto label_45ff38;
        case 0x45ff3cu: goto label_45ff3c;
        case 0x45ff40u: goto label_45ff40;
        case 0x45ff44u: goto label_45ff44;
        case 0x45ff48u: goto label_45ff48;
        case 0x45ff4cu: goto label_45ff4c;
        case 0x45ff50u: goto label_45ff50;
        case 0x45ff54u: goto label_45ff54;
        case 0x45ff58u: goto label_45ff58;
        case 0x45ff5cu: goto label_45ff5c;
        case 0x45ff60u: goto label_45ff60;
        case 0x45ff64u: goto label_45ff64;
        case 0x45ff68u: goto label_45ff68;
        case 0x45ff6cu: goto label_45ff6c;
        case 0x45ff70u: goto label_45ff70;
        case 0x45ff74u: goto label_45ff74;
        case 0x45ff78u: goto label_45ff78;
        case 0x45ff7cu: goto label_45ff7c;
        case 0x45ff80u: goto label_45ff80;
        case 0x45ff84u: goto label_45ff84;
        case 0x45ff88u: goto label_45ff88;
        case 0x45ff8cu: goto label_45ff8c;
        case 0x45ff90u: goto label_45ff90;
        case 0x45ff94u: goto label_45ff94;
        case 0x45ff98u: goto label_45ff98;
        case 0x45ff9cu: goto label_45ff9c;
        case 0x45ffa0u: goto label_45ffa0;
        case 0x45ffa4u: goto label_45ffa4;
        case 0x45ffa8u: goto label_45ffa8;
        case 0x45ffacu: goto label_45ffac;
        case 0x45ffb0u: goto label_45ffb0;
        case 0x45ffb4u: goto label_45ffb4;
        case 0x45ffb8u: goto label_45ffb8;
        case 0x45ffbcu: goto label_45ffbc;
        case 0x45ffc0u: goto label_45ffc0;
        case 0x45ffc4u: goto label_45ffc4;
        case 0x45ffc8u: goto label_45ffc8;
        case 0x45ffccu: goto label_45ffcc;
        case 0x45ffd0u: goto label_45ffd0;
        case 0x45ffd4u: goto label_45ffd4;
        case 0x45ffd8u: goto label_45ffd8;
        case 0x45ffdcu: goto label_45ffdc;
        case 0x45ffe0u: goto label_45ffe0;
        case 0x45ffe4u: goto label_45ffe4;
        case 0x45ffe8u: goto label_45ffe8;
        case 0x45ffecu: goto label_45ffec;
        case 0x45fff0u: goto label_45fff0;
        case 0x45fff4u: goto label_45fff4;
        case 0x45fff8u: goto label_45fff8;
        case 0x45fffcu: goto label_45fffc;
        case 0x460000u: goto label_460000;
        case 0x460004u: goto label_460004;
        case 0x460008u: goto label_460008;
        case 0x46000cu: goto label_46000c;
        case 0x460010u: goto label_460010;
        case 0x460014u: goto label_460014;
        case 0x460018u: goto label_460018;
        case 0x46001cu: goto label_46001c;
        case 0x460020u: goto label_460020;
        case 0x460024u: goto label_460024;
        case 0x460028u: goto label_460028;
        case 0x46002cu: goto label_46002c;
        case 0x460030u: goto label_460030;
        case 0x460034u: goto label_460034;
        case 0x460038u: goto label_460038;
        case 0x46003cu: goto label_46003c;
        case 0x460040u: goto label_460040;
        case 0x460044u: goto label_460044;
        case 0x460048u: goto label_460048;
        case 0x46004cu: goto label_46004c;
        case 0x460050u: goto label_460050;
        case 0x460054u: goto label_460054;
        case 0x460058u: goto label_460058;
        case 0x46005cu: goto label_46005c;
        case 0x460060u: goto label_460060;
        case 0x460064u: goto label_460064;
        case 0x460068u: goto label_460068;
        case 0x46006cu: goto label_46006c;
        case 0x460070u: goto label_460070;
        case 0x460074u: goto label_460074;
        case 0x460078u: goto label_460078;
        case 0x46007cu: goto label_46007c;
        case 0x460080u: goto label_460080;
        case 0x460084u: goto label_460084;
        case 0x460088u: goto label_460088;
        case 0x46008cu: goto label_46008c;
        case 0x460090u: goto label_460090;
        case 0x460094u: goto label_460094;
        case 0x460098u: goto label_460098;
        case 0x46009cu: goto label_46009c;
        case 0x4600a0u: goto label_4600a0;
        case 0x4600a4u: goto label_4600a4;
        case 0x4600a8u: goto label_4600a8;
        case 0x4600acu: goto label_4600ac;
        case 0x4600b0u: goto label_4600b0;
        case 0x4600b4u: goto label_4600b4;
        case 0x4600b8u: goto label_4600b8;
        case 0x4600bcu: goto label_4600bc;
        case 0x4600c0u: goto label_4600c0;
        case 0x4600c4u: goto label_4600c4;
        case 0x4600c8u: goto label_4600c8;
        case 0x4600ccu: goto label_4600cc;
        case 0x4600d0u: goto label_4600d0;
        case 0x4600d4u: goto label_4600d4;
        case 0x4600d8u: goto label_4600d8;
        case 0x4600dcu: goto label_4600dc;
        case 0x4600e0u: goto label_4600e0;
        case 0x4600e4u: goto label_4600e4;
        case 0x4600e8u: goto label_4600e8;
        case 0x4600ecu: goto label_4600ec;
        case 0x4600f0u: goto label_4600f0;
        case 0x4600f4u: goto label_4600f4;
        case 0x4600f8u: goto label_4600f8;
        case 0x4600fcu: goto label_4600fc;
        case 0x460100u: goto label_460100;
        case 0x460104u: goto label_460104;
        case 0x460108u: goto label_460108;
        case 0x46010cu: goto label_46010c;
        case 0x460110u: goto label_460110;
        case 0x460114u: goto label_460114;
        case 0x460118u: goto label_460118;
        case 0x46011cu: goto label_46011c;
        case 0x460120u: goto label_460120;
        case 0x460124u: goto label_460124;
        case 0x460128u: goto label_460128;
        case 0x46012cu: goto label_46012c;
        case 0x460130u: goto label_460130;
        case 0x460134u: goto label_460134;
        case 0x460138u: goto label_460138;
        case 0x46013cu: goto label_46013c;
        default: break;
    }

    ctx->pc = 0x45f860u;

label_45f860:
    // 0x45f860: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x45f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_45f864:
    // 0x45f864: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x45f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_45f868:
    // 0x45f868: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x45f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_45f86c:
    // 0x45f86c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x45f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_45f870:
    // 0x45f870: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x45f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_45f874:
    // 0x45f874: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x45f874u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45f878:
    // 0x45f878: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x45f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_45f87c:
    // 0x45f87c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x45f87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_45f880:
    // 0x45f880: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x45f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_45f884:
    // 0x45f884: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x45f884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_45f888:
    // 0x45f888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_45f88c:
    // 0x45f88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x45f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_45f890:
    // 0x45f890: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x45f890u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_45f894:
    // 0x45f894: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x45f894u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_45f898:
    // 0x45f898: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x45f898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_45f89c:
    // 0x45f89c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_45f8a0:
    // 0x45f8a0: 0xc0c9a58  jal         func_326960
label_45f8a4:
    if (ctx->pc == 0x45F8A4u) {
        ctx->pc = 0x45F8A4u;
            // 0x45f8a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x45F8A8u;
        goto label_45f8a8;
    }
    ctx->pc = 0x45F8A0u;
    SET_GPR_U32(ctx, 31, 0x45F8A8u);
    ctx->pc = 0x45F8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F8A0u;
            // 0x45f8a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F8A8u; }
        if (ctx->pc != 0x45F8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F8A8u; }
        if (ctx->pc != 0x45F8A8u) { return; }
    }
    ctx->pc = 0x45F8A8u;
label_45f8a8:
    // 0x45f8a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x45f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_45f8ac:
    // 0x45f8ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45f8b0:
    // 0x45f8b0: 0x8c7089e0  lw          $s0, -0x7620($v1)
    ctx->pc = 0x45f8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_45f8b4:
    // 0x45f8b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x45f8b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45f8b8:
    // 0x45f8b8: 0xc123328  jal         func_48CCA0
label_45f8bc:
    if (ctx->pc == 0x45F8BCu) {
        ctx->pc = 0x45F8BCu;
            // 0x45f8bc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x45F8C0u;
        goto label_45f8c0;
    }
    ctx->pc = 0x45F8B8u;
    SET_GPR_U32(ctx, 31, 0x45F8C0u);
    ctx->pc = 0x45F8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F8B8u;
            // 0x45f8bc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F8C0u; }
        if (ctx->pc != 0x45F8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F8C0u; }
        if (ctx->pc != 0x45F8C0u) { return; }
    }
    ctx->pc = 0x45F8C0u;
label_45f8c0:
    // 0x45f8c0: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x45f8c0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_45f8c4:
    // 0x45f8c4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x45f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_45f8c8:
    // 0x45f8c8: 0xa3a30100  sb          $v1, 0x100($sp)
    ctx->pc = 0x45f8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 3));
label_45f8cc:
    // 0x45f8cc: 0xc481048c  lwc1        $f1, 0x48C($a0)
    ctx->pc = 0x45f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f8d0:
    // 0x45f8d0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45f8d4:
    // 0x45f8d4: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x45f8d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_45f8d8:
    // 0x45f8d8: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x45f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45f8dc:
    // 0x45f8dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45f8e0:
    // 0x45f8e0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x45f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_45f8e4:
    // 0x45f8e4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45f8e8:
    // 0x45f8e8: 0xc4620490  lwc1        $f2, 0x490($v1)
    ctx->pc = 0x45f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45f8ec:
    // 0x45f8ec: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x45f8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_45f8f0:
    // 0x45f8f0: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x45f8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_45f8f4:
    // 0x45f8f4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45f8f8:
    // 0x45f8f8: 0xc4800498  lwc1        $f0, 0x498($a0)
    ctx->pc = 0x45f8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45f8fc:
    // 0x45f8fc: 0xc461049c  lwc1        $f1, 0x49C($v1)
    ctx->pc = 0x45f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f900:
    // 0x45f900: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x45f900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_45f904:
    // 0x45f904: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x45f904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_45f908:
    // 0x45f908: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45f908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45f90c:
    // 0x45f90c: 0xc46004a0  lwc1        $f0, 0x4A0($v1)
    ctx->pc = 0x45f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45f910:
    // 0x45f910: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x45f910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_45f914:
    // 0x45f914: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
label_45f918:
    if (ctx->pc == 0x45F918u) {
        ctx->pc = 0x45F918u;
            // 0x45f918: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->pc = 0x45F91Cu;
        goto label_45f91c;
    }
    ctx->pc = 0x45F914u;
    {
        const bool branch_taken_0x45f914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F914u;
            // 0x45f918: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f914) {
            ctx->pc = 0x45FA78u;
            goto label_45fa78;
        }
    }
    ctx->pc = 0x45F91Cu;
label_45f91c:
    // 0x45f91c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x45f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_45f920:
    // 0x45f920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45f920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45f924:
    // 0x45f924: 0x2463e4e0  addiu       $v1, $v1, -0x1B20
    ctx->pc = 0x45f924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960352));
label_45f928:
    // 0x45f928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45f92c:
    // 0x45f92c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45f930:
    // 0x45f930: 0x400008  jr          $v0
label_45f934:
    if (ctx->pc == 0x45F934u) {
        ctx->pc = 0x45F938u;
        goto label_45f938;
    }
    ctx->pc = 0x45F930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x45F938u: goto label_45f938;
            case 0x45F940u: goto label_45f940;
            case 0x45F958u: goto label_45f958;
            case 0x45F960u: goto label_45f960;
            case 0x45F974u: goto label_45f974;
            case 0x45FA48u: goto label_45fa48;
            case 0x45FA5Cu: goto label_45fa5c;
            case 0x45FA70u: goto label_45fa70;
            case 0x45FA78u: goto label_45fa78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x45F938u;
label_45f938:
    // 0x45f938: 0x10000050  b           . + 4 + (0x50 << 2)
label_45f93c:
    if (ctx->pc == 0x45F93Cu) {
        ctx->pc = 0x45F93Cu;
            // 0x45f93c: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x45F940u;
        goto label_45f940;
    }
    ctx->pc = 0x45F938u;
    {
        const bool branch_taken_0x45f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F938u;
            // 0x45f93c: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f938) {
            ctx->pc = 0x45FA7Cu;
            goto label_45fa7c;
        }
    }
    ctx->pc = 0x45F940u;
label_45f940:
    // 0x45f940: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x45f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_45f944:
    // 0x45f944: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x45f944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_45f948:
    // 0x45f948: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x45f948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_45f94c:
    // 0x45f94c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45f950:
    // 0x45f950: 0x1000004a  b           . + 4 + (0x4A << 2)
label_45f954:
    if (ctx->pc == 0x45F954u) {
        ctx->pc = 0x45F954u;
            // 0x45f954: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->pc = 0x45F958u;
        goto label_45f958;
    }
    ctx->pc = 0x45F950u;
    {
        const bool branch_taken_0x45f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F950u;
            // 0x45f954: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f950) {
            ctx->pc = 0x45FA7Cu;
            goto label_45fa7c;
        }
    }
    ctx->pc = 0x45F958u;
label_45f958:
    // 0x45f958: 0x10000048  b           . + 4 + (0x48 << 2)
label_45f95c:
    if (ctx->pc == 0x45F95Cu) {
        ctx->pc = 0x45F95Cu;
            // 0x45f95c: 0xafa50120  sw          $a1, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
        ctx->pc = 0x45F960u;
        goto label_45f960;
    }
    ctx->pc = 0x45F958u;
    {
        const bool branch_taken_0x45f958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F958u;
            // 0x45f95c: 0xafa50120  sw          $a1, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f958) {
            ctx->pc = 0x45FA7Cu;
            goto label_45fa7c;
        }
    }
    ctx->pc = 0x45F960u;
label_45f960:
    // 0x45f960: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x45f960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45f964:
    // 0x45f964: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x45f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_45f968:
    // 0x45f968: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x45f968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_45f96c:
    // 0x45f96c: 0x10000043  b           . + 4 + (0x43 << 2)
label_45f970:
    if (ctx->pc == 0x45F970u) {
        ctx->pc = 0x45F970u;
            // 0x45f970: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->pc = 0x45F974u;
        goto label_45f974;
    }
    ctx->pc = 0x45F96Cu;
    {
        const bool branch_taken_0x45f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F96Cu;
            // 0x45f970: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f96c) {
            ctx->pc = 0x45FA7Cu;
            goto label_45fa7c;
        }
    }
    ctx->pc = 0x45F974u;
label_45f974:
    // 0x45f974: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x45f974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_45f978:
    // 0x45f978: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45f97c:
    // 0x45f97c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x45f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_45f980:
    // 0x45f980: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x45f980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_45f984:
    // 0x45f984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45f984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45f988:
    // 0x45f988: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x45f988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_45f98c:
    // 0x45f98c: 0xc123328  jal         func_48CCA0
label_45f990:
    if (ctx->pc == 0x45F990u) {
        ctx->pc = 0x45F990u;
            // 0x45f990: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->pc = 0x45F994u;
        goto label_45f994;
    }
    ctx->pc = 0x45F98Cu;
    SET_GPR_U32(ctx, 31, 0x45F994u);
    ctx->pc = 0x45F990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F98Cu;
            // 0x45f990: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F994u; }
        if (ctx->pc != 0x45F994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F994u; }
        if (ctx->pc != 0x45F994u) { return; }
    }
    ctx->pc = 0x45F994u;
label_45f994:
    // 0x45f994: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45f994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f998:
    // 0x45f998: 0x50430019  beql        $v0, $v1, . + 4 + (0x19 << 2)
label_45f99c:
    if (ctx->pc == 0x45F99Cu) {
        ctx->pc = 0x45F99Cu;
            // 0x45f99c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x45F9A0u;
        goto label_45f9a0;
    }
    ctx->pc = 0x45F998u;
    {
        const bool branch_taken_0x45f998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45f998) {
            ctx->pc = 0x45F99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45F998u;
            // 0x45f99c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45FA00u;
            goto label_45fa00;
        }
    }
    ctx->pc = 0x45F9A0u;
label_45f9a0:
    // 0x45f9a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x45f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45f9a4:
    // 0x45f9a4: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_45f9a8:
    if (ctx->pc == 0x45F9A8u) {
        ctx->pc = 0x45F9A8u;
            // 0x45f9a8: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x45F9ACu;
        goto label_45f9ac;
    }
    ctx->pc = 0x45F9A4u;
    {
        const bool branch_taken_0x45f9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45f9a4) {
            ctx->pc = 0x45F9A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45F9A4u;
            // 0x45f9a8: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45F9C4u;
            goto label_45f9c4;
        }
    }
    ctx->pc = 0x45F9ACu;
label_45f9ac:
    // 0x45f9ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45f9b0:
    // 0x45f9b0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_45f9b4:
    if (ctx->pc == 0x45F9B4u) {
        ctx->pc = 0x45F9B8u;
        goto label_45f9b8;
    }
    ctx->pc = 0x45F9B0u;
    {
        const bool branch_taken_0x45f9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45f9b0) {
            ctx->pc = 0x45F9C0u;
            goto label_45f9c0;
        }
    }
    ctx->pc = 0x45F9B8u;
label_45f9b8:
    // 0x45f9b8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_45f9bc:
    if (ctx->pc == 0x45F9BCu) {
        ctx->pc = 0x45F9BCu;
            // 0x45f9bc: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x45F9C0u;
        goto label_45f9c0;
    }
    ctx->pc = 0x45F9B8u;
    {
        const bool branch_taken_0x45f9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F9B8u;
            // 0x45f9bc: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f9b8) {
            ctx->pc = 0x45FA34u;
            goto label_45fa34;
        }
    }
    ctx->pc = 0x45F9C0u;
label_45f9c0:
    // 0x45f9c0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45f9c4:
    // 0x45f9c4: 0xc123328  jal         func_48CCA0
label_45f9c8:
    if (ctx->pc == 0x45F9C8u) {
        ctx->pc = 0x45F9C8u;
            // 0x45f9c8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x45F9CCu;
        goto label_45f9cc;
    }
    ctx->pc = 0x45F9C4u;
    SET_GPR_U32(ctx, 31, 0x45F9CCu);
    ctx->pc = 0x45F9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F9C4u;
            // 0x45f9c8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F9CCu; }
        if (ctx->pc != 0x45F9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F9CCu; }
        if (ctx->pc != 0x45F9CCu) { return; }
    }
    ctx->pc = 0x45F9CCu;
label_45f9cc:
    // 0x45f9cc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_45f9d0:
    if (ctx->pc == 0x45F9D0u) {
        ctx->pc = 0x45F9D0u;
            // 0x45f9d0: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x45F9D4u;
        goto label_45f9d4;
    }
    ctx->pc = 0x45F9CCu;
    {
        const bool branch_taken_0x45f9cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x45F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F9CCu;
            // 0x45f9d0: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f9cc) {
            ctx->pc = 0x45F9E0u;
            goto label_45f9e0;
        }
    }
    ctx->pc = 0x45F9D4u;
label_45f9d4:
    // 0x45f9d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_45f9d8:
    if (ctx->pc == 0x45F9D8u) {
        ctx->pc = 0x45F9DCu;
        goto label_45f9dc;
    }
    ctx->pc = 0x45F9D4u;
    {
        const bool branch_taken_0x45f9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f9d4) {
            ctx->pc = 0x45F9E0u;
            goto label_45f9e0;
        }
    }
    ctx->pc = 0x45F9DCu;
label_45f9dc:
    // 0x45f9dc: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x45f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_45f9e0:
    // 0x45f9e0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_45f9e4:
    if (ctx->pc == 0x45F9E4u) {
        ctx->pc = 0x45F9E8u;
        goto label_45f9e8;
    }
    ctx->pc = 0x45F9E0u;
    {
        const bool branch_taken_0x45f9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f9e0) {
            ctx->pc = 0x45FA30u;
            goto label_45fa30;
        }
    }
    ctx->pc = 0x45F9E8u;
label_45f9e8:
    // 0x45f9e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x45f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_45f9ec:
    // 0x45f9ec: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x45f9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_45f9f0:
    // 0x45f9f0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_45f9f4:
    if (ctx->pc == 0x45F9F4u) {
        ctx->pc = 0x45F9F8u;
        goto label_45f9f8;
    }
    ctx->pc = 0x45F9F0u;
    {
        const bool branch_taken_0x45f9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f9f0) {
            ctx->pc = 0x45FA30u;
            goto label_45fa30;
        }
    }
    ctx->pc = 0x45F9F8u;
label_45f9f8:
    // 0x45f9f8: 0x1000000d  b           . + 4 + (0xD << 2)
label_45f9fc:
    if (ctx->pc == 0x45F9FCu) {
        ctx->pc = 0x45F9FCu;
            // 0x45f9fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x45FA00u;
        goto label_45fa00;
    }
    ctx->pc = 0x45F9F8u;
    {
        const bool branch_taken_0x45f9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F9F8u;
            // 0x45f9fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f9f8) {
            ctx->pc = 0x45FA30u;
            goto label_45fa30;
        }
    }
    ctx->pc = 0x45FA00u;
label_45fa00:
    // 0x45fa00: 0xc123328  jal         func_48CCA0
label_45fa04:
    if (ctx->pc == 0x45FA04u) {
        ctx->pc = 0x45FA04u;
            // 0x45fa04: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x45FA08u;
        goto label_45fa08;
    }
    ctx->pc = 0x45FA00u;
    SET_GPR_U32(ctx, 31, 0x45FA08u);
    ctx->pc = 0x45FA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FA00u;
            // 0x45fa04: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FA08u; }
        if (ctx->pc != 0x45FA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FA08u; }
        if (ctx->pc != 0x45FA08u) { return; }
    }
    ctx->pc = 0x45FA08u;
label_45fa08:
    // 0x45fa08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45fa0c:
    // 0x45fa0c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x45fa0cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_45fa10:
    // 0x45fa10: 0x1810  mfhi        $v1
    ctx->pc = 0x45fa10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_45fa14:
    // 0x45fa14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_45fa18:
    if (ctx->pc == 0x45FA18u) {
        ctx->pc = 0x45FA1Cu;
        goto label_45fa1c;
    }
    ctx->pc = 0x45FA14u;
    {
        const bool branch_taken_0x45fa14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fa14) {
            ctx->pc = 0x45FA30u;
            goto label_45fa30;
        }
    }
    ctx->pc = 0x45FA1Cu;
label_45fa1c:
    // 0x45fa1c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x45fa1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_45fa20:
    // 0x45fa20: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_45fa24:
    if (ctx->pc == 0x45FA24u) {
        ctx->pc = 0x45FA24u;
            // 0x45fa24: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x45FA28u;
        goto label_45fa28;
    }
    ctx->pc = 0x45FA20u;
    {
        const bool branch_taken_0x45fa20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fa20) {
            ctx->pc = 0x45FA24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45FA20u;
            // 0x45fa24: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45FA30u;
            goto label_45fa30;
        }
    }
    ctx->pc = 0x45FA28u;
label_45fa28:
    // 0x45fa28: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x45fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_45fa2c:
    // 0x45fa2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45fa30:
    // 0x45fa30: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45fa34:
    // 0x45fa34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45fa34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45fa38:
    // 0x45fa38: 0xc1232d8  jal         func_48CB60
label_45fa3c:
    if (ctx->pc == 0x45FA3Cu) {
        ctx->pc = 0x45FA3Cu;
            // 0x45fa3c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x45FA40u;
        goto label_45fa40;
    }
    ctx->pc = 0x45FA38u;
    SET_GPR_U32(ctx, 31, 0x45FA40u);
    ctx->pc = 0x45FA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FA38u;
            // 0x45fa3c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FA40u; }
        if (ctx->pc != 0x45FA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FA40u; }
        if (ctx->pc != 0x45FA40u) { return; }
    }
    ctx->pc = 0x45FA40u;
label_45fa40:
    // 0x45fa40: 0x1000000f  b           . + 4 + (0xF << 2)
label_45fa44:
    if (ctx->pc == 0x45FA44u) {
        ctx->pc = 0x45FA44u;
            // 0x45fa44: 0x93a20100  lbu         $v0, 0x100($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->pc = 0x45FA48u;
        goto label_45fa48;
    }
    ctx->pc = 0x45FA40u;
    {
        const bool branch_taken_0x45fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FA40u;
            // 0x45fa44: 0x93a20100  lbu         $v0, 0x100($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fa40) {
            ctx->pc = 0x45FA80u;
            goto label_45fa80;
        }
    }
    ctx->pc = 0x45FA48u;
label_45fa48:
    // 0x45fa48: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x45fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_45fa4c:
    // 0x45fa4c: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x45fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_45fa50:
    // 0x45fa50: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x45fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_45fa54:
    // 0x45fa54: 0x10000009  b           . + 4 + (0x9 << 2)
label_45fa58:
    if (ctx->pc == 0x45FA58u) {
        ctx->pc = 0x45FA58u;
            // 0x45fa58: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->pc = 0x45FA5Cu;
        goto label_45fa5c;
    }
    ctx->pc = 0x45FA54u;
    {
        const bool branch_taken_0x45fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FA54u;
            // 0x45fa58: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fa54) {
            ctx->pc = 0x45FA7Cu;
            goto label_45fa7c;
        }
    }
    ctx->pc = 0x45FA5Cu;
label_45fa5c:
    // 0x45fa5c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x45fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_45fa60:
    // 0x45fa60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x45fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45fa64:
    // 0x45fa64: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x45fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_45fa68:
    // 0x45fa68: 0x10000004  b           . + 4 + (0x4 << 2)
label_45fa6c:
    if (ctx->pc == 0x45FA6Cu) {
        ctx->pc = 0x45FA6Cu;
            // 0x45fa6c: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->pc = 0x45FA70u;
        goto label_45fa70;
    }
    ctx->pc = 0x45FA68u;
    {
        const bool branch_taken_0x45fa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FA68u;
            // 0x45fa6c: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fa68) {
            ctx->pc = 0x45FA7Cu;
            goto label_45fa7c;
        }
    }
    ctx->pc = 0x45FA70u;
label_45fa70:
    // 0x45fa70: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_45fa74:
    if (ctx->pc == 0x45FA74u) {
        ctx->pc = 0x45FA74u;
            // 0x45fa74: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45FA78u;
        goto label_45fa78;
    }
    ctx->pc = 0x45FA70u;
    {
        const bool branch_taken_0x45fa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FA70u;
            // 0x45fa74: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fa70) {
            ctx->pc = 0x460104u;
            goto label_460104;
        }
    }
    ctx->pc = 0x45FA78u;
label_45fa78:
    // 0x45fa78: 0xa3a00100  sb          $zero, 0x100($sp)
    ctx->pc = 0x45fa78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
label_45fa7c:
    // 0x45fa7c: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x45fa7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
label_45fa80:
    // 0x45fa80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_45fa84:
    if (ctx->pc == 0x45FA84u) {
        ctx->pc = 0x45FA88u;
        goto label_45fa88;
    }
    ctx->pc = 0x45FA80u;
    {
        const bool branch_taken_0x45fa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45fa80) {
            ctx->pc = 0x45FA90u;
            goto label_45fa90;
        }
    }
    ctx->pc = 0x45FA88u;
label_45fa88:
    // 0x45fa88: 0x1000019f  b           . + 4 + (0x19F << 2)
label_45fa8c:
    if (ctx->pc == 0x45FA8Cu) {
        ctx->pc = 0x45FA8Cu;
            // 0x45fa8c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x45FA90u;
        goto label_45fa90;
    }
    ctx->pc = 0x45FA88u;
    {
        const bool branch_taken_0x45fa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FA88u;
            // 0x45fa8c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fa88) {
            ctx->pc = 0x460108u;
            goto label_460108;
        }
    }
    ctx->pc = 0x45FA90u;
label_45fa90:
    // 0x45fa90: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_45fa94:
    // 0x45fa94: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45fa98:
    // 0x45fa98: 0x845104a8  lh          $s1, 0x4A8($v0)
    ctx->pc = 0x45fa98u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1192)));
label_45fa9c:
    // 0x45fa9c: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x45fa9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_45faa0:
    // 0x45faa0: 0x847604aa  lh          $s6, 0x4AA($v1)
    ctx->pc = 0x45faa0u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1194)));
label_45faa4:
    // 0x45faa4: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x45faa4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_45faa8:
    // 0x45faa8: 0x2673c150  addiu       $s3, $s3, -0x3EB0
    ctx->pc = 0x45faa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951248));
label_45faac:
    // 0x45faac: 0x2652c2d0  addiu       $s2, $s2, -0x3D30
    ctx->pc = 0x45faacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951632));
label_45fab0:
    // 0x45fab0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_45fab4:
    // 0x45fab4: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x45fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_45fab8:
    // 0x45fab8: 0x844204b0  lh          $v0, 0x4B0($v0)
    ctx->pc = 0x45fab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1200)));
label_45fabc:
    // 0x45fabc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45fac0:
    // 0x45fac0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x45fac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_45fac4:
    // 0x45fac4: 0x846204b2  lh          $v0, 0x4B2($v1)
    ctx->pc = 0x45fac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1202)));
label_45fac8:
    // 0x45fac8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x45fac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_45facc:
    // 0x45facc: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x45faccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_45fad0:
    // 0x45fad0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x45fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_45fad4:
    // 0x45fad4: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x45fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_45fad8:
    // 0x45fad8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x45fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_45fadc:
    // 0x45fadc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x45fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_45fae0:
    // 0x45fae0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45fae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45fae4:
    // 0x45fae4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45fae8:
    // 0x45fae8: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x45fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_45faec:
    // 0x45faec: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x45faecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_45faf0:
    // 0x45faf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_45faf4:
    if (ctx->pc == 0x45FAF4u) {
        ctx->pc = 0x45FAF4u;
            // 0x45faf4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x45FAF8u;
        goto label_45faf8;
    }
    ctx->pc = 0x45FAF0u;
    {
        const bool branch_taken_0x45faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FAF0u;
            // 0x45faf4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45faf0) {
            ctx->pc = 0x45FB08u;
            goto label_45fb08;
        }
    }
    ctx->pc = 0x45FAF8u;
label_45faf8:
    // 0x45faf8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x45faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_45fafc:
    // 0x45fafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45fafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45fb00:
    // 0x45fb00: 0x0  nop
    ctx->pc = 0x45fb00u;
    // NOP
label_45fb04:
    // 0x45fb04: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x45fb04u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_45fb08:
    // 0x45fb08: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x45fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_45fb0c:
    // 0x45fb0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45fb10:
    // 0x45fb10: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x45fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_45fb14:
    // 0x45fb14: 0x108200c8  beq         $a0, $v0, . + 4 + (0xC8 << 2)
label_45fb18:
    if (ctx->pc == 0x45FB18u) {
        ctx->pc = 0x45FB1Cu;
        goto label_45fb1c;
    }
    ctx->pc = 0x45FB14u;
    {
        const bool branch_taken_0x45fb14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x45fb14) {
            ctx->pc = 0x45FE38u;
            goto label_45fe38;
        }
    }
    ctx->pc = 0x45FB1Cu;
label_45fb1c:
    // 0x45fb1c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x45fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_45fb20:
    // 0x45fb20: 0x108200c3  beq         $a0, $v0, . + 4 + (0xC3 << 2)
label_45fb24:
    if (ctx->pc == 0x45FB24u) {
        ctx->pc = 0x45FB28u;
        goto label_45fb28;
    }
    ctx->pc = 0x45FB20u;
    {
        const bool branch_taken_0x45fb20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x45fb20) {
            ctx->pc = 0x45FE30u;
            goto label_45fe30;
        }
    }
    ctx->pc = 0x45FB28u;
label_45fb28:
    // 0x45fb28: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x45fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_45fb2c:
    // 0x45fb2c: 0x108300be  beq         $a0, $v1, . + 4 + (0xBE << 2)
label_45fb30:
    if (ctx->pc == 0x45FB30u) {
        ctx->pc = 0x45FB34u;
        goto label_45fb34;
    }
    ctx->pc = 0x45FB2Cu;
    {
        const bool branch_taken_0x45fb2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x45fb2c) {
            ctx->pc = 0x45FE28u;
            goto label_45fe28;
        }
    }
    ctx->pc = 0x45FB34u;
label_45fb34:
    // 0x45fb34: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x45fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_45fb38:
    // 0x45fb38: 0x108500b3  beq         $a0, $a1, . + 4 + (0xB3 << 2)
label_45fb3c:
    if (ctx->pc == 0x45FB3Cu) {
        ctx->pc = 0x45FB40u;
        goto label_45fb40;
    }
    ctx->pc = 0x45FB38u;
    {
        const bool branch_taken_0x45fb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x45fb38) {
            ctx->pc = 0x45FE08u;
            goto label_45fe08;
        }
    }
    ctx->pc = 0x45FB40u;
label_45fb40:
    // 0x45fb40: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x45fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45fb44:
    // 0x45fb44: 0x108200a8  beq         $a0, $v0, . + 4 + (0xA8 << 2)
label_45fb48:
    if (ctx->pc == 0x45FB48u) {
        ctx->pc = 0x45FB4Cu;
        goto label_45fb4c;
    }
    ctx->pc = 0x45FB44u;
    {
        const bool branch_taken_0x45fb44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x45fb44) {
            ctx->pc = 0x45FDE8u;
            goto label_45fde8;
        }
    }
    ctx->pc = 0x45FB4Cu;
label_45fb4c:
    // 0x45fb4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45fb50:
    // 0x45fb50: 0x1082009d  beq         $a0, $v0, . + 4 + (0x9D << 2)
label_45fb54:
    if (ctx->pc == 0x45FB54u) {
        ctx->pc = 0x45FB58u;
        goto label_45fb58;
    }
    ctx->pc = 0x45FB50u;
    {
        const bool branch_taken_0x45fb50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x45fb50) {
            ctx->pc = 0x45FDC8u;
            goto label_45fdc8;
        }
    }
    ctx->pc = 0x45FB58u;
label_45fb58:
    // 0x45fb58: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x45fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_45fb5c:
    // 0x45fb5c: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
label_45fb60:
    if (ctx->pc == 0x45FB60u) {
        ctx->pc = 0x45FB64u;
        goto label_45fb64;
    }
    ctx->pc = 0x45FB5Cu;
    {
        const bool branch_taken_0x45fb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x45fb5c) {
            ctx->pc = 0x45FBD0u;
            goto label_45fbd0;
        }
    }
    ctx->pc = 0x45FB64u;
label_45fb64:
    // 0x45fb64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45fb68:
    // 0x45fb68: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_45fb6c:
    if (ctx->pc == 0x45FB6Cu) {
        ctx->pc = 0x45FB70u;
        goto label_45fb70;
    }
    ctx->pc = 0x45FB68u;
    {
        const bool branch_taken_0x45fb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x45fb68) {
            ctx->pc = 0x45FBA8u;
            goto label_45fba8;
        }
    }
    ctx->pc = 0x45FB70u;
label_45fb70:
    // 0x45fb70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_45fb74:
    if (ctx->pc == 0x45FB74u) {
        ctx->pc = 0x45FB78u;
        goto label_45fb78;
    }
    ctx->pc = 0x45FB70u;
    {
        const bool branch_taken_0x45fb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fb70) {
            ctx->pc = 0x45FB80u;
            goto label_45fb80;
        }
    }
    ctx->pc = 0x45FB78u;
label_45fb78:
    // 0x45fb78: 0x10000155  b           . + 4 + (0x155 << 2)
label_45fb7c:
    if (ctx->pc == 0x45FB7Cu) {
        ctx->pc = 0x45FB80u;
        goto label_45fb80;
    }
    ctx->pc = 0x45FB78u;
    {
        const bool branch_taken_0x45fb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fb78) {
            ctx->pc = 0x4600D0u;
            goto label_4600d0;
        }
    }
    ctx->pc = 0x45FB80u;
label_45fb80:
    // 0x45fb80: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45fb84:
    // 0x45fb84: 0xc123328  jal         func_48CCA0
label_45fb88:
    if (ctx->pc == 0x45FB88u) {
        ctx->pc = 0x45FB88u;
            // 0x45fb88: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x45FB8Cu;
        goto label_45fb8c;
    }
    ctx->pc = 0x45FB84u;
    SET_GPR_U32(ctx, 31, 0x45FB8Cu);
    ctx->pc = 0x45FB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FB84u;
            // 0x45fb88: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FB8Cu; }
        if (ctx->pc != 0x45FB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FB8Cu; }
        if (ctx->pc != 0x45FB8Cu) { return; }
    }
    ctx->pc = 0x45FB8Cu;
label_45fb8c:
    // 0x45fb8c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x45fb8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_45fb90:
    // 0x45fb90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45fb94:
    // 0x45fb94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x45fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45fb98:
    // 0x45fb98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45fb9c:
    // 0x45fb9c: 0x10000124  b           . + 4 + (0x124 << 2)
label_45fba0:
    if (ctx->pc == 0x45FBA0u) {
        ctx->pc = 0x45FBA0u;
            // 0x45fba0: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x45FBA4u;
        goto label_45fba4;
    }
    ctx->pc = 0x45FB9Cu;
    {
        const bool branch_taken_0x45fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FB9Cu;
            // 0x45fba0: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fb9c) {
            ctx->pc = 0x460030u;
            goto label_460030;
        }
    }
    ctx->pc = 0x45FBA4u;
label_45fba4:
    // 0x45fba4: 0x0  nop
    ctx->pc = 0x45fba4u;
    // NOP
label_45fba8:
    // 0x45fba8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45fbac:
    // 0x45fbac: 0xc123328  jal         func_48CCA0
label_45fbb0:
    if (ctx->pc == 0x45FBB0u) {
        ctx->pc = 0x45FBB0u;
            // 0x45fbb0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x45FBB4u;
        goto label_45fbb4;
    }
    ctx->pc = 0x45FBACu;
    SET_GPR_U32(ctx, 31, 0x45FBB4u);
    ctx->pc = 0x45FBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FBACu;
            // 0x45fbb0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FBB4u; }
        if (ctx->pc != 0x45FBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FBB4u; }
        if (ctx->pc != 0x45FBB4u) { return; }
    }
    ctx->pc = 0x45FBB4u;
label_45fbb4:
    // 0x45fbb4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x45fbb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_45fbb8:
    // 0x45fbb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45fbbc:
    // 0x45fbbc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x45fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45fbc0:
    // 0x45fbc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45fbc4:
    // 0x45fbc4: 0x1000011a  b           . + 4 + (0x11A << 2)
label_45fbc8:
    if (ctx->pc == 0x45FBC8u) {
        ctx->pc = 0x45FBC8u;
            // 0x45fbc8: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x45FBCCu;
        goto label_45fbcc;
    }
    ctx->pc = 0x45FBC4u;
    {
        const bool branch_taken_0x45fbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FBC4u;
            // 0x45fbc8: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fbc4) {
            ctx->pc = 0x460030u;
            goto label_460030;
        }
    }
    ctx->pc = 0x45FBCCu;
label_45fbcc:
    // 0x45fbcc: 0x0  nop
    ctx->pc = 0x45fbccu;
    // NOP
label_45fbd0:
    // 0x45fbd0: 0xc123328  jal         func_48CCA0
label_45fbd4:
    if (ctx->pc == 0x45FBD4u) {
        ctx->pc = 0x45FBD4u;
            // 0x45fbd4: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x45FBD8u;
        goto label_45fbd8;
    }
    ctx->pc = 0x45FBD0u;
    SET_GPR_U32(ctx, 31, 0x45FBD8u);
    ctx->pc = 0x45FBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FBD0u;
            // 0x45fbd4: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FBD8u; }
        if (ctx->pc != 0x45FBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FBD8u; }
        if (ctx->pc != 0x45FBD8u) { return; }
    }
    ctx->pc = 0x45FBD8u;
label_45fbd8:
    // 0x45fbd8: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x45fbd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_45fbdc:
    // 0x45fbdc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_45fbe0:
    if (ctx->pc == 0x45FBE0u) {
        ctx->pc = 0x45FBE4u;
        goto label_45fbe4;
    }
    ctx->pc = 0x45FBDCu;
    {
        const bool branch_taken_0x45fbdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x45fbdc) {
            ctx->pc = 0x45FBF0u;
            goto label_45fbf0;
        }
    }
    ctx->pc = 0x45FBE4u;
label_45fbe4:
    // 0x45fbe4: 0x10000006  b           . + 4 + (0x6 << 2)
label_45fbe8:
    if (ctx->pc == 0x45FBE8u) {
        ctx->pc = 0x45FBE8u;
            // 0x45fbe8: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x45FBECu;
        goto label_45fbec;
    }
    ctx->pc = 0x45FBE4u;
    {
        const bool branch_taken_0x45fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FBE4u;
            // 0x45fbe8: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fbe4) {
            ctx->pc = 0x45FC00u;
            goto label_45fc00;
        }
    }
    ctx->pc = 0x45FBECu;
label_45fbec:
    // 0x45fbec: 0x0  nop
    ctx->pc = 0x45fbecu;
    // NOP
label_45fbf0:
    // 0x45fbf0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_45fbf4:
    if (ctx->pc == 0x45FBF4u) {
        ctx->pc = 0x45FBF8u;
        goto label_45fbf8;
    }
    ctx->pc = 0x45FBF0u;
    {
        const bool branch_taken_0x45fbf0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x45fbf0) {
            ctx->pc = 0x45FC00u;
            goto label_45fc00;
        }
    }
    ctx->pc = 0x45FBF8u;
label_45fbf8:
    // 0x45fbf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45fbf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45fbfc:
    // 0x45fbfc: 0x0  nop
    ctx->pc = 0x45fbfcu;
    // NOP
label_45fc00:
    // 0x45fc00: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x45fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_45fc04:
    // 0x45fc04: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x45fc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_45fc08:
    // 0x45fc08: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x45fc08u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_45fc0c:
    // 0x45fc0c: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x45fc0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45fc10:
    // 0x45fc10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x45fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45fc14:
    // 0x45fc14: 0x8ee30054  lw          $v1, 0x54($s7)
    ctx->pc = 0x45fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_45fc18:
    // 0x45fc18: 0x8c64060c  lw          $a0, 0x60C($v1)
    ctx->pc = 0x45fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1548)));
label_45fc1c:
    // 0x45fc1c: 0x1810  mfhi        $v1
    ctx->pc = 0x45fc1cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_45fc20:
    // 0x45fc20: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x45fc20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_45fc24:
    // 0x45fc24: 0x66a821  addu        $s5, $v1, $a2
    ctx->pc = 0x45fc24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_45fc28:
    // 0x45fc28: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x45fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45fc2c:
    // 0x45fc2c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x45fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_45fc30:
    // 0x45fc30: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x45fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45fc34:
    // 0x45fc34: 0xc0506ac  jal         func_141AB0
label_45fc38:
    if (ctx->pc == 0x45FC38u) {
        ctx->pc = 0x45FC38u;
            // 0x45fc38: 0x43f023  subu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x45FC3Cu;
        goto label_45fc3c;
    }
    ctx->pc = 0x45FC34u;
    SET_GPR_U32(ctx, 31, 0x45FC3Cu);
    ctx->pc = 0x45FC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FC34u;
            // 0x45fc38: 0x43f023  subu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FC3Cu; }
        if (ctx->pc != 0x45FC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FC3Cu; }
        if (ctx->pc != 0x45FC3Cu) { return; }
    }
    ctx->pc = 0x45FC3Cu;
label_45fc3c:
    // 0x45fc3c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x45fc3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45fc40:
    // 0x45fc40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45fc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45fc44:
    // 0x45fc44: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45fc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45fc48:
    // 0x45fc48: 0x320f809  jalr        $t9
label_45fc4c:
    if (ctx->pc == 0x45FC4Cu) {
        ctx->pc = 0x45FC4Cu;
            // 0x45fc4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45FC50u;
        goto label_45fc50;
    }
    ctx->pc = 0x45FC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45FC50u);
        ctx->pc = 0x45FC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FC48u;
            // 0x45fc4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45FC50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45FC50u; }
            if (ctx->pc != 0x45FC50u) { return; }
        }
        }
    }
    ctx->pc = 0x45FC50u;
label_45fc50:
    // 0x45fc50: 0x1aa0003b  blez        $s5, . + 4 + (0x3B << 2)
label_45fc54:
    if (ctx->pc == 0x45FC54u) {
        ctx->pc = 0x45FC58u;
        goto label_45fc58;
    }
    ctx->pc = 0x45FC50u;
    {
        const bool branch_taken_0x45fc50 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x45fc50) {
            ctx->pc = 0x45FD40u;
            goto label_45fd40;
        }
    }
    ctx->pc = 0x45FC58u;
label_45fc58:
    // 0x45fc58: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x45fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_45fc5c:
    // 0x45fc5c: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x45fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_45fc60:
    // 0x45fc60: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x45fc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_45fc64:
    // 0x45fc64: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x45fc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_45fc68:
    // 0x45fc68: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x45fc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_45fc6c:
    // 0x45fc6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45fc70:
    // 0x45fc70: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x45fc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_45fc74:
    // 0x45fc74: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45fc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fc78:
    // 0x45fc78: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x45fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
label_45fc7c:
    // 0x45fc7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45fc7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45fc80:
    // 0x45fc80: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x45fc80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_45fc84:
    // 0x45fc84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x45fc84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45fc88:
    // 0x45fc88: 0x0  nop
    ctx->pc = 0x45fc88u;
    // NOP
label_45fc8c:
    // 0x45fc8c: 0x46041542  mul.s       $f21, $f2, $f4
    ctx->pc = 0x45fc8cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_45fc90:
    // 0x45fc90: 0x3c0243da  lui         $v0, 0x43DA
    ctx->pc = 0x45fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17370 << 16));
label_45fc94:
    // 0x45fc94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45fc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45fc98:
    // 0x45fc98: 0x0  nop
    ctx->pc = 0x45fc98u;
    // NOP
label_45fc9c:
    // 0x45fc9c: 0x46150380  add.s       $f14, $f0, $f21
    ctx->pc = 0x45fc9cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_45fca0:
    // 0x45fca0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45fca4:
    // 0x45fca4: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x45fca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45fca8:
    // 0x45fca8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x45fca8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45fcac:
    // 0x45fcac: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x45fcacu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45fcb0:
    // 0x45fcb0: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x45fcb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_45fcb4:
    // 0x45fcb4: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45fcb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45fcb8:
    // 0x45fcb8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45fcb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45fcbc:
    // 0x45fcbc: 0x46047301  sub.s       $f12, $f14, $f4
    ctx->pc = 0x45fcbcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[14], ctx->f[4]);
label_45fcc0:
    // 0x45fcc0: 0x4603a3c0  add.s       $f15, $f20, $f3
    ctx->pc = 0x45fcc0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
label_45fcc4:
    // 0x45fcc4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45fcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45fcc8:
    // 0x45fcc8: 0xc0bc284  jal         func_2F0A10
label_45fccc:
    if (ctx->pc == 0x45FCCCu) {
        ctx->pc = 0x45FCCCu;
            // 0x45fccc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45FCD0u;
        goto label_45fcd0;
    }
    ctx->pc = 0x45FCC8u;
    SET_GPR_U32(ctx, 31, 0x45FCD0u);
    ctx->pc = 0x45FCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FCC8u;
            // 0x45fccc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FCD0u; }
        if (ctx->pc != 0x45FCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FCD0u; }
        if (ctx->pc != 0x45FCD0u) { return; }
    }
    ctx->pc = 0x45FCD0u;
label_45fcd0:
    // 0x45fcd0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x45fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_45fcd4:
    // 0x45fcd4: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x45fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
label_45fcd8:
    // 0x45fcd8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x45fcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_45fcdc:
    // 0x45fcdc: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x45fcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_45fce0:
    // 0x45fce0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x45fce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_45fce4:
    // 0x45fce4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45fce8:
    // 0x45fce8: 0x3c0243da  lui         $v0, 0x43DA
    ctx->pc = 0x45fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17370 << 16));
label_45fcec:
    // 0x45fcec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45fcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fcf0:
    // 0x45fcf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45fcf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45fcf4:
    // 0x45fcf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45fcf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45fcf8:
    // 0x45fcf8: 0x46150301  sub.s       $f12, $f0, $f21
    ctx->pc = 0x45fcf8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_45fcfc:
    // 0x45fcfc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45fd00:
    // 0x45fd00: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45fd00u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45fd04:
    // 0x45fd04: 0x0  nop
    ctx->pc = 0x45fd04u;
    // NOP
label_45fd08:
    // 0x45fd08: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45fd08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45fd0c:
    // 0x45fd0c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x45fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45fd10:
    // 0x45fd10: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45fd14:
    // 0x45fd14: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x45fd14u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45fd18:
    // 0x45fd18: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x45fd18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_45fd1c:
    // 0x45fd1c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x45fd1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_45fd20:
    // 0x45fd20: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45fd20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45fd24:
    // 0x45fd24: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x45fd24u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45fd28:
    // 0x45fd28: 0x460c1380  add.s       $f14, $f2, $f12
    ctx->pc = 0x45fd28u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_45fd2c:
    // 0x45fd2c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45fd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45fd30:
    // 0x45fd30: 0xc0bc284  jal         func_2F0A10
label_45fd34:
    if (ctx->pc == 0x45FD34u) {
        ctx->pc = 0x45FD34u;
            // 0x45fd34: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45FD38u;
        goto label_45fd38;
    }
    ctx->pc = 0x45FD30u;
    SET_GPR_U32(ctx, 31, 0x45FD38u);
    ctx->pc = 0x45FD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FD30u;
            // 0x45fd34: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FD38u; }
        if (ctx->pc != 0x45FD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FD38u; }
        if (ctx->pc != 0x45FD38u) { return; }
    }
    ctx->pc = 0x45FD38u;
label_45fd38:
    // 0x45fd38: 0x1000001d  b           . + 4 + (0x1D << 2)
label_45fd3c:
    if (ctx->pc == 0x45FD3Cu) {
        ctx->pc = 0x45FD40u;
        goto label_45fd40;
    }
    ctx->pc = 0x45FD38u;
    {
        const bool branch_taken_0x45fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fd38) {
            ctx->pc = 0x45FDB0u;
            goto label_45fdb0;
        }
    }
    ctx->pc = 0x45FD40u;
label_45fd40:
    // 0x45fd40: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x45fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
label_45fd44:
    // 0x45fd44: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x45fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_45fd48:
    // 0x45fd48: 0x3c0343da  lui         $v1, 0x43DA
    ctx->pc = 0x45fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17370 << 16));
label_45fd4c:
    // 0x45fd4c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x45fd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45fd50:
    // 0x45fd50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x45fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_45fd54:
    // 0x45fd54: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x45fd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_45fd58:
    // 0x45fd58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45fd5c:
    // 0x45fd5c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x45fd5cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45fd60:
    // 0x45fd60: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x45fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_45fd64:
    // 0x45fd64: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x45fd64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_45fd68:
    // 0x45fd68: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x45fd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_45fd6c:
    // 0x45fd6c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45fd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fd70:
    // 0x45fd70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45fd70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45fd74:
    // 0x45fd74: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x45fd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45fd78:
    // 0x45fd78: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45fd78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45fd7c:
    // 0x45fd7c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45fd80:
    // 0x45fd80: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x45fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45fd84:
    // 0x45fd84: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x45fd84u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45fd88:
    // 0x45fd88: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x45fd88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_45fd8c:
    // 0x45fd8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45fd8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45fd90:
    // 0x45fd90: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x45fd90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_45fd94:
    // 0x45fd94: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x45fd94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45fd98:
    // 0x45fd98: 0x4602a3c0  add.s       $f15, $f20, $f2
    ctx->pc = 0x45fd98u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_45fd9c:
    // 0x45fd9c: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x45fd9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_45fda0:
    // 0x45fda0: 0x46030380  add.s       $f14, $f0, $f3
    ctx->pc = 0x45fda0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_45fda4:
    // 0x45fda4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45fda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45fda8:
    // 0x45fda8: 0xc0bc284  jal         func_2F0A10
label_45fdac:
    if (ctx->pc == 0x45FDACu) {
        ctx->pc = 0x45FDACu;
            // 0x45fdac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45FDB0u;
        goto label_45fdb0;
    }
    ctx->pc = 0x45FDA8u;
    SET_GPR_U32(ctx, 31, 0x45FDB0u);
    ctx->pc = 0x45FDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FDA8u;
            // 0x45fdac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FDB0u; }
        if (ctx->pc != 0x45FDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FDB0u; }
        if (ctx->pc != 0x45FDB0u) { return; }
    }
    ctx->pc = 0x45FDB0u;
label_45fdb0:
    // 0x45fdb0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x45fdb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45fdb4:
    // 0x45fdb4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45fdb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45fdb8:
    // 0x45fdb8: 0x320f809  jalr        $t9
label_45fdbc:
    if (ctx->pc == 0x45FDBCu) {
        ctx->pc = 0x45FDBCu;
            // 0x45fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45FDC0u;
        goto label_45fdc0;
    }
    ctx->pc = 0x45FDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45FDC0u);
        ctx->pc = 0x45FDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FDB8u;
            // 0x45fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45FDC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45FDC0u; }
            if (ctx->pc != 0x45FDC0u) { return; }
        }
        }
    }
    ctx->pc = 0x45FDC0u;
label_45fdc0:
    // 0x45fdc0: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_45fdc4:
    if (ctx->pc == 0x45FDC4u) {
        ctx->pc = 0x45FDC8u;
        goto label_45fdc8;
    }
    ctx->pc = 0x45FDC0u;
    {
        const bool branch_taken_0x45fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fdc0) {
            ctx->pc = 0x4600D0u;
            goto label_4600d0;
        }
    }
    ctx->pc = 0x45FDC8u;
label_45fdc8:
    // 0x45fdc8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45fdcc:
    // 0x45fdcc: 0xc123328  jal         func_48CCA0
label_45fdd0:
    if (ctx->pc == 0x45FDD0u) {
        ctx->pc = 0x45FDD0u;
            // 0x45fdd0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x45FDD4u;
        goto label_45fdd4;
    }
    ctx->pc = 0x45FDCCu;
    SET_GPR_U32(ctx, 31, 0x45FDD4u);
    ctx->pc = 0x45FDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FDCCu;
            // 0x45fdd0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FDD4u; }
        if (ctx->pc != 0x45FDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FDD4u; }
        if (ctx->pc != 0x45FDD4u) { return; }
    }
    ctx->pc = 0x45FDD4u;
label_45fdd4:
    // 0x45fdd4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x45fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_45fdd8:
    // 0x45fdd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45fddc:
    // 0x45fddc: 0x10000094  b           . + 4 + (0x94 << 2)
label_45fde0:
    if (ctx->pc == 0x45FDE0u) {
        ctx->pc = 0x45FDE0u;
            // 0x45fde0: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x45FDE4u;
        goto label_45fde4;
    }
    ctx->pc = 0x45FDDCu;
    {
        const bool branch_taken_0x45fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FDDCu;
            // 0x45fde0: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fddc) {
            ctx->pc = 0x460030u;
            goto label_460030;
        }
    }
    ctx->pc = 0x45FDE4u;
label_45fde4:
    // 0x45fde4: 0x0  nop
    ctx->pc = 0x45fde4u;
    // NOP
label_45fde8:
    // 0x45fde8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45fdec:
    // 0x45fdec: 0xc123328  jal         func_48CCA0
label_45fdf0:
    if (ctx->pc == 0x45FDF0u) {
        ctx->pc = 0x45FDF0u;
            // 0x45fdf0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45FDF4u;
        goto label_45fdf4;
    }
    ctx->pc = 0x45FDECu;
    SET_GPR_U32(ctx, 31, 0x45FDF4u);
    ctx->pc = 0x45FDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FDECu;
            // 0x45fdf0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FDF4u; }
        if (ctx->pc != 0x45FDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FDF4u; }
        if (ctx->pc != 0x45FDF4u) { return; }
    }
    ctx->pc = 0x45FDF4u;
label_45fdf4:
    // 0x45fdf4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x45fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_45fdf8:
    // 0x45fdf8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45fdfc:
    // 0x45fdfc: 0x1000008c  b           . + 4 + (0x8C << 2)
label_45fe00:
    if (ctx->pc == 0x45FE00u) {
        ctx->pc = 0x45FE00u;
            // 0x45fe00: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x45FE04u;
        goto label_45fe04;
    }
    ctx->pc = 0x45FDFCu;
    {
        const bool branch_taken_0x45fdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FDFCu;
            // 0x45fe00: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fdfc) {
            ctx->pc = 0x460030u;
            goto label_460030;
        }
    }
    ctx->pc = 0x45FE04u;
label_45fe04:
    // 0x45fe04: 0x0  nop
    ctx->pc = 0x45fe04u;
    // NOP
label_45fe08:
    // 0x45fe08: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45fe0c:
    // 0x45fe0c: 0xc123328  jal         func_48CCA0
label_45fe10:
    if (ctx->pc == 0x45FE10u) {
        ctx->pc = 0x45FE10u;
            // 0x45fe10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45FE14u;
        goto label_45fe14;
    }
    ctx->pc = 0x45FE0Cu;
    SET_GPR_U32(ctx, 31, 0x45FE14u);
    ctx->pc = 0x45FE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FE0Cu;
            // 0x45fe10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FE14u; }
        if (ctx->pc != 0x45FE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FE14u; }
        if (ctx->pc != 0x45FE14u) { return; }
    }
    ctx->pc = 0x45FE14u;
label_45fe14:
    // 0x45fe14: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x45fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
label_45fe18:
    // 0x45fe18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45fe1c:
    // 0x45fe1c: 0x10000084  b           . + 4 + (0x84 << 2)
label_45fe20:
    if (ctx->pc == 0x45FE20u) {
        ctx->pc = 0x45FE20u;
            // 0x45fe20: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x45FE24u;
        goto label_45fe24;
    }
    ctx->pc = 0x45FE1Cu;
    {
        const bool branch_taken_0x45fe1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FE1Cu;
            // 0x45fe20: 0x242a821  addu        $s5, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fe1c) {
            ctx->pc = 0x460030u;
            goto label_460030;
        }
    }
    ctx->pc = 0x45FE24u;
label_45fe24:
    // 0x45fe24: 0x0  nop
    ctx->pc = 0x45fe24u;
    // NOP
label_45fe28:
    // 0x45fe28: 0x10000081  b           . + 4 + (0x81 << 2)
label_45fe2c:
    if (ctx->pc == 0x45FE2Cu) {
        ctx->pc = 0x45FE2Cu;
            // 0x45fe2c: 0x265500d0  addiu       $s5, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->pc = 0x45FE30u;
        goto label_45fe30;
    }
    ctx->pc = 0x45FE28u;
    {
        const bool branch_taken_0x45fe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FE28u;
            // 0x45fe2c: 0x265500d0  addiu       $s5, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fe28) {
            ctx->pc = 0x460030u;
            goto label_460030;
        }
    }
    ctx->pc = 0x45FE30u;
label_45fe30:
    // 0x45fe30: 0x1000007f  b           . + 4 + (0x7F << 2)
label_45fe34:
    if (ctx->pc == 0x45FE34u) {
        ctx->pc = 0x45FE34u;
            // 0x45fe34: 0x265500e0  addiu       $s5, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x45FE38u;
        goto label_45fe38;
    }
    ctx->pc = 0x45FE30u;
    {
        const bool branch_taken_0x45fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FE30u;
            // 0x45fe34: 0x265500e0  addiu       $s5, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fe30) {
            ctx->pc = 0x460030u;
            goto label_460030;
        }
    }
    ctx->pc = 0x45FE38u;
label_45fe38:
    // 0x45fe38: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45fe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45fe3c:
    // 0x45fe3c: 0xc123328  jal         func_48CCA0
label_45fe40:
    if (ctx->pc == 0x45FE40u) {
        ctx->pc = 0x45FE40u;
            // 0x45fe40: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x45FE44u;
        goto label_45fe44;
    }
    ctx->pc = 0x45FE3Cu;
    SET_GPR_U32(ctx, 31, 0x45FE44u);
    ctx->pc = 0x45FE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FE3Cu;
            // 0x45fe40: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FE44u; }
        if (ctx->pc != 0x45FE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FE44u; }
        if (ctx->pc != 0x45FE44u) { return; }
    }
    ctx->pc = 0x45FE44u;
label_45fe44:
    // 0x45fe44: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x45fe44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_45fe48:
    // 0x45fe48: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_45fe4c:
    if (ctx->pc == 0x45FE4Cu) {
        ctx->pc = 0x45FE50u;
        goto label_45fe50;
    }
    ctx->pc = 0x45FE48u;
    {
        const bool branch_taken_0x45fe48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x45fe48) {
            ctx->pc = 0x45FE58u;
            goto label_45fe58;
        }
    }
    ctx->pc = 0x45FE50u;
label_45fe50:
    // 0x45fe50: 0x10000005  b           . + 4 + (0x5 << 2)
label_45fe54:
    if (ctx->pc == 0x45FE54u) {
        ctx->pc = 0x45FE54u;
            // 0x45fe54: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x45FE58u;
        goto label_45fe58;
    }
    ctx->pc = 0x45FE50u;
    {
        const bool branch_taken_0x45fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FE50u;
            // 0x45fe54: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fe50) {
            ctx->pc = 0x45FE68u;
            goto label_45fe68;
        }
    }
    ctx->pc = 0x45FE58u;
label_45fe58:
    // 0x45fe58: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_45fe5c:
    if (ctx->pc == 0x45FE5Cu) {
        ctx->pc = 0x45FE60u;
        goto label_45fe60;
    }
    ctx->pc = 0x45FE58u;
    {
        const bool branch_taken_0x45fe58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x45fe58) {
            ctx->pc = 0x45FE68u;
            goto label_45fe68;
        }
    }
    ctx->pc = 0x45FE60u;
label_45fe60:
    // 0x45fe60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45fe60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45fe64:
    // 0x45fe64: 0x0  nop
    ctx->pc = 0x45fe64u;
    // NOP
label_45fe68:
    // 0x45fe68: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x45fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_45fe6c:
    // 0x45fe6c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x45fe6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_45fe70:
    // 0x45fe70: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x45fe70u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_45fe74:
    // 0x45fe74: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x45fe74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45fe78:
    // 0x45fe78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x45fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45fe7c:
    // 0x45fe7c: 0x8ee30054  lw          $v1, 0x54($s7)
    ctx->pc = 0x45fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_45fe80:
    // 0x45fe80: 0x8c64060c  lw          $a0, 0x60C($v1)
    ctx->pc = 0x45fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1548)));
label_45fe84:
    // 0x45fe84: 0x1810  mfhi        $v1
    ctx->pc = 0x45fe84u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_45fe88:
    // 0x45fe88: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x45fe88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_45fe8c:
    // 0x45fe8c: 0x66a821  addu        $s5, $v1, $a2
    ctx->pc = 0x45fe8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_45fe90:
    // 0x45fe90: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x45fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45fe94:
    // 0x45fe94: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x45fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_45fe98:
    // 0x45fe98: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x45fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45fe9c:
    // 0x45fe9c: 0xc0506ac  jal         func_141AB0
label_45fea0:
    if (ctx->pc == 0x45FEA0u) {
        ctx->pc = 0x45FEA0u;
            // 0x45fea0: 0x43f023  subu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x45FEA4u;
        goto label_45fea4;
    }
    ctx->pc = 0x45FE9Cu;
    SET_GPR_U32(ctx, 31, 0x45FEA4u);
    ctx->pc = 0x45FEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FE9Cu;
            // 0x45fea0: 0x43f023  subu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FEA4u; }
        if (ctx->pc != 0x45FEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FEA4u; }
        if (ctx->pc != 0x45FEA4u) { return; }
    }
    ctx->pc = 0x45FEA4u;
label_45fea4:
    // 0x45fea4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x45fea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45fea8:
    // 0x45fea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45fea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45feac:
    // 0x45feac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45feacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45feb0:
    // 0x45feb0: 0x320f809  jalr        $t9
label_45feb4:
    if (ctx->pc == 0x45FEB4u) {
        ctx->pc = 0x45FEB4u;
            // 0x45feb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45FEB8u;
        goto label_45feb8;
    }
    ctx->pc = 0x45FEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45FEB8u);
        ctx->pc = 0x45FEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45FEB0u;
            // 0x45feb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45FEB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45FEB8u; }
            if (ctx->pc != 0x45FEB8u) { return; }
        }
        }
    }
    ctx->pc = 0x45FEB8u;
label_45feb8:
    // 0x45feb8: 0x1aa0003b  blez        $s5, . + 4 + (0x3B << 2)
label_45febc:
    if (ctx->pc == 0x45FEBCu) {
        ctx->pc = 0x45FEC0u;
        goto label_45fec0;
    }
    ctx->pc = 0x45FEB8u;
    {
        const bool branch_taken_0x45feb8 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x45feb8) {
            ctx->pc = 0x45FFA8u;
            goto label_45ffa8;
        }
    }
    ctx->pc = 0x45FEC0u;
label_45fec0:
    // 0x45fec0: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x45fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_45fec4:
    // 0x45fec4: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x45fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_45fec8:
    // 0x45fec8: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x45fec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_45fecc:
    // 0x45fecc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x45feccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_45fed0:
    // 0x45fed0: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x45fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_45fed4:
    // 0x45fed4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45fed8:
    // 0x45fed8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x45fed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_45fedc:
    // 0x45fedc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fee0:
    // 0x45fee0: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x45fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
label_45fee4:
    // 0x45fee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45fee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45fee8:
    // 0x45fee8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x45fee8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_45feec:
    // 0x45feec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x45feecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45fef0:
    // 0x45fef0: 0x0  nop
    ctx->pc = 0x45fef0u;
    // NOP
label_45fef4:
    // 0x45fef4: 0x46041542  mul.s       $f21, $f2, $f4
    ctx->pc = 0x45fef4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_45fef8:
    // 0x45fef8: 0x3c0243da  lui         $v0, 0x43DA
    ctx->pc = 0x45fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17370 << 16));
label_45fefc:
    // 0x45fefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45fefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ff00:
    // 0x45ff00: 0x0  nop
    ctx->pc = 0x45ff00u;
    // NOP
label_45ff04:
    // 0x45ff04: 0x46150380  add.s       $f14, $f0, $f21
    ctx->pc = 0x45ff04u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_45ff08:
    // 0x45ff08: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45ff0c:
    // 0x45ff0c: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x45ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45ff10:
    // 0x45ff10: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x45ff10u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45ff14:
    // 0x45ff14: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x45ff14u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ff18:
    // 0x45ff18: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x45ff18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_45ff1c:
    // 0x45ff1c: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45ff1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45ff20:
    // 0x45ff20: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45ff20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ff24:
    // 0x45ff24: 0x46047301  sub.s       $f12, $f14, $f4
    ctx->pc = 0x45ff24u;
    ctx->f[12] = FPU_SUB_S(ctx->f[14], ctx->f[4]);
label_45ff28:
    // 0x45ff28: 0x4603a3c0  add.s       $f15, $f20, $f3
    ctx->pc = 0x45ff28u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
label_45ff2c:
    // 0x45ff2c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45ff2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45ff30:
    // 0x45ff30: 0xc0bc284  jal         func_2F0A10
label_45ff34:
    if (ctx->pc == 0x45FF34u) {
        ctx->pc = 0x45FF34u;
            // 0x45ff34: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45FF38u;
        goto label_45ff38;
    }
    ctx->pc = 0x45FF30u;
    SET_GPR_U32(ctx, 31, 0x45FF38u);
    ctx->pc = 0x45FF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FF30u;
            // 0x45ff34: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FF38u; }
        if (ctx->pc != 0x45FF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FF38u; }
        if (ctx->pc != 0x45FF38u) { return; }
    }
    ctx->pc = 0x45FF38u;
label_45ff38:
    // 0x45ff38: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x45ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_45ff3c:
    // 0x45ff3c: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x45ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
label_45ff40:
    // 0x45ff40: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x45ff40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_45ff44:
    // 0x45ff44: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x45ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_45ff48:
    // 0x45ff48: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x45ff48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_45ff4c:
    // 0x45ff4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45ff50:
    // 0x45ff50: 0x3c0243da  lui         $v0, 0x43DA
    ctx->pc = 0x45ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17370 << 16));
label_45ff54:
    // 0x45ff54: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45ff54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ff58:
    // 0x45ff58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45ff58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ff5c:
    // 0x45ff5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ff5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ff60:
    // 0x45ff60: 0x46150301  sub.s       $f12, $f0, $f21
    ctx->pc = 0x45ff60u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_45ff64:
    // 0x45ff64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45ff68:
    // 0x45ff68: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45ff68u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ff6c:
    // 0x45ff6c: 0x0  nop
    ctx->pc = 0x45ff6cu;
    // NOP
label_45ff70:
    // 0x45ff70: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45ff70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45ff74:
    // 0x45ff74: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x45ff74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45ff78:
    // 0x45ff78: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ff7c:
    // 0x45ff7c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x45ff7cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ff80:
    // 0x45ff80: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x45ff80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_45ff84:
    // 0x45ff84: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x45ff84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_45ff88:
    // 0x45ff88: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45ff88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45ff8c:
    // 0x45ff8c: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x45ff8cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45ff90:
    // 0x45ff90: 0x460c1380  add.s       $f14, $f2, $f12
    ctx->pc = 0x45ff90u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_45ff94:
    // 0x45ff94: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45ff94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45ff98:
    // 0x45ff98: 0xc0bc284  jal         func_2F0A10
label_45ff9c:
    if (ctx->pc == 0x45FF9Cu) {
        ctx->pc = 0x45FF9Cu;
            // 0x45ff9c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45FFA0u;
        goto label_45ffa0;
    }
    ctx->pc = 0x45FF98u;
    SET_GPR_U32(ctx, 31, 0x45FFA0u);
    ctx->pc = 0x45FF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45FF98u;
            // 0x45ff9c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FFA0u; }
        if (ctx->pc != 0x45FFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45FFA0u; }
        if (ctx->pc != 0x45FFA0u) { return; }
    }
    ctx->pc = 0x45FFA0u;
label_45ffa0:
    // 0x45ffa0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_45ffa4:
    if (ctx->pc == 0x45FFA4u) {
        ctx->pc = 0x45FFA8u;
        goto label_45ffa8;
    }
    ctx->pc = 0x45FFA0u;
    {
        const bool branch_taken_0x45ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ffa0) {
            ctx->pc = 0x460018u;
            goto label_460018;
        }
    }
    ctx->pc = 0x45FFA8u;
label_45ffa8:
    // 0x45ffa8: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x45ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
label_45ffac:
    // 0x45ffac: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x45ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_45ffb0:
    // 0x45ffb0: 0x3c0343da  lui         $v1, 0x43DA
    ctx->pc = 0x45ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17370 << 16));
label_45ffb4:
    // 0x45ffb4: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x45ffb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45ffb8:
    // 0x45ffb8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x45ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_45ffbc:
    // 0x45ffbc: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x45ffbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_45ffc0:
    // 0x45ffc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45ffc4:
    // 0x45ffc4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x45ffc4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45ffc8:
    // 0x45ffc8: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x45ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_45ffcc:
    // 0x45ffcc: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x45ffccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_45ffd0:
    // 0x45ffd0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x45ffd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_45ffd4:
    // 0x45ffd4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45ffd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ffd8:
    // 0x45ffd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ffd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ffdc:
    // 0x45ffdc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x45ffdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45ffe0:
    // 0x45ffe0: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45ffe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45ffe4:
    // 0x45ffe4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45ffe8:
    // 0x45ffe8: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x45ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45ffec:
    // 0x45ffec: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x45ffecu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45fff0:
    // 0x45fff0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x45fff0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_45fff4:
    // 0x45fff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45fff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45fff8:
    // 0x45fff8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x45fff8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_45fffc:
    // 0x45fffc: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x45fffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_460000:
    // 0x460000: 0x4602a3c0  add.s       $f15, $f20, $f2
    ctx->pc = 0x460000u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_460004:
    // 0x460004: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x460004u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_460008:
    // 0x460008: 0x46030380  add.s       $f14, $f0, $f3
    ctx->pc = 0x460008u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_46000c:
    // 0x46000c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x46000cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_460010:
    // 0x460010: 0xc0bc284  jal         func_2F0A10
label_460014:
    if (ctx->pc == 0x460014u) {
        ctx->pc = 0x460014u;
            // 0x460014: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x460018u;
        goto label_460018;
    }
    ctx->pc = 0x460010u;
    SET_GPR_U32(ctx, 31, 0x460018u);
    ctx->pc = 0x460014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460010u;
            // 0x460014: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460018u; }
        if (ctx->pc != 0x460018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460018u; }
        if (ctx->pc != 0x460018u) { return; }
    }
    ctx->pc = 0x460018u;
label_460018:
    // 0x460018: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x460018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46001c:
    // 0x46001c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x46001cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_460020:
    // 0x460020: 0x320f809  jalr        $t9
label_460024:
    if (ctx->pc == 0x460024u) {
        ctx->pc = 0x460024u;
            // 0x460024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460028u;
        goto label_460028;
    }
    ctx->pc = 0x460020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x460028u);
        ctx->pc = 0x460024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460020u;
            // 0x460024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x460028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x460028u; }
            if (ctx->pc != 0x460028u) { return; }
        }
        }
    }
    ctx->pc = 0x460028u;
label_460028:
    // 0x460028: 0x10000029  b           . + 4 + (0x29 << 2)
label_46002c:
    if (ctx->pc == 0x46002Cu) {
        ctx->pc = 0x460030u;
        goto label_460030;
    }
    ctx->pc = 0x460028u;
    {
        const bool branch_taken_0x460028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460028) {
            ctx->pc = 0x4600D0u;
            goto label_4600d0;
        }
    }
    ctx->pc = 0x460030u;
label_460030:
    // 0x460030: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x460030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_460034:
    // 0x460034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x460034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_460038:
    // 0x460038: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x460038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_46003c:
    // 0x46003c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x46003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_460040:
    // 0x460040: 0x8ee20054  lw          $v0, 0x54($s7)
    ctx->pc = 0x460040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_460044:
    // 0x460044: 0xc6b5000c  lwc1        $f21, 0xC($s5)
    ctx->pc = 0x460044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_460048:
    // 0x460048: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x460048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_46004c:
    // 0x46004c: 0xc0506ac  jal         func_141AB0
label_460050:
    if (ctx->pc == 0x460050u) {
        ctx->pc = 0x460050u;
            // 0x460050: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x460054u;
        goto label_460054;
    }
    ctx->pc = 0x46004Cu;
    SET_GPR_U32(ctx, 31, 0x460054u);
    ctx->pc = 0x460050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46004Cu;
            // 0x460050: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460054u; }
        if (ctx->pc != 0x460054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460054u; }
        if (ctx->pc != 0x460054u) { return; }
    }
    ctx->pc = 0x460054u;
label_460054:
    // 0x460054: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x460054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_460058:
    // 0x460058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x460058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46005c:
    // 0x46005c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x46005cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_460060:
    // 0x460060: 0x320f809  jalr        $t9
label_460064:
    if (ctx->pc == 0x460064u) {
        ctx->pc = 0x460064u;
            // 0x460064: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x460068u;
        goto label_460068;
    }
    ctx->pc = 0x460060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x460068u);
        ctx->pc = 0x460064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460060u;
            // 0x460064: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x460068u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x460068u; }
            if (ctx->pc != 0x460068u) { return; }
        }
        }
    }
    ctx->pc = 0x460068u;
label_460068:
    // 0x460068: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x460068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_46006c:
    // 0x46006c: 0x3c0343da  lui         $v1, 0x43DA
    ctx->pc = 0x46006cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17370 << 16));
label_460070:
    // 0x460070: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x460070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_460074:
    // 0x460074: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x460074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_460078:
    // 0x460078: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x460078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_46007c:
    // 0x46007c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46007cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_460080:
    // 0x460080: 0x4615a3c0  add.s       $f15, $f20, $f21
    ctx->pc = 0x460080u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_460084:
    // 0x460084: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x460084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_460088:
    // 0x460088: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x460088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46008c:
    // 0x46008c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46008cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460090:
    // 0x460090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x460090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_460094:
    // 0x460094: 0x0  nop
    ctx->pc = 0x460094u;
    // NOP
label_460098:
    // 0x460098: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x460098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_46009c:
    // 0x46009c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x46009cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4600a0:
    // 0x4600a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4600a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4600a4:
    // 0x4600a4: 0x0  nop
    ctx->pc = 0x4600a4u;
    // NOP
label_4600a8:
    // 0x4600a8: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x4600a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4600ac:
    // 0x4600ac: 0x46160301  sub.s       $f12, $f0, $f22
    ctx->pc = 0x4600acu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_4600b0:
    // 0x4600b0: 0x46160380  add.s       $f14, $f0, $f22
    ctx->pc = 0x4600b0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_4600b4:
    // 0x4600b4: 0xc0bc284  jal         func_2F0A10
label_4600b8:
    if (ctx->pc == 0x4600B8u) {
        ctx->pc = 0x4600B8u;
            // 0x4600b8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4600BCu;
        goto label_4600bc;
    }
    ctx->pc = 0x4600B4u;
    SET_GPR_U32(ctx, 31, 0x4600BCu);
    ctx->pc = 0x4600B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4600B4u;
            // 0x4600b8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4600BCu; }
        if (ctx->pc != 0x4600BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4600BCu; }
        if (ctx->pc != 0x4600BCu) { return; }
    }
    ctx->pc = 0x4600BCu;
label_4600bc:
    // 0x4600bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4600bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4600c0:
    // 0x4600c0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4600c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4600c4:
    // 0x4600c4: 0x320f809  jalr        $t9
label_4600c8:
    if (ctx->pc == 0x4600C8u) {
        ctx->pc = 0x4600C8u;
            // 0x4600c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4600CCu;
        goto label_4600cc;
    }
    ctx->pc = 0x4600C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4600CCu);
        ctx->pc = 0x4600C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4600C4u;
            // 0x4600c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4600CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4600CCu; }
            if (ctx->pc != 0x4600CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4600CCu;
label_4600cc:
    // 0x4600cc: 0x0  nop
    ctx->pc = 0x4600ccu;
    // NOP
label_4600d0:
    // 0x4600d0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x4600d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4600d4:
    // 0x4600d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4600d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4600d8:
    // 0x4600d8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x4600d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_4600dc:
    // 0x4600dc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x4600dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4600e0:
    // 0x4600e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4600e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4600e4:
    // 0x4600e4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x4600e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_4600e8:
    // 0x4600e8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x4600e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4600ec:
    // 0x4600ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4600ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4600f0:
    // 0x4600f0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4600f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4600f4:
    // 0x4600f4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x4600f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_4600f8:
    // 0x4600f8: 0x5440fe79  bnel        $v0, $zero, . + 4 + (-0x187 << 2)
label_4600fc:
    if (ctx->pc == 0x4600FCu) {
        ctx->pc = 0x4600FCu;
            // 0x4600fc: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x460100u;
        goto label_460100;
    }
    ctx->pc = 0x4600F8u;
    {
        const bool branch_taken_0x4600f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4600f8) {
            ctx->pc = 0x4600FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4600F8u;
            // 0x4600fc: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45FAE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_45fae0;
        }
    }
    ctx->pc = 0x460100u;
label_460100:
    // 0x460100: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x460100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
label_460104:
    // 0x460104: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x460104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_460108:
    // 0x460108: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x460108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_46010c:
    // 0x46010c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x46010cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_460110:
    // 0x460110: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x460110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_460114:
    // 0x460114: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x460114u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_460118:
    // 0x460118: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x460118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_46011c:
    // 0x46011c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x46011cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_460120:
    // 0x460120: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x460120u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_460124:
    // 0x460124: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x460124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_460128:
    // 0x460128: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x460128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46012c:
    // 0x46012c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46012cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_460130:
    // 0x460130: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x460130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_460134:
    // 0x460134: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x460134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_460138:
    // 0x460138: 0x3e00008  jr          $ra
label_46013c:
    if (ctx->pc == 0x46013Cu) {
        ctx->pc = 0x46013Cu;
            // 0x46013c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x460140u;
        goto label_fallthrough_0x460138;
    }
    ctx->pc = 0x460138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46013Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460138u;
            // 0x46013c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x460138:
    ctx->pc = 0x460140u;
}
