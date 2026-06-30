#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00356F00
// Address: 0x356f00 - 0x357560
void sub_00356F00_0x356f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356F00_0x356f00");
#endif

    switch (ctx->pc) {
        case 0x356f00u: goto label_356f00;
        case 0x356f04u: goto label_356f04;
        case 0x356f08u: goto label_356f08;
        case 0x356f0cu: goto label_356f0c;
        case 0x356f10u: goto label_356f10;
        case 0x356f14u: goto label_356f14;
        case 0x356f18u: goto label_356f18;
        case 0x356f1cu: goto label_356f1c;
        case 0x356f20u: goto label_356f20;
        case 0x356f24u: goto label_356f24;
        case 0x356f28u: goto label_356f28;
        case 0x356f2cu: goto label_356f2c;
        case 0x356f30u: goto label_356f30;
        case 0x356f34u: goto label_356f34;
        case 0x356f38u: goto label_356f38;
        case 0x356f3cu: goto label_356f3c;
        case 0x356f40u: goto label_356f40;
        case 0x356f44u: goto label_356f44;
        case 0x356f48u: goto label_356f48;
        case 0x356f4cu: goto label_356f4c;
        case 0x356f50u: goto label_356f50;
        case 0x356f54u: goto label_356f54;
        case 0x356f58u: goto label_356f58;
        case 0x356f5cu: goto label_356f5c;
        case 0x356f60u: goto label_356f60;
        case 0x356f64u: goto label_356f64;
        case 0x356f68u: goto label_356f68;
        case 0x356f6cu: goto label_356f6c;
        case 0x356f70u: goto label_356f70;
        case 0x356f74u: goto label_356f74;
        case 0x356f78u: goto label_356f78;
        case 0x356f7cu: goto label_356f7c;
        case 0x356f80u: goto label_356f80;
        case 0x356f84u: goto label_356f84;
        case 0x356f88u: goto label_356f88;
        case 0x356f8cu: goto label_356f8c;
        case 0x356f90u: goto label_356f90;
        case 0x356f94u: goto label_356f94;
        case 0x356f98u: goto label_356f98;
        case 0x356f9cu: goto label_356f9c;
        case 0x356fa0u: goto label_356fa0;
        case 0x356fa4u: goto label_356fa4;
        case 0x356fa8u: goto label_356fa8;
        case 0x356facu: goto label_356fac;
        case 0x356fb0u: goto label_356fb0;
        case 0x356fb4u: goto label_356fb4;
        case 0x356fb8u: goto label_356fb8;
        case 0x356fbcu: goto label_356fbc;
        case 0x356fc0u: goto label_356fc0;
        case 0x356fc4u: goto label_356fc4;
        case 0x356fc8u: goto label_356fc8;
        case 0x356fccu: goto label_356fcc;
        case 0x356fd0u: goto label_356fd0;
        case 0x356fd4u: goto label_356fd4;
        case 0x356fd8u: goto label_356fd8;
        case 0x356fdcu: goto label_356fdc;
        case 0x356fe0u: goto label_356fe0;
        case 0x356fe4u: goto label_356fe4;
        case 0x356fe8u: goto label_356fe8;
        case 0x356fecu: goto label_356fec;
        case 0x356ff0u: goto label_356ff0;
        case 0x356ff4u: goto label_356ff4;
        case 0x356ff8u: goto label_356ff8;
        case 0x356ffcu: goto label_356ffc;
        case 0x357000u: goto label_357000;
        case 0x357004u: goto label_357004;
        case 0x357008u: goto label_357008;
        case 0x35700cu: goto label_35700c;
        case 0x357010u: goto label_357010;
        case 0x357014u: goto label_357014;
        case 0x357018u: goto label_357018;
        case 0x35701cu: goto label_35701c;
        case 0x357020u: goto label_357020;
        case 0x357024u: goto label_357024;
        case 0x357028u: goto label_357028;
        case 0x35702cu: goto label_35702c;
        case 0x357030u: goto label_357030;
        case 0x357034u: goto label_357034;
        case 0x357038u: goto label_357038;
        case 0x35703cu: goto label_35703c;
        case 0x357040u: goto label_357040;
        case 0x357044u: goto label_357044;
        case 0x357048u: goto label_357048;
        case 0x35704cu: goto label_35704c;
        case 0x357050u: goto label_357050;
        case 0x357054u: goto label_357054;
        case 0x357058u: goto label_357058;
        case 0x35705cu: goto label_35705c;
        case 0x357060u: goto label_357060;
        case 0x357064u: goto label_357064;
        case 0x357068u: goto label_357068;
        case 0x35706cu: goto label_35706c;
        case 0x357070u: goto label_357070;
        case 0x357074u: goto label_357074;
        case 0x357078u: goto label_357078;
        case 0x35707cu: goto label_35707c;
        case 0x357080u: goto label_357080;
        case 0x357084u: goto label_357084;
        case 0x357088u: goto label_357088;
        case 0x35708cu: goto label_35708c;
        case 0x357090u: goto label_357090;
        case 0x357094u: goto label_357094;
        case 0x357098u: goto label_357098;
        case 0x35709cu: goto label_35709c;
        case 0x3570a0u: goto label_3570a0;
        case 0x3570a4u: goto label_3570a4;
        case 0x3570a8u: goto label_3570a8;
        case 0x3570acu: goto label_3570ac;
        case 0x3570b0u: goto label_3570b0;
        case 0x3570b4u: goto label_3570b4;
        case 0x3570b8u: goto label_3570b8;
        case 0x3570bcu: goto label_3570bc;
        case 0x3570c0u: goto label_3570c0;
        case 0x3570c4u: goto label_3570c4;
        case 0x3570c8u: goto label_3570c8;
        case 0x3570ccu: goto label_3570cc;
        case 0x3570d0u: goto label_3570d0;
        case 0x3570d4u: goto label_3570d4;
        case 0x3570d8u: goto label_3570d8;
        case 0x3570dcu: goto label_3570dc;
        case 0x3570e0u: goto label_3570e0;
        case 0x3570e4u: goto label_3570e4;
        case 0x3570e8u: goto label_3570e8;
        case 0x3570ecu: goto label_3570ec;
        case 0x3570f0u: goto label_3570f0;
        case 0x3570f4u: goto label_3570f4;
        case 0x3570f8u: goto label_3570f8;
        case 0x3570fcu: goto label_3570fc;
        case 0x357100u: goto label_357100;
        case 0x357104u: goto label_357104;
        case 0x357108u: goto label_357108;
        case 0x35710cu: goto label_35710c;
        case 0x357110u: goto label_357110;
        case 0x357114u: goto label_357114;
        case 0x357118u: goto label_357118;
        case 0x35711cu: goto label_35711c;
        case 0x357120u: goto label_357120;
        case 0x357124u: goto label_357124;
        case 0x357128u: goto label_357128;
        case 0x35712cu: goto label_35712c;
        case 0x357130u: goto label_357130;
        case 0x357134u: goto label_357134;
        case 0x357138u: goto label_357138;
        case 0x35713cu: goto label_35713c;
        case 0x357140u: goto label_357140;
        case 0x357144u: goto label_357144;
        case 0x357148u: goto label_357148;
        case 0x35714cu: goto label_35714c;
        case 0x357150u: goto label_357150;
        case 0x357154u: goto label_357154;
        case 0x357158u: goto label_357158;
        case 0x35715cu: goto label_35715c;
        case 0x357160u: goto label_357160;
        case 0x357164u: goto label_357164;
        case 0x357168u: goto label_357168;
        case 0x35716cu: goto label_35716c;
        case 0x357170u: goto label_357170;
        case 0x357174u: goto label_357174;
        case 0x357178u: goto label_357178;
        case 0x35717cu: goto label_35717c;
        case 0x357180u: goto label_357180;
        case 0x357184u: goto label_357184;
        case 0x357188u: goto label_357188;
        case 0x35718cu: goto label_35718c;
        case 0x357190u: goto label_357190;
        case 0x357194u: goto label_357194;
        case 0x357198u: goto label_357198;
        case 0x35719cu: goto label_35719c;
        case 0x3571a0u: goto label_3571a0;
        case 0x3571a4u: goto label_3571a4;
        case 0x3571a8u: goto label_3571a8;
        case 0x3571acu: goto label_3571ac;
        case 0x3571b0u: goto label_3571b0;
        case 0x3571b4u: goto label_3571b4;
        case 0x3571b8u: goto label_3571b8;
        case 0x3571bcu: goto label_3571bc;
        case 0x3571c0u: goto label_3571c0;
        case 0x3571c4u: goto label_3571c4;
        case 0x3571c8u: goto label_3571c8;
        case 0x3571ccu: goto label_3571cc;
        case 0x3571d0u: goto label_3571d0;
        case 0x3571d4u: goto label_3571d4;
        case 0x3571d8u: goto label_3571d8;
        case 0x3571dcu: goto label_3571dc;
        case 0x3571e0u: goto label_3571e0;
        case 0x3571e4u: goto label_3571e4;
        case 0x3571e8u: goto label_3571e8;
        case 0x3571ecu: goto label_3571ec;
        case 0x3571f0u: goto label_3571f0;
        case 0x3571f4u: goto label_3571f4;
        case 0x3571f8u: goto label_3571f8;
        case 0x3571fcu: goto label_3571fc;
        case 0x357200u: goto label_357200;
        case 0x357204u: goto label_357204;
        case 0x357208u: goto label_357208;
        case 0x35720cu: goto label_35720c;
        case 0x357210u: goto label_357210;
        case 0x357214u: goto label_357214;
        case 0x357218u: goto label_357218;
        case 0x35721cu: goto label_35721c;
        case 0x357220u: goto label_357220;
        case 0x357224u: goto label_357224;
        case 0x357228u: goto label_357228;
        case 0x35722cu: goto label_35722c;
        case 0x357230u: goto label_357230;
        case 0x357234u: goto label_357234;
        case 0x357238u: goto label_357238;
        case 0x35723cu: goto label_35723c;
        case 0x357240u: goto label_357240;
        case 0x357244u: goto label_357244;
        case 0x357248u: goto label_357248;
        case 0x35724cu: goto label_35724c;
        case 0x357250u: goto label_357250;
        case 0x357254u: goto label_357254;
        case 0x357258u: goto label_357258;
        case 0x35725cu: goto label_35725c;
        case 0x357260u: goto label_357260;
        case 0x357264u: goto label_357264;
        case 0x357268u: goto label_357268;
        case 0x35726cu: goto label_35726c;
        case 0x357270u: goto label_357270;
        case 0x357274u: goto label_357274;
        case 0x357278u: goto label_357278;
        case 0x35727cu: goto label_35727c;
        case 0x357280u: goto label_357280;
        case 0x357284u: goto label_357284;
        case 0x357288u: goto label_357288;
        case 0x35728cu: goto label_35728c;
        case 0x357290u: goto label_357290;
        case 0x357294u: goto label_357294;
        case 0x357298u: goto label_357298;
        case 0x35729cu: goto label_35729c;
        case 0x3572a0u: goto label_3572a0;
        case 0x3572a4u: goto label_3572a4;
        case 0x3572a8u: goto label_3572a8;
        case 0x3572acu: goto label_3572ac;
        case 0x3572b0u: goto label_3572b0;
        case 0x3572b4u: goto label_3572b4;
        case 0x3572b8u: goto label_3572b8;
        case 0x3572bcu: goto label_3572bc;
        case 0x3572c0u: goto label_3572c0;
        case 0x3572c4u: goto label_3572c4;
        case 0x3572c8u: goto label_3572c8;
        case 0x3572ccu: goto label_3572cc;
        case 0x3572d0u: goto label_3572d0;
        case 0x3572d4u: goto label_3572d4;
        case 0x3572d8u: goto label_3572d8;
        case 0x3572dcu: goto label_3572dc;
        case 0x3572e0u: goto label_3572e0;
        case 0x3572e4u: goto label_3572e4;
        case 0x3572e8u: goto label_3572e8;
        case 0x3572ecu: goto label_3572ec;
        case 0x3572f0u: goto label_3572f0;
        case 0x3572f4u: goto label_3572f4;
        case 0x3572f8u: goto label_3572f8;
        case 0x3572fcu: goto label_3572fc;
        case 0x357300u: goto label_357300;
        case 0x357304u: goto label_357304;
        case 0x357308u: goto label_357308;
        case 0x35730cu: goto label_35730c;
        case 0x357310u: goto label_357310;
        case 0x357314u: goto label_357314;
        case 0x357318u: goto label_357318;
        case 0x35731cu: goto label_35731c;
        case 0x357320u: goto label_357320;
        case 0x357324u: goto label_357324;
        case 0x357328u: goto label_357328;
        case 0x35732cu: goto label_35732c;
        case 0x357330u: goto label_357330;
        case 0x357334u: goto label_357334;
        case 0x357338u: goto label_357338;
        case 0x35733cu: goto label_35733c;
        case 0x357340u: goto label_357340;
        case 0x357344u: goto label_357344;
        case 0x357348u: goto label_357348;
        case 0x35734cu: goto label_35734c;
        case 0x357350u: goto label_357350;
        case 0x357354u: goto label_357354;
        case 0x357358u: goto label_357358;
        case 0x35735cu: goto label_35735c;
        case 0x357360u: goto label_357360;
        case 0x357364u: goto label_357364;
        case 0x357368u: goto label_357368;
        case 0x35736cu: goto label_35736c;
        case 0x357370u: goto label_357370;
        case 0x357374u: goto label_357374;
        case 0x357378u: goto label_357378;
        case 0x35737cu: goto label_35737c;
        case 0x357380u: goto label_357380;
        case 0x357384u: goto label_357384;
        case 0x357388u: goto label_357388;
        case 0x35738cu: goto label_35738c;
        case 0x357390u: goto label_357390;
        case 0x357394u: goto label_357394;
        case 0x357398u: goto label_357398;
        case 0x35739cu: goto label_35739c;
        case 0x3573a0u: goto label_3573a0;
        case 0x3573a4u: goto label_3573a4;
        case 0x3573a8u: goto label_3573a8;
        case 0x3573acu: goto label_3573ac;
        case 0x3573b0u: goto label_3573b0;
        case 0x3573b4u: goto label_3573b4;
        case 0x3573b8u: goto label_3573b8;
        case 0x3573bcu: goto label_3573bc;
        case 0x3573c0u: goto label_3573c0;
        case 0x3573c4u: goto label_3573c4;
        case 0x3573c8u: goto label_3573c8;
        case 0x3573ccu: goto label_3573cc;
        case 0x3573d0u: goto label_3573d0;
        case 0x3573d4u: goto label_3573d4;
        case 0x3573d8u: goto label_3573d8;
        case 0x3573dcu: goto label_3573dc;
        case 0x3573e0u: goto label_3573e0;
        case 0x3573e4u: goto label_3573e4;
        case 0x3573e8u: goto label_3573e8;
        case 0x3573ecu: goto label_3573ec;
        case 0x3573f0u: goto label_3573f0;
        case 0x3573f4u: goto label_3573f4;
        case 0x3573f8u: goto label_3573f8;
        case 0x3573fcu: goto label_3573fc;
        case 0x357400u: goto label_357400;
        case 0x357404u: goto label_357404;
        case 0x357408u: goto label_357408;
        case 0x35740cu: goto label_35740c;
        case 0x357410u: goto label_357410;
        case 0x357414u: goto label_357414;
        case 0x357418u: goto label_357418;
        case 0x35741cu: goto label_35741c;
        case 0x357420u: goto label_357420;
        case 0x357424u: goto label_357424;
        case 0x357428u: goto label_357428;
        case 0x35742cu: goto label_35742c;
        case 0x357430u: goto label_357430;
        case 0x357434u: goto label_357434;
        case 0x357438u: goto label_357438;
        case 0x35743cu: goto label_35743c;
        case 0x357440u: goto label_357440;
        case 0x357444u: goto label_357444;
        case 0x357448u: goto label_357448;
        case 0x35744cu: goto label_35744c;
        case 0x357450u: goto label_357450;
        case 0x357454u: goto label_357454;
        case 0x357458u: goto label_357458;
        case 0x35745cu: goto label_35745c;
        case 0x357460u: goto label_357460;
        case 0x357464u: goto label_357464;
        case 0x357468u: goto label_357468;
        case 0x35746cu: goto label_35746c;
        case 0x357470u: goto label_357470;
        case 0x357474u: goto label_357474;
        case 0x357478u: goto label_357478;
        case 0x35747cu: goto label_35747c;
        case 0x357480u: goto label_357480;
        case 0x357484u: goto label_357484;
        case 0x357488u: goto label_357488;
        case 0x35748cu: goto label_35748c;
        case 0x357490u: goto label_357490;
        case 0x357494u: goto label_357494;
        case 0x357498u: goto label_357498;
        case 0x35749cu: goto label_35749c;
        case 0x3574a0u: goto label_3574a0;
        case 0x3574a4u: goto label_3574a4;
        case 0x3574a8u: goto label_3574a8;
        case 0x3574acu: goto label_3574ac;
        case 0x3574b0u: goto label_3574b0;
        case 0x3574b4u: goto label_3574b4;
        case 0x3574b8u: goto label_3574b8;
        case 0x3574bcu: goto label_3574bc;
        case 0x3574c0u: goto label_3574c0;
        case 0x3574c4u: goto label_3574c4;
        case 0x3574c8u: goto label_3574c8;
        case 0x3574ccu: goto label_3574cc;
        case 0x3574d0u: goto label_3574d0;
        case 0x3574d4u: goto label_3574d4;
        case 0x3574d8u: goto label_3574d8;
        case 0x3574dcu: goto label_3574dc;
        case 0x3574e0u: goto label_3574e0;
        case 0x3574e4u: goto label_3574e4;
        case 0x3574e8u: goto label_3574e8;
        case 0x3574ecu: goto label_3574ec;
        case 0x3574f0u: goto label_3574f0;
        case 0x3574f4u: goto label_3574f4;
        case 0x3574f8u: goto label_3574f8;
        case 0x3574fcu: goto label_3574fc;
        case 0x357500u: goto label_357500;
        case 0x357504u: goto label_357504;
        case 0x357508u: goto label_357508;
        case 0x35750cu: goto label_35750c;
        case 0x357510u: goto label_357510;
        case 0x357514u: goto label_357514;
        case 0x357518u: goto label_357518;
        case 0x35751cu: goto label_35751c;
        case 0x357520u: goto label_357520;
        case 0x357524u: goto label_357524;
        case 0x357528u: goto label_357528;
        case 0x35752cu: goto label_35752c;
        case 0x357530u: goto label_357530;
        case 0x357534u: goto label_357534;
        case 0x357538u: goto label_357538;
        case 0x35753cu: goto label_35753c;
        case 0x357540u: goto label_357540;
        case 0x357544u: goto label_357544;
        case 0x357548u: goto label_357548;
        case 0x35754cu: goto label_35754c;
        case 0x357550u: goto label_357550;
        case 0x357554u: goto label_357554;
        case 0x357558u: goto label_357558;
        case 0x35755cu: goto label_35755c;
        default: break;
    }

    ctx->pc = 0x356f00u;

