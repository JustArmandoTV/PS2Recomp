#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00555450
// Address: 0x555450 - 0x555b70
void sub_00555450_0x555450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00555450_0x555450");
#endif

    switch (ctx->pc) {
        case 0x555450u: goto label_555450;
        case 0x555454u: goto label_555454;
        case 0x555458u: goto label_555458;
        case 0x55545cu: goto label_55545c;
        case 0x555460u: goto label_555460;
        case 0x555464u: goto label_555464;
        case 0x555468u: goto label_555468;
        case 0x55546cu: goto label_55546c;
        case 0x555470u: goto label_555470;
        case 0x555474u: goto label_555474;
        case 0x555478u: goto label_555478;
        case 0x55547cu: goto label_55547c;
        case 0x555480u: goto label_555480;
        case 0x555484u: goto label_555484;
        case 0x555488u: goto label_555488;
        case 0x55548cu: goto label_55548c;
        case 0x555490u: goto label_555490;
        case 0x555494u: goto label_555494;
        case 0x555498u: goto label_555498;
        case 0x55549cu: goto label_55549c;
        case 0x5554a0u: goto label_5554a0;
        case 0x5554a4u: goto label_5554a4;
        case 0x5554a8u: goto label_5554a8;
        case 0x5554acu: goto label_5554ac;
        case 0x5554b0u: goto label_5554b0;
        case 0x5554b4u: goto label_5554b4;
        case 0x5554b8u: goto label_5554b8;
        case 0x5554bcu: goto label_5554bc;
        case 0x5554c0u: goto label_5554c0;
        case 0x5554c4u: goto label_5554c4;
        case 0x5554c8u: goto label_5554c8;
        case 0x5554ccu: goto label_5554cc;
        case 0x5554d0u: goto label_5554d0;
        case 0x5554d4u: goto label_5554d4;
        case 0x5554d8u: goto label_5554d8;
        case 0x5554dcu: goto label_5554dc;
        case 0x5554e0u: goto label_5554e0;
        case 0x5554e4u: goto label_5554e4;
        case 0x5554e8u: goto label_5554e8;
        case 0x5554ecu: goto label_5554ec;
        case 0x5554f0u: goto label_5554f0;
        case 0x5554f4u: goto label_5554f4;
        case 0x5554f8u: goto label_5554f8;
        case 0x5554fcu: goto label_5554fc;
        case 0x555500u: goto label_555500;
        case 0x555504u: goto label_555504;
        case 0x555508u: goto label_555508;
        case 0x55550cu: goto label_55550c;
        case 0x555510u: goto label_555510;
        case 0x555514u: goto label_555514;
        case 0x555518u: goto label_555518;
        case 0x55551cu: goto label_55551c;
        case 0x555520u: goto label_555520;
        case 0x555524u: goto label_555524;
        case 0x555528u: goto label_555528;
        case 0x55552cu: goto label_55552c;
        case 0x555530u: goto label_555530;
        case 0x555534u: goto label_555534;
        case 0x555538u: goto label_555538;
        case 0x55553cu: goto label_55553c;
        case 0x555540u: goto label_555540;
        case 0x555544u: goto label_555544;
        case 0x555548u: goto label_555548;
        case 0x55554cu: goto label_55554c;
        case 0x555550u: goto label_555550;
        case 0x555554u: goto label_555554;
        case 0x555558u: goto label_555558;
        case 0x55555cu: goto label_55555c;
        case 0x555560u: goto label_555560;
        case 0x555564u: goto label_555564;
        case 0x555568u: goto label_555568;
        case 0x55556cu: goto label_55556c;
        case 0x555570u: goto label_555570;
        case 0x555574u: goto label_555574;
        case 0x555578u: goto label_555578;
        case 0x55557cu: goto label_55557c;
        case 0x555580u: goto label_555580;
        case 0x555584u: goto label_555584;
        case 0x555588u: goto label_555588;
        case 0x55558cu: goto label_55558c;
        case 0x555590u: goto label_555590;
        case 0x555594u: goto label_555594;
        case 0x555598u: goto label_555598;
        case 0x55559cu: goto label_55559c;
        case 0x5555a0u: goto label_5555a0;
        case 0x5555a4u: goto label_5555a4;
        case 0x5555a8u: goto label_5555a8;
        case 0x5555acu: goto label_5555ac;
        case 0x5555b0u: goto label_5555b0;
        case 0x5555b4u: goto label_5555b4;
        case 0x5555b8u: goto label_5555b8;
        case 0x5555bcu: goto label_5555bc;
        case 0x5555c0u: goto label_5555c0;
        case 0x5555c4u: goto label_5555c4;
        case 0x5555c8u: goto label_5555c8;
        case 0x5555ccu: goto label_5555cc;
        case 0x5555d0u: goto label_5555d0;
        case 0x5555d4u: goto label_5555d4;
        case 0x5555d8u: goto label_5555d8;
        case 0x5555dcu: goto label_5555dc;
        case 0x5555e0u: goto label_5555e0;
        case 0x5555e4u: goto label_5555e4;
        case 0x5555e8u: goto label_5555e8;
        case 0x5555ecu: goto label_5555ec;
        case 0x5555f0u: goto label_5555f0;
        case 0x5555f4u: goto label_5555f4;
        case 0x5555f8u: goto label_5555f8;
        case 0x5555fcu: goto label_5555fc;
        case 0x555600u: goto label_555600;
        case 0x555604u: goto label_555604;
        case 0x555608u: goto label_555608;
        case 0x55560cu: goto label_55560c;
        case 0x555610u: goto label_555610;
        case 0x555614u: goto label_555614;
        case 0x555618u: goto label_555618;
        case 0x55561cu: goto label_55561c;
        case 0x555620u: goto label_555620;
        case 0x555624u: goto label_555624;
        case 0x555628u: goto label_555628;
        case 0x55562cu: goto label_55562c;
        case 0x555630u: goto label_555630;
        case 0x555634u: goto label_555634;
        case 0x555638u: goto label_555638;
        case 0x55563cu: goto label_55563c;
        case 0x555640u: goto label_555640;
        case 0x555644u: goto label_555644;
        case 0x555648u: goto label_555648;
        case 0x55564cu: goto label_55564c;
        case 0x555650u: goto label_555650;
        case 0x555654u: goto label_555654;
        case 0x555658u: goto label_555658;
        case 0x55565cu: goto label_55565c;
        case 0x555660u: goto label_555660;
        case 0x555664u: goto label_555664;
        case 0x555668u: goto label_555668;
        case 0x55566cu: goto label_55566c;
        case 0x555670u: goto label_555670;
        case 0x555674u: goto label_555674;
        case 0x555678u: goto label_555678;
        case 0x55567cu: goto label_55567c;
        case 0x555680u: goto label_555680;
        case 0x555684u: goto label_555684;
        case 0x555688u: goto label_555688;
        case 0x55568cu: goto label_55568c;
        case 0x555690u: goto label_555690;
        case 0x555694u: goto label_555694;
        case 0x555698u: goto label_555698;
        case 0x55569cu: goto label_55569c;
        case 0x5556a0u: goto label_5556a0;
        case 0x5556a4u: goto label_5556a4;
        case 0x5556a8u: goto label_5556a8;
        case 0x5556acu: goto label_5556ac;
        case 0x5556b0u: goto label_5556b0;
        case 0x5556b4u: goto label_5556b4;
        case 0x5556b8u: goto label_5556b8;
        case 0x5556bcu: goto label_5556bc;
        case 0x5556c0u: goto label_5556c0;
        case 0x5556c4u: goto label_5556c4;
        case 0x5556c8u: goto label_5556c8;
        case 0x5556ccu: goto label_5556cc;
        case 0x5556d0u: goto label_5556d0;
        case 0x5556d4u: goto label_5556d4;
        case 0x5556d8u: goto label_5556d8;
        case 0x5556dcu: goto label_5556dc;
        case 0x5556e0u: goto label_5556e0;
        case 0x5556e4u: goto label_5556e4;
        case 0x5556e8u: goto label_5556e8;
        case 0x5556ecu: goto label_5556ec;
        case 0x5556f0u: goto label_5556f0;
        case 0x5556f4u: goto label_5556f4;
        case 0x5556f8u: goto label_5556f8;
        case 0x5556fcu: goto label_5556fc;
        case 0x555700u: goto label_555700;
        case 0x555704u: goto label_555704;
        case 0x555708u: goto label_555708;
        case 0x55570cu: goto label_55570c;
        case 0x555710u: goto label_555710;
        case 0x555714u: goto label_555714;
        case 0x555718u: goto label_555718;
        case 0x55571cu: goto label_55571c;
        case 0x555720u: goto label_555720;
        case 0x555724u: goto label_555724;
        case 0x555728u: goto label_555728;
        case 0x55572cu: goto label_55572c;
        case 0x555730u: goto label_555730;
        case 0x555734u: goto label_555734;
        case 0x555738u: goto label_555738;
        case 0x55573cu: goto label_55573c;
        case 0x555740u: goto label_555740;
        case 0x555744u: goto label_555744;
        case 0x555748u: goto label_555748;
        case 0x55574cu: goto label_55574c;
        case 0x555750u: goto label_555750;
        case 0x555754u: goto label_555754;
        case 0x555758u: goto label_555758;
        case 0x55575cu: goto label_55575c;
        case 0x555760u: goto label_555760;
        case 0x555764u: goto label_555764;
        case 0x555768u: goto label_555768;
        case 0x55576cu: goto label_55576c;
        case 0x555770u: goto label_555770;
        case 0x555774u: goto label_555774;
        case 0x555778u: goto label_555778;
        case 0x55577cu: goto label_55577c;
        case 0x555780u: goto label_555780;
        case 0x555784u: goto label_555784;
        case 0x555788u: goto label_555788;
        case 0x55578cu: goto label_55578c;
        case 0x555790u: goto label_555790;
        case 0x555794u: goto label_555794;
        case 0x555798u: goto label_555798;
        case 0x55579cu: goto label_55579c;
        case 0x5557a0u: goto label_5557a0;
        case 0x5557a4u: goto label_5557a4;
        case 0x5557a8u: goto label_5557a8;
        case 0x5557acu: goto label_5557ac;
        case 0x5557b0u: goto label_5557b0;
        case 0x5557b4u: goto label_5557b4;
        case 0x5557b8u: goto label_5557b8;
        case 0x5557bcu: goto label_5557bc;
        case 0x5557c0u: goto label_5557c0;
        case 0x5557c4u: goto label_5557c4;
        case 0x5557c8u: goto label_5557c8;
        case 0x5557ccu: goto label_5557cc;
        case 0x5557d0u: goto label_5557d0;
        case 0x5557d4u: goto label_5557d4;
        case 0x5557d8u: goto label_5557d8;
        case 0x5557dcu: goto label_5557dc;
        case 0x5557e0u: goto label_5557e0;
        case 0x5557e4u: goto label_5557e4;
        case 0x5557e8u: goto label_5557e8;
        case 0x5557ecu: goto label_5557ec;
        case 0x5557f0u: goto label_5557f0;
        case 0x5557f4u: goto label_5557f4;
        case 0x5557f8u: goto label_5557f8;
        case 0x5557fcu: goto label_5557fc;
        case 0x555800u: goto label_555800;
        case 0x555804u: goto label_555804;
        case 0x555808u: goto label_555808;
        case 0x55580cu: goto label_55580c;
        case 0x555810u: goto label_555810;
        case 0x555814u: goto label_555814;
        case 0x555818u: goto label_555818;
        case 0x55581cu: goto label_55581c;
        case 0x555820u: goto label_555820;
        case 0x555824u: goto label_555824;
        case 0x555828u: goto label_555828;
        case 0x55582cu: goto label_55582c;
        case 0x555830u: goto label_555830;
        case 0x555834u: goto label_555834;
        case 0x555838u: goto label_555838;
        case 0x55583cu: goto label_55583c;
        case 0x555840u: goto label_555840;
        case 0x555844u: goto label_555844;
        case 0x555848u: goto label_555848;
        case 0x55584cu: goto label_55584c;
        case 0x555850u: goto label_555850;
        case 0x555854u: goto label_555854;
        case 0x555858u: goto label_555858;
        case 0x55585cu: goto label_55585c;
        case 0x555860u: goto label_555860;
        case 0x555864u: goto label_555864;
        case 0x555868u: goto label_555868;
        case 0x55586cu: goto label_55586c;
        case 0x555870u: goto label_555870;
        case 0x555874u: goto label_555874;
        case 0x555878u: goto label_555878;
        case 0x55587cu: goto label_55587c;
        case 0x555880u: goto label_555880;
        case 0x555884u: goto label_555884;
        case 0x555888u: goto label_555888;
        case 0x55588cu: goto label_55588c;
        case 0x555890u: goto label_555890;
        case 0x555894u: goto label_555894;
        case 0x555898u: goto label_555898;
        case 0x55589cu: goto label_55589c;
        case 0x5558a0u: goto label_5558a0;
        case 0x5558a4u: goto label_5558a4;
        case 0x5558a8u: goto label_5558a8;
        case 0x5558acu: goto label_5558ac;
        case 0x5558b0u: goto label_5558b0;
        case 0x5558b4u: goto label_5558b4;
        case 0x5558b8u: goto label_5558b8;
        case 0x5558bcu: goto label_5558bc;
        case 0x5558c0u: goto label_5558c0;
        case 0x5558c4u: goto label_5558c4;
        case 0x5558c8u: goto label_5558c8;
        case 0x5558ccu: goto label_5558cc;
        case 0x5558d0u: goto label_5558d0;
        case 0x5558d4u: goto label_5558d4;
        case 0x5558d8u: goto label_5558d8;
        case 0x5558dcu: goto label_5558dc;
        case 0x5558e0u: goto label_5558e0;
        case 0x5558e4u: goto label_5558e4;
        case 0x5558e8u: goto label_5558e8;
        case 0x5558ecu: goto label_5558ec;
        case 0x5558f0u: goto label_5558f0;
        case 0x5558f4u: goto label_5558f4;
        case 0x5558f8u: goto label_5558f8;
        case 0x5558fcu: goto label_5558fc;
        case 0x555900u: goto label_555900;
        case 0x555904u: goto label_555904;
        case 0x555908u: goto label_555908;
        case 0x55590cu: goto label_55590c;
        case 0x555910u: goto label_555910;
        case 0x555914u: goto label_555914;
        case 0x555918u: goto label_555918;
        case 0x55591cu: goto label_55591c;
        case 0x555920u: goto label_555920;
        case 0x555924u: goto label_555924;
        case 0x555928u: goto label_555928;
        case 0x55592cu: goto label_55592c;
        case 0x555930u: goto label_555930;
        case 0x555934u: goto label_555934;
        case 0x555938u: goto label_555938;
        case 0x55593cu: goto label_55593c;
        case 0x555940u: goto label_555940;
        case 0x555944u: goto label_555944;
        case 0x555948u: goto label_555948;
        case 0x55594cu: goto label_55594c;
        case 0x555950u: goto label_555950;
        case 0x555954u: goto label_555954;
        case 0x555958u: goto label_555958;
        case 0x55595cu: goto label_55595c;
        case 0x555960u: goto label_555960;
        case 0x555964u: goto label_555964;
        case 0x555968u: goto label_555968;
        case 0x55596cu: goto label_55596c;
        case 0x555970u: goto label_555970;
        case 0x555974u: goto label_555974;
        case 0x555978u: goto label_555978;
        case 0x55597cu: goto label_55597c;
        case 0x555980u: goto label_555980;
        case 0x555984u: goto label_555984;
        case 0x555988u: goto label_555988;
        case 0x55598cu: goto label_55598c;
        case 0x555990u: goto label_555990;
        case 0x555994u: goto label_555994;
        case 0x555998u: goto label_555998;
        case 0x55599cu: goto label_55599c;
        case 0x5559a0u: goto label_5559a0;
        case 0x5559a4u: goto label_5559a4;
        case 0x5559a8u: goto label_5559a8;
        case 0x5559acu: goto label_5559ac;
        case 0x5559b0u: goto label_5559b0;
        case 0x5559b4u: goto label_5559b4;
        case 0x5559b8u: goto label_5559b8;
        case 0x5559bcu: goto label_5559bc;
        case 0x5559c0u: goto label_5559c0;
        case 0x5559c4u: goto label_5559c4;
        case 0x5559c8u: goto label_5559c8;
        case 0x5559ccu: goto label_5559cc;
        case 0x5559d0u: goto label_5559d0;
        case 0x5559d4u: goto label_5559d4;
        case 0x5559d8u: goto label_5559d8;
        case 0x5559dcu: goto label_5559dc;
        case 0x5559e0u: goto label_5559e0;
        case 0x5559e4u: goto label_5559e4;
        case 0x5559e8u: goto label_5559e8;
        case 0x5559ecu: goto label_5559ec;
        case 0x5559f0u: goto label_5559f0;
        case 0x5559f4u: goto label_5559f4;
        case 0x5559f8u: goto label_5559f8;
        case 0x5559fcu: goto label_5559fc;
        case 0x555a00u: goto label_555a00;
        case 0x555a04u: goto label_555a04;
        case 0x555a08u: goto label_555a08;
        case 0x555a0cu: goto label_555a0c;
        case 0x555a10u: goto label_555a10;
        case 0x555a14u: goto label_555a14;
        case 0x555a18u: goto label_555a18;
        case 0x555a1cu: goto label_555a1c;
        case 0x555a20u: goto label_555a20;
        case 0x555a24u: goto label_555a24;
        case 0x555a28u: goto label_555a28;
        case 0x555a2cu: goto label_555a2c;
        case 0x555a30u: goto label_555a30;
        case 0x555a34u: goto label_555a34;
        case 0x555a38u: goto label_555a38;
        case 0x555a3cu: goto label_555a3c;
        case 0x555a40u: goto label_555a40;
        case 0x555a44u: goto label_555a44;
        case 0x555a48u: goto label_555a48;
        case 0x555a4cu: goto label_555a4c;
        case 0x555a50u: goto label_555a50;
        case 0x555a54u: goto label_555a54;
        case 0x555a58u: goto label_555a58;
        case 0x555a5cu: goto label_555a5c;
        case 0x555a60u: goto label_555a60;
        case 0x555a64u: goto label_555a64;
        case 0x555a68u: goto label_555a68;
        case 0x555a6cu: goto label_555a6c;
        case 0x555a70u: goto label_555a70;
        case 0x555a74u: goto label_555a74;
        case 0x555a78u: goto label_555a78;
        case 0x555a7cu: goto label_555a7c;
        case 0x555a80u: goto label_555a80;
        case 0x555a84u: goto label_555a84;
        case 0x555a88u: goto label_555a88;
        case 0x555a8cu: goto label_555a8c;
        case 0x555a90u: goto label_555a90;
        case 0x555a94u: goto label_555a94;
        case 0x555a98u: goto label_555a98;
        case 0x555a9cu: goto label_555a9c;
        case 0x555aa0u: goto label_555aa0;
        case 0x555aa4u: goto label_555aa4;
        case 0x555aa8u: goto label_555aa8;
        case 0x555aacu: goto label_555aac;
        case 0x555ab0u: goto label_555ab0;
        case 0x555ab4u: goto label_555ab4;
        case 0x555ab8u: goto label_555ab8;
        case 0x555abcu: goto label_555abc;
        case 0x555ac0u: goto label_555ac0;
        case 0x555ac4u: goto label_555ac4;
        case 0x555ac8u: goto label_555ac8;
        case 0x555accu: goto label_555acc;
        case 0x555ad0u: goto label_555ad0;
        case 0x555ad4u: goto label_555ad4;
        case 0x555ad8u: goto label_555ad8;
        case 0x555adcu: goto label_555adc;
        case 0x555ae0u: goto label_555ae0;
        case 0x555ae4u: goto label_555ae4;
        case 0x555ae8u: goto label_555ae8;
        case 0x555aecu: goto label_555aec;
        case 0x555af0u: goto label_555af0;
        case 0x555af4u: goto label_555af4;
        case 0x555af8u: goto label_555af8;
        case 0x555afcu: goto label_555afc;
        case 0x555b00u: goto label_555b00;
        case 0x555b04u: goto label_555b04;
        case 0x555b08u: goto label_555b08;
        case 0x555b0cu: goto label_555b0c;
        case 0x555b10u: goto label_555b10;
        case 0x555b14u: goto label_555b14;
        case 0x555b18u: goto label_555b18;
        case 0x555b1cu: goto label_555b1c;
        case 0x555b20u: goto label_555b20;
        case 0x555b24u: goto label_555b24;
        case 0x555b28u: goto label_555b28;
        case 0x555b2cu: goto label_555b2c;
        case 0x555b30u: goto label_555b30;
        case 0x555b34u: goto label_555b34;
        case 0x555b38u: goto label_555b38;
        case 0x555b3cu: goto label_555b3c;
        case 0x555b40u: goto label_555b40;
        case 0x555b44u: goto label_555b44;
        case 0x555b48u: goto label_555b48;
        case 0x555b4cu: goto label_555b4c;
        case 0x555b50u: goto label_555b50;
        case 0x555b54u: goto label_555b54;
        case 0x555b58u: goto label_555b58;
        case 0x555b5cu: goto label_555b5c;
        case 0x555b60u: goto label_555b60;
        case 0x555b64u: goto label_555b64;
        case 0x555b68u: goto label_555b68;
        case 0x555b6cu: goto label_555b6c;
        default: break;
    }

    ctx->pc = 0x555450u;

