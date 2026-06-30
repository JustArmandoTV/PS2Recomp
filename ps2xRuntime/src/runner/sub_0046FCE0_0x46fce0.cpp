#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046FCE0
// Address: 0x46fce0 - 0x470980
void sub_0046FCE0_0x46fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046FCE0_0x46fce0");
#endif

    switch (ctx->pc) {
        case 0x46fce0u: goto label_46fce0;
        case 0x46fce4u: goto label_46fce4;
        case 0x46fce8u: goto label_46fce8;
        case 0x46fcecu: goto label_46fcec;
        case 0x46fcf0u: goto label_46fcf0;
        case 0x46fcf4u: goto label_46fcf4;
        case 0x46fcf8u: goto label_46fcf8;
        case 0x46fcfcu: goto label_46fcfc;
        case 0x46fd00u: goto label_46fd00;
        case 0x46fd04u: goto label_46fd04;
        case 0x46fd08u: goto label_46fd08;
        case 0x46fd0cu: goto label_46fd0c;
        case 0x46fd10u: goto label_46fd10;
        case 0x46fd14u: goto label_46fd14;
        case 0x46fd18u: goto label_46fd18;
        case 0x46fd1cu: goto label_46fd1c;
        case 0x46fd20u: goto label_46fd20;
        case 0x46fd24u: goto label_46fd24;
        case 0x46fd28u: goto label_46fd28;
        case 0x46fd2cu: goto label_46fd2c;
        case 0x46fd30u: goto label_46fd30;
        case 0x46fd34u: goto label_46fd34;
        case 0x46fd38u: goto label_46fd38;
        case 0x46fd3cu: goto label_46fd3c;
        case 0x46fd40u: goto label_46fd40;
        case 0x46fd44u: goto label_46fd44;
        case 0x46fd48u: goto label_46fd48;
        case 0x46fd4cu: goto label_46fd4c;
        case 0x46fd50u: goto label_46fd50;
        case 0x46fd54u: goto label_46fd54;
        case 0x46fd58u: goto label_46fd58;
        case 0x46fd5cu: goto label_46fd5c;
        case 0x46fd60u: goto label_46fd60;
        case 0x46fd64u: goto label_46fd64;
        case 0x46fd68u: goto label_46fd68;
        case 0x46fd6cu: goto label_46fd6c;
        case 0x46fd70u: goto label_46fd70;
        case 0x46fd74u: goto label_46fd74;
        case 0x46fd78u: goto label_46fd78;
        case 0x46fd7cu: goto label_46fd7c;
        case 0x46fd80u: goto label_46fd80;
        case 0x46fd84u: goto label_46fd84;
        case 0x46fd88u: goto label_46fd88;
        case 0x46fd8cu: goto label_46fd8c;
        case 0x46fd90u: goto label_46fd90;
        case 0x46fd94u: goto label_46fd94;
        case 0x46fd98u: goto label_46fd98;
        case 0x46fd9cu: goto label_46fd9c;
        case 0x46fda0u: goto label_46fda0;
        case 0x46fda4u: goto label_46fda4;
        case 0x46fda8u: goto label_46fda8;
        case 0x46fdacu: goto label_46fdac;
        case 0x46fdb0u: goto label_46fdb0;
        case 0x46fdb4u: goto label_46fdb4;
        case 0x46fdb8u: goto label_46fdb8;
        case 0x46fdbcu: goto label_46fdbc;
        case 0x46fdc0u: goto label_46fdc0;
        case 0x46fdc4u: goto label_46fdc4;
        case 0x46fdc8u: goto label_46fdc8;
        case 0x46fdccu: goto label_46fdcc;
        case 0x46fdd0u: goto label_46fdd0;
        case 0x46fdd4u: goto label_46fdd4;
        case 0x46fdd8u: goto label_46fdd8;
        case 0x46fddcu: goto label_46fddc;
        case 0x46fde0u: goto label_46fde0;
        case 0x46fde4u: goto label_46fde4;
        case 0x46fde8u: goto label_46fde8;
        case 0x46fdecu: goto label_46fdec;
        case 0x46fdf0u: goto label_46fdf0;
        case 0x46fdf4u: goto label_46fdf4;
        case 0x46fdf8u: goto label_46fdf8;
        case 0x46fdfcu: goto label_46fdfc;
        case 0x46fe00u: goto label_46fe00;
        case 0x46fe04u: goto label_46fe04;
        case 0x46fe08u: goto label_46fe08;
        case 0x46fe0cu: goto label_46fe0c;
        case 0x46fe10u: goto label_46fe10;
        case 0x46fe14u: goto label_46fe14;
        case 0x46fe18u: goto label_46fe18;
        case 0x46fe1cu: goto label_46fe1c;
        case 0x46fe20u: goto label_46fe20;
        case 0x46fe24u: goto label_46fe24;
        case 0x46fe28u: goto label_46fe28;
        case 0x46fe2cu: goto label_46fe2c;
        case 0x46fe30u: goto label_46fe30;
        case 0x46fe34u: goto label_46fe34;
        case 0x46fe38u: goto label_46fe38;
        case 0x46fe3cu: goto label_46fe3c;
        case 0x46fe40u: goto label_46fe40;
        case 0x46fe44u: goto label_46fe44;
        case 0x46fe48u: goto label_46fe48;
        case 0x46fe4cu: goto label_46fe4c;
        case 0x46fe50u: goto label_46fe50;
        case 0x46fe54u: goto label_46fe54;
        case 0x46fe58u: goto label_46fe58;
        case 0x46fe5cu: goto label_46fe5c;
        case 0x46fe60u: goto label_46fe60;
        case 0x46fe64u: goto label_46fe64;
        case 0x46fe68u: goto label_46fe68;
        case 0x46fe6cu: goto label_46fe6c;
        case 0x46fe70u: goto label_46fe70;
        case 0x46fe74u: goto label_46fe74;
        case 0x46fe78u: goto label_46fe78;
        case 0x46fe7cu: goto label_46fe7c;
        case 0x46fe80u: goto label_46fe80;
        case 0x46fe84u: goto label_46fe84;
        case 0x46fe88u: goto label_46fe88;
        case 0x46fe8cu: goto label_46fe8c;
        case 0x46fe90u: goto label_46fe90;
        case 0x46fe94u: goto label_46fe94;
        case 0x46fe98u: goto label_46fe98;
        case 0x46fe9cu: goto label_46fe9c;
        case 0x46fea0u: goto label_46fea0;
        case 0x46fea4u: goto label_46fea4;
        case 0x46fea8u: goto label_46fea8;
        case 0x46feacu: goto label_46feac;
        case 0x46feb0u: goto label_46feb0;
        case 0x46feb4u: goto label_46feb4;
        case 0x46feb8u: goto label_46feb8;
        case 0x46febcu: goto label_46febc;
        case 0x46fec0u: goto label_46fec0;
        case 0x46fec4u: goto label_46fec4;
        case 0x46fec8u: goto label_46fec8;
        case 0x46feccu: goto label_46fecc;
        case 0x46fed0u: goto label_46fed0;
        case 0x46fed4u: goto label_46fed4;
        case 0x46fed8u: goto label_46fed8;
        case 0x46fedcu: goto label_46fedc;
        case 0x46fee0u: goto label_46fee0;
        case 0x46fee4u: goto label_46fee4;
        case 0x46fee8u: goto label_46fee8;
        case 0x46feecu: goto label_46feec;
        case 0x46fef0u: goto label_46fef0;
        case 0x46fef4u: goto label_46fef4;
        case 0x46fef8u: goto label_46fef8;
        case 0x46fefcu: goto label_46fefc;
        case 0x46ff00u: goto label_46ff00;
        case 0x46ff04u: goto label_46ff04;
        case 0x46ff08u: goto label_46ff08;
        case 0x46ff0cu: goto label_46ff0c;
        case 0x46ff10u: goto label_46ff10;
        case 0x46ff14u: goto label_46ff14;
        case 0x46ff18u: goto label_46ff18;
        case 0x46ff1cu: goto label_46ff1c;
        case 0x46ff20u: goto label_46ff20;
        case 0x46ff24u: goto label_46ff24;
        case 0x46ff28u: goto label_46ff28;
        case 0x46ff2cu: goto label_46ff2c;
        case 0x46ff30u: goto label_46ff30;
        case 0x46ff34u: goto label_46ff34;
        case 0x46ff38u: goto label_46ff38;
        case 0x46ff3cu: goto label_46ff3c;
        case 0x46ff40u: goto label_46ff40;
        case 0x46ff44u: goto label_46ff44;
        case 0x46ff48u: goto label_46ff48;
        case 0x46ff4cu: goto label_46ff4c;
        case 0x46ff50u: goto label_46ff50;
        case 0x46ff54u: goto label_46ff54;
        case 0x46ff58u: goto label_46ff58;
        case 0x46ff5cu: goto label_46ff5c;
        case 0x46ff60u: goto label_46ff60;
        case 0x46ff64u: goto label_46ff64;
        case 0x46ff68u: goto label_46ff68;
        case 0x46ff6cu: goto label_46ff6c;
        case 0x46ff70u: goto label_46ff70;
        case 0x46ff74u: goto label_46ff74;
        case 0x46ff78u: goto label_46ff78;
        case 0x46ff7cu: goto label_46ff7c;
        case 0x46ff80u: goto label_46ff80;
        case 0x46ff84u: goto label_46ff84;
        case 0x46ff88u: goto label_46ff88;
        case 0x46ff8cu: goto label_46ff8c;
        case 0x46ff90u: goto label_46ff90;
        case 0x46ff94u: goto label_46ff94;
        case 0x46ff98u: goto label_46ff98;
        case 0x46ff9cu: goto label_46ff9c;
        case 0x46ffa0u: goto label_46ffa0;
        case 0x46ffa4u: goto label_46ffa4;
        case 0x46ffa8u: goto label_46ffa8;
        case 0x46ffacu: goto label_46ffac;
        case 0x46ffb0u: goto label_46ffb0;
        case 0x46ffb4u: goto label_46ffb4;
        case 0x46ffb8u: goto label_46ffb8;
        case 0x46ffbcu: goto label_46ffbc;
        case 0x46ffc0u: goto label_46ffc0;
        case 0x46ffc4u: goto label_46ffc4;
        case 0x46ffc8u: goto label_46ffc8;
        case 0x46ffccu: goto label_46ffcc;
        case 0x46ffd0u: goto label_46ffd0;
        case 0x46ffd4u: goto label_46ffd4;
        case 0x46ffd8u: goto label_46ffd8;
        case 0x46ffdcu: goto label_46ffdc;
        case 0x46ffe0u: goto label_46ffe0;
        case 0x46ffe4u: goto label_46ffe4;
        case 0x46ffe8u: goto label_46ffe8;
        case 0x46ffecu: goto label_46ffec;
        case 0x46fff0u: goto label_46fff0;
        case 0x46fff4u: goto label_46fff4;
        case 0x46fff8u: goto label_46fff8;
        case 0x46fffcu: goto label_46fffc;
        case 0x470000u: goto label_470000;
        case 0x470004u: goto label_470004;
        case 0x470008u: goto label_470008;
        case 0x47000cu: goto label_47000c;
        case 0x470010u: goto label_470010;
        case 0x470014u: goto label_470014;
        case 0x470018u: goto label_470018;
        case 0x47001cu: goto label_47001c;
        case 0x470020u: goto label_470020;
        case 0x470024u: goto label_470024;
        case 0x470028u: goto label_470028;
        case 0x47002cu: goto label_47002c;
        case 0x470030u: goto label_470030;
        case 0x470034u: goto label_470034;
        case 0x470038u: goto label_470038;
        case 0x47003cu: goto label_47003c;
        case 0x470040u: goto label_470040;
        case 0x470044u: goto label_470044;
        case 0x470048u: goto label_470048;
        case 0x47004cu: goto label_47004c;
        case 0x470050u: goto label_470050;
        case 0x470054u: goto label_470054;
        case 0x470058u: goto label_470058;
        case 0x47005cu: goto label_47005c;
        case 0x470060u: goto label_470060;
        case 0x470064u: goto label_470064;
        case 0x470068u: goto label_470068;
        case 0x47006cu: goto label_47006c;
        case 0x470070u: goto label_470070;
        case 0x470074u: goto label_470074;
        case 0x470078u: goto label_470078;
        case 0x47007cu: goto label_47007c;
        case 0x470080u: goto label_470080;
        case 0x470084u: goto label_470084;
        case 0x470088u: goto label_470088;
        case 0x47008cu: goto label_47008c;
        case 0x470090u: goto label_470090;
        case 0x470094u: goto label_470094;
        case 0x470098u: goto label_470098;
        case 0x47009cu: goto label_47009c;
        case 0x4700a0u: goto label_4700a0;
        case 0x4700a4u: goto label_4700a4;
        case 0x4700a8u: goto label_4700a8;
        case 0x4700acu: goto label_4700ac;
        case 0x4700b0u: goto label_4700b0;
        case 0x4700b4u: goto label_4700b4;
        case 0x4700b8u: goto label_4700b8;
        case 0x4700bcu: goto label_4700bc;
        case 0x4700c0u: goto label_4700c0;
        case 0x4700c4u: goto label_4700c4;
        case 0x4700c8u: goto label_4700c8;
        case 0x4700ccu: goto label_4700cc;
        case 0x4700d0u: goto label_4700d0;
        case 0x4700d4u: goto label_4700d4;
        case 0x4700d8u: goto label_4700d8;
        case 0x4700dcu: goto label_4700dc;
        case 0x4700e0u: goto label_4700e0;
        case 0x4700e4u: goto label_4700e4;
        case 0x4700e8u: goto label_4700e8;
        case 0x4700ecu: goto label_4700ec;
        case 0x4700f0u: goto label_4700f0;
        case 0x4700f4u: goto label_4700f4;
        case 0x4700f8u: goto label_4700f8;
        case 0x4700fcu: goto label_4700fc;
        case 0x470100u: goto label_470100;
        case 0x470104u: goto label_470104;
        case 0x470108u: goto label_470108;
        case 0x47010cu: goto label_47010c;
        case 0x470110u: goto label_470110;
        case 0x470114u: goto label_470114;
        case 0x470118u: goto label_470118;
        case 0x47011cu: goto label_47011c;
        case 0x470120u: goto label_470120;
        case 0x470124u: goto label_470124;
        case 0x470128u: goto label_470128;
        case 0x47012cu: goto label_47012c;
        case 0x470130u: goto label_470130;
        case 0x470134u: goto label_470134;
        case 0x470138u: goto label_470138;
        case 0x47013cu: goto label_47013c;
        case 0x470140u: goto label_470140;
        case 0x470144u: goto label_470144;
        case 0x470148u: goto label_470148;
        case 0x47014cu: goto label_47014c;
        case 0x470150u: goto label_470150;
        case 0x470154u: goto label_470154;
        case 0x470158u: goto label_470158;
        case 0x47015cu: goto label_47015c;
        case 0x470160u: goto label_470160;
        case 0x470164u: goto label_470164;
        case 0x470168u: goto label_470168;
        case 0x47016cu: goto label_47016c;
        case 0x470170u: goto label_470170;
        case 0x470174u: goto label_470174;
        case 0x470178u: goto label_470178;
        case 0x47017cu: goto label_47017c;
        case 0x470180u: goto label_470180;
        case 0x470184u: goto label_470184;
        case 0x470188u: goto label_470188;
        case 0x47018cu: goto label_47018c;
        case 0x470190u: goto label_470190;
        case 0x470194u: goto label_470194;
        case 0x470198u: goto label_470198;
        case 0x47019cu: goto label_47019c;
        case 0x4701a0u: goto label_4701a0;
        case 0x4701a4u: goto label_4701a4;
        case 0x4701a8u: goto label_4701a8;
        case 0x4701acu: goto label_4701ac;
        case 0x4701b0u: goto label_4701b0;
        case 0x4701b4u: goto label_4701b4;
        case 0x4701b8u: goto label_4701b8;
        case 0x4701bcu: goto label_4701bc;
        case 0x4701c0u: goto label_4701c0;
        case 0x4701c4u: goto label_4701c4;
        case 0x4701c8u: goto label_4701c8;
        case 0x4701ccu: goto label_4701cc;
        case 0x4701d0u: goto label_4701d0;
        case 0x4701d4u: goto label_4701d4;
        case 0x4701d8u: goto label_4701d8;
        case 0x4701dcu: goto label_4701dc;
        case 0x4701e0u: goto label_4701e0;
        case 0x4701e4u: goto label_4701e4;
        case 0x4701e8u: goto label_4701e8;
        case 0x4701ecu: goto label_4701ec;
        case 0x4701f0u: goto label_4701f0;
        case 0x4701f4u: goto label_4701f4;
        case 0x4701f8u: goto label_4701f8;
        case 0x4701fcu: goto label_4701fc;
        case 0x470200u: goto label_470200;
        case 0x470204u: goto label_470204;
        case 0x470208u: goto label_470208;
        case 0x47020cu: goto label_47020c;
        case 0x470210u: goto label_470210;
        case 0x470214u: goto label_470214;
        case 0x470218u: goto label_470218;
        case 0x47021cu: goto label_47021c;
        case 0x470220u: goto label_470220;
        case 0x470224u: goto label_470224;
        case 0x470228u: goto label_470228;
        case 0x47022cu: goto label_47022c;
        case 0x470230u: goto label_470230;
        case 0x470234u: goto label_470234;
        case 0x470238u: goto label_470238;
        case 0x47023cu: goto label_47023c;
        case 0x470240u: goto label_470240;
        case 0x470244u: goto label_470244;
        case 0x470248u: goto label_470248;
        case 0x47024cu: goto label_47024c;
        case 0x470250u: goto label_470250;
        case 0x470254u: goto label_470254;
        case 0x470258u: goto label_470258;
        case 0x47025cu: goto label_47025c;
        case 0x470260u: goto label_470260;
        case 0x470264u: goto label_470264;
        case 0x470268u: goto label_470268;
        case 0x47026cu: goto label_47026c;
        case 0x470270u: goto label_470270;
        case 0x470274u: goto label_470274;
        case 0x470278u: goto label_470278;
        case 0x47027cu: goto label_47027c;
        case 0x470280u: goto label_470280;
        case 0x470284u: goto label_470284;
        case 0x470288u: goto label_470288;
        case 0x47028cu: goto label_47028c;
        case 0x470290u: goto label_470290;
        case 0x470294u: goto label_470294;
        case 0x470298u: goto label_470298;
        case 0x47029cu: goto label_47029c;
        case 0x4702a0u: goto label_4702a0;
        case 0x4702a4u: goto label_4702a4;
        case 0x4702a8u: goto label_4702a8;
        case 0x4702acu: goto label_4702ac;
        case 0x4702b0u: goto label_4702b0;
        case 0x4702b4u: goto label_4702b4;
        case 0x4702b8u: goto label_4702b8;
        case 0x4702bcu: goto label_4702bc;
        case 0x4702c0u: goto label_4702c0;
        case 0x4702c4u: goto label_4702c4;
        case 0x4702c8u: goto label_4702c8;
        case 0x4702ccu: goto label_4702cc;
        case 0x4702d0u: goto label_4702d0;
        case 0x4702d4u: goto label_4702d4;
        case 0x4702d8u: goto label_4702d8;
        case 0x4702dcu: goto label_4702dc;
        case 0x4702e0u: goto label_4702e0;
        case 0x4702e4u: goto label_4702e4;
        case 0x4702e8u: goto label_4702e8;
        case 0x4702ecu: goto label_4702ec;
        case 0x4702f0u: goto label_4702f0;
        case 0x4702f4u: goto label_4702f4;
        case 0x4702f8u: goto label_4702f8;
        case 0x4702fcu: goto label_4702fc;
        case 0x470300u: goto label_470300;
        case 0x470304u: goto label_470304;
        case 0x470308u: goto label_470308;
        case 0x47030cu: goto label_47030c;
        case 0x470310u: goto label_470310;
        case 0x470314u: goto label_470314;
        case 0x470318u: goto label_470318;
        case 0x47031cu: goto label_47031c;
        case 0x470320u: goto label_470320;
        case 0x470324u: goto label_470324;
        case 0x470328u: goto label_470328;
        case 0x47032cu: goto label_47032c;
        case 0x470330u: goto label_470330;
        case 0x470334u: goto label_470334;
        case 0x470338u: goto label_470338;
        case 0x47033cu: goto label_47033c;
        case 0x470340u: goto label_470340;
        case 0x470344u: goto label_470344;
        case 0x470348u: goto label_470348;
        case 0x47034cu: goto label_47034c;
        case 0x470350u: goto label_470350;
        case 0x470354u: goto label_470354;
        case 0x470358u: goto label_470358;
        case 0x47035cu: goto label_47035c;
        case 0x470360u: goto label_470360;
        case 0x470364u: goto label_470364;
        case 0x470368u: goto label_470368;
        case 0x47036cu: goto label_47036c;
        case 0x470370u: goto label_470370;
        case 0x470374u: goto label_470374;
        case 0x470378u: goto label_470378;
        case 0x47037cu: goto label_47037c;
        case 0x470380u: goto label_470380;
        case 0x470384u: goto label_470384;
        case 0x470388u: goto label_470388;
        case 0x47038cu: goto label_47038c;
        case 0x470390u: goto label_470390;
        case 0x470394u: goto label_470394;
        case 0x470398u: goto label_470398;
        case 0x47039cu: goto label_47039c;
        case 0x4703a0u: goto label_4703a0;
        case 0x4703a4u: goto label_4703a4;
        case 0x4703a8u: goto label_4703a8;
        case 0x4703acu: goto label_4703ac;
        case 0x4703b0u: goto label_4703b0;
        case 0x4703b4u: goto label_4703b4;
        case 0x4703b8u: goto label_4703b8;
        case 0x4703bcu: goto label_4703bc;
        case 0x4703c0u: goto label_4703c0;
        case 0x4703c4u: goto label_4703c4;
        case 0x4703c8u: goto label_4703c8;
        case 0x4703ccu: goto label_4703cc;
        case 0x4703d0u: goto label_4703d0;
        case 0x4703d4u: goto label_4703d4;
        case 0x4703d8u: goto label_4703d8;
        case 0x4703dcu: goto label_4703dc;
        case 0x4703e0u: goto label_4703e0;
        case 0x4703e4u: goto label_4703e4;
        case 0x4703e8u: goto label_4703e8;
        case 0x4703ecu: goto label_4703ec;
        case 0x4703f0u: goto label_4703f0;
        case 0x4703f4u: goto label_4703f4;
        case 0x4703f8u: goto label_4703f8;
        case 0x4703fcu: goto label_4703fc;
        case 0x470400u: goto label_470400;
        case 0x470404u: goto label_470404;
        case 0x470408u: goto label_470408;
        case 0x47040cu: goto label_47040c;
        case 0x470410u: goto label_470410;
        case 0x470414u: goto label_470414;
        case 0x470418u: goto label_470418;
        case 0x47041cu: goto label_47041c;
        case 0x470420u: goto label_470420;
        case 0x470424u: goto label_470424;
        case 0x470428u: goto label_470428;
        case 0x47042cu: goto label_47042c;
        case 0x470430u: goto label_470430;
        case 0x470434u: goto label_470434;
        case 0x470438u: goto label_470438;
        case 0x47043cu: goto label_47043c;
        case 0x470440u: goto label_470440;
        case 0x470444u: goto label_470444;
        case 0x470448u: goto label_470448;
        case 0x47044cu: goto label_47044c;
        case 0x470450u: goto label_470450;
        case 0x470454u: goto label_470454;
        case 0x470458u: goto label_470458;
        case 0x47045cu: goto label_47045c;
        case 0x470460u: goto label_470460;
        case 0x470464u: goto label_470464;
        case 0x470468u: goto label_470468;
        case 0x47046cu: goto label_47046c;
        case 0x470470u: goto label_470470;
        case 0x470474u: goto label_470474;
        case 0x470478u: goto label_470478;
        case 0x47047cu: goto label_47047c;
        case 0x470480u: goto label_470480;
        case 0x470484u: goto label_470484;
        case 0x470488u: goto label_470488;
        case 0x47048cu: goto label_47048c;
        case 0x470490u: goto label_470490;
        case 0x470494u: goto label_470494;
        case 0x470498u: goto label_470498;
        case 0x47049cu: goto label_47049c;
        case 0x4704a0u: goto label_4704a0;
        case 0x4704a4u: goto label_4704a4;
        case 0x4704a8u: goto label_4704a8;
        case 0x4704acu: goto label_4704ac;
        case 0x4704b0u: goto label_4704b0;
        case 0x4704b4u: goto label_4704b4;
        case 0x4704b8u: goto label_4704b8;
        case 0x4704bcu: goto label_4704bc;
        case 0x4704c0u: goto label_4704c0;
        case 0x4704c4u: goto label_4704c4;
        case 0x4704c8u: goto label_4704c8;
        case 0x4704ccu: goto label_4704cc;
        case 0x4704d0u: goto label_4704d0;
        case 0x4704d4u: goto label_4704d4;
        case 0x4704d8u: goto label_4704d8;
        case 0x4704dcu: goto label_4704dc;
        case 0x4704e0u: goto label_4704e0;
        case 0x4704e4u: goto label_4704e4;
        case 0x4704e8u: goto label_4704e8;
        case 0x4704ecu: goto label_4704ec;
        case 0x4704f0u: goto label_4704f0;
        case 0x4704f4u: goto label_4704f4;
        case 0x4704f8u: goto label_4704f8;
        case 0x4704fcu: goto label_4704fc;
        case 0x470500u: goto label_470500;
        case 0x470504u: goto label_470504;
        case 0x470508u: goto label_470508;
        case 0x47050cu: goto label_47050c;
        case 0x470510u: goto label_470510;
        case 0x470514u: goto label_470514;
        case 0x470518u: goto label_470518;
        case 0x47051cu: goto label_47051c;
        case 0x470520u: goto label_470520;
        case 0x470524u: goto label_470524;
        case 0x470528u: goto label_470528;
        case 0x47052cu: goto label_47052c;
        case 0x470530u: goto label_470530;
        case 0x470534u: goto label_470534;
        case 0x470538u: goto label_470538;
        case 0x47053cu: goto label_47053c;
        case 0x470540u: goto label_470540;
        case 0x470544u: goto label_470544;
        case 0x470548u: goto label_470548;
        case 0x47054cu: goto label_47054c;
        case 0x470550u: goto label_470550;
        case 0x470554u: goto label_470554;
        case 0x470558u: goto label_470558;
        case 0x47055cu: goto label_47055c;
        case 0x470560u: goto label_470560;
        case 0x470564u: goto label_470564;
        case 0x470568u: goto label_470568;
        case 0x47056cu: goto label_47056c;
        case 0x470570u: goto label_470570;
        case 0x470574u: goto label_470574;
        case 0x470578u: goto label_470578;
        case 0x47057cu: goto label_47057c;
        case 0x470580u: goto label_470580;
        case 0x470584u: goto label_470584;
        case 0x470588u: goto label_470588;
        case 0x47058cu: goto label_47058c;
        case 0x470590u: goto label_470590;
        case 0x470594u: goto label_470594;
        case 0x470598u: goto label_470598;
        case 0x47059cu: goto label_47059c;
        case 0x4705a0u: goto label_4705a0;
        case 0x4705a4u: goto label_4705a4;
        case 0x4705a8u: goto label_4705a8;
        case 0x4705acu: goto label_4705ac;
        case 0x4705b0u: goto label_4705b0;
        case 0x4705b4u: goto label_4705b4;
        case 0x4705b8u: goto label_4705b8;
        case 0x4705bcu: goto label_4705bc;
        case 0x4705c0u: goto label_4705c0;
        case 0x4705c4u: goto label_4705c4;
        case 0x4705c8u: goto label_4705c8;
        case 0x4705ccu: goto label_4705cc;
        case 0x4705d0u: goto label_4705d0;
        case 0x4705d4u: goto label_4705d4;
        case 0x4705d8u: goto label_4705d8;
        case 0x4705dcu: goto label_4705dc;
        case 0x4705e0u: goto label_4705e0;
        case 0x4705e4u: goto label_4705e4;
        case 0x4705e8u: goto label_4705e8;
        case 0x4705ecu: goto label_4705ec;
        case 0x4705f0u: goto label_4705f0;
        case 0x4705f4u: goto label_4705f4;
        case 0x4705f8u: goto label_4705f8;
        case 0x4705fcu: goto label_4705fc;
        case 0x470600u: goto label_470600;
        case 0x470604u: goto label_470604;
        case 0x470608u: goto label_470608;
        case 0x47060cu: goto label_47060c;
        case 0x470610u: goto label_470610;
        case 0x470614u: goto label_470614;
        case 0x470618u: goto label_470618;
        case 0x47061cu: goto label_47061c;
        case 0x470620u: goto label_470620;
        case 0x470624u: goto label_470624;
        case 0x470628u: goto label_470628;
        case 0x47062cu: goto label_47062c;
        case 0x470630u: goto label_470630;
        case 0x470634u: goto label_470634;
        case 0x470638u: goto label_470638;
        case 0x47063cu: goto label_47063c;
        case 0x470640u: goto label_470640;
        case 0x470644u: goto label_470644;
        case 0x470648u: goto label_470648;
        case 0x47064cu: goto label_47064c;
        case 0x470650u: goto label_470650;
        case 0x470654u: goto label_470654;
        case 0x470658u: goto label_470658;
        case 0x47065cu: goto label_47065c;
        case 0x470660u: goto label_470660;
        case 0x470664u: goto label_470664;
        case 0x470668u: goto label_470668;
        case 0x47066cu: goto label_47066c;
        case 0x470670u: goto label_470670;
        case 0x470674u: goto label_470674;
        case 0x470678u: goto label_470678;
        case 0x47067cu: goto label_47067c;
        case 0x470680u: goto label_470680;
        case 0x470684u: goto label_470684;
        case 0x470688u: goto label_470688;
        case 0x47068cu: goto label_47068c;
        case 0x470690u: goto label_470690;
        case 0x470694u: goto label_470694;
        case 0x470698u: goto label_470698;
        case 0x47069cu: goto label_47069c;
        case 0x4706a0u: goto label_4706a0;
        case 0x4706a4u: goto label_4706a4;
        case 0x4706a8u: goto label_4706a8;
        case 0x4706acu: goto label_4706ac;
        case 0x4706b0u: goto label_4706b0;
        case 0x4706b4u: goto label_4706b4;
        case 0x4706b8u: goto label_4706b8;
        case 0x4706bcu: goto label_4706bc;
        case 0x4706c0u: goto label_4706c0;
        case 0x4706c4u: goto label_4706c4;
        case 0x4706c8u: goto label_4706c8;
        case 0x4706ccu: goto label_4706cc;
        case 0x4706d0u: goto label_4706d0;
        case 0x4706d4u: goto label_4706d4;
        case 0x4706d8u: goto label_4706d8;
        case 0x4706dcu: goto label_4706dc;
        case 0x4706e0u: goto label_4706e0;
        case 0x4706e4u: goto label_4706e4;
        case 0x4706e8u: goto label_4706e8;
        case 0x4706ecu: goto label_4706ec;
        case 0x4706f0u: goto label_4706f0;
        case 0x4706f4u: goto label_4706f4;
        case 0x4706f8u: goto label_4706f8;
        case 0x4706fcu: goto label_4706fc;
        case 0x470700u: goto label_470700;
        case 0x470704u: goto label_470704;
        case 0x470708u: goto label_470708;
        case 0x47070cu: goto label_47070c;
        case 0x470710u: goto label_470710;
        case 0x470714u: goto label_470714;
        case 0x470718u: goto label_470718;
        case 0x47071cu: goto label_47071c;
        case 0x470720u: goto label_470720;
        case 0x470724u: goto label_470724;
        case 0x470728u: goto label_470728;
        case 0x47072cu: goto label_47072c;
        case 0x470730u: goto label_470730;
        case 0x470734u: goto label_470734;
        case 0x470738u: goto label_470738;
        case 0x47073cu: goto label_47073c;
        case 0x470740u: goto label_470740;
        case 0x470744u: goto label_470744;
        case 0x470748u: goto label_470748;
        case 0x47074cu: goto label_47074c;
        case 0x470750u: goto label_470750;
        case 0x470754u: goto label_470754;
        case 0x470758u: goto label_470758;
        case 0x47075cu: goto label_47075c;
        case 0x470760u: goto label_470760;
        case 0x470764u: goto label_470764;
        case 0x470768u: goto label_470768;
        case 0x47076cu: goto label_47076c;
        case 0x470770u: goto label_470770;
        case 0x470774u: goto label_470774;
        case 0x470778u: goto label_470778;
        case 0x47077cu: goto label_47077c;
        case 0x470780u: goto label_470780;
        case 0x470784u: goto label_470784;
        case 0x470788u: goto label_470788;
        case 0x47078cu: goto label_47078c;
        case 0x470790u: goto label_470790;
        case 0x470794u: goto label_470794;
        case 0x470798u: goto label_470798;
        case 0x47079cu: goto label_47079c;
        case 0x4707a0u: goto label_4707a0;
        case 0x4707a4u: goto label_4707a4;
        case 0x4707a8u: goto label_4707a8;
        case 0x4707acu: goto label_4707ac;
        case 0x4707b0u: goto label_4707b0;
        case 0x4707b4u: goto label_4707b4;
        case 0x4707b8u: goto label_4707b8;
        case 0x4707bcu: goto label_4707bc;
        case 0x4707c0u: goto label_4707c0;
        case 0x4707c4u: goto label_4707c4;
        case 0x4707c8u: goto label_4707c8;
        case 0x4707ccu: goto label_4707cc;
        case 0x4707d0u: goto label_4707d0;
        case 0x4707d4u: goto label_4707d4;
        case 0x4707d8u: goto label_4707d8;
        case 0x4707dcu: goto label_4707dc;
        case 0x4707e0u: goto label_4707e0;
        case 0x4707e4u: goto label_4707e4;
        case 0x4707e8u: goto label_4707e8;
        case 0x4707ecu: goto label_4707ec;
        case 0x4707f0u: goto label_4707f0;
        case 0x4707f4u: goto label_4707f4;
        case 0x4707f8u: goto label_4707f8;
        case 0x4707fcu: goto label_4707fc;
        case 0x470800u: goto label_470800;
        case 0x470804u: goto label_470804;
        case 0x470808u: goto label_470808;
        case 0x47080cu: goto label_47080c;
        case 0x470810u: goto label_470810;
        case 0x470814u: goto label_470814;
        case 0x470818u: goto label_470818;
        case 0x47081cu: goto label_47081c;
        case 0x470820u: goto label_470820;
        case 0x470824u: goto label_470824;
        case 0x470828u: goto label_470828;
        case 0x47082cu: goto label_47082c;
        case 0x470830u: goto label_470830;
        case 0x470834u: goto label_470834;
        case 0x470838u: goto label_470838;
        case 0x47083cu: goto label_47083c;
        case 0x470840u: goto label_470840;
        case 0x470844u: goto label_470844;
        case 0x470848u: goto label_470848;
        case 0x47084cu: goto label_47084c;
        case 0x470850u: goto label_470850;
        case 0x470854u: goto label_470854;
        case 0x470858u: goto label_470858;
        case 0x47085cu: goto label_47085c;
        case 0x470860u: goto label_470860;
        case 0x470864u: goto label_470864;
        case 0x470868u: goto label_470868;
        case 0x47086cu: goto label_47086c;
        case 0x470870u: goto label_470870;
        case 0x470874u: goto label_470874;
        case 0x470878u: goto label_470878;
        case 0x47087cu: goto label_47087c;
        case 0x470880u: goto label_470880;
        case 0x470884u: goto label_470884;
        case 0x470888u: goto label_470888;
        case 0x47088cu: goto label_47088c;
        case 0x470890u: goto label_470890;
        case 0x470894u: goto label_470894;
        case 0x470898u: goto label_470898;
        case 0x47089cu: goto label_47089c;
        case 0x4708a0u: goto label_4708a0;
        case 0x4708a4u: goto label_4708a4;
        case 0x4708a8u: goto label_4708a8;
        case 0x4708acu: goto label_4708ac;
        case 0x4708b0u: goto label_4708b0;
        case 0x4708b4u: goto label_4708b4;
        case 0x4708b8u: goto label_4708b8;
        case 0x4708bcu: goto label_4708bc;
        case 0x4708c0u: goto label_4708c0;
        case 0x4708c4u: goto label_4708c4;
        case 0x4708c8u: goto label_4708c8;
        case 0x4708ccu: goto label_4708cc;
        case 0x4708d0u: goto label_4708d0;
        case 0x4708d4u: goto label_4708d4;
        case 0x4708d8u: goto label_4708d8;
        case 0x4708dcu: goto label_4708dc;
        case 0x4708e0u: goto label_4708e0;
        case 0x4708e4u: goto label_4708e4;
        case 0x4708e8u: goto label_4708e8;
        case 0x4708ecu: goto label_4708ec;
        case 0x4708f0u: goto label_4708f0;
        case 0x4708f4u: goto label_4708f4;
        case 0x4708f8u: goto label_4708f8;
        case 0x4708fcu: goto label_4708fc;
        case 0x470900u: goto label_470900;
        case 0x470904u: goto label_470904;
        case 0x470908u: goto label_470908;
        case 0x47090cu: goto label_47090c;
        case 0x470910u: goto label_470910;
        case 0x470914u: goto label_470914;
        case 0x470918u: goto label_470918;
        case 0x47091cu: goto label_47091c;
        case 0x470920u: goto label_470920;
        case 0x470924u: goto label_470924;
        case 0x470928u: goto label_470928;
        case 0x47092cu: goto label_47092c;
        case 0x470930u: goto label_470930;
        case 0x470934u: goto label_470934;
        case 0x470938u: goto label_470938;
        case 0x47093cu: goto label_47093c;
        case 0x470940u: goto label_470940;
        case 0x470944u: goto label_470944;
        case 0x470948u: goto label_470948;
        case 0x47094cu: goto label_47094c;
        case 0x470950u: goto label_470950;
        case 0x470954u: goto label_470954;
        case 0x470958u: goto label_470958;
        case 0x47095cu: goto label_47095c;
        case 0x470960u: goto label_470960;
        case 0x470964u: goto label_470964;
        case 0x470968u: goto label_470968;
        case 0x47096cu: goto label_47096c;
        case 0x470970u: goto label_470970;
        case 0x470974u: goto label_470974;
        case 0x470978u: goto label_470978;
        case 0x47097cu: goto label_47097c;
        default: break;
    }

    ctx->pc = 0x46fce0u;

