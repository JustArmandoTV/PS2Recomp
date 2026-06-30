#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00204010
// Address: 0x204010 - 0x2045f0
void sub_00204010_0x204010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204010_0x204010");
#endif

    switch (ctx->pc) {
        case 0x204010u: goto label_204010;
        case 0x204014u: goto label_204014;
        case 0x204018u: goto label_204018;
        case 0x20401cu: goto label_20401c;
        case 0x204020u: goto label_204020;
        case 0x204024u: goto label_204024;
        case 0x204028u: goto label_204028;
        case 0x20402cu: goto label_20402c;
        case 0x204030u: goto label_204030;
        case 0x204034u: goto label_204034;
        case 0x204038u: goto label_204038;
        case 0x20403cu: goto label_20403c;
        case 0x204040u: goto label_204040;
        case 0x204044u: goto label_204044;
        case 0x204048u: goto label_204048;
        case 0x20404cu: goto label_20404c;
        case 0x204050u: goto label_204050;
        case 0x204054u: goto label_204054;
        case 0x204058u: goto label_204058;
        case 0x20405cu: goto label_20405c;
        case 0x204060u: goto label_204060;
        case 0x204064u: goto label_204064;
        case 0x204068u: goto label_204068;
        case 0x20406cu: goto label_20406c;
        case 0x204070u: goto label_204070;
        case 0x204074u: goto label_204074;
        case 0x204078u: goto label_204078;
        case 0x20407cu: goto label_20407c;
        case 0x204080u: goto label_204080;
        case 0x204084u: goto label_204084;
        case 0x204088u: goto label_204088;
        case 0x20408cu: goto label_20408c;
        case 0x204090u: goto label_204090;
        case 0x204094u: goto label_204094;
        case 0x204098u: goto label_204098;
        case 0x20409cu: goto label_20409c;
        case 0x2040a0u: goto label_2040a0;
        case 0x2040a4u: goto label_2040a4;
        case 0x2040a8u: goto label_2040a8;
        case 0x2040acu: goto label_2040ac;
        case 0x2040b0u: goto label_2040b0;
        case 0x2040b4u: goto label_2040b4;
        case 0x2040b8u: goto label_2040b8;
        case 0x2040bcu: goto label_2040bc;
        case 0x2040c0u: goto label_2040c0;
        case 0x2040c4u: goto label_2040c4;
        case 0x2040c8u: goto label_2040c8;
        case 0x2040ccu: goto label_2040cc;
        case 0x2040d0u: goto label_2040d0;
        case 0x2040d4u: goto label_2040d4;
        case 0x2040d8u: goto label_2040d8;
        case 0x2040dcu: goto label_2040dc;
        case 0x2040e0u: goto label_2040e0;
        case 0x2040e4u: goto label_2040e4;
        case 0x2040e8u: goto label_2040e8;
        case 0x2040ecu: goto label_2040ec;
        case 0x2040f0u: goto label_2040f0;
        case 0x2040f4u: goto label_2040f4;
        case 0x2040f8u: goto label_2040f8;
        case 0x2040fcu: goto label_2040fc;
        case 0x204100u: goto label_204100;
        case 0x204104u: goto label_204104;
        case 0x204108u: goto label_204108;
        case 0x20410cu: goto label_20410c;
        case 0x204110u: goto label_204110;
        case 0x204114u: goto label_204114;
        case 0x204118u: goto label_204118;
        case 0x20411cu: goto label_20411c;
        case 0x204120u: goto label_204120;
        case 0x204124u: goto label_204124;
        case 0x204128u: goto label_204128;
        case 0x20412cu: goto label_20412c;
        case 0x204130u: goto label_204130;
        case 0x204134u: goto label_204134;
        case 0x204138u: goto label_204138;
        case 0x20413cu: goto label_20413c;
        case 0x204140u: goto label_204140;
        case 0x204144u: goto label_204144;
        case 0x204148u: goto label_204148;
        case 0x20414cu: goto label_20414c;
        case 0x204150u: goto label_204150;
        case 0x204154u: goto label_204154;
        case 0x204158u: goto label_204158;
        case 0x20415cu: goto label_20415c;
        case 0x204160u: goto label_204160;
        case 0x204164u: goto label_204164;
        case 0x204168u: goto label_204168;
        case 0x20416cu: goto label_20416c;
        case 0x204170u: goto label_204170;
        case 0x204174u: goto label_204174;
        case 0x204178u: goto label_204178;
        case 0x20417cu: goto label_20417c;
        case 0x204180u: goto label_204180;
        case 0x204184u: goto label_204184;
        case 0x204188u: goto label_204188;
        case 0x20418cu: goto label_20418c;
        case 0x204190u: goto label_204190;
        case 0x204194u: goto label_204194;
        case 0x204198u: goto label_204198;
        case 0x20419cu: goto label_20419c;
        case 0x2041a0u: goto label_2041a0;
        case 0x2041a4u: goto label_2041a4;
        case 0x2041a8u: goto label_2041a8;
        case 0x2041acu: goto label_2041ac;
        case 0x2041b0u: goto label_2041b0;
        case 0x2041b4u: goto label_2041b4;
        case 0x2041b8u: goto label_2041b8;
        case 0x2041bcu: goto label_2041bc;
        case 0x2041c0u: goto label_2041c0;
        case 0x2041c4u: goto label_2041c4;
        case 0x2041c8u: goto label_2041c8;
        case 0x2041ccu: goto label_2041cc;
        case 0x2041d0u: goto label_2041d0;
        case 0x2041d4u: goto label_2041d4;
        case 0x2041d8u: goto label_2041d8;
        case 0x2041dcu: goto label_2041dc;
        case 0x2041e0u: goto label_2041e0;
        case 0x2041e4u: goto label_2041e4;
        case 0x2041e8u: goto label_2041e8;
        case 0x2041ecu: goto label_2041ec;
        case 0x2041f0u: goto label_2041f0;
        case 0x2041f4u: goto label_2041f4;
        case 0x2041f8u: goto label_2041f8;
        case 0x2041fcu: goto label_2041fc;
        case 0x204200u: goto label_204200;
        case 0x204204u: goto label_204204;
        case 0x204208u: goto label_204208;
        case 0x20420cu: goto label_20420c;
        case 0x204210u: goto label_204210;
        case 0x204214u: goto label_204214;
        case 0x204218u: goto label_204218;
        case 0x20421cu: goto label_20421c;
        case 0x204220u: goto label_204220;
        case 0x204224u: goto label_204224;
        case 0x204228u: goto label_204228;
        case 0x20422cu: goto label_20422c;
        case 0x204230u: goto label_204230;
        case 0x204234u: goto label_204234;
        case 0x204238u: goto label_204238;
        case 0x20423cu: goto label_20423c;
        case 0x204240u: goto label_204240;
        case 0x204244u: goto label_204244;
        case 0x204248u: goto label_204248;
        case 0x20424cu: goto label_20424c;
        case 0x204250u: goto label_204250;
        case 0x204254u: goto label_204254;
        case 0x204258u: goto label_204258;
        case 0x20425cu: goto label_20425c;
        case 0x204260u: goto label_204260;
        case 0x204264u: goto label_204264;
        case 0x204268u: goto label_204268;
        case 0x20426cu: goto label_20426c;
        case 0x204270u: goto label_204270;
        case 0x204274u: goto label_204274;
        case 0x204278u: goto label_204278;
        case 0x20427cu: goto label_20427c;
        case 0x204280u: goto label_204280;
        case 0x204284u: goto label_204284;
        case 0x204288u: goto label_204288;
        case 0x20428cu: goto label_20428c;
        case 0x204290u: goto label_204290;
        case 0x204294u: goto label_204294;
        case 0x204298u: goto label_204298;
        case 0x20429cu: goto label_20429c;
        case 0x2042a0u: goto label_2042a0;
        case 0x2042a4u: goto label_2042a4;
        case 0x2042a8u: goto label_2042a8;
        case 0x2042acu: goto label_2042ac;
        case 0x2042b0u: goto label_2042b0;
        case 0x2042b4u: goto label_2042b4;
        case 0x2042b8u: goto label_2042b8;
        case 0x2042bcu: goto label_2042bc;
        case 0x2042c0u: goto label_2042c0;
        case 0x2042c4u: goto label_2042c4;
        case 0x2042c8u: goto label_2042c8;
        case 0x2042ccu: goto label_2042cc;
        case 0x2042d0u: goto label_2042d0;
        case 0x2042d4u: goto label_2042d4;
        case 0x2042d8u: goto label_2042d8;
        case 0x2042dcu: goto label_2042dc;
        case 0x2042e0u: goto label_2042e0;
        case 0x2042e4u: goto label_2042e4;
        case 0x2042e8u: goto label_2042e8;
        case 0x2042ecu: goto label_2042ec;
        case 0x2042f0u: goto label_2042f0;
        case 0x2042f4u: goto label_2042f4;
        case 0x2042f8u: goto label_2042f8;
        case 0x2042fcu: goto label_2042fc;
        case 0x204300u: goto label_204300;
        case 0x204304u: goto label_204304;
        case 0x204308u: goto label_204308;
        case 0x20430cu: goto label_20430c;
        case 0x204310u: goto label_204310;
        case 0x204314u: goto label_204314;
        case 0x204318u: goto label_204318;
        case 0x20431cu: goto label_20431c;
        case 0x204320u: goto label_204320;
        case 0x204324u: goto label_204324;
        case 0x204328u: goto label_204328;
        case 0x20432cu: goto label_20432c;
        case 0x204330u: goto label_204330;
        case 0x204334u: goto label_204334;
        case 0x204338u: goto label_204338;
        case 0x20433cu: goto label_20433c;
        case 0x204340u: goto label_204340;
        case 0x204344u: goto label_204344;
        case 0x204348u: goto label_204348;
        case 0x20434cu: goto label_20434c;
        case 0x204350u: goto label_204350;
        case 0x204354u: goto label_204354;
        case 0x204358u: goto label_204358;
        case 0x20435cu: goto label_20435c;
        case 0x204360u: goto label_204360;
        case 0x204364u: goto label_204364;
        case 0x204368u: goto label_204368;
        case 0x20436cu: goto label_20436c;
        case 0x204370u: goto label_204370;
        case 0x204374u: goto label_204374;
        case 0x204378u: goto label_204378;
        case 0x20437cu: goto label_20437c;
        case 0x204380u: goto label_204380;
        case 0x204384u: goto label_204384;
        case 0x204388u: goto label_204388;
        case 0x20438cu: goto label_20438c;
        case 0x204390u: goto label_204390;
        case 0x204394u: goto label_204394;
        case 0x204398u: goto label_204398;
        case 0x20439cu: goto label_20439c;
        case 0x2043a0u: goto label_2043a0;
        case 0x2043a4u: goto label_2043a4;
        case 0x2043a8u: goto label_2043a8;
        case 0x2043acu: goto label_2043ac;
        case 0x2043b0u: goto label_2043b0;
        case 0x2043b4u: goto label_2043b4;
        case 0x2043b8u: goto label_2043b8;
        case 0x2043bcu: goto label_2043bc;
        case 0x2043c0u: goto label_2043c0;
        case 0x2043c4u: goto label_2043c4;
        case 0x2043c8u: goto label_2043c8;
        case 0x2043ccu: goto label_2043cc;
        case 0x2043d0u: goto label_2043d0;
        case 0x2043d4u: goto label_2043d4;
        case 0x2043d8u: goto label_2043d8;
        case 0x2043dcu: goto label_2043dc;
        case 0x2043e0u: goto label_2043e0;
        case 0x2043e4u: goto label_2043e4;
        case 0x2043e8u: goto label_2043e8;
        case 0x2043ecu: goto label_2043ec;
        case 0x2043f0u: goto label_2043f0;
        case 0x2043f4u: goto label_2043f4;
        case 0x2043f8u: goto label_2043f8;
        case 0x2043fcu: goto label_2043fc;
        case 0x204400u: goto label_204400;
        case 0x204404u: goto label_204404;
        case 0x204408u: goto label_204408;
        case 0x20440cu: goto label_20440c;
        case 0x204410u: goto label_204410;
        case 0x204414u: goto label_204414;
        case 0x204418u: goto label_204418;
        case 0x20441cu: goto label_20441c;
        case 0x204420u: goto label_204420;
        case 0x204424u: goto label_204424;
        case 0x204428u: goto label_204428;
        case 0x20442cu: goto label_20442c;
        case 0x204430u: goto label_204430;
        case 0x204434u: goto label_204434;
        case 0x204438u: goto label_204438;
        case 0x20443cu: goto label_20443c;
        case 0x204440u: goto label_204440;
        case 0x204444u: goto label_204444;
        case 0x204448u: goto label_204448;
        case 0x20444cu: goto label_20444c;
        case 0x204450u: goto label_204450;
        case 0x204454u: goto label_204454;
        case 0x204458u: goto label_204458;
        case 0x20445cu: goto label_20445c;
        case 0x204460u: goto label_204460;
        case 0x204464u: goto label_204464;
        case 0x204468u: goto label_204468;
        case 0x20446cu: goto label_20446c;
        case 0x204470u: goto label_204470;
        case 0x204474u: goto label_204474;
        case 0x204478u: goto label_204478;
        case 0x20447cu: goto label_20447c;
        case 0x204480u: goto label_204480;
        case 0x204484u: goto label_204484;
        case 0x204488u: goto label_204488;
        case 0x20448cu: goto label_20448c;
        case 0x204490u: goto label_204490;
        case 0x204494u: goto label_204494;
        case 0x204498u: goto label_204498;
        case 0x20449cu: goto label_20449c;
        case 0x2044a0u: goto label_2044a0;
        case 0x2044a4u: goto label_2044a4;
        case 0x2044a8u: goto label_2044a8;
        case 0x2044acu: goto label_2044ac;
        case 0x2044b0u: goto label_2044b0;
        case 0x2044b4u: goto label_2044b4;
        case 0x2044b8u: goto label_2044b8;
        case 0x2044bcu: goto label_2044bc;
        case 0x2044c0u: goto label_2044c0;
        case 0x2044c4u: goto label_2044c4;
        case 0x2044c8u: goto label_2044c8;
        case 0x2044ccu: goto label_2044cc;
        case 0x2044d0u: goto label_2044d0;
        case 0x2044d4u: goto label_2044d4;
        case 0x2044d8u: goto label_2044d8;
        case 0x2044dcu: goto label_2044dc;
        case 0x2044e0u: goto label_2044e0;
        case 0x2044e4u: goto label_2044e4;
        case 0x2044e8u: goto label_2044e8;
        case 0x2044ecu: goto label_2044ec;
        case 0x2044f0u: goto label_2044f0;
        case 0x2044f4u: goto label_2044f4;
        case 0x2044f8u: goto label_2044f8;
        case 0x2044fcu: goto label_2044fc;
        case 0x204500u: goto label_204500;
        case 0x204504u: goto label_204504;
        case 0x204508u: goto label_204508;
        case 0x20450cu: goto label_20450c;
        case 0x204510u: goto label_204510;
        case 0x204514u: goto label_204514;
        case 0x204518u: goto label_204518;
        case 0x20451cu: goto label_20451c;
        case 0x204520u: goto label_204520;
        case 0x204524u: goto label_204524;
        case 0x204528u: goto label_204528;
        case 0x20452cu: goto label_20452c;
        case 0x204530u: goto label_204530;
        case 0x204534u: goto label_204534;
        case 0x204538u: goto label_204538;
        case 0x20453cu: goto label_20453c;
        case 0x204540u: goto label_204540;
        case 0x204544u: goto label_204544;
        case 0x204548u: goto label_204548;
        case 0x20454cu: goto label_20454c;
        case 0x204550u: goto label_204550;
        case 0x204554u: goto label_204554;
        case 0x204558u: goto label_204558;
        case 0x20455cu: goto label_20455c;
        case 0x204560u: goto label_204560;
        case 0x204564u: goto label_204564;
        case 0x204568u: goto label_204568;
        case 0x20456cu: goto label_20456c;
        case 0x204570u: goto label_204570;
        case 0x204574u: goto label_204574;
        case 0x204578u: goto label_204578;
        case 0x20457cu: goto label_20457c;
        case 0x204580u: goto label_204580;
        case 0x204584u: goto label_204584;
        case 0x204588u: goto label_204588;
        case 0x20458cu: goto label_20458c;
        case 0x204590u: goto label_204590;
        case 0x204594u: goto label_204594;
        case 0x204598u: goto label_204598;
        case 0x20459cu: goto label_20459c;
        case 0x2045a0u: goto label_2045a0;
        case 0x2045a4u: goto label_2045a4;
        case 0x2045a8u: goto label_2045a8;
        case 0x2045acu: goto label_2045ac;
        case 0x2045b0u: goto label_2045b0;
        case 0x2045b4u: goto label_2045b4;
        case 0x2045b8u: goto label_2045b8;
        case 0x2045bcu: goto label_2045bc;
        case 0x2045c0u: goto label_2045c0;
        case 0x2045c4u: goto label_2045c4;
        case 0x2045c8u: goto label_2045c8;
        case 0x2045ccu: goto label_2045cc;
        case 0x2045d0u: goto label_2045d0;
        case 0x2045d4u: goto label_2045d4;
        case 0x2045d8u: goto label_2045d8;
        case 0x2045dcu: goto label_2045dc;
        case 0x2045e0u: goto label_2045e0;
        case 0x2045e4u: goto label_2045e4;
        case 0x2045e8u: goto label_2045e8;
        case 0x2045ecu: goto label_2045ec;
        default: break;
    }

    ctx->pc = 0x204010u;