label_555450:
    // 0x555450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x555450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_555454:
    // 0x555454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x555454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_555458:
    // 0x555458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x555458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55545c:
    // 0x55545c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x55545cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_555460:
    // 0x555460: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x555460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_555464:
    // 0x555464: 0xc0c9a58  jal         func_326960
label_555468:
    if (ctx->pc == 0x555468u) {
        ctx->pc = 0x555468u;
            // 0x555468: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x55546Cu;
        goto label_55546c;
    }
    ctx->pc = 0x555464u;
    SET_GPR_U32(ctx, 31, 0x55546Cu);
    ctx->pc = 0x555468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555464u;
            // 0x555468: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55546Cu; }
        if (ctx->pc != 0x55546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55546Cu; }
        if (ctx->pc != 0x55546Cu) { return; }
    }
    ctx->pc = 0x55546Cu;
label_55546c:
    // 0x55546c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x55546cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_555470:
    // 0x555470: 0xc123328  jal         func_48CCA0
label_555474:
    if (ctx->pc == 0x555474u) {
        ctx->pc = 0x555474u;
            // 0x555474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555478u;
        goto label_555478;
    }
    ctx->pc = 0x555470u;
    SET_GPR_U32(ctx, 31, 0x555478u);
    ctx->pc = 0x555474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555470u;
            // 0x555474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555478u; }
        if (ctx->pc != 0x555478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555478u; }
        if (ctx->pc != 0x555478u) { return; }
    }
    ctx->pc = 0x555478u;
label_555478:
    // 0x555478: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x555478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_55547c:
    // 0x55547c: 0x2c410014  sltiu       $at, $v0, 0x14
    ctx->pc = 0x55547cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_555480:
    // 0x555480: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x555480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_555484:
    // 0x555484: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x555484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_555488:
    // 0x555488: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
label_55548c:
    if (ctx->pc == 0x55548Cu) {
        ctx->pc = 0x55548Cu;
            // 0x55548c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x555490u;
        goto label_555490;
    }
    ctx->pc = 0x555488u;
    {
        const bool branch_taken_0x555488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x55548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555488u;
            // 0x55548c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555488) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x555490u;
label_555490:
    // 0x555490: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x555490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_555494:
    // 0x555494: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x555494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_555498:
    // 0x555498: 0x2484edb0  addiu       $a0, $a0, -0x1250
    ctx->pc = 0x555498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962608));
label_55549c:
    // 0x55549c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x55549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5554a0:
    // 0x5554a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5554a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5554a4:
    // 0x5554a4: 0x600008  jr          $v1