label_46fce0:
    // 0x46fce0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x46fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_46fce4:
    // 0x46fce4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46fce8:
    // 0x46fce8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x46fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_46fcec:
    // 0x46fcec: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x46fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
label_46fcf0:
    // 0x46fcf0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x46fcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_46fcf4:
    // 0x46fcf4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x46fcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_46fcf8:
    // 0x46fcf8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46fcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_46fcfc:
    // 0x46fcfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46fcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46fd00:
    // 0x46fd00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46fd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46fd04:
    // 0x46fd04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x46fd04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46fd08:
    // 0x46fd08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46fd0c:
    // 0x46fd0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46fd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46fd10:
    // 0x46fd10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x46fd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46fd14:
    // 0x46fd14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46fd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46fd18:
    // 0x46fd18: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x46fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_46fd1c:
    // 0x46fd1c: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x46fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_46fd20:
    // 0x46fd20: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x46fd20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46fd24:
    // 0x46fd24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46fd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46fd28:
    // 0x46fd28: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x46fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_46fd2c:
    // 0x46fd2c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x46fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_46fd30:
    // 0x46fd30: 0x3b900  sll         $s7, $v1, 4
    ctx->pc = 0x46fd30u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_46fd34:
    // 0x46fd34: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x46fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_46fd38:
    // 0x46fd38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_46fd3c:
    // 0x46fd3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46fd40:
    // 0x46fd40: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x46fd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46fd44:
    // 0x46fd44: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x46fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