label_204010:
    // 0x204010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_204014:
    // 0x204014: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x204014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_204018:
    // 0x204018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20401c:
    // 0x20401c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20401cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_204020:
    // 0x204020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_204024:
    // 0x204024: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x204024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_204028:
    // 0x204028: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x204028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_20402c:
    // 0x20402c: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x20402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_204030:
    // 0x204030: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x204030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_204034:
    // 0x204034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204038:
    // 0x204038: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x204038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_20403c:
    // 0x20403c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x20403cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_204040:
    // 0x204040: 0x2463e370  addiu       $v1, $v1, -0x1C90
    ctx->pc = 0x204040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959984));
label_204044:
    // 0x204044: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x204044u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_204048:
    // 0x204048: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x204048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_20404c:
    // 0x20404c: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x20404cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_204050:
    // 0x204050: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x204050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_204054:
    // 0x204054: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x204054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_204058:
    // 0x204058: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x204058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_20405c:
    // 0x20405c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x20405cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_204060:
    // 0x204060: 0x24e7db60  addiu       $a3, $a3, -0x24A0
    ctx->pc = 0x204060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957920));
label_204064:
    // 0x204064: 0x2463e1e0  addiu       $v1, $v1, -0x1E20
    ctx->pc = 0x204064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959584));
label_204068:
    // 0x204068: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x204068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_20406c:
    // 0x20406c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_204070:
    // 0x204070: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x204070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_204074:
    // 0x204074: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x204074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
