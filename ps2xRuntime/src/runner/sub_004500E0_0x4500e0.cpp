#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004500E0
// Address: 0x4500e0 - 0x450730
void sub_004500E0_0x4500e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004500E0_0x4500e0");
#endif

    switch (ctx->pc) {
        case 0x4500e0u: goto label_4500e0;
        case 0x4500e4u: goto label_4500e4;
        case 0x4500e8u: goto label_4500e8;
        case 0x4500ecu: goto label_4500ec;
        case 0x4500f0u: goto label_4500f0;
        case 0x4500f4u: goto label_4500f4;
        case 0x4500f8u: goto label_4500f8;
        case 0x4500fcu: goto label_4500fc;
        case 0x450100u: goto label_450100;
        case 0x450104u: goto label_450104;
        case 0x450108u: goto label_450108;
        case 0x45010cu: goto label_45010c;
        case 0x450110u: goto label_450110;
        case 0x450114u: goto label_450114;
        case 0x450118u: goto label_450118;
        case 0x45011cu: goto label_45011c;
        case 0x450120u: goto label_450120;
        case 0x450124u: goto label_450124;
        case 0x450128u: goto label_450128;
        case 0x45012cu: goto label_45012c;
        case 0x450130u: goto label_450130;
        case 0x450134u: goto label_450134;
        case 0x450138u: goto label_450138;
        case 0x45013cu: goto label_45013c;
        case 0x450140u: goto label_450140;
        case 0x450144u: goto label_450144;
        case 0x450148u: goto label_450148;
        case 0x45014cu: goto label_45014c;
        case 0x450150u: goto label_450150;
        case 0x450154u: goto label_450154;
        case 0x450158u: goto label_450158;
        case 0x45015cu: goto label_45015c;
        case 0x450160u: goto label_450160;
        case 0x450164u: goto label_450164;
        case 0x450168u: goto label_450168;
        case 0x45016cu: goto label_45016c;
        case 0x450170u: goto label_450170;
        case 0x450174u: goto label_450174;
        case 0x450178u: goto label_450178;
        case 0x45017cu: goto label_45017c;
        case 0x450180u: goto label_450180;
        case 0x450184u: goto label_450184;
        case 0x450188u: goto label_450188;
        case 0x45018cu: goto label_45018c;
        case 0x450190u: goto label_450190;
        case 0x450194u: goto label_450194;
        case 0x450198u: goto label_450198;
        case 0x45019cu: goto label_45019c;
        case 0x4501a0u: goto label_4501a0;
        case 0x4501a4u: goto label_4501a4;
        case 0x4501a8u: goto label_4501a8;
        case 0x4501acu: goto label_4501ac;
        case 0x4501b0u: goto label_4501b0;
        case 0x4501b4u: goto label_4501b4;
        case 0x4501b8u: goto label_4501b8;
        case 0x4501bcu: goto label_4501bc;
        case 0x4501c0u: goto label_4501c0;
        case 0x4501c4u: goto label_4501c4;
        case 0x4501c8u: goto label_4501c8;
        case 0x4501ccu: goto label_4501cc;
        case 0x4501d0u: goto label_4501d0;
        case 0x4501d4u: goto label_4501d4;
        case 0x4501d8u: goto label_4501d8;
        case 0x4501dcu: goto label_4501dc;
        case 0x4501e0u: goto label_4501e0;
        case 0x4501e4u: goto label_4501e4;
        case 0x4501e8u: goto label_4501e8;
        case 0x4501ecu: goto label_4501ec;
        case 0x4501f0u: goto label_4501f0;
        case 0x4501f4u: goto label_4501f4;
        case 0x4501f8u: goto label_4501f8;
        case 0x4501fcu: goto label_4501fc;
        case 0x450200u: goto label_450200;
        case 0x450204u: goto label_450204;
        case 0x450208u: goto label_450208;
        case 0x45020cu: goto label_45020c;
        case 0x450210u: goto label_450210;
        case 0x450214u: goto label_450214;
        case 0x450218u: goto label_450218;
        case 0x45021cu: goto label_45021c;
        case 0x450220u: goto label_450220;
        case 0x450224u: goto label_450224;
        case 0x450228u: goto label_450228;
        case 0x45022cu: goto label_45022c;
        case 0x450230u: goto label_450230;
        case 0x450234u: goto label_450234;
        case 0x450238u: goto label_450238;
        case 0x45023cu: goto label_45023c;
        case 0x450240u: goto label_450240;
        case 0x450244u: goto label_450244;
        case 0x450248u: goto label_450248;
        case 0x45024cu: goto label_45024c;
        case 0x450250u: goto label_450250;
        case 0x450254u: goto label_450254;
        case 0x450258u: goto label_450258;
        case 0x45025cu: goto label_45025c;
        case 0x450260u: goto label_450260;
        case 0x450264u: goto label_450264;
        case 0x450268u: goto label_450268;
        case 0x45026cu: goto label_45026c;
        case 0x450270u: goto label_450270;
        case 0x450274u: goto label_450274;
        case 0x450278u: goto label_450278;
        case 0x45027cu: goto label_45027c;
        case 0x450280u: goto label_450280;
        case 0x450284u: goto label_450284;
        case 0x450288u: goto label_450288;
        case 0x45028cu: goto label_45028c;
        case 0x450290u: goto label_450290;
        case 0x450294u: goto label_450294;
        case 0x450298u: goto label_450298;
        case 0x45029cu: goto label_45029c;
        case 0x4502a0u: goto label_4502a0;
        case 0x4502a4u: goto label_4502a4;
        case 0x4502a8u: goto label_4502a8;
        case 0x4502acu: goto label_4502ac;
        case 0x4502b0u: goto label_4502b0;
        case 0x4502b4u: goto label_4502b4;
        case 0x4502b8u: goto label_4502b8;
        case 0x4502bcu: goto label_4502bc;
        case 0x4502c0u: goto label_4502c0;
        case 0x4502c4u: goto label_4502c4;
        case 0x4502c8u: goto label_4502c8;
        case 0x4502ccu: goto label_4502cc;
        case 0x4502d0u: goto label_4502d0;
        case 0x4502d4u: goto label_4502d4;
        case 0x4502d8u: goto label_4502d8;
        case 0x4502dcu: goto label_4502dc;
        case 0x4502e0u: goto label_4502e0;
        case 0x4502e4u: goto label_4502e4;
        case 0x4502e8u: goto label_4502e8;
        case 0x4502ecu: goto label_4502ec;
        case 0x4502f0u: goto label_4502f0;
        case 0x4502f4u: goto label_4502f4;
        case 0x4502f8u: goto label_4502f8;
        case 0x4502fcu: goto label_4502fc;
        case 0x450300u: goto label_450300;
        case 0x450304u: goto label_450304;
        case 0x450308u: goto label_450308;
        case 0x45030cu: goto label_45030c;
        case 0x450310u: goto label_450310;
        case 0x450314u: goto label_450314;
        case 0x450318u: goto label_450318;
        case 0x45031cu: goto label_45031c;
        case 0x450320u: goto label_450320;
        case 0x450324u: goto label_450324;
        case 0x450328u: goto label_450328;
        case 0x45032cu: goto label_45032c;
        case 0x450330u: goto label_450330;
        case 0x450334u: goto label_450334;
        case 0x450338u: goto label_450338;
        case 0x45033cu: goto label_45033c;
        case 0x450340u: goto label_450340;
        case 0x450344u: goto label_450344;
        case 0x450348u: goto label_450348;
        case 0x45034cu: goto label_45034c;
        case 0x450350u: goto label_450350;
        case 0x450354u: goto label_450354;
        case 0x450358u: goto label_450358;
        case 0x45035cu: goto label_45035c;
        case 0x450360u: goto label_450360;
        case 0x450364u: goto label_450364;
        case 0x450368u: goto label_450368;
        case 0x45036cu: goto label_45036c;
        case 0x450370u: goto label_450370;
        case 0x450374u: goto label_450374;
        case 0x450378u: goto label_450378;
        case 0x45037cu: goto label_45037c;
        case 0x450380u: goto label_450380;
        case 0x450384u: goto label_450384;
        case 0x450388u: goto label_450388;
        case 0x45038cu: goto label_45038c;
        case 0x450390u: goto label_450390;
        case 0x450394u: goto label_450394;
        case 0x450398u: goto label_450398;
        case 0x45039cu: goto label_45039c;
        case 0x4503a0u: goto label_4503a0;
        case 0x4503a4u: goto label_4503a4;
        case 0x4503a8u: goto label_4503a8;
        case 0x4503acu: goto label_4503ac;
        case 0x4503b0u: goto label_4503b0;
        case 0x4503b4u: goto label_4503b4;
        case 0x4503b8u: goto label_4503b8;
        case 0x4503bcu: goto label_4503bc;
        case 0x4503c0u: goto label_4503c0;
        case 0x4503c4u: goto label_4503c4;
        case 0x4503c8u: goto label_4503c8;
        case 0x4503ccu: goto label_4503cc;
        case 0x4503d0u: goto label_4503d0;
        case 0x4503d4u: goto label_4503d4;
        case 0x4503d8u: goto label_4503d8;
        case 0x4503dcu: goto label_4503dc;
        case 0x4503e0u: goto label_4503e0;
        case 0x4503e4u: goto label_4503e4;
        case 0x4503e8u: goto label_4503e8;
        case 0x4503ecu: goto label_4503ec;
        case 0x4503f0u: goto label_4503f0;
        case 0x4503f4u: goto label_4503f4;
        case 0x4503f8u: goto label_4503f8;
        case 0x4503fcu: goto label_4503fc;
        case 0x450400u: goto label_450400;
        case 0x450404u: goto label_450404;
        case 0x450408u: goto label_450408;
        case 0x45040cu: goto label_45040c;
        case 0x450410u: goto label_450410;
        case 0x450414u: goto label_450414;
        case 0x450418u: goto label_450418;
        case 0x45041cu: goto label_45041c;
        case 0x450420u: goto label_450420;
        case 0x450424u: goto label_450424;
        case 0x450428u: goto label_450428;
        case 0x45042cu: goto label_45042c;
        case 0x450430u: goto label_450430;
        case 0x450434u: goto label_450434;
        case 0x450438u: goto label_450438;
        case 0x45043cu: goto label_45043c;
        case 0x450440u: goto label_450440;
        case 0x450444u: goto label_450444;
        case 0x450448u: goto label_450448;
        case 0x45044cu: goto label_45044c;
        case 0x450450u: goto label_450450;
        case 0x450454u: goto label_450454;
        case 0x450458u: goto label_450458;
        case 0x45045cu: goto label_45045c;
        case 0x450460u: goto label_450460;
        case 0x450464u: goto label_450464;
        case 0x450468u: goto label_450468;
        case 0x45046cu: goto label_45046c;
        case 0x450470u: goto label_450470;
        case 0x450474u: goto label_450474;
        case 0x450478u: goto label_450478;
        case 0x45047cu: goto label_45047c;
        case 0x450480u: goto label_450480;
        case 0x450484u: goto label_450484;
        case 0x450488u: goto label_450488;
        case 0x45048cu: goto label_45048c;
        case 0x450490u: goto label_450490;
        case 0x450494u: goto label_450494;
        case 0x450498u: goto label_450498;
        case 0x45049cu: goto label_45049c;
        case 0x4504a0u: goto label_4504a0;
        case 0x4504a4u: goto label_4504a4;
        case 0x4504a8u: goto label_4504a8;
        case 0x4504acu: goto label_4504ac;
        case 0x4504b0u: goto label_4504b0;
        case 0x4504b4u: goto label_4504b4;
        case 0x4504b8u: goto label_4504b8;
        case 0x4504bcu: goto label_4504bc;
        case 0x4504c0u: goto label_4504c0;
        case 0x4504c4u: goto label_4504c4;
        case 0x4504c8u: goto label_4504c8;
        case 0x4504ccu: goto label_4504cc;
        case 0x4504d0u: goto label_4504d0;
        case 0x4504d4u: goto label_4504d4;
        case 0x4504d8u: goto label_4504d8;
        case 0x4504dcu: goto label_4504dc;
        case 0x4504e0u: goto label_4504e0;
        case 0x4504e4u: goto label_4504e4;
        case 0x4504e8u: goto label_4504e8;
        case 0x4504ecu: goto label_4504ec;
        case 0x4504f0u: goto label_4504f0;
        case 0x4504f4u: goto label_4504f4;
        case 0x4504f8u: goto label_4504f8;
        case 0x4504fcu: goto label_4504fc;
        case 0x450500u: goto label_450500;
        case 0x450504u: goto label_450504;
        case 0x450508u: goto label_450508;
        case 0x45050cu: goto label_45050c;
        case 0x450510u: goto label_450510;
        case 0x450514u: goto label_450514;
        case 0x450518u: goto label_450518;
        case 0x45051cu: goto label_45051c;
        case 0x450520u: goto label_450520;
        case 0x450524u: goto label_450524;
        case 0x450528u: goto label_450528;
        case 0x45052cu: goto label_45052c;
        case 0x450530u: goto label_450530;
        case 0x450534u: goto label_450534;
        case 0x450538u: goto label_450538;
        case 0x45053cu: goto label_45053c;
        case 0x450540u: goto label_450540;
        case 0x450544u: goto label_450544;
        case 0x450548u: goto label_450548;
        case 0x45054cu: goto label_45054c;
        case 0x450550u: goto label_450550;
        case 0x450554u: goto label_450554;
        case 0x450558u: goto label_450558;
        case 0x45055cu: goto label_45055c;
        case 0x450560u: goto label_450560;
        case 0x450564u: goto label_450564;
        case 0x450568u: goto label_450568;
        case 0x45056cu: goto label_45056c;
        case 0x450570u: goto label_450570;
        case 0x450574u: goto label_450574;
        case 0x450578u: goto label_450578;
        case 0x45057cu: goto label_45057c;
        case 0x450580u: goto label_450580;
        case 0x450584u: goto label_450584;
        case 0x450588u: goto label_450588;
        case 0x45058cu: goto label_45058c;
        case 0x450590u: goto label_450590;
        case 0x450594u: goto label_450594;
        case 0x450598u: goto label_450598;
        case 0x45059cu: goto label_45059c;
        case 0x4505a0u: goto label_4505a0;
        case 0x4505a4u: goto label_4505a4;
        case 0x4505a8u: goto label_4505a8;
        case 0x4505acu: goto label_4505ac;
        case 0x4505b0u: goto label_4505b0;
        case 0x4505b4u: goto label_4505b4;
        case 0x4505b8u: goto label_4505b8;
        case 0x4505bcu: goto label_4505bc;
        case 0x4505c0u: goto label_4505c0;
        case 0x4505c4u: goto label_4505c4;
        case 0x4505c8u: goto label_4505c8;
        case 0x4505ccu: goto label_4505cc;
        case 0x4505d0u: goto label_4505d0;
        case 0x4505d4u: goto label_4505d4;
        case 0x4505d8u: goto label_4505d8;
        case 0x4505dcu: goto label_4505dc;
        case 0x4505e0u: goto label_4505e0;
        case 0x4505e4u: goto label_4505e4;
        case 0x4505e8u: goto label_4505e8;
        case 0x4505ecu: goto label_4505ec;
        case 0x4505f0u: goto label_4505f0;
        case 0x4505f4u: goto label_4505f4;
        case 0x4505f8u: goto label_4505f8;
        case 0x4505fcu: goto label_4505fc;
        case 0x450600u: goto label_450600;
        case 0x450604u: goto label_450604;
        case 0x450608u: goto label_450608;
        case 0x45060cu: goto label_45060c;
        case 0x450610u: goto label_450610;
        case 0x450614u: goto label_450614;
        case 0x450618u: goto label_450618;
        case 0x45061cu: goto label_45061c;
        case 0x450620u: goto label_450620;
        case 0x450624u: goto label_450624;
        case 0x450628u: goto label_450628;
        case 0x45062cu: goto label_45062c;
        case 0x450630u: goto label_450630;
        case 0x450634u: goto label_450634;
        case 0x450638u: goto label_450638;
        case 0x45063cu: goto label_45063c;
        case 0x450640u: goto label_450640;
        case 0x450644u: goto label_450644;
        case 0x450648u: goto label_450648;
        case 0x45064cu: goto label_45064c;
        case 0x450650u: goto label_450650;
        case 0x450654u: goto label_450654;
        case 0x450658u: goto label_450658;
        case 0x45065cu: goto label_45065c;
        case 0x450660u: goto label_450660;
        case 0x450664u: goto label_450664;
        case 0x450668u: goto label_450668;
        case 0x45066cu: goto label_45066c;
        case 0x450670u: goto label_450670;
        case 0x450674u: goto label_450674;
        case 0x450678u: goto label_450678;
        case 0x45067cu: goto label_45067c;
        case 0x450680u: goto label_450680;
        case 0x450684u: goto label_450684;
        case 0x450688u: goto label_450688;
        case 0x45068cu: goto label_45068c;
        case 0x450690u: goto label_450690;
        case 0x450694u: goto label_450694;
        case 0x450698u: goto label_450698;
        case 0x45069cu: goto label_45069c;
        case 0x4506a0u: goto label_4506a0;
        case 0x4506a4u: goto label_4506a4;
        case 0x4506a8u: goto label_4506a8;
        case 0x4506acu: goto label_4506ac;
        case 0x4506b0u: goto label_4506b0;
        case 0x4506b4u: goto label_4506b4;
        case 0x4506b8u: goto label_4506b8;
        case 0x4506bcu: goto label_4506bc;
        case 0x4506c0u: goto label_4506c0;
        case 0x4506c4u: goto label_4506c4;
        case 0x4506c8u: goto label_4506c8;
        case 0x4506ccu: goto label_4506cc;
        case 0x4506d0u: goto label_4506d0;
        case 0x4506d4u: goto label_4506d4;
        case 0x4506d8u: goto label_4506d8;
        case 0x4506dcu: goto label_4506dc;
        case 0x4506e0u: goto label_4506e0;
        case 0x4506e4u: goto label_4506e4;
        case 0x4506e8u: goto label_4506e8;
        case 0x4506ecu: goto label_4506ec;
        case 0x4506f0u: goto label_4506f0;
        case 0x4506f4u: goto label_4506f4;
        case 0x4506f8u: goto label_4506f8;
        case 0x4506fcu: goto label_4506fc;
        case 0x450700u: goto label_450700;
        case 0x450704u: goto label_450704;
        case 0x450708u: goto label_450708;
        case 0x45070cu: goto label_45070c;
        case 0x450710u: goto label_450710;
        case 0x450714u: goto label_450714;
        case 0x450718u: goto label_450718;
        case 0x45071cu: goto label_45071c;
        case 0x450720u: goto label_450720;
        case 0x450724u: goto label_450724;
        case 0x450728u: goto label_450728;
        case 0x45072cu: goto label_45072c;
        default: break;
    }

    ctx->pc = 0x4500e0u;