label_46fd48:
    // 0x46fd48: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x46fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_46fd4c:
    // 0x46fd4c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x46fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_46fd50:
    // 0x46fd50: 0x2454000c  addiu       $s4, $v0, 0xC
    ctx->pc = 0x46fd50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_46fd54:
    // 0x46fd54: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x46fd54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_46fd58:
    // 0x46fd58: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x46fd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_46fd5c:
    // 0x46fd5c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x46fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46fd60:
    // 0x46fd60: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x46fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_46fd64:
    // 0x46fd64: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x46fd64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
label_46fd68:
    // 0x46fd68: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x46fd68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46fd6c:
    // 0x46fd6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x46fd6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46fd70:
    // 0x46fd70: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x46fd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_46fd74:
    // 0x46fd74: 0x802026  xor         $a0, $a0, $zero
    ctx->pc = 0x46fd74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
label_46fd78:
    // 0x46fd78: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x46fd78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_46fd7c:
    // 0x46fd7c: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
label_46fd80:
    if (ctx->pc == 0x46FD80u) {
        ctx->pc = 0x46FD80u;
            // 0x46fd80: 0x28650009  slti        $a1, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->pc = 0x46FD84u;
        goto label_46fd84;
    }
    ctx->pc = 0x46FD7Cu;
    {
        const bool branch_taken_0x46fd7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x46FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FD7Cu;
            // 0x46fd80: 0x28650009  slti        $a1, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fd7c) {
            ctx->pc = 0x46FDC8u;
            goto label_46fdc8;
        }
    }
    ctx->pc = 0x46FD84u;
label_46fd84:
    // 0x46fd84: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x46fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46fd88:
    // 0x46fd88: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x46fd88u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46fd8c:
    // 0x46fd8c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_46fd90:
    if (ctx->pc == 0x46FD90u) {
        ctx->pc = 0x46FD90u;
            // 0x46fd90: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46FD94u;
        goto label_46fd94;
    }
    ctx->pc = 0x46FD8Cu;
    {
        const bool branch_taken_0x46fd8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FD8Cu;
            // 0x46fd90: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fd8c) {
            ctx->pc = 0x46FDB0u;
            goto label_46fdb0;
        }
    }
    ctx->pc = 0x46FD94u;
label_46fd94:
    // 0x46fd94: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46fd94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46fd98:
    // 0x46fd98: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x46fd98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_46fd9c:
    // 0x46fd9c: 0x14200042  bnez        $at, . + 4 + (0x42 << 2)
label_46fda0:
    if (ctx->pc == 0x46FDA0u) {
        ctx->pc = 0x46FDA4u;
        goto label_46fda4;
    }
    ctx->pc = 0x46FD9Cu;
    {
        const bool branch_taken_0x46fd9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fd9c) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FDA4u;
label_46fda4:
    // 0x46fda4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x46fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_46fda8:
    // 0x46fda8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_46fdac:
    if (ctx->pc == 0x46FDACu) {
        ctx->pc = 0x46FDACu;
            // 0x46fdac: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46FDB0u;
        goto label_46fdb0;
    }
    ctx->pc = 0x46FDA8u;
    {
        const bool branch_taken_0x46fda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FDA8u;
            // 0x46fdac: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fda8) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FDB0u;
label_46fdb0:
    // 0x46fdb0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46fdb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46fdb4:
    // 0x46fdb4: 0x28410012  slti        $at, $v0, 0x12
    ctx->pc = 0x46fdb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_46fdb8:
    // 0x46fdb8: 0x1420003b  bnez        $at, . + 4 + (0x3B << 2)
label_46fdbc:
    if (ctx->pc == 0x46FDBCu) {
        ctx->pc = 0x46FDC0u;
        goto label_46fdc0;
    }
    ctx->pc = 0x46FDB8u;
    {
        const bool branch_taken_0x46fdb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fdb8) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FDC0u;
label_46fdc0:
    // 0x46fdc0: 0x10000039  b           . + 4 + (0x39 << 2)
label_46fdc4:
    if (ctx->pc == 0x46FDC4u) {
        ctx->pc = 0x46FDC4u;
            // 0x46fdc4: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x46FDC8u;
        goto label_46fdc8;
    }
    ctx->pc = 0x46FDC0u;
    {
        const bool branch_taken_0x46fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FDC0u;
            // 0x46fdc4: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fdc0) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FDC8u;
label_46fdc8:
    // 0x46fdc8: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x46fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_46fdcc:
    // 0x46fdcc: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x46fdccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_46fdd0:
    // 0x46fdd0: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x46fdd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_46fdd4:
    // 0x46fdd4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x46fdd4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_46fdd8:
    // 0x46fdd8: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_46fddc:
    if (ctx->pc == 0x46FDDCu) {
        ctx->pc = 0x46FDE0u;
        goto label_46fde0;
    }
    ctx->pc = 0x46FDD8u;
    {
        const bool branch_taken_0x46fdd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fdd8) {
            ctx->pc = 0x46FE30u;
            goto label_46fe30;
        }
    }
    ctx->pc = 0x46FDE0u;
label_46fde0:
    // 0x46fde0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46fde4:
    // 0x46fde4: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x46fde4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46fde8:
    // 0x46fde8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_46fdec:
    if (ctx->pc == 0x46FDECu) {
        ctx->pc = 0x46FDECu;
            // 0x46fdec: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46FDF0u;
        goto label_46fdf0;
    }
    ctx->pc = 0x46FDE8u;
    {
        const bool branch_taken_0x46fde8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FDE8u;
            // 0x46fdec: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fde8) {
            ctx->pc = 0x46FE10u;
            goto label_46fe10;
        }
    }
    ctx->pc = 0x46FDF0u;
label_46fdf0:
    // 0x46fdf0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46fdf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46fdf4:
    // 0x46fdf4: 0x28410012  slti        $at, $v0, 0x12
    ctx->pc = 0x46fdf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_46fdf8:
    // 0x46fdf8: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
label_46fdfc:
    if (ctx->pc == 0x46FDFCu) {
        ctx->pc = 0x46FE00u;
        goto label_46fe00;
    }
    ctx->pc = 0x46FDF8u;
    {
        const bool branch_taken_0x46fdf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fdf8) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FE00u;
label_46fe00:
    // 0x46fe00: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x46fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_46fe04:
    // 0x46fe04: 0x10000028  b           . + 4 + (0x28 << 2)
label_46fe08:
    if (ctx->pc == 0x46FE08u) {
        ctx->pc = 0x46FE08u;
            // 0x46fe08: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46FE0Cu;
        goto label_46fe0c;
    }
    ctx->pc = 0x46FE04u;
    {
        const bool branch_taken_0x46fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FE04u;
            // 0x46fe08: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fe04) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FE0Cu;
label_46fe0c:
    // 0x46fe0c: 0x0  nop
    ctx->pc = 0x46fe0cu;
    // NOP
label_46fe10:
    // 0x46fe10: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46fe10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46fe14:
    // 0x46fe14: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x46fe14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_46fe18:
    // 0x46fe18: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_46fe1c:
    if (ctx->pc == 0x46FE1Cu) {
        ctx->pc = 0x46FE20u;
        goto label_46fe20;
    }
    ctx->pc = 0x46FE18u;
    {
        const bool branch_taken_0x46fe18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fe18) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FE20u;
label_46fe20:
    // 0x46fe20: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x46fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_46fe24:
    // 0x46fe24: 0x10000020  b           . + 4 + (0x20 << 2)
label_46fe28:
    if (ctx->pc == 0x46FE28u) {
        ctx->pc = 0x46FE28u;
            // 0x46fe28: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46FE2Cu;
        goto label_46fe2c;
    }
    ctx->pc = 0x46FE24u;
    {
        const bool branch_taken_0x46fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FE24u;
            // 0x46fe28: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fe24) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FE2Cu;
label_46fe2c:
    // 0x46fe2c: 0x0  nop
    ctx->pc = 0x46fe2cu;
    // NOP
label_46fe30:
    // 0x46fe30: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x46fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_46fe34:
    // 0x46fe34: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x46fe34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_46fe38:
    // 0x46fe38: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x46fe38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_46fe3c:
    // 0x46fe3c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x46fe3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_46fe40:
    // 0x46fe40: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_46fe44:
    if (ctx->pc == 0x46FE44u) {
        ctx->pc = 0x46FE48u;
        goto label_46fe48;
    }
    ctx->pc = 0x46FE40u;
    {
        const bool branch_taken_0x46fe40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fe40) {
            ctx->pc = 0x46FE70u;
            goto label_46fe70;
        }
    }
    ctx->pc = 0x46FE48u;
label_46fe48:
    // 0x46fe48: 0x24620009  addiu       $v0, $v1, 0x9
    ctx->pc = 0x46fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
label_46fe4c:
    // 0x46fe4c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x46fe4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_46fe50:
    // 0x46fe50: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46fe50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46fe54:
    // 0x46fe54: 0x28410012  slti        $at, $v0, 0x12
    ctx->pc = 0x46fe54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_46fe58:
    // 0x46fe58: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_46fe5c:
    if (ctx->pc == 0x46FE5Cu) {
        ctx->pc = 0x46FE5Cu;
            // 0x46fe5c: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x46FE60u;
        goto label_46fe60;
    }
    ctx->pc = 0x46FE58u;
    {
        const bool branch_taken_0x46fe58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x46FE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FE58u;
            // 0x46fe5c: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fe58) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FE60u;
label_46fe60:
    // 0x46fe60: 0x2462fff7  addiu       $v0, $v1, -0x9
    ctx->pc = 0x46fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
label_46fe64:
    // 0x46fe64: 0x10000010  b           . + 4 + (0x10 << 2)
label_46fe68:
    if (ctx->pc == 0x46FE68u) {
        ctx->pc = 0x46FE68u;
            // 0x46fe68: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46FE6Cu;
        goto label_46fe6c;
    }
    ctx->pc = 0x46FE64u;
    {
        const bool branch_taken_0x46fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FE64u;
            // 0x46fe68: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fe64) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FE6Cu;
label_46fe6c:
    // 0x46fe6c: 0x0  nop
    ctx->pc = 0x46fe6cu;
    // NOP
label_46fe70:
    // 0x46fe70: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x46fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_46fe74:
    // 0x46fe74: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x46fe74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_46fe78:
    // 0x46fe78: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x46fe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_46fe7c:
    // 0x46fe7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46fe7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46fe80:
    // 0x46fe80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_46fe84:
    if (ctx->pc == 0x46FE84u) {
        ctx->pc = 0x46FE88u;
        goto label_46fe88;
    }
    ctx->pc = 0x46FE80u;
    {
        const bool branch_taken_0x46fe80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fe80) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FE88u;
label_46fe88:
    // 0x46fe88: 0x2462fff7  addiu       $v0, $v1, -0x9
    ctx->pc = 0x46fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
label_46fe8c:
    // 0x46fe8c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x46fe8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_46fe90:
    // 0x46fe90: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46fe90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46fe94:
    // 0x46fe94: 0x28410012  slti        $at, $v0, 0x12
    ctx->pc = 0x46fe94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_46fe98:
    // 0x46fe98: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_46fe9c:
    if (ctx->pc == 0x46FE9Cu) {
        ctx->pc = 0x46FE9Cu;
            // 0x46fe9c: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x46FEA0u;
        goto label_46fea0;
    }
    ctx->pc = 0x46FE98u;
    {
        const bool branch_taken_0x46fe98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x46FE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FE98u;
            // 0x46fe9c: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fe98) {
            ctx->pc = 0x46FEA8u;
            goto label_46fea8;
        }
    }
    ctx->pc = 0x46FEA0u;
label_46fea0:
    // 0x46fea0: 0x24620009  addiu       $v0, $v1, 0x9
    ctx->pc = 0x46fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
label_46fea4:
    // 0x46fea4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x46fea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_46fea8:
    // 0x46fea8: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x46fea8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46feac:
    // 0x46feac: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x46feacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_46feb0:
    // 0x46feb0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x46feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_46feb4:
    // 0x46feb4: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x46feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_46feb8:
    // 0x46feb8: 0x2484e990  addiu       $a0, $a0, -0x1670
    ctx->pc = 0x46feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
label_46febc:
    // 0x46febc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x46febcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46fec0:
    // 0x46fec0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46fec4:
    // 0x46fec4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x46fec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_46fec8:
    // 0x46fec8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x46fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46fecc:
    // 0x46fecc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x46feccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_46fed0:
    // 0x46fed0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x46fed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_46fed4:
    // 0x46fed4: 0x12600052  beqz        $s3, . + 4 + (0x52 << 2)
label_46fed8:
    if (ctx->pc == 0x46FED8u) {
        ctx->pc = 0x46FED8u;
            // 0x46fed8: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46FEDCu;
        goto label_46fedc;
    }
    ctx->pc = 0x46FED4u;
    {
        const bool branch_taken_0x46fed4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FED4u;
            // 0x46fed8: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fed4) {
            ctx->pc = 0x470020u;
            goto label_470020;
        }
    }
    ctx->pc = 0x46FEDCu;
label_46fedc:
    // 0x46fedc: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x46fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_46fee0:
    // 0x46fee0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46fee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46fee4:
    // 0x46fee4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_46fee8:
    if (ctx->pc == 0x46FEE8u) {
        ctx->pc = 0x46FEECu;
        goto label_46feec;
    }
    ctx->pc = 0x46FEE4u;
    {
        const bool branch_taken_0x46fee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fee4) {
            ctx->pc = 0x46FF10u;
            goto label_46ff10;
        }
    }
    ctx->pc = 0x46FEECu;