label_204078:
    // 0x204078: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x204078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_20407c:
    // 0x20407c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x20407cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_204080:
    // 0x204080: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x204080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_204084:
    // 0x204084: 0x2508e230  addiu       $t0, $t0, -0x1DD0
    ctx->pc = 0x204084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959664));
label_204088:
    // 0x204088: 0x24e7e274  addiu       $a3, $a3, -0x1D8C
    ctx->pc = 0x204088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959732));
label_20408c:
    // 0x20408c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x20408cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_204090:
    // 0x204090: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x204090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
label_204094:
    // 0x204094: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x204094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_204098:
    // 0x204098: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x204098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_20409c:
    // 0x20409c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20409cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2040a0:
    // 0x2040a0: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2040a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2040a4:
    // 0x2040a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2040a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2040a8:
    // 0x2040a8: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x2040a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_2040ac:
    // 0x2040ac: 0xc08117c  jal         func_2045F0
label_2040b0:
    if (ctx->pc == 0x2040B0u) {
        ctx->pc = 0x2040B0u;
            // 0x2040b0: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x2040B4u;
        goto label_2040b4;
    }
    ctx->pc = 0x2040ACu;
    SET_GPR_U32(ctx, 31, 0x2040B4u);
    ctx->pc = 0x2040B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2040ACu;
            // 0x2040b0: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045F0u;
    if (runtime->hasFunction(0x2045F0u)) {
        auto targetFn = runtime->lookupFunction(0x2045F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040B4u; }
        if (ctx->pc != 0x2040B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045F0_0x2045f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040B4u; }
        if (ctx->pc != 0x2040B4u) { return; }
    }
    ctx->pc = 0x2040B4u;