label_356f00:
    // 0x356f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x356f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_356f04:
    // 0x356f04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x356f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_356f08:
    // 0x356f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_356f0c:
    // 0x356f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_356f10:
    // 0x356f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_356f14:
    // 0x356f14: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_356f18:
    if (ctx->pc == 0x356F18u) {
        ctx->pc = 0x356F18u;
            // 0x356f18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356F1Cu;
        goto label_356f1c;
    }
    ctx->pc = 0x356F14u;
    {
        const bool branch_taken_0x356f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x356F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356F14u;
            // 0x356f18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f14) {
            ctx->pc = 0x356FDCu;
            goto label_356fdc;
        }
    }
    ctx->pc = 0x356F1Cu;
label_356f1c:
    // 0x356f1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x356f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_356f20:
    // 0x356f20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x356f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_356f24:
    // 0x356f24: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x356f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_356f28:
    // 0x356f28: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x356f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_356f2c:
    // 0x356f2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x356f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_356f30:
    // 0x356f30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x356f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_356f34:
    // 0x356f34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x356f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_356f38:
    // 0x356f38: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x356f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_356f3c:
    // 0x356f3c: 0x320f809  jalr        $t9
label_356f40:
    if (ctx->pc == 0x356F40u) {
        ctx->pc = 0x356F44u;
        goto label_356f44;
    }
    ctx->pc = 0x356F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x356F44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x356F44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x356F44u; }
            if (ctx->pc != 0x356F44u) { return; }
        }
        }
    }
    ctx->pc = 0x356F44u;