label_46feec:
    // 0x46feec: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x46feecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_46fef0:
    // 0x46fef0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x46fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_46fef4:
    // 0x46fef4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x46fef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_46fef8:
    // 0x46fef8: 0x5062ff99  beql        $v1, $v0, . + 4 + (-0x67 << 2)
label_46fefc:
    if (ctx->pc == 0x46FEFCu) {
        ctx->pc = 0x46FEFCu;
            // 0x46fefc: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x46FF00u;
        goto label_46ff00;
    }
    ctx->pc = 0x46FEF8u;
    {
        const bool branch_taken_0x46fef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46fef8) {
            ctx->pc = 0x46FEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46FEF8u;
            // 0x46fefc: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46FD60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46fd60;
        }
    }
    ctx->pc = 0x46FF00u;
label_46ff00:
    // 0x46ff00: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x46ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46ff04:
    // 0x46ff04: 0x1062ff95  beq         $v1, $v0, . + 4 + (-0x6B << 2)
label_46ff08:
    if (ctx->pc == 0x46FF08u) {
        ctx->pc = 0x46FF0Cu;
        goto label_46ff0c;
    }
    ctx->pc = 0x46FF04u;
    {
        const bool branch_taken_0x46ff04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ff04) {
            ctx->pc = 0x46FD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46fd5c;
        }
    }
    ctx->pc = 0x46FF0Cu;
label_46ff0c:
    // 0x46ff0c: 0x0  nop
    ctx->pc = 0x46ff0cu;
    // NOP
label_46ff10:
    // 0x46ff10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46ff14:
    // 0x46ff14: 0x8c430ec8  lw          $v1, 0xEC8($v0)
    ctx->pc = 0x46ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_46ff18:
    // 0x46ff18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ff1c:
    // 0x46ff1c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x46ff1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_46ff20:
    // 0x46ff20: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x46ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_46ff24:
    // 0x46ff24: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x46ff24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_46ff28:
    // 0x46ff28: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x46ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
label_46ff2c:
    // 0x46ff2c: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x46ff2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_46ff30:
    // 0x46ff30: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_46ff34:
    if (ctx->pc == 0x46FF34u) {
        ctx->pc = 0x46FF34u;
            // 0x46ff34: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x46FF38u;
        goto label_46ff38;
    }
    ctx->pc = 0x46FF30u;
    {
        const bool branch_taken_0x46ff30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FF30u;
            // 0x46ff34: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ff30) {
            ctx->pc = 0x46FFA8u;
            goto label_46ffa8;
        }
    }
    ctx->pc = 0x46FF38u;
label_46ff38:
    // 0x46ff38: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x46ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_46ff3c:
    // 0x46ff3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46ff40:
    // 0x46ff40: 0x2463f020  addiu       $v1, $v1, -0xFE0
    ctx->pc = 0x46ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963232));
label_46ff44:
    // 0x46ff44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46ff48:
    // 0x46ff48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46ff4c:
    // 0x46ff4c: 0x400008  jr          $v0
label_46ff50:
    if (ctx->pc == 0x46FF50u) {
        ctx->pc = 0x46FF54u;
        goto label_46ff54;
    }
    ctx->pc = 0x46FF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x46FF58u: goto label_46ff58;
            case 0x46FF70u: goto label_46ff70;
            case 0x46FF80u: goto label_46ff80;
            case 0x46FF98u: goto label_46ff98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x46FF54u;
label_46ff54:
    // 0x46ff54: 0x0  nop
    ctx->pc = 0x46ff54u;
    // NOP
label_46ff58:
    // 0x46ff58: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x46ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_46ff5c:
    // 0x46ff5c: 0xc0b90e0  jal         func_2E4380
label_46ff60:
    if (ctx->pc == 0x46FF60u) {
        ctx->pc = 0x46FF60u;
            // 0x46ff60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46FF64u;
        goto label_46ff64;
    }
    ctx->pc = 0x46FF5Cu;
    SET_GPR_U32(ctx, 31, 0x46FF64u);
    ctx->pc = 0x46FF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46FF5Cu;
            // 0x46ff60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FF64u; }
        if (ctx->pc != 0x46FF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FF64u; }
        if (ctx->pc != 0x46FF64u) { return; }
    }
    ctx->pc = 0x46FF64u;
label_46ff64:
    // 0x46ff64: 0x10000010  b           . + 4 + (0x10 << 2)
label_46ff68:
    if (ctx->pc == 0x46FF68u) {
        ctx->pc = 0x46FF68u;
            // 0x46ff68: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46FF6Cu;
        goto label_46ff6c;
    }
    ctx->pc = 0x46FF64u;
    {
        const bool branch_taken_0x46ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FF64u;
            // 0x46ff68: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ff64) {
            ctx->pc = 0x46FFA8u;
            goto label_46ffa8;
        }
    }
    ctx->pc = 0x46FF6Cu;
label_46ff6c:
    // 0x46ff6c: 0x0  nop
    ctx->pc = 0x46ff6cu;
    // NOP
label_46ff70:
    // 0x46ff70: 0xc0b90e0  jal         func_2E4380
label_46ff74:
    if (ctx->pc == 0x46FF74u) {
        ctx->pc = 0x46FF74u;
            // 0x46ff74: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->pc = 0x46FF78u;
        goto label_46ff78;
    }
    ctx->pc = 0x46FF70u;
    SET_GPR_U32(ctx, 31, 0x46FF78u);
    ctx->pc = 0x46FF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46FF70u;
            // 0x46ff74: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FF78u; }
        if (ctx->pc != 0x46FF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FF78u; }
        if (ctx->pc != 0x46FF78u) { return; }
    }
    ctx->pc = 0x46FF78u;
label_46ff78:
    // 0x46ff78: 0x1000000b  b           . + 4 + (0xB << 2)
label_46ff7c:
    if (ctx->pc == 0x46FF7Cu) {
        ctx->pc = 0x46FF7Cu;
            // 0x46ff7c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46FF80u;
        goto label_46ff80;
    }
    ctx->pc = 0x46FF78u;
    {
        const bool branch_taken_0x46ff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FF78u;
            // 0x46ff7c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ff78) {
            ctx->pc = 0x46FFA8u;
            goto label_46ffa8;
        }
    }
    ctx->pc = 0x46FF80u;
label_46ff80:
    // 0x46ff80: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x46ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_46ff84:
    // 0x46ff84: 0xc0b90e0  jal         func_2E4380
label_46ff88:
    if (ctx->pc == 0x46FF88u) {
        ctx->pc = 0x46FF88u;
            // 0x46ff88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x46FF8Cu;
        goto label_46ff8c;
    }
    ctx->pc = 0x46FF84u;
    SET_GPR_U32(ctx, 31, 0x46FF8Cu);
    ctx->pc = 0x46FF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46FF84u;
            // 0x46ff88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FF8Cu; }
        if (ctx->pc != 0x46FF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FF8Cu; }
        if (ctx->pc != 0x46FF8Cu) { return; }
    }
    ctx->pc = 0x46FF8Cu;
label_46ff8c:
    // 0x46ff8c: 0x10000006  b           . + 4 + (0x6 << 2)
label_46ff90:
    if (ctx->pc == 0x46FF90u) {
        ctx->pc = 0x46FF90u;
            // 0x46ff90: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46FF94u;
        goto label_46ff94;
    }
    ctx->pc = 0x46FF8Cu;
    {
        const bool branch_taken_0x46ff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FF8Cu;
            // 0x46ff90: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ff8c) {
            ctx->pc = 0x46FFA8u;
            goto label_46ffa8;
        }
    }
    ctx->pc = 0x46FF94u;
label_46ff94:
    // 0x46ff94: 0x0  nop
    ctx->pc = 0x46ff94u;
    // NOP
label_46ff98:
    // 0x46ff98: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x46ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_46ff9c:
    // 0x46ff9c: 0xc0b90e0  jal         func_2E4380
label_46ffa0:
    if (ctx->pc == 0x46FFA0u) {
        ctx->pc = 0x46FFA0u;
            // 0x46ffa0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46FFA4u;
        goto label_46ffa4;
    }
    ctx->pc = 0x46FF9Cu;
    SET_GPR_U32(ctx, 31, 0x46FFA4u);
    ctx->pc = 0x46FFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46FF9Cu;
            // 0x46ffa0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FFA4u; }
        if (ctx->pc != 0x46FFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FFA4u; }
        if (ctx->pc != 0x46FFA4u) { return; }
    }
    ctx->pc = 0x46FFA4u;
label_46ffa4:
    // 0x46ffa4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x46ffa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46ffa8:
    // 0x46ffa8: 0x10c0ff6c  beqz        $a2, . + 4 + (-0x94 << 2)
label_46ffac:
    if (ctx->pc == 0x46FFACu) {
        ctx->pc = 0x46FFB0u;
        goto label_46ffb0;
    }
    ctx->pc = 0x46FFA8u;
    {
        const bool branch_taken_0x46ffa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ffa8) {
            ctx->pc = 0x46FD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46fd5c;
        }
    }
    ctx->pc = 0x46FFB0u;
label_46ffb0:
    // 0x46ffb0: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x46ffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_46ffb4:
    // 0x46ffb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46ffb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ffb8:
    // 0x46ffb8: 0x24c60820  addiu       $a2, $a2, 0x820
    ctx->pc = 0x46ffb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
label_46ffbc:
    // 0x46ffbc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x46ffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46ffc0:
    // 0x46ffc0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x46ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_46ffc4:
    // 0x46ffc4: 0x0  nop
    ctx->pc = 0x46ffc4u;
    // NOP
label_46ffc8:
    // 0x46ffc8: 0x90a20070  lbu         $v0, 0x70($a1)
    ctx->pc = 0x46ffc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
label_46ffcc:
    // 0x46ffcc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_46ffd0:
    if (ctx->pc == 0x46FFD0u) {
        ctx->pc = 0x46FFD4u;
        goto label_46ffd4;
    }
    ctx->pc = 0x46FFCCu;
    {
        const bool branch_taken_0x46ffcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ffcc) {
            ctx->pc = 0x470008u;
            goto label_470008;
        }
    }
    ctx->pc = 0x46FFD4u;
label_46ffd4:
    // 0x46ffd4: 0x10f2000c  beq         $a3, $s2, . + 4 + (0xC << 2)
label_46ffd8:
    if (ctx->pc == 0x46FFD8u) {
        ctx->pc = 0x46FFDCu;
        goto label_46ffdc;
    }
    ctx->pc = 0x46FFD4u;
    {
        const bool branch_taken_0x46ffd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 18));
        if (branch_taken_0x46ffd4) {
            ctx->pc = 0x470008u;
            goto label_470008;
        }
    }
    ctx->pc = 0x46FFDCu;
label_46ffdc:
    // 0x46ffdc: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x46ffdcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_46ffe0:
    // 0x46ffe0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x46ffe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_46ffe4:
    // 0x46ffe4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x46ffe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_46ffe8:
    // 0x46ffe8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x46ffe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_46ffec:
    // 0x46ffec: 0x1044ff5b  beq         $v0, $a0, . + 4 + (-0xA5 << 2)
label_46fff0:
    if (ctx->pc == 0x46FFF0u) {
        ctx->pc = 0x46FFF4u;
        goto label_46fff4;
    }
    ctx->pc = 0x46FFECu;
    {
        const bool branch_taken_0x46ffec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x46ffec) {
            ctx->pc = 0x46FD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46fd5c;
        }
    }
    ctx->pc = 0x46FFF4u;
label_46fff4:
    // 0x46fff4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_46fff8:
    if (ctx->pc == 0x46FFF8u) {
        ctx->pc = 0x46FFFCu;
        goto label_46fffc;
    }
    ctx->pc = 0x46FFF4u;
    {
        const bool branch_taken_0x46fff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x46fff4) {
            ctx->pc = 0x470008u;
            goto label_470008;
        }
    }
    ctx->pc = 0x46FFFCu;
label_46fffc:
    // 0x46fffc: 0x1040ff57  beqz        $v0, . + 4 + (-0xA9 << 2)
label_470000:
    if (ctx->pc == 0x470000u) {
        ctx->pc = 0x470004u;
        goto label_470004;
    }
    ctx->pc = 0x46FFFCu;
    {
        const bool branch_taken_0x46fffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fffc) {
            ctx->pc = 0x46FD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46fd5c;
        }
    }
    ctx->pc = 0x470004u;
label_470004:
    // 0x470004: 0x0  nop
    ctx->pc = 0x470004u;
    // NOP
label_470008:
    // 0x470008: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x470008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_47000c:
    // 0x47000c: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x47000cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_470010:
    // 0x470010: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x470010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_470014:
    // 0x470014: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_470018:
    if (ctx->pc == 0x470018u) {
        ctx->pc = 0x470018u;
            // 0x470018: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->pc = 0x47001Cu;
        goto label_47001c;
    }
    ctx->pc = 0x470014u;
    {
        const bool branch_taken_0x470014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470014u;
            // 0x470018: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470014) {
            ctx->pc = 0x46FFC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46ffc8;
        }
    }
    ctx->pc = 0x47001Cu;
label_47001c:
    // 0x47001c: 0x0  nop
    ctx->pc = 0x47001cu;
    // NOP
label_470020:
    // 0x470020: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x470020u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_470024:
    // 0x470024: 0x93a200ac  lbu         $v0, 0xAC($sp)
    ctx->pc = 0x470024u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
label_470028:
    // 0x470028: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x470028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_47002c:
    // 0x47002c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x47002cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_470030:
    // 0x470030: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_470034:
    if (ctx->pc == 0x470034u) {
        ctx->pc = 0x470038u;
        goto label_470038;
    }
    ctx->pc = 0x470030u;
    {
        const bool branch_taken_0x470030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x470030) {
            ctx->pc = 0x4700C0u;
            goto label_4700c0;
        }
    }
    ctx->pc = 0x470038u;
label_470038:
    // 0x470038: 0xc073234  jal         func_1CC8D0
label_47003c:
    if (ctx->pc == 0x47003Cu) {
        ctx->pc = 0x47003Cu;
            // 0x47003c: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x470040u;
        goto label_470040;
    }
    ctx->pc = 0x470038u;
    SET_GPR_U32(ctx, 31, 0x470040u);
    ctx->pc = 0x47003Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470038u;
            // 0x47003c: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470040u; }
        if (ctx->pc != 0x470040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470040u; }
        if (ctx->pc != 0x470040u) { return; }
    }
    ctx->pc = 0x470040u;
label_470040:
    // 0x470040: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x470040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_470044:
    // 0x470044: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x470044u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_470048:
    // 0x470048: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x470048u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_47004c:
    // 0x47004c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x47004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_470050:
    // 0x470050: 0x2b080  sll         $s6, $v0, 2
    ctx->pc = 0x470050u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_470054:
    // 0x470054: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x470054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_470058:
    // 0x470058: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x470058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_47005c:
    // 0x47005c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470060:
    // 0x470060: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x470060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_470064:
    // 0x470064: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x470064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_470068:
    // 0x470068: 0x320f809  jalr        $t9
label_47006c:
    if (ctx->pc == 0x47006Cu) {
        ctx->pc = 0x47006Cu;
            // 0x47006c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470070u;
        goto label_470070;
    }
    ctx->pc = 0x470068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x470070u);
        ctx->pc = 0x47006Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470068u;
            // 0x47006c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x470070u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x470070u; }
            if (ctx->pc != 0x470070u) { return; }
        }
        }
    }
    ctx->pc = 0x470070u;
label_470070:
    // 0x470070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x470070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470074:
    // 0x470074: 0xa282007c  sb          $v0, 0x7C($s4)
    ctx->pc = 0x470074u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 2));
label_470078:
    // 0x470078: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x470078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_47007c:
    // 0x47007c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x47007cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_470080:
    // 0x470080: 0xc123848  jal         func_48E120
label_470084:
    if (ctx->pc == 0x470084u) {
        ctx->pc = 0x470084u;
            // 0x470084: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x470088u;
        goto label_470088;
    }
    ctx->pc = 0x470080u;
    SET_GPR_U32(ctx, 31, 0x470088u);
    ctx->pc = 0x470084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470080u;
            // 0x470084: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470088u; }
        if (ctx->pc != 0x470088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470088u; }
        if (ctx->pc != 0x470088u) { return; }
    }
    ctx->pc = 0x470088u;
label_470088:
    // 0x470088: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x470088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_47008c:
    // 0x47008c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x47008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_470090:
    // 0x470090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x470090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470094:
    // 0x470094: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x470094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_470098:
    // 0x470098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x470098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47009c:
    // 0x47009c: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x47009cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_4700a0:
    // 0x4700a0: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x4700a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_4700a4:
    // 0x4700a4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4700a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4700a8:
    // 0x4700a8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x4700a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4700ac:
    // 0x4700ac: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x4700acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_4700b0:
    // 0x4700b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4700b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4700b4:
    // 0x4700b4: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x4700b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_4700b8:
    // 0x4700b8: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x4700b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_4700bc:
    // 0x4700bc: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x4700bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_4700c0:
    // 0x4700c0: 0x56600220  bnel        $s3, $zero, . + 4 + (0x220 << 2)
label_4700c4:
    if (ctx->pc == 0x4700C4u) {
        ctx->pc = 0x4700C4u;
            // 0x4700c4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4700C8u;
        goto label_4700c8;
    }
    ctx->pc = 0x4700C0u;
    {
        const bool branch_taken_0x4700c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4700c0) {
            ctx->pc = 0x4700C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4700C0u;
            // 0x4700c4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x470944u;
            goto label_470944;
        }
    }
    ctx->pc = 0x4700C8u;
label_4700c8:
    // 0x4700c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4700c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4700cc:
    // 0x4700cc: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x4700ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
label_4700d0:
    // 0x4700d0: 0x57f021  addu        $fp, $v0, $s7
    ctx->pc = 0x4700d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_4700d4:
    // 0x4700d4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4700d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4700d8:
    // 0x4700d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4700d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4700dc:
    // 0x4700dc: 0x504001d9  beql        $v0, $zero, . + 4 + (0x1D9 << 2)
