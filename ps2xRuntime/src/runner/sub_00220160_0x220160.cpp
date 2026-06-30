#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220160
// Address: 0x220160 - 0x220750
void sub_00220160_0x220160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220160_0x220160");
#endif

    switch (ctx->pc) {
        case 0x220160u: goto label_220160;
        case 0x220164u: goto label_220164;
        case 0x220168u: goto label_220168;
        case 0x22016cu: goto label_22016c;
        case 0x220170u: goto label_220170;
        case 0x220174u: goto label_220174;
        case 0x220178u: goto label_220178;
        case 0x22017cu: goto label_22017c;
        case 0x220180u: goto label_220180;
        case 0x220184u: goto label_220184;
        case 0x220188u: goto label_220188;
        case 0x22018cu: goto label_22018c;
        case 0x220190u: goto label_220190;
        case 0x220194u: goto label_220194;
        case 0x220198u: goto label_220198;
        case 0x22019cu: goto label_22019c;
        case 0x2201a0u: goto label_2201a0;
        case 0x2201a4u: goto label_2201a4;
        case 0x2201a8u: goto label_2201a8;
        case 0x2201acu: goto label_2201ac;
        case 0x2201b0u: goto label_2201b0;
        case 0x2201b4u: goto label_2201b4;
        case 0x2201b8u: goto label_2201b8;
        case 0x2201bcu: goto label_2201bc;
        case 0x2201c0u: goto label_2201c0;
        case 0x2201c4u: goto label_2201c4;
        case 0x2201c8u: goto label_2201c8;
        case 0x2201ccu: goto label_2201cc;
        case 0x2201d0u: goto label_2201d0;
        case 0x2201d4u: goto label_2201d4;
        case 0x2201d8u: goto label_2201d8;
        case 0x2201dcu: goto label_2201dc;
        case 0x2201e0u: goto label_2201e0;
        case 0x2201e4u: goto label_2201e4;
        case 0x2201e8u: goto label_2201e8;
        case 0x2201ecu: goto label_2201ec;
        case 0x2201f0u: goto label_2201f0;
        case 0x2201f4u: goto label_2201f4;
        case 0x2201f8u: goto label_2201f8;
        case 0x2201fcu: goto label_2201fc;
        case 0x220200u: goto label_220200;
        case 0x220204u: goto label_220204;
        case 0x220208u: goto label_220208;
        case 0x22020cu: goto label_22020c;
        case 0x220210u: goto label_220210;
        case 0x220214u: goto label_220214;
        case 0x220218u: goto label_220218;
        case 0x22021cu: goto label_22021c;
        case 0x220220u: goto label_220220;
        case 0x220224u: goto label_220224;
        case 0x220228u: goto label_220228;
        case 0x22022cu: goto label_22022c;
        case 0x220230u: goto label_220230;
        case 0x220234u: goto label_220234;
        case 0x220238u: goto label_220238;
        case 0x22023cu: goto label_22023c;
        case 0x220240u: goto label_220240;
        case 0x220244u: goto label_220244;
        case 0x220248u: goto label_220248;
        case 0x22024cu: goto label_22024c;
        case 0x220250u: goto label_220250;
        case 0x220254u: goto label_220254;
        case 0x220258u: goto label_220258;
        case 0x22025cu: goto label_22025c;
        case 0x220260u: goto label_220260;
        case 0x220264u: goto label_220264;
        case 0x220268u: goto label_220268;
        case 0x22026cu: goto label_22026c;
        case 0x220270u: goto label_220270;
        case 0x220274u: goto label_220274;
        case 0x220278u: goto label_220278;
        case 0x22027cu: goto label_22027c;
        case 0x220280u: goto label_220280;
        case 0x220284u: goto label_220284;
        case 0x220288u: goto label_220288;
        case 0x22028cu: goto label_22028c;
        case 0x220290u: goto label_220290;
        case 0x220294u: goto label_220294;
        case 0x220298u: goto label_220298;
        case 0x22029cu: goto label_22029c;
        case 0x2202a0u: goto label_2202a0;
        case 0x2202a4u: goto label_2202a4;
        case 0x2202a8u: goto label_2202a8;
        case 0x2202acu: goto label_2202ac;
        case 0x2202b0u: goto label_2202b0;
        case 0x2202b4u: goto label_2202b4;
        case 0x2202b8u: goto label_2202b8;
        case 0x2202bcu: goto label_2202bc;
        case 0x2202c0u: goto label_2202c0;
        case 0x2202c4u: goto label_2202c4;
        case 0x2202c8u: goto label_2202c8;
        case 0x2202ccu: goto label_2202cc;
        case 0x2202d0u: goto label_2202d0;
        case 0x2202d4u: goto label_2202d4;
        case 0x2202d8u: goto label_2202d8;
        case 0x2202dcu: goto label_2202dc;
        case 0x2202e0u: goto label_2202e0;
        case 0x2202e4u: goto label_2202e4;
        case 0x2202e8u: goto label_2202e8;
        case 0x2202ecu: goto label_2202ec;
        case 0x2202f0u: goto label_2202f0;
        case 0x2202f4u: goto label_2202f4;
        case 0x2202f8u: goto label_2202f8;
        case 0x2202fcu: goto label_2202fc;
        case 0x220300u: goto label_220300;
        case 0x220304u: goto label_220304;
        case 0x220308u: goto label_220308;
        case 0x22030cu: goto label_22030c;
        case 0x220310u: goto label_220310;
        case 0x220314u: goto label_220314;
        case 0x220318u: goto label_220318;
        case 0x22031cu: goto label_22031c;
        case 0x220320u: goto label_220320;
        case 0x220324u: goto label_220324;
        case 0x220328u: goto label_220328;
        case 0x22032cu: goto label_22032c;
        case 0x220330u: goto label_220330;
        case 0x220334u: goto label_220334;
        case 0x220338u: goto label_220338;
        case 0x22033cu: goto label_22033c;
        case 0x220340u: goto label_220340;
        case 0x220344u: goto label_220344;
        case 0x220348u: goto label_220348;
        case 0x22034cu: goto label_22034c;
        case 0x220350u: goto label_220350;
        case 0x220354u: goto label_220354;
        case 0x220358u: goto label_220358;
        case 0x22035cu: goto label_22035c;
        case 0x220360u: goto label_220360;
        case 0x220364u: goto label_220364;
        case 0x220368u: goto label_220368;
        case 0x22036cu: goto label_22036c;
        case 0x220370u: goto label_220370;
        case 0x220374u: goto label_220374;
        case 0x220378u: goto label_220378;
        case 0x22037cu: goto label_22037c;
        case 0x220380u: goto label_220380;
        case 0x220384u: goto label_220384;
        case 0x220388u: goto label_220388;
        case 0x22038cu: goto label_22038c;
        case 0x220390u: goto label_220390;
        case 0x220394u: goto label_220394;
        case 0x220398u: goto label_220398;
        case 0x22039cu: goto label_22039c;
        case 0x2203a0u: goto label_2203a0;
        case 0x2203a4u: goto label_2203a4;
        case 0x2203a8u: goto label_2203a8;
        case 0x2203acu: goto label_2203ac;
        case 0x2203b0u: goto label_2203b0;
        case 0x2203b4u: goto label_2203b4;
        case 0x2203b8u: goto label_2203b8;
        case 0x2203bcu: goto label_2203bc;
        case 0x2203c0u: goto label_2203c0;
        case 0x2203c4u: goto label_2203c4;
        case 0x2203c8u: goto label_2203c8;
        case 0x2203ccu: goto label_2203cc;
        case 0x2203d0u: goto label_2203d0;
        case 0x2203d4u: goto label_2203d4;
        case 0x2203d8u: goto label_2203d8;
        case 0x2203dcu: goto label_2203dc;
        case 0x2203e0u: goto label_2203e0;
        case 0x2203e4u: goto label_2203e4;
        case 0x2203e8u: goto label_2203e8;
        case 0x2203ecu: goto label_2203ec;
        case 0x2203f0u: goto label_2203f0;
        case 0x2203f4u: goto label_2203f4;
        case 0x2203f8u: goto label_2203f8;
        case 0x2203fcu: goto label_2203fc;
        case 0x220400u: goto label_220400;
        case 0x220404u: goto label_220404;
        case 0x220408u: goto label_220408;
        case 0x22040cu: goto label_22040c;
        case 0x220410u: goto label_220410;
        case 0x220414u: goto label_220414;
        case 0x220418u: goto label_220418;
        case 0x22041cu: goto label_22041c;
        case 0x220420u: goto label_220420;
        case 0x220424u: goto label_220424;
        case 0x220428u: goto label_220428;
        case 0x22042cu: goto label_22042c;
        case 0x220430u: goto label_220430;
        case 0x220434u: goto label_220434;
        case 0x220438u: goto label_220438;
        case 0x22043cu: goto label_22043c;
        case 0x220440u: goto label_220440;
        case 0x220444u: goto label_220444;
        case 0x220448u: goto label_220448;
        case 0x22044cu: goto label_22044c;
        case 0x220450u: goto label_220450;
        case 0x220454u: goto label_220454;
        case 0x220458u: goto label_220458;
        case 0x22045cu: goto label_22045c;
        case 0x220460u: goto label_220460;
        case 0x220464u: goto label_220464;
        case 0x220468u: goto label_220468;
        case 0x22046cu: goto label_22046c;
        case 0x220470u: goto label_220470;
        case 0x220474u: goto label_220474;
        case 0x220478u: goto label_220478;
        case 0x22047cu: goto label_22047c;
        case 0x220480u: goto label_220480;
        case 0x220484u: goto label_220484;
        case 0x220488u: goto label_220488;
        case 0x22048cu: goto label_22048c;
        case 0x220490u: goto label_220490;
        case 0x220494u: goto label_220494;
        case 0x220498u: goto label_220498;
        case 0x22049cu: goto label_22049c;
        case 0x2204a0u: goto label_2204a0;
        case 0x2204a4u: goto label_2204a4;
        case 0x2204a8u: goto label_2204a8;
        case 0x2204acu: goto label_2204ac;
        case 0x2204b0u: goto label_2204b0;
        case 0x2204b4u: goto label_2204b4;
        case 0x2204b8u: goto label_2204b8;
        case 0x2204bcu: goto label_2204bc;
        case 0x2204c0u: goto label_2204c0;
        case 0x2204c4u: goto label_2204c4;
        case 0x2204c8u: goto label_2204c8;
        case 0x2204ccu: goto label_2204cc;
        case 0x2204d0u: goto label_2204d0;
        case 0x2204d4u: goto label_2204d4;
        case 0x2204d8u: goto label_2204d8;
        case 0x2204dcu: goto label_2204dc;
        case 0x2204e0u: goto label_2204e0;
        case 0x2204e4u: goto label_2204e4;
        case 0x2204e8u: goto label_2204e8;
        case 0x2204ecu: goto label_2204ec;
        case 0x2204f0u: goto label_2204f0;
        case 0x2204f4u: goto label_2204f4;
        case 0x2204f8u: goto label_2204f8;
        case 0x2204fcu: goto label_2204fc;
        case 0x220500u: goto label_220500;
        case 0x220504u: goto label_220504;
        case 0x220508u: goto label_220508;
        case 0x22050cu: goto label_22050c;
        case 0x220510u: goto label_220510;
        case 0x220514u: goto label_220514;
        case 0x220518u: goto label_220518;
        case 0x22051cu: goto label_22051c;
        case 0x220520u: goto label_220520;
        case 0x220524u: goto label_220524;
        case 0x220528u: goto label_220528;
        case 0x22052cu: goto label_22052c;
        case 0x220530u: goto label_220530;
        case 0x220534u: goto label_220534;
        case 0x220538u: goto label_220538;
        case 0x22053cu: goto label_22053c;
        case 0x220540u: goto label_220540;
        case 0x220544u: goto label_220544;
        case 0x220548u: goto label_220548;
        case 0x22054cu: goto label_22054c;
        case 0x220550u: goto label_220550;
        case 0x220554u: goto label_220554;
        case 0x220558u: goto label_220558;
        case 0x22055cu: goto label_22055c;
        case 0x220560u: goto label_220560;
        case 0x220564u: goto label_220564;
        case 0x220568u: goto label_220568;
        case 0x22056cu: goto label_22056c;
        case 0x220570u: goto label_220570;
        case 0x220574u: goto label_220574;
        case 0x220578u: goto label_220578;
        case 0x22057cu: goto label_22057c;
        case 0x220580u: goto label_220580;
        case 0x220584u: goto label_220584;
        case 0x220588u: goto label_220588;
        case 0x22058cu: goto label_22058c;
        case 0x220590u: goto label_220590;
        case 0x220594u: goto label_220594;
        case 0x220598u: goto label_220598;
        case 0x22059cu: goto label_22059c;
        case 0x2205a0u: goto label_2205a0;
        case 0x2205a4u: goto label_2205a4;
        case 0x2205a8u: goto label_2205a8;
        case 0x2205acu: goto label_2205ac;
        case 0x2205b0u: goto label_2205b0;
        case 0x2205b4u: goto label_2205b4;
        case 0x2205b8u: goto label_2205b8;
        case 0x2205bcu: goto label_2205bc;
        case 0x2205c0u: goto label_2205c0;
        case 0x2205c4u: goto label_2205c4;
        case 0x2205c8u: goto label_2205c8;
        case 0x2205ccu: goto label_2205cc;
        case 0x2205d0u: goto label_2205d0;
        case 0x2205d4u: goto label_2205d4;
        case 0x2205d8u: goto label_2205d8;
        case 0x2205dcu: goto label_2205dc;
        case 0x2205e0u: goto label_2205e0;
        case 0x2205e4u: goto label_2205e4;
        case 0x2205e8u: goto label_2205e8;
        case 0x2205ecu: goto label_2205ec;
        case 0x2205f0u: goto label_2205f0;
        case 0x2205f4u: goto label_2205f4;
        case 0x2205f8u: goto label_2205f8;
        case 0x2205fcu: goto label_2205fc;
        case 0x220600u: goto label_220600;
        case 0x220604u: goto label_220604;
        case 0x220608u: goto label_220608;
        case 0x22060cu: goto label_22060c;
        case 0x220610u: goto label_220610;
        case 0x220614u: goto label_220614;
        case 0x220618u: goto label_220618;
        case 0x22061cu: goto label_22061c;
        case 0x220620u: goto label_220620;
        case 0x220624u: goto label_220624;
        case 0x220628u: goto label_220628;
        case 0x22062cu: goto label_22062c;
        case 0x220630u: goto label_220630;
        case 0x220634u: goto label_220634;
        case 0x220638u: goto label_220638;
        case 0x22063cu: goto label_22063c;
        case 0x220640u: goto label_220640;
        case 0x220644u: goto label_220644;
        case 0x220648u: goto label_220648;
        case 0x22064cu: goto label_22064c;
        case 0x220650u: goto label_220650;
        case 0x220654u: goto label_220654;
        case 0x220658u: goto label_220658;
        case 0x22065cu: goto label_22065c;
        case 0x220660u: goto label_220660;
        case 0x220664u: goto label_220664;
        case 0x220668u: goto label_220668;
        case 0x22066cu: goto label_22066c;
        case 0x220670u: goto label_220670;
        case 0x220674u: goto label_220674;
        case 0x220678u: goto label_220678;
        case 0x22067cu: goto label_22067c;
        case 0x220680u: goto label_220680;
        case 0x220684u: goto label_220684;
        case 0x220688u: goto label_220688;
        case 0x22068cu: goto label_22068c;
        case 0x220690u: goto label_220690;
        case 0x220694u: goto label_220694;
        case 0x220698u: goto label_220698;
        case 0x22069cu: goto label_22069c;
        case 0x2206a0u: goto label_2206a0;
        case 0x2206a4u: goto label_2206a4;
        case 0x2206a8u: goto label_2206a8;
        case 0x2206acu: goto label_2206ac;
        case 0x2206b0u: goto label_2206b0;
        case 0x2206b4u: goto label_2206b4;
        case 0x2206b8u: goto label_2206b8;
        case 0x2206bcu: goto label_2206bc;
        case 0x2206c0u: goto label_2206c0;
        case 0x2206c4u: goto label_2206c4;
        case 0x2206c8u: goto label_2206c8;
        case 0x2206ccu: goto label_2206cc;
        case 0x2206d0u: goto label_2206d0;
        case 0x2206d4u: goto label_2206d4;
        case 0x2206d8u: goto label_2206d8;
        case 0x2206dcu: goto label_2206dc;
        case 0x2206e0u: goto label_2206e0;
        case 0x2206e4u: goto label_2206e4;
        case 0x2206e8u: goto label_2206e8;
        case 0x2206ecu: goto label_2206ec;
        case 0x2206f0u: goto label_2206f0;
        case 0x2206f4u: goto label_2206f4;
        case 0x2206f8u: goto label_2206f8;
        case 0x2206fcu: goto label_2206fc;
        case 0x220700u: goto label_220700;
        case 0x220704u: goto label_220704;
        case 0x220708u: goto label_220708;
        case 0x22070cu: goto label_22070c;
        case 0x220710u: goto label_220710;
        case 0x220714u: goto label_220714;
        case 0x220718u: goto label_220718;
        case 0x22071cu: goto label_22071c;
        case 0x220720u: goto label_220720;
        case 0x220724u: goto label_220724;
        case 0x220728u: goto label_220728;
        case 0x22072cu: goto label_22072c;
        case 0x220730u: goto label_220730;
        case 0x220734u: goto label_220734;
        case 0x220738u: goto label_220738;
        case 0x22073cu: goto label_22073c;
        case 0x220740u: goto label_220740;
        case 0x220744u: goto label_220744;
        case 0x220748u: goto label_220748;
        case 0x22074cu: goto label_22074c;
        default: break;
    }

    ctx->pc = 0x220160u;