label_5554a8:
    if (ctx->pc == 0x5554A8u) {
        ctx->pc = 0x5554ACu;
        goto label_5554ac;
    }
    ctx->pc = 0x5554A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x5554ACu: goto label_5554ac;
            case 0x5554B4u: goto label_5554b4;
            case 0x5554BCu: goto label_5554bc;
            case 0x5554C4u: goto label_5554c4;
            case 0x5554CCu: goto label_5554cc;
            case 0x5554D4u: goto label_5554d4;
            case 0x5554DCu: goto label_5554dc;
            case 0x5554E4u: goto label_5554e4;
            case 0x5554ECu: goto label_5554ec;
            case 0x555500u: goto label_555500;
            case 0x555518u: goto label_555518;
            case 0x555530u: goto label_555530;
            case 0x555548u: goto label_555548;
            case 0x555560u: goto label_555560;
            case 0x555578u: goto label_555578;
            case 0x555590u: goto label_555590;
            case 0x5555BCu: goto label_5555bc;
            case 0x5555E8u: goto label_5555e8;
            case 0x555614u: goto label_555614;
            case 0x555628u: goto label_555628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x5554ACu;
label_5554ac:
    // 0x5554ac: 0x1000005e  b           . + 4 + (0x5E << 2)
label_5554b0:
    if (ctx->pc == 0x5554B0u) {
        ctx->pc = 0x5554B0u;
            // 0x5554b0: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x5554B4u;
        goto label_5554b4;
    }
    ctx->pc = 0x5554ACu;
    {
        const bool branch_taken_0x5554ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5554B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5554ACu;
            // 0x5554b0: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5554ac) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5554B4u;
label_5554b4:
    // 0x5554b4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_5554b8:
    if (ctx->pc == 0x5554B8u) {
        ctx->pc = 0x5554B8u;
            // 0x5554b8: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->pc = 0x5554BCu;
        goto label_5554bc;
    }
    ctx->pc = 0x5554B4u;
    {
        const bool branch_taken_0x5554b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5554B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5554B4u;
            // 0x5554b8: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5554b4) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5554BCu;
label_5554bc:
    // 0x5554bc: 0x1000005a  b           . + 4 + (0x5A << 2)
label_5554c0:
    if (ctx->pc == 0x5554C0u) {
        ctx->pc = 0x5554C0u;
            // 0x5554c0: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->pc = 0x5554C4u;
        goto label_5554c4;
    }
    ctx->pc = 0x5554BCu;
    {
        const bool branch_taken_0x5554bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5554C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5554BCu;
            // 0x5554c0: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5554bc) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5554C4u;
label_5554c4:
    // 0x5554c4: 0x10000058  b           . + 4 + (0x58 << 2)
label_5554c8:
    if (ctx->pc == 0x5554C8u) {
        ctx->pc = 0x5554C8u;
            // 0x5554c8: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->pc = 0x5554CCu;
        goto label_5554cc;
    }
    ctx->pc = 0x5554C4u;
    {
        const bool branch_taken_0x5554c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5554C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5554C4u;
            // 0x5554c8: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5554c4) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5554CCu;
label_5554cc:
    // 0x5554cc: 0x10000056  b           . + 4 + (0x56 << 2)
label_5554d0:
    if (ctx->pc == 0x5554D0u) {
        ctx->pc = 0x5554D0u;
            // 0x5554d0: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->pc = 0x5554D4u;
        goto label_5554d4;
    }
    ctx->pc = 0x5554CCu;
    {
        const bool branch_taken_0x5554cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5554D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5554CCu;
            // 0x5554d0: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5554cc) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5554D4u;
label_5554d4:
    // 0x5554d4: 0x10000054  b           . + 4 + (0x54 << 2)
label_5554d8:
    if (ctx->pc == 0x5554D8u) {
        ctx->pc = 0x5554D8u;
            // 0x5554d8: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->pc = 0x5554DCu;
        goto label_5554dc;
    }
    ctx->pc = 0x5554D4u;
    {
        const bool branch_taken_0x5554d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5554D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5554D4u;
            // 0x5554d8: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5554d4) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5554DCu;
label_5554dc:
    // 0x5554dc: 0x10000052  b           . + 4 + (0x52 << 2)
label_5554e0:
    if (ctx->pc == 0x5554E0u) {
        ctx->pc = 0x5554E0u;
            // 0x5554e0: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->pc = 0x5554E4u;
        goto label_5554e4;
    }
    ctx->pc = 0x5554DCu;
    {
        const bool branch_taken_0x5554dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5554E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5554DCu;
            // 0x5554e0: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5554dc) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5554E4u;
label_5554e4:
    // 0x5554e4: 0x10000050  b           . + 4 + (0x50 << 2)
label_5554e8:
    if (ctx->pc == 0x5554E8u) {
        ctx->pc = 0x5554E8u;
            // 0x5554e8: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->pc = 0x5554ECu;
        goto label_5554ec;
    }
    ctx->pc = 0x5554E4u;
    {
        const bool branch_taken_0x5554e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5554E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5554E4u;
            // 0x5554e8: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5554e4) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5554ECu;
label_5554ec:
    // 0x5554ec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5554ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5554f0:
    // 0x5554f0: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x5554f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_5554f4:
    // 0x5554f4: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x5554f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_5554f8:
    // 0x5554f8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_5554fc:
    if (ctx->pc == 0x5554FCu) {
        ctx->pc = 0x5554FCu;
            // 0x5554fc: 0xac6003cc  sw          $zero, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 0));
        ctx->pc = 0x555500u;
        goto label_555500;
    }
    ctx->pc = 0x5554F8u;
    {
        const bool branch_taken_0x5554f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5554FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5554F8u;
            // 0x5554fc: 0xac6003cc  sw          $zero, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5554f8) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x555500u;
label_555500:
    // 0x555500: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x555500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_555504:
    // 0x555504: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x555504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_555508:
    // 0x555508: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x555508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_55550c:
    // 0x55550c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x55550cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_555510:
    // 0x555510: 0x10000045  b           . + 4 + (0x45 << 2)
label_555514:
    if (ctx->pc == 0x555514u) {
        ctx->pc = 0x555514u;
            // 0x555514: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->pc = 0x555518u;
        goto label_555518;
    }
    ctx->pc = 0x555510u;
    {
        const bool branch_taken_0x555510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555510u;
            // 0x555514: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555510) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x555518u;
label_555518:
    // 0x555518: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x555518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_55551c:
    // 0x55551c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x55551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_555520:
    // 0x555520: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x555520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_555524:
    // 0x555524: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x555524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_555528:
    // 0x555528: 0x1000003f  b           . + 4 + (0x3F << 2)
label_55552c:
    if (ctx->pc == 0x55552Cu) {
        ctx->pc = 0x55552Cu;
            // 0x55552c: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->pc = 0x555530u;
        goto label_555530;
    }
    ctx->pc = 0x555528u;
    {
        const bool branch_taken_0x555528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555528u;
            // 0x55552c: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555528) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x555530u;
label_555530:
    // 0x555530: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x555530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_555534:
    // 0x555534: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x555534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_555538:
    // 0x555538: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x555538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_55553c:
    // 0x55553c: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x55553cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_555540:
    // 0x555540: 0x10000039  b           . + 4 + (0x39 << 2)
label_555544:
    if (ctx->pc == 0x555544u) {
        ctx->pc = 0x555544u;
            // 0x555544: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->pc = 0x555548u;
        goto label_555548;
    }
    ctx->pc = 0x555540u;
    {
        const bool branch_taken_0x555540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555540u;
            // 0x555544: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555540) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x555548u;
label_555548:
    // 0x555548: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x555548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_55554c:
    // 0x55554c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_555550:
    // 0x555550: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x555550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_555554:
    // 0x555554: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x555554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_555558:
    // 0x555558: 0x10000033  b           . + 4 + (0x33 << 2)
label_55555c:
    if (ctx->pc == 0x55555Cu) {
        ctx->pc = 0x55555Cu;
            // 0x55555c: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->pc = 0x555560u;
        goto label_555560;
    }
    ctx->pc = 0x555558u;
    {
        const bool branch_taken_0x555558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555558u;
            // 0x55555c: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555558) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x555560u;
label_555560:
    // 0x555560: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x555560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_555564:
    // 0x555564: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x555564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_555568:
    // 0x555568: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x555568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_55556c:
    // 0x55556c: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x55556cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_555570:
    // 0x555570: 0x1000002d  b           . + 4 + (0x2D << 2)
label_555574:
    if (ctx->pc == 0x555574u) {
        ctx->pc = 0x555574u;
            // 0x555574: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->pc = 0x555578u;
        goto label_555578;
    }
    ctx->pc = 0x555570u;
    {
        const bool branch_taken_0x555570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555570u;
            // 0x555574: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555570) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x555578u;
label_555578:
    // 0x555578: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x555578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_55557c:
    // 0x55557c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x55557cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_555580:
    // 0x555580: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x555580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_555584:
    // 0x555584: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x555584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_555588:
    // 0x555588: 0x10000027  b           . + 4 + (0x27 << 2)
label_55558c:
    if (ctx->pc == 0x55558Cu) {
        ctx->pc = 0x55558Cu;
            // 0x55558c: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->pc = 0x555590u;
        goto label_555590;
    }
    ctx->pc = 0x555588u;
    {
        const bool branch_taken_0x555588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555588u;
            // 0x55558c: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555588) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x555590u;
label_555590:
    // 0x555590: 0x24c40024  addiu       $a0, $a2, 0x24
    ctx->pc = 0x555590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
label_555594:
    // 0x555594: 0xc0b90e0  jal         func_2E4380
label_555598:
    if (ctx->pc == 0x555598u) {
        ctx->pc = 0x555598u;
            // 0x555598: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x55559Cu;
        goto label_55559c;
    }
    ctx->pc = 0x555594u;
    SET_GPR_U32(ctx, 31, 0x55559Cu);
    ctx->pc = 0x555598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555594u;
            // 0x555598: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55559Cu; }
        if (ctx->pc != 0x55559Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55559Cu; }
        if (ctx->pc != 0x55559Cu) { return; }
    }
    ctx->pc = 0x55559Cu;
label_55559c:
    // 0x55559c: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_5555a0:
    if (ctx->pc == 0x5555A0u) {
        ctx->pc = 0x5555A0u;
            // 0x5555a0: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->pc = 0x5555A4u;
        goto label_5555a4;
    }
    ctx->pc = 0x55559Cu;
    {
        const bool branch_taken_0x55559c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55559c) {
            ctx->pc = 0x5555A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55559Cu;
            // 0x5555a0: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5555A4u;
label_5555a4:
    // 0x5555a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5555a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5555a8:
    // 0x5555a8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x5555a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5555ac:
    // 0x5555ac: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x5555acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_5555b0:
    // 0x5555b0: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x5555b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_5555b4:
    // 0x5555b4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_5555b8:
    if (ctx->pc == 0x5555B8u) {
        ctx->pc = 0x5555B8u;
            // 0x5555b8: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->pc = 0x5555BCu;
        goto label_5555bc;
    }
    ctx->pc = 0x5555B4u;
    {
        const bool branch_taken_0x5555b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5555B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5555B4u;
            // 0x5555b8: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5555b4) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5555BCu;
label_5555bc:
    // 0x5555bc: 0x24c40024  addiu       $a0, $a2, 0x24
    ctx->pc = 0x5555bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
label_5555c0:
    // 0x5555c0: 0xc0b90e0  jal         func_2E4380
label_5555c4:
    if (ctx->pc == 0x5555C4u) {
        ctx->pc = 0x5555C4u;
            // 0x5555c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x5555C8u;
        goto label_5555c8;
    }
    ctx->pc = 0x5555C0u;
    SET_GPR_U32(ctx, 31, 0x5555C8u);
    ctx->pc = 0x5555C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5555C0u;
            // 0x5555c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5555C8u; }
        if (ctx->pc != 0x5555C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5555C8u; }
        if (ctx->pc != 0x5555C8u) { return; }
    }
    ctx->pc = 0x5555C8u;
label_5555c8:
    // 0x5555c8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_5555cc:
    if (ctx->pc == 0x5555CCu) {
        ctx->pc = 0x5555CCu;
            // 0x5555cc: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->pc = 0x5555D0u;
        goto label_5555d0;
    }
    ctx->pc = 0x5555C8u;
    {
        const bool branch_taken_0x5555c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5555c8) {
            ctx->pc = 0x5555CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5555C8u;
            // 0x5555cc: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5555D0u;
label_5555d0:
    // 0x5555d0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5555d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5555d4:
    // 0x5555d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x5555d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_5555d8:
    // 0x5555d8: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x5555d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_5555dc:
    // 0x5555dc: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x5555dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_5555e0:
    // 0x5555e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_5555e4:
    if (ctx->pc == 0x5555E4u) {
        ctx->pc = 0x5555E4u;
            // 0x5555e4: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->pc = 0x5555E8u;
        goto label_5555e8;
    }
    ctx->pc = 0x5555E0u;
    {
        const bool branch_taken_0x5555e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5555E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5555E0u;
            // 0x5555e4: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5555e0) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5555E8u;
label_5555e8:
    // 0x5555e8: 0x24c40024  addiu       $a0, $a2, 0x24
    ctx->pc = 0x5555e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
label_5555ec:
    // 0x5555ec: 0xc0b90e0  jal         func_2E4380
label_5555f0:
    if (ctx->pc == 0x5555F0u) {
        ctx->pc = 0x5555F0u;
            // 0x5555f0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x5555F4u;
        goto label_5555f4;
    }
    ctx->pc = 0x5555ECu;
    SET_GPR_U32(ctx, 31, 0x5555F4u);
    ctx->pc = 0x5555F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5555ECu;
            // 0x5555f0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5555F4u; }
        if (ctx->pc != 0x5555F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5555F4u; }
        if (ctx->pc != 0x5555F4u) { return; }
    }
    ctx->pc = 0x5555F4u;
label_5555f4:
    // 0x5555f4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_5555f8:
    if (ctx->pc == 0x5555F8u) {
        ctx->pc = 0x5555F8u;
            // 0x5555f8: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->pc = 0x5555FCu;
        goto label_5555fc;
    }
    ctx->pc = 0x5555F4u;
    {
        const bool branch_taken_0x5555f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5555f4) {
            ctx->pc = 0x5555F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5555F4u;
            // 0x5555f8: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x5555FCu;
label_5555fc:
    // 0x5555fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5555fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_555600:
    // 0x555600: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x555600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_555604:
    // 0x555604: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x555604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_555608:
    // 0x555608: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x555608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_55560c:
    // 0x55560c: 0x10000006  b           . + 4 + (0x6 << 2)
label_555610:
    if (ctx->pc == 0x555610u) {
        ctx->pc = 0x555610u;
            // 0x555610: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->pc = 0x555614u;
        goto label_555614;
    }
    ctx->pc = 0x55560Cu;
    {
        const bool branch_taken_0x55560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55560Cu;
            // 0x555610: 0xac6403cc  sw          $a0, 0x3CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55560c) {
            ctx->pc = 0x555628u;
            goto label_555628;
        }
    }
    ctx->pc = 0x555614u;
label_555614:
    // 0x555614: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x555614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_555618:
    // 0x555618: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x555618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_55561c:
    // 0x55561c: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x55561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_555620:
    // 0x555620: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x555620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_555624:
    // 0x555624: 0xac6403cc  sw          $a0, 0x3CC($v1)
    ctx->pc = 0x555624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 4));
label_555628:
    // 0x555628: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x555628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_55562c:
    // 0x55562c: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_555630:
    if (ctx->pc == 0x555630u) {
        ctx->pc = 0x555630u;
            // 0x555630: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x555634u;
        goto label_555634;
    }
    ctx->pc = 0x55562Cu;
    {
        const bool branch_taken_0x55562c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55562c) {
            ctx->pc = 0x555630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55562Cu;
            // 0x555630: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555658u;
            goto label_555658;
        }
    }
    ctx->pc = 0x555634u;
label_555634:
    // 0x555634: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x555634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_555638:
    // 0x555638: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x555638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_55563c:
    // 0x55563c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x55563cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_555640:
    // 0x555640: 0x2407fc18  addiu       $a3, $zero, -0x3E8
    ctx->pc = 0x555640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
label_555644:
    // 0x555644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x555644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_555648:
    // 0x555648: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x555648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55564c:
    // 0x55564c: 0xc0c85cc  jal         func_321730
label_555650:
    if (ctx->pc == 0x555650u) {
        ctx->pc = 0x555650u;
            // 0x555650: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555654u;
        goto label_555654;
    }
    ctx->pc = 0x55564Cu;
    SET_GPR_U32(ctx, 31, 0x555654u);
    ctx->pc = 0x555650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55564Cu;
            // 0x555650: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555654u; }
        if (ctx->pc != 0x555654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555654u; }
        if (ctx->pc != 0x555654u) { return; }
    }
    ctx->pc = 0x555654u;
label_555654:
    // 0x555654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x555654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_555658:
    // 0x555658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x555658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55565c:
    // 0x55565c: 0x3e00008  jr          $ra
label_555660:
    if (ctx->pc == 0x555660u) {
        ctx->pc = 0x555660u;
            // 0x555660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x555664u;
        goto label_555664;
    }
    ctx->pc = 0x55565Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x555660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55565Cu;
            // 0x555660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x555664u;
label_555664:
    // 0x555664: 0x0  nop
    ctx->pc = 0x555664u;
    // NOP
label_555668:
    // 0x555668: 0x0  nop
    ctx->pc = 0x555668u;
    // NOP
label_55566c:
    // 0x55566c: 0x0  nop
    ctx->pc = 0x55566cu;
    // NOP
label_555670:
    // 0x555670: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x555670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_555674:
    // 0x555674: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x555674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_555678:
    // 0x555678: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x555678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_55567c:
    // 0x55567c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x55567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_555680:
    // 0x555680: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x555680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_555684:
    // 0x555684: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x555684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_555688:
    // 0x555688: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x555688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_55568c:
    // 0x55568c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x55568cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_555690:
    // 0x555690: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x555690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_555694:
    // 0x555694: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x555694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_555698:
    // 0x555698: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x555698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_55569c:
    // 0x55569c: 0x8c5189e8  lw          $s1, -0x7618($v0)
    ctx->pc = 0x55569cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_5556a0:
    // 0x5556a0: 0xc0c9a58  jal         func_326960
label_5556a4:
    if (ctx->pc == 0x5556A4u) {
        ctx->pc = 0x5556A4u;
            // 0x5556a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x5556A8u;
        goto label_5556a8;
    }
    ctx->pc = 0x5556A0u;
    SET_GPR_U32(ctx, 31, 0x5556A8u);
    ctx->pc = 0x5556A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5556A0u;
            // 0x5556a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5556A8u; }
        if (ctx->pc != 0x5556A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5556A8u; }
        if (ctx->pc != 0x5556A8u) { return; }
    }
    ctx->pc = 0x5556A8u;
label_5556a8:
    // 0x5556a8: 0x92650010  lbu         $a1, 0x10($s3)
    ctx->pc = 0x5556a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_5556ac:
    // 0x5556ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x5556acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5556b0:
    // 0x5556b0: 0x10a30101  beq         $a1, $v1, . + 4 + (0x101 << 2)
label_5556b4:
    if (ctx->pc == 0x5556B4u) {
        ctx->pc = 0x5556B4u;
            // 0x5556b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5556B8u;
        goto label_5556b8;
    }
    ctx->pc = 0x5556B0u;
    {
        const bool branch_taken_0x5556b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x5556B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5556B0u;
            // 0x5556b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5556b0) {
            ctx->pc = 0x555AB8u;
            goto label_555ab8;
        }
    }
    ctx->pc = 0x5556B8u;
label_5556b8:
    // 0x5556b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5556b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5556bc:
    // 0x5556bc: 0x50a300cd  beql        $a1, $v1, . + 4 + (0xCD << 2)
label_5556c0:
    if (ctx->pc == 0x5556C0u) {
        ctx->pc = 0x5556C0u;
            // 0x5556c0: 0x9263005c  lbu         $v1, 0x5C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->pc = 0x5556C4u;
        goto label_5556c4;
    }
    ctx->pc = 0x5556BCu;
    {
        const bool branch_taken_0x5556bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5556bc) {
            ctx->pc = 0x5556C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5556BCu;
            // 0x5556c0: 0x9263005c  lbu         $v1, 0x5C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5559F4u;
            goto label_5559f4;
        }
    }
    ctx->pc = 0x5556C4u;
label_5556c4:
    // 0x5556c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5556c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5556c8:
    // 0x5556c8: 0x50a40095  beql        $a1, $a0, . + 4 + (0x95 << 2)
label_5556cc:
    if (ctx->pc == 0x5556CCu) {
        ctx->pc = 0x5556CCu;
            // 0x5556cc: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x5556D0u;
        goto label_5556d0;
    }
    ctx->pc = 0x5556C8u;
    {
        const bool branch_taken_0x5556c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x5556c8) {
            ctx->pc = 0x5556CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5556C8u;
            // 0x5556cc: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555920u;
            goto label_555920;
        }
    }
    ctx->pc = 0x5556D0u;
label_5556d0:
    // 0x5556d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5556d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5556d4:
    // 0x5556d4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_5556d8:
    if (ctx->pc == 0x5556D8u) {
        ctx->pc = 0x5556D8u;
            // 0x5556d8: 0x92660058  lbu         $a2, 0x58($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x5556DCu;
        goto label_5556dc;
    }
    ctx->pc = 0x5556D4u;
    {
        const bool branch_taken_0x5556d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5556d4) {
            ctx->pc = 0x5556D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5556D4u;
            // 0x5556d8: 0x92660058  lbu         $a2, 0x58($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5556E4u;
            goto label_5556e4;
        }
    }
    ctx->pc = 0x5556DCu;
label_5556dc:
    // 0x5556dc: 0x10000119  b           . + 4 + (0x119 << 2)
label_5556e0:
    if (ctx->pc == 0x5556E0u) {
        ctx->pc = 0x5556E0u;
            // 0x5556e0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x5556E4u;
        goto label_5556e4;
    }
    ctx->pc = 0x5556DCu;
    {
        const bool branch_taken_0x5556dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5556E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5556DCu;
            // 0x5556e0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5556dc) {
            ctx->pc = 0x555B44u;
            goto label_555b44;
        }
    }
    ctx->pc = 0x5556E4u;
label_5556e4:
    // 0x5556e4: 0x50c4002e  beql        $a2, $a0, . + 4 + (0x2E << 2)
label_5556e8:
    if (ctx->pc == 0x5556E8u) {
        ctx->pc = 0x5556E8u;
            // 0x5556e8: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x5556ECu;
        goto label_5556ec;
    }
    ctx->pc = 0x5556E4u;
    {
        const bool branch_taken_0x5556e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x5556e4) {
            ctx->pc = 0x5556E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5556E4u;
            // 0x5556e8: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5557A0u;
            goto label_5557a0;
        }
    }
    ctx->pc = 0x5556ECu;
label_5556ec:
    // 0x5556ec: 0x50c3001f  beql        $a2, $v1, . + 4 + (0x1F << 2)
label_5556f0:
    if (ctx->pc == 0x5556F0u) {
        ctx->pc = 0x5556F0u;
            // 0x5556f0: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x5556F4u;
        goto label_5556f4;
    }
    ctx->pc = 0x5556ECu;
    {
        const bool branch_taken_0x5556ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x5556ec) {
            ctx->pc = 0x5556F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5556ECu;
            // 0x5556f0: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55576Cu;
            goto label_55576c;
        }
    }
    ctx->pc = 0x5556F4u;
label_5556f4:
    // 0x5556f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5556f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5556f8:
    // 0x5556f8: 0x50c30011  beql        $a2, $v1, . + 4 + (0x11 << 2)
label_5556fc:
    if (ctx->pc == 0x5556FCu) {
        ctx->pc = 0x5556FCu;
            // 0x5556fc: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x555700u;
        goto label_555700;
    }
    ctx->pc = 0x5556F8u;
    {
        const bool branch_taken_0x5556f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x5556f8) {
            ctx->pc = 0x5556FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5556F8u;
            // 0x5556fc: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555740u;
            goto label_555740;
        }
    }
    ctx->pc = 0x555700u;
label_555700:
    // 0x555700: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
label_555704:
    if (ctx->pc == 0x555704u) {
        ctx->pc = 0x555704u;
            // 0x555704: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x555708u;
        goto label_555708;
    }
    ctx->pc = 0x555700u;
    {
        const bool branch_taken_0x555700 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x555700) {
            ctx->pc = 0x555704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555700u;
            // 0x555704: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555710u;
            goto label_555710;
        }
    }
    ctx->pc = 0x555708u;
label_555708:
    // 0x555708: 0x1000010d  b           . + 4 + (0x10D << 2)
label_55570c:
    if (ctx->pc == 0x55570Cu) {
        ctx->pc = 0x555710u;
        goto label_555710;
    }
    ctx->pc = 0x555708u;
    {
        const bool branch_taken_0x555708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555708) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x555710u;
label_555710:
    // 0x555710: 0xc0ca008  jal         func_328020
label_555714:
    if (ctx->pc == 0x555714u) {
        ctx->pc = 0x555714u;
            // 0x555714: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x555718u;
        goto label_555718;
    }
    ctx->pc = 0x555710u;
    SET_GPR_U32(ctx, 31, 0x555718u);
    ctx->pc = 0x555714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555710u;
            // 0x555714: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555718u; }
        if (ctx->pc != 0x555718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555718u; }
        if (ctx->pc != 0x555718u) { return; }
    }
    ctx->pc = 0x555718u;
label_555718:
    // 0x555718: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
label_55571c:
    if (ctx->pc == 0x55571Cu) {
        ctx->pc = 0x555720u;
        goto label_555720;
    }
    ctx->pc = 0x555718u;
    {
        const bool branch_taken_0x555718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555718) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x555720u;
label_555720:
    // 0x555720: 0x92620058  lbu         $v0, 0x58($s3)
    ctx->pc = 0x555720u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 88)));