label_4700e0:
    if (ctx->pc == 0x4700E0u) {
        ctx->pc = 0x4700E0u;
            // 0x4700e0: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->pc = 0x4700E4u;
        goto label_4700e4;
    }
    ctx->pc = 0x4700DCu;
    {
        const bool branch_taken_0x4700dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4700dc) {
            ctx->pc = 0x4700E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4700DCu;
            // 0x4700e0: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x470844u;
            goto label_470844;
        }
    }
    ctx->pc = 0x4700E4u;
label_4700e4:
    // 0x4700e4: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x4700e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4700e8:
    // 0x4700e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4700e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4700ec:
    // 0x4700ec: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_4700f0:
    if (ctx->pc == 0x4700F0u) {
        ctx->pc = 0x4700F0u;
            // 0x4700f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4700F4u;
        goto label_4700f4;
    }
    ctx->pc = 0x4700ECu;
    {
        const bool branch_taken_0x4700ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4700ec) {
            ctx->pc = 0x4700F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4700ECu;
            // 0x4700f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4701A4u;
            goto label_4701a4;
        }
    }
    ctx->pc = 0x4700F4u;
label_4700f4:
    // 0x4700f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4700f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4700f8:
    // 0x4700f8: 0x26420099  addiu       $v0, $s2, 0x99
    ctx->pc = 0x4700f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 153));
label_4700fc:
    // 0x4700fc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x4700fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_470100:
    // 0x470100: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x470100u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_470104:
    // 0x470104: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x470104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_470108:
    // 0x470108: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x470108u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47010c:
    // 0x47010c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x47010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_470110:
    // 0x470110: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x470110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_470114:
    // 0x470114: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x470114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470118:
    // 0x470118: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x470118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47011c:
    // 0x47011c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x47011cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_470120:
    // 0x470120: 0x320f809  jalr        $t9
label_470124:
    if (ctx->pc == 0x470124u) {
        ctx->pc = 0x470124u;
            // 0x470124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470128u;
        goto label_470128;
    }
    ctx->pc = 0x470120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x470128u);
        ctx->pc = 0x470124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470120u;
            // 0x470124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x470128u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x470128u; }
            if (ctx->pc != 0x470128u) { return; }
        }
        }
    }
    ctx->pc = 0x470128u;
label_470128:
    // 0x470128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x470128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47012c:
    // 0x47012c: 0xa262007c  sb          $v0, 0x7C($s3)
    ctx->pc = 0x47012cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 124), (uint8_t)GPR_U32(ctx, 2));
label_470130:
    // 0x470130: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x470130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_470134:
    // 0x470134: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x470134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_470138:
    // 0x470138: 0xc123848  jal         func_48E120
label_47013c:
    if (ctx->pc == 0x47013Cu) {
        ctx->pc = 0x47013Cu;
            // 0x47013c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x470140u;
        goto label_470140;
    }
    ctx->pc = 0x470138u;
    SET_GPR_U32(ctx, 31, 0x470140u);
    ctx->pc = 0x47013Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470138u;
            // 0x47013c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470140u; }
        if (ctx->pc != 0x470140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470140u; }
        if (ctx->pc != 0x470140u) { return; }
    }
    ctx->pc = 0x470140u;
label_470140:
    // 0x470140: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x470140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_470144:
    // 0x470144: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x470144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_470148:
    // 0x470148: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x470148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47014c:
    // 0x47014c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x47014cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_470150:
    // 0x470150: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x470150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_470154:
    // 0x470154: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x470154u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_470158:
    // 0x470158: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x470158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_47015c:
    // 0x47015c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x47015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_470160:
    // 0x470160: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x470160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_470164:
    // 0x470164: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x470164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_470168:
    // 0x470168: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x470168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47016c:
    // 0x47016c: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x47016cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_470170:
    // 0x470170: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x470170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_470174:
    // 0x470174: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_470178:
    if (ctx->pc == 0x470178u) {
        ctx->pc = 0x470178u;
            // 0x470178: 0xae040018  sw          $a0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
        ctx->pc = 0x47017Cu;
        goto label_47017c;
    }
    ctx->pc = 0x470174u;
    {
        const bool branch_taken_0x470174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x470174) {
            ctx->pc = 0x470178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x470174u;
            // 0x470178: 0xae040018  sw          $a0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4701ACu;
            goto label_4701ac;
        }
    }
    ctx->pc = 0x47017Cu;
label_47017c:
    // 0x47017c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x47017cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_470180:
    // 0x470180: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_470184:
    if (ctx->pc == 0x470184u) {
        ctx->pc = 0x470184u;
            // 0x470184: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x470188u;
        goto label_470188;
    }
    ctx->pc = 0x470180u;
    {
        const bool branch_taken_0x470180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x470180) {
            ctx->pc = 0x470184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x470180u;
            // 0x470184: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4701ACu;
            goto label_4701ac;
        }
    }
    ctx->pc = 0x470188u;
label_470188:
    // 0x470188: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_47018c:
    if (ctx->pc == 0x47018Cu) {
        ctx->pc = 0x470190u;
        goto label_470190;
    }
    ctx->pc = 0x470188u;
    {
        const bool branch_taken_0x470188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x470188) {
            ctx->pc = 0x470198u;
            goto label_470198;
        }
    }
    ctx->pc = 0x470190u;
label_470190:
    // 0x470190: 0x10000006  b           . + 4 + (0x6 << 2)
label_470194:
    if (ctx->pc == 0x470194u) {
        ctx->pc = 0x470198u;
        goto label_470198;
    }
    ctx->pc = 0x470190u;
    {
        const bool branch_taken_0x470190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x470190) {
            ctx->pc = 0x4701ACu;
            goto label_4701ac;
        }
    }
    ctx->pc = 0x470198u;
label_470198:
    // 0x470198: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x470198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_47019c:
    // 0x47019c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4701a0:
    if (ctx->pc == 0x4701A0u) {
        ctx->pc = 0x4701A4u;
        goto label_4701a4;
    }
    ctx->pc = 0x47019Cu;
    {
        const bool branch_taken_0x47019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47019c) {
            ctx->pc = 0x4701ACu;
            goto label_4701ac;
        }
    }
    ctx->pc = 0x4701A4u;
label_4701a4:
    // 0x4701a4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x4701a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_4701a8:
    // 0x4701a8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x4701a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_4701ac:
    // 0x4701ac: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x4701acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_4701b0:
    // 0x4701b0: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x4701b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_4701b4:
    // 0x4701b4: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x4701b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4701b8:
    // 0x4701b8: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x4701b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4701bc:
    // 0x4701bc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4701bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4701c0:
    // 0x4701c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4701c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4701c4:
    // 0x4701c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4701c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4701c8:
    // 0x4701c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4701c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4701cc:
    // 0x4701cc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4701ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4701d0:
    // 0x4701d0: 0x320f809  jalr        $t9
label_4701d4:
    if (ctx->pc == 0x4701D4u) {
        ctx->pc = 0x4701D4u;
            // 0x4701d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4701D8u;
        goto label_4701d8;
    }
    ctx->pc = 0x4701D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4701D8u);
        ctx->pc = 0x4701D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4701D0u;
            // 0x4701d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4701D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4701D8u; }
            if (ctx->pc != 0x4701D8u) { return; }
        }
        }
    }
    ctx->pc = 0x4701D8u;
label_4701d8:
    // 0x4701d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4701d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4701dc:
    // 0x4701dc: 0xa262007c  sb          $v0, 0x7C($s3)
    ctx->pc = 0x4701dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 124), (uint8_t)GPR_U32(ctx, 2));
label_4701e0:
    // 0x4701e0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4701e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4701e4:
    // 0x4701e4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4701e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4701e8:
    // 0x4701e8: 0xc123848  jal         func_48E120
label_4701ec:
    if (ctx->pc == 0x4701ECu) {
        ctx->pc = 0x4701ECu;
            // 0x4701ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4701F0u;
        goto label_4701f0;
    }
    ctx->pc = 0x4701E8u;
    SET_GPR_U32(ctx, 31, 0x4701F0u);
    ctx->pc = 0x4701ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4701E8u;
            // 0x4701ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4701F0u; }
        if (ctx->pc != 0x4701F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4701F0u; }
        if (ctx->pc != 0x4701F0u) { return; }
    }
    ctx->pc = 0x4701F0u;
label_4701f0:
    // 0x4701f0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4701f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4701f4:
    // 0x4701f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4701f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4701f8:
    // 0x4701f8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4701f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4701fc:
    // 0x4701fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4701fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470200:
    // 0x470200: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x470200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_470204:
    // 0x470204: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x470204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_470208:
    // 0x470208: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x470208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47020c:
    // 0x47020c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x47020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_470210:
    // 0x470210: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x470210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_470214:
    // 0x470214: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x470214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470218:
    // 0x470218: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x470218u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_47021c:
    // 0x47021c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x47021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_470220:
    // 0x470220: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x470220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_470224:
    // 0x470224: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_470228:
    if (ctx->pc == 0x470228u) {
        ctx->pc = 0x470228u;
            // 0x470228: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x47022Cu;
        goto label_47022c;
    }
    ctx->pc = 0x470224u;
    {
        const bool branch_taken_0x470224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470224) {
            ctx->pc = 0x470228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x470224u;
            // 0x470228: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4702F0u;
            goto label_4702f0;
        }
    }
    ctx->pc = 0x47022Cu;
label_47022c:
    // 0x47022c: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x47022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_470230:
    // 0x470230: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x470230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_470234:
    // 0x470234: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x470234u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_470238:
    // 0x470238: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x470238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47023c:
    // 0x47023c: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x47023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_470240:
    // 0x470240: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x470240u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_470244:
    // 0x470244: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x470244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_470248:
    // 0x470248: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x470248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_47024c:
    // 0x47024c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47024cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470250:
    // 0x470250: 0xc12512c  jal         func_4944B0
label_470254:
    if (ctx->pc == 0x470254u) {
        ctx->pc = 0x470254u;
            // 0x470254: 0x24a5f1e0  addiu       $a1, $a1, -0xE20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963680));
        ctx->pc = 0x470258u;
        goto label_470258;
    }
    ctx->pc = 0x470250u;
    SET_GPR_U32(ctx, 31, 0x470258u);
    ctx->pc = 0x470254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470250u;
            // 0x470254: 0x24a5f1e0  addiu       $a1, $a1, -0xE20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470258u; }
        if (ctx->pc != 0x470258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470258u; }
        if (ctx->pc != 0x470258u) { return; }
    }
    ctx->pc = 0x470258u;
label_470258:
    // 0x470258: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x470258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47025c:
    // 0x47025c: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x47025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_470260:
    // 0x470260: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x470260u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_470264:
    // 0x470264: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x470264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_470268:
    // 0x470268: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x470268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_47026c:
    // 0x47026c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470270:
    // 0x470270: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x470270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_470274:
    // 0x470274: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x470274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_470278:
    // 0x470278: 0x320f809  jalr        $t9
label_47027c:
    if (ctx->pc == 0x47027Cu) {
        ctx->pc = 0x470280u;
        goto label_470280;
    }
    ctx->pc = 0x470278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x470280u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x470280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x470280u; }
            if (ctx->pc != 0x470280u) { return; }
        }
        }
    }
    ctx->pc = 0x470280u;
label_470280:
    // 0x470280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x470280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470284:
    // 0x470284: 0xa282007c  sb          $v0, 0x7C($s4)
    ctx->pc = 0x470284u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 2));
label_470288:
    // 0x470288: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x470288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_47028c:
    // 0x47028c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x47028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_470290:
    // 0x470290: 0xc123848  jal         func_48E120
label_470294:
    if (ctx->pc == 0x470294u) {
        ctx->pc = 0x470294u;
            // 0x470294: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x470298u;
        goto label_470298;
    }
    ctx->pc = 0x470290u;
    SET_GPR_U32(ctx, 31, 0x470298u);
    ctx->pc = 0x470294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470290u;
            // 0x470294: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470298u; }
        if (ctx->pc != 0x470298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470298u; }
        if (ctx->pc != 0x470298u) { return; }
    }
    ctx->pc = 0x470298u;
label_470298:
    // 0x470298: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x470298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_47029c:
    // 0x47029c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4702a0:
    // 0x4702a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4702a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4702a4:
    // 0x4702a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4702a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4702a8:
    // 0x4702a8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4702a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4702ac:
    // 0x4702ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4702acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4702b0:
    // 0x4702b0: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x4702b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_4702b4:
    // 0x4702b4: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x4702b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_4702b8:
    // 0x4702b8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x4702b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_4702bc:
    // 0x4702bc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4702bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4702c0:
    // 0x4702c0: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x4702c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_4702c4:
    // 0x4702c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4702c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4702c8:
    // 0x4702c8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4702c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4702cc:
    // 0x4702cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4702ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4702d0:
    // 0x4702d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4702d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4702d4:
    // 0x4702d4: 0xa4450046  sh          $a1, 0x46($v0)
    ctx->pc = 0x4702d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 5));
label_4702d8:
    // 0x4702d8: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x4702d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_4702dc:
    // 0x4702dc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x4702dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_4702e0:
    // 0x4702e0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4702e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4702e4:
    // 0x4702e4: 0xc12326c  jal         func_48C9B0
label_4702e8:
    if (ctx->pc == 0x4702E8u) {
        ctx->pc = 0x4702E8u;
            // 0x4702e8: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x4702ECu;
        goto label_4702ec;
    }
    ctx->pc = 0x4702E4u;
    SET_GPR_U32(ctx, 31, 0x4702ECu);
    ctx->pc = 0x4702E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4702E4u;
            // 0x4702e8: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4702ECu; }
        if (ctx->pc != 0x4702ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4702ECu; }
        if (ctx->pc != 0x4702ECu) { return; }
    }
    ctx->pc = 0x4702ECu;
label_4702ec:
    // 0x4702ec: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x4702ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4702f0:
    // 0x4702f0: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4702f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_4702f4:
    // 0x4702f4: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
label_4702f8:
    if (ctx->pc == 0x4702F8u) {
        ctx->pc = 0x4702FCu;
        goto label_4702fc;
    }
    ctx->pc = 0x4702F4u;
    {
        const bool branch_taken_0x4702f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4702f4) {
            ctx->pc = 0x470520u;
            goto label_470520;
        }
    }
    ctx->pc = 0x4702FCu;
label_4702fc:
    // 0x4702fc: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x4702fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_470300:
    // 0x470300: 0xc11bb74  jal         func_46EDD0
label_470304:
    if (ctx->pc == 0x470304u) {
        ctx->pc = 0x470304u;
            // 0x470304: 0x8e140018  lw          $s4, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x470308u;
        goto label_470308;
    }
    ctx->pc = 0x470300u;
    SET_GPR_U32(ctx, 31, 0x470308u);
    ctx->pc = 0x470304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470300u;
            // 0x470304: 0x8e140018  lw          $s4, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470308u; }
        if (ctx->pc != 0x470308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470308u; }
        if (ctx->pc != 0x470308u) { return; }
    }
    ctx->pc = 0x470308u;
label_470308:
    // 0x470308: 0xc11bb70  jal         func_46EDC0
label_47030c:
    if (ctx->pc == 0x47030Cu) {
        ctx->pc = 0x47030Cu;
            // 0x47030c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470310u;
        goto label_470310;
    }
    ctx->pc = 0x470308u;
    SET_GPR_U32(ctx, 31, 0x470310u);
    ctx->pc = 0x47030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470308u;
            // 0x47030c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470310u; }
        if (ctx->pc != 0x470310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470310u; }
        if (ctx->pc != 0x470310u) { return; }
    }
    ctx->pc = 0x470310u;
label_470310:
    // 0x470310: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x470310u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470314:
    // 0x470314: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x470314u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_470318:
    // 0x470318: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x470318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
label_47031c:
    // 0x47031c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_470320:
    if (ctx->pc == 0x470320u) {
        ctx->pc = 0x470320u;
            // 0x470320: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->pc = 0x470324u;
        goto label_470324;
    }
    ctx->pc = 0x47031Cu;
    {
        const bool branch_taken_0x47031c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47031c) {
            ctx->pc = 0x470320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47031Cu;
            // 0x470320: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47032Cu;
            goto label_47032c;
        }
    }
    ctx->pc = 0x470324u;
label_470324:
    // 0x470324: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x470324u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_470328:
    // 0x470328: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x470328u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_47032c:
    // 0x47032c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47032cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_470330:
    // 0x470330: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x470330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_470334:
    // 0x470334: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x470334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_470338:
    // 0x470338: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x470338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_47033c:
    // 0x47033c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x47033cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_470340:
    // 0x470340: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x470340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_470344:
    // 0x470344: 0xc11bb6c  jal         func_46EDB0
label_470348:
    if (ctx->pc == 0x470348u) {
        ctx->pc = 0x470348u;
            // 0x470348: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x47034Cu;
        goto label_47034c;
    }
    ctx->pc = 0x470344u;
    SET_GPR_U32(ctx, 31, 0x47034Cu);
    ctx->pc = 0x470348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470344u;
            // 0x470348: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDB0u;
    if (runtime->hasFunction(0x46EDB0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47034Cu; }
        if (ctx->pc != 0x47034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDB0_0x46edb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47034Cu; }
        if (ctx->pc != 0x47034Cu) { return; }
    }
    ctx->pc = 0x47034Cu;
label_47034c:
    // 0x47034c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x47034cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_470350:
    // 0x470350: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x470350u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470354:
    // 0x470354: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x470354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_470358:
    // 0x470358: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_47035c:
    if (ctx->pc == 0x47035Cu) {
        ctx->pc = 0x470360u;
        goto label_470360;
    }
    ctx->pc = 0x470358u;
    {
        const bool branch_taken_0x470358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x470358) {
            ctx->pc = 0x470380u;
            goto label_470380;
        }
    }
    ctx->pc = 0x470360u;
label_470360:
    // 0x470360: 0xc0775b0  jal         func_1DD6C0
