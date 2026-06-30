#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FC880
// Address: 0x4fc880 - 0x4fd4c0
void sub_004FC880_0x4fc880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FC880_0x4fc880");
#endif

    switch (ctx->pc) {
        case 0x4fc880u: goto label_4fc880;
        case 0x4fc884u: goto label_4fc884;
        case 0x4fc888u: goto label_4fc888;
        case 0x4fc88cu: goto label_4fc88c;
        case 0x4fc890u: goto label_4fc890;
        case 0x4fc894u: goto label_4fc894;
        case 0x4fc898u: goto label_4fc898;
        case 0x4fc89cu: goto label_4fc89c;
        case 0x4fc8a0u: goto label_4fc8a0;
        case 0x4fc8a4u: goto label_4fc8a4;
        case 0x4fc8a8u: goto label_4fc8a8;
        case 0x4fc8acu: goto label_4fc8ac;
        case 0x4fc8b0u: goto label_4fc8b0;
        case 0x4fc8b4u: goto label_4fc8b4;
        case 0x4fc8b8u: goto label_4fc8b8;
        case 0x4fc8bcu: goto label_4fc8bc;
        case 0x4fc8c0u: goto label_4fc8c0;
        case 0x4fc8c4u: goto label_4fc8c4;
        case 0x4fc8c8u: goto label_4fc8c8;
        case 0x4fc8ccu: goto label_4fc8cc;
        case 0x4fc8d0u: goto label_4fc8d0;
        case 0x4fc8d4u: goto label_4fc8d4;
        case 0x4fc8d8u: goto label_4fc8d8;
        case 0x4fc8dcu: goto label_4fc8dc;
        case 0x4fc8e0u: goto label_4fc8e0;
        case 0x4fc8e4u: goto label_4fc8e4;
        case 0x4fc8e8u: goto label_4fc8e8;
        case 0x4fc8ecu: goto label_4fc8ec;
        case 0x4fc8f0u: goto label_4fc8f0;
        case 0x4fc8f4u: goto label_4fc8f4;
        case 0x4fc8f8u: goto label_4fc8f8;
        case 0x4fc8fcu: goto label_4fc8fc;
        case 0x4fc900u: goto label_4fc900;
        case 0x4fc904u: goto label_4fc904;
        case 0x4fc908u: goto label_4fc908;
        case 0x4fc90cu: goto label_4fc90c;
        case 0x4fc910u: goto label_4fc910;
        case 0x4fc914u: goto label_4fc914;
        case 0x4fc918u: goto label_4fc918;
        case 0x4fc91cu: goto label_4fc91c;
        case 0x4fc920u: goto label_4fc920;
        case 0x4fc924u: goto label_4fc924;
        case 0x4fc928u: goto label_4fc928;
        case 0x4fc92cu: goto label_4fc92c;
        case 0x4fc930u: goto label_4fc930;
        case 0x4fc934u: goto label_4fc934;
        case 0x4fc938u: goto label_4fc938;
        case 0x4fc93cu: goto label_4fc93c;
        case 0x4fc940u: goto label_4fc940;
        case 0x4fc944u: goto label_4fc944;
        case 0x4fc948u: goto label_4fc948;
        case 0x4fc94cu: goto label_4fc94c;
        case 0x4fc950u: goto label_4fc950;
        case 0x4fc954u: goto label_4fc954;
        case 0x4fc958u: goto label_4fc958;
        case 0x4fc95cu: goto label_4fc95c;
        case 0x4fc960u: goto label_4fc960;
        case 0x4fc964u: goto label_4fc964;
        case 0x4fc968u: goto label_4fc968;
        case 0x4fc96cu: goto label_4fc96c;
        case 0x4fc970u: goto label_4fc970;
        case 0x4fc974u: goto label_4fc974;
        case 0x4fc978u: goto label_4fc978;
        case 0x4fc97cu: goto label_4fc97c;
        case 0x4fc980u: goto label_4fc980;
        case 0x4fc984u: goto label_4fc984;
        case 0x4fc988u: goto label_4fc988;
        case 0x4fc98cu: goto label_4fc98c;
        case 0x4fc990u: goto label_4fc990;
        case 0x4fc994u: goto label_4fc994;
        case 0x4fc998u: goto label_4fc998;
        case 0x4fc99cu: goto label_4fc99c;
        case 0x4fc9a0u: goto label_4fc9a0;
        case 0x4fc9a4u: goto label_4fc9a4;
        case 0x4fc9a8u: goto label_4fc9a8;
        case 0x4fc9acu: goto label_4fc9ac;
        case 0x4fc9b0u: goto label_4fc9b0;
        case 0x4fc9b4u: goto label_4fc9b4;
        case 0x4fc9b8u: goto label_4fc9b8;
        case 0x4fc9bcu: goto label_4fc9bc;
        case 0x4fc9c0u: goto label_4fc9c0;
        case 0x4fc9c4u: goto label_4fc9c4;
        case 0x4fc9c8u: goto label_4fc9c8;
        case 0x4fc9ccu: goto label_4fc9cc;
        case 0x4fc9d0u: goto label_4fc9d0;
        case 0x4fc9d4u: goto label_4fc9d4;
        case 0x4fc9d8u: goto label_4fc9d8;
        case 0x4fc9dcu: goto label_4fc9dc;
        case 0x4fc9e0u: goto label_4fc9e0;
        case 0x4fc9e4u: goto label_4fc9e4;
        case 0x4fc9e8u: goto label_4fc9e8;
        case 0x4fc9ecu: goto label_4fc9ec;
        case 0x4fc9f0u: goto label_4fc9f0;
        case 0x4fc9f4u: goto label_4fc9f4;
        case 0x4fc9f8u: goto label_4fc9f8;
        case 0x4fc9fcu: goto label_4fc9fc;
        case 0x4fca00u: goto label_4fca00;
        case 0x4fca04u: goto label_4fca04;
        case 0x4fca08u: goto label_4fca08;
        case 0x4fca0cu: goto label_4fca0c;
        case 0x4fca10u: goto label_4fca10;
        case 0x4fca14u: goto label_4fca14;
        case 0x4fca18u: goto label_4fca18;
        case 0x4fca1cu: goto label_4fca1c;
        case 0x4fca20u: goto label_4fca20;
        case 0x4fca24u: goto label_4fca24;
        case 0x4fca28u: goto label_4fca28;
        case 0x4fca2cu: goto label_4fca2c;
        case 0x4fca30u: goto label_4fca30;
        case 0x4fca34u: goto label_4fca34;
        case 0x4fca38u: goto label_4fca38;
        case 0x4fca3cu: goto label_4fca3c;
        case 0x4fca40u: goto label_4fca40;
        case 0x4fca44u: goto label_4fca44;
        case 0x4fca48u: goto label_4fca48;
        case 0x4fca4cu: goto label_4fca4c;
        case 0x4fca50u: goto label_4fca50;
        case 0x4fca54u: goto label_4fca54;
        case 0x4fca58u: goto label_4fca58;
        case 0x4fca5cu: goto label_4fca5c;
        case 0x4fca60u: goto label_4fca60;
        case 0x4fca64u: goto label_4fca64;
        case 0x4fca68u: goto label_4fca68;
        case 0x4fca6cu: goto label_4fca6c;
        case 0x4fca70u: goto label_4fca70;
        case 0x4fca74u: goto label_4fca74;
        case 0x4fca78u: goto label_4fca78;
        case 0x4fca7cu: goto label_4fca7c;
        case 0x4fca80u: goto label_4fca80;
        case 0x4fca84u: goto label_4fca84;
        case 0x4fca88u: goto label_4fca88;
        case 0x4fca8cu: goto label_4fca8c;
        case 0x4fca90u: goto label_4fca90;
        case 0x4fca94u: goto label_4fca94;
        case 0x4fca98u: goto label_4fca98;
        case 0x4fca9cu: goto label_4fca9c;
        case 0x4fcaa0u: goto label_4fcaa0;
        case 0x4fcaa4u: goto label_4fcaa4;
        case 0x4fcaa8u: goto label_4fcaa8;
        case 0x4fcaacu: goto label_4fcaac;
        case 0x4fcab0u: goto label_4fcab0;
        case 0x4fcab4u: goto label_4fcab4;
        case 0x4fcab8u: goto label_4fcab8;
        case 0x4fcabcu: goto label_4fcabc;
        case 0x4fcac0u: goto label_4fcac0;
        case 0x4fcac4u: goto label_4fcac4;
        case 0x4fcac8u: goto label_4fcac8;
        case 0x4fcaccu: goto label_4fcacc;
        case 0x4fcad0u: goto label_4fcad0;
        case 0x4fcad4u: goto label_4fcad4;
        case 0x4fcad8u: goto label_4fcad8;
        case 0x4fcadcu: goto label_4fcadc;
        case 0x4fcae0u: goto label_4fcae0;
        case 0x4fcae4u: goto label_4fcae4;
        case 0x4fcae8u: goto label_4fcae8;
        case 0x4fcaecu: goto label_4fcaec;
        case 0x4fcaf0u: goto label_4fcaf0;
        case 0x4fcaf4u: goto label_4fcaf4;
        case 0x4fcaf8u: goto label_4fcaf8;
        case 0x4fcafcu: goto label_4fcafc;
        case 0x4fcb00u: goto label_4fcb00;
        case 0x4fcb04u: goto label_4fcb04;
        case 0x4fcb08u: goto label_4fcb08;
        case 0x4fcb0cu: goto label_4fcb0c;
        case 0x4fcb10u: goto label_4fcb10;
        case 0x4fcb14u: goto label_4fcb14;
        case 0x4fcb18u: goto label_4fcb18;
        case 0x4fcb1cu: goto label_4fcb1c;
        case 0x4fcb20u: goto label_4fcb20;
        case 0x4fcb24u: goto label_4fcb24;
        case 0x4fcb28u: goto label_4fcb28;
        case 0x4fcb2cu: goto label_4fcb2c;
        case 0x4fcb30u: goto label_4fcb30;
        case 0x4fcb34u: goto label_4fcb34;
        case 0x4fcb38u: goto label_4fcb38;
        case 0x4fcb3cu: goto label_4fcb3c;
        case 0x4fcb40u: goto label_4fcb40;
        case 0x4fcb44u: goto label_4fcb44;
        case 0x4fcb48u: goto label_4fcb48;
        case 0x4fcb4cu: goto label_4fcb4c;
        case 0x4fcb50u: goto label_4fcb50;
        case 0x4fcb54u: goto label_4fcb54;
        case 0x4fcb58u: goto label_4fcb58;
        case 0x4fcb5cu: goto label_4fcb5c;
        case 0x4fcb60u: goto label_4fcb60;
        case 0x4fcb64u: goto label_4fcb64;
        case 0x4fcb68u: goto label_4fcb68;
        case 0x4fcb6cu: goto label_4fcb6c;
        case 0x4fcb70u: goto label_4fcb70;
        case 0x4fcb74u: goto label_4fcb74;
        case 0x4fcb78u: goto label_4fcb78;
        case 0x4fcb7cu: goto label_4fcb7c;
        case 0x4fcb80u: goto label_4fcb80;
        case 0x4fcb84u: goto label_4fcb84;
        case 0x4fcb88u: goto label_4fcb88;
        case 0x4fcb8cu: goto label_4fcb8c;
        case 0x4fcb90u: goto label_4fcb90;
        case 0x4fcb94u: goto label_4fcb94;
        case 0x4fcb98u: goto label_4fcb98;
        case 0x4fcb9cu: goto label_4fcb9c;
        case 0x4fcba0u: goto label_4fcba0;
        case 0x4fcba4u: goto label_4fcba4;
        case 0x4fcba8u: goto label_4fcba8;
        case 0x4fcbacu: goto label_4fcbac;
        case 0x4fcbb0u: goto label_4fcbb0;
        case 0x4fcbb4u: goto label_4fcbb4;
        case 0x4fcbb8u: goto label_4fcbb8;
        case 0x4fcbbcu: goto label_4fcbbc;
        case 0x4fcbc0u: goto label_4fcbc0;
        case 0x4fcbc4u: goto label_4fcbc4;
        case 0x4fcbc8u: goto label_4fcbc8;
        case 0x4fcbccu: goto label_4fcbcc;
        case 0x4fcbd0u: goto label_4fcbd0;
        case 0x4fcbd4u: goto label_4fcbd4;
        case 0x4fcbd8u: goto label_4fcbd8;
        case 0x4fcbdcu: goto label_4fcbdc;
        case 0x4fcbe0u: goto label_4fcbe0;
        case 0x4fcbe4u: goto label_4fcbe4;
        case 0x4fcbe8u: goto label_4fcbe8;
        case 0x4fcbecu: goto label_4fcbec;
        case 0x4fcbf0u: goto label_4fcbf0;
        case 0x4fcbf4u: goto label_4fcbf4;
        case 0x4fcbf8u: goto label_4fcbf8;
        case 0x4fcbfcu: goto label_4fcbfc;
        case 0x4fcc00u: goto label_4fcc00;
        case 0x4fcc04u: goto label_4fcc04;
        case 0x4fcc08u: goto label_4fcc08;
        case 0x4fcc0cu: goto label_4fcc0c;
        case 0x4fcc10u: goto label_4fcc10;
        case 0x4fcc14u: goto label_4fcc14;
        case 0x4fcc18u: goto label_4fcc18;
        case 0x4fcc1cu: goto label_4fcc1c;
        case 0x4fcc20u: goto label_4fcc20;
        case 0x4fcc24u: goto label_4fcc24;
        case 0x4fcc28u: goto label_4fcc28;
        case 0x4fcc2cu: goto label_4fcc2c;
        case 0x4fcc30u: goto label_4fcc30;
        case 0x4fcc34u: goto label_4fcc34;
        case 0x4fcc38u: goto label_4fcc38;
        case 0x4fcc3cu: goto label_4fcc3c;
        case 0x4fcc40u: goto label_4fcc40;
        case 0x4fcc44u: goto label_4fcc44;
        case 0x4fcc48u: goto label_4fcc48;
        case 0x4fcc4cu: goto label_4fcc4c;
        case 0x4fcc50u: goto label_4fcc50;
        case 0x4fcc54u: goto label_4fcc54;
        case 0x4fcc58u: goto label_4fcc58;
        case 0x4fcc5cu: goto label_4fcc5c;
        case 0x4fcc60u: goto label_4fcc60;
        case 0x4fcc64u: goto label_4fcc64;
        case 0x4fcc68u: goto label_4fcc68;
        case 0x4fcc6cu: goto label_4fcc6c;
        case 0x4fcc70u: goto label_4fcc70;
        case 0x4fcc74u: goto label_4fcc74;
        case 0x4fcc78u: goto label_4fcc78;
        case 0x4fcc7cu: goto label_4fcc7c;
        case 0x4fcc80u: goto label_4fcc80;
        case 0x4fcc84u: goto label_4fcc84;
        case 0x4fcc88u: goto label_4fcc88;
        case 0x4fcc8cu: goto label_4fcc8c;
        case 0x4fcc90u: goto label_4fcc90;
        case 0x4fcc94u: goto label_4fcc94;
        case 0x4fcc98u: goto label_4fcc98;
        case 0x4fcc9cu: goto label_4fcc9c;
        case 0x4fcca0u: goto label_4fcca0;
        case 0x4fcca4u: goto label_4fcca4;
        case 0x4fcca8u: goto label_4fcca8;
        case 0x4fccacu: goto label_4fccac;
        case 0x4fccb0u: goto label_4fccb0;
        case 0x4fccb4u: goto label_4fccb4;
        case 0x4fccb8u: goto label_4fccb8;
        case 0x4fccbcu: goto label_4fccbc;
        case 0x4fccc0u: goto label_4fccc0;
        case 0x4fccc4u: goto label_4fccc4;
        case 0x4fccc8u: goto label_4fccc8;
        case 0x4fccccu: goto label_4fcccc;
        case 0x4fccd0u: goto label_4fccd0;
        case 0x4fccd4u: goto label_4fccd4;
        case 0x4fccd8u: goto label_4fccd8;
        case 0x4fccdcu: goto label_4fccdc;
        case 0x4fcce0u: goto label_4fcce0;
        case 0x4fcce4u: goto label_4fcce4;
        case 0x4fcce8u: goto label_4fcce8;
        case 0x4fccecu: goto label_4fccec;
        case 0x4fccf0u: goto label_4fccf0;
        case 0x4fccf4u: goto label_4fccf4;
        case 0x4fccf8u: goto label_4fccf8;
        case 0x4fccfcu: goto label_4fccfc;
        case 0x4fcd00u: goto label_4fcd00;
        case 0x4fcd04u: goto label_4fcd04;
        case 0x4fcd08u: goto label_4fcd08;
        case 0x4fcd0cu: goto label_4fcd0c;
        case 0x4fcd10u: goto label_4fcd10;
        case 0x4fcd14u: goto label_4fcd14;
        case 0x4fcd18u: goto label_4fcd18;
        case 0x4fcd1cu: goto label_4fcd1c;
        case 0x4fcd20u: goto label_4fcd20;
        case 0x4fcd24u: goto label_4fcd24;
        case 0x4fcd28u: goto label_4fcd28;
        case 0x4fcd2cu: goto label_4fcd2c;
        case 0x4fcd30u: goto label_4fcd30;
        case 0x4fcd34u: goto label_4fcd34;
        case 0x4fcd38u: goto label_4fcd38;
        case 0x4fcd3cu: goto label_4fcd3c;
        case 0x4fcd40u: goto label_4fcd40;
        case 0x4fcd44u: goto label_4fcd44;
        case 0x4fcd48u: goto label_4fcd48;
        case 0x4fcd4cu: goto label_4fcd4c;
        case 0x4fcd50u: goto label_4fcd50;
        case 0x4fcd54u: goto label_4fcd54;
        case 0x4fcd58u: goto label_4fcd58;
        case 0x4fcd5cu: goto label_4fcd5c;
        case 0x4fcd60u: goto label_4fcd60;
        case 0x4fcd64u: goto label_4fcd64;
        case 0x4fcd68u: goto label_4fcd68;
        case 0x4fcd6cu: goto label_4fcd6c;
        case 0x4fcd70u: goto label_4fcd70;
        case 0x4fcd74u: goto label_4fcd74;
        case 0x4fcd78u: goto label_4fcd78;
        case 0x4fcd7cu: goto label_4fcd7c;
        case 0x4fcd80u: goto label_4fcd80;
        case 0x4fcd84u: goto label_4fcd84;
        case 0x4fcd88u: goto label_4fcd88;
        case 0x4fcd8cu: goto label_4fcd8c;
        case 0x4fcd90u: goto label_4fcd90;
        case 0x4fcd94u: goto label_4fcd94;
        case 0x4fcd98u: goto label_4fcd98;
        case 0x4fcd9cu: goto label_4fcd9c;
        case 0x4fcda0u: goto label_4fcda0;
        case 0x4fcda4u: goto label_4fcda4;
        case 0x4fcda8u: goto label_4fcda8;
        case 0x4fcdacu: goto label_4fcdac;
        case 0x4fcdb0u: goto label_4fcdb0;
        case 0x4fcdb4u: goto label_4fcdb4;
        case 0x4fcdb8u: goto label_4fcdb8;
        case 0x4fcdbcu: goto label_4fcdbc;
        case 0x4fcdc0u: goto label_4fcdc0;
        case 0x4fcdc4u: goto label_4fcdc4;
        case 0x4fcdc8u: goto label_4fcdc8;
        case 0x4fcdccu: goto label_4fcdcc;
        case 0x4fcdd0u: goto label_4fcdd0;
        case 0x4fcdd4u: goto label_4fcdd4;
        case 0x4fcdd8u: goto label_4fcdd8;
        case 0x4fcddcu: goto label_4fcddc;
        case 0x4fcde0u: goto label_4fcde0;
        case 0x4fcde4u: goto label_4fcde4;
        case 0x4fcde8u: goto label_4fcde8;
        case 0x4fcdecu: goto label_4fcdec;
        case 0x4fcdf0u: goto label_4fcdf0;
        case 0x4fcdf4u: goto label_4fcdf4;
        case 0x4fcdf8u: goto label_4fcdf8;
        case 0x4fcdfcu: goto label_4fcdfc;
        case 0x4fce00u: goto label_4fce00;
        case 0x4fce04u: goto label_4fce04;
        case 0x4fce08u: goto label_4fce08;
        case 0x4fce0cu: goto label_4fce0c;
        case 0x4fce10u: goto label_4fce10;
        case 0x4fce14u: goto label_4fce14;
        case 0x4fce18u: goto label_4fce18;
        case 0x4fce1cu: goto label_4fce1c;
        case 0x4fce20u: goto label_4fce20;
        case 0x4fce24u: goto label_4fce24;
        case 0x4fce28u: goto label_4fce28;
        case 0x4fce2cu: goto label_4fce2c;
        case 0x4fce30u: goto label_4fce30;
        case 0x4fce34u: goto label_4fce34;
        case 0x4fce38u: goto label_4fce38;
        case 0x4fce3cu: goto label_4fce3c;
        case 0x4fce40u: goto label_4fce40;
        case 0x4fce44u: goto label_4fce44;
        case 0x4fce48u: goto label_4fce48;
        case 0x4fce4cu: goto label_4fce4c;
        case 0x4fce50u: goto label_4fce50;
        case 0x4fce54u: goto label_4fce54;
        case 0x4fce58u: goto label_4fce58;
        case 0x4fce5cu: goto label_4fce5c;
        case 0x4fce60u: goto label_4fce60;
        case 0x4fce64u: goto label_4fce64;
        case 0x4fce68u: goto label_4fce68;
        case 0x4fce6cu: goto label_4fce6c;
        case 0x4fce70u: goto label_4fce70;
        case 0x4fce74u: goto label_4fce74;
        case 0x4fce78u: goto label_4fce78;
        case 0x4fce7cu: goto label_4fce7c;
        case 0x4fce80u: goto label_4fce80;
        case 0x4fce84u: goto label_4fce84;
        case 0x4fce88u: goto label_4fce88;
        case 0x4fce8cu: goto label_4fce8c;
        case 0x4fce90u: goto label_4fce90;
        case 0x4fce94u: goto label_4fce94;
        case 0x4fce98u: goto label_4fce98;
        case 0x4fce9cu: goto label_4fce9c;
        case 0x4fcea0u: goto label_4fcea0;
        case 0x4fcea4u: goto label_4fcea4;
        case 0x4fcea8u: goto label_4fcea8;
        case 0x4fceacu: goto label_4fceac;
        case 0x4fceb0u: goto label_4fceb0;
        case 0x4fceb4u: goto label_4fceb4;
        case 0x4fceb8u: goto label_4fceb8;
        case 0x4fcebcu: goto label_4fcebc;
        case 0x4fcec0u: goto label_4fcec0;
        case 0x4fcec4u: goto label_4fcec4;
        case 0x4fcec8u: goto label_4fcec8;
        case 0x4fceccu: goto label_4fcecc;
        case 0x4fced0u: goto label_4fced0;
        case 0x4fced4u: goto label_4fced4;
        case 0x4fced8u: goto label_4fced8;
        case 0x4fcedcu: goto label_4fcedc;
        case 0x4fcee0u: goto label_4fcee0;
        case 0x4fcee4u: goto label_4fcee4;
        case 0x4fcee8u: goto label_4fcee8;
        case 0x4fceecu: goto label_4fceec;
        case 0x4fcef0u: goto label_4fcef0;
        case 0x4fcef4u: goto label_4fcef4;
        case 0x4fcef8u: goto label_4fcef8;
        case 0x4fcefcu: goto label_4fcefc;
        case 0x4fcf00u: goto label_4fcf00;
        case 0x4fcf04u: goto label_4fcf04;
        case 0x4fcf08u: goto label_4fcf08;
        case 0x4fcf0cu: goto label_4fcf0c;
        case 0x4fcf10u: goto label_4fcf10;
        case 0x4fcf14u: goto label_4fcf14;
        case 0x4fcf18u: goto label_4fcf18;
        case 0x4fcf1cu: goto label_4fcf1c;
        case 0x4fcf20u: goto label_4fcf20;
        case 0x4fcf24u: goto label_4fcf24;
        case 0x4fcf28u: goto label_4fcf28;
        case 0x4fcf2cu: goto label_4fcf2c;
        case 0x4fcf30u: goto label_4fcf30;
        case 0x4fcf34u: goto label_4fcf34;
        case 0x4fcf38u: goto label_4fcf38;
        case 0x4fcf3cu: goto label_4fcf3c;
        case 0x4fcf40u: goto label_4fcf40;
        case 0x4fcf44u: goto label_4fcf44;
        case 0x4fcf48u: goto label_4fcf48;
        case 0x4fcf4cu: goto label_4fcf4c;
        case 0x4fcf50u: goto label_4fcf50;
        case 0x4fcf54u: goto label_4fcf54;
        case 0x4fcf58u: goto label_4fcf58;
        case 0x4fcf5cu: goto label_4fcf5c;
        case 0x4fcf60u: goto label_4fcf60;
        case 0x4fcf64u: goto label_4fcf64;
        case 0x4fcf68u: goto label_4fcf68;
        case 0x4fcf6cu: goto label_4fcf6c;
        case 0x4fcf70u: goto label_4fcf70;
        case 0x4fcf74u: goto label_4fcf74;
        case 0x4fcf78u: goto label_4fcf78;
        case 0x4fcf7cu: goto label_4fcf7c;
        case 0x4fcf80u: goto label_4fcf80;
        case 0x4fcf84u: goto label_4fcf84;
        case 0x4fcf88u: goto label_4fcf88;
        case 0x4fcf8cu: goto label_4fcf8c;
        case 0x4fcf90u: goto label_4fcf90;
        case 0x4fcf94u: goto label_4fcf94;
        case 0x4fcf98u: goto label_4fcf98;
        case 0x4fcf9cu: goto label_4fcf9c;
        case 0x4fcfa0u: goto label_4fcfa0;
        case 0x4fcfa4u: goto label_4fcfa4;
        case 0x4fcfa8u: goto label_4fcfa8;
        case 0x4fcfacu: goto label_4fcfac;
        case 0x4fcfb0u: goto label_4fcfb0;
        case 0x4fcfb4u: goto label_4fcfb4;
        case 0x4fcfb8u: goto label_4fcfb8;
        case 0x4fcfbcu: goto label_4fcfbc;
        case 0x4fcfc0u: goto label_4fcfc0;
        case 0x4fcfc4u: goto label_4fcfc4;
        case 0x4fcfc8u: goto label_4fcfc8;
        case 0x4fcfccu: goto label_4fcfcc;
        case 0x4fcfd0u: goto label_4fcfd0;
        case 0x4fcfd4u: goto label_4fcfd4;
        case 0x4fcfd8u: goto label_4fcfd8;
        case 0x4fcfdcu: goto label_4fcfdc;
        case 0x4fcfe0u: goto label_4fcfe0;
        case 0x4fcfe4u: goto label_4fcfe4;
        case 0x4fcfe8u: goto label_4fcfe8;
        case 0x4fcfecu: goto label_4fcfec;
        case 0x4fcff0u: goto label_4fcff0;
        case 0x4fcff4u: goto label_4fcff4;
        case 0x4fcff8u: goto label_4fcff8;
        case 0x4fcffcu: goto label_4fcffc;
        case 0x4fd000u: goto label_4fd000;
        case 0x4fd004u: goto label_4fd004;
        case 0x4fd008u: goto label_4fd008;
        case 0x4fd00cu: goto label_4fd00c;
        case 0x4fd010u: goto label_4fd010;
        case 0x4fd014u: goto label_4fd014;
        case 0x4fd018u: goto label_4fd018;
        case 0x4fd01cu: goto label_4fd01c;
        case 0x4fd020u: goto label_4fd020;
        case 0x4fd024u: goto label_4fd024;
        case 0x4fd028u: goto label_4fd028;
        case 0x4fd02cu: goto label_4fd02c;
        case 0x4fd030u: goto label_4fd030;
        case 0x4fd034u: goto label_4fd034;
        case 0x4fd038u: goto label_4fd038;
        case 0x4fd03cu: goto label_4fd03c;
        case 0x4fd040u: goto label_4fd040;
        case 0x4fd044u: goto label_4fd044;
        case 0x4fd048u: goto label_4fd048;
        case 0x4fd04cu: goto label_4fd04c;
        case 0x4fd050u: goto label_4fd050;
        case 0x4fd054u: goto label_4fd054;
        case 0x4fd058u: goto label_4fd058;
        case 0x4fd05cu: goto label_4fd05c;
        case 0x4fd060u: goto label_4fd060;
        case 0x4fd064u: goto label_4fd064;
        case 0x4fd068u: goto label_4fd068;
        case 0x4fd06cu: goto label_4fd06c;
        case 0x4fd070u: goto label_4fd070;
        case 0x4fd074u: goto label_4fd074;
        case 0x4fd078u: goto label_4fd078;
        case 0x4fd07cu: goto label_4fd07c;
        case 0x4fd080u: goto label_4fd080;
        case 0x4fd084u: goto label_4fd084;
        case 0x4fd088u: goto label_4fd088;
        case 0x4fd08cu: goto label_4fd08c;
        case 0x4fd090u: goto label_4fd090;
        case 0x4fd094u: goto label_4fd094;
        case 0x4fd098u: goto label_4fd098;
        case 0x4fd09cu: goto label_4fd09c;
        case 0x4fd0a0u: goto label_4fd0a0;
        case 0x4fd0a4u: goto label_4fd0a4;
        case 0x4fd0a8u: goto label_4fd0a8;
        case 0x4fd0acu: goto label_4fd0ac;
        case 0x4fd0b0u: goto label_4fd0b0;
        case 0x4fd0b4u: goto label_4fd0b4;
        case 0x4fd0b8u: goto label_4fd0b8;
        case 0x4fd0bcu: goto label_4fd0bc;
        case 0x4fd0c0u: goto label_4fd0c0;
        case 0x4fd0c4u: goto label_4fd0c4;
        case 0x4fd0c8u: goto label_4fd0c8;
        case 0x4fd0ccu: goto label_4fd0cc;
        case 0x4fd0d0u: goto label_4fd0d0;
        case 0x4fd0d4u: goto label_4fd0d4;
        case 0x4fd0d8u: goto label_4fd0d8;
        case 0x4fd0dcu: goto label_4fd0dc;
        case 0x4fd0e0u: goto label_4fd0e0;
        case 0x4fd0e4u: goto label_4fd0e4;
        case 0x4fd0e8u: goto label_4fd0e8;
        case 0x4fd0ecu: goto label_4fd0ec;
        case 0x4fd0f0u: goto label_4fd0f0;
        case 0x4fd0f4u: goto label_4fd0f4;
        case 0x4fd0f8u: goto label_4fd0f8;
        case 0x4fd0fcu: goto label_4fd0fc;
        case 0x4fd100u: goto label_4fd100;
        case 0x4fd104u: goto label_4fd104;
        case 0x4fd108u: goto label_4fd108;
        case 0x4fd10cu: goto label_4fd10c;
        case 0x4fd110u: goto label_4fd110;
        case 0x4fd114u: goto label_4fd114;
        case 0x4fd118u: goto label_4fd118;
        case 0x4fd11cu: goto label_4fd11c;
        case 0x4fd120u: goto label_4fd120;
        case 0x4fd124u: goto label_4fd124;
        case 0x4fd128u: goto label_4fd128;
        case 0x4fd12cu: goto label_4fd12c;
        case 0x4fd130u: goto label_4fd130;
        case 0x4fd134u: goto label_4fd134;
        case 0x4fd138u: goto label_4fd138;
        case 0x4fd13cu: goto label_4fd13c;
        case 0x4fd140u: goto label_4fd140;
        case 0x4fd144u: goto label_4fd144;
        case 0x4fd148u: goto label_4fd148;
        case 0x4fd14cu: goto label_4fd14c;
        case 0x4fd150u: goto label_4fd150;
        case 0x4fd154u: goto label_4fd154;
        case 0x4fd158u: goto label_4fd158;
        case 0x4fd15cu: goto label_4fd15c;
        case 0x4fd160u: goto label_4fd160;
        case 0x4fd164u: goto label_4fd164;
        case 0x4fd168u: goto label_4fd168;
        case 0x4fd16cu: goto label_4fd16c;
        case 0x4fd170u: goto label_4fd170;
        case 0x4fd174u: goto label_4fd174;
        case 0x4fd178u: goto label_4fd178;
        case 0x4fd17cu: goto label_4fd17c;
        case 0x4fd180u: goto label_4fd180;
        case 0x4fd184u: goto label_4fd184;
        case 0x4fd188u: goto label_4fd188;
        case 0x4fd18cu: goto label_4fd18c;
        case 0x4fd190u: goto label_4fd190;
        case 0x4fd194u: goto label_4fd194;
        case 0x4fd198u: goto label_4fd198;
        case 0x4fd19cu: goto label_4fd19c;
        case 0x4fd1a0u: goto label_4fd1a0;
        case 0x4fd1a4u: goto label_4fd1a4;
        case 0x4fd1a8u: goto label_4fd1a8;
        case 0x4fd1acu: goto label_4fd1ac;
        case 0x4fd1b0u: goto label_4fd1b0;
        case 0x4fd1b4u: goto label_4fd1b4;
        case 0x4fd1b8u: goto label_4fd1b8;
        case 0x4fd1bcu: goto label_4fd1bc;
        case 0x4fd1c0u: goto label_4fd1c0;
        case 0x4fd1c4u: goto label_4fd1c4;
        case 0x4fd1c8u: goto label_4fd1c8;
        case 0x4fd1ccu: goto label_4fd1cc;
        case 0x4fd1d0u: goto label_4fd1d0;
        case 0x4fd1d4u: goto label_4fd1d4;
        case 0x4fd1d8u: goto label_4fd1d8;
        case 0x4fd1dcu: goto label_4fd1dc;
        case 0x4fd1e0u: goto label_4fd1e0;
        case 0x4fd1e4u: goto label_4fd1e4;
        case 0x4fd1e8u: goto label_4fd1e8;
        case 0x4fd1ecu: goto label_4fd1ec;
        case 0x4fd1f0u: goto label_4fd1f0;
        case 0x4fd1f4u: goto label_4fd1f4;
        case 0x4fd1f8u: goto label_4fd1f8;
        case 0x4fd1fcu: goto label_4fd1fc;
        case 0x4fd200u: goto label_4fd200;
        case 0x4fd204u: goto label_4fd204;
        case 0x4fd208u: goto label_4fd208;
        case 0x4fd20cu: goto label_4fd20c;
        case 0x4fd210u: goto label_4fd210;
        case 0x4fd214u: goto label_4fd214;
        case 0x4fd218u: goto label_4fd218;
        case 0x4fd21cu: goto label_4fd21c;
        case 0x4fd220u: goto label_4fd220;
        case 0x4fd224u: goto label_4fd224;
        case 0x4fd228u: goto label_4fd228;
        case 0x4fd22cu: goto label_4fd22c;
        case 0x4fd230u: goto label_4fd230;
        case 0x4fd234u: goto label_4fd234;
        case 0x4fd238u: goto label_4fd238;
        case 0x4fd23cu: goto label_4fd23c;
        case 0x4fd240u: goto label_4fd240;
        case 0x4fd244u: goto label_4fd244;
        case 0x4fd248u: goto label_4fd248;
        case 0x4fd24cu: goto label_4fd24c;
        case 0x4fd250u: goto label_4fd250;
        case 0x4fd254u: goto label_4fd254;
        case 0x4fd258u: goto label_4fd258;
        case 0x4fd25cu: goto label_4fd25c;
        case 0x4fd260u: goto label_4fd260;
        case 0x4fd264u: goto label_4fd264;
        case 0x4fd268u: goto label_4fd268;
        case 0x4fd26cu: goto label_4fd26c;
        case 0x4fd270u: goto label_4fd270;
        case 0x4fd274u: goto label_4fd274;
        case 0x4fd278u: goto label_4fd278;
        case 0x4fd27cu: goto label_4fd27c;
        case 0x4fd280u: goto label_4fd280;
        case 0x4fd284u: goto label_4fd284;
        case 0x4fd288u: goto label_4fd288;
        case 0x4fd28cu: goto label_4fd28c;
        case 0x4fd290u: goto label_4fd290;
        case 0x4fd294u: goto label_4fd294;
        case 0x4fd298u: goto label_4fd298;
        case 0x4fd29cu: goto label_4fd29c;
        case 0x4fd2a0u: goto label_4fd2a0;
        case 0x4fd2a4u: goto label_4fd2a4;
        case 0x4fd2a8u: goto label_4fd2a8;
        case 0x4fd2acu: goto label_4fd2ac;
        case 0x4fd2b0u: goto label_4fd2b0;
        case 0x4fd2b4u: goto label_4fd2b4;
        case 0x4fd2b8u: goto label_4fd2b8;
        case 0x4fd2bcu: goto label_4fd2bc;
        case 0x4fd2c0u: goto label_4fd2c0;
        case 0x4fd2c4u: goto label_4fd2c4;
        case 0x4fd2c8u: goto label_4fd2c8;
        case 0x4fd2ccu: goto label_4fd2cc;
        case 0x4fd2d0u: goto label_4fd2d0;
        case 0x4fd2d4u: goto label_4fd2d4;
        case 0x4fd2d8u: goto label_4fd2d8;
        case 0x4fd2dcu: goto label_4fd2dc;
        case 0x4fd2e0u: goto label_4fd2e0;
        case 0x4fd2e4u: goto label_4fd2e4;
        case 0x4fd2e8u: goto label_4fd2e8;
        case 0x4fd2ecu: goto label_4fd2ec;
        case 0x4fd2f0u: goto label_4fd2f0;
        case 0x4fd2f4u: goto label_4fd2f4;
        case 0x4fd2f8u: goto label_4fd2f8;
        case 0x4fd2fcu: goto label_4fd2fc;
        case 0x4fd300u: goto label_4fd300;
        case 0x4fd304u: goto label_4fd304;
        case 0x4fd308u: goto label_4fd308;
        case 0x4fd30cu: goto label_4fd30c;
        case 0x4fd310u: goto label_4fd310;
        case 0x4fd314u: goto label_4fd314;
        case 0x4fd318u: goto label_4fd318;
        case 0x4fd31cu: goto label_4fd31c;
        case 0x4fd320u: goto label_4fd320;
        case 0x4fd324u: goto label_4fd324;
        case 0x4fd328u: goto label_4fd328;
        case 0x4fd32cu: goto label_4fd32c;
        case 0x4fd330u: goto label_4fd330;
        case 0x4fd334u: goto label_4fd334;
        case 0x4fd338u: goto label_4fd338;
        case 0x4fd33cu: goto label_4fd33c;
        case 0x4fd340u: goto label_4fd340;
        case 0x4fd344u: goto label_4fd344;
        case 0x4fd348u: goto label_4fd348;
        case 0x4fd34cu: goto label_4fd34c;
        case 0x4fd350u: goto label_4fd350;
        case 0x4fd354u: goto label_4fd354;
        case 0x4fd358u: goto label_4fd358;
        case 0x4fd35cu: goto label_4fd35c;
        case 0x4fd360u: goto label_4fd360;
        case 0x4fd364u: goto label_4fd364;
        case 0x4fd368u: goto label_4fd368;
        case 0x4fd36cu: goto label_4fd36c;
        case 0x4fd370u: goto label_4fd370;
        case 0x4fd374u: goto label_4fd374;
        case 0x4fd378u: goto label_4fd378;
        case 0x4fd37cu: goto label_4fd37c;
        case 0x4fd380u: goto label_4fd380;
        case 0x4fd384u: goto label_4fd384;
        case 0x4fd388u: goto label_4fd388;
        case 0x4fd38cu: goto label_4fd38c;
        case 0x4fd390u: goto label_4fd390;
        case 0x4fd394u: goto label_4fd394;
        case 0x4fd398u: goto label_4fd398;
        case 0x4fd39cu: goto label_4fd39c;
        case 0x4fd3a0u: goto label_4fd3a0;
        case 0x4fd3a4u: goto label_4fd3a4;
        case 0x4fd3a8u: goto label_4fd3a8;
        case 0x4fd3acu: goto label_4fd3ac;
        case 0x4fd3b0u: goto label_4fd3b0;
        case 0x4fd3b4u: goto label_4fd3b4;
        case 0x4fd3b8u: goto label_4fd3b8;
        case 0x4fd3bcu: goto label_4fd3bc;
        case 0x4fd3c0u: goto label_4fd3c0;
        case 0x4fd3c4u: goto label_4fd3c4;
        case 0x4fd3c8u: goto label_4fd3c8;
        case 0x4fd3ccu: goto label_4fd3cc;
        case 0x4fd3d0u: goto label_4fd3d0;
        case 0x4fd3d4u: goto label_4fd3d4;
        case 0x4fd3d8u: goto label_4fd3d8;
        case 0x4fd3dcu: goto label_4fd3dc;
        case 0x4fd3e0u: goto label_4fd3e0;
        case 0x4fd3e4u: goto label_4fd3e4;
        case 0x4fd3e8u: goto label_4fd3e8;
        case 0x4fd3ecu: goto label_4fd3ec;
        case 0x4fd3f0u: goto label_4fd3f0;
        case 0x4fd3f4u: goto label_4fd3f4;
        case 0x4fd3f8u: goto label_4fd3f8;
        case 0x4fd3fcu: goto label_4fd3fc;
        case 0x4fd400u: goto label_4fd400;
        case 0x4fd404u: goto label_4fd404;
        case 0x4fd408u: goto label_4fd408;
        case 0x4fd40cu: goto label_4fd40c;
        case 0x4fd410u: goto label_4fd410;
        case 0x4fd414u: goto label_4fd414;
        case 0x4fd418u: goto label_4fd418;
        case 0x4fd41cu: goto label_4fd41c;
        case 0x4fd420u: goto label_4fd420;
        case 0x4fd424u: goto label_4fd424;
        case 0x4fd428u: goto label_4fd428;
        case 0x4fd42cu: goto label_4fd42c;
        case 0x4fd430u: goto label_4fd430;
        case 0x4fd434u: goto label_4fd434;
        case 0x4fd438u: goto label_4fd438;
        case 0x4fd43cu: goto label_4fd43c;
        case 0x4fd440u: goto label_4fd440;
        case 0x4fd444u: goto label_4fd444;
        case 0x4fd448u: goto label_4fd448;
        case 0x4fd44cu: goto label_4fd44c;
        case 0x4fd450u: goto label_4fd450;
        case 0x4fd454u: goto label_4fd454;
        case 0x4fd458u: goto label_4fd458;
        case 0x4fd45cu: goto label_4fd45c;
        case 0x4fd460u: goto label_4fd460;
        case 0x4fd464u: goto label_4fd464;
        case 0x4fd468u: goto label_4fd468;
        case 0x4fd46cu: goto label_4fd46c;
        case 0x4fd470u: goto label_4fd470;
        case 0x4fd474u: goto label_4fd474;
        case 0x4fd478u: goto label_4fd478;
        case 0x4fd47cu: goto label_4fd47c;
        case 0x4fd480u: goto label_4fd480;
        case 0x4fd484u: goto label_4fd484;
        case 0x4fd488u: goto label_4fd488;
        case 0x4fd48cu: goto label_4fd48c;
        case 0x4fd490u: goto label_4fd490;
        case 0x4fd494u: goto label_4fd494;
        case 0x4fd498u: goto label_4fd498;
        case 0x4fd49cu: goto label_4fd49c;
        case 0x4fd4a0u: goto label_4fd4a0;
        case 0x4fd4a4u: goto label_4fd4a4;
        case 0x4fd4a8u: goto label_4fd4a8;
        case 0x4fd4acu: goto label_4fd4ac;
        case 0x4fd4b0u: goto label_4fd4b0;
        case 0x4fd4b4u: goto label_4fd4b4;
        case 0x4fd4b8u: goto label_4fd4b8;
        case 0x4fd4bcu: goto label_4fd4bc;
        default: break;
    }

    ctx->pc = 0x4fc880u;