label_220160:
    // 0x220160: 0x27bdfca0  addiu       $sp, $sp, -0x360
    ctx->pc = 0x220160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966432));
label_220164:
    // 0x220164: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x220164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_220168:
    // 0x220168: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x220168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_22016c:
    // 0x22016c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x22016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_220170:
    // 0x220170: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x220170u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_220174:
    // 0x220174: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x220174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_220178:
    // 0x220178: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x220178u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22017c:
    // 0x22017c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22017cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_220180:
    // 0x220180: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x220180u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_220184:
    // 0x220184: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x220184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_220188:
    // 0x220188: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x220188u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22018c:
    // 0x22018c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22018cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_220190:
    // 0x220190: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x220190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_220194:
    // 0x220194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x220194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_220198:
    // 0x220198: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x220198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22019c:
    // 0x22019c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2201a0:
    // 0x2201a0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2201a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2201a4:
    // 0x2201a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2201a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2201a8:
    // 0x2201a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2201a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2201ac:
    // 0x2201ac: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x2201acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
label_2201b0:
    // 0x2201b0: 0x27b10280  addiu       $s1, $sp, 0x280
    ctx->pc = 0x2201b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2201b4:
    // 0x2201b4: 0xafab00a8  sw          $t3, 0xA8($sp)
    ctx->pc = 0x2201b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 11));