label_555724:
    // 0x555724: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x555724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_555728:
    // 0x555728: 0xa2620058  sb          $v0, 0x58($s3)
    ctx->pc = 0x555728u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 2));
label_55572c:
    // 0x55572c: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x55572cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_555730:
    // 0x555730: 0xc0c9ec0  jal         func_327B00
label_555734:
    if (ctx->pc == 0x555734u) {
        ctx->pc = 0x555734u;
            // 0x555734: 0x3405cb75  ori         $a1, $zero, 0xCB75 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52085);
        ctx->pc = 0x555738u;
        goto label_555738;
    }
    ctx->pc = 0x555730u;
    SET_GPR_U32(ctx, 31, 0x555738u);
    ctx->pc = 0x555734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555730u;
            // 0x555734: 0x3405cb75  ori         $a1, $zero, 0xCB75 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52085);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555738u; }
        if (ctx->pc != 0x555738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555738u; }
        if (ctx->pc != 0x555738u) { return; }
    }
    ctx->pc = 0x555738u;
label_555738:
    // 0x555738: 0x10000101  b           . + 4 + (0x101 << 2)
label_55573c:
    if (ctx->pc == 0x55573Cu) {
        ctx->pc = 0x555740u;
        goto label_555740;
    }
    ctx->pc = 0x555738u;
    {
        const bool branch_taken_0x555738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555738) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x555740u;