label_4500e0:
    // 0x4500e0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x4500e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_4500e4:
    // 0x4500e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4500e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4500e8:
    // 0x4500e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4500e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4500ec:
    // 0x4500ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4500ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4500f0:
    // 0x4500f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4500f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4500f4:
    // 0x4500f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4500f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4500f8:
    // 0x4500f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4500f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4500fc:
    // 0x4500fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4500fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_450100:
    // 0x450100: 0x8c900020  lw          $s0, 0x20($a0)
    ctx->pc = 0x450100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_450104:
    // 0x450104: 0x8e030a6c  lw          $v1, 0xA6C($s0)
    ctx->pc = 0x450104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2668)));
label_450108:
    // 0x450108: 0x10600150  beqz        $v1, . + 4 + (0x150 << 2)
label_45010c:
    if (ctx->pc == 0x45010Cu) {
        ctx->pc = 0x45010Cu;
            // 0x45010c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450110u;
        goto label_450110;
    }
    ctx->pc = 0x450108u;
    {
        const bool branch_taken_0x450108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45010Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450108u;
            // 0x45010c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450108) {
            ctx->pc = 0x45064Cu;
            goto label_45064c;
        }
    }
    ctx->pc = 0x450110u;
label_450110:
    // 0x450110: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x450110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_450114:
    // 0x450114: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x450114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_450118:
    // 0x450118: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x450118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_45011c:
    // 0x45011c: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x45011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_450120:
    // 0x450120: 0x8e510024  lw          $s1, 0x24($s2)
    ctx->pc = 0x450120u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_450124:
    // 0x450124: 0xc088b74  jal         func_222DD0