label_356f44:
    // 0x356f44: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_356f48:
    if (ctx->pc == 0x356F48u) {
        ctx->pc = 0x356F48u;
            // 0x356f48: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x356F4Cu;
        goto label_356f4c;
    }
    ctx->pc = 0x356F44u;
    {
        const bool branch_taken_0x356f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x356f44) {
            ctx->pc = 0x356F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356F44u;
            // 0x356f48: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356FC8u;
            goto label_356fc8;
        }
    }
    ctx->pc = 0x356F4Cu;
label_356f4c:
    // 0x356f4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x356f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_356f50:
    // 0x356f50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x356f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_356f54:
    // 0x356f54: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x356f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_356f58:
    // 0x356f58: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x356f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_356f5c:
    // 0x356f5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x356f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_356f60:
    // 0x356f60: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x356f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_356f64:
    // 0x356f64: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x356f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_356f68:
    // 0x356f68: 0xc0aecc4  jal         func_2BB310
label_356f6c:
    if (ctx->pc == 0x356F6Cu) {
        ctx->pc = 0x356F6Cu;
            // 0x356f6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x356F70u;
        goto label_356f70;
    }
    ctx->pc = 0x356F68u;
    SET_GPR_U32(ctx, 31, 0x356F70u);
    ctx->pc = 0x356F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356F68u;
            // 0x356f6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356F70u; }
        if (ctx->pc != 0x356F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356F70u; }
        if (ctx->pc != 0x356F70u) { return; }
    }
    ctx->pc = 0x356F70u;
label_356f70:
    // 0x356f70: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x356f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_356f74:
    // 0x356f74: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x356f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_356f78:
    // 0x356f78: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_356f7c:
    if (ctx->pc == 0x356F7Cu) {
        ctx->pc = 0x356F7Cu;
            // 0x356f7c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x356F80u;
        goto label_356f80;
    }
    ctx->pc = 0x356F78u;
    {
        const bool branch_taken_0x356f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x356f78) {
            ctx->pc = 0x356F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356F78u;
            // 0x356f7c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356F94u;
            goto label_356f94;
        }
    }
    ctx->pc = 0x356F80u;
label_356f80:
    // 0x356f80: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x356f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_356f84:
    // 0x356f84: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x356f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_356f88:
    // 0x356f88: 0x320f809  jalr        $t9
label_356f8c:
    if (ctx->pc == 0x356F8Cu) {
        ctx->pc = 0x356F8Cu;
            // 0x356f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x356F90u;
        goto label_356f90;
    }
    ctx->pc = 0x356F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x356F90u);
        ctx->pc = 0x356F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356F88u;
            // 0x356f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x356F90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x356F90u; }
            if (ctx->pc != 0x356F90u) { return; }
        }
        }
    }
    ctx->pc = 0x356F90u;
label_356f90:
    // 0x356f90: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x356f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_356f94:
    // 0x356f94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x356f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_356f98:
    // 0x356f98: 0xc0aec9c  jal         func_2BB270
label_356f9c:
    if (ctx->pc == 0x356F9Cu) {
        ctx->pc = 0x356F9Cu;
            // 0x356f9c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x356FA0u;
        goto label_356fa0;
    }
    ctx->pc = 0x356F98u;
    SET_GPR_U32(ctx, 31, 0x356FA0u);
    ctx->pc = 0x356F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356F98u;
            // 0x356f9c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FA0u; }
        if (ctx->pc != 0x356FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FA0u; }
        if (ctx->pc != 0x356FA0u) { return; }
    }
    ctx->pc = 0x356FA0u;
label_356fa0:
    // 0x356fa0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x356fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_356fa4:
    // 0x356fa4: 0xc0aec88  jal         func_2BB220
label_356fa8:
    if (ctx->pc == 0x356FA8u) {
        ctx->pc = 0x356FA8u;
            // 0x356fa8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x356FACu;
        goto label_356fac;
    }
    ctx->pc = 0x356FA4u;
    SET_GPR_U32(ctx, 31, 0x356FACu);
    ctx->pc = 0x356FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356FA4u;
            // 0x356fa8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FACu; }
        if (ctx->pc != 0x356FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FACu; }
        if (ctx->pc != 0x356FACu) { return; }
    }
    ctx->pc = 0x356FACu;
label_356fac:
    // 0x356fac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x356facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_356fb0:
    // 0x356fb0: 0xc0aec0c  jal         func_2BB030
label_356fb4:
    if (ctx->pc == 0x356FB4u) {
        ctx->pc = 0x356FB4u;
            // 0x356fb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356FB8u;
        goto label_356fb8;
    }
    ctx->pc = 0x356FB0u;
    SET_GPR_U32(ctx, 31, 0x356FB8u);
    ctx->pc = 0x356FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356FB0u;
            // 0x356fb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FB8u; }
        if (ctx->pc != 0x356FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FB8u; }
        if (ctx->pc != 0x356FB8u) { return; }
    }
    ctx->pc = 0x356FB8u;
label_356fb8:
    // 0x356fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356fbc:
    // 0x356fbc: 0xc0aeaa8  jal         func_2BAAA0
label_356fc0:
    if (ctx->pc == 0x356FC0u) {
        ctx->pc = 0x356FC0u;
            // 0x356fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356FC4u;
        goto label_356fc4;
    }
    ctx->pc = 0x356FBCu;
    SET_GPR_U32(ctx, 31, 0x356FC4u);
    ctx->pc = 0x356FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356FBCu;
            // 0x356fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FC4u; }
        if (ctx->pc != 0x356FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FC4u; }
        if (ctx->pc != 0x356FC4u) { return; }
    }
    ctx->pc = 0x356FC4u;
label_356fc4:
    // 0x356fc4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x356fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_356fc8:
    // 0x356fc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x356fc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_356fcc:
    // 0x356fcc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_356fd0:
    if (ctx->pc == 0x356FD0u) {
        ctx->pc = 0x356FD0u;
            // 0x356fd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356FD4u;
        goto label_356fd4;
    }
    ctx->pc = 0x356FCCu;
    {
        const bool branch_taken_0x356fcc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x356fcc) {
            ctx->pc = 0x356FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x356FCCu;
            // 0x356fd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x356FE0u;
            goto label_356fe0;
        }
    }
    ctx->pc = 0x356FD4u;
label_356fd4:
    // 0x356fd4: 0xc0400a8  jal         func_1002A0
label_356fd8:
    if (ctx->pc == 0x356FD8u) {
        ctx->pc = 0x356FD8u;
            // 0x356fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x356FDCu;
        goto label_356fdc;
    }
    ctx->pc = 0x356FD4u;
    SET_GPR_U32(ctx, 31, 0x356FDCu);
    ctx->pc = 0x356FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x356FD4u;
            // 0x356fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FDCu; }
        if (ctx->pc != 0x356FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x356FDCu; }
        if (ctx->pc != 0x356FDCu) { return; }
    }
    ctx->pc = 0x356FDCu;