label_470364:
    if (ctx->pc == 0x470364u) {
        ctx->pc = 0x470368u;
        goto label_470368;
    }
    ctx->pc = 0x470360u;
    SET_GPR_U32(ctx, 31, 0x470368u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470368u; }
        if (ctx->pc != 0x470368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470368u; }
        if (ctx->pc != 0x470368u) { return; }
    }
    ctx->pc = 0x470368u;
label_470368:
    // 0x470368: 0xc11bb68  jal         func_46EDA0
label_47036c:
    if (ctx->pc == 0x47036Cu) {
        ctx->pc = 0x47036Cu;
            // 0x47036c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470370u;
        goto label_470370;
    }
    ctx->pc = 0x470368u;
    SET_GPR_U32(ctx, 31, 0x470370u);
    ctx->pc = 0x47036Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470368u;
            // 0x47036c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDA0u;
    if (runtime->hasFunction(0x46EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470370u; }
        if (ctx->pc != 0x470370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDA0_0x46eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470370u; }
        if (ctx->pc != 0x470370u) { return; }
    }
    ctx->pc = 0x470370u;
label_470370:
    // 0x470370: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x470370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_470374:
    // 0x470374: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_470378:
    if (ctx->pc == 0x470378u) {
        ctx->pc = 0x47037Cu;
        goto label_47037c;
    }
    ctx->pc = 0x470374u;
    {
        const bool branch_taken_0x470374 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x470374) {
            ctx->pc = 0x470380u;
            goto label_470380;
        }
    }
    ctx->pc = 0x47037Cu;
label_47037c:
    // 0x47037c: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x47037cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_470380:
    // 0x470380: 0x12c0005d  beqz        $s6, . + 4 + (0x5D << 2)
label_470384:
    if (ctx->pc == 0x470384u) {
        ctx->pc = 0x470388u;
        goto label_470388;
    }
    ctx->pc = 0x470380u;
    {
        const bool branch_taken_0x470380 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x470380) {
            ctx->pc = 0x4704F8u;
            goto label_4704f8;
        }
    }
    ctx->pc = 0x470388u;
label_470388:
    // 0x470388: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x470388u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_47038c:
    // 0x47038c: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x47038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_470390:
    // 0x470390: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_470394:
    if (ctx->pc == 0x470394u) {
        ctx->pc = 0x470398u;
        goto label_470398;
    }
    ctx->pc = 0x470390u;
    {
        const bool branch_taken_0x470390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x470390) {
            ctx->pc = 0x4703E8u;
            goto label_4703e8;
        }
    }
    ctx->pc = 0x470398u;
label_470398:
    // 0x470398: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x470398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_47039c:
    // 0x47039c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47039cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4703a0:
    // 0x4703a0: 0x24c60820  addiu       $a2, $a2, 0x820
    ctx->pc = 0x4703a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
label_4703a4:
    // 0x4703a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4703a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4703a8:
    // 0x4703a8: 0x90a20070  lbu         $v0, 0x70($a1)
    ctx->pc = 0x4703a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
label_4703ac:
    // 0x4703ac: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x4703acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4703b0:
    // 0x4703b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4703b4:
    if (ctx->pc == 0x4703B4u) {
        ctx->pc = 0x4703B8u;
        goto label_4703b8;
    }
    ctx->pc = 0x4703B0u;
    {
        const bool branch_taken_0x4703b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4703b0) {
            ctx->pc = 0x4703D0u;
            goto label_4703d0;
        }
    }
    ctx->pc = 0x4703B8u;
label_4703b8:
    // 0x4703b8: 0x12260005  beq         $s1, $a2, . + 4 + (0x5 << 2)
label_4703bc:
    if (ctx->pc == 0x4703BCu) {
        ctx->pc = 0x4703C0u;
        goto label_4703c0;
    }
    ctx->pc = 0x4703B8u;
    {
        const bool branch_taken_0x4703b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        if (branch_taken_0x4703b8) {
            ctx->pc = 0x4703D0u;
            goto label_4703d0;
        }
    }
    ctx->pc = 0x4703C0u;
label_4703c0:
    // 0x4703c0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x4703c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_4703c4:
    // 0x4703c4: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
label_4703c8:
    if (ctx->pc == 0x4703C8u) {
        ctx->pc = 0x4703CCu;
        goto label_4703cc;
    }
    ctx->pc = 0x4703C4u;
    {
        const bool branch_taken_0x4703c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4703c4) {
            ctx->pc = 0x4704F8u;
            goto label_4704f8;
        }
    }
    ctx->pc = 0x4703CCu;
label_4703cc:
    // 0x4703cc: 0x0  nop
    ctx->pc = 0x4703ccu;
    // NOP
label_4703d0:
    // 0x4703d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4703d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4703d4:
    // 0x4703d4: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x4703d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_4703d8:
    // 0x4703d8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4703d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4703dc:
    // 0x4703dc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_4703e0:
    if (ctx->pc == 0x4703E0u) {
        ctx->pc = 0x4703E0u;
            // 0x4703e0: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->pc = 0x4703E4u;
        goto label_4703e4;
    }
    ctx->pc = 0x4703DCu;
    {
        const bool branch_taken_0x4703dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4703E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4703DCu;
            // 0x4703e0: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4703dc) {
            ctx->pc = 0x4703A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4703a8;
        }
    }
    ctx->pc = 0x4703E4u;
label_4703e4:
    // 0x4703e4: 0x0  nop
    ctx->pc = 0x4703e4u;
    // NOP
label_4703e8:
    // 0x4703e8: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x4703e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_4703ec:
    // 0x4703ec: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_4703f0:
    if (ctx->pc == 0x4703F0u) {
        ctx->pc = 0x4703F4u;
        goto label_4703f4;
    }
    ctx->pc = 0x4703ECu;
    {
        const bool branch_taken_0x4703ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4703ec) {
            ctx->pc = 0x470418u;
            goto label_470418;
        }
    }
    ctx->pc = 0x4703F4u;
label_4703f4:
    // 0x4703f4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x4703f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4703f8:
    // 0x4703f8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_4703fc:
    if (ctx->pc == 0x4703FCu) {
        ctx->pc = 0x470400u;
        goto label_470400;
    }
    ctx->pc = 0x4703F8u;
    {
        const bool branch_taken_0x4703f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4703f8) {
            ctx->pc = 0x470418u;
            goto label_470418;
        }
    }
    ctx->pc = 0x470400u;
label_470400:
    // 0x470400: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x470400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_470404:
    // 0x470404: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_470408:
    if (ctx->pc == 0x470408u) {
        ctx->pc = 0x47040Cu;
        goto label_47040c;
    }
    ctx->pc = 0x470404u;
    {
        const bool branch_taken_0x470404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x470404) {
            ctx->pc = 0x470418u;
            goto label_470418;
        }
    }
    ctx->pc = 0x47040Cu;
label_47040c:
    // 0x47040c: 0x10000008  b           . + 4 + (0x8 << 2)
label_470410:
    if (ctx->pc == 0x470410u) {
        ctx->pc = 0x470414u;
        goto label_470414;
    }
    ctx->pc = 0x47040Cu;
    {
        const bool branch_taken_0x47040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47040c) {
            ctx->pc = 0x470430u;
            goto label_470430;
        }
    }
    ctx->pc = 0x470414u;
label_470414:
    // 0x470414: 0x0  nop
    ctx->pc = 0x470414u;
    // NOP
label_470418:
    // 0x470418: 0xc0c8f80  jal         func_323E00
label_47041c:
    if (ctx->pc == 0x47041Cu) {
        ctx->pc = 0x47041Cu;
            // 0x47041c: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->pc = 0x470420u;
        goto label_470420;
    }
    ctx->pc = 0x470418u;
    SET_GPR_U32(ctx, 31, 0x470420u);
    ctx->pc = 0x47041Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470418u;
            // 0x47041c: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470420u; }
        if (ctx->pc != 0x470420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470420u; }
        if (ctx->pc != 0x470420u) { return; }
    }
    ctx->pc = 0x470420u;
label_470420:
    // 0x470420: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x470420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_470424:
    // 0x470424: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
label_470428:
    if (ctx->pc == 0x470428u) {
        ctx->pc = 0x47042Cu;
        goto label_47042c;
    }
    ctx->pc = 0x470424u;
    {
        const bool branch_taken_0x470424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x470424) {
            ctx->pc = 0x4704F8u;
            goto label_4704f8;
        }
    }
    ctx->pc = 0x47042Cu;
label_47042c:
    // 0x47042c: 0x0  nop
    ctx->pc = 0x47042cu;
    // NOP
label_470430:
    // 0x470430: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
label_470434:
    if (ctx->pc == 0x470434u) {
        ctx->pc = 0x470438u;
        goto label_470438;
    }
    ctx->pc = 0x470430u;
    {
        const bool branch_taken_0x470430 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x470430) {
            ctx->pc = 0x470460u;
            goto label_470460;
        }
    }
    ctx->pc = 0x470438u;
label_470438:
    // 0x470438: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x470438u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_47043c:
    // 0x47043c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470440:
    // 0x470440: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x470440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_470444:
    // 0x470444: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x470444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_470448:
    // 0x470448: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x470448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_47044c:
    // 0x47044c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x47044cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_470450:
    // 0x470450: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
label_470454:
    if (ctx->pc == 0x470454u) {
        ctx->pc = 0x470458u;
        goto label_470458;
    }
    ctx->pc = 0x470450u;
    {
        const bool branch_taken_0x470450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470450) {
            ctx->pc = 0x470740u;
            goto label_470740;
        }
    }
    ctx->pc = 0x470458u;
label_470458:
    // 0x470458: 0x10000027  b           . + 4 + (0x27 << 2)
label_47045c:
    if (ctx->pc == 0x47045Cu) {
        ctx->pc = 0x470460u;
        goto label_470460;
    }
    ctx->pc = 0x470458u;
    {
        const bool branch_taken_0x470458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x470458) {
            ctx->pc = 0x4704F8u;
            goto label_4704f8;
        }
    }
    ctx->pc = 0x470460u;
label_470460:
    // 0x470460: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x470460u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_470464:
    // 0x470464: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x470464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_470468:
    // 0x470468: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_47046c:
    if (ctx->pc == 0x47046Cu) {
        ctx->pc = 0x470470u;
        goto label_470470;
    }
    ctx->pc = 0x470468u;
    {
        const bool branch_taken_0x470468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x470468) {
            ctx->pc = 0x4704F8u;
            goto label_4704f8;
        }
    }
    ctx->pc = 0x470470u;
label_470470:
    // 0x470470: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x470470u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470474:
    // 0x470474: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x470474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470478:
    // 0x470478: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x470478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47047c:
    // 0x47047c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x47047cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_470480:
    // 0x470480: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x470480u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_470484:
    // 0x470484: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x470484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_470488:
    // 0x470488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x470488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47048c:
    // 0x47048c: 0x0  nop
    ctx->pc = 0x47048cu;
    // NOP
label_470490:
    // 0x470490: 0x15400017  bnez        $t2, . + 4 + (0x17 << 2)
label_470494:
    if (ctx->pc == 0x470494u) {
        ctx->pc = 0x470498u;
        goto label_470498;
    }
    ctx->pc = 0x470490u;
    {
        const bool branch_taken_0x470490 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x470490) {
            ctx->pc = 0x4704F0u;
            goto label_4704f0;
        }
    }
    ctx->pc = 0x470498u;
label_470498:
    // 0x470498: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x470498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_47049c:
    // 0x47049c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x47049cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_4704a0:
    // 0x4704a0: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_4704a4:
    if (ctx->pc == 0x4704A4u) {
        ctx->pc = 0x4704A8u;
        goto label_4704a8;
    }
    ctx->pc = 0x4704A0u;
    {
        const bool branch_taken_0x4704a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4704a0) {
            ctx->pc = 0x4704B0u;
            goto label_4704b0;
        }
    }
    ctx->pc = 0x4704A8u;
label_4704a8:
    // 0x4704a8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x4704a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4704ac:
    // 0x4704ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4704acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4704b0:
    // 0x4704b0: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x4704b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_4704b4:
    // 0x4704b4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4704b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_4704b8:
    // 0x4704b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4704b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4704bc:
    // 0x4704bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4704c0:
    if (ctx->pc == 0x4704C0u) {
        ctx->pc = 0x4704C4u;
        goto label_4704c4;
    }
    ctx->pc = 0x4704BCu;
    {
        const bool branch_taken_0x4704bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4704bc) {
            ctx->pc = 0x4704E0u;
            goto label_4704e0;
        }
    }
    ctx->pc = 0x4704C4u;
label_4704c4:
    // 0x4704c4: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
label_4704c8:
    if (ctx->pc == 0x4704C8u) {
        ctx->pc = 0x4704CCu;
        goto label_4704cc;
    }
    ctx->pc = 0x4704C4u;
    {
        const bool branch_taken_0x4704c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x4704c4) {
            ctx->pc = 0x4704D8u;
            goto label_4704d8;
        }
    }
    ctx->pc = 0x4704CCu;
label_4704cc:
    // 0x4704cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_4704d0:
    if (ctx->pc == 0x4704D0u) {
        ctx->pc = 0x4704D0u;
            // 0x4704d0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4704D4u;
        goto label_4704d4;
    }
    ctx->pc = 0x4704CCu;
    {
        const bool branch_taken_0x4704cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4704D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4704CCu;
            // 0x4704d0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4704cc) {
            ctx->pc = 0x4704F0u;
            goto label_4704f0;
        }
    }
    ctx->pc = 0x4704D4u;
label_4704d4:
    // 0x4704d4: 0x0  nop
    ctx->pc = 0x4704d4u;
    // NOP
label_4704d8:
    // 0x4704d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4704d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4704dc:
    // 0x4704dc: 0x0  nop
    ctx->pc = 0x4704dcu;
    // NOP
label_4704e0:
    // 0x4704e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4704e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4704e4:
    // 0x4704e4: 0x114102b  sltu        $v0, $t0, $s4
    ctx->pc = 0x4704e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4704e8:
    // 0x4704e8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_4704ec:
    if (ctx->pc == 0x4704ECu) {
        ctx->pc = 0x4704ECu;
            // 0x4704ec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x4704F0u;
        goto label_4704f0;
    }
    ctx->pc = 0x4704E8u;
    {
        const bool branch_taken_0x4704e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4704ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4704E8u;
            // 0x4704ec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4704e8) {
            ctx->pc = 0x470490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470490;
        }
    }
    ctx->pc = 0x4704F0u;
label_4704f0:
    // 0x4704f0: 0x15200093  bnez        $t1, . + 4 + (0x93 << 2)
label_4704f4:
    if (ctx->pc == 0x4704F4u) {
        ctx->pc = 0x4704F8u;
        goto label_4704f8;
    }
    ctx->pc = 0x4704F0u;
    {
        const bool branch_taken_0x4704f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x4704f0) {
            ctx->pc = 0x470740u;
            goto label_470740;
        }
    }
    ctx->pc = 0x4704F8u;
label_4704f8:
    // 0x4704f8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x4704f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_4704fc:
    // 0x4704fc: 0x2841003e  slti        $at, $v0, 0x3E
    ctx->pc = 0x4704fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)62) ? 1 : 0);
label_470500:
    // 0x470500: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_470504:
    if (ctx->pc == 0x470504u) {
        ctx->pc = 0x470508u;
        goto label_470508;
    }
    ctx->pc = 0x470500u;
    {
        const bool branch_taken_0x470500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x470500) {
            ctx->pc = 0x470518u;
            goto label_470518;
        }
    }
    ctx->pc = 0x470508u;
label_470508:
    // 0x470508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x470508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_47050c:
    // 0x47050c: 0x1000ff86  b           . + 4 + (-0x7A << 2)
label_470510:
    if (ctx->pc == 0x470510u) {
        ctx->pc = 0x470510u;
            // 0x470510: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x470514u;
        goto label_470514;
    }
    ctx->pc = 0x47050Cu;
    {
        const bool branch_taken_0x47050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47050Cu;
            // 0x470510: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47050c) {
            ctx->pc = 0x470328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470328;
        }
    }
    ctx->pc = 0x470514u;
label_470514:
    // 0x470514: 0x0  nop
    ctx->pc = 0x470514u;
    // NOP
label_470518:
    // 0x470518: 0x1000ff83  b           . + 4 + (-0x7D << 2)
label_47051c:
    if (ctx->pc == 0x47051Cu) {
        ctx->pc = 0x47051Cu;
            // 0x47051c: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x470520u;
        goto label_470520;
    }
    ctx->pc = 0x470518u;
    {
        const bool branch_taken_0x470518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47051Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470518u;
            // 0x47051c: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470518) {
            ctx->pc = 0x470328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470328;
        }
    }
    ctx->pc = 0x470520u;
label_470520:
    // 0x470520: 0xc11bb74  jal         func_46EDD0
label_470524:
    if (ctx->pc == 0x470524u) {
        ctx->pc = 0x470524u;
            // 0x470524: 0x8e140018  lw          $s4, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x470528u;
        goto label_470528;
    }
    ctx->pc = 0x470520u;
    SET_GPR_U32(ctx, 31, 0x470528u);
    ctx->pc = 0x470524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470520u;
            // 0x470524: 0x8e140018  lw          $s4, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470528u; }
        if (ctx->pc != 0x470528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470528u; }
        if (ctx->pc != 0x470528u) { return; }
    }
    ctx->pc = 0x470528u;
label_470528:
    // 0x470528: 0xc11bb70  jal         func_46EDC0
label_47052c:
    if (ctx->pc == 0x47052Cu) {
        ctx->pc = 0x47052Cu;
            // 0x47052c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470530u;
        goto label_470530;
    }
    ctx->pc = 0x470528u;
    SET_GPR_U32(ctx, 31, 0x470530u);
    ctx->pc = 0x47052Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470528u;
            // 0x47052c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470530u; }
        if (ctx->pc != 0x470530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470530u; }
        if (ctx->pc != 0x470530u) { return; }
    }
    ctx->pc = 0x470530u;