label_555740:
    // 0x555740: 0xc0ca008  jal         func_328020
label_555744:
    if (ctx->pc == 0x555744u) {
        ctx->pc = 0x555744u;
            // 0x555744: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x555748u;
        goto label_555748;
    }
    ctx->pc = 0x555740u;
    SET_GPR_U32(ctx, 31, 0x555748u);
    ctx->pc = 0x555744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555740u;
            // 0x555744: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555748u; }
        if (ctx->pc != 0x555748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555748u; }
        if (ctx->pc != 0x555748u) { return; }
    }
    ctx->pc = 0x555748u;
label_555748:
    // 0x555748: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
label_55574c:
    if (ctx->pc == 0x55574Cu) {
        ctx->pc = 0x555750u;
        goto label_555750;
    }
    ctx->pc = 0x555748u;
    {
        const bool branch_taken_0x555748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555748) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x555750u;
label_555750:
    // 0x555750: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x555750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_555754:
    // 0x555754: 0xc0c9ec0  jal         func_327B00
label_555758:
    if (ctx->pc == 0x555758u) {
        ctx->pc = 0x555758u;
            // 0x555758: 0x3405cbb6  ori         $a1, $zero, 0xCBB6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52150);
        ctx->pc = 0x55575Cu;
        goto label_55575c;
    }
    ctx->pc = 0x555754u;
    SET_GPR_U32(ctx, 31, 0x55575Cu);
    ctx->pc = 0x555758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555754u;
            // 0x555758: 0x3405cbb6  ori         $a1, $zero, 0xCBB6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52150);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55575Cu; }
        if (ctx->pc != 0x55575Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55575Cu; }
        if (ctx->pc != 0x55575Cu) { return; }
    }
    ctx->pc = 0x55575Cu;
label_55575c:
    // 0x55575c: 0x92630058  lbu         $v1, 0x58($s3)
    ctx->pc = 0x55575cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 88)));
label_555760:
    // 0x555760: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x555760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_555764:
    // 0x555764: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_555768:
    if (ctx->pc == 0x555768u) {
        ctx->pc = 0x555768u;
            // 0x555768: 0xa2630058  sb          $v1, 0x58($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x55576Cu;
        goto label_55576c;
    }
    ctx->pc = 0x555764u;
    {
        const bool branch_taken_0x555764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555764u;
            // 0x555768: 0xa2630058  sb          $v1, 0x58($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555764) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x55576Cu;
label_55576c:
    // 0x55576c: 0xc0ca008  jal         func_328020
label_555770:
    if (ctx->pc == 0x555770u) {
        ctx->pc = 0x555770u;
            // 0x555770: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x555774u;
        goto label_555774;
    }
    ctx->pc = 0x55576Cu;
    SET_GPR_U32(ctx, 31, 0x555774u);
    ctx->pc = 0x555770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55576Cu;
            // 0x555770: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555774u; }
        if (ctx->pc != 0x555774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555774u; }
        if (ctx->pc != 0x555774u) { return; }
    }
    ctx->pc = 0x555774u;
label_555774:
    // 0x555774: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
label_555778:
    if (ctx->pc == 0x555778u) {
        ctx->pc = 0x55577Cu;
        goto label_55577c;
    }
    ctx->pc = 0x555774u;
    {
        const bool branch_taken_0x555774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555774) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x55577Cu;
label_55577c:
    // 0x55577c: 0xc075268  jal         func_1D49A0
label_555780:
    if (ctx->pc == 0x555780u) {
        ctx->pc = 0x555784u;
        goto label_555784;
    }
    ctx->pc = 0x55577Cu;
    SET_GPR_U32(ctx, 31, 0x555784u);
    ctx->pc = 0x1D49A0u;
    if (runtime->hasFunction(0x1D49A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D49A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555784u; }
        if (ctx->pc != 0x555784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D49A0_0x1d49a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555784u; }
        if (ctx->pc != 0x555784u) { return; }
    }
    ctx->pc = 0x555784u;
label_555784:
    // 0x555784: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x555784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_555788:
    // 0x555788: 0xc0c9ec0  jal         func_327B00
label_55578c:
    if (ctx->pc == 0x55578Cu) {
        ctx->pc = 0x55578Cu;
            // 0x55578c: 0x3405cb70  ori         $a1, $zero, 0xCB70 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52080);
        ctx->pc = 0x555790u;
        goto label_555790;
    }
    ctx->pc = 0x555788u;
    SET_GPR_U32(ctx, 31, 0x555790u);
    ctx->pc = 0x55578Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555788u;
            // 0x55578c: 0x3405cb70  ori         $a1, $zero, 0xCB70 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52080);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555790u; }
        if (ctx->pc != 0x555790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555790u; }
        if (ctx->pc != 0x555790u) { return; }
    }
    ctx->pc = 0x555790u;
label_555790:
    // 0x555790: 0x92630058  lbu         $v1, 0x58($s3)
    ctx->pc = 0x555790u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 88)));
label_555794:
    // 0x555794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x555794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_555798:
    // 0x555798: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_55579c:
    if (ctx->pc == 0x55579Cu) {
        ctx->pc = 0x55579Cu;
            // 0x55579c: 0xa2630058  sb          $v1, 0x58($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x5557A0u;
        goto label_5557a0;
    }
    ctx->pc = 0x555798u;
    {
        const bool branch_taken_0x555798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55579Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555798u;
            // 0x55579c: 0xa2630058  sb          $v1, 0x58($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555798) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x5557A0u;
label_5557a0:
    // 0x5557a0: 0xc0ca008  jal         func_328020
label_5557a4:
    if (ctx->pc == 0x5557A4u) {
        ctx->pc = 0x5557A4u;
            // 0x5557a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x5557A8u;
        goto label_5557a8;
    }
    ctx->pc = 0x5557A0u;
    SET_GPR_U32(ctx, 31, 0x5557A8u);
    ctx->pc = 0x5557A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5557A0u;
            // 0x5557a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5557A8u; }
        if (ctx->pc != 0x5557A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5557A8u; }
        if (ctx->pc != 0x5557A8u) { return; }
    }
    ctx->pc = 0x5557A8u;
label_5557a8:
    // 0x5557a8: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
label_5557ac:
    if (ctx->pc == 0x5557ACu) {
        ctx->pc = 0x5557B0u;
        goto label_5557b0;
    }
    ctx->pc = 0x5557A8u;
    {
        const bool branch_taken_0x5557a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5557a8) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x5557B0u;
label_5557b0:
    // 0x5557b0: 0xc075214  jal         func_1D4850
label_5557b4:
    if (ctx->pc == 0x5557B4u) {
        ctx->pc = 0x5557B8u;
        goto label_5557b8;
    }
    ctx->pc = 0x5557B0u;
    SET_GPR_U32(ctx, 31, 0x5557B8u);
    ctx->pc = 0x1D4850u;
    if (runtime->hasFunction(0x1D4850u)) {
        auto targetFn = runtime->lookupFunction(0x1D4850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5557B8u; }
        if (ctx->pc != 0x5557B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4850_0x1d4850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5557B8u; }
        if (ctx->pc != 0x5557B8u) { return; }
    }
    ctx->pc = 0x5557B8u;
label_5557b8:
    // 0x5557b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5557b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5557bc:
    // 0x5557bc: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x5557bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_5557c0:
    // 0x5557c0: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x5557c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
label_5557c4:
    // 0x5557c4: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x5557c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_5557c8:
    // 0x5557c8: 0xc0c9a60  jal         func_326980
label_5557cc:
    if (ctx->pc == 0x5557CCu) {
        ctx->pc = 0x5557CCu;
            // 0x5557cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5557D0u;
        goto label_5557d0;
    }
    ctx->pc = 0x5557C8u;
    SET_GPR_U32(ctx, 31, 0x5557D0u);
    ctx->pc = 0x5557CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5557C8u;
            // 0x5557cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326980u;
    if (runtime->hasFunction(0x326980u)) {
        auto targetFn = runtime->lookupFunction(0x326980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5557D0u; }
        if (ctx->pc != 0x5557D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326980_0x326980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5557D0u; }
        if (ctx->pc != 0x5557D0u) { return; }
    }
    ctx->pc = 0x5557D0u;
label_5557d0:
    // 0x5557d0: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x5557d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_5557d4:
    // 0x5557d4: 0xc0c9a60  jal         func_326980
label_5557d8:
    if (ctx->pc == 0x5557D8u) {
        ctx->pc = 0x5557D8u;
            // 0x5557d8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x5557DCu;
        goto label_5557dc;
    }
    ctx->pc = 0x5557D4u;
    SET_GPR_U32(ctx, 31, 0x5557DCu);
    ctx->pc = 0x5557D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5557D4u;
            // 0x5557d8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326980u;
    if (runtime->hasFunction(0x326980u)) {
        auto targetFn = runtime->lookupFunction(0x326980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5557DCu; }
        if (ctx->pc != 0x5557DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326980_0x326980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5557DCu; }
        if (ctx->pc != 0x5557DCu) { return; }
    }
    ctx->pc = 0x5557DCu;
label_5557dc:
    // 0x5557dc: 0x92620058  lbu         $v0, 0x58($s3)
    ctx->pc = 0x5557dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 88)));
label_5557e0:
    // 0x5557e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5557e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_5557e4:
    // 0x5557e4: 0xa2620058  sb          $v0, 0x58($s3)
    ctx->pc = 0x5557e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 2));
label_5557e8:
    // 0x5557e8: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x5557e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_5557ec:
    // 0x5557ec: 0xc0c9a58  jal         func_326960