label_356fdc:
    // 0x356fdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x356fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356fe0:
    // 0x356fe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x356fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_356fe4:
    // 0x356fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_356fe8:
    // 0x356fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_356fec:
    // 0x356fec: 0x3e00008  jr          $ra
label_356ff0:
    if (ctx->pc == 0x356FF0u) {
        ctx->pc = 0x356FF0u;
            // 0x356ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x356FF4u;
        goto label_356ff4;
    }
    ctx->pc = 0x356FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x356FECu;
            // 0x356ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x356FF4u;
label_356ff4:
    // 0x356ff4: 0x0  nop
    ctx->pc = 0x356ff4u;
    // NOP
label_356ff8:
    // 0x356ff8: 0x0  nop
    ctx->pc = 0x356ff8u;
    // NOP
label_356ffc:
    // 0x356ffc: 0x0  nop
    ctx->pc = 0x356ffcu;
    // NOP
label_357000:
    // 0x357000: 0x3e00008  jr          $ra
label_357004:
    if (ctx->pc == 0x357004u) {
        ctx->pc = 0x357004u;
            // 0x357004: 0x24022af8  addiu       $v0, $zero, 0x2AF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11000));
        ctx->pc = 0x357008u;
        goto label_357008;
    }
    ctx->pc = 0x357000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357000u;
            // 0x357004: 0x24022af8  addiu       $v0, $zero, 0x2AF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357008u;
label_357008:
    // 0x357008: 0x0  nop
    ctx->pc = 0x357008u;
    // NOP
label_35700c:
    // 0x35700c: 0x0  nop
    ctx->pc = 0x35700cu;
    // NOP
label_357010:
    // 0x357010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x357010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_357014:
    // 0x357014: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x357014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_357018:
    // 0x357018: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x357018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35701c:
    // 0x35701c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_357020:
    // 0x357020: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x357020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_357024:
    // 0x357024: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x357024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_357028:
    // 0x357028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35702c:
    // 0x35702c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35702cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_357030:
    // 0x357030: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x357030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_357034:
    // 0x357034: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_357038:
    if (ctx->pc == 0x357038u) {
        ctx->pc = 0x357038u;
            // 0x357038: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35703Cu;
        goto label_35703c;
    }
    ctx->pc = 0x357034u;
    {
        const bool branch_taken_0x357034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x357038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357034u;
            // 0x357038: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357034) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x35703Cu;
label_35703c:
    // 0x35703c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35703cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357040:
    // 0x357040: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x357040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357044:
    // 0x357044: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x357044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357048:
    // 0x357048: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x357048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_35704c:
    // 0x35704c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_357050:
    // 0x357050: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x357050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_357054:
    // 0x357054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x357054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_357058:
    // 0x357058: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x357058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_35705c:
    // 0x35705c: 0x320f809  jalr        $t9
label_357060:
    if (ctx->pc == 0x357060u) {
        ctx->pc = 0x357064u;
        goto label_357064;
    }
    ctx->pc = 0x35705Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x357064u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x357064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x357064u; }
            if (ctx->pc != 0x357064u) { return; }
        }
        }
    }
    ctx->pc = 0x357064u;
label_357064:
    // 0x357064: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x357064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_357068:
    // 0x357068: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x357068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_35706c:
    // 0x35706c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x35706cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_357070:
    // 0x357070: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_357074:
    if (ctx->pc == 0x357074u) {
        ctx->pc = 0x357074u;
            // 0x357074: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x357078u;
        goto label_357078;
    }
    ctx->pc = 0x357070u;
    {
        const bool branch_taken_0x357070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357070u;
            // 0x357074: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357070) {
            ctx->pc = 0x357048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_357048;
        }
    }
    ctx->pc = 0x357078u;
label_357078:
    // 0x357078: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x357078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35707c:
    // 0x35707c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35707cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_357080:
    // 0x357080: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x357080u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_357084:
    // 0x357084: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x357084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_357088:
    // 0x357088: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x357088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35708c:
    // 0x35708c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35708cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_357090:
    // 0x357090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357094:
    // 0x357094: 0x3e00008  jr          $ra
label_357098:
    if (ctx->pc == 0x357098u) {
        ctx->pc = 0x357098u;
            // 0x357098: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35709Cu;
        goto label_35709c;
    }
    ctx->pc = 0x357094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357094u;
            // 0x357098: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35709Cu;
label_35709c:
    // 0x35709c: 0x0  nop
    ctx->pc = 0x35709cu;
    // NOP
label_3570a0:
    // 0x3570a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3570a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3570a4:
    // 0x3570a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3570a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3570a8:
    // 0x3570a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3570a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3570ac:
    // 0x3570ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3570acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3570b0:
    // 0x3570b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3570b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3570b4:
    // 0x3570b4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3570b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3570b8:
    // 0x3570b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3570b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3570bc:
    // 0x3570bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3570bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3570c0:
    // 0x3570c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3570c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3570c4:
    // 0x3570c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3570c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3570c8:
    // 0x3570c8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3570c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3570cc:
    // 0x3570cc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3570ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3570d0:
    // 0x3570d0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3570d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3570d4:
    // 0x3570d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3570d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3570d8:
    // 0x3570d8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3570d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3570dc:
    // 0x3570dc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3570dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3570e0:
    // 0x3570e0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3570e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3570e4:
    // 0x3570e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3570e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3570e8:
    // 0x3570e8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3570e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3570ec:
    // 0x3570ec: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3570ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3570f0:
    // 0x3570f0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3570f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3570f4:
    // 0x3570f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3570f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3570f8:
    // 0x3570f8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3570f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3570fc:
    // 0x3570fc: 0xc0a997c  jal         func_2A65F0
label_357100:
    if (ctx->pc == 0x357100u) {
        ctx->pc = 0x357100u;
            // 0x357100: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x357104u;
        goto label_357104;
    }
    ctx->pc = 0x3570FCu;
    SET_GPR_U32(ctx, 31, 0x357104u);
    ctx->pc = 0x357100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3570FCu;
            // 0x357100: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357104u; }
        if (ctx->pc != 0x357104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357104u; }
        if (ctx->pc != 0x357104u) { return; }
    }
    ctx->pc = 0x357104u;
label_357104:
    // 0x357104: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x357104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_357108:
    // 0x357108: 0xc0d879c  jal         func_361E70
label_35710c:
    if (ctx->pc == 0x35710Cu) {
        ctx->pc = 0x35710Cu;
            // 0x35710c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357110u;
        goto label_357110;
    }
    ctx->pc = 0x357108u;
    SET_GPR_U32(ctx, 31, 0x357110u);
    ctx->pc = 0x35710Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357108u;
            // 0x35710c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357110u; }
        if (ctx->pc != 0x357110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357110u; }
        if (ctx->pc != 0x357110u) { return; }
    }
    ctx->pc = 0x357110u;
label_357110:
    // 0x357110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_357114:
    // 0x357114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357118:
    // 0x357118: 0x3e00008  jr          $ra
label_35711c:
    if (ctx->pc == 0x35711Cu) {
        ctx->pc = 0x35711Cu;
            // 0x35711c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x357120u;
        goto label_357120;
    }
    ctx->pc = 0x357118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35711Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357118u;
            // 0x35711c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357120u;
label_357120:
    // 0x357120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_357124:
    // 0x357124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x357124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_357128:
    // 0x357128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35712c:
    // 0x35712c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_357130:
    // 0x357130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x357130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_357134:
    // 0x357134: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x357134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_357138:
    // 0x357138: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_35713c:
    if (ctx->pc == 0x35713Cu) {
        ctx->pc = 0x35713Cu;
            // 0x35713c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357140u;
        goto label_357140;
    }
    ctx->pc = 0x357138u;
    {
        const bool branch_taken_0x357138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35713Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357138u;
            // 0x35713c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357138) {
            ctx->pc = 0x357168u;
            goto label_357168;
        }
    }
    ctx->pc = 0x357140u;
label_357140:
    // 0x357140: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x357140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_357144:
    // 0x357144: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x357144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_357148:
    // 0x357148: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x357148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35714c:
    // 0x35714c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x35714cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_357150:
    // 0x357150: 0x320f809  jalr        $t9
label_357154:
    if (ctx->pc == 0x357154u) {
        ctx->pc = 0x357158u;
        goto label_357158;
    }
    ctx->pc = 0x357150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x357158u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x357158u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x357158u; }
            if (ctx->pc != 0x357158u) { return; }
        }
        }
    }
    ctx->pc = 0x357158u;
label_357158:
    // 0x357158: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x357158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_35715c:
    // 0x35715c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35715cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357160:
    // 0x357160: 0xc0d86a0  jal         func_361A80
label_357164:
    if (ctx->pc == 0x357164u) {
        ctx->pc = 0x357164u;
            // 0x357164: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357168u;
        goto label_357168;
    }
    ctx->pc = 0x357160u;
    SET_GPR_U32(ctx, 31, 0x357168u);
    ctx->pc = 0x357164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357160u;
            // 0x357164: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361A80u;
    if (runtime->hasFunction(0x361A80u)) {
        auto targetFn = runtime->lookupFunction(0x361A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357168u; }
        if (ctx->pc != 0x357168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361A80_0x361a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357168u; }
        if (ctx->pc != 0x357168u) { return; }
    }
    ctx->pc = 0x357168u;