label_450128:
    if (ctx->pc == 0x450128u) {
        ctx->pc = 0x450128u;
            // 0x450128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45012Cu;
        goto label_45012c;
    }
    ctx->pc = 0x450124u;
    SET_GPR_U32(ctx, 31, 0x45012Cu);
    ctx->pc = 0x450128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450124u;
            // 0x450128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45012Cu; }
        if (ctx->pc != 0x45012Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45012Cu; }
        if (ctx->pc != 0x45012Cu) { return; }
    }
    ctx->pc = 0x45012Cu;
label_45012c:
    // 0x45012c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x45012cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_450130:
    // 0x450130: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x450130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_450134:
    // 0x450134: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x450134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_450138:
    // 0x450138: 0x320f809  jalr        $t9
label_45013c:
    if (ctx->pc == 0x45013Cu) {
        ctx->pc = 0x45013Cu;
            // 0x45013c: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x450140u;
        goto label_450140;
    }
    ctx->pc = 0x450138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x450140u);
        ctx->pc = 0x45013Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450138u;
            // 0x45013c: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x450140u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x450140u; }
            if (ctx->pc != 0x450140u) { return; }
        }
        }
    }
    ctx->pc = 0x450140u;
label_450140:
    // 0x450140: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x450140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_450144:
    // 0x450144: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x450144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_450148:
    // 0x450148: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x450148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_45014c:
    // 0x45014c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x45014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_450150:
    // 0x450150: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x450150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_450154:
    // 0x450154: 0xc089688  jal         func_225A20
label_450158:
    if (ctx->pc == 0x450158u) {
        ctx->pc = 0x450158u;
            // 0x450158: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x45015Cu;
        goto label_45015c;
    }
    ctx->pc = 0x450154u;
    SET_GPR_U32(ctx, 31, 0x45015Cu);
    ctx->pc = 0x450158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450154u;
            // 0x450158: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45015Cu; }
        if (ctx->pc != 0x45015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45015Cu; }
        if (ctx->pc != 0x45015Cu) { return; }
    }
    ctx->pc = 0x45015Cu;
label_45015c:
    // 0x45015c: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x45015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_450160:
    // 0x450160: 0xc7ad00c4  lwc1        $f13, 0xC4($sp)
    ctx->pc = 0x450160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_450164:
    // 0x450164: 0xc7ae00c8  lwc1        $f14, 0xC8($sp)
    ctx->pc = 0x450164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_450168:
    // 0x450168: 0xc04cbd8  jal         func_132F60
label_45016c:
    if (ctx->pc == 0x45016Cu) {
        ctx->pc = 0x45016Cu;
            // 0x45016c: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x450170u;
        goto label_450170;
    }
    ctx->pc = 0x450168u;
    SET_GPR_U32(ctx, 31, 0x450170u);
    ctx->pc = 0x45016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450168u;
            // 0x45016c: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450170u; }
        if (ctx->pc != 0x450170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450170u; }
        if (ctx->pc != 0x450170u) { return; }
    }
    ctx->pc = 0x450170u;
label_450170:
    // 0x450170: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x450170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_450174:
    // 0x450174: 0x26030a50  addiu       $v1, $s0, 0xA50
    ctx->pc = 0x450174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_450178:
    // 0x450178: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x450178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_45017c:
    // 0x45017c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45017cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_450180:
    // 0x450180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x450180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_450184:
    // 0x450184: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x450184u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_450188:
    // 0x450188: 0xc04f278  jal         func_13C9E0
label_45018c:
    if (ctx->pc == 0x45018Cu) {
        ctx->pc = 0x45018Cu;
            // 0x45018c: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x450190u;
        goto label_450190;
    }
    ctx->pc = 0x450188u;
    SET_GPR_U32(ctx, 31, 0x450190u);
    ctx->pc = 0x45018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450188u;
            // 0x45018c: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450190u; }
        if (ctx->pc != 0x450190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450190u; }
        if (ctx->pc != 0x450190u) { return; }
    }
    ctx->pc = 0x450190u;
label_450190:
    // 0x450190: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x450190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_450194:
    // 0x450194: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x450194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_450198:
    // 0x450198: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x450198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_45019c:
    // 0x45019c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x45019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4501a0:
    // 0x4501a0: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x4501a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4501a4:
    // 0x4501a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4501a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4501a8:
    // 0x4501a8: 0x0  nop
    ctx->pc = 0x4501a8u;
    // NOP
label_4501ac:
    // 0x4501ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4501acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4501b0:
    // 0x4501b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4501b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4501b4:
    // 0x4501b4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4501b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4501b8:
    // 0x4501b8: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x4501b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4501bc:
    // 0x4501bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4501bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_4501c0:
    // 0x4501c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4501c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4501c4:
    // 0x4501c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4501c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4501c8:
    // 0x4501c8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x4501c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_4501cc:
    // 0x4501cc: 0xc04ce30  jal         func_1338C0
label_4501d0:
    if (ctx->pc == 0x4501D0u) {
        ctx->pc = 0x4501D0u;
            // 0x4501d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4501D4u;
        goto label_4501d4;
    }
    ctx->pc = 0x4501CCu;
    SET_GPR_U32(ctx, 31, 0x4501D4u);
    ctx->pc = 0x4501D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4501CCu;
            // 0x4501d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4501D4u; }
        if (ctx->pc != 0x4501D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4501D4u; }
        if (ctx->pc != 0x4501D4u) { return; }
    }
    ctx->pc = 0x4501D4u;