label_2040b4:
    // 0x2040b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2040b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2040b8:
    // 0x2040b8: 0xc0811b0  jal         func_2046C0
label_2040bc:
    if (ctx->pc == 0x2040BCu) {
        ctx->pc = 0x2040BCu;
            // 0x2040bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2040C0u;
        goto label_2040c0;
    }
    ctx->pc = 0x2040B8u;
    SET_GPR_U32(ctx, 31, 0x2040C0u);
    ctx->pc = 0x2040BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2040B8u;
            // 0x2040bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2046C0u;
    if (runtime->hasFunction(0x2046C0u)) {
        auto targetFn = runtime->lookupFunction(0x2046C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040C0u; }
        if (ctx->pc != 0x2040C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002046C0_0x2046c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040C0u; }
        if (ctx->pc != 0x2040C0u) { return; }
    }
    ctx->pc = 0x2040C0u;
label_2040c0:
    // 0x2040c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2040c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2040c4:
    // 0x2040c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2040c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2040c8:
    // 0x2040c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2040c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2040cc:
    // 0x2040cc: 0x3e00008  jr          $ra
label_2040d0:
    if (ctx->pc == 0x2040D0u) {
        ctx->pc = 0x2040D0u;
            // 0x2040d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2040D4u;
        goto label_2040d4;
    }
    ctx->pc = 0x2040CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2040D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040CCu;
            // 0x2040d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2040D4u;
label_2040d4:
    // 0x2040d4: 0x0  nop
    ctx->pc = 0x2040d4u;
    // NOP
label_2040d8:
    // 0x2040d8: 0x0  nop
    ctx->pc = 0x2040d8u;
    // NOP
label_2040dc:
    // 0x2040dc: 0x0  nop
    ctx->pc = 0x2040dcu;
    // NOP
label_2040e0:
    // 0x2040e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2040e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2040e4:
    // 0x2040e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2040e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2040e8:
    // 0x2040e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2040e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2040ec:
    // 0x2040ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2040ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2040f0:
    // 0x2040f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2040f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2040f4:
    // 0x2040f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2040f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2040f8:
    // 0x2040f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2040f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2040fc:
    // 0x2040fc: 0x1260005a  beqz        $s3, . + 4 + (0x5A << 2)
label_204100:
    if (ctx->pc == 0x204100u) {
        ctx->pc = 0x204100u;
            // 0x204100: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x204104u;
        goto label_204104;
    }
    ctx->pc = 0x2040FCu;
    {
        const bool branch_taken_0x2040fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x204100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040FCu;
            // 0x204100: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040fc) {
            ctx->pc = 0x204268u;
            goto label_204268;
        }
    }
    ctx->pc = 0x204104u;
label_204104:
    // 0x204104: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x204104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_204108:
    // 0x204108: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20410c:
    // 0x20410c: 0x2463e230  addiu       $v1, $v1, -0x1DD0
    ctx->pc = 0x20410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959664));
label_204110:
    // 0x204110: 0x2442e274  addiu       $v0, $v0, -0x1D8C
    ctx->pc = 0x204110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959732));
label_204114:
    // 0x204114: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x204114u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_204118:
    // 0x204118: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x204118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_20411c:
    // 0x20411c: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x20411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_204120:
    // 0x204120: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_204124:
    if (ctx->pc == 0x204124u) {
        ctx->pc = 0x204124u;
            // 0x204124: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204128u;
        goto label_204128;
    }
    ctx->pc = 0x204120u;
    {
        const bool branch_taken_0x204120 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x204124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204120u;
            // 0x204124: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204120) {
            ctx->pc = 0x204190u;
            goto label_204190;
        }
    }
    ctx->pc = 0x204128u;
label_204128:
    // 0x204128: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x204128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20412c:
    // 0x20412c: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x20412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_204130:
    // 0x204130: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x204130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_204134:
    // 0x204134: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x204134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204138:
    // 0x204138: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x204138u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_20413c:
    // 0x20413c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_204140:
    if (ctx->pc == 0x204140u) {
        ctx->pc = 0x204144u;
        goto label_204144;
    }
    ctx->pc = 0x20413Cu;
    {
        const bool branch_taken_0x20413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20413c) {
            ctx->pc = 0x204178u;
            goto label_204178;
        }
    }
    ctx->pc = 0x204144u;
label_204144:
    // 0x204144: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x204144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_204148:
    // 0x204148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20414c:
    // 0x20414c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x20414cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_204150:
    // 0x204150: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x204150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_204154:
    // 0x204154: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x204154u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_204158:
    // 0x204158: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_20415c:
    if (ctx->pc == 0x20415Cu) {
        ctx->pc = 0x204160u;
        goto label_204160;
    }
    ctx->pc = 0x204158u;
    {
        const bool branch_taken_0x204158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204158) {
            ctx->pc = 0x204178u;
            goto label_204178;
        }
    }
    ctx->pc = 0x204160u;
label_204160:
    // 0x204160: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_204164:
    if (ctx->pc == 0x204164u) {
        ctx->pc = 0x204168u;
        goto label_204168;
    }
    ctx->pc = 0x204160u;
    {
        const bool branch_taken_0x204160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x204160) {
            ctx->pc = 0x204178u;
            goto label_204178;
        }
    }
    ctx->pc = 0x204168u;
label_204168:
    // 0x204168: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x204168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20416c:
    // 0x20416c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x20416cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_204170:
    // 0x204170: 0x320f809  jalr        $t9
label_204174:
    if (ctx->pc == 0x204174u) {
        ctx->pc = 0x204174u;
            // 0x204174: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x204178u;
        goto label_204178;
    }
    ctx->pc = 0x204170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204178u);
        ctx->pc = 0x204174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204170u;
            // 0x204174: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204178u; }
            if (ctx->pc != 0x204178u) { return; }
        }
        }
    }
    ctx->pc = 0x204178u;
label_204178:
    // 0x204178: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x204178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_20417c:
    // 0x20417c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20417cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_204180:
    // 0x204180: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x204180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_204184:
    // 0x204184: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_204188:
    if (ctx->pc == 0x204188u) {
        ctx->pc = 0x204188u;
            // 0x204188: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x20418Cu;
        goto label_20418c;
    }
    ctx->pc = 0x204184u;
    {
        const bool branch_taken_0x204184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204184u;
            // 0x204188: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204184) {
            ctx->pc = 0x20412Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20412c;
        }
    }
    ctx->pc = 0x20418Cu;