label_4fc880:
    // 0x4fc880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4fc880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4fc884:
    // 0x4fc884: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4fc884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4fc888:
    // 0x4fc888: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4fc888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4fc88c:
    // 0x4fc88c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fc88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4fc890:
    // 0x4fc890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fc890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fc894:
    // 0x4fc894: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4fc894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4fc898:
    // 0x4fc898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fc898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fc89c:
    // 0x4fc89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fc89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fc8a0:
    // 0x4fc8a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4fc8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fc8a4:
    // 0x4fc8a4: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x4fc8a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4fc8a8:
    // 0x4fc8a8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_4fc8ac:
    if (ctx->pc == 0x4FC8ACu) {
        ctx->pc = 0x4FC8ACu;
            // 0x4fc8ac: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FC8B0u;
        goto label_4fc8b0;
    }
    ctx->pc = 0x4FC8A8u;
    {
        const bool branch_taken_0x4fc8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC8A8u;
            // 0x4fc8ac: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc8a8) {
            ctx->pc = 0x4FC970u;
            goto label_4fc970;
        }
    }
    ctx->pc = 0x4FC8B0u;
label_4fc8b0:
    // 0x4fc8b0: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x4fc8b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
label_4fc8b4:
    // 0x4fc8b4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x4fc8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
label_4fc8b8:
    // 0x4fc8b8: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x4fc8b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