label_4501d4:
    // 0x4501d4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4501d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4501d8:
    // 0x4501d8: 0xc04ce80  jal         func_133A00
label_4501dc:
    if (ctx->pc == 0x4501DCu) {
        ctx->pc = 0x4501DCu;
            // 0x4501dc: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x4501E0u;
        goto label_4501e0;
    }
    ctx->pc = 0x4501D8u;
    SET_GPR_U32(ctx, 31, 0x4501E0u);
    ctx->pc = 0x4501DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4501D8u;
            // 0x4501dc: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4501E0u; }
        if (ctx->pc != 0x4501E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4501E0u; }
        if (ctx->pc != 0x4501E0u) { return; }
    }
    ctx->pc = 0x4501E0u;
label_4501e0:
    // 0x4501e0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4501e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4501e4:
    // 0x4501e4: 0xc04ccf4  jal         func_1333D0
label_4501e8:
    if (ctx->pc == 0x4501E8u) {
        ctx->pc = 0x4501E8u;
            // 0x4501e8: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x4501ECu;
        goto label_4501ec;
    }
    ctx->pc = 0x4501E4u;
    SET_GPR_U32(ctx, 31, 0x4501ECu);
    ctx->pc = 0x4501E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4501E4u;
            // 0x4501e8: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4501ECu; }
        if (ctx->pc != 0x4501ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4501ECu; }
        if (ctx->pc != 0x4501ECu) { return; }
    }
    ctx->pc = 0x4501ECu;
label_4501ec:
    // 0x4501ec: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4501ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4501f0:
    // 0x4501f0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x4501f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4501f4:
    // 0x4501f4: 0xc04cca0  jal         func_133280
label_4501f8:
    if (ctx->pc == 0x4501F8u) {
        ctx->pc = 0x4501F8u;
            // 0x4501f8: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x4501FCu;
        goto label_4501fc;
    }
    ctx->pc = 0x4501F4u;
    SET_GPR_U32(ctx, 31, 0x4501FCu);
    ctx->pc = 0x4501F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4501F4u;
            // 0x4501f8: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4501FCu; }
        if (ctx->pc != 0x4501FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4501FCu; }
        if (ctx->pc != 0x4501FCu) { return; }
    }
    ctx->pc = 0x4501FCu;
label_4501fc:
    // 0x4501fc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4501fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_450200:
    // 0x450200: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x450200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_450204:
    // 0x450204: 0xc04cc08  jal         func_133020
label_450208:
    if (ctx->pc == 0x450208u) {
        ctx->pc = 0x450208u;
            // 0x450208: 0x24a5d9f0  addiu       $a1, $a1, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957552));
        ctx->pc = 0x45020Cu;
        goto label_45020c;
    }
    ctx->pc = 0x450204u;
    SET_GPR_U32(ctx, 31, 0x45020Cu);
    ctx->pc = 0x450208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450204u;
            // 0x450208: 0x24a5d9f0  addiu       $a1, $a1, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45020Cu; }
        if (ctx->pc != 0x45020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45020Cu; }
        if (ctx->pc != 0x45020Cu) { return; }
    }
    ctx->pc = 0x45020Cu;
label_45020c:
    // 0x45020c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x45020cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_450210:
    // 0x450210: 0xc04cc14  jal         func_133050
label_450214:
    if (ctx->pc == 0x450214u) {
        ctx->pc = 0x450214u;
            // 0x450214: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x450218u;
        goto label_450218;
    }
    ctx->pc = 0x450210u;
    SET_GPR_U32(ctx, 31, 0x450218u);
    ctx->pc = 0x450214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450210u;
            // 0x450214: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450218u; }
        if (ctx->pc != 0x450218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450218u; }
        if (ctx->pc != 0x450218u) { return; }
    }
    ctx->pc = 0x450218u;
label_450218:
    // 0x450218: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x450218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_45021c:
    // 0x45021c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x45021cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_450220:
    // 0x450220: 0xc04cc14  jal         func_133050
label_450224:
    if (ctx->pc == 0x450224u) {
        ctx->pc = 0x450224u;
            // 0x450224: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
        ctx->pc = 0x450228u;
        goto label_450228;
    }
    ctx->pc = 0x450220u;
    SET_GPR_U32(ctx, 31, 0x450228u);
    ctx->pc = 0x450224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450220u;
            // 0x450224: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450228u; }
        if (ctx->pc != 0x450228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450228u; }
        if (ctx->pc != 0x450228u) { return; }
    }
    ctx->pc = 0x450228u;
label_450228:
    // 0x450228: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x450228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_45022c:
    // 0x45022c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_450230:
    // 0x450230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x450230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_450234:
    // 0x450234: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x450234u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
label_450238:
    // 0x450238: 0x0  nop
    ctx->pc = 0x450238u;
    // NOP
label_45023c:
    // 0x45023c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45023cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450240:
    // 0x450240: 0x0  nop
    ctx->pc = 0x450240u;
    // NOP
label_450244:
    // 0x450244: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x450244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450248:
    // 0x450248: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_45024c:
    if (ctx->pc == 0x45024Cu) {
        ctx->pc = 0x45024Cu;
            // 0x45024c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x450250u;
        goto label_450250;
    }
    ctx->pc = 0x450248u;
    {
        const bool branch_taken_0x450248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x450248) {
            ctx->pc = 0x45024Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450248u;
            // 0x45024c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450258u;
            goto label_450258;
        }
    }
    ctx->pc = 0x450250u;
label_450250:
    // 0x450250: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x450250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450254:
    // 0x450254: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x450254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_450258:
    // 0x450258: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x450258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_45025c:
    // 0x45025c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45025cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450260:
    // 0x450260: 0x0  nop
    ctx->pc = 0x450260u;
    // NOP
label_450264:
    // 0x450264: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x450264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450268:
    // 0x450268: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_45026c:
    if (ctx->pc == 0x45026Cu) {
        ctx->pc = 0x45026Cu;
            // 0x45026c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x450270u;
        goto label_450270;
    }
    ctx->pc = 0x450268u;
    {
        const bool branch_taken_0x450268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x45026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450268u;
            // 0x45026c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450268) {
            ctx->pc = 0x450274u;
            goto label_450274;
        }
    }
    ctx->pc = 0x450270u;
label_450270:
    // 0x450270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x450270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450274:
    // 0x450274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x450274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_450278:
    // 0x450278: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x450278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_45027c:
    // 0x45027c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x45027cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_450280:
    // 0x450280: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x450280u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450284:
    // 0x450284: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x450284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_450288:
    // 0x450288: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x450288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_45028c:
    // 0x45028c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x45028cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_450290:
    // 0x450290: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x450290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450294:
    // 0x450294: 0x0  nop
    ctx->pc = 0x450294u;
    // NOP
label_450298:
    // 0x450298: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x450298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_45029c:
    // 0x45029c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x45029cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4502a0:
    // 0x4502a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4502a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4502a4:
    // 0x4502a4: 0x0  nop
    ctx->pc = 0x4502a4u;
    // NOP
label_4502a8:
    // 0x4502a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4502a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4502ac:
    // 0x4502ac: 0xc0477fe  jal         func_11DFF8
label_4502b0:
    if (ctx->pc == 0x4502B0u) {
        ctx->pc = 0x4502B0u;
            // 0x4502b0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4502B4u;
        goto label_4502b4;
    }
    ctx->pc = 0x4502ACu;
    SET_GPR_U32(ctx, 31, 0x4502B4u);
    ctx->pc = 0x4502B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4502ACu;
            // 0x4502b0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4502B4u; }
        if (ctx->pc != 0x4502B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4502B4u; }
        if (ctx->pc != 0x4502B4u) { return; }
    }
    ctx->pc = 0x4502B4u;
label_4502b4:
    // 0x4502b4: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x4502b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
label_4502b8:
    // 0x4502b8: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x4502b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_4502bc:
    // 0x4502bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4502bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4502c0:
    // 0x4502c0: 0x0  nop
    ctx->pc = 0x4502c0u;
    // NOP
label_4502c4:
    // 0x4502c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4502c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4502c8:
    // 0x4502c8: 0x45010053  bc1t        . + 4 + (0x53 << 2)
label_4502cc:
    if (ctx->pc == 0x4502CCu) {
        ctx->pc = 0x4502D0u;
        goto label_4502d0;
    }
    ctx->pc = 0x4502C8u;
    {
        const bool branch_taken_0x4502c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4502c8) {
            ctx->pc = 0x450418u;
            goto label_450418;
        }
    }
    ctx->pc = 0x4502D0u;
label_4502d0:
    // 0x4502d0: 0x3c023c8c  lui         $v0, 0x3C8C
    ctx->pc = 0x4502d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15500 << 16));