label_357168:
    // 0x357168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x357168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35716c:
    // 0x35716c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35716cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_357170:
    // 0x357170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357174:
    // 0x357174: 0x3e00008  jr          $ra
label_357178:
    if (ctx->pc == 0x357178u) {
        ctx->pc = 0x357178u;
            // 0x357178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35717Cu;
        goto label_35717c;
    }
    ctx->pc = 0x357174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357174u;
            // 0x357178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35717Cu;
label_35717c:
    // 0x35717c: 0x0  nop
    ctx->pc = 0x35717cu;
    // NOP
label_357180:
    // 0x357180: 0x80d5b40  j           func_356D00
label_357184:
    if (ctx->pc == 0x357184u) {
        ctx->pc = 0x357184u;
            // 0x357184: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x357188u;
        goto label_357188;
    }
    ctx->pc = 0x357180u;
    ctx->pc = 0x357184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357180u;
            // 0x357184: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356D00u;
    {
        auto targetFn = runtime->lookupFunction(0x356D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x357188u;
label_357188:
    // 0x357188: 0x0  nop
    ctx->pc = 0x357188u;
    // NOP
label_35718c:
    // 0x35718c: 0x0  nop
    ctx->pc = 0x35718cu;
    // NOP
label_357190:
    // 0x357190: 0x80d5788  j           func_355E20
label_357194:
    if (ctx->pc == 0x357194u) {
        ctx->pc = 0x357194u;
            // 0x357194: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x357198u;
        goto label_357198;
    }
    ctx->pc = 0x357190u;
    ctx->pc = 0x357194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357190u;
            // 0x357194: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x355E20u;
    {
        auto targetFn = runtime->lookupFunction(0x355E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x357198u;
label_357198:
    // 0x357198: 0x0  nop
    ctx->pc = 0x357198u;
    // NOP
label_35719c:
    // 0x35719c: 0x0  nop
    ctx->pc = 0x35719cu;
    // NOP
label_3571a0:
    // 0x3571a0: 0x80d5618  j           func_355860
label_3571a4:
    if (ctx->pc == 0x3571A4u) {
        ctx->pc = 0x3571A4u;
            // 0x3571a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3571A8u;
        goto label_3571a8;
    }
    ctx->pc = 0x3571A0u;
    ctx->pc = 0x3571A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3571A0u;
            // 0x3571a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x355860u;
    if (runtime->hasFunction(0x355860u)) {
        auto targetFn = runtime->lookupFunction(0x355860u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00355860_0x355860(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3571A8u;
label_3571a8:
    // 0x3571a8: 0x0  nop
    ctx->pc = 0x3571a8u;
    // NOP
label_3571ac:
    // 0x3571ac: 0x0  nop
    ctx->pc = 0x3571acu;
    // NOP
label_3571b0:
    // 0x3571b0: 0x80d55f0  j           func_3557C0
label_3571b4:
    if (ctx->pc == 0x3571B4u) {
        ctx->pc = 0x3571B4u;
            // 0x3571b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3571B8u;
        goto label_3571b8;
    }
    ctx->pc = 0x3571B0u;
    ctx->pc = 0x3571B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3571B0u;
            // 0x3571b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3557C0u;
    {
        auto targetFn = runtime->lookupFunction(0x3557C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3571B8u;
label_3571b8:
    // 0x3571b8: 0x0  nop
    ctx->pc = 0x3571b8u;
    // NOP
label_3571bc:
    // 0x3571bc: 0x0  nop
    ctx->pc = 0x3571bcu;
    // NOP
label_3571c0:
    // 0x3571c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3571c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3571c4:
    // 0x3571c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3571c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3571c8:
    // 0x3571c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3571c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3571cc:
    // 0x3571cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3571ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3571d0:
    // 0x3571d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3571d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3571d4:
    // 0x3571d4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3571d8:
    if (ctx->pc == 0x3571D8u) {
        ctx->pc = 0x3571D8u;
            // 0x3571d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3571DCu;
        goto label_3571dc;
    }
    ctx->pc = 0x3571D4u;
    {
        const bool branch_taken_0x3571d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3571D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3571D4u;
            // 0x3571d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3571d4) {
            ctx->pc = 0x357230u;
            goto label_357230;
        }
    }
    ctx->pc = 0x3571DCu;
label_3571dc:
    // 0x3571dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3571dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3571e0:
    // 0x3571e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3571e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3571e4:
    // 0x3571e4: 0x24636070  addiu       $v1, $v1, 0x6070
    ctx->pc = 0x3571e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24688));
label_3571e8:
    // 0x3571e8: 0x244260a8  addiu       $v0, $v0, 0x60A8
    ctx->pc = 0x3571e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24744));
label_3571ec:
    // 0x3571ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3571ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3571f0:
    // 0x3571f0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3571f4:
    if (ctx->pc == 0x3571F4u) {
        ctx->pc = 0x3571F4u;
            // 0x3571f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3571F8u;
        goto label_3571f8;
    }
    ctx->pc = 0x3571F0u;
    {
        const bool branch_taken_0x3571f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3571F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3571F0u;
            // 0x3571f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3571f0) {
            ctx->pc = 0x357218u;
            goto label_357218;
        }
    }
    ctx->pc = 0x3571F8u;
label_3571f8:
    // 0x3571f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3571f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3571fc:
    // 0x3571fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3571fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_357200:
    // 0x357200: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x357200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
label_357204:
    // 0x357204: 0x244204e8  addiu       $v0, $v0, 0x4E8
    ctx->pc = 0x357204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1256));
label_357208:
    // 0x357208: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x357208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_35720c:
    // 0x35720c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35720cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357210:
    // 0x357210: 0xc0b2718  jal         func_2C9C60
label_357214:
    if (ctx->pc == 0x357214u) {
        ctx->pc = 0x357214u;
            // 0x357214: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x357218u;
        goto label_357218;
    }
    ctx->pc = 0x357210u;
    SET_GPR_U32(ctx, 31, 0x357218u);
    ctx->pc = 0x357214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357210u;
            // 0x357214: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9C60u;
    if (runtime->hasFunction(0x2C9C60u)) {
        auto targetFn = runtime->lookupFunction(0x2C9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357218u; }
        if (ctx->pc != 0x357218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9C60_0x2c9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357218u; }
        if (ctx->pc != 0x357218u) { return; }
    }
    ctx->pc = 0x357218u;
label_357218:
    // 0x357218: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x357218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_35721c:
    // 0x35721c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35721cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_357220:
    // 0x357220: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_357224:
    if (ctx->pc == 0x357224u) {
        ctx->pc = 0x357224u;
            // 0x357224: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357228u;
        goto label_357228;
    }
    ctx->pc = 0x357220u;
    {
        const bool branch_taken_0x357220 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x357220) {
            ctx->pc = 0x357224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357220u;
            // 0x357224: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357234u;
            goto label_357234;
        }
    }
    ctx->pc = 0x357228u;
label_357228:
    // 0x357228: 0xc0400a8  jal         func_1002A0
label_35722c:
    if (ctx->pc == 0x35722Cu) {
        ctx->pc = 0x35722Cu;
            // 0x35722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357230u;
        goto label_357230;
    }
    ctx->pc = 0x357228u;
    SET_GPR_U32(ctx, 31, 0x357230u);
    ctx->pc = 0x35722Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357228u;
            // 0x35722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357230u; }
        if (ctx->pc != 0x357230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357230u; }
        if (ctx->pc != 0x357230u) { return; }
    }
    ctx->pc = 0x357230u;
label_357230:
    // 0x357230: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x357230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357234:
    // 0x357234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x357234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_357238:
    // 0x357238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35723c:
    // 0x35723c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35723cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357240:
    // 0x357240: 0x3e00008  jr          $ra
label_357244:
    if (ctx->pc == 0x357244u) {
        ctx->pc = 0x357244u;
            // 0x357244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x357248u;
        goto label_357248;
    }
    ctx->pc = 0x357240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357240u;
            // 0x357244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357248u;
label_357248:
    // 0x357248: 0x0  nop
    ctx->pc = 0x357248u;
    // NOP
label_35724c:
    // 0x35724c: 0x0  nop
    ctx->pc = 0x35724cu;
    // NOP
label_357250:
    // 0x357250: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x357250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_357254:
    // 0x357254: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x357254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_357258:
    // 0x357258: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x357258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_35725c:
    // 0x35725c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x35725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_357260:
    // 0x357260: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x357260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_357264:
    // 0x357264: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x357264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_357268:
    // 0x357268: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x357268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_35726c:
    // 0x35726c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_357270:
    // 0x357270: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x357270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_357274:
    // 0x357274: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x357274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_357278:
    // 0x357278: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x357278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35727c:
    // 0x35727c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_357280:
    // 0x357280: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x357280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_357284:
    // 0x357284: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x357284u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_357288:
    // 0x357288: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_35728c:
    if (ctx->pc == 0x35728Cu) {
        ctx->pc = 0x35728Cu;
            // 0x35728c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357290u;
        goto label_357290;
    }
    ctx->pc = 0x357288u;
    {
        const bool branch_taken_0x357288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357288u;
            // 0x35728c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357288) {
            ctx->pc = 0x3572D8u;
            goto label_3572d8;
        }
    }
    ctx->pc = 0x357290u;