label_4fc8bc:
    // 0x4fc8bc: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x4fc8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_4fc8c0:
    // 0x4fc8c0: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x4fc8c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
label_4fc8c4:
    // 0x4fc8c4: 0x261082b  sltu        $at, $s3, $at
    ctx->pc = 0x4fc8c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_4fc8c8:
    // 0x4fc8c8: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
label_4fc8cc:
    if (ctx->pc == 0x4FC8CCu) {
        ctx->pc = 0x4FC8CCu;
            // 0x4fc8cc: 0x8e920008  lw          $s2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x4FC8D0u;
        goto label_4fc8d0;
    }
    ctx->pc = 0x4FC8C8u;
    {
        const bool branch_taken_0x4fc8c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fc8c8) {
            ctx->pc = 0x4FC8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC8C8u;
            // 0x4fc8cc: 0x8e920008  lw          $s2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC8F4u;
            goto label_4fc8f4;
        }
    }
    ctx->pc = 0x4FC8D0u;
label_4fc8d0:
    // 0x4fc8d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4fc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_4fc8d4:
    // 0x4fc8d4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4fc8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4fc8d8:
    // 0x4fc8d8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4fc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_4fc8dc:
    // 0x4fc8dc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4fc8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4fc8e0:
    // 0x4fc8e0: 0xc049e92  jal         func_127A48
label_4fc8e4:
    if (ctx->pc == 0x4FC8E4u) {
        ctx->pc = 0x4FC8E4u;
            // 0x4fc8e4: 0x24a58d00  addiu       $a1, $a1, -0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937856));
        ctx->pc = 0x4FC8E8u;
        goto label_4fc8e8;
    }
    ctx->pc = 0x4FC8E0u;
    SET_GPR_U32(ctx, 31, 0x4FC8E8u);
    ctx->pc = 0x4FC8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC8E0u;
            // 0x4fc8e4: 0x24a58d00  addiu       $a1, $a1, -0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC8E8u; }
        if (ctx->pc != 0x4FC8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC8E8u; }
        if (ctx->pc != 0x4FC8E8u) { return; }
    }
    ctx->pc = 0x4FC8E8u;
label_4fc8e8:
    // 0x4fc8e8: 0xc04981a  jal         func_126068
label_4fc8ec:
    if (ctx->pc == 0x4FC8ECu) {
        ctx->pc = 0x4FC8F0u;
        goto label_4fc8f0;
    }
    ctx->pc = 0x4FC8E8u;
    SET_GPR_U32(ctx, 31, 0x4FC8F0u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC8F0u; }
        if (ctx->pc != 0x4FC8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC8F0u; }
        if (ctx->pc != 0x4FC8F0u) { return; }
    }
    ctx->pc = 0x4FC8F0u;
label_4fc8f0:
    // 0x4fc8f0: 0x8e920008  lw          $s2, 0x8($s4)
    ctx->pc = 0x4fc8f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4fc8f4:
    // 0x4fc8f4: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x4fc8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_4fc8f8:
    // 0x4fc8f8: 0xc040180  jal         func_100600
label_4fc8fc:
    if (ctx->pc == 0x4FC8FCu) {
        ctx->pc = 0x4FC8FCu;
            // 0x4fc8fc: 0x26910008  addiu       $s1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x4FC900u;
        goto label_4fc900;
    }
    ctx->pc = 0x4FC8F8u;
    SET_GPR_U32(ctx, 31, 0x4FC900u);
    ctx->pc = 0x4FC8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC8F8u;
            // 0x4fc8fc: 0x26910008  addiu       $s1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC900u; }
        if (ctx->pc != 0x4FC900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC900u; }
        if (ctx->pc != 0x4FC900u) { return; }
    }
    ctx->pc = 0x4FC900u;
label_4fc900:
    // 0x4fc900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4fc900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fc904:
    // 0x4fc904: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
label_4fc908:
    if (ctx->pc == 0x4FC908u) {
        ctx->pc = 0x4FC908u;
            // 0x4fc908: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x4FC90Cu;
        goto label_4fc90c;
    }
    ctx->pc = 0x4FC904u;
    {
        const bool branch_taken_0x4fc904 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fc904) {
            ctx->pc = 0x4FC908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC904u;
            // 0x4fc908: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC930u;
            goto label_4fc930;
        }
    }
    ctx->pc = 0x4FC90Cu;
label_4fc90c:
    // 0x4fc90c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4fc90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_4fc910:
    // 0x4fc910: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4fc910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4fc914:
    // 0x4fc914: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4fc914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_4fc918:
    // 0x4fc918: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4fc918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4fc91c:
    // 0x4fc91c: 0xc049e92  jal         func_127A48
label_4fc920:
    if (ctx->pc == 0x4FC920u) {
        ctx->pc = 0x4FC920u;
            // 0x4fc920: 0x24a58d20  addiu       $a1, $a1, -0x72E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937888));
        ctx->pc = 0x4FC924u;
        goto label_4fc924;
    }
    ctx->pc = 0x4FC91Cu;
    SET_GPR_U32(ctx, 31, 0x4FC924u);
    ctx->pc = 0x4FC920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC91Cu;
            // 0x4fc920: 0x24a58d20  addiu       $a1, $a1, -0x72E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC924u; }
        if (ctx->pc != 0x4FC924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC924u; }
        if (ctx->pc != 0x4FC924u) { return; }
    }
    ctx->pc = 0x4FC924u;
label_4fc924:
    // 0x4fc924: 0xc04981a  jal         func_126068
label_4fc928:
    if (ctx->pc == 0x4FC928u) {
        ctx->pc = 0x4FC92Cu;
        goto label_4fc92c;
    }
    ctx->pc = 0x4FC924u;
    SET_GPR_U32(ctx, 31, 0x4FC92Cu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC92Cu; }
        if (ctx->pc != 0x4FC92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC92Cu; }
        if (ctx->pc != 0x4FC92Cu) { return; }
    }
    ctx->pc = 0x4FC92Cu;
label_4fc92c:
    // 0x4fc92c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x4fc92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_4fc930:
    // 0x4fc930: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
label_4fc934:
    if (ctx->pc == 0x4FC934u) {
        ctx->pc = 0x4FC934u;
            // 0x4fc934: 0xae930000  sw          $s3, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x4FC938u;
        goto label_4fc938;
    }
    ctx->pc = 0x4FC930u;
    {
        const bool branch_taken_0x4fc930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc930) {
            ctx->pc = 0x4FC934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC930u;
            // 0x4fc934: 0xae930000  sw          $s3, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC970u;
            goto label_4fc970;
        }
    }
    ctx->pc = 0x4FC938u;
label_4fc938:
    // 0x4fc938: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4fc938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4fc93c:
    // 0x4fc93c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4fc93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4fc940:
    // 0x4fc940: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x4fc940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
label_4fc944:
    // 0x4fc944: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_4fc948:
    if (ctx->pc == 0x4FC948u) {
        ctx->pc = 0x4FC948u;
            // 0x4fc948: 0x2107f  dsra32      $v0, $v0, 1 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 1));
        ctx->pc = 0x4FC94Cu;
        goto label_4fc94c;
    }
    ctx->pc = 0x4FC944u;
    {
        const bool branch_taken_0x4fc944 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4FC948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC944u;
            // 0x4fc948: 0x2107f  dsra32      $v0, $v0, 1 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc944) {
            ctx->pc = 0x4FC954u;
            goto label_4fc954;
        }
    }
    ctx->pc = 0x4FC94Cu;
label_4fc94c:
    // 0x4fc94c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x4fc94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4fc950:
    // 0x4fc950: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fc950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4fc954:
    // 0x4fc954: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x4fc954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4fc958:
    // 0x4fc958: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x4fc958u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4fc95c:
    // 0x4fc95c: 0xc04a508  jal         func_129420
label_4fc960:
    if (ctx->pc == 0x4FC960u) {
        ctx->pc = 0x4FC960u;
            // 0x4fc960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FC964u;
        goto label_4fc964;
    }
    ctx->pc = 0x4FC95Cu;
    SET_GPR_U32(ctx, 31, 0x4FC964u);
    ctx->pc = 0x4FC960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC95Cu;
            // 0x4fc960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC964u; }
        if (ctx->pc != 0x4FC964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC964u; }
        if (ctx->pc != 0x4FC964u) { return; }
    }
    ctx->pc = 0x4FC964u;
label_4fc964:
    // 0x4fc964: 0xc0400a8  jal         func_1002A0
label_4fc968:
    if (ctx->pc == 0x4FC968u) {
        ctx->pc = 0x4FC968u;
            // 0x4fc968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FC96Cu;
        goto label_4fc96c;
    }
    ctx->pc = 0x4FC964u;
    SET_GPR_U32(ctx, 31, 0x4FC96Cu);
    ctx->pc = 0x4FC968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC964u;
            // 0x4fc968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC96Cu; }
        if (ctx->pc != 0x4FC96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC96Cu; }
        if (ctx->pc != 0x4FC96Cu) { return; }
    }
    ctx->pc = 0x4FC96Cu;
label_4fc96c:
    // 0x4fc96c: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x4fc96cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
label_4fc970:
    // 0x4fc970: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4fc970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4fc974:
    // 0x4fc974: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4fc974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4fc978:
    // 0x4fc978: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fc978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fc97c:
    // 0x4fc97c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fc97cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fc980:
    // 0x4fc980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fc980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fc984:
    // 0x4fc984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fc984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fc988:
    // 0x4fc988: 0x3e00008  jr          $ra
label_4fc98c:
    if (ctx->pc == 0x4FC98Cu) {
        ctx->pc = 0x4FC98Cu;
            // 0x4fc98c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4FC990u;
        goto label_4fc990;
    }
    ctx->pc = 0x4FC988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FC98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC988u;
            // 0x4fc98c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FC990u;