label_4502d4:
    // 0x4502d4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4502d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4502d8:
    // 0x4502d8: 0x34421e2a  ori         $v0, $v0, 0x1E2A
    ctx->pc = 0x4502d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7722);
label_4502dc:
    // 0x4502dc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4502dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4502e0:
    // 0x4502e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4502e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4502e4:
    // 0x4502e4: 0x24a5d9f0  addiu       $a1, $a1, -0x2610
    ctx->pc = 0x4502e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957552));
label_4502e8:
    // 0x4502e8: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x4502e8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4502ec:
    // 0x4502ec: 0xc04cbf0  jal         func_132FC0
label_4502f0:
    if (ctx->pc == 0x4502F0u) {
        ctx->pc = 0x4502F0u;
            // 0x4502f0: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x4502F4u;
        goto label_4502f4;
    }
    ctx->pc = 0x4502ECu;
    SET_GPR_U32(ctx, 31, 0x4502F4u);
    ctx->pc = 0x4502F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4502ECu;
            // 0x4502f0: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4502F4u; }
        if (ctx->pc != 0x4502F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4502F4u; }
        if (ctx->pc != 0x4502F4u) { return; }
    }
    ctx->pc = 0x4502F4u;
label_4502f4:
    // 0x4502f4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4502f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4502f8:
    // 0x4502f8: 0xc04cc44  jal         func_133110
label_4502fc:
    if (ctx->pc == 0x4502FCu) {
        ctx->pc = 0x4502FCu;
            // 0x4502fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450300u;
        goto label_450300;
    }
    ctx->pc = 0x4502F8u;
    SET_GPR_U32(ctx, 31, 0x450300u);
    ctx->pc = 0x4502FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4502F8u;
            // 0x4502fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450300u; }
        if (ctx->pc != 0x450300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450300u; }
        if (ctx->pc != 0x450300u) { return; }
    }
    ctx->pc = 0x450300u;
label_450300:
    // 0x450300: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x450300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_450304:
    // 0x450304: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x450304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_450308:
    // 0x450308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x450308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45030c:
    // 0x45030c: 0x0  nop
    ctx->pc = 0x45030cu;
    // NOP
label_450310:
    // 0x450310: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x450310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_450314:
    // 0x450314: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x450314u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_450318:
    // 0x450318: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x450318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_45031c:
    // 0x45031c: 0xc7ad0144  lwc1        $f13, 0x144($sp)
    ctx->pc = 0x45031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_450320:
    // 0x450320: 0xc7ae0148  lwc1        $f14, 0x148($sp)
    ctx->pc = 0x450320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_450324:
    // 0x450324: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x450324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_450328:
    // 0x450328: 0xc04f3bc  jal         func_13CEF0
label_45032c:
    if (ctx->pc == 0x45032Cu) {
        ctx->pc = 0x45032Cu;
            // 0x45032c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x450330u;
        goto label_450330;
    }
    ctx->pc = 0x450328u;
    SET_GPR_U32(ctx, 31, 0x450330u);
    ctx->pc = 0x45032Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450328u;
            // 0x45032c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CEF0u;
    if (runtime->hasFunction(0x13CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450330u; }
        if (ctx->pc != 0x450330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CEF0_0x13cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450330u; }
        if (ctx->pc != 0x450330u) { return; }
    }
    ctx->pc = 0x450330u;
label_450330:
    // 0x450330: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x450330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_450334:
    // 0x450334: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x450334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_450338:
    // 0x450338: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x450338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_45033c:
    // 0x45033c: 0xc04cca0  jal         func_133280
label_450340:
    if (ctx->pc == 0x450340u) {
        ctx->pc = 0x450340u;
            // 0x450340: 0x24c6d9f0  addiu       $a2, $a2, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957552));
        ctx->pc = 0x450344u;
        goto label_450344;
    }
    ctx->pc = 0x45033Cu;
    SET_GPR_U32(ctx, 31, 0x450344u);
    ctx->pc = 0x450340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45033Cu;
            // 0x450340: 0x24c6d9f0  addiu       $a2, $a2, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450344u; }
        if (ctx->pc != 0x450344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450344u; }
        if (ctx->pc != 0x450344u) { return; }
    }
    ctx->pc = 0x450344u;
label_450344:
    // 0x450344: 0xc04cc14  jal         func_133050
label_450348:
    if (ctx->pc == 0x450348u) {
        ctx->pc = 0x450348u;
            // 0x450348: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x45034Cu;
        goto label_45034c;
    }
    ctx->pc = 0x450344u;
    SET_GPR_U32(ctx, 31, 0x45034Cu);
    ctx->pc = 0x450348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450344u;
            // 0x450348: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45034Cu; }
        if (ctx->pc != 0x45034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45034Cu; }
        if (ctx->pc != 0x45034Cu) { return; }
    }
    ctx->pc = 0x45034Cu;
label_45034c:
    // 0x45034c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x45034cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_450350:
    // 0x450350: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x450350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_450354:
    // 0x450354: 0xc04cc70  jal         func_1331C0
label_450358:
    if (ctx->pc == 0x450358u) {
        ctx->pc = 0x450358u;
            // 0x450358: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45035Cu;
        goto label_45035c;
    }
    ctx->pc = 0x450354u;
    SET_GPR_U32(ctx, 31, 0x45035Cu);
    ctx->pc = 0x450358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450354u;
            // 0x450358: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45035Cu; }
        if (ctx->pc != 0x45035Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45035Cu; }
        if (ctx->pc != 0x45035Cu) { return; }
    }
    ctx->pc = 0x45035Cu;
label_45035c:
    // 0x45035c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x45035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_450360:
    // 0x450360: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x450360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_450364:
    // 0x450364: 0xc04cca0  jal         func_133280
label_450368:
    if (ctx->pc == 0x450368u) {
        ctx->pc = 0x450368u;
            // 0x450368: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45036Cu;
        goto label_45036c;
    }
    ctx->pc = 0x450364u;
    SET_GPR_U32(ctx, 31, 0x45036Cu);
    ctx->pc = 0x450368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450364u;
            // 0x450368: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45036Cu; }
        if (ctx->pc != 0x45036Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45036Cu; }
        if (ctx->pc != 0x45036Cu) { return; }
    }
    ctx->pc = 0x45036Cu;
label_45036c:
    // 0x45036c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x45036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_450370:
    // 0x450370: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x450370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_450374:
    // 0x450374: 0xc04cc90  jal         func_133240
label_450378:
    if (ctx->pc == 0x450378u) {
        ctx->pc = 0x450378u;
            // 0x450378: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x45037Cu;
        goto label_45037c;
    }
    ctx->pc = 0x450374u;
    SET_GPR_U32(ctx, 31, 0x45037Cu);
    ctx->pc = 0x450378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450374u;
            // 0x450378: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45037Cu; }
        if (ctx->pc != 0x45037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45037Cu; }
        if (ctx->pc != 0x45037Cu) { return; }
    }
    ctx->pc = 0x45037Cu;
label_45037c:
    // 0x45037c: 0x8e510024  lw          $s1, 0x24($s2)
    ctx->pc = 0x45037cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_450380:
    // 0x450380: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x450380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_450384:
    // 0x450384: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x450384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_450388:
    // 0x450388: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x450388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45038c:
    // 0x45038c: 0x8c53e3e0  lw          $s3, -0x1C20($v0)
    ctx->pc = 0x45038cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_450390:
    // 0x450390: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x450390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_450394:
    // 0x450394: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x450394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_450398:
    // 0x450398: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x450398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45039c:
    // 0x45039c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x45039cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4503a0:
    // 0x4503a0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x4503a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4503a4:
    // 0x4503a4: 0xc6740020  lwc1        $f20, 0x20($s3)
    ctx->pc = 0x4503a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4503a8:
    // 0x4503a8: 0xc089638  jal         func_2258E0
label_4503ac:
    if (ctx->pc == 0x4503ACu) {
        ctx->pc = 0x4503ACu;
            // 0x4503ac: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x4503B0u;
        goto label_4503b0;
    }
    ctx->pc = 0x4503A8u;
    SET_GPR_U32(ctx, 31, 0x4503B0u);
    ctx->pc = 0x4503ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4503A8u;
            // 0x4503ac: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4503B0u; }
        if (ctx->pc != 0x4503B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4503B0u; }
        if (ctx->pc != 0x4503B0u) { return; }
    }
    ctx->pc = 0x4503B0u;