label_357290:
    // 0x357290: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x357290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_357294:
    // 0x357294: 0x50a300a6  beql        $a1, $v1, . + 4 + (0xA6 << 2)
label_357298:
    if (ctx->pc == 0x357298u) {
        ctx->pc = 0x357298u;
            // 0x357298: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x35729Cu;
        goto label_35729c;
    }
    ctx->pc = 0x357294u;
    {
        const bool branch_taken_0x357294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x357294) {
            ctx->pc = 0x357298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357294u;
            // 0x357298: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357530u;
            goto label_357530;
        }
    }
    ctx->pc = 0x35729Cu;
label_35729c:
    // 0x35729c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35729cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3572a0:
    // 0x3572a0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3572a4:
    if (ctx->pc == 0x3572A4u) {
        ctx->pc = 0x3572A8u;
        goto label_3572a8;
    }
    ctx->pc = 0x3572A0u;
    {
        const bool branch_taken_0x3572a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3572a0) {
            ctx->pc = 0x3572B0u;
            goto label_3572b0;
        }
    }
    ctx->pc = 0x3572A8u;
label_3572a8:
    // 0x3572a8: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_3572ac:
    if (ctx->pc == 0x3572ACu) {
        ctx->pc = 0x3572B0u;
        goto label_3572b0;
    }
    ctx->pc = 0x3572A8u;
    {
        const bool branch_taken_0x3572a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3572a8) {
            ctx->pc = 0x35752Cu;
            goto label_35752c;
        }
    }
    ctx->pc = 0x3572B0u;
label_3572b0:
    // 0x3572b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3572b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3572b4:
    // 0x3572b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3572b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3572b8:
    // 0x3572b8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3572b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3572bc:
    // 0x3572bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3572bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3572c0:
    // 0x3572c0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3572c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3572c4:
    // 0x3572c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3572c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3572c8:
    // 0x3572c8: 0x320f809  jalr        $t9
label_3572cc:
    if (ctx->pc == 0x3572CCu) {
        ctx->pc = 0x3572CCu;
            // 0x3572cc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3572D0u;
        goto label_3572d0;
    }
    ctx->pc = 0x3572C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3572D0u);
        ctx->pc = 0x3572CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3572C8u;
            // 0x3572cc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3572D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3572D0u; }
            if (ctx->pc != 0x3572D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3572D0u;
label_3572d0:
    // 0x3572d0: 0x10000096  b           . + 4 + (0x96 << 2)
label_3572d4:
    if (ctx->pc == 0x3572D4u) {
        ctx->pc = 0x3572D8u;
        goto label_3572d8;
    }
    ctx->pc = 0x3572D0u;
    {
        const bool branch_taken_0x3572d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3572d0) {
            ctx->pc = 0x35752Cu;
            goto label_35752c;
        }
    }
    ctx->pc = 0x3572D8u;
label_3572d8:
    // 0x3572d8: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x3572d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_3572dc:
    // 0x3572dc: 0x12e00093  beqz        $s7, . + 4 + (0x93 << 2)
label_3572e0:
    if (ctx->pc == 0x3572E0u) {
        ctx->pc = 0x3572E4u;
        goto label_3572e4;
    }
    ctx->pc = 0x3572DCu;
    {
        const bool branch_taken_0x3572dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3572dc) {
            ctx->pc = 0x35752Cu;
            goto label_35752c;
        }
    }
    ctx->pc = 0x3572E4u;
label_3572e4:
    // 0x3572e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3572e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3572e8:
    // 0x3572e8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x3572e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_3572ec:
    // 0x3572ec: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x3572ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_3572f0:
    // 0x3572f0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3572f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3572f4:
    // 0x3572f4: 0x8c84d130  lw          $a0, -0x2ED0($a0)
    ctx->pc = 0x3572f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_3572f8:
    // 0x3572f8: 0x26d00084  addiu       $s0, $s6, 0x84
    ctx->pc = 0x3572f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_3572fc:
    // 0x3572fc: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x3572fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_357300:
    // 0x357300: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x357300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_357304:
    // 0x357304: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x357304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_357308:
    // 0x357308: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x357308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_35730c:
    // 0x35730c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x35730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_357310:
    // 0x357310: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x357310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_357314:
    // 0x357314: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x357314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_357318:
    // 0x357318: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x357318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_35731c:
    // 0x35731c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x35731cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_357320:
    // 0x357320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_357324:
    // 0x357324: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x357324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_357328:
    // 0x357328: 0xc04e738  jal         func_139CE0
label_35732c:
    if (ctx->pc == 0x35732Cu) {
        ctx->pc = 0x35732Cu;
            // 0x35732c: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x357330u;
        goto label_357330;
    }
    ctx->pc = 0x357328u;
    SET_GPR_U32(ctx, 31, 0x357330u);
    ctx->pc = 0x35732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357328u;
            // 0x35732c: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357330u; }
        if (ctx->pc != 0x357330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357330u; }
        if (ctx->pc != 0x357330u) { return; }
    }
    ctx->pc = 0x357330u;
label_357330:
    // 0x357330: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x357330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_357334:
    // 0x357334: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x357334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_357338:
    // 0x357338: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x357338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_35733c:
    // 0x35733c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35733cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357340:
    // 0x357340: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x357340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_357344:
    // 0x357344: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x357344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_357348:
    // 0x357348: 0xc4544420  lwc1        $f20, 0x4420($v0)
    ctx->pc = 0x357348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35734c:
    // 0x35734c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35734cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357350:
    // 0x357350: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x357350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_357354:
    // 0x357354: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x357354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_357358:
    // 0x357358: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x357358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_35735c:
    // 0x35735c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x35735cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_357360:
    // 0x357360: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x357360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_357364:
    // 0x357364: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x357364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_357368:
    // 0x357368: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x357368u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35736c:
    // 0x35736c: 0xc0d5d80  jal         func_357600
label_357370:
    if (ctx->pc == 0x357370u) {
        ctx->pc = 0x357370u;
            // 0x357370: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->pc = 0x357374u;
        goto label_357374;
    }
    ctx->pc = 0x35736Cu;
    SET_GPR_U32(ctx, 31, 0x357374u);
    ctx->pc = 0x357370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35736Cu;
            // 0x357370: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357600u;
    if (runtime->hasFunction(0x357600u)) {
        auto targetFn = runtime->lookupFunction(0x357600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357374u; }
        if (ctx->pc != 0x357374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357600_0x357600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357374u; }
        if (ctx->pc != 0x357374u) { return; }
    }
    ctx->pc = 0x357374u;
label_357374:
    // 0x357374: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_357378:
    if (ctx->pc == 0x357378u) {
        ctx->pc = 0x35737Cu;
        goto label_35737c;
    }
    ctx->pc = 0x357374u;
    {
        const bool branch_taken_0x357374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357374) {
            ctx->pc = 0x3574D8u;
            goto label_3574d8;
        }
    }
    ctx->pc = 0x35737Cu;
label_35737c:
    // 0x35737c: 0xc0d1c14  jal         func_347050
label_357380:
    if (ctx->pc == 0x357380u) {
        ctx->pc = 0x357380u;
            // 0x357380: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357384u;
        goto label_357384;
    }
    ctx->pc = 0x35737Cu;
    SET_GPR_U32(ctx, 31, 0x357384u);
    ctx->pc = 0x357380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35737Cu;
            // 0x357380: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357384u; }
        if (ctx->pc != 0x357384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357384u; }
        if (ctx->pc != 0x357384u) { return; }
    }
    ctx->pc = 0x357384u;
label_357384:
    // 0x357384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357388:
    // 0x357388: 0xc04f278  jal         func_13C9E0
label_35738c:
    if (ctx->pc == 0x35738Cu) {
        ctx->pc = 0x35738Cu;
            // 0x35738c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x357390u;
        goto label_357390;
    }
    ctx->pc = 0x357388u;
    SET_GPR_U32(ctx, 31, 0x357390u);
    ctx->pc = 0x35738Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357388u;
            // 0x35738c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357390u; }
        if (ctx->pc != 0x357390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357390u; }
        if (ctx->pc != 0x357390u) { return; }
    }
    ctx->pc = 0x357390u;
label_357390:
    // 0x357390: 0xc0d1dc8  jal         func_347720
label_357394:
    if (ctx->pc == 0x357394u) {
        ctx->pc = 0x357394u;
            // 0x357394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357398u;
        goto label_357398;
    }
    ctx->pc = 0x357390u;
    SET_GPR_U32(ctx, 31, 0x357398u);
    ctx->pc = 0x357394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357390u;
            // 0x357394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357398u; }
        if (ctx->pc != 0x357398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357398u; }
        if (ctx->pc != 0x357398u) { return; }
    }
    ctx->pc = 0x357398u;
label_357398:
    // 0x357398: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x357398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35739c:
    // 0x35739c: 0xc0d1dc8  jal         func_347720