label_2201b8:
    // 0x2201b8: 0x27b00320  addiu       $s0, $sp, 0x320
    ctx->pc = 0x2201b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_2201bc:
    // 0x2201bc: 0xc4e0003c  lwc1        $f0, 0x3C($a3)
    ctx->pc = 0x2201bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2201c0:
    // 0x2201c0: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x2201c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_2201c4:
    // 0x2201c4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2201c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2201c8:
    // 0x2201c8: 0xc4e00040  lwc1        $f0, 0x40($a3)
    ctx->pc = 0x2201c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2201cc:
    // 0x2201cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2201ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2201d0:
    // 0x2201d0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2201d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2201d4:
    // 0x2201d4: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2201d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2201d8:
    // 0x2201d8: 0xc4e00044  lwc1        $f0, 0x44($a3)
    ctx->pc = 0x2201d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2201dc:
    // 0x2201dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2201dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2201e0:
    // 0x2201e0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2201e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2201e4:
    // 0x2201e4: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x2201e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2201e8:
    // 0x2201e8: 0xc4e00048  lwc1        $f0, 0x48($a3)
    ctx->pc = 0x2201e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2201ec:
    // 0x2201ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2201ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2201f0:
    // 0x2201f0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2201f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2201f4:
    // 0x2201f4: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x2201f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2201f8:
    // 0x2201f8: 0xc4e0004c  lwc1        $f0, 0x4C($a3)
    ctx->pc = 0x2201f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2201fc:
    // 0x2201fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2201fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_220200:
    // 0x220200: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x220200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_220204:
    // 0x220204: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x220204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220208:
    // 0x220208: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x220208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_22020c:
    // 0x22020c: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x22020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220210:
    // 0x220210: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x220210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_220214:
    // 0x220214: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x220214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220218:
    // 0x220218: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x220218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_22021c:
    // 0x22021c: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x22021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220220:
    // 0x220220: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x220220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_220224:
    // 0x220224: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x220224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_220228:
    // 0x220228: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_22022c:
    if (ctx->pc == 0x22022Cu) {
        ctx->pc = 0x22022Cu;
            // 0x22022c: 0x24e30030  addiu       $v1, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->pc = 0x220230u;
        goto label_220230;
    }
    ctx->pc = 0x220228u;
    {
        const bool branch_taken_0x220228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220228u;
            // 0x22022c: 0x24e30030  addiu       $v1, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220228) {
            ctx->pc = 0x2202A0u;
            goto label_2202a0;
        }
    }
    ctx->pc = 0x220230u;