label_4fc990:
    // 0x4fc990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4fc990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4fc994:
    // 0x4fc994: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4fc994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4fc998:
    // 0x4fc998: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4fc998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4fc99c:
    // 0x4fc99c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fc99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4fc9a0:
    // 0x4fc9a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4fc9a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fc9a4:
    // 0x4fc9a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fc9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fc9a8:
    // 0x4fc9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fc9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fc9ac:
    // 0x4fc9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fc9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fc9b0:
    // 0x4fc9b0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4fc9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4fc9b4:
    // 0x4fc9b4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4fc9b8:
    if (ctx->pc == 0x4FC9B8u) {
        ctx->pc = 0x4FC9B8u;
            // 0x4fc9b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FC9BCu;
        goto label_4fc9bc;
    }
    ctx->pc = 0x4FC9B4u;
    {
        const bool branch_taken_0x4fc9b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC9B4u;
            // 0x4fc9b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc9b4) {
            ctx->pc = 0x4FC9F8u;
            goto label_4fc9f8;
        }
    }
    ctx->pc = 0x4FC9BCu;
label_4fc9bc:
    // 0x4fc9bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4fc9bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fc9c0:
    // 0x4fc9c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4fc9c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fc9c4:
    // 0x4fc9c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4fc9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fc9c8:
    // 0x4fc9c8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4fc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4fc9cc:
    // 0x4fc9cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4fc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4fc9d0:
    // 0x4fc9d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4fc9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fc9d4:
    // 0x4fc9d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fc9d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fc9d8:
    // 0x4fc9d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4fc9d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4fc9dc:
    // 0x4fc9dc: 0x320f809  jalr        $t9
label_4fc9e0:
    if (ctx->pc == 0x4FC9E0u) {
        ctx->pc = 0x4FC9E4u;
        goto label_4fc9e4;
    }
    ctx->pc = 0x4FC9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FC9E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FC9E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FC9E4u; }
            if (ctx->pc != 0x4FC9E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4FC9E4u;
label_4fc9e4:
    // 0x4fc9e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4fc9e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4fc9e8:
    // 0x4fc9e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4fc9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4fc9ec:
    // 0x4fc9ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4fc9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4fc9f0:
    // 0x4fc9f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4fc9f4:
    if (ctx->pc == 0x4FC9F4u) {
        ctx->pc = 0x4FC9F4u;
            // 0x4fc9f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4FC9F8u;
        goto label_4fc9f8;
    }
    ctx->pc = 0x4FC9F0u;
    {
        const bool branch_taken_0x4fc9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FC9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC9F0u;
            // 0x4fc9f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc9f0) {
            ctx->pc = 0x4FC9C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fc9c8;
        }
    }
    ctx->pc = 0x4FC9F8u;
label_4fc9f8:
    // 0x4fc9f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4fc9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fc9fc:
    // 0x4fc9fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4fc9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4fca00:
    // 0x4fca00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4fca00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4fca04:
    // 0x4fca04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fca04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fca08:
    // 0x4fca08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fca08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fca0c:
    // 0x4fca0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fca0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fca10:
    // 0x4fca10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fca10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fca14:
    // 0x4fca14: 0x3e00008  jr          $ra
label_4fca18:
    if (ctx->pc == 0x4FCA18u) {
        ctx->pc = 0x4FCA18u;
            // 0x4fca18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4FCA1Cu;
        goto label_4fca1c;
    }
    ctx->pc = 0x4FCA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FCA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCA14u;
            // 0x4fca18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FCA1Cu;
label_4fca1c:
    // 0x4fca1c: 0x0  nop
    ctx->pc = 0x4fca1cu;
    // NOP
label_4fca20:
    // 0x4fca20: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4fca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4fca24:
    // 0x4fca24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4fca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fca28:
    // 0x4fca28: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x4fca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_4fca2c:
    // 0x4fca2c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x4fca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_4fca30:
    // 0x4fca30: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x4fca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_4fca34:
    // 0x4fca34: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x4fca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_4fca38:
    // 0x4fca38: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4fca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_4fca3c:
    // 0x4fca3c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4fca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4fca40:
    // 0x4fca40: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4fca40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4fca44:
    // 0x4fca44: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4fca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4fca48:
    // 0x4fca48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4fca48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4fca4c:
    // 0x4fca4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4fca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4fca50:
    // 0x4fca50: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x4fca50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4fca54:
    // 0x4fca54: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4fca54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4fca58:
    // 0x4fca58: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4fca5c:
    if (ctx->pc == 0x4FCA5Cu) {
        ctx->pc = 0x4FCA5Cu;
            // 0x4fca5c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCA60u;
        goto label_4fca60;
    }
    ctx->pc = 0x4FCA58u;
    {
        const bool branch_taken_0x4fca58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FCA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCA58u;
            // 0x4fca5c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fca58) {
            ctx->pc = 0x4FCAA8u;
            goto label_4fcaa8;
        }
    }
    ctx->pc = 0x4FCA60u;
label_4fca60:
    // 0x4fca60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4fca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fca64:
    // 0x4fca64: 0x50a300df  beql        $a1, $v1, . + 4 + (0xDF << 2)
label_4fca68:
    if (ctx->pc == 0x4FCA68u) {
        ctx->pc = 0x4FCA68u;
            // 0x4fca68: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x4FCA6Cu;
        goto label_4fca6c;
    }
    ctx->pc = 0x4FCA64u;
    {
        const bool branch_taken_0x4fca64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fca64) {
            ctx->pc = 0x4FCA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCA64u;
            // 0x4fca68: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FCDE4u;
            goto label_4fcde4;
        }
    }
    ctx->pc = 0x4FCA6Cu;
label_4fca6c:
    // 0x4fca6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4fca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fca70:
    // 0x4fca70: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4fca74:
    if (ctx->pc == 0x4FCA74u) {
        ctx->pc = 0x4FCA78u;
        goto label_4fca78;
    }
    ctx->pc = 0x4FCA70u;
    {
        const bool branch_taken_0x4fca70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fca70) {
            ctx->pc = 0x4FCA80u;
            goto label_4fca80;
        }
    }
    ctx->pc = 0x4FCA78u;
label_4fca78:
    // 0x4fca78: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_4fca7c:
    if (ctx->pc == 0x4FCA7Cu) {
        ctx->pc = 0x4FCA80u;
        goto label_4fca80;
    }
    ctx->pc = 0x4FCA78u;
    {
        const bool branch_taken_0x4fca78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fca78) {
            ctx->pc = 0x4FCDE0u;
            goto label_4fcde0;
        }
    }
    ctx->pc = 0x4FCA80u;
label_4fca80:
    // 0x4fca80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fca84:
    // 0x4fca84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fca84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fca88:
    // 0x4fca88: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4fca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fca8c:
    // 0x4fca8c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4fca8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4fca90:
    // 0x4fca90: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4fca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4fca94:
    // 0x4fca94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4fca94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4fca98:
    // 0x4fca98: 0x320f809  jalr        $t9
label_4fca9c:
    if (ctx->pc == 0x4FCA9Cu) {
        ctx->pc = 0x4FCA9Cu;
            // 0x4fca9c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4FCAA0u;
        goto label_4fcaa0;
    }
    ctx->pc = 0x4FCA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FCAA0u);
        ctx->pc = 0x4FCA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCA98u;
            // 0x4fca9c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FCAA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FCAA0u; }
            if (ctx->pc != 0x4FCAA0u) { return; }
        }
        }
    }
    ctx->pc = 0x4FCAA0u;
label_4fcaa0:
    // 0x4fcaa0: 0x100000cf  b           . + 4 + (0xCF << 2)
label_4fcaa4:
    if (ctx->pc == 0x4FCAA4u) {
        ctx->pc = 0x4FCAA8u;
        goto label_4fcaa8;
    }
    ctx->pc = 0x4FCAA0u;
    {
        const bool branch_taken_0x4fcaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fcaa0) {
            ctx->pc = 0x4FCDE0u;
            goto label_4fcde0;
        }
    }
    ctx->pc = 0x4FCAA8u;
label_4fcaa8:
    // 0x4fcaa8: 0x8ee30070  lw          $v1, 0x70($s7)
    ctx->pc = 0x4fcaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 112)));
label_4fcaac:
    // 0x4fcaac: 0x106000cc  beqz        $v1, . + 4 + (0xCC << 2)
label_4fcab0:
    if (ctx->pc == 0x4FCAB0u) {
        ctx->pc = 0x4FCAB0u;
            // 0x4fcab0: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->pc = 0x4FCAB4u;
        goto label_4fcab4;
    }
    ctx->pc = 0x4FCAACu;
    {
        const bool branch_taken_0x4fcaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCAACu;
            // 0x4fcab0: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcaac) {
            ctx->pc = 0x4FCDE0u;
            goto label_4fcde0;
        }
    }
    ctx->pc = 0x4FCAB4u;
label_4fcab4:
    // 0x4fcab4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4fcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4fcab8:
    // 0x4fcab8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4fcab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4fcabc:
    // 0x4fcabc: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4fcabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4fcac0:
    // 0x4fcac0: 0x26f50084  addiu       $s5, $s7, 0x84
    ctx->pc = 0x4fcac0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 132));
label_4fcac4:
    // 0x4fcac4: 0x8c730e80  lw          $s3, 0xE80($v1)
    ctx->pc = 0x4fcac4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4fcac8:
    // 0x4fcac8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4fcac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fcacc:
    // 0x4fcacc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4fcaccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fcad0:
    // 0x4fcad0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4fcad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4fcad4:
    // 0x4fcad4: 0x8c900130  lw          $s0, 0x130($a0)
    ctx->pc = 0x4fcad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4fcad8:
    // 0x4fcad8: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4fcad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4fcadc:
    // 0x4fcadc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fcadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fcae0:
    // 0x4fcae0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4fcae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4fcae4:
    // 0x4fcae4: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x4fcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4fcae8:
    // 0x4fcae8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x4fcae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_4fcaec:
    // 0x4fcaec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fcaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fcaf0:
    // 0x4fcaf0: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x4fcaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4fcaf4:
    // 0x4fcaf4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4fcaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4fcaf8:
    // 0x4fcaf8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4fcaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4fcafc:
    // 0x4fcafc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4fcafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4fcb00:
    // 0x4fcb00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fcb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fcb04:
    // 0x4fcb04: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4fcb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4fcb08:
    // 0x4fcb08: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x4fcb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_4fcb0c:
    // 0x4fcb0c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4fcb0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fcb10:
    // 0x4fcb10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fcb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fcb14:
    // 0x4fcb14: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4fcb14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4fcb18:
    // 0x4fcb18: 0x320f809  jalr        $t9
label_4fcb1c:
    if (ctx->pc == 0x4FCB1Cu) {
        ctx->pc = 0x4FCB1Cu;
            // 0x4fcb1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCB20u;
        goto label_4fcb20;
    }
    ctx->pc = 0x4FCB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FCB20u);
        ctx->pc = 0x4FCB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCB18u;
            // 0x4fcb1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FCB20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FCB20u; }
            if (ctx->pc != 0x4FCB20u) { return; }
        }
        }
    }
    ctx->pc = 0x4FCB20u;
label_4fcb20:
    // 0x4fcb20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4fcb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fcb24:
    // 0x4fcb24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fcb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fcb28:
    // 0x4fcb28: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x4fcb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_4fcb2c:
    // 0x4fcb2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fcb30:
    // 0x4fcb30: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4fcb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4fcb34:
    // 0x4fcb34: 0x8c440d78  lw          $a0, 0xD78($v0)
    ctx->pc = 0x4fcb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
label_4fcb38:
    // 0x4fcb38: 0x804211aa  lb          $v0, 0x11AA($v0)
    ctx->pc = 0x4fcb38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4522)));
label_4fcb3c:
    // 0x4fcb3c: 0x1602001e  bne         $s0, $v0, . + 4 + (0x1E << 2)
label_4fcb40:
    if (ctx->pc == 0x4FCB40u) {
        ctx->pc = 0x4FCB44u;
        goto label_4fcb44;
    }
    ctx->pc = 0x4FCB3Cu;
    {
        const bool branch_taken_0x4fcb3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fcb3c) {
            ctx->pc = 0x4FCBB8u;
            goto label_4fcbb8;
        }
    }
    ctx->pc = 0x4FCB44u;
label_4fcb44:
    // 0x4fcb44: 0x8e630968  lw          $v1, 0x968($s3)
    ctx->pc = 0x4fcb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
label_4fcb48:
    // 0x4fcb48: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4fcb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4fcb4c:
    // 0x4fcb4c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_4fcb50:
    if (ctx->pc == 0x4FCB50u) {
        ctx->pc = 0x4FCB54u;
        goto label_4fcb54;
    }
    ctx->pc = 0x4FCB4Cu;
    {
        const bool branch_taken_0x4fcb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fcb4c) {
            ctx->pc = 0x4FCBA0u;
            goto label_4fcba0;
        }
    }
    ctx->pc = 0x4FCB54u;
label_4fcb54:
    // 0x4fcb54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fcb58:
    // 0x4fcb58: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x4fcb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_4fcb5c:
    // 0x4fcb5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4fcb60:
    if (ctx->pc == 0x4FCB60u) {
        ctx->pc = 0x4FCB64u;
        goto label_4fcb64;
    }
    ctx->pc = 0x4FCB5Cu;
    {
        const bool branch_taken_0x4fcb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fcb5c) {
            ctx->pc = 0x4FCB80u;
            goto label_4fcb80;
        }
    }
    ctx->pc = 0x4FCB64u;
label_4fcb64:
    // 0x4fcb64: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4fcb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4fcb68:
    // 0x4fcb68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fcb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fcb6c:
    // 0x4fcb6c: 0x8c4202c4  lw          $v0, 0x2C4($v0)
    ctx->pc = 0x4fcb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 708)));
label_4fcb70:
    // 0x4fcb70: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_4fcb74:
    if (ctx->pc == 0x4FCB74u) {
        ctx->pc = 0x4FCB78u;
        goto label_4fcb78;
    }
    ctx->pc = 0x4FCB70u;
    {
        const bool branch_taken_0x4fcb70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fcb70) {
            ctx->pc = 0x4FCBB8u;
            goto label_4fcbb8;
        }
    }
    ctx->pc = 0x4FCB78u;
label_4fcb78:
    // 0x4fcb78: 0x1000000f  b           . + 4 + (0xF << 2)
label_4fcb7c:
    if (ctx->pc == 0x4FCB7Cu) {
        ctx->pc = 0x4FCB7Cu;
            // 0x4fcb7c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FCB80u;
        goto label_4fcb80;
    }
    ctx->pc = 0x4FCB78u;
    {
        const bool branch_taken_0x4fcb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCB78u;
            // 0x4fcb7c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcb78) {
            ctx->pc = 0x4FCBB8u;
            goto label_4fcbb8;
        }
    }
    ctx->pc = 0x4FCB80u;
label_4fcb80:
    // 0x4fcb80: 0x8e62078c  lw          $v0, 0x78C($s3)
    ctx->pc = 0x4fcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1932)));
label_4fcb84:
    // 0x4fcb84: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x4fcb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4fcb88:
    // 0x4fcb88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4fcb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4fcb8c:
    // 0x4fcb8c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x4fcb8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4fcb90:
    // 0x4fcb90: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_4fcb94:
    if (ctx->pc == 0x4FCB94u) {
        ctx->pc = 0x4FCB98u;
        goto label_4fcb98;
    }
    ctx->pc = 0x4FCB90u;
    {
        const bool branch_taken_0x4fcb90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fcb90) {
            ctx->pc = 0x4FCBB8u;
            goto label_4fcbb8;
        }
    }
    ctx->pc = 0x4FCB98u;
label_4fcb98:
    // 0x4fcb98: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fcb9c:
    if (ctx->pc == 0x4FCB9Cu) {
        ctx->pc = 0x4FCB9Cu;
            // 0x4fcb9c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FCBA0u;
        goto label_4fcba0;
    }
    ctx->pc = 0x4FCB98u;
    {
        const bool branch_taken_0x4fcb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCB98u;
            // 0x4fcb9c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcb98) {
            ctx->pc = 0x4FCBB8u;
            goto label_4fcbb8;
        }
    }
    ctx->pc = 0x4FCBA0u;
label_4fcba0:
    // 0x4fcba0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x4fcba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_4fcba4:
    // 0x4fcba4: 0x8e62078c  lw          $v0, 0x78C($s3)
    ctx->pc = 0x4fcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1932)));
label_4fcba8:
    // 0x4fcba8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x4fcba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4fcbac:
    // 0x4fcbac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4fcbb0:
    if (ctx->pc == 0x4FCBB0u) {
        ctx->pc = 0x4FCBB4u;
        goto label_4fcbb4;
    }
    ctx->pc = 0x4FCBACu;
    {
        const bool branch_taken_0x4fcbac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fcbac) {
            ctx->pc = 0x4FCBB8u;
            goto label_4fcbb8;
        }
    }
    ctx->pc = 0x4FCBB4u;
label_4fcbb4:
    // 0x4fcbb4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4fcbb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fcbb8:
    // 0x4fcbb8: 0x8e620780  lw          $v0, 0x780($s3)
    ctx->pc = 0x4fcbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1920)));
label_4fcbbc:
    // 0x4fcbbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4fcbbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4fcbc0:
    // 0x4fcbc0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4fcbc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4fcbc4:
    // 0x4fcbc4: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
label_4fcbc8:
    if (ctx->pc == 0x4FCBC8u) {
        ctx->pc = 0x4FCBC8u;
            // 0x4fcbc8: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4FCBCCu;
        goto label_4fcbcc;
    }
    ctx->pc = 0x4FCBC4u;
    {
        const bool branch_taken_0x4fcbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fcbc4) {
            ctx->pc = 0x4FCBC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCBC4u;
            // 0x4fcbc8: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FCB10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fcb10;
        }
    }
    ctx->pc = 0x4FCBCCu;
label_4fcbcc:
    // 0x4fcbcc: 0x12400066  beqz        $s2, . + 4 + (0x66 << 2)
label_4fcbd0:
    if (ctx->pc == 0x4FCBD0u) {
        ctx->pc = 0x4FCBD4u;
        goto label_4fcbd4;
    }
    ctx->pc = 0x4FCBCCu;
    {
        const bool branch_taken_0x4fcbcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fcbcc) {
            ctx->pc = 0x4FCD68u;
            goto label_4fcd68;
        }
    }
    ctx->pc = 0x4FCBD4u;
label_4fcbd4:
    // 0x4fcbd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4fcbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fcbd8:
    // 0x4fcbd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4fcbd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fcbdc:
    // 0x4fcbdc: 0x8ee20074  lw          $v0, 0x74($s7)
    ctx->pc = 0x4fcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_4fcbe0:
    // 0x4fcbe0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4fcbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4fcbe4:
    // 0x4fcbe4: 0xc0576f4  jal         func_15DBD0