label_5557f0:
    if (ctx->pc == 0x5557F0u) {
        ctx->pc = 0x5557F0u;
            // 0x5557f0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x5557F4u;
        goto label_5557f4;
    }
    ctx->pc = 0x5557ECu;
    SET_GPR_U32(ctx, 31, 0x5557F4u);
    ctx->pc = 0x5557F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5557ECu;
            // 0x5557f0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5557F4u; }
        if (ctx->pc != 0x5557F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5557F4u; }
        if (ctx->pc != 0x5557F4u) { return; }
    }
    ctx->pc = 0x5557F4u;
label_5557f4:
    // 0x5557f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x5557f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5557f8:
    // 0x5557f8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5557f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5557fc:
    // 0x5557fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x5557fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_555800:
    // 0x555800: 0x24a5ee00  addiu       $a1, $a1, -0x1200
    ctx->pc = 0x555800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
label_555804:
    // 0x555804: 0xc123944  jal         func_48E510
label_555808:
    if (ctx->pc == 0x555808u) {
        ctx->pc = 0x555808u;
            // 0x555808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55580Cu;
        goto label_55580c;
    }
    ctx->pc = 0x555804u;
    SET_GPR_U32(ctx, 31, 0x55580Cu);
    ctx->pc = 0x555808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555804u;
            // 0x555808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55580Cu; }
        if (ctx->pc != 0x55580Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55580Cu; }
        if (ctx->pc != 0x55580Cu) { return; }
    }
    ctx->pc = 0x55580Cu;
label_55580c:
    // 0x55580c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x55580cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_555810:
    // 0x555810: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x555810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_555814:
    // 0x555814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x555814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_555818:
    // 0x555818: 0x24a5ee10  addiu       $a1, $a1, -0x11F0
    ctx->pc = 0x555818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962704));
label_55581c:
    // 0x55581c: 0xc123944  jal         func_48E510
label_555820:
    if (ctx->pc == 0x555820u) {
        ctx->pc = 0x555820u;
            // 0x555820: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555824u;
        goto label_555824;
    }
    ctx->pc = 0x55581Cu;
    SET_GPR_U32(ctx, 31, 0x555824u);
    ctx->pc = 0x555820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55581Cu;
            // 0x555820: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555824u; }
        if (ctx->pc != 0x555824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555824u; }
        if (ctx->pc != 0x555824u) { return; }
    }
    ctx->pc = 0x555824u;
label_555824:
    // 0x555824: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x555824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_555828:
    // 0x555828: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x555828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_55582c:
    // 0x55582c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x55582cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_555830:
    // 0x555830: 0x24a5ee20  addiu       $a1, $a1, -0x11E0
    ctx->pc = 0x555830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962720));
label_555834:
    // 0x555834: 0xc123944  jal         func_48E510
label_555838:
    if (ctx->pc == 0x555838u) {
        ctx->pc = 0x555838u;
            // 0x555838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55583Cu;
        goto label_55583c;
    }
    ctx->pc = 0x555834u;
    SET_GPR_U32(ctx, 31, 0x55583Cu);
    ctx->pc = 0x555838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555834u;
            // 0x555838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55583Cu; }
        if (ctx->pc != 0x55583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55583Cu; }
        if (ctx->pc != 0x55583Cu) { return; }
    }
    ctx->pc = 0x55583Cu;
label_55583c:
    // 0x55583c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x55583cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_555840:
    // 0x555840: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x555840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_555844:
    // 0x555844: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x555844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_555848:
    // 0x555848: 0x24a5ee30  addiu       $a1, $a1, -0x11D0
    ctx->pc = 0x555848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962736));
label_55584c:
    // 0x55584c: 0xc123944  jal         func_48E510
label_555850:
    if (ctx->pc == 0x555850u) {
        ctx->pc = 0x555850u;
            // 0x555850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555854u;
        goto label_555854;
    }
    ctx->pc = 0x55584Cu;
    SET_GPR_U32(ctx, 31, 0x555854u);
    ctx->pc = 0x555850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55584Cu;
            // 0x555850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555854u; }
        if (ctx->pc != 0x555854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555854u; }
        if (ctx->pc != 0x555854u) { return; }
    }
    ctx->pc = 0x555854u;
label_555854:
    // 0x555854: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x555854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_555858:
    // 0x555858: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x555858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_55585c:
    // 0x55585c: 0x24a5ee40  addiu       $a1, $a1, -0x11C0
    ctx->pc = 0x55585cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
label_555860:
    // 0x555860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x555860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_555864:
    // 0x555864: 0xc123944  jal         func_48E510
label_555868:
    if (ctx->pc == 0x555868u) {
        ctx->pc = 0x555868u;
            // 0x555868: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55586Cu;
        goto label_55586c;
    }
    ctx->pc = 0x555864u;
    SET_GPR_U32(ctx, 31, 0x55586Cu);
    ctx->pc = 0x555868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555864u;
            // 0x555868: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55586Cu; }
        if (ctx->pc != 0x55586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55586Cu; }
        if (ctx->pc != 0x55586Cu) { return; }
    }
    ctx->pc = 0x55586Cu;
label_55586c:
    // 0x55586c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x55586cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_555870:
    // 0x555870: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x555870u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_555874:
    // 0x555874: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x555874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_555878:
    // 0x555878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x555878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55587c:
    // 0x55587c: 0xc123654  jal         func_48D950
label_555880:
    if (ctx->pc == 0x555880u) {
        ctx->pc = 0x555880u;
            // 0x555880: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555884u;
        goto label_555884;
    }
    ctx->pc = 0x55587Cu;
    SET_GPR_U32(ctx, 31, 0x555884u);
    ctx->pc = 0x555880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55587Cu;
            // 0x555880: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555884u; }
        if (ctx->pc != 0x555884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555884u; }
        if (ctx->pc != 0x555884u) { return; }
    }
    ctx->pc = 0x555884u;
label_555884:
    // 0x555884: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x555884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_555888:
    // 0x555888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x555888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55588c:
    // 0x55588c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55588cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_555890:
    // 0x555890: 0xc123654  jal         func_48D950
label_555894:
    if (ctx->pc == 0x555894u) {
        ctx->pc = 0x555894u;
            // 0x555894: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555898u;
        goto label_555898;
    }
    ctx->pc = 0x555890u;
    SET_GPR_U32(ctx, 31, 0x555898u);
    ctx->pc = 0x555894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555890u;
            // 0x555894: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555898u; }
        if (ctx->pc != 0x555898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555898u; }
        if (ctx->pc != 0x555898u) { return; }
    }
    ctx->pc = 0x555898u;
label_555898:
    // 0x555898: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x555898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_55589c:
    // 0x55589c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x55589cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5558a0:
    // 0x5558a0: 0x320f809  jalr        $t9
label_5558a4:
    if (ctx->pc == 0x5558A4u) {
        ctx->pc = 0x5558A4u;
            // 0x5558a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5558A8u;
        goto label_5558a8;
    }
    ctx->pc = 0x5558A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5558A8u);
        ctx->pc = 0x5558A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5558A0u;
            // 0x5558a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5558A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5558A8u; }
            if (ctx->pc != 0x5558A8u) { return; }
        }
        }
    }
    ctx->pc = 0x5558A8u;
label_5558a8:
    // 0x5558a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5558a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5558ac:
    // 0x5558ac: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5558acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5558b0:
    // 0x5558b0: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x5558b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_5558b4:
    // 0x5558b4: 0x8c440188  lw          $a0, 0x188($v0)
    ctx->pc = 0x5558b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
label_5558b8:
    // 0x5558b8: 0xc05d85a  jal         func_176168
label_5558bc:
    if (ctx->pc == 0x5558BCu) {
        ctx->pc = 0x5558BCu;
            // 0x5558bc: 0x24a5ee50  addiu       $a1, $a1, -0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
        ctx->pc = 0x5558C0u;
        goto label_5558c0;
    }
    ctx->pc = 0x5558B8u;
    SET_GPR_U32(ctx, 31, 0x5558C0u);
    ctx->pc = 0x5558BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5558B8u;
            // 0x5558bc: 0x24a5ee50  addiu       $a1, $a1, -0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5558C0u; }
        if (ctx->pc != 0x5558C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5558C0u; }
        if (ctx->pc != 0x5558C0u) { return; }
    }
    ctx->pc = 0x5558C0u;
label_5558c0:
    // 0x5558c0: 0xc155990  jal         func_556640
label_5558c4:
    if (ctx->pc == 0x5558C4u) {
        ctx->pc = 0x5558C4u;
            // 0x5558c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5558C8u;
        goto label_5558c8;
    }
    ctx->pc = 0x5558C0u;
    SET_GPR_U32(ctx, 31, 0x5558C8u);
    ctx->pc = 0x5558C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5558C0u;
            // 0x5558c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556640u;
    if (runtime->hasFunction(0x556640u)) {
        auto targetFn = runtime->lookupFunction(0x556640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5558C8u; }
        if (ctx->pc != 0x5558C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556640_0x556640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5558C8u; }
        if (ctx->pc != 0x5558C8u) { return; }
    }
    ctx->pc = 0x5558C8u;
label_5558c8:
    // 0x5558c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5558c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5558cc:
    // 0x5558cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5558ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5558d0:
    // 0x5558d0: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x5558d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_5558d4:
    // 0x5558d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5558d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5558d8:
    // 0x5558d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5558d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5558dc:
    // 0x5558dc: 0xc0fd020  jal         func_3F4080
label_5558e0:
    if (ctx->pc == 0x5558E0u) {
        ctx->pc = 0x5558E0u;
            // 0x5558e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5558E4u;
        goto label_5558e4;
    }
    ctx->pc = 0x5558DCu;
    SET_GPR_U32(ctx, 31, 0x5558E4u);
    ctx->pc = 0x5558E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5558DCu;
            // 0x5558e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5558E4u; }
        if (ctx->pc != 0x5558E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5558E4u; }
        if (ctx->pc != 0x5558E4u) { return; }
    }
    ctx->pc = 0x5558E4u;
label_5558e4:
    // 0x5558e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5558e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5558e8:
    // 0x5558e8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x5558e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_5558ec:
    // 0x5558ec: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x5558ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_5558f0:
    // 0x5558f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5558f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5558f4:
    // 0x5558f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5558f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5558f8:
    // 0x5558f8: 0xc0fd020  jal         func_3F4080
label_5558fc:
    if (ctx->pc == 0x5558FCu) {
        ctx->pc = 0x5558FCu;
            // 0x5558fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555900u;
        goto label_555900;
    }
    ctx->pc = 0x5558F8u;
    SET_GPR_U32(ctx, 31, 0x555900u);
    ctx->pc = 0x5558FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5558F8u;
            // 0x5558fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555900u; }
        if (ctx->pc != 0x555900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555900u; }
        if (ctx->pc != 0x555900u) { return; }
    }
    ctx->pc = 0x555900u;
label_555900:
    // 0x555900: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x555900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_555904:
    // 0x555904: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x555904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_555908:
    // 0x555908: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x555908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_55590c:
    // 0x55590c: 0x802027  not         $a0, $a0
    ctx->pc = 0x55590cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_555910:
    // 0x555910: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x555910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_555914:
    // 0x555914: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x555914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_555918:
    // 0x555918: 0x10000089  b           . + 4 + (0x89 << 2)
label_55591c:
    if (ctx->pc == 0x55591Cu) {
        ctx->pc = 0x55591Cu;
            // 0x55591c: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x555920u;
        goto label_555920;
    }
    ctx->pc = 0x555918u;
    {
        const bool branch_taken_0x555918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555918u;
            // 0x55591c: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555918) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x555920u;
label_555920:
    // 0x555920: 0xc0c9a58  jal         func_326960
label_555924:
    if (ctx->pc == 0x555924u) {
        ctx->pc = 0x555924u;
            // 0x555924: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x555928u;
        goto label_555928;
    }
    ctx->pc = 0x555920u;
    SET_GPR_U32(ctx, 31, 0x555928u);
    ctx->pc = 0x555924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555920u;
            // 0x555924: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555928u; }
        if (ctx->pc != 0x555928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555928u; }
        if (ctx->pc != 0x555928u) { return; }
    }
    ctx->pc = 0x555928u;