label_220230:
    // 0x220230: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x220230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220234:
    // 0x220234: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x220234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_220238:
    // 0x220238: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x220238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22023c:
    // 0x22023c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x22023cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_220240:
    // 0x220240: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x220240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220244:
    // 0x220244: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x220244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_220248:
    // 0x220248: 0xc4e0002c  lwc1        $f0, 0x2C($a3)
    ctx->pc = 0x220248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22024c:
    // 0x22024c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x22024cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_220250:
    // 0x220250: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x220250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_220254:
    // 0x220254: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x220254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_220258:
    // 0x220258: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x220258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22025c:
    // 0x22025c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x22025cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_220260:
    // 0x220260: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x220260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_220264:
    // 0x220264: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x220264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_220268:
    // 0x220268: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x220268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_22026c:
    // 0x22026c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x22026cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_220270:
    // 0x220270: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x220270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_220274:
    // 0x220274: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x220274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_220278:
    // 0x220278: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x220278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_22027c:
    // 0x22027c: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x22027cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_220280:
    // 0x220280: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x220280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_220284:
    // 0x220284: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x220284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_220288:
    // 0x220288: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x220288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_22028c:
    // 0x22028c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x22028cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_220290:
    // 0x220290: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x220290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_220294:
    // 0x220294: 0x10000048  b           . + 4 + (0x48 << 2)
label_220298:
    if (ctx->pc == 0x220298u) {
        ctx->pc = 0x220298u;
            // 0x220298: 0xe6220038  swc1        $f2, 0x38($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->pc = 0x22029Cu;
        goto label_22029c;
    }
    ctx->pc = 0x220294u;
    {
        const bool branch_taken_0x220294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220294u;
            // 0x220298: 0xe6220038  swc1        $f2, 0x38($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220294) {
            ctx->pc = 0x2203B8u;
            goto label_2203b8;
        }
    }
    ctx->pc = 0x22029Cu;
label_22029c:
    // 0x22029c: 0x0  nop
    ctx->pc = 0x22029cu;
    // NOP
label_2202a0:
    // 0x2202a0: 0x24e60050  addiu       $a2, $a3, 0x50
    ctx->pc = 0x2202a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_2202a4:
    // 0x2202a4: 0xc4e40024  lwc1        $f4, 0x24($a3)
    ctx->pc = 0x2202a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2202a8:
    // 0x2202a8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2202a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2202ac:
    // 0x2202ac: 0xc4e00054  lwc1        $f0, 0x54($a3)
    ctx->pc = 0x2202acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2202b0:
    // 0x2202b0: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x2202b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2202b4:
    // 0x2202b4: 0xc4e50020  lwc1        $f5, 0x20($a3)
    ctx->pc = 0x2202b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2202b8:
    // 0x2202b8: 0xc4e10050  lwc1        $f1, 0x50($a3)
    ctx->pc = 0x2202b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2202bc:
    // 0x2202bc: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2202bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2202c0:
    // 0x2202c0: 0xc4e30028  lwc1        $f3, 0x28($a3)
    ctx->pc = 0x2202c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2202c4:
    // 0x2202c4: 0xc4e20058  lwc1        $f2, 0x58($a3)
    ctx->pc = 0x2202c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2202c8:
    // 0x2202c8: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2202c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_2202cc:
    // 0x2202cc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2202ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2202d0:
    // 0x2202d0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2202d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2202d4:
    // 0x2202d4: 0xc4e00064  lwc1        $f0, 0x64($a3)
    ctx->pc = 0x2202d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2202d8:
    // 0x2202d8: 0xc4e10060  lwc1        $f1, 0x60($a3)
    ctx->pc = 0x2202d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2202dc:
    // 0x2202dc: 0xc4e20068  lwc1        $f2, 0x68($a3)
    ctx->pc = 0x2202dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2202e0:
    // 0x2202e0: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2202e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2202e4:
    // 0x2202e4: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2202e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_2202e8:
    // 0x2202e8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2202e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2202ec:
    // 0x2202ec: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2202ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2202f0:
    // 0x2202f0: 0xc4e00074  lwc1        $f0, 0x74($a3)
    ctx->pc = 0x2202f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2202f4:
    // 0x2202f4: 0xc4e10070  lwc1        $f1, 0x70($a3)
    ctx->pc = 0x2202f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2202f8:
    // 0x2202f8: 0xc4e20078  lwc1        $f2, 0x78($a3)
    ctx->pc = 0x2202f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2202fc:
    // 0x2202fc: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2202fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_220300:
    // 0x220300: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x220300u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_220304:
    // 0x220304: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x220304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_220308:
    // 0x220308: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x220308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_22030c:
    // 0x22030c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x22030cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_220310:
    // 0x220310: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x220310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_220314:
    // 0x220314: 0xc4e00050  lwc1        $f0, 0x50($a3)
    ctx->pc = 0x220314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220318:
    // 0x220318: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x220318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22031c:
    // 0x22031c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x22031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_220320:
    // 0x220320: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x220320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_220324:
    // 0x220324: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x220324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_220328:
    // 0x220328: 0xc4e00054  lwc1        $f0, 0x54($a3)
    ctx->pc = 0x220328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22032c:
    // 0x22032c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x22032cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_220330:
    // 0x220330: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x220330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_220334:
    // 0x220334: 0xc4e00058  lwc1        $f0, 0x58($a3)
    ctx->pc = 0x220334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220338:
    // 0x220338: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x220338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_22033c:
    // 0x22033c: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x22033cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_220340:
    // 0x220340: 0xc4e0005c  lwc1        $f0, 0x5C($a3)
    ctx->pc = 0x220340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220344:
    // 0x220344: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x220344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_220348:
    // 0x220348: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x220348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_22034c:
    // 0x22034c: 0xc4e00060  lwc1        $f0, 0x60($a3)
    ctx->pc = 0x22034cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220350:
    // 0x220350: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x220350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_220354:
    // 0x220354: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x220354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_220358:
    // 0x220358: 0xc4e00064  lwc1        $f0, 0x64($a3)
    ctx->pc = 0x220358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22035c:
    // 0x22035c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x22035cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_220360:
    // 0x220360: 0xe7a00264  swc1        $f0, 0x264($sp)
    ctx->pc = 0x220360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_220364:
    // 0x220364: 0xc4e00068  lwc1        $f0, 0x68($a3)
    ctx->pc = 0x220364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220368:
    // 0x220368: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x220368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_22036c:
    // 0x22036c: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x22036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_220370:
    // 0x220370: 0xc4e0006c  lwc1        $f0, 0x6C($a3)
    ctx->pc = 0x220370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220374:
    // 0x220374: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x220374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_220378:
    // 0x220378: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x220378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