label_20418c:
    // 0x20418c: 0x0  nop
    ctx->pc = 0x20418cu;
    // NOP
label_204190:
    // 0x204190: 0x26620044  addiu       $v0, $s3, 0x44
    ctx->pc = 0x204190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_204194:
    // 0x204194: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_204198:
    if (ctx->pc == 0x204198u) {
        ctx->pc = 0x204198u;
            // 0x204198: 0x26620014  addiu       $v0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->pc = 0x20419Cu;
        goto label_20419c;
    }
    ctx->pc = 0x204194u;
    {
        const bool branch_taken_0x204194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204194) {
            ctx->pc = 0x204198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204194u;
            // 0x204198: 0x26620014  addiu       $v0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2041D8u;
            goto label_2041d8;
        }
    }
    ctx->pc = 0x20419Cu;
label_20419c:
    // 0x20419c: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x20419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_2041a0:
    // 0x2041a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2041a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2041a4:
    // 0x2041a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2041a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2041a8:
    // 0x2041a8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2041ac:
    if (ctx->pc == 0x2041ACu) {
        ctx->pc = 0x2041B0u;
        goto label_2041b0;
    }
    ctx->pc = 0x2041A8u;
    {
        const bool branch_taken_0x2041a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2041a8) {
            ctx->pc = 0x2041D4u;
            goto label_2041d4;
        }
    }
    ctx->pc = 0x2041B0u;
label_2041b0:
    // 0x2041b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2041b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2041b4:
    // 0x2041b4: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2041b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_2041b8:
    // 0x2041b8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2041b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2041bc:
    // 0x2041bc: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2041bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2041c0:
    // 0x2041c0: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x2041c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_2041c4:
    // 0x2041c4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2041c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2041c8:
    // 0x2041c8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2041c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2041cc:
    // 0x2041cc: 0xc0a7ab4  jal         func_29EAD0
label_2041d0:
    if (ctx->pc == 0x2041D0u) {
        ctx->pc = 0x2041D0u;
            // 0x2041d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2041D4u;
        goto label_2041d4;
    }
    ctx->pc = 0x2041CCu;
    SET_GPR_U32(ctx, 31, 0x2041D4u);
    ctx->pc = 0x2041D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2041CCu;
            // 0x2041d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2041D4u; }
        if (ctx->pc != 0x2041D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2041D4u; }
        if (ctx->pc != 0x2041D4u) { return; }
    }
    ctx->pc = 0x2041D4u;
label_2041d4:
    // 0x2041d4: 0x26620014  addiu       $v0, $s3, 0x14
    ctx->pc = 0x2041d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_2041d8:
    // 0x2041d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2041dc:
    if (ctx->pc == 0x2041DCu) {
        ctx->pc = 0x2041E0u;
        goto label_2041e0;
    }
    ctx->pc = 0x2041D8u;
    {
        const bool branch_taken_0x2041d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2041d8) {
            ctx->pc = 0x2041ECu;
            goto label_2041ec;
        }
    }
    ctx->pc = 0x2041E0u;
label_2041e0:
    // 0x2041e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2041e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2041e4:
    // 0x2041e4: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x2041e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
label_2041e8:
    // 0x2041e8: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2041e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2041ec:
    // 0x2041ec: 0x52600015  beql        $s3, $zero, . + 4 + (0x15 << 2)
label_2041f0:
    if (ctx->pc == 0x2041F0u) {
        ctx->pc = 0x2041F0u;
            // 0x2041f0: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x2041F4u;
        goto label_2041f4;
    }
    ctx->pc = 0x2041ECu;
    {
        const bool branch_taken_0x2041ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2041ec) {
            ctx->pc = 0x2041F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2041ECu;
            // 0x2041f0: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204244u;
            goto label_204244;
        }
    }
    ctx->pc = 0x2041F4u;
label_2041f4:
    // 0x2041f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2041f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2041f8:
    // 0x2041f8: 0x2442e1e0  addiu       $v0, $v0, -0x1E20
    ctx->pc = 0x2041f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959584));
label_2041fc:
    // 0x2041fc: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_204200:
    if (ctx->pc == 0x204200u) {
        ctx->pc = 0x204200u;
            // 0x204200: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x204204u;
        goto label_204204;
    }
    ctx->pc = 0x2041FCu;
    {
        const bool branch_taken_0x2041fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x204200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2041FCu;
            // 0x204200: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041fc) {
            ctx->pc = 0x204240u;
            goto label_204240;
        }
    }
    ctx->pc = 0x204204u;
label_204204:
    // 0x204204: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x204204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_204208:
    // 0x204208: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x204208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
label_20420c:
    // 0x20420c: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_204210:
    if (ctx->pc == 0x204210u) {
        ctx->pc = 0x204210u;
            // 0x204210: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x204214u;
        goto label_204214;
    }
    ctx->pc = 0x20420Cu;
    {
        const bool branch_taken_0x20420c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x204210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20420Cu;
            // 0x204210: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20420c) {
            ctx->pc = 0x204240u;
            goto label_204240;
        }
    }
    ctx->pc = 0x204214u;
label_204214:
    // 0x204214: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x204214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_204218:
    // 0x204218: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x204218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_20421c:
    // 0x20421c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_204220:
    if (ctx->pc == 0x204220u) {
        ctx->pc = 0x204220u;
            // 0x204220: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x204224u;
        goto label_204224;
    }
    ctx->pc = 0x20421Cu;
    {
        const bool branch_taken_0x20421c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x204220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20421Cu;
            // 0x204220: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20421c) {
            ctx->pc = 0x204240u;
            goto label_204240;
        }
    }
    ctx->pc = 0x204224u;
label_204224:
    // 0x204224: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x204224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_204228:
    // 0x204228: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x204228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_20422c:
    // 0x20422c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_204230:
    if (ctx->pc == 0x204230u) {
        ctx->pc = 0x204230u;
            // 0x204230: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x204234u;
        goto label_204234;
    }
    ctx->pc = 0x20422Cu;
    {
        const bool branch_taken_0x20422c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x204230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20422Cu;
            // 0x204230: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20422c) {
            ctx->pc = 0x204240u;
            goto label_204240;
        }
    }
    ctx->pc = 0x204234u;
label_204234:
    // 0x204234: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x204234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_204238:
    // 0x204238: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x204238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_20423c:
    // 0x20423c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x20423cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_204240:
    // 0x204240: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x204240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_204244:
    // 0x204244: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x204244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_204248:
    // 0x204248: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_20424c:
    if (ctx->pc == 0x20424Cu) {
        ctx->pc = 0x20424Cu;
            // 0x20424c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204250u;
        goto label_204250;
    }
    ctx->pc = 0x204248u;
    {
        const bool branch_taken_0x204248 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x204248) {
            ctx->pc = 0x20424Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204248u;
            // 0x20424c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20426Cu;
            goto label_20426c;
        }
    }
    ctx->pc = 0x204250u;