label_4fcbe8:
    if (ctx->pc == 0x4FCBE8u) {
        ctx->pc = 0x4FCBE8u;
            // 0x4fcbe8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FCBECu;
        goto label_4fcbec;
    }
    ctx->pc = 0x4FCBE4u;
    SET_GPR_U32(ctx, 31, 0x4FCBECu);
    ctx->pc = 0x4FCBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCBE4u;
            // 0x4fcbe8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCBECu; }
        if (ctx->pc != 0x4FCBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCBECu; }
        if (ctx->pc != 0x4FCBECu) { return; }
    }
    ctx->pc = 0x4FCBECu;
label_4fcbec:
    // 0x4fcbec: 0xc0b36b4  jal         func_2CDAD0
label_4fcbf0:
    if (ctx->pc == 0x4FCBF0u) {
        ctx->pc = 0x4FCBF0u;
            // 0x4fcbf0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCBF4u;
        goto label_4fcbf4;
    }
    ctx->pc = 0x4FCBECu;
    SET_GPR_U32(ctx, 31, 0x4FCBF4u);
    ctx->pc = 0x4FCBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCBECu;
            // 0x4fcbf0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCBF4u; }
        if (ctx->pc != 0x4FCBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCBF4u; }
        if (ctx->pc != 0x4FCBF4u) { return; }
    }
    ctx->pc = 0x4FCBF4u;
label_4fcbf4:
    // 0x4fcbf4: 0xc0b9c64  jal         func_2E7190
label_4fcbf8:
    if (ctx->pc == 0x4FCBF8u) {
        ctx->pc = 0x4FCBF8u;
            // 0x4fcbf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCBFCu;
        goto label_4fcbfc;
    }
    ctx->pc = 0x4FCBF4u;
    SET_GPR_U32(ctx, 31, 0x4FCBFCu);
    ctx->pc = 0x4FCBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCBF4u;
            // 0x4fcbf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCBFCu; }
        if (ctx->pc != 0x4FCBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCBFCu; }
        if (ctx->pc != 0x4FCBFCu) { return; }
    }
    ctx->pc = 0x4FCBFCu;
label_4fcbfc:
    // 0x4fcbfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fcbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fcc00:
    // 0x4fcc00: 0xc076984  jal         func_1DA610
label_4fcc04:
    if (ctx->pc == 0x4FCC04u) {
        ctx->pc = 0x4FCC04u;
            // 0x4fcc04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCC08u;
        goto label_4fcc08;
    }
    ctx->pc = 0x4FCC00u;
    SET_GPR_U32(ctx, 31, 0x4FCC08u);
    ctx->pc = 0x4FCC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCC00u;
            // 0x4fcc04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC08u; }
        if (ctx->pc != 0x4FCC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC08u; }
        if (ctx->pc != 0x4FCC08u) { return; }
    }
    ctx->pc = 0x4FCC08u;
label_4fcc08:
    // 0x4fcc08: 0xc07697c  jal         func_1DA5F0
label_4fcc0c:
    if (ctx->pc == 0x4FCC0Cu) {
        ctx->pc = 0x4FCC0Cu;
            // 0x4fcc0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCC10u;
        goto label_4fcc10;
    }
    ctx->pc = 0x4FCC08u;
    SET_GPR_U32(ctx, 31, 0x4FCC10u);
    ctx->pc = 0x4FCC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCC08u;
            // 0x4fcc0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC10u; }
        if (ctx->pc != 0x4FCC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC10u; }
        if (ctx->pc != 0x4FCC10u) { return; }
    }
    ctx->pc = 0x4FCC10u;
label_4fcc10:
    // 0x4fcc10: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x4fcc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_4fcc14:
    // 0x4fcc14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fcc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fcc18:
    // 0x4fcc18: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x4fcc18u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4fcc1c:
    // 0x4fcc1c: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x4fcc1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4fcc20:
    // 0x4fcc20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fcc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fcc24:
    // 0x4fcc24: 0x8c53e378  lw          $s3, -0x1C88($v0)
    ctx->pc = 0x4fcc24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4fcc28:
    // 0x4fcc28: 0xc0d1c14  jal         func_347050
label_4fcc2c:
    if (ctx->pc == 0x4FCC2Cu) {
        ctx->pc = 0x4FCC2Cu;
            // 0x4fcc2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCC30u;
        goto label_4fcc30;
    }
    ctx->pc = 0x4FCC28u;
    SET_GPR_U32(ctx, 31, 0x4FCC30u);
    ctx->pc = 0x4FCC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCC28u;
            // 0x4fcc2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC30u; }
        if (ctx->pc != 0x4FCC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC30u; }
        if (ctx->pc != 0x4FCC30u) { return; }
    }
    ctx->pc = 0x4FCC30u;
label_4fcc30:
    // 0x4fcc30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4fcc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fcc34:
    // 0x4fcc34: 0xc04f278  jal         func_13C9E0
label_4fcc38:
    if (ctx->pc == 0x4FCC38u) {
        ctx->pc = 0x4FCC38u;
            // 0x4fcc38: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x4FCC3Cu;
        goto label_4fcc3c;
    }
    ctx->pc = 0x4FCC34u;
    SET_GPR_U32(ctx, 31, 0x4FCC3Cu);
    ctx->pc = 0x4FCC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCC34u;
            // 0x4fcc38: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC3Cu; }
        if (ctx->pc != 0x4FCC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC3Cu; }
        if (ctx->pc != 0x4FCC3Cu) { return; }
    }
    ctx->pc = 0x4FCC3Cu;
label_4fcc3c:
    // 0x4fcc3c: 0xc0d1c10  jal         func_347040
label_4fcc40:
    if (ctx->pc == 0x4FCC40u) {
        ctx->pc = 0x4FCC40u;
            // 0x4fcc40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCC44u;
        goto label_4fcc44;
    }
    ctx->pc = 0x4FCC3Cu;
    SET_GPR_U32(ctx, 31, 0x4FCC44u);
    ctx->pc = 0x4FCC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCC3Cu;
            // 0x4fcc40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC44u; }
        if (ctx->pc != 0x4FCC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC44u; }
        if (ctx->pc != 0x4FCC44u) { return; }
    }
    ctx->pc = 0x4FCC44u;
label_4fcc44:
    // 0x4fcc44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4fcc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fcc48:
    // 0x4fcc48: 0xc04ce80  jal         func_133A00
label_4fcc4c:
    if (ctx->pc == 0x4FCC4Cu) {
        ctx->pc = 0x4FCC4Cu;
            // 0x4fcc4c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x4FCC50u;
        goto label_4fcc50;
    }
    ctx->pc = 0x4FCC48u;
    SET_GPR_U32(ctx, 31, 0x4FCC50u);
    ctx->pc = 0x4FCC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCC48u;
            // 0x4fcc4c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC50u; }
        if (ctx->pc != 0x4FCC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC50u; }
        if (ctx->pc != 0x4FCC50u) { return; }
    }
    ctx->pc = 0x4FCC50u;
label_4fcc50:
    // 0x4fcc50: 0xc0b36b4  jal         func_2CDAD0
label_4fcc54:
    if (ctx->pc == 0x4FCC54u) {
        ctx->pc = 0x4FCC58u;
        goto label_4fcc58;
    }
    ctx->pc = 0x4FCC50u;
    SET_GPR_U32(ctx, 31, 0x4FCC58u);
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC58u; }
        if (ctx->pc != 0x4FCC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC58u; }
        if (ctx->pc != 0x4FCC58u) { return; }
    }
    ctx->pc = 0x4FCC58u;
label_4fcc58:
    // 0x4fcc58: 0xc0b9c64  jal         func_2E7190
label_4fcc5c:
    if (ctx->pc == 0x4FCC5Cu) {
        ctx->pc = 0x4FCC5Cu;
            // 0x4fcc5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCC60u;
        goto label_4fcc60;
    }
    ctx->pc = 0x4FCC58u;
    SET_GPR_U32(ctx, 31, 0x4FCC60u);
    ctx->pc = 0x4FCC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCC58u;
            // 0x4fcc5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC60u; }
        if (ctx->pc != 0x4FCC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC60u; }
        if (ctx->pc != 0x4FCC60u) { return; }
    }
    ctx->pc = 0x4FCC60u;
label_4fcc60:
    // 0x4fcc60: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4fcc60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fcc64:
    // 0x4fcc64: 0xc0d4104  jal         func_350410
label_4fcc68:
    if (ctx->pc == 0x4FCC68u) {
        ctx->pc = 0x4FCC68u;
            // 0x4fcc68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCC6Cu;
        goto label_4fcc6c;
    }
    ctx->pc = 0x4FCC64u;
    SET_GPR_U32(ctx, 31, 0x4FCC6Cu);
    ctx->pc = 0x4FCC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCC64u;
            // 0x4fcc68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC6Cu; }
        if (ctx->pc != 0x4FCC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC6Cu; }
        if (ctx->pc != 0x4FCC6Cu) { return; }
    }
    ctx->pc = 0x4FCC6Cu;
label_4fcc6c:
    // 0x4fcc6c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4fcc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4fcc70:
    // 0x4fcc70: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4fcc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4fcc74:
    // 0x4fcc74: 0x8c640ea4  lw          $a0, 0xEA4($v1)
    ctx->pc = 0x4fcc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_4fcc78:
    // 0x4fcc78: 0xc07698c  jal         func_1DA630
label_4fcc7c:
    if (ctx->pc == 0x4FCC7Cu) {
        ctx->pc = 0x4FCC7Cu;
            // 0x4fcc7c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCC80u;
        goto label_4fcc80;
    }
    ctx->pc = 0x4FCC78u;
    SET_GPR_U32(ctx, 31, 0x4FCC80u);
    ctx->pc = 0x4FCC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCC78u;
            // 0x4fcc7c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC80u; }
        if (ctx->pc != 0x4FCC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC80u; }
        if (ctx->pc != 0x4FCC80u) { return; }
    }
    ctx->pc = 0x4FCC80u;
label_4fcc80:
    // 0x4fcc80: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4fcc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fcc84:
    // 0x4fcc84: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
label_4fcc88:
    if (ctx->pc == 0x4FCC88u) {
        ctx->pc = 0x4FCC8Cu;
        goto label_4fcc8c;
    }
    ctx->pc = 0x4FCC84u;
    {
        const bool branch_taken_0x4fcc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fcc84) {
            ctx->pc = 0x4FCD50u;
            goto label_4fcd50;
        }
    }
    ctx->pc = 0x4FCC8Cu;
label_4fcc8c:
    // 0x4fcc8c: 0xc0d1dc8  jal         func_347720
label_4fcc90:
    if (ctx->pc == 0x4FCC90u) {
        ctx->pc = 0x4FCC90u;
            // 0x4fcc90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCC94u;
        goto label_4fcc94;
    }
    ctx->pc = 0x4FCC8Cu;
    SET_GPR_U32(ctx, 31, 0x4FCC94u);
    ctx->pc = 0x4FCC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCC8Cu;
            // 0x4fcc90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC94u; }
        if (ctx->pc != 0x4FCC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCC94u; }
        if (ctx->pc != 0x4FCC94u) { return; }
    }
    ctx->pc = 0x4FCC94u;
label_4fcc94:
    // 0x4fcc94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4fcc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fcc98:
    // 0x4fcc98: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4fcc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4fcc9c:
    // 0x4fcc9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4fcc9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4fcca0:
    // 0x4fcca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4fcca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4fcca4:
    // 0x4fcca4: 0xc0d1dc8  jal         func_347720
label_4fcca8:
    if (ctx->pc == 0x4FCCA8u) {
        ctx->pc = 0x4FCCA8u;
            // 0x4fcca8: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4FCCACu;
        goto label_4fccac;
    }
    ctx->pc = 0x4FCCA4u;
    SET_GPR_U32(ctx, 31, 0x4FCCACu);
    ctx->pc = 0x4FCCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCCA4u;
            // 0x4fcca8: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCCACu; }
        if (ctx->pc != 0x4FCCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCCACu; }
        if (ctx->pc != 0x4FCCACu) { return; }
    }
    ctx->pc = 0x4FCCACu;
label_4fccac:
    // 0x4fccac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4fccacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4fccb0:
    // 0x4fccb0: 0xc0d1dc8  jal         func_347720
label_4fccb4:
    if (ctx->pc == 0x4FCCB4u) {
        ctx->pc = 0x4FCCB4u;
            // 0x4fccb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCCB8u;
        goto label_4fccb8;
    }
    ctx->pc = 0x4FCCB0u;
    SET_GPR_U32(ctx, 31, 0x4FCCB8u);
    ctx->pc = 0x4FCCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCCB0u;
            // 0x4fccb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCCB8u; }
        if (ctx->pc != 0x4FCCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCCB8u; }
        if (ctx->pc != 0x4FCCB8u) { return; }
    }
    ctx->pc = 0x4FCCB8u;
label_4fccb8:
    // 0x4fccb8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4fccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fccbc:
    // 0x4fccbc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4fccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4fccc0:
    // 0x4fccc0: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x4fccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4fccc4:
    // 0x4fccc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4fccc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fccc8:
    // 0x4fccc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4fccc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4fcccc:
    // 0x4fcccc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4fccccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4fccd0:
    // 0x4fccd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4fccd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4fccd4:
    // 0x4fccd4: 0xc04ce50  jal         func_133940
label_4fccd8:
    if (ctx->pc == 0x4FCCD8u) {
        ctx->pc = 0x4FCCD8u;
            // 0x4fccd8: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4FCCDCu;
        goto label_4fccdc;
    }
    ctx->pc = 0x4FCCD4u;
    SET_GPR_U32(ctx, 31, 0x4FCCDCu);
    ctx->pc = 0x4FCCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCCD4u;
            // 0x4fccd8: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCCDCu; }
        if (ctx->pc != 0x4FCCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCCDCu; }
        if (ctx->pc != 0x4FCCDCu) { return; }
    }
    ctx->pc = 0x4FCCDCu;
label_4fccdc:
    // 0x4fccdc: 0xc04e738  jal         func_139CE0
label_4fcce0:
    if (ctx->pc == 0x4FCCE0u) {
        ctx->pc = 0x4FCCE0u;
            // 0x4fcce0: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x4FCCE4u;
        goto label_4fcce4;
    }
    ctx->pc = 0x4FCCDCu;
    SET_GPR_U32(ctx, 31, 0x4FCCE4u);
    ctx->pc = 0x4FCCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCCDCu;
            // 0x4fcce0: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCCE4u; }
        if (ctx->pc != 0x4FCCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCCE4u; }
        if (ctx->pc != 0x4FCCE4u) { return; }
    }
    ctx->pc = 0x4FCCE4u;
label_4fcce4:
    // 0x4fcce4: 0x8ec50028  lw          $a1, 0x28($s6)
    ctx->pc = 0x4fcce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_4fcce8:
    // 0x4fcce8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fcce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fccec:
    // 0x4fccec: 0xc04e4a4  jal         func_139290
label_4fccf0:
    if (ctx->pc == 0x4FCCF0u) {
        ctx->pc = 0x4FCCF0u;
            // 0x4fccf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCCF4u;
        goto label_4fccf4;
    }
    ctx->pc = 0x4FCCECu;
    SET_GPR_U32(ctx, 31, 0x4FCCF4u);
    ctx->pc = 0x4FCCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCCECu;
            // 0x4fccf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCCF4u; }
        if (ctx->pc != 0x4FCCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCCF4u; }
        if (ctx->pc != 0x4FCCF4u) { return; }
    }
    ctx->pc = 0x4FCCF4u;
label_4fccf4:
    // 0x4fccf4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x4fccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4fccf8:
    // 0x4fccf8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4fccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4fccfc:
    // 0x4fccfc: 0xc04cd60  jal         func_133580
label_4fcd00:
    if (ctx->pc == 0x4FCD00u) {
        ctx->pc = 0x4FCD00u;
            // 0x4fcd00: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCD04u;
        goto label_4fcd04;
    }
    ctx->pc = 0x4FCCFCu;
    SET_GPR_U32(ctx, 31, 0x4FCD04u);
    ctx->pc = 0x4FCD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCCFCu;
            // 0x4fcd00: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCD04u; }
        if (ctx->pc != 0x4FCD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCD04u; }
        if (ctx->pc != 0x4FCD04u) { return; }
    }
    ctx->pc = 0x4FCD04u;
label_4fcd04:
    // 0x4fcd04: 0x8ea60010  lw          $a2, 0x10($s5)
    ctx->pc = 0x4fcd04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4fcd08:
    // 0x4fcd08: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4fcd08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4fcd0c:
    // 0x4fcd0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fcd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4fcd10:
    // 0x4fcd10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4fcd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fcd14:
    // 0x4fcd14: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x4fcd14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4fcd18:
    // 0x4fcd18: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4fcd18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4fcd1c:
    // 0x4fcd1c: 0xc04cfcc  jal         func_133F30
label_4fcd20:
    if (ctx->pc == 0x4FCD20u) {
        ctx->pc = 0x4FCD20u;
            // 0x4fcd20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCD24u;
        goto label_4fcd24;
    }
    ctx->pc = 0x4FCD1Cu;
    SET_GPR_U32(ctx, 31, 0x4FCD24u);
    ctx->pc = 0x4FCD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCD1Cu;
            // 0x4fcd20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCD24u; }
        if (ctx->pc != 0x4FCD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCD24u; }
        if (ctx->pc != 0x4FCD24u) { return; }
    }
    ctx->pc = 0x4FCD24u;
label_4fcd24:
    // 0x4fcd24: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x4fcd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4fcd28:
    // 0x4fcd28: 0xc6ac001c  lwc1        $f12, 0x1C($s5)
    ctx->pc = 0x4fcd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4fcd2c:
    // 0x4fcd2c: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x4fcd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_4fcd30:
    // 0x4fcd30: 0xc054bbc  jal         func_152EF0
label_4fcd34:
    if (ctx->pc == 0x4FCD34u) {
        ctx->pc = 0x4FCD34u;
            // 0x4fcd34: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCD38u;
        goto label_4fcd38;
    }
    ctx->pc = 0x4FCD30u;
    SET_GPR_U32(ctx, 31, 0x4FCD38u);
    ctx->pc = 0x4FCD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCD30u;
            // 0x4fcd34: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCD38u; }
        if (ctx->pc != 0x4FCD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCD38u; }
        if (ctx->pc != 0x4FCD38u) { return; }
    }
    ctx->pc = 0x4FCD38u;