label_22037c:
    // 0x22037c: 0xc4e00070  lwc1        $f0, 0x70($a3)
    ctx->pc = 0x22037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220380:
    // 0x220380: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x220380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_220384:
    // 0x220384: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x220384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_220388:
    // 0x220388: 0xc4e00074  lwc1        $f0, 0x74($a3)
    ctx->pc = 0x220388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22038c:
    // 0x22038c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22038cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_220390:
    // 0x220390: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x220390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_220394:
    // 0x220394: 0xc4e00078  lwc1        $f0, 0x78($a3)
    ctx->pc = 0x220394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220398:
    // 0x220398: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x220398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22039c:
    // 0x22039c: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x22039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_2203a0:
    // 0x2203a0: 0xc4e0007c  lwc1        $f0, 0x7C($a3)
    ctx->pc = 0x2203a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2203a4:
    // 0x2203a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2203a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2203a8:
    // 0x2203a8: 0xc0a3348  jal         func_28CD20
label_2203ac:
    if (ctx->pc == 0x2203ACu) {
        ctx->pc = 0x2203ACu;
            // 0x2203ac: 0xe7a0027c  swc1        $f0, 0x27C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
        ctx->pc = 0x2203B0u;
        goto label_2203b0;
    }
    ctx->pc = 0x2203A8u;
    SET_GPR_U32(ctx, 31, 0x2203B0u);
    ctx->pc = 0x2203ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2203A8u;
            // 0x2203ac: 0xe7a0027c  swc1        $f0, 0x27C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CD20u;
    if (runtime->hasFunction(0x28CD20u)) {
        auto targetFn = runtime->lookupFunction(0x28CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203B0u; }
        if (ctx->pc != 0x2203B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CD20_0x28cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203B0u; }
        if (ctx->pc != 0x2203B0u) { return; }
    }
    ctx->pc = 0x2203B0u;
label_2203b0:
    // 0x2203b0: 0xc0a32d0  jal         func_28CB40
label_2203b4:
    if (ctx->pc == 0x2203B4u) {
        ctx->pc = 0x2203B4u;
            // 0x2203b4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x2203B8u;
        goto label_2203b8;
    }
    ctx->pc = 0x2203B0u;
    SET_GPR_U32(ctx, 31, 0x2203B8u);
    ctx->pc = 0x2203B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2203B0u;
            // 0x2203b4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB40u;
    if (runtime->hasFunction(0x28CB40u)) {
        auto targetFn = runtime->lookupFunction(0x28CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203B8u; }
        if (ctx->pc != 0x2203B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB40_0x28cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203B8u; }
        if (ctx->pc != 0x2203B8u) { return; }
    }
    ctx->pc = 0x2203B8u;
label_2203b8:
    // 0x2203b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2203bc:
    // 0x2203bc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2203bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_2203c0:
    // 0x2203c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2203c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2203c4:
    // 0x2203c4: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x2203c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2203c8:
    // 0x2203c8: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
label_2203cc:
    if (ctx->pc == 0x2203CCu) {
        ctx->pc = 0x2203CCu;
            // 0x2203cc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2203D0u;
        goto label_2203d0;
    }
    ctx->pc = 0x2203C8u;
    {
        const bool branch_taken_0x2203c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2203CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2203C8u;
            // 0x2203cc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203c8) {
            ctx->pc = 0x2201BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2201bc;
        }
    }
    ctx->pc = 0x2203D0u;
label_2203d0:
    // 0x2203d0: 0xc6a30010  lwc1        $f3, 0x10($s5)
    ctx->pc = 0x2203d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2203d4:
    // 0x2203d4: 0x26aa0010  addiu       $t2, $s5, 0x10
    ctx->pc = 0x2203d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_2203d8:
    // 0x2203d8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2203d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2203dc:
    // 0x2203dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2203dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2203e0:
    // 0x2203e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2203e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2203e4:
    // 0x2203e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2203e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2203e8:
    // 0x2203e8: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x2203e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2203ec:
    // 0x2203ec: 0xc6a20014  lwc1        $f2, 0x14($s5)
    ctx->pc = 0x2203ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2203f0:
    // 0x2203f0: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2203f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2203f4:
    // 0x2203f4: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x2203f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2203f8:
    // 0x2203f8: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x2203f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2203fc:
    // 0x2203fc: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x2203fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220400:
    // 0x220400: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x220400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_220404:
    // 0x220404: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x220404u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
label_220408:
    // 0x220408: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x220408u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_22040c:
    // 0x22040c: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x22040cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
label_220410:
    // 0x220410: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x220410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_220414:
    // 0x220414: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_220418:
    if (ctx->pc == 0x220418u) {
        ctx->pc = 0x22041Cu;
        goto label_22041c;
    }
    ctx->pc = 0x220414u;
    {
        const bool branch_taken_0x220414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x220414) {
            ctx->pc = 0x220428u;
            goto label_220428;
        }
    }
    ctx->pc = 0x22041Cu;
label_22041c:
    // 0x22041c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x22041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_220420:
    // 0x220420: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x220420u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
label_220424:
    // 0x220424: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x220424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220428:
    // 0x220428: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x220428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22042c:
    // 0x22042c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_220430:
    if (ctx->pc == 0x220430u) {
        ctx->pc = 0x220430u;
            // 0x220430: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x220434u;
        goto label_220434;
    }
    ctx->pc = 0x22042Cu;
    {
        const bool branch_taken_0x22042c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22042c) {
            ctx->pc = 0x220430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22042Cu;
            // 0x220430: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22043Cu;
            goto label_22043c;
        }
    }
    ctx->pc = 0x220434u;