label_204250:
    // 0x204250: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x204250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_204254:
    // 0x204254: 0x96660004  lhu         $a2, 0x4($s3)
    ctx->pc = 0x204254u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_204258:
    // 0x204258: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x204258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_20425c:
    // 0x20425c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20425cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204260:
    // 0x204260: 0xc0a7ab4  jal         func_29EAD0
label_204264:
    if (ctx->pc == 0x204264u) {
        ctx->pc = 0x204264u;
            // 0x204264: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x204268u;
        goto label_204268;
    }
    ctx->pc = 0x204260u;
    SET_GPR_U32(ctx, 31, 0x204268u);
    ctx->pc = 0x204264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204260u;
            // 0x204264: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204268u; }
        if (ctx->pc != 0x204268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204268u; }
        if (ctx->pc != 0x204268u) { return; }
    }
    ctx->pc = 0x204268u;
label_204268:
    // 0x204268: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x204268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20426c:
    // 0x20426c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20426cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_204270:
    // 0x204270: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x204270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204274:
    // 0x204274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204278:
    // 0x204278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20427c:
    // 0x20427c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20427cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_204280:
    // 0x204280: 0x3e00008  jr          $ra
label_204284:
    if (ctx->pc == 0x204284u) {
        ctx->pc = 0x204284u;
            // 0x204284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x204288u;
        goto label_204288;
    }
    ctx->pc = 0x204280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204280u;
            // 0x204284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204288u;
label_204288:
    // 0x204288: 0x0  nop
    ctx->pc = 0x204288u;
    // NOP
label_20428c:
    // 0x20428c: 0x0  nop
    ctx->pc = 0x20428cu;
    // NOP
label_204290:
    // 0x204290: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x204290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_204294:
    // 0x204294: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x204294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_204298:
    // 0x204298: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x204298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_20429c:
    // 0x20429c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2042a0:
    // 0x2042a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2042a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2042a4:
    // 0x2042a4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2042a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2042a8:
    // 0x2042a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2042a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2042ac:
    // 0x2042ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2042acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2042b0:
    // 0x2042b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2042b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2042b4:
    // 0x2042b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2042b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2042b8:
    // 0x2042b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2042b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2042bc:
    // 0x2042bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2042bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2042c0:
    // 0x2042c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2042c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2042c4:
    // 0x2042c4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2042c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2042c8:
    // 0x2042c8: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x2042c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
label_2042cc:
    // 0x2042cc: 0x3484ffee  ori         $a0, $a0, 0xFFEE
    ctx->pc = 0x2042ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65518);
label_2042d0:
    // 0x2042d0: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2042d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2042d4:
    // 0x2042d4: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_2042d8:
    if (ctx->pc == 0x2042D8u) {
        ctx->pc = 0x2042D8u;
            // 0x2042d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2042DCu;
        goto label_2042dc;
    }
    ctx->pc = 0x2042D4u;
    {
        const bool branch_taken_0x2042d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2042D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2042D4u;
            // 0x2042d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042d4) {
            ctx->pc = 0x204370u;
            goto label_204370;
        }
    }
    ctx->pc = 0x2042DCu;
label_2042dc:
    // 0x2042dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2042dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2042e0:
    // 0x2042e0: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x2042e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_2042e4:
    // 0x2042e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2042e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2042e8:
    // 0x2042e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2042e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2042ec:
    // 0x2042ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2042ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2042f0:
    // 0x2042f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2042f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2042f4:
    // 0x2042f4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2042f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2042f8:
    // 0x2042f8: 0x320f809  jalr        $t9
label_2042fc:
    if (ctx->pc == 0x2042FCu) {
        ctx->pc = 0x2042FCu;
            // 0x2042fc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x204300u;
        goto label_204300;
    }
    ctx->pc = 0x2042F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204300u);
        ctx->pc = 0x2042FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2042F8u;
            // 0x2042fc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204300u; }
            if (ctx->pc != 0x204300u) { return; }
        }
        }
    }
    ctx->pc = 0x204300u;
label_204300:
    // 0x204300: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x204300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204304:
    // 0x204304: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x204304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204308:
    // 0x204308: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x204308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20430c:
    // 0x20430c: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x20430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_204310:
    // 0x204310: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x204310u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204314:
    // 0x204314: 0xc6850008  lwc1        $f5, 0x8($s4)
    ctx->pc = 0x204314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_204318:
    // 0x204318: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x204318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20431c:
    // 0x20431c: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x20431cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_204320:
    // 0x204320: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x204320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_204324:
    // 0x204324: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x204324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204328:
    // 0x204328: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_20432c:
    if (ctx->pc == 0x20432Cu) {
        ctx->pc = 0x20432Cu;
            // 0x20432c: 0xc7a60080  lwc1        $f6, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->pc = 0x204330u;
        goto label_204330;
    }
    ctx->pc = 0x204328u;
    {
        const bool branch_taken_0x204328 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20432Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204328u;
            // 0x20432c: 0xc7a60080  lwc1        $f6, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204328) {
            ctx->pc = 0x204358u;
            goto label_204358;
        }
    }
    ctx->pc = 0x204330u;
label_204330:
    // 0x204330: 0xe6660000  swc1        $f6, 0x0($s3)
    ctx->pc = 0x204330u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_204334:
    // 0x204334: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x204334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_204338:
    // 0x204338: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x204338u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_20433c:
    // 0x20433c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x20433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204340:
    // 0x204340: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x204340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_204344:
    // 0x204344: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x204344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204348:
    // 0x204348: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x204348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_20434c:
    // 0x20434c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x20434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204350:
    // 0x204350: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x204350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_204354:
    // 0x204354: 0x0  nop
    ctx->pc = 0x204354u;
    // NOP
label_204358:
    // 0x204358: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x204358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_20435c:
    // 0x20435c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20435cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_204360:
    // 0x204360: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x204360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_204364:
    // 0x204364: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_204368:
    if (ctx->pc == 0x204368u) {
        ctx->pc = 0x204368u;
            // 0x204368: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x20436Cu;
        goto label_20436c;
    }
    ctx->pc = 0x204364u;
    {
        const bool branch_taken_0x204364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204364u;
            // 0x204368: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204364) {
            ctx->pc = 0x2042E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2042e0;
        }
    }
    ctx->pc = 0x20436Cu;
label_20436c:
    // 0x20436c: 0x0  nop
    ctx->pc = 0x20436cu;
    // NOP
label_204370:
    // 0x204370: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x204370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_204374:
    // 0x204374: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x204374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_204378:
    // 0x204378: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x204378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20437c:
    // 0x20437c: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x20437cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_204380:
    // 0x204380: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x204380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_204384:
    // 0x204384: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x204384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_204388:
    // 0x204388: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x204388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20438c:
    // 0x20438c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20438cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_204390:
    // 0x204390: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x204390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_204394:
    // 0x204394: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x204394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204398:
    // 0x204398: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x204398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20439c:
    // 0x20439c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20439cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2043a0:
    // 0x2043a0: 0x3e00008  jr          $ra