label_4fcd38:
    // 0x4fcd38: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x4fcd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4fcd3c:
    // 0x4fcd3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fcd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4fcd40:
    // 0x4fcd40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4fcd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fcd44:
    // 0x4fcd44: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4fcd44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4fcd48:
    // 0x4fcd48: 0xc054c2c  jal         func_1530B0
label_4fcd4c:
    if (ctx->pc == 0x4FCD4Cu) {
        ctx->pc = 0x4FCD4Cu;
            // 0x4fcd4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCD50u;
        goto label_4fcd50;
    }
    ctx->pc = 0x4FCD48u;
    SET_GPR_U32(ctx, 31, 0x4FCD50u);
    ctx->pc = 0x4FCD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCD48u;
            // 0x4fcd4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCD50u; }
        if (ctx->pc != 0x4FCD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCD50u; }
        if (ctx->pc != 0x4FCD50u) { return; }
    }
    ctx->pc = 0x4FCD50u;
label_4fcd50:
    // 0x4fcd50: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x4fcd50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4fcd54:
    // 0x4fcd54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4fcd54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4fcd58:
    // 0x4fcd58: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4fcd58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4fcd5c:
    // 0x4fcd5c: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
label_4fcd60:
    if (ctx->pc == 0x4FCD60u) {
        ctx->pc = 0x4FCD60u;
            // 0x4fcd60: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4FCD64u;
        goto label_4fcd64;
    }
    ctx->pc = 0x4FCD5Cu;
    {
        const bool branch_taken_0x4fcd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FCD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCD5Cu;
            // 0x4fcd60: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcd5c) {
            ctx->pc = 0x4FCBDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fcbdc;
        }
    }
    ctx->pc = 0x4FCD64u;
label_4fcd64:
    // 0x4fcd64: 0x0  nop
    ctx->pc = 0x4fcd64u;
    // NOP
label_4fcd68:
    // 0x4fcd68: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x4fcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4fcd6c:
    // 0x4fcd6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4fcd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4fcd70:
    // 0x4fcd70: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x4fcd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_4fcd74:
    // 0x4fcd74: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4fcd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4fcd78:
    // 0x4fcd78: 0x8fa90100  lw          $t1, 0x100($sp)
    ctx->pc = 0x4fcd78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_4fcd7c:
    // 0x4fcd7c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4fcd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4fcd80:
    // 0x4fcd80: 0x8faa00f0  lw          $t2, 0xF0($sp)
    ctx->pc = 0x4fcd80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4fcd84:
    // 0x4fcd84: 0x8fab00d0  lw          $t3, 0xD0($sp)
    ctx->pc = 0x4fcd84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4fcd88:
    // 0x4fcd88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x4fcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4fcd8c:
    // 0x4fcd8c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x4fcd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_4fcd90:
    // 0x4fcd90: 0x8ee400e0  lw          $a0, 0xE0($s7)
    ctx->pc = 0x4fcd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 224)));
label_4fcd94:
    // 0x4fcd94: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x4fcd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_4fcd98:
    // 0x4fcd98: 0x8ea80054  lw          $t0, 0x54($s5)
    ctx->pc = 0x4fcd98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4fcd9c:
    // 0x4fcd9c: 0xc145f18  jal         func_517C60
label_4fcda0:
    if (ctx->pc == 0x4FCDA0u) {
        ctx->pc = 0x4FCDA0u;
            // 0x4fcda0: 0x26a70044  addiu       $a3, $s5, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
        ctx->pc = 0x4FCDA4u;
        goto label_4fcda4;
    }
    ctx->pc = 0x4FCD9Cu;
    SET_GPR_U32(ctx, 31, 0x4FCDA4u);
    ctx->pc = 0x4FCDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCD9Cu;
            // 0x4fcda0: 0x26a70044  addiu       $a3, $s5, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517C60u;
    if (runtime->hasFunction(0x517C60u)) {
        auto targetFn = runtime->lookupFunction(0x517C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCDA4u; }
        if (ctx->pc != 0x4FCDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517C60_0x517c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCDA4u; }
        if (ctx->pc != 0x4FCDA4u) { return; }
    }
    ctx->pc = 0x4FCDA4u;
label_4fcda4:
    // 0x4fcda4: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x4fcda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4fcda8:
    // 0x4fcda8: 0x8fa90100  lw          $t1, 0x100($sp)
    ctx->pc = 0x4fcda8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_4fcdac:
    // 0x4fcdac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4fcdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4fcdb0:
    // 0x4fcdb0: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x4fcdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_4fcdb4:
    // 0x4fcdb4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4fcdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4fcdb8:
    // 0x4fcdb8: 0x8faa00f0  lw          $t2, 0xF0($sp)
    ctx->pc = 0x4fcdb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4fcdbc:
    // 0x4fcdbc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4fcdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4fcdc0:
    // 0x4fcdc0: 0x26a70044  addiu       $a3, $s5, 0x44
    ctx->pc = 0x4fcdc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
label_4fcdc4:
    // 0x4fcdc4: 0x8fab00d0  lw          $t3, 0xD0($sp)
    ctx->pc = 0x4fcdc4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4fcdc8:
    // 0x4fcdc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4fcdc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fcdcc:
    // 0x4fcdcc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x4fcdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4fcdd0:
    // 0x4fcdd0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x4fcdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_4fcdd4:
    // 0x4fcdd4: 0x8ee400e4  lw          $a0, 0xE4($s7)
    ctx->pc = 0x4fcdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 228)));
label_4fcdd8:
    // 0x4fcdd8: 0xc145f18  jal         func_517C60
label_4fcddc:
    if (ctx->pc == 0x4FCDDCu) {
        ctx->pc = 0x4FCDDCu;
            // 0x4fcddc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCDE0u;
        goto label_4fcde0;
    }
    ctx->pc = 0x4FCDD8u;
    SET_GPR_U32(ctx, 31, 0x4FCDE0u);
    ctx->pc = 0x4FCDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCDD8u;
            // 0x4fcddc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517C60u;
    if (runtime->hasFunction(0x517C60u)) {
        auto targetFn = runtime->lookupFunction(0x517C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCDE0u; }
        if (ctx->pc != 0x4FCDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517C60_0x517c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCDE0u; }
        if (ctx->pc != 0x4FCDE0u) { return; }
    }
    ctx->pc = 0x4FCDE0u;
label_4fcde0:
    // 0x4fcde0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x4fcde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_4fcde4:
    // 0x4fcde4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x4fcde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4fcde8:
    // 0x4fcde8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x4fcde8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4fcdec:
    // 0x4fcdec: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x4fcdecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4fcdf0:
    // 0x4fcdf0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x4fcdf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4fcdf4:
    // 0x4fcdf4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4fcdf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4fcdf8:
    // 0x4fcdf8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4fcdf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4fcdfc:
    // 0x4fcdfc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4fcdfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4fce00:
    // 0x4fce00: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4fce00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4fce04:
    // 0x4fce04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4fce04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fce08:
    // 0x4fce08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4fce08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fce0c:
    // 0x4fce0c: 0x3e00008  jr          $ra
label_4fce10:
    if (ctx->pc == 0x4FCE10u) {
        ctx->pc = 0x4FCE10u;
            // 0x4fce10: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4FCE14u;
        goto label_4fce14;
    }
    ctx->pc = 0x4FCE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FCE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCE0Cu;
            // 0x4fce10: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FCE14u;
label_4fce14:
    // 0x4fce14: 0x0  nop
    ctx->pc = 0x4fce14u;
    // NOP
label_4fce18:
    // 0x4fce18: 0x0  nop
    ctx->pc = 0x4fce18u;
    // NOP
label_4fce1c:
    // 0x4fce1c: 0x0  nop
    ctx->pc = 0x4fce1cu;
    // NOP
label_4fce20:
    // 0x4fce20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4fce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4fce24:
    // 0x4fce24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4fce24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fce28:
    // 0x4fce28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4fce28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4fce2c:
    // 0x4fce2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fce30:
    // 0x4fce30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fce30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fce34:
    // 0x4fce34: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4fce34u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4fce38:
    // 0x4fce38: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4fce3c:
    if (ctx->pc == 0x4FCE3Cu) {
        ctx->pc = 0x4FCE3Cu;
            // 0x4fce3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FCE40u;
        goto label_4fce40;
    }
    ctx->pc = 0x4FCE38u;
    {
        const bool branch_taken_0x4fce38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FCE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCE38u;
            // 0x4fce3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fce38) {
            ctx->pc = 0x4FCE6Cu;
            goto label_4fce6c;
        }
    }
    ctx->pc = 0x4FCE40u;
label_4fce40:
    // 0x4fce40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4fce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fce44:
    // 0x4fce44: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4fce48:
    if (ctx->pc == 0x4FCE48u) {
        ctx->pc = 0x4FCE48u;
            // 0x4fce48: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4FCE4Cu;
        goto label_4fce4c;
    }
    ctx->pc = 0x4FCE44u;
    {
        const bool branch_taken_0x4fce44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fce44) {
            ctx->pc = 0x4FCE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCE44u;
            // 0x4fce48: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FCE60u;
            goto label_4fce60;
        }
    }
    ctx->pc = 0x4FCE4Cu;
label_4fce4c:
    // 0x4fce4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4fce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fce50:
    // 0x4fce50: 0x10a30067  beq         $a1, $v1, . + 4 + (0x67 << 2)
label_4fce54:
    if (ctx->pc == 0x4FCE54u) {
        ctx->pc = 0x4FCE58u;
        goto label_4fce58;
    }
    ctx->pc = 0x4FCE50u;
    {
        const bool branch_taken_0x4fce50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fce50) {
            ctx->pc = 0x4FCFF0u;
            goto label_4fcff0;
        }
    }
    ctx->pc = 0x4FCE58u;
label_4fce58:
    // 0x4fce58: 0x10000065  b           . + 4 + (0x65 << 2)
label_4fce5c:
    if (ctx->pc == 0x4FCE5Cu) {
        ctx->pc = 0x4FCE60u;
        goto label_4fce60;
    }
    ctx->pc = 0x4FCE58u;
    {
        const bool branch_taken_0x4fce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fce58) {
            ctx->pc = 0x4FCFF0u;
            goto label_4fcff0;
        }
    }
    ctx->pc = 0x4FCE60u;
label_4fce60:
    // 0x4fce60: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4fce60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4fce64:
    // 0x4fce64: 0x320f809  jalr        $t9
label_4fce68:
    if (ctx->pc == 0x4FCE68u) {
        ctx->pc = 0x4FCE6Cu;
        goto label_4fce6c;
    }
    ctx->pc = 0x4FCE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FCE6Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FCE6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FCE6Cu; }
            if (ctx->pc != 0x4FCE6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4FCE6Cu;
label_4fce6c:
    // 0x4fce6c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4fce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4fce70:
    // 0x4fce70: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x4fce70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4fce74:
    // 0x4fce74: 0x248a0020  addiu       $t2, $a0, 0x20
    ctx->pc = 0x4fce74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4fce78:
    // 0x4fce78: 0x24890044  addiu       $t1, $a0, 0x44
    ctx->pc = 0x4fce78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_4fce7c:
    // 0x4fce7c: 0x2487001c  addiu       $a3, $a0, 0x1C
    ctx->pc = 0x4fce7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_4fce80:
    // 0x4fce80: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x4fce80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_4fce84:
    // 0x4fce84: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x4fce84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_4fce88:
    // 0x4fce88: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x4fce88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fce8c:
    // 0x4fce8c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x4fce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fce90:
    // 0x4fce90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4fce90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4fce94:
    // 0x4fce94: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x4fce94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_4fce98:
    // 0x4fce98: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x4fce98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_4fce9c:
    // 0x4fce9c: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x4fce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fcea0:
    // 0x4fcea0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x4fcea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fcea4:
    // 0x4fcea4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4fcea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fcea8:
    // 0x4fcea8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4fceac:
    if (ctx->pc == 0x4FCEACu) {
        ctx->pc = 0x4FCEACu;
            // 0x4fceac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FCEB0u;
        goto label_4fceb0;
    }
    ctx->pc = 0x4FCEA8u;
    {
        const bool branch_taken_0x4fcea8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4FCEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCEA8u;
            // 0x4fceac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcea8) {
            ctx->pc = 0x4FCEB4u;
            goto label_4fceb4;
        }
    }
    ctx->pc = 0x4FCEB0u;
label_4fceb0:
    // 0x4fceb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4fceb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fceb4:
    // 0x4fceb4: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_4fceb8:
    if (ctx->pc == 0x4FCEB8u) {
        ctx->pc = 0x4FCEB8u;
            // 0x4fceb8: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4FCEBCu;
        goto label_4fcebc;
    }
    ctx->pc = 0x4FCEB4u;
    {
        const bool branch_taken_0x4fceb4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4fceb4) {
            ctx->pc = 0x4FCEB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCEB4u;
            // 0x4fceb8: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FCEC8u;
            goto label_4fcec8;
        }
    }
    ctx->pc = 0x4FCEBCu;
label_4fcebc:
    // 0x4fcebc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4fcebcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fcec0:
    // 0x4fcec0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fcec4:
    if (ctx->pc == 0x4FCEC4u) {
        ctx->pc = 0x4FCEC4u;
            // 0x4fcec4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FCEC8u;
        goto label_4fcec8;
    }
    ctx->pc = 0x4FCEC0u;
    {
        const bool branch_taken_0x4fcec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCEC0u;
            // 0x4fcec4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcec0) {
            ctx->pc = 0x4FCEE0u;
            goto label_4fcee0;
        }
    }
    ctx->pc = 0x4FCEC8u;
label_4fcec8:
    // 0x4fcec8: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x4fcec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4fcecc:
    // 0x4fcecc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4fceccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4fced0:
    // 0x4fced0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4fced0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fced4:
    // 0x4fced4: 0x0  nop
    ctx->pc = 0x4fced4u;
    // NOP
label_4fced8:
    // 0x4fced8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4fced8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4fcedc:
    // 0x4fcedc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4fcedcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4fcee0:
    // 0x4fcee0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x4fcee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fcee4:
    // 0x4fcee4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x4fcee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_4fcee8:
    // 0x4fcee8: 0x2548001c  addiu       $t0, $t2, 0x1C
    ctx->pc = 0x4fcee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 28));
label_4fceec:
    // 0x4fceec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4fceecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4fcef0:
    // 0x4fcef0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x4fcef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_4fcef4:
    // 0x4fcef4: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x4fcef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_4fcef8:
    // 0x4fcef8: 0xc540001c  lwc1        $f0, 0x1C($t2)
    ctx->pc = 0x4fcef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fcefc:
    // 0x4fcefc: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x4fcefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fcf00:
    // 0x4fcf00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4fcf00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4fcf04:
    // 0x4fcf04: 0xe540001c  swc1        $f0, 0x1C($t2)
    ctx->pc = 0x4fcf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
label_4fcf08:
    // 0x4fcf08: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x4fcf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_4fcf0c:
    // 0x4fcf0c: 0xc540001c  lwc1        $f0, 0x1C($t2)
    ctx->pc = 0x4fcf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fcf10:
    // 0x4fcf10: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x4fcf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fcf14:
    // 0x4fcf14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4fcf14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fcf18:
    // 0x4fcf18: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4fcf1c:
    if (ctx->pc == 0x4FCF1Cu) {
        ctx->pc = 0x4FCF1Cu;
            // 0x4fcf1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FCF20u;
        goto label_4fcf20;
    }
    ctx->pc = 0x4FCF18u;
    {
        const bool branch_taken_0x4fcf18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4FCF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCF18u;
            // 0x4fcf1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcf18) {
            ctx->pc = 0x4FCF24u;
            goto label_4fcf24;
        }
    }
    ctx->pc = 0x4FCF20u;
label_4fcf20:
    // 0x4fcf20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4fcf20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fcf24:
    // 0x4fcf24: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_4fcf28:
    if (ctx->pc == 0x4FCF28u) {
        ctx->pc = 0x4FCF28u;
            // 0x4fcf28: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4FCF2Cu;
        goto label_4fcf2c;
    }
    ctx->pc = 0x4FCF24u;
    {
        const bool branch_taken_0x4fcf24 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4fcf24) {
            ctx->pc = 0x4FCF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCF24u;
            // 0x4fcf28: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FCF38u;
            goto label_4fcf38;
        }
    }
    ctx->pc = 0x4FCF2Cu;
label_4fcf2c:
    // 0x4fcf2c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4fcf2cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fcf30:
    // 0x4fcf30: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fcf34:
    if (ctx->pc == 0x4FCF34u) {
        ctx->pc = 0x4FCF34u;
            // 0x4fcf34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FCF38u;
        goto label_4fcf38;
    }
    ctx->pc = 0x4FCF30u;
    {
        const bool branch_taken_0x4fcf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCF30u;
            // 0x4fcf34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcf30) {
            ctx->pc = 0x4FCF50u;
            goto label_4fcf50;
        }
    }
    ctx->pc = 0x4FCF38u;
label_4fcf38:
    // 0x4fcf38: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x4fcf38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4fcf3c:
    // 0x4fcf3c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4fcf3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4fcf40:
    // 0x4fcf40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4fcf40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fcf44:
    // 0x4fcf44: 0x0  nop
    ctx->pc = 0x4fcf44u;
    // NOP
label_4fcf48:
    // 0x4fcf48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4fcf48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4fcf4c:
    // 0x4fcf4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4fcf4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4fcf50:
    // 0x4fcf50: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x4fcf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fcf54:
    // 0x4fcf54: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x4fcf54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_4fcf58:
    // 0x4fcf58: 0x2527000c  addiu       $a3, $t1, 0xC
    ctx->pc = 0x4fcf58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_4fcf5c:
    // 0x4fcf5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4fcf5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4fcf60:
    // 0x4fcf60: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x4fcf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_4fcf64:
    // 0x4fcf64: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x4fcf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_4fcf68:
    // 0x4fcf68: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x4fcf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fcf6c:
    // 0x4fcf6c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x4fcf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fcf70:
    // 0x4fcf70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4fcf70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4fcf74:
    // 0x4fcf74: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x4fcf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_4fcf78:
    // 0x4fcf78: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x4fcf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_4fcf7c:
    // 0x4fcf7c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x4fcf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fcf80:
    // 0x4fcf80: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x4fcf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fcf84:
    // 0x4fcf84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4fcf84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fcf88:
    // 0x4fcf88: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4fcf8c:
    if (ctx->pc == 0x4FCF8Cu) {
        ctx->pc = 0x4FCF8Cu;
            // 0x4fcf8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FCF90u;
        goto label_4fcf90;
    }
    ctx->pc = 0x4FCF88u;
    {
        const bool branch_taken_0x4fcf88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4FCF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCF88u;
            // 0x4fcf8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcf88) {
            ctx->pc = 0x4FCF94u;
            goto label_4fcf94;
        }
    }
    ctx->pc = 0x4FCF90u;