label_220434:
    // 0x220434: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x220434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_220438:
    // 0x220438: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x220438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_22043c:
    // 0x22043c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22043cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_220440:
    // 0x220440: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x220440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_220444:
    // 0x220444: 0x1422821  addu        $a1, $t2, $v0
    ctx->pc = 0x220444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_220448:
    // 0x220448: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x220448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_22044c:
    // 0x22044c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22044cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_220450:
    // 0x220450: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x220450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_220454:
    // 0x220454: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x220454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_220458:
    // 0x220458: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x220458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22045c:
    // 0x22045c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_220460:
    // 0x220460: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x220460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_220464:
    // 0x220464: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x220464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_220468:
    // 0x220468: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x220468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_22046c:
    // 0x22046c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x22046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220470:
    // 0x220470: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x220470u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_220474:
    // 0x220474: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x220474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_220478:
    // 0x220478: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x220478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22047c:
    // 0x22047c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x22047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_220480:
    // 0x220480: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x220480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220484:
    // 0x220484: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x220484u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_220488:
    // 0x220488: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x220488u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_22048c:
    // 0x22048c: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x22048cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_220490:
    // 0x220490: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x220490u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_220494:
    // 0x220494: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_220498:
    if (ctx->pc == 0x220498u) {
        ctx->pc = 0x220498u;
            // 0x220498: 0x27ab00c0  addiu       $t3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x22049Cu;
        goto label_22049c;
    }
    ctx->pc = 0x220494u;
    {
        const bool branch_taken_0x220494 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x220498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220494u;
            // 0x220498: 0x27ab00c0  addiu       $t3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220494) {
            ctx->pc = 0x2204B8u;
            goto label_2204b8;
        }
    }
    ctx->pc = 0x22049Cu;
label_22049c:
    // 0x22049c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22049cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2204a0:
    // 0x2204a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2204a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2204a4:
    // 0x2204a4: 0x0  nop
    ctx->pc = 0x2204a4u;
    // NOP
label_2204a8:
    // 0x2204a8: 0x460100d6  rsqrt.s     $f3, $f0, $f1
    ctx->pc = 0x2204a8u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
label_2204ac:
    // 0x2204ac: 0x0  nop
    ctx->pc = 0x2204acu;
    // NOP
label_2204b0:
    // 0x2204b0: 0x0  nop
    ctx->pc = 0x2204b0u;
    // NOP
label_2204b4:
    // 0x2204b4: 0x0  nop
    ctx->pc = 0x2204b4u;
    // NOP
label_2204b8:
    // 0x2204b8: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2204b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2204bc:
    // 0x2204bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2204bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2204c0:
    // 0x2204c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2204c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2204c4:
    // 0x2204c4: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x2204c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2204c8:
    // 0x2204c8: 0x27a70320  addiu       $a3, $sp, 0x320
    ctx->pc = 0x2204c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_2204cc:
    // 0x2204cc: 0x27a802d0  addiu       $t0, $sp, 0x2D0
    ctx->pc = 0x2204ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_2204d0:
    // 0x2204d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2204d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2204d4:
    // 0x2204d4: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x2204d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_2204d8:
    // 0x2204d8: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x2204d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2204dc:
    // 0x2204dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2204dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2204e0:
    // 0x2204e0: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x2204e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_2204e4:
    // 0x2204e4: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x2204e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2204e8:
    // 0x2204e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2204e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2204ec:
    // 0x2204ec: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x2204ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_2204f0:
    // 0x2204f0: 0xc560000c  lwc1        $f0, 0xC($t3)
    ctx->pc = 0x2204f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2204f4:
    // 0x2204f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2204f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2204f8:
    // 0x2204f8: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x2204f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_2204fc:
    // 0x2204fc: 0xc7a600c8  lwc1        $f6, 0xC8($sp)
    ctx->pc = 0x2204fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_220500:
    // 0x220500: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x220500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_220504:
    // 0x220504: 0xc5430008  lwc1        $f3, 0x8($t2)
    ctx->pc = 0x220504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_220508:
    // 0x220508: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x220508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22050c:
    // 0x22050c: 0x4606101a  mula.s      $f2, $f6
    ctx->pc = 0x22050cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_220510:
    // 0x220510: 0xc5450000  lwc1        $f5, 0x0($t2)
    ctx->pc = 0x220510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_220514:
    // 0x220514: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x220514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_220518:
    // 0x220518: 0x4601181d  msub.s      $f0, $f3, $f1
    ctx->pc = 0x220518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_22051c:
    // 0x22051c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x22051cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_220520:
    // 0x220520: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x220520u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_220524:
    // 0x220524: 0x4606281d  msub.s      $f0, $f5, $f6
    ctx->pc = 0x220524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
label_220528:
    // 0x220528: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x220528u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_22052c:
    // 0x22052c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x22052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_220530:
    // 0x220530: 0x4604101d  msub.s      $f0, $f2, $f4
    ctx->pc = 0x220530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_220534:
    // 0x220534: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x220534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_220538:
    // 0x220538: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x220538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_22053c:
    // 0x22053c: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x22053cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_220540:
    // 0x220540: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x220540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_220544:
    // 0x220544: 0x320f809  jalr        $t9