label_4503b0:
    // 0x4503b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4503b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4503b4:
    // 0x4503b4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4503b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4503b8:
    // 0x4503b8: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x4503b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4503bc:
    // 0x4503bc: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x4503bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4503c0:
    // 0x4503c0: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x4503c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4503c4:
    // 0x4503c4: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x4503c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4503c8:
    // 0x4503c8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x4503c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_4503cc:
    // 0x4503cc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x4503ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4503d0:
    // 0x4503d0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x4503d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4503d4:
    // 0x4503d4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x4503d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_4503d8:
    // 0x4503d8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4503d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_4503dc:
    // 0x4503dc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4503dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4503e0:
    // 0x4503e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4503e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_4503e4:
    // 0x4503e4: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x4503e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4503e8:
    // 0x4503e8: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x4503e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4503ec:
    // 0x4503ec: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x4503ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4503f0:
    // 0x4503f0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x4503f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_4503f4:
    // 0x4503f4: 0xc6740018  lwc1        $f20, 0x18($s3)
    ctx->pc = 0x4503f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4503f8:
    // 0x4503f8: 0xc088b74  jal         func_222DD0
label_4503fc:
    if (ctx->pc == 0x4503FCu) {
        ctx->pc = 0x4503FCu;
            // 0x4503fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450400u;
        goto label_450400;
    }
    ctx->pc = 0x4503F8u;
    SET_GPR_U32(ctx, 31, 0x450400u);
    ctx->pc = 0x4503FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4503F8u;
            // 0x4503fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450400u; }
        if (ctx->pc != 0x450400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450400u; }
        if (ctx->pc != 0x450400u) { return; }
    }
    ctx->pc = 0x450400u;
label_450400:
    // 0x450400: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x450400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_450404:
    // 0x450404: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x450404u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_450408:
    // 0x450408: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x450408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_45040c:
    // 0x45040c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x45040cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_450410:
    // 0x450410: 0x320f809  jalr        $t9
label_450414:
    if (ctx->pc == 0x450414u) {
        ctx->pc = 0x450414u;
            // 0x450414: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x450418u;
        goto label_450418;
    }
    ctx->pc = 0x450410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x450418u);
        ctx->pc = 0x450414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450410u;
            // 0x450414: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x450418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x450418u; }
            if (ctx->pc != 0x450418u) { return; }
        }
        }
    }
    ctx->pc = 0x450418u;
label_450418:
    // 0x450418: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x450418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_45041c:
    // 0x45041c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x45041cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_450420:
    // 0x450420: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x450420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_450424:
    // 0x450424: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x450424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_450428:
    // 0x450428: 0xc04cc90  jal         func_133240
label_45042c:
    if (ctx->pc == 0x45042Cu) {
        ctx->pc = 0x45042Cu;
            // 0x45042c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x450430u;
        goto label_450430;
    }
    ctx->pc = 0x450428u;
    SET_GPR_U32(ctx, 31, 0x450430u);
    ctx->pc = 0x45042Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450428u;
            // 0x45042c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450430u; }
        if (ctx->pc != 0x450430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450430u; }
        if (ctx->pc != 0x450430u) { return; }
    }
    ctx->pc = 0x450430u;
label_450430:
    // 0x450430: 0xc04cc14  jal         func_133050
label_450434:
    if (ctx->pc == 0x450434u) {
        ctx->pc = 0x450434u;
            // 0x450434: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x450438u;
        goto label_450438;
    }
    ctx->pc = 0x450430u;
    SET_GPR_U32(ctx, 31, 0x450438u);
    ctx->pc = 0x450434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450430u;
            // 0x450434: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450438u; }
        if (ctx->pc != 0x450438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450438u; }
        if (ctx->pc != 0x450438u) { return; }
    }
    ctx->pc = 0x450438u;
label_450438:
    // 0x450438: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x450438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_45043c:
    // 0x45043c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45043cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450440:
    // 0x450440: 0x0  nop
    ctx->pc = 0x450440u;
    // NOP
label_450444:
    // 0x450444: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x450444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450448:
    // 0x450448: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_45044c:
    if (ctx->pc == 0x45044Cu) {
        ctx->pc = 0x45044Cu;
            // 0x45044c: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->pc = 0x450450u;
        goto label_450450;
    }
    ctx->pc = 0x450448u;
    {
        const bool branch_taken_0x450448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x450448) {
            ctx->pc = 0x45044Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450448u;
            // 0x45044c: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450460u;
            goto label_450460;
        }
    }
    ctx->pc = 0x450450u;
label_450450:
    // 0x450450: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x450450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_450454:
    // 0x450454: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x450454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_450458:
    // 0x450458: 0x10000009  b           . + 4 + (0x9 << 2)
label_45045c:
    if (ctx->pc == 0x45045Cu) {
        ctx->pc = 0x45045Cu;
            // 0x45045c: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x450460u;
        goto label_450460;
    }
    ctx->pc = 0x450458u;
    {
        const bool branch_taken_0x450458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45045Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450458u;
            // 0x45045c: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x450458) {
            ctx->pc = 0x450480u;
            goto label_450480;
        }
    }
    ctx->pc = 0x450460u;
label_450460:
    // 0x450460: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x450460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450464:
    // 0x450464: 0x0  nop
    ctx->pc = 0x450464u;
    // NOP
label_450468:
    // 0x450468: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x450468u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45046c:
    // 0x45046c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_450470:
    if (ctx->pc == 0x450470u) {
        ctx->pc = 0x450474u;
        goto label_450474;
    }
    ctx->pc = 0x45046Cu;
    {
        const bool branch_taken_0x45046c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45046c) {
            ctx->pc = 0x450480u;
            goto label_450480;
        }
    }
    ctx->pc = 0x450474u;
label_450474:
    // 0x450474: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x450474u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_450478:
    // 0x450478: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x450478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45047c:
    // 0x45047c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x45047cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_450480:
    // 0x450480: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x450480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450484:
    // 0x450484: 0x0  nop
    ctx->pc = 0x450484u;
    // NOP
label_450488:
    // 0x450488: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x450488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45048c:
    // 0x45048c: 0x45030040  bc1tl       . + 4 + (0x40 << 2)
label_450490:
    if (ctx->pc == 0x450490u) {
        ctx->pc = 0x450490u;
            // 0x450490: 0xc6020308  lwc1        $f2, 0x308($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x450494u;
        goto label_450494;
    }
    ctx->pc = 0x45048Cu;
    {
        const bool branch_taken_0x45048c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45048c) {
            ctx->pc = 0x450490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45048Cu;
            // 0x450490: 0xc6020308  lwc1        $f2, 0x308($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x450590u;
            goto label_450590;
        }
    }
    ctx->pc = 0x450494u;
label_450494:
    // 0x450494: 0x3c023e9a  lui         $v0, 0x3E9A
    ctx->pc = 0x450494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16026 << 16));
label_450498:
    // 0x450498: 0x344212f7  ori         $v0, $v0, 0x12F7
    ctx->pc = 0x450498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4855);
label_45049c:
    // 0x45049c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45049cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4504a0:
    // 0x4504a0: 0x0  nop
    ctx->pc = 0x4504a0u;
    // NOP
label_4504a4:
    // 0x4504a4: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x4504a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4504a8:
    // 0x4504a8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_4504ac:
    if (ctx->pc == 0x4504ACu) {
        ctx->pc = 0x4504B0u;
        goto label_4504b0;
    }
    ctx->pc = 0x4504A8u;
    {
        const bool branch_taken_0x4504a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4504a8) {
            ctx->pc = 0x4504D4u;
            goto label_4504d4;
        }
    }
    ctx->pc = 0x4504B0u;
label_4504b0:
    // 0x4504b0: 0x0  nop
    ctx->pc = 0x4504b0u;
    // NOP
label_4504b4:
    // 0x4504b4: 0x0  nop
    ctx->pc = 0x4504b4u;
    // NOP
label_4504b8:
    // 0x4504b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4504b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4504bc:
    // 0x4504bc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4504bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4504c0:
    // 0x4504c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4504c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4504c4:
    // 0x4504c4: 0xc04cc70  jal         func_1331C0
label_4504c8:
    if (ctx->pc == 0x4504C8u) {
        ctx->pc = 0x4504C8u;
            // 0x4504c8: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4504CCu;
        goto label_4504cc;
    }
    ctx->pc = 0x4504C4u;
    SET_GPR_U32(ctx, 31, 0x4504CCu);
    ctx->pc = 0x4504C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4504C4u;
            // 0x4504c8: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4504CCu; }
        if (ctx->pc != 0x4504CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4504CCu; }
        if (ctx->pc != 0x4504CCu) { return; }
    }
    ctx->pc = 0x4504CCu;
label_4504cc:
    // 0x4504cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_4504d0:
    if (ctx->pc == 0x4504D0u) {
        ctx->pc = 0x4504D0u;
            // 0x4504d0: 0x8e510024  lw          $s1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->pc = 0x4504D4u;
        goto label_4504d4;
    }
    ctx->pc = 0x4504CCu;
    {
        const bool branch_taken_0x4504cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4504D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4504CCu;
            // 0x4504d0: 0x8e510024  lw          $s1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4504cc) {
            ctx->pc = 0x4504F4u;
            goto label_4504f4;
        }
    }
    ctx->pc = 0x4504D4u;