label_4fcf90:
    // 0x4fcf90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4fcf90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fcf94:
    // 0x4fcf94: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_4fcf98:
    if (ctx->pc == 0x4FCF98u) {
        ctx->pc = 0x4FCF98u;
            // 0x4fcf98: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4FCF9Cu;
        goto label_4fcf9c;
    }
    ctx->pc = 0x4FCF94u;
    {
        const bool branch_taken_0x4fcf94 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4fcf94) {
            ctx->pc = 0x4FCF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCF94u;
            // 0x4fcf98: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FCFA8u;
            goto label_4fcfa8;
        }
    }
    ctx->pc = 0x4FCF9Cu;
label_4fcf9c:
    // 0x4fcf9c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4fcf9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fcfa0:
    // 0x4fcfa0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fcfa4:
    if (ctx->pc == 0x4FCFA4u) {
        ctx->pc = 0x4FCFA4u;
            // 0x4fcfa4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FCFA8u;
        goto label_4fcfa8;
    }
    ctx->pc = 0x4FCFA0u;
    {
        const bool branch_taken_0x4fcfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCFA0u;
            // 0x4fcfa4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcfa0) {
            ctx->pc = 0x4FCFC0u;
            goto label_4fcfc0;
        }
    }
    ctx->pc = 0x4FCFA8u;
label_4fcfa8:
    // 0x4fcfa8: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x4fcfa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4fcfac:
    // 0x4fcfac: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4fcfacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4fcfb0:
    // 0x4fcfb0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4fcfb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fcfb4:
    // 0x4fcfb4: 0x0  nop
    ctx->pc = 0x4fcfb4u;
    // NOP
label_4fcfb8:
    // 0x4fcfb8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4fcfb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4fcfbc:
    // 0x4fcfbc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4fcfbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4fcfc0:
    // 0x4fcfc0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x4fcfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fcfc4:
    // 0x4fcfc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4fcfc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4fcfc8:
    // 0x4fcfc8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_4fcfcc:
    if (ctx->pc == 0x4FCFCCu) {
        ctx->pc = 0x4FCFCCu;
            // 0x4fcfcc: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x4FCFD0u;
        goto label_4fcfd0;
    }
    ctx->pc = 0x4FCFC8u;
    {
        const bool branch_taken_0x4fcfc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCFC8u;
            // 0x4fcfcc: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcfc8) {
            ctx->pc = 0x4FCFF0u;
            goto label_4fcff0;
        }
    }
    ctx->pc = 0x4FCFD0u;
label_4fcfd0:
    // 0x4fcfd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4fcfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fcfd4:
    // 0x4fcfd4: 0xc145fb0  jal         func_517EC0
label_4fcfd8:
    if (ctx->pc == 0x4FCFD8u) {
        ctx->pc = 0x4FCFD8u;
            // 0x4fcfd8: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->pc = 0x4FCFDCu;
        goto label_4fcfdc;
    }
    ctx->pc = 0x4FCFD4u;
    SET_GPR_U32(ctx, 31, 0x4FCFDCu);
    ctx->pc = 0x4FCFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCFD4u;
            // 0x4fcfd8: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517EC0u;
    if (runtime->hasFunction(0x517EC0u)) {
        auto targetFn = runtime->lookupFunction(0x517EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCFDCu; }
        if (ctx->pc != 0x4FCFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517EC0_0x517ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FCFDCu; }
        if (ctx->pc != 0x4FCFDCu) { return; }
    }
    ctx->pc = 0x4FCFDCu;
label_4fcfdc:
    // 0x4fcfdc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4fcfdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4fcfe0:
    // 0x4fcfe0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4fcfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4fcfe4:
    // 0x4fcfe4: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x4fcfe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4fcfe8:
    // 0x4fcfe8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4fcfec:
    if (ctx->pc == 0x4FCFECu) {
        ctx->pc = 0x4FCFF0u;
        goto label_4fcff0;
    }
    ctx->pc = 0x4FCFE8u;
    {
        const bool branch_taken_0x4fcfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fcfe8) {
            ctx->pc = 0x4FCFD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fcfd4;
        }
    }
    ctx->pc = 0x4FCFF0u;
label_4fcff0:
    // 0x4fcff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4fcff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4fcff4:
    // 0x4fcff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fcff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fcff8:
    // 0x4fcff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fcff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fcffc:
    // 0x4fcffc: 0x3e00008  jr          $ra
label_4fd000:
    if (ctx->pc == 0x4FD000u) {
        ctx->pc = 0x4FD000u;
            // 0x4fd000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FD004u;
        goto label_4fd004;
    }
    ctx->pc = 0x4FCFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FCFFCu;
            // 0x4fd000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FD004u;
label_4fd004:
    // 0x4fd004: 0x0  nop
    ctx->pc = 0x4fd004u;
    // NOP
label_4fd008:
    // 0x4fd008: 0x0  nop
    ctx->pc = 0x4fd008u;
    // NOP
label_4fd00c:
    // 0x4fd00c: 0x0  nop
    ctx->pc = 0x4fd00cu;
    // NOP
label_4fd010:
    // 0x4fd010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4fd010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4fd014:
    // 0x4fd014: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4fd014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4fd018:
    // 0x4fd018: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4fd018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4fd01c:
    // 0x4fd01c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fd01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4fd020:
    // 0x4fd020: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fd020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fd024:
    // 0x4fd024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fd024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fd028:
    // 0x4fd028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fd028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fd02c:
    // 0x4fd02c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4fd02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4fd030:
    // 0x4fd030: 0x10600107  beqz        $v1, . + 4 + (0x107 << 2)
label_4fd034:
    if (ctx->pc == 0x4FD034u) {
        ctx->pc = 0x4FD034u;
            // 0x4fd034: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD038u;
        goto label_4fd038;
    }
    ctx->pc = 0x4FD030u;
    {
        const bool branch_taken_0x4fd030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD030u;
            // 0x4fd034: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd030) {
            ctx->pc = 0x4FD450u;
            goto label_4fd450;
        }
    }
    ctx->pc = 0x4FD038u;
label_4fd038:
    // 0x4fd038: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4fd038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4fd03c:
    // 0x4fd03c: 0x24910084  addiu       $s1, $a0, 0x84
    ctx->pc = 0x4fd03cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_4fd040:
    // 0x4fd040: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x4fd040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4fd044:
    // 0x4fd044: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x4fd044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_4fd048:
    // 0x4fd048: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fd048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fd04c:
    // 0x4fd04c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4fd04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4fd050:
    // 0x4fd050: 0x320f809  jalr        $t9
label_4fd054:
    if (ctx->pc == 0x4FD054u) {
        ctx->pc = 0x4FD054u;
            // 0x4fd054: 0x26320044  addiu       $s2, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->pc = 0x4FD058u;
        goto label_4fd058;
    }
    ctx->pc = 0x4FD050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FD058u);
        ctx->pc = 0x4FD054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD050u;
            // 0x4fd054: 0x26320044  addiu       $s2, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FD058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FD058u; }
            if (ctx->pc != 0x4FD058u) { return; }
        }
        }
    }
    ctx->pc = 0x4FD058u;
label_4fd058:
    // 0x4fd058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4fd058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fd05c:
    // 0x4fd05c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fd05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fd060:
    // 0x4fd060: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x4fd060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd064:
    // 0x4fd064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fd064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fd068:
    // 0x4fd068: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4fd068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_4fd06c:
    // 0x4fd06c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x4fd06cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_4fd070:
    // 0x4fd070: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x4fd070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_4fd074:
    // 0x4fd074: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4fd074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4fd078:
    // 0x4fd078: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x4fd078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_4fd07c:
    // 0x4fd07c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x4fd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd080:
    // 0x4fd080: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd084:
    // 0x4fd084: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fd084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fd088:
    // 0x4fd088: 0xc074f30  jal         func_1D3CC0
label_4fd08c:
    if (ctx->pc == 0x4FD08Cu) {
        ctx->pc = 0x4FD08Cu;
            // 0x4fd08c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD090u;
        goto label_4fd090;
    }
    ctx->pc = 0x4FD088u;
    SET_GPR_U32(ctx, 31, 0x4FD090u);
    ctx->pc = 0x4FD08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD088u;
            // 0x4fd08c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD090u; }
        if (ctx->pc != 0x4FD090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD090u; }
        if (ctx->pc != 0x4FD090u) { return; }
    }
    ctx->pc = 0x4FD090u;
label_4fd090:
    // 0x4fd090: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd094:
    // 0x4fd094: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4fd094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4fd098:
    // 0x4fd098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fd098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fd09c:
    // 0x4fd09c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4fd09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd0a0:
    // 0x4fd0a0: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x4fd0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_4fd0a4:
    // 0x4fd0a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4fd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4fd0a8:
    // 0x4fd0a8: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd0ac:
    // 0x4fd0ac: 0xc0751b8  jal         func_1D46E0
label_4fd0b0:
    if (ctx->pc == 0x4FD0B0u) {
        ctx->pc = 0x4FD0B0u;
            // 0x4fd0b0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD0B4u;
        goto label_4fd0b4;
    }
    ctx->pc = 0x4FD0ACu;
    SET_GPR_U32(ctx, 31, 0x4FD0B4u);
    ctx->pc = 0x4FD0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD0ACu;
            // 0x4fd0b0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD0B4u; }
        if (ctx->pc != 0x4FD0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD0B4u; }
        if (ctx->pc != 0x4FD0B4u) { return; }
    }
    ctx->pc = 0x4FD0B4u;
label_4fd0b4:
    // 0x4fd0b4: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd0b8:
    // 0x4fd0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fd0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fd0bc:
    // 0x4fd0bc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x4fd0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4fd0c0:
    // 0x4fd0c0: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x4fd0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_4fd0c4:
    // 0x4fd0c4: 0x26270018  addiu       $a3, $s1, 0x18
    ctx->pc = 0x4fd0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_4fd0c8:
    // 0x4fd0c8: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4fd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd0cc:
    // 0x4fd0cc: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x4fd0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_4fd0d0:
    // 0x4fd0d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4fd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4fd0d4:
    // 0x4fd0d4: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd0d8:
    // 0x4fd0d8: 0xc075188  jal         func_1D4620
label_4fd0dc:
    if (ctx->pc == 0x4FD0DCu) {
        ctx->pc = 0x4FD0DCu;
            // 0x4fd0dc: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD0E0u;
        goto label_4fd0e0;
    }
    ctx->pc = 0x4FD0D8u;
    SET_GPR_U32(ctx, 31, 0x4FD0E0u);
    ctx->pc = 0x4FD0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD0D8u;
            // 0x4fd0dc: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD0E0u; }
        if (ctx->pc != 0x4FD0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD0E0u; }
        if (ctx->pc != 0x4FD0E0u) { return; }
    }
    ctx->pc = 0x4FD0E0u;
label_4fd0e0:
    // 0x4fd0e0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd0e4:
    // 0x4fd0e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd0e8:
    // 0x4fd0e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4fd0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd0ec:
    // 0x4fd0ec: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x4fd0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_4fd0f0:
    // 0x4fd0f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4fd0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4fd0f4:
    // 0x4fd0f4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4fd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4fd0f8:
    // 0x4fd0f8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4fd0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4fd0fc:
    // 0x4fd0fc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd0fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd100:
    // 0x4fd100: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd104:
    if (ctx->pc == 0x4FD104u) {
        ctx->pc = 0x4FD104u;
            // 0x4fd104: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4FD108u;
        goto label_4fd108;
    }
    ctx->pc = 0x4FD100u;
    {
        const bool branch_taken_0x4fd100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd100) {
            ctx->pc = 0x4FD104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD100u;
            // 0x4fd104: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD114u;
            goto label_4fd114;
        }
    }
    ctx->pc = 0x4FD108u;
label_4fd108:
    // 0x4fd108: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd10c:
    // 0x4fd10c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4fd10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4fd110:
    // 0x4fd110: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4fd110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4fd114:
    // 0x4fd114: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd118:
    // 0x4fd118: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4fd118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4fd11c:
    // 0x4fd11c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd120:
    // 0x4fd120: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd120u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd124:
    // 0x4fd124: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd128:
    if (ctx->pc == 0x4FD128u) {
        ctx->pc = 0x4FD128u;
            // 0x4fd128: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4FD12Cu;
        goto label_4fd12c;
    }
    ctx->pc = 0x4FD124u;
    {
        const bool branch_taken_0x4fd124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd124) {
            ctx->pc = 0x4FD128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD124u;
            // 0x4fd128: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD138u;
            goto label_4fd138;
        }
    }
    ctx->pc = 0x4FD12Cu;
label_4fd12c:
    // 0x4fd12c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd130:
    // 0x4fd130: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4fd130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4fd134:
    // 0x4fd134: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4fd134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4fd138:
    // 0x4fd138: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd13c:
    // 0x4fd13c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4fd13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4fd140:
    // 0x4fd140: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd144:
    // 0x4fd144: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd148:
    // 0x4fd148: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd14c:
    if (ctx->pc == 0x4FD14Cu) {
        ctx->pc = 0x4FD14Cu;
            // 0x4fd14c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4FD150u;
        goto label_4fd150;
    }
    ctx->pc = 0x4FD148u;
    {
        const bool branch_taken_0x4fd148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd148) {
            ctx->pc = 0x4FD14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD148u;
            // 0x4fd14c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD15Cu;
            goto label_4fd15c;
        }
    }
    ctx->pc = 0x4FD150u;
label_4fd150:
    // 0x4fd150: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd154:
    // 0x4fd154: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4fd154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4fd158:
    // 0x4fd158: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4fd158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4fd15c:
    // 0x4fd15c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd160:
    // 0x4fd160: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4fd160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4fd164:
    // 0x4fd164: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd168:
    // 0x4fd168: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4fd168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4fd16c:
    // 0x4fd16c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd16cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd170:
    // 0x4fd170: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd174:
    if (ctx->pc == 0x4FD174u) {
        ctx->pc = 0x4FD174u;
            // 0x4fd174: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4FD178u;
        goto label_4fd178;
    }
    ctx->pc = 0x4FD170u;
    {
        const bool branch_taken_0x4fd170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd170) {
            ctx->pc = 0x4FD174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD170u;
            // 0x4fd174: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD184u;
            goto label_4fd184;
        }
    }
    ctx->pc = 0x4FD178u;
label_4fd178:
    // 0x4fd178: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd17c:
    // 0x4fd17c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4fd17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4fd180:
    // 0x4fd180: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4fd180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4fd184:
    // 0x4fd184: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd188:
    // 0x4fd188: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4fd188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4fd18c:
    // 0x4fd18c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd190:
    // 0x4fd190: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4fd190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4fd194:
    // 0x4fd194: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd194u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd198:
    // 0x4fd198: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd19c:
    if (ctx->pc == 0x4FD19Cu) {
        ctx->pc = 0x4FD19Cu;
            // 0x4fd19c: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->pc = 0x4FD1A0u;
        goto label_4fd1a0;
    }
    ctx->pc = 0x4FD198u;
    {
        const bool branch_taken_0x4fd198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd198) {
            ctx->pc = 0x4FD19Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD198u;
            // 0x4fd19c: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD1ACu;
            goto label_4fd1ac;
        }
    }
    ctx->pc = 0x4FD1A0u;
label_4fd1a0:
    // 0x4fd1a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd1a4:
    // 0x4fd1a4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4fd1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4fd1a8:
    // 0x4fd1a8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x4fd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd1ac:
    // 0x4fd1ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fd1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fd1b0:
    // 0x4fd1b0: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd1b4:
    // 0x4fd1b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fd1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fd1b8:
    // 0x4fd1b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fd1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fd1bc:
    // 0x4fd1bc: 0xc074f30  jal         func_1D3CC0
label_4fd1c0:
    if (ctx->pc == 0x4FD1C0u) {
        ctx->pc = 0x4FD1C0u;
            // 0x4fd1c0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD1C4u;
        goto label_4fd1c4;
    }
    ctx->pc = 0x4FD1BCu;
    SET_GPR_U32(ctx, 31, 0x4FD1C4u);
    ctx->pc = 0x4FD1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD1BCu;
            // 0x4fd1c0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD1C4u; }
        if (ctx->pc != 0x4FD1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD1C4u; }
        if (ctx->pc != 0x4FD1C4u) { return; }
    }
    ctx->pc = 0x4FD1C4u;
label_4fd1c4:
    // 0x4fd1c4: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd1c8:
    // 0x4fd1c8: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x4fd1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4fd1cc:
    // 0x4fd1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fd1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fd1d0:
    // 0x4fd1d0: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4fd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd1d4:
    // 0x4fd1d4: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x4fd1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_4fd1d8:
    // 0x4fd1d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4fd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4fd1dc:
    // 0x4fd1dc: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd1e0:
    // 0x4fd1e0: 0xc0751b8  jal         func_1D46E0
label_4fd1e4:
    if (ctx->pc == 0x4FD1E4u) {
        ctx->pc = 0x4FD1E4u;
            // 0x4fd1e4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD1E8u;
        goto label_4fd1e8;
    }
    ctx->pc = 0x4FD1E0u;
    SET_GPR_U32(ctx, 31, 0x4FD1E8u);
    ctx->pc = 0x4FD1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD1E0u;
            // 0x4fd1e4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD1E8u; }
        if (ctx->pc != 0x4FD1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD1E8u; }
        if (ctx->pc != 0x4FD1E8u) { return; }
    }
    ctx->pc = 0x4FD1E8u;
label_4fd1e8:
    // 0x4fd1e8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd1ec:
    // 0x4fd1ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fd1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fd1f0:
    // 0x4fd1f0: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x4fd1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4fd1f4:
    // 0x4fd1f4: 0x26660014  addiu       $a2, $s3, 0x14
    ctx->pc = 0x4fd1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_4fd1f8:
    // 0x4fd1f8: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x4fd1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_4fd1fc:
    // 0x4fd1fc: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4fd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd200:
    // 0x4fd200: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x4fd200u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_4fd204:
    // 0x4fd204: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4fd204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4fd208:
    // 0x4fd208: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd20c:
    // 0x4fd20c: 0xc075188  jal         func_1D4620