label_220548:
    if (ctx->pc == 0x220548u) {
        ctx->pc = 0x220548u;
            // 0x220548: 0x27a90340  addiu       $t1, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = 0x22054Cu;
        goto label_22054c;
    }
    ctx->pc = 0x220544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22054Cu);
        ctx->pc = 0x220548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220544u;
            // 0x220548: 0x27a90340  addiu       $t1, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22054Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22054Cu; }
            if (ctx->pc != 0x22054Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22054Cu;
label_22054c:
    // 0x22054c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x22054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_220550:
    // 0x220550: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x220550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_220554:
    // 0x220554: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x220554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_220558:
    // 0x220558: 0xc084a82  jal         func_212A08
label_22055c:
    if (ctx->pc == 0x22055Cu) {
        ctx->pc = 0x22055Cu;
            // 0x22055c: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x220560u;
        goto label_220560;
    }
    ctx->pc = 0x220558u;
    SET_GPR_U32(ctx, 31, 0x220560u);
    ctx->pc = 0x22055Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220558u;
            // 0x22055c: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212A08u;
    if (runtime->hasFunction(0x212A08u)) {
        auto targetFn = runtime->lookupFunction(0x212A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220560u; }
        if (ctx->pc != 0x220560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212A08_0x212a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220560u; }
        if (ctx->pc != 0x220560u) { return; }
    }
    ctx->pc = 0x220560u;
label_220560:
    // 0x220560: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x220560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_220564:
    // 0x220564: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x220564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_220568:
    // 0x220568: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x220568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_22056c:
    // 0x22056c: 0xc084b5c  jal         func_212D70
label_220570:
    if (ctx->pc == 0x220570u) {
        ctx->pc = 0x220570u;
            // 0x220570: 0x27a70340  addiu       $a3, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = 0x220574u;
        goto label_220574;
    }
    ctx->pc = 0x22056Cu;
    SET_GPR_U32(ctx, 31, 0x220574u);
    ctx->pc = 0x220570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22056Cu;
            // 0x220570: 0x27a70340  addiu       $a3, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212D70u;
    if (runtime->hasFunction(0x212D70u)) {
        auto targetFn = runtime->lookupFunction(0x212D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220574u; }
        if (ctx->pc != 0x220574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212D70_0x212d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220574u; }
        if (ctx->pc != 0x220574u) { return; }
    }
    ctx->pc = 0x220574u;
label_220574:
    // 0x220574: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x220574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_220578:
    // 0x220578: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x220578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22057c:
    // 0x22057c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x22057cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_220580:
    // 0x220580: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x220580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_220584:
    // 0x220584: 0x27a70320  addiu       $a3, $sp, 0x320
    ctx->pc = 0x220584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_220588:
    // 0x220588: 0x27a802d0  addiu       $t0, $sp, 0x2D0
    ctx->pc = 0x220588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_22058c:
    // 0x22058c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x22058cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_220590:
    // 0x220590: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x220590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_220594:
    // 0x220594: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x220594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_220598:
    // 0x220598: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x220598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_22059c:
    // 0x22059c: 0x320f809  jalr        $t9
label_2205a0:
    if (ctx->pc == 0x2205A0u) {
        ctx->pc = 0x2205A0u;
            // 0x2205a0: 0x27a90340  addiu       $t1, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = 0x2205A4u;
        goto label_2205a4;
    }
    ctx->pc = 0x22059Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2205A4u);
        ctx->pc = 0x2205A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22059Cu;
            // 0x2205a0: 0x27a90340  addiu       $t1, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2205A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2205A4u; }
            if (ctx->pc != 0x2205A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2205A4u;
label_2205a4:
    // 0x2205a4: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x2205a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2205a8:
    // 0x2205a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2205a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2205ac:
    // 0x2205ac: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x2205acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_2205b0:
    // 0x2205b0: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x2205b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_2205b4:
    // 0x2205b4: 0xc7a00324  lwc1        $f0, 0x324($sp)
    ctx->pc = 0x2205b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2205b8:
    // 0x2205b8: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x2205b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_2205bc:
    // 0x2205bc: 0xc7a00328  lwc1        $f0, 0x328($sp)
    ctx->pc = 0x2205bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2205c0:
    // 0x2205c0: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x2205c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_2205c4:
    // 0x2205c4: 0xc7a0032c  lwc1        $f0, 0x32C($sp)
    ctx->pc = 0x2205c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2205c8:
    // 0x2205c8: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x2205c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
label_2205cc:
    // 0x2205cc: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x2205ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2205d0:
    // 0x2205d0: 0xe6c00180  swc1        $f0, 0x180($s6)
    ctx->pc = 0x2205d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 384), bits); }
label_2205d4:
    // 0x2205d4: 0xc7a00324  lwc1        $f0, 0x324($sp)
    ctx->pc = 0x2205d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2205d8:
    // 0x2205d8: 0xe6c00184  swc1        $f0, 0x184($s6)
    ctx->pc = 0x2205d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 388), bits); }
label_2205dc:
    // 0x2205dc: 0xc7a00328  lwc1        $f0, 0x328($sp)
    ctx->pc = 0x2205dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2205e0:
    // 0x2205e0: 0xe6c00188  swc1        $f0, 0x188($s6)
    ctx->pc = 0x2205e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 392), bits); }
label_2205e4:
    // 0x2205e4: 0xc7a0032c  lwc1        $f0, 0x32C($sp)
    ctx->pc = 0x2205e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2205e8:
    // 0x2205e8: 0xe6c0018c  swc1        $f0, 0x18C($s6)
    ctx->pc = 0x2205e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 396), bits); }
label_2205ec:
    // 0x2205ec: 0xc7a00330  lwc1        $f0, 0x330($sp)
    ctx->pc = 0x2205ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2205f0:
    // 0x2205f0: 0xe6c00190  swc1        $f0, 0x190($s6)
    ctx->pc = 0x2205f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 400), bits); }
label_2205f4:
    // 0x2205f4: 0xc7a00334  lwc1        $f0, 0x334($sp)
    ctx->pc = 0x2205f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2205f8:
    // 0x2205f8: 0xe6c00194  swc1        $f0, 0x194($s6)
    ctx->pc = 0x2205f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 404), bits); }
label_2205fc:
    // 0x2205fc: 0xc7a00338  lwc1        $f0, 0x338($sp)
    ctx->pc = 0x2205fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220600:
    // 0x220600: 0xe6c00198  swc1        $f0, 0x198($s6)
    ctx->pc = 0x220600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 408), bits); }
label_220604:
    // 0x220604: 0xc7a0033c  lwc1        $f0, 0x33C($sp)
    ctx->pc = 0x220604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220608:
    // 0x220608: 0xe6c0019c  swc1        $f0, 0x19C($s6)
    ctx->pc = 0x220608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 412), bits); }
label_22060c:
    // 0x22060c: 0xc7a00340  lwc1        $f0, 0x340($sp)
    ctx->pc = 0x22060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220610:
    // 0x220610: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x220610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_220614:
    // 0x220614: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x220614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220618:
    // 0x220618: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x220618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_22061c:
    // 0x22061c: 0xc7a00348  lwc1        $f0, 0x348($sp)
    ctx->pc = 0x22061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220620:
    // 0x220620: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x220620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_220624:
    // 0x220624: 0xc7a0034c  lwc1        $f0, 0x34C($sp)
    ctx->pc = 0x220624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220628:
    // 0x220628: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x220628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_22062c:
    // 0x22062c: 0xc7a00340  lwc1        $f0, 0x340($sp)
    ctx->pc = 0x22062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220630:
    // 0x220630: 0xe6e00180  swc1        $f0, 0x180($s7)
    ctx->pc = 0x220630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 384), bits); }
label_220634:
    // 0x220634: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x220634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220638:
    // 0x220638: 0xe6e00184  swc1        $f0, 0x184($s7)
    ctx->pc = 0x220638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 388), bits); }
label_22063c:
    // 0x22063c: 0xc7a00348  lwc1        $f0, 0x348($sp)
    ctx->pc = 0x22063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220640:
    // 0x220640: 0xe6e00188  swc1        $f0, 0x188($s7)
    ctx->pc = 0x220640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 392), bits); }