label_555928:
    // 0x555928: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x555928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_55592c:
    // 0x55592c: 0xc123328  jal         func_48CCA0
label_555930:
    if (ctx->pc == 0x555930u) {
        ctx->pc = 0x555930u;
            // 0x555930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x555934u;
        goto label_555934;
    }
    ctx->pc = 0x55592Cu;
    SET_GPR_U32(ctx, 31, 0x555934u);
    ctx->pc = 0x555930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55592Cu;
            // 0x555930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555934u; }
        if (ctx->pc != 0x555934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555934u; }
        if (ctx->pc != 0x555934u) { return; }
    }
    ctx->pc = 0x555934u;
label_555934:
    // 0x555934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x555934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_555938:
    // 0x555938: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x555938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_55593c:
    // 0x55593c: 0x50500005  beql        $v0, $s0, . + 4 + (0x5 << 2)
label_555940:
    if (ctx->pc == 0x555940u) {
        ctx->pc = 0x555940u;
            // 0x555940: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555944u;
        goto label_555944;
    }
    ctx->pc = 0x55593Cu;
    {
        const bool branch_taken_0x55593c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x55593c) {
            ctx->pc = 0x555940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55593Cu;
            // 0x555940: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555954u;
            goto label_555954;
        }
    }
    ctx->pc = 0x555944u;
label_555944:
    // 0x555944: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x555944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_555948:
    // 0x555948: 0xc1558dc  jal         func_556370
label_55594c:
    if (ctx->pc == 0x55594Cu) {
        ctx->pc = 0x55594Cu;
            // 0x55594c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555950u;
        goto label_555950;
    }
    ctx->pc = 0x555948u;
    SET_GPR_U32(ctx, 31, 0x555950u);
    ctx->pc = 0x55594Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555948u;
            // 0x55594c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556370u;
    if (runtime->hasFunction(0x556370u)) {
        auto targetFn = runtime->lookupFunction(0x556370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555950u; }
        if (ctx->pc != 0x555950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556370_0x556370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555950u; }
        if (ctx->pc != 0x555950u) { return; }
    }
    ctx->pc = 0x555950u;
label_555950:
    // 0x555950: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x555950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_555954:
    // 0x555954: 0xc155848  jal         func_556120
label_555958:
    if (ctx->pc == 0x555958u) {
        ctx->pc = 0x555958u;
            // 0x555958: 0xae700064  sw          $s0, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 16));
        ctx->pc = 0x55595Cu;
        goto label_55595c;
    }
    ctx->pc = 0x555954u;
    SET_GPR_U32(ctx, 31, 0x55595Cu);
    ctx->pc = 0x555958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555954u;
            // 0x555958: 0xae700064  sw          $s0, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556120u;
    if (runtime->hasFunction(0x556120u)) {
        auto targetFn = runtime->lookupFunction(0x556120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55595Cu; }
        if (ctx->pc != 0x55595Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556120_0x556120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55595Cu; }
        if (ctx->pc != 0x55595Cu) { return; }
    }
    ctx->pc = 0x55595Cu;
label_55595c:
    // 0x55595c: 0xc1557e8  jal         func_555FA0
label_555960:
    if (ctx->pc == 0x555960u) {
        ctx->pc = 0x555960u;
            // 0x555960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555964u;
        goto label_555964;
    }
    ctx->pc = 0x55595Cu;
    SET_GPR_U32(ctx, 31, 0x555964u);
    ctx->pc = 0x555960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55595Cu;
            // 0x555960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x555FA0u;
    if (runtime->hasFunction(0x555FA0u)) {
        auto targetFn = runtime->lookupFunction(0x555FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555964u; }
        if (ctx->pc != 0x555964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00555FA0_0x555fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555964u; }
        if (ctx->pc != 0x555964u) { return; }
    }
    ctx->pc = 0x555964u;
label_555964:
    // 0x555964: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x555964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_555968:
    // 0x555968: 0xc0c9a58  jal         func_326960
label_55596c:
    if (ctx->pc == 0x55596Cu) {
        ctx->pc = 0x55596Cu;
            // 0x55596c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x555970u;
        goto label_555970;
    }
    ctx->pc = 0x555968u;
    SET_GPR_U32(ctx, 31, 0x555970u);
    ctx->pc = 0x55596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555968u;
            // 0x55596c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555970u; }
        if (ctx->pc != 0x555970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555970u; }
        if (ctx->pc != 0x555970u) { return; }
    }
    ctx->pc = 0x555970u;
label_555970:
    // 0x555970: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x555970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_555974:
    // 0x555974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x555974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_555978:
    // 0x555978: 0xc123328  jal         func_48CCA0
label_55597c:
    if (ctx->pc == 0x55597Cu) {
        ctx->pc = 0x55597Cu;
            // 0x55597c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x555980u;
        goto label_555980;
    }
    ctx->pc = 0x555978u;
    SET_GPR_U32(ctx, 31, 0x555980u);
    ctx->pc = 0x55597Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555978u;
            // 0x55597c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555980u; }
        if (ctx->pc != 0x555980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555980u; }
        if (ctx->pc != 0x555980u) { return; }
    }
    ctx->pc = 0x555980u;
label_555980:
    // 0x555980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x555980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_555984:
    // 0x555984: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_555988:
    if (ctx->pc == 0x555988u) {
        ctx->pc = 0x555988u;
            // 0x555988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55598Cu;
        goto label_55598c;
    }
    ctx->pc = 0x555984u;
    {
        const bool branch_taken_0x555984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x555984) {
            ctx->pc = 0x555988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555984u;
            // 0x555988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555994u;
            goto label_555994;
        }
    }
    ctx->pc = 0x55598Cu;
label_55598c:
    // 0x55598c: 0x10000015  b           . + 4 + (0x15 << 2)
label_555990:
    if (ctx->pc == 0x555990u) {
        ctx->pc = 0x555990u;
            // 0x555990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555994u;
        goto label_555994;
    }
    ctx->pc = 0x55598Cu;
    {
        const bool branch_taken_0x55598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55598Cu;
            // 0x555990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55598c) {
            ctx->pc = 0x5559E4u;
            goto label_5559e4;
        }
    }
    ctx->pc = 0x555994u;
label_555994:
    // 0x555994: 0xc155750  jal         func_555D40
label_555998:
    if (ctx->pc == 0x555998u) {
        ctx->pc = 0x55599Cu;
        goto label_55599c;
    }
    ctx->pc = 0x555994u;
    SET_GPR_U32(ctx, 31, 0x55599Cu);
    ctx->pc = 0x555D40u;
    if (runtime->hasFunction(0x555D40u)) {
        auto targetFn = runtime->lookupFunction(0x555D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55599Cu; }
        if (ctx->pc != 0x55599Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00555D40_0x555d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55599Cu; }
        if (ctx->pc != 0x55599Cu) { return; }
    }
    ctx->pc = 0x55599Cu;
label_55599c:
    // 0x55599c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_5559a0:
    if (ctx->pc == 0x5559A0u) {
        ctx->pc = 0x5559A0u;
            // 0x5559a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5559A4u;
        goto label_5559a4;
    }
    ctx->pc = 0x55599Cu;
    {
        const bool branch_taken_0x55599c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55599c) {
            ctx->pc = 0x5559A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55599Cu;
            // 0x5559a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5559DCu;
            goto label_5559dc;
        }
    }
    ctx->pc = 0x5559A4u;
label_5559a4:
    // 0x5559a4: 0xa2600080  sb          $zero, 0x80($s3)
    ctx->pc = 0x5559a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 128), (uint8_t)GPR_U32(ctx, 0));
label_5559a8:
    // 0x5559a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x5559a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_5559ac:
    // 0x5559ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x5559acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_5559b0:
    // 0x5559b0: 0xc1232d8  jal         func_48CB60
label_5559b4:
    if (ctx->pc == 0x5559B4u) {
        ctx->pc = 0x5559B4u;
            // 0x5559b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5559B8u;
        goto label_5559b8;
    }
    ctx->pc = 0x5559B0u;
    SET_GPR_U32(ctx, 31, 0x5559B8u);
    ctx->pc = 0x5559B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5559B0u;
            // 0x5559b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5559B8u; }
        if (ctx->pc != 0x5559B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5559B8u; }
        if (ctx->pc != 0x5559B8u) { return; }
    }
    ctx->pc = 0x5559B8u;
label_5559b8:
    // 0x5559b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5559b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5559bc:
    // 0x5559bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x5559bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_5559c0:
    // 0x5559c0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x5559c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_5559c4:
    // 0x5559c4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x5559c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_5559c8:
    // 0x5559c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5559c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5559cc:
    // 0x5559cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5559ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5559d0:
    // 0x5559d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5559d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5559d4:
    // 0x5559d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_5559d8:
    if (ctx->pc == 0x5559D8u) {
        ctx->pc = 0x5559D8u;
            // 0x5559d8: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x5559DCu;
        goto label_5559dc;
    }
    ctx->pc = 0x5559D4u;
    {
        const bool branch_taken_0x5559d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5559D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5559D4u;
            // 0x5559d8: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5559d4) {
            ctx->pc = 0x5559E0u;
            goto label_5559e0;
        }
    }
    ctx->pc = 0x5559DCu;
label_5559dc:
    // 0x5559dc: 0xa2620080  sb          $v0, 0x80($s3)
    ctx->pc = 0x5559dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 128), (uint8_t)GPR_U32(ctx, 2));
label_5559e0:
    // 0x5559e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5559e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5559e4:
    // 0x5559e4: 0xc1556dc  jal         func_555B70
label_5559e8:
    if (ctx->pc == 0x5559E8u) {
        ctx->pc = 0x5559ECu;
        goto label_5559ec;
    }
    ctx->pc = 0x5559E4u;
    SET_GPR_U32(ctx, 31, 0x5559ECu);
    ctx->pc = 0x555B70u;
    if (runtime->hasFunction(0x555B70u)) {
        auto targetFn = runtime->lookupFunction(0x555B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5559ECu; }
        if (ctx->pc != 0x5559ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00555B70_0x555b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5559ECu; }
        if (ctx->pc != 0x5559ECu) { return; }
    }
    ctx->pc = 0x5559ECu;
label_5559ec:
    // 0x5559ec: 0x10000054  b           . + 4 + (0x54 << 2)
label_5559f0:
    if (ctx->pc == 0x5559F0u) {
        ctx->pc = 0x5559F4u;
        goto label_5559f4;
    }
    ctx->pc = 0x5559ECu;
    {
        const bool branch_taken_0x5559ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5559ec) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x5559F4u;
label_5559f4:
    // 0x5559f4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_5559f8:
    if (ctx->pc == 0x5559F8u) {
        ctx->pc = 0x5559FCu;
        goto label_5559fc;
    }
    ctx->pc = 0x5559F4u;
    {
        const bool branch_taken_0x5559f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5559f4) {
            ctx->pc = 0x555A24u;
            goto label_555a24;
        }
    }
    ctx->pc = 0x5559FCu;
label_5559fc:
    // 0x5559fc: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x5559fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_555a00:
    // 0x555a00: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
label_555a04:
    if (ctx->pc == 0x555A04u) {
        ctx->pc = 0x555A08u;
        goto label_555a08;
    }
    ctx->pc = 0x555A00u;
    {
        const bool branch_taken_0x555a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x555a00) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x555A08u;
label_555a08:
    // 0x555a08: 0x8c790108  lw          $t9, 0x108($v1)
    ctx->pc = 0x555a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_555a0c:
    // 0x555a0c: 0x24640108  addiu       $a0, $v1, 0x108
    ctx->pc = 0x555a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 264));
label_555a10:
    // 0x555a10: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x555a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_555a14:
    // 0x555a14: 0x320f809  jalr        $t9