label_4fd210:
    if (ctx->pc == 0x4FD210u) {
        ctx->pc = 0x4FD210u;
            // 0x4fd210: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD214u;
        goto label_4fd214;
    }
    ctx->pc = 0x4FD20Cu;
    SET_GPR_U32(ctx, 31, 0x4FD214u);
    ctx->pc = 0x4FD210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD20Cu;
            // 0x4fd210: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD214u; }
        if (ctx->pc != 0x4FD214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD214u; }
        if (ctx->pc != 0x4FD214u) { return; }
    }
    ctx->pc = 0x4FD214u;
label_4fd214:
    // 0x4fd214: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd218:
    // 0x4fd218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd21c:
    // 0x4fd21c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4fd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd220:
    // 0x4fd220: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x4fd220u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_4fd224:
    // 0x4fd224: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4fd224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fd228:
    // 0x4fd228: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4fd228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4fd22c:
    // 0x4fd22c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4fd22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4fd230:
    // 0x4fd230: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd234:
    // 0x4fd234: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd238:
    if (ctx->pc == 0x4FD238u) {
        ctx->pc = 0x4FD238u;
            // 0x4fd238: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4FD23Cu;
        goto label_4fd23c;
    }
    ctx->pc = 0x4FD234u;
    {
        const bool branch_taken_0x4fd234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd234) {
            ctx->pc = 0x4FD238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD234u;
            // 0x4fd238: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD248u;
            goto label_4fd248;
        }
    }
    ctx->pc = 0x4FD23Cu;
label_4fd23c:
    // 0x4fd23c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd240:
    // 0x4fd240: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4fd240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4fd244:
    // 0x4fd244: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4fd244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fd248:
    // 0x4fd248: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd24c:
    // 0x4fd24c: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4fd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4fd250:
    // 0x4fd250: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd254:
    // 0x4fd254: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd258:
    // 0x4fd258: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd25c:
    if (ctx->pc == 0x4FD25Cu) {
        ctx->pc = 0x4FD25Cu;
            // 0x4fd25c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4FD260u;
        goto label_4fd260;
    }
    ctx->pc = 0x4FD258u;
    {
        const bool branch_taken_0x4fd258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd258) {
            ctx->pc = 0x4FD25Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD258u;
            // 0x4fd25c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD26Cu;
            goto label_4fd26c;
        }
    }
    ctx->pc = 0x4FD260u;
label_4fd260:
    // 0x4fd260: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd264:
    // 0x4fd264: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4fd264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4fd268:
    // 0x4fd268: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4fd268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fd26c:
    // 0x4fd26c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd270:
    // 0x4fd270: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4fd270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4fd274:
    // 0x4fd274: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd278:
    // 0x4fd278: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd278u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd27c:
    // 0x4fd27c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd280:
    if (ctx->pc == 0x4FD280u) {
        ctx->pc = 0x4FD280u;
            // 0x4fd280: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4FD284u;
        goto label_4fd284;
    }
    ctx->pc = 0x4FD27Cu;
    {
        const bool branch_taken_0x4fd27c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd27c) {
            ctx->pc = 0x4FD280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD27Cu;
            // 0x4fd280: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD290u;
            goto label_4fd290;
        }
    }
    ctx->pc = 0x4FD284u;
label_4fd284:
    // 0x4fd284: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd288:
    // 0x4fd288: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4fd288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4fd28c:
    // 0x4fd28c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4fd28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fd290:
    // 0x4fd290: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd294:
    // 0x4fd294: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4fd294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4fd298:
    // 0x4fd298: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd29c:
    // 0x4fd29c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4fd29cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4fd2a0:
    // 0x4fd2a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd2a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd2a4:
    // 0x4fd2a4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd2a8:
    if (ctx->pc == 0x4FD2A8u) {
        ctx->pc = 0x4FD2A8u;
            // 0x4fd2a8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4FD2ACu;
        goto label_4fd2ac;
    }
    ctx->pc = 0x4FD2A4u;
    {
        const bool branch_taken_0x4fd2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd2a4) {
            ctx->pc = 0x4FD2A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD2A4u;
            // 0x4fd2a8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD2B8u;
            goto label_4fd2b8;
        }
    }
    ctx->pc = 0x4FD2ACu;
label_4fd2ac:
    // 0x4fd2ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd2b0:
    // 0x4fd2b0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4fd2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4fd2b4:
    // 0x4fd2b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4fd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fd2b8:
    // 0x4fd2b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd2bc:
    // 0x4fd2bc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4fd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4fd2c0:
    // 0x4fd2c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd2c4:
    // 0x4fd2c4: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4fd2c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4fd2c8:
    // 0x4fd2c8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd2c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd2cc:
    // 0x4fd2cc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd2d0:
    if (ctx->pc == 0x4FD2D0u) {
        ctx->pc = 0x4FD2D0u;
            // 0x4fd2d0: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->pc = 0x4FD2D4u;
        goto label_4fd2d4;
    }
    ctx->pc = 0x4FD2CCu;
    {
        const bool branch_taken_0x4fd2cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd2cc) {
            ctx->pc = 0x4FD2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD2CCu;
            // 0x4fd2d0: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD2E0u;
            goto label_4fd2e0;
        }
    }
    ctx->pc = 0x4FD2D4u;
label_4fd2d4:
    // 0x4fd2d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd2d8:
    // 0x4fd2d8: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4fd2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4fd2dc:
    // 0x4fd2dc: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x4fd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd2e0:
    // 0x4fd2e0: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x4fd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4fd2e4:
    // 0x4fd2e4: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd2e8:
    // 0x4fd2e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fd2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fd2ec:
    // 0x4fd2ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fd2f0:
    // 0x4fd2f0: 0xc0751b8  jal         func_1D46E0
label_4fd2f4:
    if (ctx->pc == 0x4FD2F4u) {
        ctx->pc = 0x4FD2F4u;
            // 0x4fd2f4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD2F8u;
        goto label_4fd2f8;
    }
    ctx->pc = 0x4FD2F0u;
    SET_GPR_U32(ctx, 31, 0x4FD2F8u);
    ctx->pc = 0x4FD2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD2F0u;
            // 0x4fd2f4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD2F8u; }
        if (ctx->pc != 0x4FD2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD2F8u; }
        if (ctx->pc != 0x4FD2F8u) { return; }
    }
    ctx->pc = 0x4FD2F8u;
label_4fd2f8:
    // 0x4fd2f8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd2fc:
    // 0x4fd2fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4fd2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4fd300:
    // 0x4fd300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fd300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fd304:
    // 0x4fd304: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4fd304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd308:
    // 0x4fd308: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x4fd308u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_4fd30c:
    // 0x4fd30c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4fd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4fd310:
    // 0x4fd310: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd314:
    // 0x4fd314: 0xc074f30  jal         func_1D3CC0
label_4fd318:
    if (ctx->pc == 0x4FD318u) {
        ctx->pc = 0x4FD318u;
            // 0x4fd318: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD31Cu;
        goto label_4fd31c;
    }
    ctx->pc = 0x4FD314u;
    SET_GPR_U32(ctx, 31, 0x4FD31Cu);
    ctx->pc = 0x4FD318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD314u;
            // 0x4fd318: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD31Cu; }
        if (ctx->pc != 0x4FD31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD31Cu; }
        if (ctx->pc != 0x4FD31Cu) { return; }
    }
    ctx->pc = 0x4FD31Cu;
label_4fd31c:
    // 0x4fd31c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd320:
    // 0x4fd320: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4fd320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4fd324:
    // 0x4fd324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fd324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fd328:
    // 0x4fd328: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4fd328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd32c:
    // 0x4fd32c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x4fd32cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_4fd330:
    // 0x4fd330: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4fd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4fd334:
    // 0x4fd334: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd338:
    // 0x4fd338: 0xc0751b8  jal         func_1D46E0
label_4fd33c:
    if (ctx->pc == 0x4FD33Cu) {
        ctx->pc = 0x4FD33Cu;
            // 0x4fd33c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD340u;
        goto label_4fd340;
    }
    ctx->pc = 0x4FD338u;
    SET_GPR_U32(ctx, 31, 0x4FD340u);
    ctx->pc = 0x4FD33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD338u;
            // 0x4fd33c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD340u; }
        if (ctx->pc != 0x4FD340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD340u; }
        if (ctx->pc != 0x4FD340u) { return; }
    }
    ctx->pc = 0x4FD340u;
label_4fd340:
    // 0x4fd340: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd344:
    // 0x4fd344: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x4fd344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_4fd348:
    // 0x4fd348: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4fd348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd34c:
    // 0x4fd34c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x4fd34cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_4fd350:
    // 0x4fd350: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4fd350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4fd354:
    // 0x4fd354: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd358:
    // 0x4fd358: 0xc074ea0  jal         func_1D3A80
label_4fd35c:
    if (ctx->pc == 0x4FD35Cu) {
        ctx->pc = 0x4FD35Cu;
            // 0x4fd35c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD360u;
        goto label_4fd360;
    }
    ctx->pc = 0x4FD358u;
    SET_GPR_U32(ctx, 31, 0x4FD360u);
    ctx->pc = 0x4FD35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD358u;
            // 0x4fd35c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD360u; }
        if (ctx->pc != 0x4FD360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD360u; }
        if (ctx->pc != 0x4FD360u) { return; }
    }
    ctx->pc = 0x4FD360u;
label_4fd360:
    // 0x4fd360: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd364:
    // 0x4fd364: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd368:
    // 0x4fd368: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4fd368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd36c:
    // 0x4fd36c: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x4fd36cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_4fd370:
    // 0x4fd370: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4fd370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fd374:
    // 0x4fd374: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4fd374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4fd378:
    // 0x4fd378: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4fd378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4fd37c:
    // 0x4fd37c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd37cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd380:
    // 0x4fd380: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd384:
    if (ctx->pc == 0x4FD384u) {
        ctx->pc = 0x4FD384u;
            // 0x4fd384: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4FD388u;
        goto label_4fd388;
    }
    ctx->pc = 0x4FD380u;
    {
        const bool branch_taken_0x4fd380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd380) {
            ctx->pc = 0x4FD384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD380u;
            // 0x4fd384: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD394u;
            goto label_4fd394;
        }
    }
    ctx->pc = 0x4FD388u;
label_4fd388:
    // 0x4fd388: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd38c:
    // 0x4fd38c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4fd38cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4fd390:
    // 0x4fd390: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4fd390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fd394:
    // 0x4fd394: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd398:
    // 0x4fd398: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4fd398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4fd39c:
    // 0x4fd39c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd3a0:
    // 0x4fd3a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd3a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd3a4:
    // 0x4fd3a4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd3a8:
    if (ctx->pc == 0x4FD3A8u) {
        ctx->pc = 0x4FD3A8u;
            // 0x4fd3a8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4FD3ACu;
        goto label_4fd3ac;
    }
    ctx->pc = 0x4FD3A4u;
    {
        const bool branch_taken_0x4fd3a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd3a4) {
            ctx->pc = 0x4FD3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD3A4u;
            // 0x4fd3a8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD3B8u;
            goto label_4fd3b8;
        }
    }
    ctx->pc = 0x4FD3ACu;
label_4fd3ac:
    // 0x4fd3ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd3b0:
    // 0x4fd3b0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4fd3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4fd3b4:
    // 0x4fd3b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4fd3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fd3b8:
    // 0x4fd3b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd3bc:
    // 0x4fd3bc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4fd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4fd3c0:
    // 0x4fd3c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd3c4:
    // 0x4fd3c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd3c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd3c8:
    // 0x4fd3c8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd3cc:
    if (ctx->pc == 0x4FD3CCu) {
        ctx->pc = 0x4FD3CCu;
            // 0x4fd3cc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4FD3D0u;
        goto label_4fd3d0;
    }
    ctx->pc = 0x4FD3C8u;
    {
        const bool branch_taken_0x4fd3c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd3c8) {
            ctx->pc = 0x4FD3CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD3C8u;
            // 0x4fd3cc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD3DCu;
            goto label_4fd3dc;
        }
    }
    ctx->pc = 0x4FD3D0u;
label_4fd3d0:
    // 0x4fd3d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd3d4:
    // 0x4fd3d4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4fd3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4fd3d8:
    // 0x4fd3d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4fd3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fd3dc:
    // 0x4fd3dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd3e0:
    // 0x4fd3e0: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4fd3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4fd3e4:
    // 0x4fd3e4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd3e8:
    // 0x4fd3e8: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4fd3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4fd3ec:
    // 0x4fd3ec: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd3ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd3f0:
    // 0x4fd3f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd3f4:
    if (ctx->pc == 0x4FD3F4u) {
        ctx->pc = 0x4FD3F4u;
            // 0x4fd3f4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4FD3F8u;
        goto label_4fd3f8;
    }
    ctx->pc = 0x4FD3F0u;
    {
        const bool branch_taken_0x4fd3f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd3f0) {
            ctx->pc = 0x4FD3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD3F0u;
            // 0x4fd3f4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD404u;
            goto label_4fd404;
        }
    }
    ctx->pc = 0x4FD3F8u;
label_4fd3f8:
    // 0x4fd3f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd3fc:
    // 0x4fd3fc: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4fd3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4fd400:
    // 0x4fd400: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4fd400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fd404:
    // 0x4fd404: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd408:
    // 0x4fd408: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4fd408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4fd40c:
    // 0x4fd40c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4fd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4fd410:
    // 0x4fd410: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4fd410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4fd414:
    // 0x4fd414: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4fd414u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4fd418:
    // 0x4fd418: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4fd41c:
    if (ctx->pc == 0x4FD41Cu) {
        ctx->pc = 0x4FD41Cu;
            // 0x4fd41c: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->pc = 0x4FD420u;
        goto label_4fd420;
    }
    ctx->pc = 0x4FD418u;
    {
        const bool branch_taken_0x4fd418 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd418) {
            ctx->pc = 0x4FD41Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD418u;
            // 0x4fd41c: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD42Cu;
            goto label_4fd42c;
        }
    }
    ctx->pc = 0x4FD420u;
label_4fd420:
    // 0x4fd420: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd424:
    // 0x4fd424: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4fd424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4fd428:
    // 0x4fd428: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x4fd428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd42c:
    // 0x4fd42c: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x4fd42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_4fd430:
    // 0x4fd430: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4fd430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4fd434:
    // 0x4fd434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fd434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fd438:
    // 0x4fd438: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fd438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fd43c:
    // 0x4fd43c: 0xc0751b8  jal         func_1D46E0
label_4fd440:
    if (ctx->pc == 0x4FD440u) {
        ctx->pc = 0x4FD440u;
            // 0x4fd440: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4FD444u;
        goto label_4fd444;
    }
    ctx->pc = 0x4FD43Cu;
    SET_GPR_U32(ctx, 31, 0x4FD444u);
    ctx->pc = 0x4FD440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD43Cu;
            // 0x4fd440: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD444u; }
        if (ctx->pc != 0x4FD444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD444u; }
        if (ctx->pc != 0x4FD444u) { return; }
    }
    ctx->pc = 0x4FD444u;
label_4fd444:
    // 0x4fd444: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4fd444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4fd448:
    // 0x4fd448: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4fd448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4fd44c:
    // 0x4fd44c: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x4fd44cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_4fd450:
    // 0x4fd450: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4fd450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4fd454:
    // 0x4fd454: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4fd454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4fd458:
    // 0x4fd458: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fd458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fd45c:
    // 0x4fd45c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fd45cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fd460:
    // 0x4fd460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fd460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fd464:
    // 0x4fd464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fd464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fd468:
    // 0x4fd468: 0x3e00008  jr          $ra
label_4fd46c:
    if (ctx->pc == 0x4FD46Cu) {
        ctx->pc = 0x4FD46Cu;
            // 0x4fd46c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4FD470u;
        goto label_4fd470;
    }
    ctx->pc = 0x4FD468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD468u;
            // 0x4fd46c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FD470u;
label_4fd470:
    // 0x4fd470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4fd470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4fd474:
    // 0x4fd474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4fd474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4fd478:
    // 0x4fd478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fd478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fd47c:
    // 0x4fd47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fd47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fd480:
    // 0x4fd480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4fd480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fd484:
    // 0x4fd484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4fd484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fd488:
    // 0x4fd488: 0xc14610c  jal         func_518430
label_4fd48c:
    if (ctx->pc == 0x4FD48Cu) {
        ctx->pc = 0x4FD48Cu;
            // 0x4fd48c: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->pc = 0x4FD490u;
        goto label_4fd490;
    }
    ctx->pc = 0x4FD488u;
    SET_GPR_U32(ctx, 31, 0x4FD490u);
    ctx->pc = 0x4FD48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD488u;
            // 0x4fd48c: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518430u;
    if (runtime->hasFunction(0x518430u)) {
        auto targetFn = runtime->lookupFunction(0x518430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD490u; }
        if (ctx->pc != 0x4FD490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00518430_0x518430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD490u; }
        if (ctx->pc != 0x4FD490u) { return; }
    }
    ctx->pc = 0x4FD490u;
label_4fd490:
    // 0x4fd490: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4fd490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4fd494:
    // 0x4fd494: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4fd494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4fd498:
    // 0x4fd498: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x4fd498u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_4fd49c:
    // 0x4fd49c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4fd4a0:
    if (ctx->pc == 0x4FD4A0u) {
        ctx->pc = 0x4FD4A4u;
        goto label_4fd4a4;
    }
    ctx->pc = 0x4FD49Cu;
    {
        const bool branch_taken_0x4fd49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fd49c) {
            ctx->pc = 0x4FD488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fd488;
        }
    }
    ctx->pc = 0x4FD4A4u;
label_4fd4a4:
    // 0x4fd4a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4fd4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4fd4a8:
    // 0x4fd4a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fd4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fd4ac:
    // 0x4fd4ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fd4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fd4b0:
    // 0x4fd4b0: 0x3e00008  jr          $ra
label_4fd4b4:
    if (ctx->pc == 0x4FD4B4u) {
        ctx->pc = 0x4FD4B4u;
            // 0x4fd4b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FD4B8u;
        goto label_4fd4b8;
    }
    ctx->pc = 0x4FD4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD4B0u;
            // 0x4fd4b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FD4B8u;
label_4fd4b8:
    // 0x4fd4b8: 0x0  nop
    ctx->pc = 0x4fd4b8u;
    // NOP
label_4fd4bc:
    // 0x4fd4bc: 0x0  nop
    ctx->pc = 0x4fd4bcu;
    // NOP
}