label_220644:
    // 0x220644: 0xc7a0034c  lwc1        $f0, 0x34C($sp)
    ctx->pc = 0x220644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220648:
    // 0x220648: 0xe6e0018c  swc1        $f0, 0x18C($s7)
    ctx->pc = 0x220648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 396), bits); }
label_22064c:
    // 0x22064c: 0xc7a00350  lwc1        $f0, 0x350($sp)
    ctx->pc = 0x22064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220650:
    // 0x220650: 0xe6e00190  swc1        $f0, 0x190($s7)
    ctx->pc = 0x220650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 400), bits); }
label_220654:
    // 0x220654: 0xc7a00354  lwc1        $f0, 0x354($sp)
    ctx->pc = 0x220654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220658:
    // 0x220658: 0xe6e00194  swc1        $f0, 0x194($s7)
    ctx->pc = 0x220658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 404), bits); }
label_22065c:
    // 0x22065c: 0xc7a00358  lwc1        $f0, 0x358($sp)
    ctx->pc = 0x22065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220660:
    // 0x220660: 0xe6e00198  swc1        $f0, 0x198($s7)
    ctx->pc = 0x220660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 408), bits); }
label_220664:
    // 0x220664: 0xc7a0035c  lwc1        $f0, 0x35C($sp)
    ctx->pc = 0x220664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220668:
    // 0x220668: 0xe6e0019c  swc1        $f0, 0x19C($s7)
    ctx->pc = 0x220668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 412), bits); }
label_22066c:
    // 0x22066c: 0x82830001  lb          $v1, 0x1($s4)
    ctx->pc = 0x22066cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_220670:
    // 0x220670: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_220674:
    if (ctx->pc == 0x220674u) {
        ctx->pc = 0x220678u;
        goto label_220678;
    }
    ctx->pc = 0x220670u;
    {
        const bool branch_taken_0x220670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x220670) {
            ctx->pc = 0x2206A0u;
            goto label_2206a0;
        }
    }
    ctx->pc = 0x220678u;
label_220678:
    // 0x220678: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x220678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22067c:
    // 0x22067c: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x22067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_220680:
    // 0x220680: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x220680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220684:
    // 0x220684: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x220684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_220688:
    // 0x220688: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x220688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22068c:
    // 0x22068c: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x22068cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_220690:
    // 0x220690: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x220690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220694:
    // 0x220694: 0x1000001c  b           . + 4 + (0x1C << 2)
label_220698:
    if (ctx->pc == 0x220698u) {
        ctx->pc = 0x220698u;
            // 0x220698: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->pc = 0x22069Cu;
        goto label_22069c;
    }
    ctx->pc = 0x220694u;
    {
        const bool branch_taken_0x220694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220694u;
            // 0x220698: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220694) {
            ctx->pc = 0x220708u;
            goto label_220708;
        }
    }
    ctx->pc = 0x22069Cu;
label_22069c:
    // 0x22069c: 0x0  nop
    ctx->pc = 0x22069cu;
    // NOP
label_2206a0:
    // 0x2206a0: 0xc4840014  lwc1        $f4, 0x14($a0)
    ctx->pc = 0x2206a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2206a4:
    // 0x2206a4: 0xc6800060  lwc1        $f0, 0x60($s4)
    ctx->pc = 0x2206a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2206a8:
    // 0x2206a8: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x2206a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2206ac:
    // 0x2206ac: 0xc6810050  lwc1        $f1, 0x50($s4)
    ctx->pc = 0x2206acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2206b0:
    // 0x2206b0: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2206b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2206b4:
    // 0x2206b4: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x2206b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2206b8:
    // 0x2206b8: 0xc6820070  lwc1        $f2, 0x70($s4)
    ctx->pc = 0x2206b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2206bc:
    // 0x2206bc: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2206bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_2206c0:
    // 0x2206c0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2206c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2206c4:
    // 0x2206c4: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x2206c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_2206c8:
    // 0x2206c8: 0xc6800064  lwc1        $f0, 0x64($s4)
    ctx->pc = 0x2206c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2206cc:
    // 0x2206cc: 0xc6810054  lwc1        $f1, 0x54($s4)
    ctx->pc = 0x2206ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2206d0:
    // 0x2206d0: 0xc6820074  lwc1        $f2, 0x74($s4)
    ctx->pc = 0x2206d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2206d4:
    // 0x2206d4: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2206d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2206d8:
    // 0x2206d8: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2206d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_2206dc:
    // 0x2206dc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2206dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2206e0:
    // 0x2206e0: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x2206e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_2206e4:
    // 0x2206e4: 0xc6800068  lwc1        $f0, 0x68($s4)
    ctx->pc = 0x2206e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2206e8:
    // 0x2206e8: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x2206e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2206ec:
    // 0x2206ec: 0xc6820078  lwc1        $f2, 0x78($s4)
    ctx->pc = 0x2206ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2206f0:
    // 0x2206f0: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2206f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2206f4:
    // 0x2206f4: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2206f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_2206f8:
    // 0x2206f8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2206f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2206fc:
    // 0x2206fc: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x2206fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_220700:
    // 0x220700: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x220700u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_220704:
    // 0x220704: 0x0  nop
    ctx->pc = 0x220704u;
    // NOP
label_220708:
    // 0x220708: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x220708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_22070c:
    // 0x22070c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x22070cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_220710:
    // 0x220710: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x220710u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_220714:
    // 0x220714: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
label_220718:
    if (ctx->pc == 0x220718u) {
        ctx->pc = 0x220718u;
            // 0x220718: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x22071Cu;
        goto label_22071c;
    }
    ctx->pc = 0x220714u;
    {
        const bool branch_taken_0x220714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220714u;
            // 0x220718: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220714) {
            ctx->pc = 0x22066Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22066c;
        }
    }
    ctx->pc = 0x22071Cu;
label_22071c:
    // 0x22071c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x22071cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_220720:
    // 0x220720: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x220720u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_220724:
    // 0x220724: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x220724u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_220728:
    // 0x220728: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x220728u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22072c:
    // 0x22072c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22072cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_220730:
    // 0x220730: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x220730u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_220734:
    // 0x220734: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x220734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_220738:
    // 0x220738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x220738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22073c:
    // 0x22073c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22073cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_220740:
    // 0x220740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x220740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_220744:
    // 0x220744: 0x3e00008  jr          $ra
label_220748:
    if (ctx->pc == 0x220748u) {
        ctx->pc = 0x220748u;
            // 0x220748: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x22074Cu;
        goto label_22074c;
    }
    ctx->pc = 0x220744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220744u;
            // 0x220748: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22074Cu;
label_22074c:
    // 0x22074c: 0x0  nop
    ctx->pc = 0x22074cu;
    // NOP
}