label_4504d4:
    // 0x4504d4: 0x0  nop
    ctx->pc = 0x4504d4u;
    // NOP
label_4504d8:
    // 0x4504d8: 0x0  nop
    ctx->pc = 0x4504d8u;
    // NOP
label_4504dc:
    // 0x4504dc: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x4504dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
label_4504e0:
    // 0x4504e0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4504e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4504e4:
    // 0x4504e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4504e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4504e8:
    // 0x4504e8: 0xc04cc70  jal         func_1331C0
label_4504ec:
    if (ctx->pc == 0x4504ECu) {
        ctx->pc = 0x4504ECu;
            // 0x4504ec: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4504F0u;
        goto label_4504f0;
    }
    ctx->pc = 0x4504E8u;
    SET_GPR_U32(ctx, 31, 0x4504F0u);
    ctx->pc = 0x4504ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4504E8u;
            // 0x4504ec: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4504F0u; }
        if (ctx->pc != 0x4504F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4504F0u; }
        if (ctx->pc != 0x4504F0u) { return; }
    }
    ctx->pc = 0x4504F0u;
label_4504f0:
    // 0x4504f0: 0x8e510024  lw          $s1, 0x24($s2)
    ctx->pc = 0x4504f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_4504f4:
    // 0x4504f4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x4504f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4504f8:
    // 0x4504f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4504f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4504fc:
    // 0x4504fc: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x4504fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_450500:
    // 0x450500: 0x8c53e3e0  lw          $s3, -0x1C20($v0)
    ctx->pc = 0x450500u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_450504:
    // 0x450504: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x450504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_450508:
    // 0x450508: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x450508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_45050c:
    // 0x45050c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x45050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_450510:
    // 0x450510: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x450510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_450514:
    // 0x450514: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x450514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_450518:
    // 0x450518: 0xc6740020  lwc1        $f20, 0x20($s3)
    ctx->pc = 0x450518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45051c:
    // 0x45051c: 0xc089638  jal         func_2258E0
label_450520:
    if (ctx->pc == 0x450520u) {
        ctx->pc = 0x450520u;
            // 0x450520: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x450524u;
        goto label_450524;
    }
    ctx->pc = 0x45051Cu;
    SET_GPR_U32(ctx, 31, 0x450524u);
    ctx->pc = 0x450520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45051Cu;
            // 0x450520: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450524u; }
        if (ctx->pc != 0x450524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450524u; }
        if (ctx->pc != 0x450524u) { return; }
    }
    ctx->pc = 0x450524u;
label_450524:
    // 0x450524: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x450524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_450528:
    // 0x450528: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x450528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_45052c:
    // 0x45052c: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x45052cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_450530:
    // 0x450530: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x450530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_450534:
    // 0x450534: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x450534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_450538:
    // 0x450538: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x450538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45053c:
    // 0x45053c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x45053cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_450540:
    // 0x450540: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x450540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_450544:
    // 0x450544: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x450544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_450548:
    // 0x450548: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x450548u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_45054c:
    // 0x45054c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x45054cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_450550:
    // 0x450550: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x450550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_450554:
    // 0x450554: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x450554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_450558:
    // 0x450558: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x450558u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_45055c:
    // 0x45055c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x45055cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_450560:
    // 0x450560: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x450560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_450564:
    // 0x450564: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x450564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_450568:
    // 0x450568: 0xc6740018  lwc1        $f20, 0x18($s3)
    ctx->pc = 0x450568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45056c:
    // 0x45056c: 0xc088b74  jal         func_222DD0
label_450570:
    if (ctx->pc == 0x450570u) {
        ctx->pc = 0x450570u;
            // 0x450570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450574u;
        goto label_450574;
    }
    ctx->pc = 0x45056Cu;
    SET_GPR_U32(ctx, 31, 0x450574u);
    ctx->pc = 0x450570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45056Cu;
            // 0x450570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450574u; }
        if (ctx->pc != 0x450574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450574u; }
        if (ctx->pc != 0x450574u) { return; }
    }
    ctx->pc = 0x450574u;
label_450574:
    // 0x450574: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x450574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_450578:
    // 0x450578: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x450578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45057c:
    // 0x45057c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x45057cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_450580:
    // 0x450580: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x450580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_450584:
    // 0x450584: 0x320f809  jalr        $t9
label_450588:
    if (ctx->pc == 0x450588u) {
        ctx->pc = 0x450588u;
            // 0x450588: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x45058Cu;
        goto label_45058c;
    }
    ctx->pc = 0x450584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45058Cu);
        ctx->pc = 0x450588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450584u;
            // 0x450588: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45058Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45058Cu; }
            if (ctx->pc != 0x45058Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45058Cu;
label_45058c:
    // 0x45058c: 0xc6020308  lwc1        $f2, 0x308($s0)
    ctx->pc = 0x45058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_450590:
    // 0x450590: 0x8e510024  lw          $s1, 0x24($s2)
    ctx->pc = 0x450590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_450594:
    // 0x450594: 0xc6010304  lwc1        $f1, 0x304($s0)
    ctx->pc = 0x450594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_450598:
    // 0x450598: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x450598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45059c:
    // 0x45059c: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x45059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4505a0:
    // 0x4505a0: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x4505a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4505a4:
    // 0x4505a4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4505a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4505a8:
    // 0x4505a8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4505a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4505ac:
    // 0x4505ac: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4505acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4505b0:
    // 0x4505b0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x4505b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4505b4:
    // 0x4505b4: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x4505b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4505b8:
    // 0x4505b8: 0xc089638  jal         func_2258E0
label_4505bc:
    if (ctx->pc == 0x4505BCu) {
        ctx->pc = 0x4505BCu;
            // 0x4505bc: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x4505C0u;
        goto label_4505c0;
    }
    ctx->pc = 0x4505B8u;
    SET_GPR_U32(ctx, 31, 0x4505C0u);
    ctx->pc = 0x4505BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4505B8u;
            // 0x4505bc: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4505C0u; }
        if (ctx->pc != 0x4505C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4505C0u; }
        if (ctx->pc != 0x4505C0u) { return; }
    }
    ctx->pc = 0x4505C0u;
label_4505c0:
    // 0x4505c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4505c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4505c4:
    // 0x4505c4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4505c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4505c8:
    // 0x4505c8: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x4505c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4505cc:
    // 0x4505cc: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x4505ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4505d0:
    // 0x4505d0: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x4505d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4505d4:
    // 0x4505d4: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x4505d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4505d8:
    // 0x4505d8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x4505d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_4505dc:
    // 0x4505dc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x4505dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4505e0:
    // 0x4505e0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x4505e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4505e4:
    // 0x4505e4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x4505e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_4505e8:
    // 0x4505e8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4505e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_4505ec:
    // 0x4505ec: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4505ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4505f0:
    // 0x4505f0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4505f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_4505f4:
    // 0x4505f4: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x4505f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4505f8:
    // 0x4505f8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x4505f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4505fc:
    // 0x4505fc: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x4505fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_450600:
    // 0x450600: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x450600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_450604:
    // 0x450604: 0xc6140018  lwc1        $f20, 0x18($s0)
    ctx->pc = 0x450604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_450608:
    // 0x450608: 0xc088b74  jal         func_222DD0
label_45060c:
    if (ctx->pc == 0x45060Cu) {
        ctx->pc = 0x45060Cu;
            // 0x45060c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450610u;
        goto label_450610;
    }
    ctx->pc = 0x450608u;
    SET_GPR_U32(ctx, 31, 0x450610u);
    ctx->pc = 0x45060Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450608u;
            // 0x45060c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450610u; }
        if (ctx->pc != 0x450610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450610u; }
        if (ctx->pc != 0x450610u) { return; }
    }
    ctx->pc = 0x450610u;
label_450610:
    // 0x450610: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x450610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_450614:
    // 0x450614: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x450614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_450618:
    // 0x450618: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x450618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_45061c:
    // 0x45061c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x45061cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_450620:
    // 0x450620: 0x320f809  jalr        $t9
label_450624:
    if (ctx->pc == 0x450624u) {
        ctx->pc = 0x450624u;
            // 0x450624: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x450628u;
        goto label_450628;
    }
    ctx->pc = 0x450620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x450628u);
        ctx->pc = 0x450624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450620u;
            // 0x450624: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x450628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x450628u; }
            if (ctx->pc != 0x450628u) { return; }
        }
        }
    }
    ctx->pc = 0x450628u;