label_2043a4:
    if (ctx->pc == 0x2043A4u) {
        ctx->pc = 0x2043A4u;
            // 0x2043a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2043A8u;
        goto label_2043a8;
    }
    ctx->pc = 0x2043A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2043A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2043A0u;
            // 0x2043a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2043A8u;
label_2043a8:
    // 0x2043a8: 0x0  nop
    ctx->pc = 0x2043a8u;
    // NOP
label_2043ac:
    // 0x2043ac: 0x0  nop
    ctx->pc = 0x2043acu;
    // NOP
label_2043b0:
    // 0x2043b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2043b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2043b4:
    // 0x2043b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2043b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2043b8:
    // 0x2043b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2043b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2043bc:
    // 0x2043bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2043bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2043c0:
    // 0x2043c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2043c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2043c4:
    // 0x2043c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2043c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2043c8:
    // 0x2043c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2043c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2043cc:
    // 0x2043cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2043ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2043d0:
    // 0x2043d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2043d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2043d4:
    // 0x2043d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2043d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2043d8:
    // 0x2043d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2043d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2043dc:
    // 0x2043dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2043dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2043e0:
    // 0x2043e0: 0x1a60001b  blez        $s3, . + 4 + (0x1B << 2)
label_2043e4:
    if (ctx->pc == 0x2043E4u) {
        ctx->pc = 0x2043E4u;
            // 0x2043e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2043E8u;
        goto label_2043e8;
    }
    ctx->pc = 0x2043E0u;
    {
        const bool branch_taken_0x2043e0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2043E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2043E0u;
            // 0x2043e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043e0) {
            ctx->pc = 0x204450u;
            goto label_204450;
        }
    }
    ctx->pc = 0x2043E8u;
label_2043e8:
    // 0x2043e8: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x2043e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2043ec:
    // 0x2043ec: 0x27a5007e  addiu       $a1, $sp, 0x7E
    ctx->pc = 0x2043ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
label_2043f0:
    // 0x2043f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2043f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2043f4:
    // 0x2043f4: 0xa7a2007e  sh          $v0, 0x7E($sp)
    ctx->pc = 0x2043f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 2));
label_2043f8:
    // 0x2043f8: 0x97a2007e  lhu         $v0, 0x7E($sp)
    ctx->pc = 0x2043f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
label_2043fc:
    // 0x2043fc: 0x28203  sra         $s0, $v0, 8
    ctx->pc = 0x2043fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 8));
label_204400:
    // 0x204400: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_204404:
    // 0x204404: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x204404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_204408:
    // 0x204408: 0xa7a2007e  sh          $v0, 0x7E($sp)
    ctx->pc = 0x204408u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 2));
label_20440c:
    // 0x20440c: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x20440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_204410:
    // 0x204410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204414:
    // 0x204414: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x204414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204418:
    // 0x204418: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x204418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20441c:
    // 0x20441c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x20441cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_204420:
    // 0x204420: 0x320f809  jalr        $t9
label_204424:
    if (ctx->pc == 0x204424u) {
        ctx->pc = 0x204424u;
            // 0x204424: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204428u;
        goto label_204428;
    }
    ctx->pc = 0x204420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204428u);
        ctx->pc = 0x204424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204420u;
            // 0x204424: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204428u; }
            if (ctx->pc != 0x204428u) { return; }
        }
        }
    }
    ctx->pc = 0x204428u;
label_204428:
    // 0x204428: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x204428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20442c:
    // 0x20442c: 0x102200  sll         $a0, $s0, 8
    ctx->pc = 0x20442cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_204430:
    // 0x204430: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x204430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_204434:
    // 0x204434: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x204434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_204438:
    // 0x204438: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x204438u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_20443c:
    // 0x20443c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x20443cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_204440:
    // 0x204440: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x204440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_204444:
    // 0x204444: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_204448:
    if (ctx->pc == 0x204448u) {
        ctx->pc = 0x204448u;
            // 0x204448: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x20444Cu;
        goto label_20444c;
    }
    ctx->pc = 0x204444u;
    {
        const bool branch_taken_0x204444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204444u;
            // 0x204448: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204444) {
            ctx->pc = 0x2043E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2043e8;
        }
    }
    ctx->pc = 0x20444Cu;
label_20444c:
    // 0x20444c: 0x0  nop
    ctx->pc = 0x20444cu;
    // NOP
label_204450:
    // 0x204450: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x204450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_204454:
    // 0x204454: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x204454u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_204458:
    // 0x204458: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x204458u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20445c:
    // 0x20445c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20445cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204460:
    // 0x204460: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204464:
    // 0x204464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204468:
    // 0x204468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20446c:
    // 0x20446c: 0x3e00008  jr          $ra
label_204470:
    if (ctx->pc == 0x204470u) {
        ctx->pc = 0x204470u;
            // 0x204470: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x204474u;
        goto label_204474;
    }
    ctx->pc = 0x20446Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20446Cu;
            // 0x204470: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204474u;
label_204474:
    // 0x204474: 0x0  nop
    ctx->pc = 0x204474u;
    // NOP
label_204478:
    // 0x204478: 0x0  nop
    ctx->pc = 0x204478u;
    // NOP
label_20447c:
    // 0x20447c: 0x0  nop
    ctx->pc = 0x20447cu;
    // NOP
label_204480:
    // 0x204480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_204484:
    // 0x204484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204488:
    // 0x204488: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x204488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_20448c:
    // 0x20448c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204490:
    // 0x204490: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x204490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_204494:
    // 0x204494: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x204494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_204498:
    // 0x204498: 0x320f809  jalr        $t9
label_20449c:
    if (ctx->pc == 0x20449Cu) {
        ctx->pc = 0x2044A0u;
        goto label_2044a0;
    }
    ctx->pc = 0x204498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2044A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2044A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2044A0u; }
            if (ctx->pc != 0x2044A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2044A0u;
label_2044a0:
    // 0x2044a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2044a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2044a4:
    // 0x2044a4: 0x3e00008  jr          $ra
label_2044a8:
    if (ctx->pc == 0x2044A8u) {
        ctx->pc = 0x2044A8u;
            // 0x2044a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2044ACu;
        goto label_2044ac;
    }
    ctx->pc = 0x2044A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2044A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2044A4u;
            // 0x2044a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2044ACu;
label_2044ac:
    // 0x2044ac: 0x0  nop
    ctx->pc = 0x2044acu;
    // NOP
label_2044b0:
    // 0x2044b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2044b4:
    // 0x2044b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2044b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2044b8:
    // 0x2044b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2044b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2044bc:
    // 0x2044bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2044bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2044c0:
    // 0x2044c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2044c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2044c4:
    // 0x2044c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2044c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2044c8:
    // 0x2044c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2044c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2044cc:
    // 0x2044cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2044ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2044d0:
    // 0x2044d0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2044d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2044d4:
    // 0x2044d4: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_2044d8:
    if (ctx->pc == 0x2044D8u) {
        ctx->pc = 0x2044D8u;
            // 0x2044d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2044DCu;
        goto label_2044dc;
    }
    ctx->pc = 0x2044D4u;
    {
        const bool branch_taken_0x2044d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2044D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2044D4u;
            // 0x2044d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044d4) {
            ctx->pc = 0x204518u;
            goto label_204518;
        }
    }
    ctx->pc = 0x2044DCu;