label_555a18:
    if (ctx->pc == 0x555A18u) {
        ctx->pc = 0x555A18u;
            // 0x555a18: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x555A1Cu;
        goto label_555a1c;
    }
    ctx->pc = 0x555A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x555A1Cu);
        ctx->pc = 0x555A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555A14u;
            // 0x555a18: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x555A1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x555A1Cu; }
            if (ctx->pc != 0x555A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x555A1Cu;
label_555a1c:
    // 0x555a1c: 0x10000048  b           . + 4 + (0x48 << 2)
label_555a20:
    if (ctx->pc == 0x555A20u) {
        ctx->pc = 0x555A24u;
        goto label_555a24;
    }
    ctx->pc = 0x555A1Cu;
    {
        const bool branch_taken_0x555a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555a1c) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x555A24u;
label_555a24:
    // 0x555a24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x555a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_555a28:
    // 0x555a28: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x555a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_555a2c:
    // 0x555a2c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x555a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_555a30:
    // 0x555a30: 0xc661008c  lwc1        $f1, 0x8C($s3)
    ctx->pc = 0x555a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_555a34:
    // 0x555a34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x555a34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_555a38:
    // 0x555a38: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x555a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_555a3c:
    // 0x555a3c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x555a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_555a40:
    // 0x555a40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x555a40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_555a44:
    // 0x555a44: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
label_555a48:
    if (ctx->pc == 0x555A48u) {
        ctx->pc = 0x555A48u;
            // 0x555a48: 0xe661008c  swc1        $f1, 0x8C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
        ctx->pc = 0x555A4Cu;
        goto label_555a4c;
    }
    ctx->pc = 0x555A44u;
    {
        const bool branch_taken_0x555a44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x555A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555A44u;
            // 0x555a48: 0xe661008c  swc1        $f1, 0x8C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x555a44) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x555A4Cu;
label_555a4c:
    // 0x555a4c: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x555a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
label_555a50:
    // 0x555a50: 0xc040180  jal         func_100600
label_555a54:
    if (ctx->pc == 0x555A54u) {
        ctx->pc = 0x555A54u;
            // 0x555a54: 0xa2600059  sb          $zero, 0x59($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 89), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x555A58u;
        goto label_555a58;
    }
    ctx->pc = 0x555A50u;
    SET_GPR_U32(ctx, 31, 0x555A58u);
    ctx->pc = 0x555A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555A50u;
            // 0x555a54: 0xa2600059  sb          $zero, 0x59($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 89), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555A58u; }
        if (ctx->pc != 0x555A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555A58u; }
        if (ctx->pc != 0x555A58u) { return; }
    }
    ctx->pc = 0x555A58u;
label_555a58:
    // 0x555a58: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_555a5c:
    if (ctx->pc == 0x555A5Cu) {
        ctx->pc = 0x555A5Cu;
            // 0x555a5c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x555A60u;
        goto label_555a60;
    }
    ctx->pc = 0x555A58u;
    {
        const bool branch_taken_0x555a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555a58) {
            ctx->pc = 0x555A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555A58u;
            // 0x555a5c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555AA0u;
            goto label_555aa0;
        }
    }
    ctx->pc = 0x555A60u;
label_555a60:
    // 0x555a60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x555a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_555a64:
    // 0x555a64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x555a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_555a68:
    // 0x555a68: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x555a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_555a6c:
    // 0x555a6c: 0x26620059  addiu       $v0, $s3, 0x59
    ctx->pc = 0x555a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 89));
label_555a70:
    // 0x555a70: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x555a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_555a74:
    // 0x555a74: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x555a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_555a78:
    // 0x555a78: 0xffa90010  sd          $t1, 0x10($sp)
    ctx->pc = 0x555a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 9));
label_555a7c:
    // 0x555a7c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x555a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_555a80:
    // 0x555a80: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x555a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
label_555a84:
    // 0x555a84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x555a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_555a88:
    // 0x555a88: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x555a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_555a8c:
    // 0x555a8c: 0x240a0402  addiu       $t2, $zero, 0x402
    ctx->pc = 0x555a8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
label_555a90:
    // 0x555a90: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x555a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_555a94:
    // 0x555a94: 0xc0f122c  jal         func_3C48B0
label_555a98:
    if (ctx->pc == 0x555A98u) {
        ctx->pc = 0x555A98u;
            // 0x555a98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555A9Cu;
        goto label_555a9c;
    }
    ctx->pc = 0x555A94u;
    SET_GPR_U32(ctx, 31, 0x555A9Cu);
    ctx->pc = 0x555A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555A94u;
            // 0x555a98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C48B0u;
    if (runtime->hasFunction(0x3C48B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555A9Cu; }
        if (ctx->pc != 0x555A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C48B0_0x3c48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555A9Cu; }
        if (ctx->pc != 0x555A9Cu) { return; }
    }
    ctx->pc = 0x555A9Cu;
label_555a9c:
    // 0x555a9c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x555a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_555aa0:
    // 0x555aa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x555aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_555aa4:
    // 0x555aa4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x555aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_555aa8:
    // 0x555aa8: 0x320f809  jalr        $t9
label_555aac:
    if (ctx->pc == 0x555AACu) {
        ctx->pc = 0x555AACu;
            // 0x555aac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x555AB0u;
        goto label_555ab0;
    }
    ctx->pc = 0x555AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x555AB0u);
        ctx->pc = 0x555AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555AA8u;
            // 0x555aac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x555AB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x555AB0u; }
            if (ctx->pc != 0x555AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x555AB0u;
label_555ab0:
    // 0x555ab0: 0x10000023  b           . + 4 + (0x23 << 2)
label_555ab4:
    if (ctx->pc == 0x555AB4u) {
        ctx->pc = 0x555AB8u;
        goto label_555ab8;
    }
    ctx->pc = 0x555AB0u;
    {
        const bool branch_taken_0x555ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555ab0) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x555AB8u;
label_555ab8:
    // 0x555ab8: 0x92630059  lbu         $v1, 0x59($s3)
    ctx->pc = 0x555ab8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 89)));
label_555abc:
    // 0x555abc: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_555ac0:
    if (ctx->pc == 0x555AC0u) {
        ctx->pc = 0x555AC4u;
        goto label_555ac4;
    }
    ctx->pc = 0x555ABCu;
    {
        const bool branch_taken_0x555abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x555abc) {
            ctx->pc = 0x555B40u;
            goto label_555b40;
        }
    }
    ctx->pc = 0x555AC4u;
label_555ac4:
    // 0x555ac4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x555ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_555ac8:
    // 0x555ac8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x555ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_555acc:
    // 0x555acc: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x555accu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_555ad0:
    // 0x555ad0: 0x24a5ee68  addiu       $a1, $a1, -0x1198
    ctx->pc = 0x555ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962792));
label_555ad4:
    // 0x555ad4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x555ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_555ad8:
    // 0x555ad8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x555ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_555adc:
    // 0x555adc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x555adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_555ae0:
    // 0x555ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x555ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_555ae4:
    // 0x555ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x555ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_555ae8:
    // 0x555ae8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x555ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_555aec:
    // 0x555aec: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x555aecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_555af0:
    // 0x555af0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x555af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_555af4:
    // 0x555af4: 0xc1230ac  jal         func_48C2B0
label_555af8:
    if (ctx->pc == 0x555AF8u) {
        ctx->pc = 0x555AF8u;
            // 0x555af8: 0x2652ee78  addiu       $s2, $s2, -0x1188 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962808));
        ctx->pc = 0x555AFCu;
        goto label_555afc;
    }
    ctx->pc = 0x555AF4u;
    SET_GPR_U32(ctx, 31, 0x555AFCu);
    ctx->pc = 0x555AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555AF4u;
            // 0x555af8: 0x2652ee78  addiu       $s2, $s2, -0x1188 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555AFCu; }
        if (ctx->pc != 0x555AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555AFCu; }
        if (ctx->pc != 0x555AFCu) { return; }
    }
    ctx->pc = 0x555AFCu;
label_555afc:
    // 0x555afc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x555afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_555b00:
    // 0x555b00: 0xc123020  jal         func_48C080
label_555b04:
    if (ctx->pc == 0x555B04u) {
        ctx->pc = 0x555B04u;
            // 0x555b04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555B08u;
        goto label_555b08;
    }
    ctx->pc = 0x555B00u;
    SET_GPR_U32(ctx, 31, 0x555B08u);
    ctx->pc = 0x555B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555B00u;
            // 0x555b04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555B08u; }
        if (ctx->pc != 0x555B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555B08u; }
        if (ctx->pc != 0x555B08u) { return; }
    }
    ctx->pc = 0x555B08u;
label_555b08:
    // 0x555b08: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x555b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_555b0c:
    // 0x555b0c: 0xc0c91d4  jal         func_324750
label_555b10:
    if (ctx->pc == 0x555B10u) {
        ctx->pc = 0x555B10u;
            // 0x555b10: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x555B14u;
        goto label_555b14;
    }
    ctx->pc = 0x555B0Cu;
    SET_GPR_U32(ctx, 31, 0x555B14u);
    ctx->pc = 0x555B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555B0Cu;
            // 0x555b10: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (runtime->hasFunction(0x324750u)) {
        auto targetFn = runtime->lookupFunction(0x324750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555B14u; }
        if (ctx->pc != 0x555B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324750_0x324750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555B14u; }
        if (ctx->pc != 0x555B14u) { return; }
    }
    ctx->pc = 0x555B14u;
label_555b14:
    // 0x555b14: 0xc155990  jal         func_556640
label_555b18:
    if (ctx->pc == 0x555B18u) {
        ctx->pc = 0x555B18u;
            // 0x555b18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555B1Cu;
        goto label_555b1c;
    }
    ctx->pc = 0x555B14u;
    SET_GPR_U32(ctx, 31, 0x555B1Cu);
    ctx->pc = 0x555B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555B14u;
            // 0x555b18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556640u;
    if (runtime->hasFunction(0x556640u)) {
        auto targetFn = runtime->lookupFunction(0x556640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555B1Cu; }
        if (ctx->pc != 0x555B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556640_0x556640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555B1Cu; }
        if (ctx->pc != 0x555B1Cu) { return; }
    }
    ctx->pc = 0x555B1Cu;
label_555b1c:
    // 0x555b1c: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x555b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_555b20:
    // 0x555b20: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x555b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_555b24:
    // 0x555b24: 0xc05d85a  jal         func_176168
label_555b28:
    if (ctx->pc == 0x555B28u) {
        ctx->pc = 0x555B28u;
            // 0x555b28: 0x24a5ee50  addiu       $a1, $a1, -0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
        ctx->pc = 0x555B2Cu;
        goto label_555b2c;
    }
    ctx->pc = 0x555B24u;
    SET_GPR_U32(ctx, 31, 0x555B2Cu);
    ctx->pc = 0x555B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555B24u;
            // 0x555b28: 0x24a5ee50  addiu       $a1, $a1, -0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555B2Cu; }
        if (ctx->pc != 0x555B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555B2Cu; }
        if (ctx->pc != 0x555B2Cu) { return; }
    }
    ctx->pc = 0x555B2Cu;
label_555b2c:
    // 0x555b2c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x555b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_555b30:
    // 0x555b30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x555b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_555b34:
    // 0x555b34: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x555b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_555b38:
    // 0x555b38: 0x320f809  jalr        $t9
label_555b3c:
    if (ctx->pc == 0x555B3Cu) {
        ctx->pc = 0x555B3Cu;
            // 0x555b3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x555B40u;
        goto label_555b40;
    }
    ctx->pc = 0x555B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x555B40u);
        ctx->pc = 0x555B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555B38u;
            // 0x555b3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x555B40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x555B40u; }
            if (ctx->pc != 0x555B40u) { return; }
        }
        }
    }
    ctx->pc = 0x555B40u;
label_555b40:
    // 0x555b40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x555b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_555b44:
    // 0x555b44: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x555b44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_555b48:
    // 0x555b48: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x555b48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_555b4c:
    // 0x555b4c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x555b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_555b50:
    // 0x555b50: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x555b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_555b54:
    // 0x555b54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x555b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_555b58:
    // 0x555b58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x555b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_555b5c:
    // 0x555b5c: 0x3e00008  jr          $ra
label_555b60:
    if (ctx->pc == 0x555B60u) {
        ctx->pc = 0x555B60u;
            // 0x555b60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x555B64u;
        goto label_555b64;
    }
    ctx->pc = 0x555B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x555B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555B5Cu;
            // 0x555b60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x555B64u;
label_555b64:
    // 0x555b64: 0x0  nop
    ctx->pc = 0x555b64u;
    // NOP
label_555b68:
    // 0x555b68: 0x0  nop
    ctx->pc = 0x555b68u;
    // NOP
label_555b6c:
    // 0x555b6c: 0x0  nop
    ctx->pc = 0x555b6cu;
    // NOP
}