label_470530:
    // 0x470530: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x470530u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470534:
    // 0x470534: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x470534u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_470538:
    // 0x470538: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x470538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
label_47053c:
    // 0x47053c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_470540:
    if (ctx->pc == 0x470540u) {
        ctx->pc = 0x470540u;
            // 0x470540: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->pc = 0x470544u;
        goto label_470544;
    }
    ctx->pc = 0x47053Cu;
    {
        const bool branch_taken_0x47053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47053c) {
            ctx->pc = 0x470540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47053Cu;
            // 0x470540: 0x92250001  lbu         $a1, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47054Cu;
            goto label_47054c;
        }
    }
    ctx->pc = 0x470544u;
label_470544:
    // 0x470544: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x470544u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_470548:
    // 0x470548: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x470548u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_47054c:
    // 0x47054c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47054cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_470550:
    // 0x470550: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x470550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_470554:
    // 0x470554: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x470554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_470558:
    // 0x470558: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x470558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_47055c:
    // 0x47055c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x47055cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_470560:
    // 0x470560: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x470560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_470564:
    // 0x470564: 0xc11bb6c  jal         func_46EDB0
label_470568:
    if (ctx->pc == 0x470568u) {
        ctx->pc = 0x470568u;
            // 0x470568: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x47056Cu;
        goto label_47056c;
    }
    ctx->pc = 0x470564u;
    SET_GPR_U32(ctx, 31, 0x47056Cu);
    ctx->pc = 0x470568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470564u;
            // 0x470568: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDB0u;
    if (runtime->hasFunction(0x46EDB0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47056Cu; }
        if (ctx->pc != 0x47056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDB0_0x46edb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47056Cu; }
        if (ctx->pc != 0x47056Cu) { return; }
    }
    ctx->pc = 0x47056Cu;
label_47056c:
    // 0x47056c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x47056cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_470570:
    // 0x470570: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x470570u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470574:
    // 0x470574: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x470574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_470578:
    // 0x470578: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_47057c:
    if (ctx->pc == 0x47057Cu) {
        ctx->pc = 0x470580u;
        goto label_470580;
    }
    ctx->pc = 0x470578u;
    {
        const bool branch_taken_0x470578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x470578) {
            ctx->pc = 0x4705A0u;
            goto label_4705a0;
        }
    }
    ctx->pc = 0x470580u;
label_470580:
    // 0x470580: 0xc0775b0  jal         func_1DD6C0
label_470584:
    if (ctx->pc == 0x470584u) {
        ctx->pc = 0x470588u;
        goto label_470588;
    }
    ctx->pc = 0x470580u;
    SET_GPR_U32(ctx, 31, 0x470588u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470588u; }
        if (ctx->pc != 0x470588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470588u; }
        if (ctx->pc != 0x470588u) { return; }
    }
    ctx->pc = 0x470588u;
label_470588:
    // 0x470588: 0xc11bb68  jal         func_46EDA0
label_47058c:
    if (ctx->pc == 0x47058Cu) {
        ctx->pc = 0x47058Cu;
            // 0x47058c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x470590u;
        goto label_470590;
    }
    ctx->pc = 0x470588u;
    SET_GPR_U32(ctx, 31, 0x470590u);
    ctx->pc = 0x47058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470588u;
            // 0x47058c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDA0u;
    if (runtime->hasFunction(0x46EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470590u; }
        if (ctx->pc != 0x470590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDA0_0x46eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470590u; }
        if (ctx->pc != 0x470590u) { return; }
    }
    ctx->pc = 0x470590u;
label_470590:
    // 0x470590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x470590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_470594:
    // 0x470594: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_470598:
    if (ctx->pc == 0x470598u) {
        ctx->pc = 0x47059Cu;
        goto label_47059c;
    }
    ctx->pc = 0x470594u;
    {
        const bool branch_taken_0x470594 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x470594) {
            ctx->pc = 0x4705A0u;
            goto label_4705a0;
        }
    }
    ctx->pc = 0x47059Cu;
label_47059c:
    // 0x47059c: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x47059cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4705a0:
    // 0x4705a0: 0x12c0005d  beqz        $s6, . + 4 + (0x5D << 2)
label_4705a4:
    if (ctx->pc == 0x4705A4u) {
        ctx->pc = 0x4705A8u;
        goto label_4705a8;
    }
    ctx->pc = 0x4705A0u;
    {
        const bool branch_taken_0x4705a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4705a0) {
            ctx->pc = 0x470718u;
            goto label_470718;
        }
    }
    ctx->pc = 0x4705A8u;
label_4705a8:
    // 0x4705a8: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x4705a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_4705ac:
    // 0x4705ac: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x4705acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_4705b0:
    // 0x4705b0: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_4705b4:
    if (ctx->pc == 0x4705B4u) {
        ctx->pc = 0x4705B8u;
        goto label_4705b8;
    }
    ctx->pc = 0x4705B0u;
    {
        const bool branch_taken_0x4705b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4705b0) {
            ctx->pc = 0x470608u;
            goto label_470608;
        }
    }
    ctx->pc = 0x4705B8u;
label_4705b8:
    // 0x4705b8: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x4705b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_4705bc:
    // 0x4705bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4705bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4705c0:
    // 0x4705c0: 0x24c60820  addiu       $a2, $a2, 0x820
    ctx->pc = 0x4705c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
label_4705c4:
    // 0x4705c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4705c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4705c8:
    // 0x4705c8: 0x90a20070  lbu         $v0, 0x70($a1)
    ctx->pc = 0x4705c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
label_4705cc:
    // 0x4705cc: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x4705ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4705d0:
    // 0x4705d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4705d4:
    if (ctx->pc == 0x4705D4u) {
        ctx->pc = 0x4705D8u;
        goto label_4705d8;
    }
    ctx->pc = 0x4705D0u;
    {
        const bool branch_taken_0x4705d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4705d0) {
            ctx->pc = 0x4705F0u;
            goto label_4705f0;
        }
    }
    ctx->pc = 0x4705D8u;
label_4705d8:
    // 0x4705d8: 0x12260005  beq         $s1, $a2, . + 4 + (0x5 << 2)
label_4705dc:
    if (ctx->pc == 0x4705DCu) {
        ctx->pc = 0x4705E0u;
        goto label_4705e0;
    }
    ctx->pc = 0x4705D8u;
    {
        const bool branch_taken_0x4705d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        if (branch_taken_0x4705d8) {
            ctx->pc = 0x4705F0u;
            goto label_4705f0;
        }
    }
    ctx->pc = 0x4705E0u;
label_4705e0:
    // 0x4705e0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x4705e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_4705e4:
    // 0x4705e4: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
label_4705e8:
    if (ctx->pc == 0x4705E8u) {
        ctx->pc = 0x4705ECu;
        goto label_4705ec;
    }
    ctx->pc = 0x4705E4u;
    {
        const bool branch_taken_0x4705e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4705e4) {
            ctx->pc = 0x470718u;
            goto label_470718;
        }
    }
    ctx->pc = 0x4705ECu;
label_4705ec:
    // 0x4705ec: 0x0  nop
    ctx->pc = 0x4705ecu;
    // NOP
label_4705f0:
    // 0x4705f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4705f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4705f4:
    // 0x4705f4: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x4705f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_4705f8:
    // 0x4705f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4705f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4705fc:
    // 0x4705fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_470600:
    if (ctx->pc == 0x470600u) {
        ctx->pc = 0x470600u;
            // 0x470600: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->pc = 0x470604u;
        goto label_470604;
    }
    ctx->pc = 0x4705FCu;
    {
        const bool branch_taken_0x4705fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4705FCu;
            // 0x470600: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4705fc) {
            ctx->pc = 0x4705C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4705c8;
        }
    }
    ctx->pc = 0x470604u;
label_470604:
    // 0x470604: 0x0  nop
    ctx->pc = 0x470604u;
    // NOP
label_470608:
    // 0x470608: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x470608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_47060c:
    // 0x47060c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_470610:
    if (ctx->pc == 0x470610u) {
        ctx->pc = 0x470614u;
        goto label_470614;
    }
    ctx->pc = 0x47060Cu;
    {
        const bool branch_taken_0x47060c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x47060c) {
            ctx->pc = 0x470638u;
            goto label_470638;
        }
    }
    ctx->pc = 0x470614u;
label_470614:
    // 0x470614: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x470614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_470618:
    // 0x470618: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_47061c:
    if (ctx->pc == 0x47061Cu) {
        ctx->pc = 0x470620u;
        goto label_470620;
    }
    ctx->pc = 0x470618u;
    {
        const bool branch_taken_0x470618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x470618) {
            ctx->pc = 0x470638u;
            goto label_470638;
        }
    }
    ctx->pc = 0x470620u;
label_470620:
    // 0x470620: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x470620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_470624:
    // 0x470624: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_470628:
    if (ctx->pc == 0x470628u) {
        ctx->pc = 0x47062Cu;
        goto label_47062c;
    }
    ctx->pc = 0x470624u;
    {
        const bool branch_taken_0x470624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x470624) {
            ctx->pc = 0x470638u;
            goto label_470638;
        }
    }
    ctx->pc = 0x47062Cu;
label_47062c:
    // 0x47062c: 0x10000008  b           . + 4 + (0x8 << 2)
label_470630:
    if (ctx->pc == 0x470630u) {
        ctx->pc = 0x470634u;
        goto label_470634;
    }
    ctx->pc = 0x47062Cu;
    {
        const bool branch_taken_0x47062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47062c) {
            ctx->pc = 0x470650u;
            goto label_470650;
        }
    }
    ctx->pc = 0x470634u;
label_470634:
    // 0x470634: 0x0  nop
    ctx->pc = 0x470634u;
    // NOP
label_470638:
    // 0x470638: 0xc0c8f80  jal         func_323E00
label_47063c:
    if (ctx->pc == 0x47063Cu) {
        ctx->pc = 0x47063Cu;
            // 0x47063c: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->pc = 0x470640u;
        goto label_470640;
    }
    ctx->pc = 0x470638u;
    SET_GPR_U32(ctx, 31, 0x470640u);
    ctx->pc = 0x47063Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470638u;
            // 0x47063c: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470640u; }
        if (ctx->pc != 0x470640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470640u; }
        if (ctx->pc != 0x470640u) { return; }
    }
    ctx->pc = 0x470640u;
label_470640:
    // 0x470640: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x470640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_470644:
    // 0x470644: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
label_470648:
    if (ctx->pc == 0x470648u) {
        ctx->pc = 0x47064Cu;
        goto label_47064c;
    }
    ctx->pc = 0x470644u;
    {
        const bool branch_taken_0x470644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x470644) {
            ctx->pc = 0x470718u;
            goto label_470718;
        }
    }
    ctx->pc = 0x47064Cu;
label_47064c:
    // 0x47064c: 0x0  nop
    ctx->pc = 0x47064cu;
    // NOP
label_470650:
    // 0x470650: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
label_470654:
    if (ctx->pc == 0x470654u) {
        ctx->pc = 0x470658u;
        goto label_470658;
    }
    ctx->pc = 0x470650u;
    {
        const bool branch_taken_0x470650 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x470650) {
            ctx->pc = 0x470680u;
            goto label_470680;
        }
    }
    ctx->pc = 0x470658u;
label_470658:
    // 0x470658: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x470658u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_47065c:
    // 0x47065c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47065cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470660:
    // 0x470660: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x470660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_470664:
    // 0x470664: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x470664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_470668:
    // 0x470668: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x470668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_47066c:
    // 0x47066c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x47066cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_470670:
    // 0x470670: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_470674:
    if (ctx->pc == 0x470674u) {
        ctx->pc = 0x470678u;
        goto label_470678;
    }
    ctx->pc = 0x470670u;
    {
        const bool branch_taken_0x470670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470670) {
            ctx->pc = 0x470740u;
            goto label_470740;
        }
    }
    ctx->pc = 0x470678u;
label_470678:
    // 0x470678: 0x10000027  b           . + 4 + (0x27 << 2)
label_47067c:
    if (ctx->pc == 0x47067Cu) {
        ctx->pc = 0x470680u;
        goto label_470680;
    }
    ctx->pc = 0x470678u;
    {
        const bool branch_taken_0x470678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x470678) {
            ctx->pc = 0x470718u;
            goto label_470718;
        }
    }
    ctx->pc = 0x470680u;
label_470680:
    // 0x470680: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x470680u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_470684:
    // 0x470684: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x470684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_470688:
    // 0x470688: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_47068c:
    if (ctx->pc == 0x47068Cu) {
        ctx->pc = 0x470690u;
        goto label_470690;
    }
    ctx->pc = 0x470688u;
    {
        const bool branch_taken_0x470688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x470688) {
            ctx->pc = 0x470718u;
            goto label_470718;
        }
    }
    ctx->pc = 0x470690u;
label_470690:
    // 0x470690: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x470690u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470694:
    // 0x470694: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x470694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470698:
    // 0x470698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x470698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47069c:
    // 0x47069c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x47069cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4706a0:
    // 0x4706a0: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x4706a0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4706a4:
    // 0x4706a4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x4706a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4706a8:
    // 0x4706a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4706a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4706ac:
    // 0x4706ac: 0x0  nop
    ctx->pc = 0x4706acu;
    // NOP
label_4706b0:
    // 0x4706b0: 0x15400017  bnez        $t2, . + 4 + (0x17 << 2)
label_4706b4:
    if (ctx->pc == 0x4706B4u) {
        ctx->pc = 0x4706B8u;
        goto label_4706b8;
    }
    ctx->pc = 0x4706B0u;
    {
        const bool branch_taken_0x4706b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x4706b0) {
            ctx->pc = 0x470710u;
            goto label_470710;
        }
    }
    ctx->pc = 0x4706B8u;
label_4706b8:
    // 0x4706b8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4706b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_4706bc:
    // 0x4706bc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4706bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_4706c0:
    // 0x4706c0: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_4706c4:
    if (ctx->pc == 0x4706C4u) {
        ctx->pc = 0x4706C8u;
        goto label_4706c8;
    }
    ctx->pc = 0x4706C0u;
    {
        const bool branch_taken_0x4706c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4706c0) {
            ctx->pc = 0x4706D0u;
            goto label_4706d0;
        }
    }
    ctx->pc = 0x4706C8u;
label_4706c8:
    // 0x4706c8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x4706c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4706cc:
    // 0x4706cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4706ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4706d0:
    // 0x4706d0: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x4706d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_4706d4:
    // 0x4706d4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4706d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_4706d8:
    // 0x4706d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4706d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4706dc:
    // 0x4706dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4706e0:
    if (ctx->pc == 0x4706E0u) {
        ctx->pc = 0x4706E4u;
        goto label_4706e4;
    }
    ctx->pc = 0x4706DCu;
    {
        const bool branch_taken_0x4706dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4706dc) {
            ctx->pc = 0x470700u;
            goto label_470700;
        }
    }
    ctx->pc = 0x4706E4u;
label_4706e4:
    // 0x4706e4: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
label_4706e8:
    if (ctx->pc == 0x4706E8u) {
        ctx->pc = 0x4706ECu;
        goto label_4706ec;
    }
    ctx->pc = 0x4706E4u;
    {
        const bool branch_taken_0x4706e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x4706e4) {
            ctx->pc = 0x4706F8u;
            goto label_4706f8;
        }
    }
    ctx->pc = 0x4706ECu;
label_4706ec:
    // 0x4706ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_4706f0:
    if (ctx->pc == 0x4706F0u) {
        ctx->pc = 0x4706F0u;
            // 0x4706f0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4706F4u;
        goto label_4706f4;
    }
    ctx->pc = 0x4706ECu;
    {
        const bool branch_taken_0x4706ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4706F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4706ECu;
            // 0x4706f0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4706ec) {
            ctx->pc = 0x470710u;
            goto label_470710;
        }
    }
    ctx->pc = 0x4706F4u;
label_4706f4:
    // 0x4706f4: 0x0  nop
    ctx->pc = 0x4706f4u;
    // NOP
label_4706f8:
    // 0x4706f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4706f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4706fc:
    // 0x4706fc: 0x0  nop
    ctx->pc = 0x4706fcu;
    // NOP
label_470700:
    // 0x470700: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x470700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_470704:
    // 0x470704: 0x114102b  sltu        $v0, $t0, $s4
    ctx->pc = 0x470704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_470708:
    // 0x470708: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_47070c:
    if (ctx->pc == 0x47070Cu) {
        ctx->pc = 0x47070Cu;
            // 0x47070c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x470710u;
        goto label_470710;
    }
    ctx->pc = 0x470708u;
    {
        const bool branch_taken_0x470708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470708u;
            // 0x47070c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470708) {
            ctx->pc = 0x4706B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4706b0;
        }
    }
    ctx->pc = 0x470710u;
label_470710:
    // 0x470710: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
label_470714:
    if (ctx->pc == 0x470714u) {
        ctx->pc = 0x470718u;
        goto label_470718;
    }
    ctx->pc = 0x470710u;
    {
        const bool branch_taken_0x470710 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x470710) {
            ctx->pc = 0x470740u;
            goto label_470740;
        }
    }
    ctx->pc = 0x470718u;
label_470718:
    // 0x470718: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x470718u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_47071c:
    // 0x47071c: 0x2841003e  slti        $at, $v0, 0x3E
    ctx->pc = 0x47071cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)62) ? 1 : 0);
label_470720:
    // 0x470720: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_470724:
    if (ctx->pc == 0x470724u) {
        ctx->pc = 0x470728u;
        goto label_470728;
    }
    ctx->pc = 0x470720u;
    {
        const bool branch_taken_0x470720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x470720) {
            ctx->pc = 0x470738u;
            goto label_470738;
        }
    }
    ctx->pc = 0x470728u;
label_470728:
    // 0x470728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x470728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_47072c:
    // 0x47072c: 0x1000ff86  b           . + 4 + (-0x7A << 2)