label_2044dc:
    // 0x2044dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2044dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2044e0:
    // 0x2044e0: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2044e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_2044e4:
    // 0x2044e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2044e8:
    // 0x2044e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2044e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2044ec:
    // 0x2044ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2044ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2044f0:
    // 0x2044f0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2044f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2044f4:
    // 0x2044f4: 0x320f809  jalr        $t9
label_2044f8:
    if (ctx->pc == 0x2044F8u) {
        ctx->pc = 0x2044FCu;
        goto label_2044fc;
    }
    ctx->pc = 0x2044F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2044FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2044FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2044FCu; }
            if (ctx->pc != 0x2044FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2044FCu;
label_2044fc:
    // 0x2044fc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2044fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_204500:
    // 0x204500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x204500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_204504:
    // 0x204504: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x204504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_204508:
    // 0x204508: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x204508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20450c:
    // 0x20450c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_204510:
    if (ctx->pc == 0x204510u) {
        ctx->pc = 0x204510u;
            // 0x204510: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x204514u;
        goto label_204514;
    }
    ctx->pc = 0x20450Cu;
    {
        const bool branch_taken_0x20450c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20450Cu;
            // 0x204510: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20450c) {
            ctx->pc = 0x2044E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2044e0;
        }
    }
    ctx->pc = 0x204514u;
label_204514:
    // 0x204514: 0x0  nop
    ctx->pc = 0x204514u;
    // NOP
label_204518:
    // 0x204518: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x204518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20451c:
    // 0x20451c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20451cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_204520:
    // 0x204520: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x204520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204524:
    // 0x204524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204528:
    // 0x204528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20452c:
    // 0x20452c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20452cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_204530:
    // 0x204530: 0x3e00008  jr          $ra
label_204534:
    if (ctx->pc == 0x204534u) {
        ctx->pc = 0x204534u;
            // 0x204534: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x204538u;
        goto label_204538;
    }
    ctx->pc = 0x204530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204530u;
            // 0x204534: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204538u;
label_204538:
    // 0x204538: 0x0  nop
    ctx->pc = 0x204538u;
    // NOP
label_20453c:
    // 0x20453c: 0x0  nop
    ctx->pc = 0x20453cu;
    // NOP
label_204540:
    // 0x204540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x204540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_204544:
    // 0x204544: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x204544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_204548:
    // 0x204548: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x204548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20454c:
    // 0x20454c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_204550:
    // 0x204550: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x204550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_204554:
    // 0x204554: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x204554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_204558:
    // 0x204558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20455c:
    // 0x20455c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20455cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204560:
    // 0x204560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_204564:
    // 0x204564: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x204564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204568:
    // 0x204568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20456c:
    // 0x20456c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x20456cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_204570:
    // 0x204570: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_204574:
    if (ctx->pc == 0x204574u) {
        ctx->pc = 0x204574u;
            // 0x204574: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204578u;
        goto label_204578;
    }
    ctx->pc = 0x204570u;
    {
        const bool branch_taken_0x204570 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x204574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204570u;
            // 0x204574: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204570) {
            ctx->pc = 0x2045C8u;
            goto label_2045c8;
        }
    }
    ctx->pc = 0x204578u;
label_204578:
    // 0x204578: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x204578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20457c:
    // 0x20457c: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x20457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_204580:
    // 0x204580: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204584:
    // 0x204584: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x204584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_204588:
    // 0x204588: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x204588u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20458c:
    // 0x20458c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x20458cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_204590:
    // 0x204590: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x204590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_204594:
    // 0x204594: 0x320f809  jalr        $t9
label_204598:
    if (ctx->pc == 0x204598u) {
        ctx->pc = 0x204598u;
            // 0x204598: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20459Cu;
        goto label_20459c;
    }
    ctx->pc = 0x204594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20459Cu);
        ctx->pc = 0x204598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204594u;
            // 0x204598: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20459Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20459Cu; }
            if (ctx->pc != 0x20459Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20459Cu;
label_20459c:
    // 0x20459c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x20459cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2045a0:
    // 0x2045a0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2045a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2045a4:
    // 0x2045a4: 0x320f809  jalr        $t9
label_2045a8:
    if (ctx->pc == 0x2045A8u) {
        ctx->pc = 0x2045A8u;
            // 0x2045a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2045ACu;
        goto label_2045ac;
    }
    ctx->pc = 0x2045A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2045ACu);
        ctx->pc = 0x2045A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2045A4u;
            // 0x2045a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2045ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2045ACu; }
            if (ctx->pc != 0x2045ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2045ACu;
label_2045ac:
    // 0x2045ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2045acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2045b0:
    // 0x2045b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2045b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2045b4:
    // 0x2045b4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2045b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2045b8:
    // 0x2045b8: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x2045b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_2045bc:
    // 0x2045bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2045bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2045c0:
    // 0x2045c0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2045c4:
    if (ctx->pc == 0x2045C4u) {
        ctx->pc = 0x2045C4u;
            // 0x2045c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2045C8u;
        goto label_2045c8;
    }
    ctx->pc = 0x2045C0u;
    {
        const bool branch_taken_0x2045c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2045C0u;
            // 0x2045c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045c0) {
            ctx->pc = 0x20457Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20457c;
        }
    }
    ctx->pc = 0x2045C8u;
label_2045c8:
    // 0x2045c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2045c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2045cc:
    // 0x2045cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2045ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2045d0:
    // 0x2045d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2045d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2045d4:
    // 0x2045d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2045d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2045d8:
    // 0x2045d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2045d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2045dc:
    // 0x2045dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2045dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2045e0:
    // 0x2045e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2045e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2045e4:
    // 0x2045e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2045e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2045e8:
    // 0x2045e8: 0x3e00008  jr          $ra
label_2045ec:
    if (ctx->pc == 0x2045ECu) {
        ctx->pc = 0x2045ECu;
            // 0x2045ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2045F0u;
        goto label_fallthrough_0x2045e8;
    }
    ctx->pc = 0x2045E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2045ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2045E8u;
            // 0x2045ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2045e8:
    ctx->pc = 0x2045F0u;
}