label_3573a0:
    if (ctx->pc == 0x3573A0u) {
        ctx->pc = 0x3573A0u;
            // 0x3573a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3573A4u;
        goto label_3573a4;
    }
    ctx->pc = 0x35739Cu;
    SET_GPR_U32(ctx, 31, 0x3573A4u);
    ctx->pc = 0x3573A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35739Cu;
            // 0x3573a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573A4u; }
        if (ctx->pc != 0x3573A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573A4u; }
        if (ctx->pc != 0x3573A4u) { return; }
    }
    ctx->pc = 0x3573A4u;
label_3573a4:
    // 0x3573a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3573a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3573a8:
    // 0x3573a8: 0xc0d1dc8  jal         func_347720
label_3573ac:
    if (ctx->pc == 0x3573ACu) {
        ctx->pc = 0x3573ACu;
            // 0x3573ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3573B0u;
        goto label_3573b0;
    }
    ctx->pc = 0x3573A8u;
    SET_GPR_U32(ctx, 31, 0x3573B0u);
    ctx->pc = 0x3573ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3573A8u;
            // 0x3573ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573B0u; }
        if (ctx->pc != 0x3573B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573B0u; }
        if (ctx->pc != 0x3573B0u) { return; }
    }
    ctx->pc = 0x3573B0u;
label_3573b0:
    // 0x3573b0: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x3573b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3573b4:
    // 0x3573b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3573b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3573b8:
    // 0x3573b8: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x3573b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3573bc:
    // 0x3573bc: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3573bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3573c0:
    // 0x3573c0: 0xc04ce50  jal         func_133940
label_3573c4:
    if (ctx->pc == 0x3573C4u) {
        ctx->pc = 0x3573C4u;
            // 0x3573c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3573C8u;
        goto label_3573c8;
    }
    ctx->pc = 0x3573C0u;
    SET_GPR_U32(ctx, 31, 0x3573C8u);
    ctx->pc = 0x3573C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3573C0u;
            // 0x3573c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573C8u; }
        if (ctx->pc != 0x3573C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573C8u; }
        if (ctx->pc != 0x3573C8u) { return; }
    }
    ctx->pc = 0x3573C8u;
label_3573c8:
    // 0x3573c8: 0xc0d1c10  jal         func_347040
label_3573cc:
    if (ctx->pc == 0x3573CCu) {
        ctx->pc = 0x3573CCu;
            // 0x3573cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3573D0u;
        goto label_3573d0;
    }
    ctx->pc = 0x3573C8u;
    SET_GPR_U32(ctx, 31, 0x3573D0u);
    ctx->pc = 0x3573CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3573C8u;
            // 0x3573cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573D0u; }
        if (ctx->pc != 0x3573D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573D0u; }
        if (ctx->pc != 0x3573D0u) { return; }
    }
    ctx->pc = 0x3573D0u;
label_3573d0:
    // 0x3573d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3573d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3573d4:
    // 0x3573d4: 0xc04ce80  jal         func_133A00
label_3573d8:
    if (ctx->pc == 0x3573D8u) {
        ctx->pc = 0x3573D8u;
            // 0x3573d8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3573DCu;
        goto label_3573dc;
    }
    ctx->pc = 0x3573D4u;
    SET_GPR_U32(ctx, 31, 0x3573DCu);
    ctx->pc = 0x3573D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3573D4u;
            // 0x3573d8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573DCu; }
        if (ctx->pc != 0x3573DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573DCu; }
        if (ctx->pc != 0x3573DCu) { return; }
    }
    ctx->pc = 0x3573DCu;
label_3573dc:
    // 0x3573dc: 0xc0d4108  jal         func_350420
label_3573e0:
    if (ctx->pc == 0x3573E0u) {
        ctx->pc = 0x3573E4u;
        goto label_3573e4;
    }
    ctx->pc = 0x3573DCu;
    SET_GPR_U32(ctx, 31, 0x3573E4u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573E4u; }
        if (ctx->pc != 0x3573E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573E4u; }
        if (ctx->pc != 0x3573E4u) { return; }
    }
    ctx->pc = 0x3573E4u;
label_3573e4:
    // 0x3573e4: 0xc0b36b4  jal         func_2CDAD0
label_3573e8:
    if (ctx->pc == 0x3573E8u) {
        ctx->pc = 0x3573E8u;
            // 0x3573e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3573ECu;
        goto label_3573ec;
    }
    ctx->pc = 0x3573E4u;
    SET_GPR_U32(ctx, 31, 0x3573ECu);
    ctx->pc = 0x3573E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3573E4u;
            // 0x3573e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573ECu; }
        if (ctx->pc != 0x3573ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573ECu; }
        if (ctx->pc != 0x3573ECu) { return; }
    }
    ctx->pc = 0x3573ECu;
label_3573ec:
    // 0x3573ec: 0xc0b9c64  jal         func_2E7190
label_3573f0:
    if (ctx->pc == 0x3573F0u) {
        ctx->pc = 0x3573F0u;
            // 0x3573f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3573F4u;
        goto label_3573f4;
    }
    ctx->pc = 0x3573ECu;
    SET_GPR_U32(ctx, 31, 0x3573F4u);
    ctx->pc = 0x3573F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3573ECu;
            // 0x3573f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573F4u; }
        if (ctx->pc != 0x3573F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3573F4u; }
        if (ctx->pc != 0x3573F4u) { return; }
    }
    ctx->pc = 0x3573F4u;
label_3573f4:
    // 0x3573f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3573f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3573f8:
    // 0x3573f8: 0xc0d4104  jal         func_350410
label_3573fc:
    if (ctx->pc == 0x3573FCu) {
        ctx->pc = 0x3573FCu;
            // 0x3573fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357400u;
        goto label_357400;
    }
    ctx->pc = 0x3573F8u;
    SET_GPR_U32(ctx, 31, 0x357400u);
    ctx->pc = 0x3573FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3573F8u;
            // 0x3573fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357400u; }
        if (ctx->pc != 0x357400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357400u; }
        if (ctx->pc != 0x357400u) { return; }
    }
    ctx->pc = 0x357400u;
label_357400:
    // 0x357400: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x357400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_357404:
    // 0x357404: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x357404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_357408:
    // 0x357408: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x357408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35740c:
    // 0x35740c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x35740cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_357410:
    // 0x357410: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x357410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357414:
    // 0x357414: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x357414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357418:
    // 0x357418: 0xc0d40ac  jal         func_3502B0
label_35741c:
    if (ctx->pc == 0x35741Cu) {
        ctx->pc = 0x35741Cu;
            // 0x35741c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x357420u;
        goto label_357420;
    }
    ctx->pc = 0x357418u;
    SET_GPR_U32(ctx, 31, 0x357420u);
    ctx->pc = 0x35741Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357418u;
            // 0x35741c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357420u; }
        if (ctx->pc != 0x357420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357420u; }
        if (ctx->pc != 0x357420u) { return; }
    }
    ctx->pc = 0x357420u;
label_357420:
    // 0x357420: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x357420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_357424:
    // 0x357424: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_357428:
    if (ctx->pc == 0x357428u) {
        ctx->pc = 0x357428u;
            // 0x357428: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x35742Cu;
        goto label_35742c;
    }
    ctx->pc = 0x357424u;
    {
        const bool branch_taken_0x357424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x357428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357424u;
            // 0x357428: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357424) {
            ctx->pc = 0x3574F0u;
            goto label_3574f0;
        }
    }
    ctx->pc = 0x35742Cu;
label_35742c:
    // 0x35742c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x35742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_357430:
    // 0x357430: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x357430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_357434:
    // 0x357434: 0xc04cd60  jal         func_133580
label_357438:
    if (ctx->pc == 0x357438u) {
        ctx->pc = 0x357438u;
            // 0x357438: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35743Cu;
        goto label_35743c;
    }
    ctx->pc = 0x357434u;
    SET_GPR_U32(ctx, 31, 0x35743Cu);
    ctx->pc = 0x357438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357434u;
            // 0x357438: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35743Cu; }
        if (ctx->pc != 0x35743Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35743Cu; }
        if (ctx->pc != 0x35743Cu) { return; }
    }
    ctx->pc = 0x35743Cu;
label_35743c:
    // 0x35743c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x35743cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_357440:
    // 0x357440: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x357440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_357444:
    // 0x357444: 0xc0d5d58  jal         func_357560
label_357448:
    if (ctx->pc == 0x357448u) {
        ctx->pc = 0x357448u;
            // 0x357448: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x35744Cu;
        goto label_35744c;
    }
    ctx->pc = 0x357444u;
    SET_GPR_U32(ctx, 31, 0x35744Cu);
    ctx->pc = 0x357448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357444u;
            // 0x357448: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357560u;
    if (runtime->hasFunction(0x357560u)) {
        auto targetFn = runtime->lookupFunction(0x357560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35744Cu; }
        if (ctx->pc != 0x35744Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357560_0x357560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35744Cu; }
        if (ctx->pc != 0x35744Cu) { return; }
    }
    ctx->pc = 0x35744Cu;
label_35744c:
    // 0x35744c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35744cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_357450:
    // 0x357450: 0xc0770e4  jal         func_1DC390