label_470730:
    if (ctx->pc == 0x470730u) {
        ctx->pc = 0x470730u;
            // 0x470730: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x470734u;
        goto label_470734;
    }
    ctx->pc = 0x47072Cu;
    {
        const bool branch_taken_0x47072c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47072Cu;
            // 0x470730: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47072c) {
            ctx->pc = 0x470548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470548;
        }
    }
    ctx->pc = 0x470734u;
label_470734:
    // 0x470734: 0x0  nop
    ctx->pc = 0x470734u;
    // NOP
label_470738:
    // 0x470738: 0x1000ff83  b           . + 4 + (-0x7D << 2)
label_47073c:
    if (ctx->pc == 0x47073Cu) {
        ctx->pc = 0x47073Cu;
            // 0x47073c: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x470740u;
        goto label_470740;
    }
    ctx->pc = 0x470738u;
    {
        const bool branch_taken_0x470738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470738u;
            // 0x47073c: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470738) {
            ctx->pc = 0x470548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470548;
        }
    }
    ctx->pc = 0x470740u;
label_470740:
    // 0x470740: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x470740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_470744:
    // 0x470744: 0x8c843e30  lw          $a0, 0x3E30($a0)
    ctx->pc = 0x470744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15920)));
label_470748:
    // 0x470748: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x470748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47074c:
    // 0x47074c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47074cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470750:
    // 0x470750: 0x2484fffd  addiu       $a0, $a0, -0x3
    ctx->pc = 0x470750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
label_470754:
    // 0x470754: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x470754u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_470758:
    // 0x470758: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_47075c:
    if (ctx->pc == 0x47075Cu) {
        ctx->pc = 0x47075Cu;
            // 0x47075c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x470760u;
        goto label_470760;
    }
    ctx->pc = 0x470758u;
    {
        const bool branch_taken_0x470758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x47075Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470758u;
            // 0x47075c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x470758) {
            ctx->pc = 0x4707B0u;
            goto label_4707b0;
        }
    }
    ctx->pc = 0x470760u;
label_470760:
    // 0x470760: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x470760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_470764:
    // 0x470764: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x470764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_470768:
    // 0x470768: 0x24a5eff0  addiu       $a1, $a1, -0x1010
    ctx->pc = 0x470768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963184));
label_47076c:
    // 0x47076c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x47076cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_470770:
    // 0x470770: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x470770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_470774:
    // 0x470774: 0x800008  jr          $a0
label_470778:
    if (ctx->pc == 0x470778u) {
        ctx->pc = 0x47077Cu;
        goto label_47077c;
    }
    ctx->pc = 0x470774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x47077Cu: goto label_47077c;
            case 0x470784u: goto label_470784;
            case 0x47078Cu: goto label_47078c;
            case 0x470794u: goto label_470794;
            case 0x47079Cu: goto label_47079c;
            case 0x4707A8u: goto label_4707a8;
            case 0x4707B0u: goto label_4707b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x47077Cu;
label_47077c:
    // 0x47077c: 0x1000000d  b           . + 4 + (0xD << 2)
label_470780:
    if (ctx->pc == 0x470780u) {
        ctx->pc = 0x470780u;
            // 0x470780: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x470784u;
        goto label_470784;
    }
    ctx->pc = 0x47077Cu;
    {
        const bool branch_taken_0x47077c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47077Cu;
            // 0x470780: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47077c) {
            ctx->pc = 0x4707B4u;
            goto label_4707b4;
        }
    }
    ctx->pc = 0x470784u;
label_470784:
    // 0x470784: 0x1000000a  b           . + 4 + (0xA << 2)
label_470788:
    if (ctx->pc == 0x470788u) {
        ctx->pc = 0x470788u;
            // 0x470788: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47078Cu;
        goto label_47078c;
    }
    ctx->pc = 0x470784u;
    {
        const bool branch_taken_0x470784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470784u;
            // 0x470788: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470784) {
            ctx->pc = 0x4707B0u;
            goto label_4707b0;
        }
    }
    ctx->pc = 0x47078Cu;
label_47078c:
    // 0x47078c: 0x10000008  b           . + 4 + (0x8 << 2)
label_470790:
    if (ctx->pc == 0x470790u) {
        ctx->pc = 0x470790u;
            // 0x470790: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x470794u;
        goto label_470794;
    }
    ctx->pc = 0x47078Cu;
    {
        const bool branch_taken_0x47078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47078Cu;
            // 0x470790: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47078c) {
            ctx->pc = 0x4707B0u;
            goto label_4707b0;
        }
    }
    ctx->pc = 0x470794u;
label_470794:
    // 0x470794: 0x10000006  b           . + 4 + (0x6 << 2)
label_470798:
    if (ctx->pc == 0x470798u) {
        ctx->pc = 0x470798u;
            // 0x470798: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x47079Cu;
        goto label_47079c;
    }
    ctx->pc = 0x470794u;
    {
        const bool branch_taken_0x470794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470794u;
            // 0x470798: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470794) {
            ctx->pc = 0x4707B0u;
            goto label_4707b0;
        }
    }
    ctx->pc = 0x47079Cu;
label_47079c:
    // 0x47079c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x47079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4707a0:
    // 0x4707a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4707a4:
    if (ctx->pc == 0x4707A4u) {
        ctx->pc = 0x4707A4u;
            // 0x4707a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4707A8u;
        goto label_4707a8;
    }
    ctx->pc = 0x4707A0u;
    {
        const bool branch_taken_0x4707a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4707A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4707A0u;
            // 0x4707a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4707a0) {
            ctx->pc = 0x4707B0u;
            goto label_4707b0;
        }
    }
    ctx->pc = 0x4707A8u;
label_4707a8:
    // 0x4707a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4707a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4707ac:
    // 0x4707ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4707acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4707b0:
    // 0x4707b0: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x4707b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_4707b4:
    // 0x4707b4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x4707b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4707b8:
    // 0x4707b8: 0x30a6001f  andi        $a2, $a1, 0x1F
    ctx->pc = 0x4707b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_4707bc:
    // 0x4707bc: 0x54c40003  bnel        $a2, $a0, . + 4 + (0x3 << 2)
label_4707c0:
    if (ctx->pc == 0x4707C0u) {
        ctx->pc = 0x4707C0u;
            // 0x4707c0: 0x122840  sll         $a1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x4707C4u;
        goto label_4707c4;
    }
    ctx->pc = 0x4707BCu;
    {
        const bool branch_taken_0x4707bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x4707bc) {
            ctx->pc = 0x4707C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4707BCu;
            // 0x4707c0: 0x122840  sll         $a1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4707CCu;
            goto label_4707cc;
        }
    }
    ctx->pc = 0x4707C4u;
label_4707c4:
    // 0x4707c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4707c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4707c8:
    // 0x4707c8: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x4707c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_4707cc:
    // 0x4707cc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x4707ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_4707d0:
    // 0x4707d0: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x4707d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_4707d4:
    // 0x4707d4: 0x248406d0  addiu       $a0, $a0, 0x6D0
    ctx->pc = 0x4707d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1744));
label_4707d8:
    // 0x4707d8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4707d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4707dc:
    // 0x4707dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4707dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4707e0:
    // 0x4707e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x4707e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4707e4:
    // 0x4707e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_4707e8:
    if (ctx->pc == 0x4707E8u) {
        ctx->pc = 0x4707E8u;
            // 0x4707e8: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x4707ECu;
        goto label_4707ec;
    }
    ctx->pc = 0x4707E4u;
    {
        const bool branch_taken_0x4707e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4707E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4707E4u;
            // 0x4707e8: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4707e4) {
            ctx->pc = 0x470830u;
            goto label_470830;
        }
    }
    ctx->pc = 0x4707ECu;
label_4707ec:
    // 0x4707ec: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x4707ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_4707f0:
    // 0x4707f0: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x4707f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_4707f4:
    // 0x4707f4: 0x923021  addu        $a2, $a0, $s2
    ctx->pc = 0x4707f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4707f8:
    // 0x4707f8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x4707f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_4707fc:
    // 0x4707fc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x4707fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_470800:
    // 0x470800: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x470800u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_470804:
    // 0x470804: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x470804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_470808:
    // 0x470808: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x470808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_47080c:
    // 0x47080c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x47080cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_470810:
    // 0x470810: 0x24a506f0  addiu       $a1, $a1, 0x6F0
    ctx->pc = 0x470810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1776));
label_470814:
    // 0x470814: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x470814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_470818:
    // 0x470818: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x470818u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_47081c:
    // 0x47081c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x47081cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_470820:
    // 0x470820: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x470820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_470824:
    // 0x470824: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x470824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_470828:
    // 0x470828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x470828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47082c:
    // 0x47082c: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x47082cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
label_470830:
    // 0x470830: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x470830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_470834:
    // 0x470834: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x470834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_470838:
    // 0x470838: 0xc073234  jal         func_1CC8D0
label_47083c:
    if (ctx->pc == 0x47083Cu) {
        ctx->pc = 0x47083Cu;
            // 0x47083c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x470840u;
        goto label_470840;
    }
    ctx->pc = 0x470838u;
    SET_GPR_U32(ctx, 31, 0x470840u);
    ctx->pc = 0x47083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470838u;
            // 0x47083c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470840u; }
        if (ctx->pc != 0x470840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470840u; }
        if (ctx->pc != 0x470840u) { return; }
    }
    ctx->pc = 0x470840u;
label_470840:
    // 0x470840: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x470840u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_470844:
    // 0x470844: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x470844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_470848:
    // 0x470848: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_47084c:
    if (ctx->pc == 0x47084Cu) {
        ctx->pc = 0x47084Cu;
            // 0x47084c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x470850u;
        goto label_470850;
    }
    ctx->pc = 0x470848u;
    {
        const bool branch_taken_0x470848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470848) {
            ctx->pc = 0x47084Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x470848u;
            // 0x47084c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4708A8u;
            goto label_4708a8;
        }
    }
    ctx->pc = 0x470850u;
label_470850:
    // 0x470850: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x470850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_470854:
    // 0x470854: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x470854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_470858:
    // 0x470858: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_47085c:
    if (ctx->pc == 0x47085Cu) {
        ctx->pc = 0x470860u;
        goto label_470860;
    }
    ctx->pc = 0x470858u;
    {
        const bool branch_taken_0x470858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470858) {
            ctx->pc = 0x470940u;
            goto label_470940;
        }
    }
    ctx->pc = 0x470860u;
label_470860:
    // 0x470860: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x470860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_470864:
    // 0x470864: 0x8c43a348  lw          $v1, -0x5CB8($v0)
    ctx->pc = 0x470864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_470868:
    // 0x470868: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x470868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_47086c:
    // 0x47086c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_470870:
    if (ctx->pc == 0x470870u) {
        ctx->pc = 0x470874u;
        goto label_470874;
    }
    ctx->pc = 0x47086Cu;
    {
        const bool branch_taken_0x47086c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47086c) {
            ctx->pc = 0x470940u;
            goto label_470940;
        }
    }
    ctx->pc = 0x470874u;
label_470874:
    // 0x470874: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x470874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_470878:
    // 0x470878: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_47087c:
    if (ctx->pc == 0x47087Cu) {
        ctx->pc = 0x470880u;
        goto label_470880;
    }
    ctx->pc = 0x470878u;
    {
        const bool branch_taken_0x470878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470878) {
            ctx->pc = 0x470940u;
            goto label_470940;
        }
    }
    ctx->pc = 0x470880u;
label_470880:
    // 0x470880: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x470880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_470884:
    // 0x470884: 0xc073234  jal         func_1CC8D0
label_470888:
    if (ctx->pc == 0x470888u) {
        ctx->pc = 0x470888u;
            // 0x470888: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x47088Cu;
        goto label_47088c;
    }
    ctx->pc = 0x470884u;
    SET_GPR_U32(ctx, 31, 0x47088Cu);
    ctx->pc = 0x470888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470884u;
            // 0x470888: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47088Cu; }
        if (ctx->pc != 0x47088Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47088Cu; }
        if (ctx->pc != 0x47088Cu) { return; }
    }
    ctx->pc = 0x47088Cu;
label_47088c:
    // 0x47088c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x47088cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_470890:
    // 0x470890: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x470890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_470894:
    // 0x470894: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x470894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_470898:
    // 0x470898: 0x320f809  jalr        $t9
label_47089c:
    if (ctx->pc == 0x47089Cu) {
        ctx->pc = 0x47089Cu;
            // 0x47089c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4708A0u;
        goto label_4708a0;
    }
    ctx->pc = 0x470898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4708A0u);
        ctx->pc = 0x47089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470898u;
            // 0x47089c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4708A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4708A0u; }
            if (ctx->pc != 0x4708A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4708A0u;
label_4708a0:
    // 0x4708a0: 0x10000027  b           . + 4 + (0x27 << 2)
label_4708a4:
    if (ctx->pc == 0x4708A4u) {
        ctx->pc = 0x4708A8u;
        goto label_4708a8;
    }
    ctx->pc = 0x4708A0u;
    {
        const bool branch_taken_0x4708a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4708a0) {
            ctx->pc = 0x470940u;
            goto label_470940;
        }
    }
    ctx->pc = 0x4708A8u;
label_4708a8:
    // 0x4708a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4708a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4708ac:
    // 0x4708ac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_4708b0:
    if (ctx->pc == 0x4708B0u) {
        ctx->pc = 0x4708B4u;
        goto label_4708b4;
    }
    ctx->pc = 0x4708ACu;
    {
        const bool branch_taken_0x4708ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4708ac) {
            ctx->pc = 0x470940u;
            goto label_470940;
        }
    }
    ctx->pc = 0x4708B4u;
label_4708b4:
    // 0x4708b4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4708b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4708b8:
    // 0x4708b8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x4708b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_4708bc:
    // 0x4708bc: 0xc073234  jal         func_1CC8D0
label_4708c0:
    if (ctx->pc == 0x4708C0u) {
        ctx->pc = 0x4708C0u;
            // 0x4708c0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4708C4u;
        goto label_4708c4;
    }
    ctx->pc = 0x4708BCu;
    SET_GPR_U32(ctx, 31, 0x4708C4u);
    ctx->pc = 0x4708C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4708BCu;
            // 0x4708c0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4708C4u; }
        if (ctx->pc != 0x4708C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4708C4u; }
        if (ctx->pc != 0x4708C4u) { return; }
    }
    ctx->pc = 0x4708C4u;
label_4708c4:
    // 0x4708c4: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x4708c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_4708c8:
    // 0x4708c8: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x4708c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_4708cc:
    // 0x4708cc: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x4708ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4708d0:
    // 0x4708d0: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x4708d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4708d4:
    // 0x4708d4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4708d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4708d8:
    // 0x4708d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4708d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4708dc:
    // 0x4708dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4708dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4708e0:
    // 0x4708e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4708e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4708e4:
    // 0x4708e4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4708e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4708e8:
    // 0x4708e8: 0x320f809  jalr        $t9
label_4708ec:
    if (ctx->pc == 0x4708ECu) {
        ctx->pc = 0x4708ECu;
            // 0x4708ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4708F0u;
        goto label_4708f0;
    }
    ctx->pc = 0x4708E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4708F0u);
        ctx->pc = 0x4708ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4708E8u;
            // 0x4708ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4708F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4708F0u; }
            if (ctx->pc != 0x4708F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4708F0u;
label_4708f0:
    // 0x4708f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4708f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4708f4:
    // 0x4708f4: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x4708f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_4708f8:
    // 0x4708f8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4708f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4708fc:
    // 0x4708fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4708fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_470900:
    // 0x470900: 0xc123848  jal         func_48E120
label_470904:
    if (ctx->pc == 0x470904u) {
        ctx->pc = 0x470904u;
            // 0x470904: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x470908u;
        goto label_470908;
    }
    ctx->pc = 0x470900u;
    SET_GPR_U32(ctx, 31, 0x470908u);
    ctx->pc = 0x470904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470900u;
            // 0x470904: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470908u; }
        if (ctx->pc != 0x470908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470908u; }
        if (ctx->pc != 0x470908u) { return; }
    }
    ctx->pc = 0x470908u;
label_470908:
    // 0x470908: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x470908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_47090c:
    // 0x47090c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_470910:
    // 0x470910: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x470910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_470914:
    // 0x470914: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x470914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470918:
    // 0x470918: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x470918u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_47091c:
    // 0x47091c: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x47091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_470920:
    // 0x470920: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x470920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_470924:
    // 0x470924: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x470924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_470928:
    // 0x470928: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x470928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47092c:
    // 0x47092c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470930:
    // 0x470930: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x470930u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_470934:
    // 0x470934: 0x8ea2005c  lw          $v0, 0x5C($s5)
    ctx->pc = 0x470934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_470938:
    // 0x470938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x470938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_47093c:
    // 0x47093c: 0xaea2005c  sw          $v0, 0x5C($s5)
    ctx->pc = 0x47093cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
label_470940:
    // 0x470940: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x470940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_470944:
    // 0x470944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x470944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470948:
    // 0x470948: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x470948u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47094c:
    // 0x47094c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x47094cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_470950:
    // 0x470950: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x470950u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_470954:
    // 0x470954: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x470954u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_470958:
    // 0x470958: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x470958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47095c:
    // 0x47095c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47095cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_470960:
    // 0x470960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x470960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_470964:
    // 0x470964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x470964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_470968:
    // 0x470968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x470968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47096c:
    // 0x47096c: 0x3e00008  jr          $ra
label_470970:
    if (ctx->pc == 0x470970u) {
        ctx->pc = 0x470970u;
            // 0x470970: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x470974u;
        goto label_470974;
    }
    ctx->pc = 0x47096Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x470970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47096Cu;
            // 0x470970: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x470974u;
label_470974:
    // 0x470974: 0x0  nop
    ctx->pc = 0x470974u;
    // NOP
label_470978:
    // 0x470978: 0x0  nop
    ctx->pc = 0x470978u;
    // NOP
label_47097c:
    // 0x47097c: 0x0  nop
    ctx->pc = 0x47097cu;
    // NOP
}