label_450628:
    // 0x450628: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x450628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_45062c:
    // 0x45062c: 0xc4620184  lwc1        $f2, 0x184($v1)
    ctx->pc = 0x45062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_450630:
    // 0x450630: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x450630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_450634:
    // 0x450634: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x450634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_450638:
    // 0x450638: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x450638u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_45063c:
    // 0x45063c: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x45063cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_450640:
    // 0x450640: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x450640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_450644:
    // 0x450644: 0x46000004  c1          0x4
    ctx->pc = 0x450644u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_450648:
    // 0x450648: 0xe4600154  swc1        $f0, 0x154($v1)
    ctx->pc = 0x450648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 340), bits); }
label_45064c:
    // 0x45064c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x45064cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_450650:
    // 0x450650: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x450650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_450654:
    // 0x450654: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x450654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_450658:
    // 0x450658: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x450658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45065c:
    // 0x45065c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x45065cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_450660:
    // 0x450660: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x450660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_450664:
    // 0x450664: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x450664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_450668:
    // 0x450668: 0x3e00008  jr          $ra
label_45066c:
    if (ctx->pc == 0x45066Cu) {
        ctx->pc = 0x45066Cu;
            // 0x45066c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x450670u;
        goto label_450670;
    }
    ctx->pc = 0x450668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45066Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450668u;
            // 0x45066c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450670u;
label_450670:
    // 0x450670: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x450670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_450674:
    // 0x450674: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x450674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_450678:
    // 0x450678: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x450678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_45067c:
    // 0x45067c: 0x808ca64  j           func_232990
label_450680:
    if (ctx->pc == 0x450680u) {
        ctx->pc = 0x450680u;
            // 0x450680: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x450684u;
        goto label_450684;
    }
    ctx->pc = 0x45067Cu;
    ctx->pc = 0x450680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45067Cu;
            // 0x450680: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232990u;
    {
        auto targetFn = runtime->lookupFunction(0x232990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x450684u;
label_450684:
    // 0x450684: 0x0  nop
    ctx->pc = 0x450684u;
    // NOP
label_450688:
    // 0x450688: 0x0  nop
    ctx->pc = 0x450688u;
    // NOP
label_45068c:
    // 0x45068c: 0x0  nop
    ctx->pc = 0x45068cu;
    // NOP
label_450690:
    // 0x450690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x450690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_450694:
    // 0x450694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x450694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_450698:
    // 0x450698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x450698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45069c:
    // 0x45069c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4506a0:
    // 0x4506a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4506a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4506a4:
    // 0x4506a4: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_4506a8:
    if (ctx->pc == 0x4506A8u) {
        ctx->pc = 0x4506A8u;
            // 0x4506a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4506ACu;
        goto label_4506ac;
    }
    ctx->pc = 0x4506A4u;
    {
        const bool branch_taken_0x4506a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4506A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4506A4u;
            // 0x4506a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4506a4) {
            ctx->pc = 0x450714u;
            goto label_450714;
        }
    }
    ctx->pc = 0x4506ACu;
label_4506ac:
    // 0x4506ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4506acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4506b0:
    // 0x4506b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4506b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4506b4:
    // 0x4506b4: 0x2463dd50  addiu       $v1, $v1, -0x22B0
    ctx->pc = 0x4506b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958416));
label_4506b8:
    // 0x4506b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4506b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4506bc:
    // 0x4506bc: 0x8c44e410  lw          $a0, -0x1BF0($v0)
    ctx->pc = 0x4506bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_4506c0:
    // 0x4506c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4506c4:
    if (ctx->pc == 0x4506C4u) {
        ctx->pc = 0x4506C8u;
        goto label_4506c8;
    }
    ctx->pc = 0x4506C0u;
    {
        const bool branch_taken_0x4506c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4506c0) {
            ctx->pc = 0x4506D0u;
            goto label_4506d0;
        }
    }
    ctx->pc = 0x4506C8u;
label_4506c8:
    // 0x4506c8: 0xc0d1670  jal         func_3459C0
label_4506cc:
    if (ctx->pc == 0x4506CCu) {
        ctx->pc = 0x4506D0u;
        goto label_4506d0;
    }
    ctx->pc = 0x4506C8u;
    SET_GPR_U32(ctx, 31, 0x4506D0u);
    ctx->pc = 0x3459C0u;
    if (runtime->hasFunction(0x3459C0u)) {
        auto targetFn = runtime->lookupFunction(0x3459C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4506D0u; }
        if (ctx->pc != 0x4506D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003459C0_0x3459c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4506D0u; }
        if (ctx->pc != 0x4506D0u) { return; }
    }
    ctx->pc = 0x4506D0u;
label_4506d0:
    // 0x4506d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4506d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4506d4:
    // 0x4506d4: 0xc078ac8  jal         func_1E2B20
label_4506d8:
    if (ctx->pc == 0x4506D8u) {
        ctx->pc = 0x4506D8u;
            // 0x4506d8: 0x8c44e3e0  lw          $a0, -0x1C20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
        ctx->pc = 0x4506DCu;
        goto label_4506dc;
    }
    ctx->pc = 0x4506D4u;
    SET_GPR_U32(ctx, 31, 0x4506DCu);
    ctx->pc = 0x4506D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4506D4u;
            // 0x4506d8: 0x8c44e3e0  lw          $a0, -0x1C20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2B20u;
    if (runtime->hasFunction(0x1E2B20u)) {
        auto targetFn = runtime->lookupFunction(0x1E2B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4506DCu; }
        if (ctx->pc != 0x4506DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2B20_0x1e2b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4506DCu; }
        if (ctx->pc != 0x4506DCu) { return; }
    }
    ctx->pc = 0x4506DCu;
label_4506dc:
    // 0x4506dc: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_4506e0:
    if (ctx->pc == 0x4506E0u) {
        ctx->pc = 0x4506E0u;
            // 0x4506e0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4506E4u;
        goto label_4506e4;
    }
    ctx->pc = 0x4506DCu;
    {
        const bool branch_taken_0x4506dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4506dc) {
            ctx->pc = 0x4506E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4506DCu;
            // 0x4506e0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450700u;
            goto label_450700;
        }
    }
    ctx->pc = 0x4506E4u;
label_4506e4:
    // 0x4506e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4506e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4506e8:
    // 0x4506e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4506e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4506ec:
    // 0x4506ec: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4506ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4506f0:
    // 0x4506f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4506f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4506f4:
    // 0x4506f4: 0xc057a68  jal         func_15E9A0
label_4506f8:
    if (ctx->pc == 0x4506F8u) {
        ctx->pc = 0x4506F8u;
            // 0x4506f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4506FCu;
        goto label_4506fc;
    }
    ctx->pc = 0x4506F4u;
    SET_GPR_U32(ctx, 31, 0x4506FCu);
    ctx->pc = 0x4506F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4506F4u;
            // 0x4506f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4506FCu; }
        if (ctx->pc != 0x4506FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4506FCu; }
        if (ctx->pc != 0x4506FCu) { return; }
    }
    ctx->pc = 0x4506FCu;
label_4506fc:
    // 0x4506fc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4506fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_450700:
    // 0x450700: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x450700u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_450704:
    // 0x450704: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_450708:
    if (ctx->pc == 0x450708u) {
        ctx->pc = 0x450708u;
            // 0x450708: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45070Cu;
        goto label_45070c;
    }
    ctx->pc = 0x450704u;
    {
        const bool branch_taken_0x450704 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x450704) {
            ctx->pc = 0x450708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450704u;
            // 0x450708: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450718u;
            goto label_450718;
        }
    }
    ctx->pc = 0x45070Cu;
label_45070c:
    // 0x45070c: 0xc0400a8  jal         func_1002A0
label_450710:
    if (ctx->pc == 0x450710u) {
        ctx->pc = 0x450710u;
            // 0x450710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450714u;
        goto label_450714;
    }
    ctx->pc = 0x45070Cu;
    SET_GPR_U32(ctx, 31, 0x450714u);
    ctx->pc = 0x450710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45070Cu;
            // 0x450710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450714u; }
        if (ctx->pc != 0x450714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450714u; }
        if (ctx->pc != 0x450714u) { return; }
    }
    ctx->pc = 0x450714u;
label_450714:
    // 0x450714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x450714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_450718:
    // 0x450718: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x450718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45071c:
    // 0x45071c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45071cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_450720:
    // 0x450720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x450720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_450724:
    // 0x450724: 0x3e00008  jr          $ra
label_450728:
    if (ctx->pc == 0x450728u) {
        ctx->pc = 0x450728u;
            // 0x450728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x45072Cu;
        goto label_45072c;
    }
    ctx->pc = 0x450724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450724u;
            // 0x450728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45072Cu;
label_45072c:
    // 0x45072c: 0x0  nop
    ctx->pc = 0x45072cu;
    // NOP
}