label_357454:
    if (ctx->pc == 0x357454u) {
        ctx->pc = 0x357454u;
            // 0x357454: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x357458u;
        goto label_357458;
    }
    ctx->pc = 0x357450u;
    SET_GPR_U32(ctx, 31, 0x357458u);
    ctx->pc = 0x357454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357450u;
            // 0x357454: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357458u; }
        if (ctx->pc != 0x357458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357458u; }
        if (ctx->pc != 0x357458u) { return; }
    }
    ctx->pc = 0x357458u;
label_357458:
    // 0x357458: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x357458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_35745c:
    // 0x35745c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_357460:
    if (ctx->pc == 0x357460u) {
        ctx->pc = 0x357464u;
        goto label_357464;
    }
    ctx->pc = 0x35745Cu;
    {
        const bool branch_taken_0x35745c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35745c) {
            ctx->pc = 0x357470u;
            goto label_357470;
        }
    }
    ctx->pc = 0x357464u;
label_357464:
    // 0x357464: 0x1000000a  b           . + 4 + (0xA << 2)
label_357468:
    if (ctx->pc == 0x357468u) {
        ctx->pc = 0x35746Cu;
        goto label_35746c;
    }
    ctx->pc = 0x357464u;
    {
        const bool branch_taken_0x357464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357464) {
            ctx->pc = 0x357490u;
            goto label_357490;
        }
    }
    ctx->pc = 0x35746Cu;
label_35746c:
    // 0x35746c: 0x0  nop
    ctx->pc = 0x35746cu;
    // NOP
label_357470:
    // 0x357470: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x357470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_357474:
    // 0x357474: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x357474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_357478:
    // 0x357478: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x357478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_35747c:
    // 0x35747c: 0xc04e4a4  jal         func_139290
label_357480:
    if (ctx->pc == 0x357480u) {
        ctx->pc = 0x357480u;
            // 0x357480: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x357484u;
        goto label_357484;
    }
    ctx->pc = 0x35747Cu;
    SET_GPR_U32(ctx, 31, 0x357484u);
    ctx->pc = 0x357480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35747Cu;
            // 0x357480: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357484u; }
        if (ctx->pc != 0x357484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357484u; }
        if (ctx->pc != 0x357484u) { return; }
    }
    ctx->pc = 0x357484u;
label_357484:
    // 0x357484: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x357484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_357488:
    // 0x357488: 0x10000007  b           . + 4 + (0x7 << 2)
label_35748c:
    if (ctx->pc == 0x35748Cu) {
        ctx->pc = 0x35748Cu;
            // 0x35748c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x357490u;
        goto label_357490;
    }
    ctx->pc = 0x357488u;
    {
        const bool branch_taken_0x357488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35748Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357488u;
            // 0x35748c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357488) {
            ctx->pc = 0x3574A8u;
            goto label_3574a8;
        }
    }
    ctx->pc = 0x357490u;
label_357490:
    // 0x357490: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x357490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_357494:
    // 0x357494: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x357494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_357498:
    // 0x357498: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x357498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_35749c:
    // 0x35749c: 0xc04e4a4  jal         func_139290
label_3574a0:
    if (ctx->pc == 0x3574A0u) {
        ctx->pc = 0x3574A0u;
            // 0x3574a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3574A4u;
        goto label_3574a4;
    }
    ctx->pc = 0x35749Cu;
    SET_GPR_U32(ctx, 31, 0x3574A4u);
    ctx->pc = 0x3574A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35749Cu;
            // 0x3574a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3574A4u; }
        if (ctx->pc != 0x3574A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3574A4u; }
        if (ctx->pc != 0x3574A4u) { return; }
    }
    ctx->pc = 0x3574A4u;
label_3574a4:
    // 0x3574a4: 0x0  nop
    ctx->pc = 0x3574a4u;
    // NOP
label_3574a8:
    // 0x3574a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3574a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3574ac:
    // 0x3574ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3574acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3574b0:
    // 0x3574b0: 0x320f809  jalr        $t9
label_3574b4:
    if (ctx->pc == 0x3574B4u) {
        ctx->pc = 0x3574B4u;
            // 0x3574b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3574B8u;
        goto label_3574b8;
    }
    ctx->pc = 0x3574B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3574B8u);
        ctx->pc = 0x3574B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3574B0u;
            // 0x3574b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3574B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3574B8u; }
            if (ctx->pc != 0x3574B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3574B8u;
label_3574b8:
    // 0x3574b8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x3574b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3574bc:
    // 0x3574bc: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3574bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3574c0:
    // 0x3574c0: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x3574c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_3574c4:
    // 0x3574c4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3574c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3574c8:
    // 0x3574c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3574c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3574cc:
    // 0x3574cc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x3574ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3574d0:
    // 0x3574d0: 0xc04cfcc  jal         func_133F30
label_3574d4:
    if (ctx->pc == 0x3574D4u) {
        ctx->pc = 0x3574D4u;
            // 0x3574d4: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x3574D8u;
        goto label_3574d8;
    }
    ctx->pc = 0x3574D0u;
    SET_GPR_U32(ctx, 31, 0x3574D8u);
    ctx->pc = 0x3574D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3574D0u;
            // 0x3574d4: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3574D8u; }
        if (ctx->pc != 0x3574D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3574D8u; }
        if (ctx->pc != 0x3574D8u) { return; }
    }
    ctx->pc = 0x3574D8u;
label_3574d8:
    // 0x3574d8: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x3574d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_3574dc:
    // 0x3574dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3574dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3574e0:
    // 0x3574e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3574e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3574e4:
    // 0x3574e4: 0xc0e31f8  jal         func_38C7E0
label_3574e8:
    if (ctx->pc == 0x3574E8u) {
        ctx->pc = 0x3574E8u;
            // 0x3574e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3574ECu;
        goto label_3574ec;
    }
    ctx->pc = 0x3574E4u;
    SET_GPR_U32(ctx, 31, 0x3574ECu);
    ctx->pc = 0x3574E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3574E4u;
            // 0x3574e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3574ECu; }
        if (ctx->pc != 0x3574ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3574ECu; }
        if (ctx->pc != 0x3574ECu) { return; }
    }
    ctx->pc = 0x3574ECu;
label_3574ec:
    // 0x3574ec: 0x0  nop
    ctx->pc = 0x3574ecu;
    // NOP
label_3574f0:
    // 0x3574f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3574f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3574f4:
    // 0x3574f4: 0x277182b  sltu        $v1, $s3, $s7
    ctx->pc = 0x3574f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_3574f8:
    // 0x3574f8: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
label_3574fc:
    if (ctx->pc == 0x3574FCu) {
        ctx->pc = 0x3574FCu;
            // 0x3574fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x357500u;
        goto label_357500;
    }
    ctx->pc = 0x3574F8u;
    {
        const bool branch_taken_0x3574f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3574FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3574F8u;
            // 0x3574fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3574f8) {
            ctx->pc = 0x357350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_357350;
        }
    }
    ctx->pc = 0x357500u;
label_357500:
    // 0x357500: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x357500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_357504:
    // 0x357504: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x357504u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_357508:
    // 0x357508: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_35750c:
    if (ctx->pc == 0x35750Cu) {
        ctx->pc = 0x35750Cu;
            // 0x35750c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x357510u;
        goto label_357510;
    }
    ctx->pc = 0x357508u;
    {
        const bool branch_taken_0x357508 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x35750Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357508u;
            // 0x35750c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357508) {
            ctx->pc = 0x35752Cu;
            goto label_35752c;
        }
    }
    ctx->pc = 0x357510u;
label_357510:
    // 0x357510: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x357510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_357514:
    // 0x357514: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x357514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_357518:
    // 0x357518: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x357518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_35751c:
    // 0x35751c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x35751cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_357520:
    // 0x357520: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x357520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_357524:
    // 0x357524: 0xc055754  jal         func_155D50
label_357528:
    if (ctx->pc == 0x357528u) {
        ctx->pc = 0x357528u;
            // 0x357528: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x35752Cu;
        goto label_35752c;
    }
    ctx->pc = 0x357524u;
    SET_GPR_U32(ctx, 31, 0x35752Cu);
    ctx->pc = 0x357528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357524u;
            // 0x357528: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35752Cu; }
        if (ctx->pc != 0x35752Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35752Cu; }
        if (ctx->pc != 0x35752Cu) { return; }
    }
    ctx->pc = 0x35752Cu;
label_35752c:
    // 0x35752c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x35752cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_357530:
    // 0x357530: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x357530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_357534:
    // 0x357534: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x357534u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_357538:
    // 0x357538: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x357538u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_35753c:
    // 0x35753c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35753cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_357540:
    // 0x357540: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x357540u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_357544:
    // 0x357544: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x357544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_357548:
    // 0x357548: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x357548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35754c:
    // 0x35754c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35754cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_357550:
    // 0x357550: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x357550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_357554:
    // 0x357554: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x357554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_357558:
    // 0x357558: 0x3e00008  jr          $ra
label_35755c:
    if (ctx->pc == 0x35755Cu) {
        ctx->pc = 0x35755Cu;
            // 0x35755c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x357560u;
        goto label_fallthrough_0x357558;
    }
    ctx->pc = 0x357558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35755Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357558u;
            // 0x35755c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x357558:
    ctx->pc = 0x357560u;
}
