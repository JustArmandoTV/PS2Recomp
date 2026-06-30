#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336150
// Address: 0x336150 - 0x336690
void sub_00336150_0x336150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336150_0x336150");
#endif

    switch (ctx->pc) {
        case 0x336150u: goto label_336150;
        case 0x336154u: goto label_336154;
        case 0x336158u: goto label_336158;
        case 0x33615cu: goto label_33615c;
        case 0x336160u: goto label_336160;
        case 0x336164u: goto label_336164;
        case 0x336168u: goto label_336168;
        case 0x33616cu: goto label_33616c;
        case 0x336170u: goto label_336170;
        case 0x336174u: goto label_336174;
        case 0x336178u: goto label_336178;
        case 0x33617cu: goto label_33617c;
        case 0x336180u: goto label_336180;
        case 0x336184u: goto label_336184;
        case 0x336188u: goto label_336188;
        case 0x33618cu: goto label_33618c;
        case 0x336190u: goto label_336190;
        case 0x336194u: goto label_336194;
        case 0x336198u: goto label_336198;
        case 0x33619cu: goto label_33619c;
        case 0x3361a0u: goto label_3361a0;
        case 0x3361a4u: goto label_3361a4;
        case 0x3361a8u: goto label_3361a8;
        case 0x3361acu: goto label_3361ac;
        case 0x3361b0u: goto label_3361b0;
        case 0x3361b4u: goto label_3361b4;
        case 0x3361b8u: goto label_3361b8;
        case 0x3361bcu: goto label_3361bc;
        case 0x3361c0u: goto label_3361c0;
        case 0x3361c4u: goto label_3361c4;
        case 0x3361c8u: goto label_3361c8;
        case 0x3361ccu: goto label_3361cc;
        case 0x3361d0u: goto label_3361d0;
        case 0x3361d4u: goto label_3361d4;
        case 0x3361d8u: goto label_3361d8;
        case 0x3361dcu: goto label_3361dc;
        case 0x3361e0u: goto label_3361e0;
        case 0x3361e4u: goto label_3361e4;
        case 0x3361e8u: goto label_3361e8;
        case 0x3361ecu: goto label_3361ec;
        case 0x3361f0u: goto label_3361f0;
        case 0x3361f4u: goto label_3361f4;
        case 0x3361f8u: goto label_3361f8;
        case 0x3361fcu: goto label_3361fc;
        case 0x336200u: goto label_336200;
        case 0x336204u: goto label_336204;
        case 0x336208u: goto label_336208;
        case 0x33620cu: goto label_33620c;
        case 0x336210u: goto label_336210;
        case 0x336214u: goto label_336214;
        case 0x336218u: goto label_336218;
        case 0x33621cu: goto label_33621c;
        case 0x336220u: goto label_336220;
        case 0x336224u: goto label_336224;
        case 0x336228u: goto label_336228;
        case 0x33622cu: goto label_33622c;
        case 0x336230u: goto label_336230;
        case 0x336234u: goto label_336234;
        case 0x336238u: goto label_336238;
        case 0x33623cu: goto label_33623c;
        case 0x336240u: goto label_336240;
        case 0x336244u: goto label_336244;
        case 0x336248u: goto label_336248;
        case 0x33624cu: goto label_33624c;
        case 0x336250u: goto label_336250;
        case 0x336254u: goto label_336254;
        case 0x336258u: goto label_336258;
        case 0x33625cu: goto label_33625c;
        case 0x336260u: goto label_336260;
        case 0x336264u: goto label_336264;
        case 0x336268u: goto label_336268;
        case 0x33626cu: goto label_33626c;
        case 0x336270u: goto label_336270;
        case 0x336274u: goto label_336274;
        case 0x336278u: goto label_336278;
        case 0x33627cu: goto label_33627c;
        case 0x336280u: goto label_336280;
        case 0x336284u: goto label_336284;
        case 0x336288u: goto label_336288;
        case 0x33628cu: goto label_33628c;
        case 0x336290u: goto label_336290;
        case 0x336294u: goto label_336294;
        case 0x336298u: goto label_336298;
        case 0x33629cu: goto label_33629c;
        case 0x3362a0u: goto label_3362a0;
        case 0x3362a4u: goto label_3362a4;
        case 0x3362a8u: goto label_3362a8;
        case 0x3362acu: goto label_3362ac;
        case 0x3362b0u: goto label_3362b0;
        case 0x3362b4u: goto label_3362b4;
        case 0x3362b8u: goto label_3362b8;
        case 0x3362bcu: goto label_3362bc;
        case 0x3362c0u: goto label_3362c0;
        case 0x3362c4u: goto label_3362c4;
        case 0x3362c8u: goto label_3362c8;
        case 0x3362ccu: goto label_3362cc;
        case 0x3362d0u: goto label_3362d0;
        case 0x3362d4u: goto label_3362d4;
        case 0x3362d8u: goto label_3362d8;
        case 0x3362dcu: goto label_3362dc;
        case 0x3362e0u: goto label_3362e0;
        case 0x3362e4u: goto label_3362e4;
        case 0x3362e8u: goto label_3362e8;
        case 0x3362ecu: goto label_3362ec;
        case 0x3362f0u: goto label_3362f0;
        case 0x3362f4u: goto label_3362f4;
        case 0x3362f8u: goto label_3362f8;
        case 0x3362fcu: goto label_3362fc;
        case 0x336300u: goto label_336300;
        case 0x336304u: goto label_336304;
        case 0x336308u: goto label_336308;
        case 0x33630cu: goto label_33630c;
        case 0x336310u: goto label_336310;
        case 0x336314u: goto label_336314;
        case 0x336318u: goto label_336318;
        case 0x33631cu: goto label_33631c;
        case 0x336320u: goto label_336320;
        case 0x336324u: goto label_336324;
        case 0x336328u: goto label_336328;
        case 0x33632cu: goto label_33632c;
        case 0x336330u: goto label_336330;
        case 0x336334u: goto label_336334;
        case 0x336338u: goto label_336338;
        case 0x33633cu: goto label_33633c;
        case 0x336340u: goto label_336340;
        case 0x336344u: goto label_336344;
        case 0x336348u: goto label_336348;
        case 0x33634cu: goto label_33634c;
        case 0x336350u: goto label_336350;
        case 0x336354u: goto label_336354;
        case 0x336358u: goto label_336358;
        case 0x33635cu: goto label_33635c;
        case 0x336360u: goto label_336360;
        case 0x336364u: goto label_336364;
        case 0x336368u: goto label_336368;
        case 0x33636cu: goto label_33636c;
        case 0x336370u: goto label_336370;
        case 0x336374u: goto label_336374;
        case 0x336378u: goto label_336378;
        case 0x33637cu: goto label_33637c;
        case 0x336380u: goto label_336380;
        case 0x336384u: goto label_336384;
        case 0x336388u: goto label_336388;
        case 0x33638cu: goto label_33638c;
        case 0x336390u: goto label_336390;
        case 0x336394u: goto label_336394;
        case 0x336398u: goto label_336398;
        case 0x33639cu: goto label_33639c;
        case 0x3363a0u: goto label_3363a0;
        case 0x3363a4u: goto label_3363a4;
        case 0x3363a8u: goto label_3363a8;
        case 0x3363acu: goto label_3363ac;
        case 0x3363b0u: goto label_3363b0;
        case 0x3363b4u: goto label_3363b4;
        case 0x3363b8u: goto label_3363b8;
        case 0x3363bcu: goto label_3363bc;
        case 0x3363c0u: goto label_3363c0;
        case 0x3363c4u: goto label_3363c4;
        case 0x3363c8u: goto label_3363c8;
        case 0x3363ccu: goto label_3363cc;
        case 0x3363d0u: goto label_3363d0;
        case 0x3363d4u: goto label_3363d4;
        case 0x3363d8u: goto label_3363d8;
        case 0x3363dcu: goto label_3363dc;
        case 0x3363e0u: goto label_3363e0;
        case 0x3363e4u: goto label_3363e4;
        case 0x3363e8u: goto label_3363e8;
        case 0x3363ecu: goto label_3363ec;
        case 0x3363f0u: goto label_3363f0;
        case 0x3363f4u: goto label_3363f4;
        case 0x3363f8u: goto label_3363f8;
        case 0x3363fcu: goto label_3363fc;
        case 0x336400u: goto label_336400;
        case 0x336404u: goto label_336404;
        case 0x336408u: goto label_336408;
        case 0x33640cu: goto label_33640c;
        case 0x336410u: goto label_336410;
        case 0x336414u: goto label_336414;
        case 0x336418u: goto label_336418;
        case 0x33641cu: goto label_33641c;
        case 0x336420u: goto label_336420;
        case 0x336424u: goto label_336424;
        case 0x336428u: goto label_336428;
        case 0x33642cu: goto label_33642c;
        case 0x336430u: goto label_336430;
        case 0x336434u: goto label_336434;
        case 0x336438u: goto label_336438;
        case 0x33643cu: goto label_33643c;
        case 0x336440u: goto label_336440;
        case 0x336444u: goto label_336444;
        case 0x336448u: goto label_336448;
        case 0x33644cu: goto label_33644c;
        case 0x336450u: goto label_336450;
        case 0x336454u: goto label_336454;
        case 0x336458u: goto label_336458;
        case 0x33645cu: goto label_33645c;
        case 0x336460u: goto label_336460;
        case 0x336464u: goto label_336464;
        case 0x336468u: goto label_336468;
        case 0x33646cu: goto label_33646c;
        case 0x336470u: goto label_336470;
        case 0x336474u: goto label_336474;
        case 0x336478u: goto label_336478;
        case 0x33647cu: goto label_33647c;
        case 0x336480u: goto label_336480;
        case 0x336484u: goto label_336484;
        case 0x336488u: goto label_336488;
        case 0x33648cu: goto label_33648c;
        case 0x336490u: goto label_336490;
        case 0x336494u: goto label_336494;
        case 0x336498u: goto label_336498;
        case 0x33649cu: goto label_33649c;
        case 0x3364a0u: goto label_3364a0;
        case 0x3364a4u: goto label_3364a4;
        case 0x3364a8u: goto label_3364a8;
        case 0x3364acu: goto label_3364ac;
        case 0x3364b0u: goto label_3364b0;
        case 0x3364b4u: goto label_3364b4;
        case 0x3364b8u: goto label_3364b8;
        case 0x3364bcu: goto label_3364bc;
        case 0x3364c0u: goto label_3364c0;
        case 0x3364c4u: goto label_3364c4;
        case 0x3364c8u: goto label_3364c8;
        case 0x3364ccu: goto label_3364cc;
        case 0x3364d0u: goto label_3364d0;
        case 0x3364d4u: goto label_3364d4;
        case 0x3364d8u: goto label_3364d8;
        case 0x3364dcu: goto label_3364dc;
        case 0x3364e0u: goto label_3364e0;
        case 0x3364e4u: goto label_3364e4;
        case 0x3364e8u: goto label_3364e8;
        case 0x3364ecu: goto label_3364ec;
        case 0x3364f0u: goto label_3364f0;
        case 0x3364f4u: goto label_3364f4;
        case 0x3364f8u: goto label_3364f8;
        case 0x3364fcu: goto label_3364fc;
        case 0x336500u: goto label_336500;
        case 0x336504u: goto label_336504;
        case 0x336508u: goto label_336508;
        case 0x33650cu: goto label_33650c;
        case 0x336510u: goto label_336510;
        case 0x336514u: goto label_336514;
        case 0x336518u: goto label_336518;
        case 0x33651cu: goto label_33651c;
        case 0x336520u: goto label_336520;
        case 0x336524u: goto label_336524;
        case 0x336528u: goto label_336528;
        case 0x33652cu: goto label_33652c;
        case 0x336530u: goto label_336530;
        case 0x336534u: goto label_336534;
        case 0x336538u: goto label_336538;
        case 0x33653cu: goto label_33653c;
        case 0x336540u: goto label_336540;
        case 0x336544u: goto label_336544;
        case 0x336548u: goto label_336548;
        case 0x33654cu: goto label_33654c;
        case 0x336550u: goto label_336550;
        case 0x336554u: goto label_336554;
        case 0x336558u: goto label_336558;
        case 0x33655cu: goto label_33655c;
        case 0x336560u: goto label_336560;
        case 0x336564u: goto label_336564;
        case 0x336568u: goto label_336568;
        case 0x33656cu: goto label_33656c;
        case 0x336570u: goto label_336570;
        case 0x336574u: goto label_336574;
        case 0x336578u: goto label_336578;
        case 0x33657cu: goto label_33657c;
        case 0x336580u: goto label_336580;
        case 0x336584u: goto label_336584;
        case 0x336588u: goto label_336588;
        case 0x33658cu: goto label_33658c;
        case 0x336590u: goto label_336590;
        case 0x336594u: goto label_336594;
        case 0x336598u: goto label_336598;
        case 0x33659cu: goto label_33659c;
        case 0x3365a0u: goto label_3365a0;
        case 0x3365a4u: goto label_3365a4;
        case 0x3365a8u: goto label_3365a8;
        case 0x3365acu: goto label_3365ac;
        case 0x3365b0u: goto label_3365b0;
        case 0x3365b4u: goto label_3365b4;
        case 0x3365b8u: goto label_3365b8;
        case 0x3365bcu: goto label_3365bc;
        case 0x3365c0u: goto label_3365c0;
        case 0x3365c4u: goto label_3365c4;
        case 0x3365c8u: goto label_3365c8;
        case 0x3365ccu: goto label_3365cc;
        case 0x3365d0u: goto label_3365d0;
        case 0x3365d4u: goto label_3365d4;
        case 0x3365d8u: goto label_3365d8;
        case 0x3365dcu: goto label_3365dc;
        case 0x3365e0u: goto label_3365e0;
        case 0x3365e4u: goto label_3365e4;
        case 0x3365e8u: goto label_3365e8;
        case 0x3365ecu: goto label_3365ec;
        case 0x3365f0u: goto label_3365f0;
        case 0x3365f4u: goto label_3365f4;
        case 0x3365f8u: goto label_3365f8;
        case 0x3365fcu: goto label_3365fc;
        case 0x336600u: goto label_336600;
        case 0x336604u: goto label_336604;
        case 0x336608u: goto label_336608;
        case 0x33660cu: goto label_33660c;
        case 0x336610u: goto label_336610;
        case 0x336614u: goto label_336614;
        case 0x336618u: goto label_336618;
        case 0x33661cu: goto label_33661c;
        case 0x336620u: goto label_336620;
        case 0x336624u: goto label_336624;
        case 0x336628u: goto label_336628;
        case 0x33662cu: goto label_33662c;
        case 0x336630u: goto label_336630;
        case 0x336634u: goto label_336634;
        case 0x336638u: goto label_336638;
        case 0x33663cu: goto label_33663c;
        case 0x336640u: goto label_336640;
        case 0x336644u: goto label_336644;
        case 0x336648u: goto label_336648;
        case 0x33664cu: goto label_33664c;
        case 0x336650u: goto label_336650;
        case 0x336654u: goto label_336654;
        case 0x336658u: goto label_336658;
        case 0x33665cu: goto label_33665c;
        case 0x336660u: goto label_336660;
        case 0x336664u: goto label_336664;
        case 0x336668u: goto label_336668;
        case 0x33666cu: goto label_33666c;
        case 0x336670u: goto label_336670;
        case 0x336674u: goto label_336674;
        case 0x336678u: goto label_336678;
        case 0x33667cu: goto label_33667c;
        case 0x336680u: goto label_336680;
        case 0x336684u: goto label_336684;
        case 0x336688u: goto label_336688;
        case 0x33668cu: goto label_33668c;
        default: break;
    }

    ctx->pc = 0x336150u;

label_336150:
    // 0x336150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_336154:
    // 0x336154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x336154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_336158:
    // 0x336158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33615c:
    // 0x33615c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33615cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_336160:
    // 0x336160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x336160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336164:
    // 0x336164: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_336168:
    if (ctx->pc == 0x336168u) {
        ctx->pc = 0x336168u;
            // 0x336168: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33616Cu;
        goto label_33616c;
    }
    ctx->pc = 0x336164u;
    {
        const bool branch_taken_0x336164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x336168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336164u;
            // 0x336168: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336164) {
            ctx->pc = 0x336298u;
            goto label_336298;
        }
    }
    ctx->pc = 0x33616Cu;
label_33616c:
    // 0x33616c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33616cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_336170:
    // 0x336170: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x336170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_336174:
    // 0x336174: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x336174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
label_336178:
    // 0x336178: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x336178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_33617c:
    // 0x33617c: 0x24424cb8  addiu       $v0, $v0, 0x4CB8
    ctx->pc = 0x33617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19640));
label_336180:
    // 0x336180: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x336180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_336184:
    // 0x336184: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x336184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_336188:
    // 0x336188: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x336188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_33618c:
    // 0x33618c: 0xc0407c0  jal         func_101F00
label_336190:
    if (ctx->pc == 0x336190u) {
        ctx->pc = 0x336190u;
            // 0x336190: 0x24a562b0  addiu       $a1, $a1, 0x62B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25264));
        ctx->pc = 0x336194u;
        goto label_336194;
    }
    ctx->pc = 0x33618Cu;
    SET_GPR_U32(ctx, 31, 0x336194u);
    ctx->pc = 0x336190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33618Cu;
            // 0x336190: 0x24a562b0  addiu       $a1, $a1, 0x62B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336194u; }
        if (ctx->pc != 0x336194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336194u; }
        if (ctx->pc != 0x336194u) { return; }
    }
    ctx->pc = 0x336194u;
label_336194:
    // 0x336194: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x336194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_336198:
    // 0x336198: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_33619c:
    if (ctx->pc == 0x33619Cu) {
        ctx->pc = 0x33619Cu;
            // 0x33619c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3361A0u;
        goto label_3361a0;
    }
    ctx->pc = 0x336198u;
    {
        const bool branch_taken_0x336198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336198) {
            ctx->pc = 0x33619Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336198u;
            // 0x33619c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3361ACu;
            goto label_3361ac;
        }
    }
    ctx->pc = 0x3361A0u;
label_3361a0:
    // 0x3361a0: 0xc07507c  jal         func_1D41F0
label_3361a4:
    if (ctx->pc == 0x3361A4u) {
        ctx->pc = 0x3361A4u;
            // 0x3361a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3361A8u;
        goto label_3361a8;
    }
    ctx->pc = 0x3361A0u;
    SET_GPR_U32(ctx, 31, 0x3361A8u);
    ctx->pc = 0x3361A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3361A0u;
            // 0x3361a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3361A8u; }
        if (ctx->pc != 0x3361A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3361A8u; }
        if (ctx->pc != 0x3361A8u) { return; }
    }
    ctx->pc = 0x3361A8u;
label_3361a8:
    // 0x3361a8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3361a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3361ac:
    // 0x3361ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3361b0:
    if (ctx->pc == 0x3361B0u) {
        ctx->pc = 0x3361B0u;
            // 0x3361b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3361B4u;
        goto label_3361b4;
    }
    ctx->pc = 0x3361ACu;
    {
        const bool branch_taken_0x3361ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3361ac) {
            ctx->pc = 0x3361B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3361ACu;
            // 0x3361b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3361DCu;
            goto label_3361dc;
        }
    }
    ctx->pc = 0x3361B4u;
label_3361b4:
    // 0x3361b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3361b8:
    if (ctx->pc == 0x3361B8u) {
        ctx->pc = 0x3361BCu;
        goto label_3361bc;
    }
    ctx->pc = 0x3361B4u;
    {
        const bool branch_taken_0x3361b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3361b4) {
            ctx->pc = 0x3361D8u;
            goto label_3361d8;
        }
    }
    ctx->pc = 0x3361BCu;
label_3361bc:
    // 0x3361bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3361c0:
    if (ctx->pc == 0x3361C0u) {
        ctx->pc = 0x3361C4u;
        goto label_3361c4;
    }
    ctx->pc = 0x3361BCu;
    {
        const bool branch_taken_0x3361bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3361bc) {
            ctx->pc = 0x3361D8u;
            goto label_3361d8;
        }
    }
    ctx->pc = 0x3361C4u;
label_3361c4:
    // 0x3361c4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3361c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3361c8:
    // 0x3361c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3361cc:
    if (ctx->pc == 0x3361CCu) {
        ctx->pc = 0x3361D0u;
        goto label_3361d0;
    }
    ctx->pc = 0x3361C8u;
    {
        const bool branch_taken_0x3361c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3361c8) {
            ctx->pc = 0x3361D8u;
            goto label_3361d8;
        }
    }
    ctx->pc = 0x3361D0u;
label_3361d0:
    // 0x3361d0: 0xc0400a8  jal         func_1002A0
label_3361d4:
    if (ctx->pc == 0x3361D4u) {
        ctx->pc = 0x3361D8u;
        goto label_3361d8;
    }
    ctx->pc = 0x3361D0u;
    SET_GPR_U32(ctx, 31, 0x3361D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3361D8u; }
        if (ctx->pc != 0x3361D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3361D8u; }
        if (ctx->pc != 0x3361D8u) { return; }
    }
    ctx->pc = 0x3361D8u;
label_3361d8:
    // 0x3361d8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3361d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3361dc:
    // 0x3361dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3361e0:
    if (ctx->pc == 0x3361E0u) {
        ctx->pc = 0x3361E0u;
            // 0x3361e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3361E4u;
        goto label_3361e4;
    }
    ctx->pc = 0x3361DCu;
    {
        const bool branch_taken_0x3361dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3361dc) {
            ctx->pc = 0x3361E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3361DCu;
            // 0x3361e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33620Cu;
            goto label_33620c;
        }
    }
    ctx->pc = 0x3361E4u;
label_3361e4:
    // 0x3361e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3361e8:
    if (ctx->pc == 0x3361E8u) {
        ctx->pc = 0x3361ECu;
        goto label_3361ec;
    }
    ctx->pc = 0x3361E4u;
    {
        const bool branch_taken_0x3361e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3361e4) {
            ctx->pc = 0x336208u;
            goto label_336208;
        }
    }
    ctx->pc = 0x3361ECu;
label_3361ec:
    // 0x3361ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3361f0:
    if (ctx->pc == 0x3361F0u) {
        ctx->pc = 0x3361F4u;
        goto label_3361f4;
    }
    ctx->pc = 0x3361ECu;
    {
        const bool branch_taken_0x3361ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3361ec) {
            ctx->pc = 0x336208u;
            goto label_336208;
        }
    }
    ctx->pc = 0x3361F4u;
label_3361f4:
    // 0x3361f4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3361f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3361f8:
    // 0x3361f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3361fc:
    if (ctx->pc == 0x3361FCu) {
        ctx->pc = 0x336200u;
        goto label_336200;
    }
    ctx->pc = 0x3361F8u;
    {
        const bool branch_taken_0x3361f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3361f8) {
            ctx->pc = 0x336208u;
            goto label_336208;
        }
    }
    ctx->pc = 0x336200u;
label_336200:
    // 0x336200: 0xc0400a8  jal         func_1002A0
label_336204:
    if (ctx->pc == 0x336204u) {
        ctx->pc = 0x336208u;
        goto label_336208;
    }
    ctx->pc = 0x336200u;
    SET_GPR_U32(ctx, 31, 0x336208u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336208u; }
        if (ctx->pc != 0x336208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336208u; }
        if (ctx->pc != 0x336208u) { return; }
    }
    ctx->pc = 0x336208u;
label_336208:
    // 0x336208: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x336208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_33620c:
    // 0x33620c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_336210:
    if (ctx->pc == 0x336210u) {
        ctx->pc = 0x336214u;
        goto label_336214;
    }
    ctx->pc = 0x33620Cu;
    {
        const bool branch_taken_0x33620c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33620c) {
            ctx->pc = 0x336228u;
            goto label_336228;
        }
    }
    ctx->pc = 0x336214u;
label_336214:
    // 0x336214: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x336214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_336218:
    // 0x336218: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x336218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33621c:
    // 0x33621c: 0x24634c68  addiu       $v1, $v1, 0x4C68
    ctx->pc = 0x33621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19560));
label_336220:
    // 0x336220: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x336220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_336224:
    // 0x336224: 0xac403e68  sw          $zero, 0x3E68($v0)
    ctx->pc = 0x336224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15976), GPR_U32(ctx, 0));
label_336228:
    // 0x336228: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_33622c:
    if (ctx->pc == 0x33622Cu) {
        ctx->pc = 0x33622Cu;
            // 0x33622c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x336230u;
        goto label_336230;
    }
    ctx->pc = 0x336228u;
    {
        const bool branch_taken_0x336228 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x336228) {
            ctx->pc = 0x33622Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336228u;
            // 0x33622c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336284u;
            goto label_336284;
        }
    }
    ctx->pc = 0x336230u;
label_336230:
    // 0x336230: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x336230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_336234:
    // 0x336234: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x336234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_336238:
    // 0x336238: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x336238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_33623c:
    // 0x33623c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x33623cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_336240:
    // 0x336240: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_336244:
    if (ctx->pc == 0x336244u) {
        ctx->pc = 0x336244u;
            // 0x336244: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x336248u;
        goto label_336248;
    }
    ctx->pc = 0x336240u;
    {
        const bool branch_taken_0x336240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336240) {
            ctx->pc = 0x336244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336240u;
            // 0x336244: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33625Cu;
            goto label_33625c;
        }
    }
    ctx->pc = 0x336248u;
label_336248:
    // 0x336248: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x336248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33624c:
    // 0x33624c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x33624cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_336250:
    // 0x336250: 0x320f809  jalr        $t9
label_336254:
    if (ctx->pc == 0x336254u) {
        ctx->pc = 0x336254u;
            // 0x336254: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x336258u;
        goto label_336258;
    }
    ctx->pc = 0x336250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336258u);
        ctx->pc = 0x336254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336250u;
            // 0x336254: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x336258u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x336258u; }
            if (ctx->pc != 0x336258u) { return; }
        }
        }
    }
    ctx->pc = 0x336258u;
label_336258:
    // 0x336258: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x336258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_33625c:
    // 0x33625c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_336260:
    if (ctx->pc == 0x336260u) {
        ctx->pc = 0x336260u;
            // 0x336260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336264u;
        goto label_336264;
    }
    ctx->pc = 0x33625Cu;
    {
        const bool branch_taken_0x33625c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33625c) {
            ctx->pc = 0x336260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33625Cu;
            // 0x336260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336278u;
            goto label_336278;
        }
    }
    ctx->pc = 0x336264u;
label_336264:
    // 0x336264: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x336264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_336268:
    // 0x336268: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x336268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_33626c:
    // 0x33626c: 0x320f809  jalr        $t9
label_336270:
    if (ctx->pc == 0x336270u) {
        ctx->pc = 0x336270u;
            // 0x336270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x336274u;
        goto label_336274;
    }
    ctx->pc = 0x33626Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336274u);
        ctx->pc = 0x336270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33626Cu;
            // 0x336270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x336274u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x336274u; }
            if (ctx->pc != 0x336274u) { return; }
        }
        }
    }
    ctx->pc = 0x336274u;
label_336274:
    // 0x336274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x336274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_336278:
    // 0x336278: 0xc075bf8  jal         func_1D6FE0
label_33627c:
    if (ctx->pc == 0x33627Cu) {
        ctx->pc = 0x33627Cu;
            // 0x33627c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336280u;
        goto label_336280;
    }
    ctx->pc = 0x336278u;
    SET_GPR_U32(ctx, 31, 0x336280u);
    ctx->pc = 0x33627Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336278u;
            // 0x33627c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336280u; }
        if (ctx->pc != 0x336280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336280u; }
        if (ctx->pc != 0x336280u) { return; }
    }
    ctx->pc = 0x336280u;
label_336280:
    // 0x336280: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x336280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_336284:
    // 0x336284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x336284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_336288:
    // 0x336288: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33628c:
    if (ctx->pc == 0x33628Cu) {
        ctx->pc = 0x33628Cu;
            // 0x33628c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336290u;
        goto label_336290;
    }
    ctx->pc = 0x336288u;
    {
        const bool branch_taken_0x336288 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x336288) {
            ctx->pc = 0x33628Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336288u;
            // 0x33628c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33629Cu;
            goto label_33629c;
        }
    }
    ctx->pc = 0x336290u;
label_336290:
    // 0x336290: 0xc0400a8  jal         func_1002A0
label_336294:
    if (ctx->pc == 0x336294u) {
        ctx->pc = 0x336294u;
            // 0x336294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336298u;
        goto label_336298;
    }
    ctx->pc = 0x336290u;
    SET_GPR_U32(ctx, 31, 0x336298u);
    ctx->pc = 0x336294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336290u;
            // 0x336294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336298u; }
        if (ctx->pc != 0x336298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336298u; }
        if (ctx->pc != 0x336298u) { return; }
    }
    ctx->pc = 0x336298u;
label_336298:
    // 0x336298: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x336298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33629c:
    // 0x33629c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33629cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3362a0:
    // 0x3362a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3362a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3362a4:
    // 0x3362a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3362a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3362a8:
    // 0x3362a8: 0x3e00008  jr          $ra
label_3362ac:
    if (ctx->pc == 0x3362ACu) {
        ctx->pc = 0x3362ACu;
            // 0x3362ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3362B0u;
        goto label_3362b0;
    }
    ctx->pc = 0x3362A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3362ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3362A8u;
            // 0x3362ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3362B0u;
label_3362b0:
    // 0x3362b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3362b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3362b4:
    // 0x3362b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3362b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3362b8:
    // 0x3362b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3362b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3362bc:
    // 0x3362bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3362bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3362c0:
    // 0x3362c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3362c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3362c4:
    // 0x3362c4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_3362c8:
    if (ctx->pc == 0x3362C8u) {
        ctx->pc = 0x3362C8u;
            // 0x3362c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3362CCu;
        goto label_3362cc;
    }
    ctx->pc = 0x3362C4u;
    {
        const bool branch_taken_0x3362c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3362C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3362C4u;
            // 0x3362c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362c4) {
            ctx->pc = 0x33638Cu;
            goto label_33638c;
        }
    }
    ctx->pc = 0x3362CCu;
label_3362cc:
    // 0x3362cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3362ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3362d0:
    // 0x3362d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3362d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3362d4:
    // 0x3362d4: 0x24634d20  addiu       $v1, $v1, 0x4D20
    ctx->pc = 0x3362d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19744));
label_3362d8:
    // 0x3362d8: 0x24424d60  addiu       $v0, $v0, 0x4D60
    ctx->pc = 0x3362d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19808));
label_3362dc:
    // 0x3362dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3362dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3362e0:
    // 0x3362e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3362e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3362e4:
    // 0x3362e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3362e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3362e8:
    // 0x3362e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3362e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3362ec:
    // 0x3362ec: 0x320f809  jalr        $t9
label_3362f0:
    if (ctx->pc == 0x3362F0u) {
        ctx->pc = 0x3362F4u;
        goto label_3362f4;
    }
    ctx->pc = 0x3362ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3362F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3362F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3362F4u; }
            if (ctx->pc != 0x3362F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3362F4u;
label_3362f4:
    // 0x3362f4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_3362f8:
    if (ctx->pc == 0x3362F8u) {
        ctx->pc = 0x3362F8u;
            // 0x3362f8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3362FCu;
        goto label_3362fc;
    }
    ctx->pc = 0x3362F4u;
    {
        const bool branch_taken_0x3362f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3362f4) {
            ctx->pc = 0x3362F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3362F4u;
            // 0x3362f8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336378u;
            goto label_336378;
        }
    }
    ctx->pc = 0x3362FCu;
label_3362fc:
    // 0x3362fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3362fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_336300:
    // 0x336300: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x336300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_336304:
    // 0x336304: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x336304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_336308:
    // 0x336308: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x336308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_33630c:
    // 0x33630c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33630cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_336310:
    // 0x336310: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x336310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_336314:
    // 0x336314: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x336314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_336318:
    // 0x336318: 0xc0aecc4  jal         func_2BB310
label_33631c:
    if (ctx->pc == 0x33631Cu) {
        ctx->pc = 0x33631Cu;
            // 0x33631c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x336320u;
        goto label_336320;
    }
    ctx->pc = 0x336318u;
    SET_GPR_U32(ctx, 31, 0x336320u);
    ctx->pc = 0x33631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336318u;
            // 0x33631c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336320u; }
        if (ctx->pc != 0x336320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336320u; }
        if (ctx->pc != 0x336320u) { return; }
    }
    ctx->pc = 0x336320u;
label_336320:
    // 0x336320: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x336320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_336324:
    // 0x336324: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x336324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_336328:
    // 0x336328: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_33632c:
    if (ctx->pc == 0x33632Cu) {
        ctx->pc = 0x33632Cu;
            // 0x33632c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x336330u;
        goto label_336330;
    }
    ctx->pc = 0x336328u;
    {
        const bool branch_taken_0x336328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336328) {
            ctx->pc = 0x33632Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336328u;
            // 0x33632c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336344u;
            goto label_336344;
        }
    }
    ctx->pc = 0x336330u;
label_336330:
    // 0x336330: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x336330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_336334:
    // 0x336334: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x336334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_336338:
    // 0x336338: 0x320f809  jalr        $t9
label_33633c:
    if (ctx->pc == 0x33633Cu) {
        ctx->pc = 0x33633Cu;
            // 0x33633c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x336340u;
        goto label_336340;
    }
    ctx->pc = 0x336338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336340u);
        ctx->pc = 0x33633Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336338u;
            // 0x33633c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x336340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x336340u; }
            if (ctx->pc != 0x336340u) { return; }
        }
        }
    }
    ctx->pc = 0x336340u;
label_336340:
    // 0x336340: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x336340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_336344:
    // 0x336344: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x336344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_336348:
    // 0x336348: 0xc0aec9c  jal         func_2BB270
label_33634c:
    if (ctx->pc == 0x33634Cu) {
        ctx->pc = 0x33634Cu;
            // 0x33634c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x336350u;
        goto label_336350;
    }
    ctx->pc = 0x336348u;
    SET_GPR_U32(ctx, 31, 0x336350u);
    ctx->pc = 0x33634Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336348u;
            // 0x33634c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336350u; }
        if (ctx->pc != 0x336350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336350u; }
        if (ctx->pc != 0x336350u) { return; }
    }
    ctx->pc = 0x336350u;
label_336350:
    // 0x336350: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x336350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_336354:
    // 0x336354: 0xc0aec88  jal         func_2BB220
label_336358:
    if (ctx->pc == 0x336358u) {
        ctx->pc = 0x336358u;
            // 0x336358: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x33635Cu;
        goto label_33635c;
    }
    ctx->pc = 0x336354u;
    SET_GPR_U32(ctx, 31, 0x33635Cu);
    ctx->pc = 0x336358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336354u;
            // 0x336358: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33635Cu; }
        if (ctx->pc != 0x33635Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33635Cu; }
        if (ctx->pc != 0x33635Cu) { return; }
    }
    ctx->pc = 0x33635Cu;
label_33635c:
    // 0x33635c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x33635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_336360:
    // 0x336360: 0xc0aec0c  jal         func_2BB030
label_336364:
    if (ctx->pc == 0x336364u) {
        ctx->pc = 0x336364u;
            // 0x336364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336368u;
        goto label_336368;
    }
    ctx->pc = 0x336360u;
    SET_GPR_U32(ctx, 31, 0x336368u);
    ctx->pc = 0x336364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336360u;
            // 0x336364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336368u; }
        if (ctx->pc != 0x336368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336368u; }
        if (ctx->pc != 0x336368u) { return; }
    }
    ctx->pc = 0x336368u;
label_336368:
    // 0x336368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33636c:
    // 0x33636c: 0xc0aeaa8  jal         func_2BAAA0
label_336370:
    if (ctx->pc == 0x336370u) {
        ctx->pc = 0x336370u;
            // 0x336370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336374u;
        goto label_336374;
    }
    ctx->pc = 0x33636Cu;
    SET_GPR_U32(ctx, 31, 0x336374u);
    ctx->pc = 0x336370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33636Cu;
            // 0x336370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336374u; }
        if (ctx->pc != 0x336374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336374u; }
        if (ctx->pc != 0x336374u) { return; }
    }
    ctx->pc = 0x336374u;
label_336374:
    // 0x336374: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x336374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_336378:
    // 0x336378: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x336378u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33637c:
    // 0x33637c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_336380:
    if (ctx->pc == 0x336380u) {
        ctx->pc = 0x336380u;
            // 0x336380: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336384u;
        goto label_336384;
    }
    ctx->pc = 0x33637Cu;
    {
        const bool branch_taken_0x33637c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33637c) {
            ctx->pc = 0x336380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33637Cu;
            // 0x336380: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336390u;
            goto label_336390;
        }
    }
    ctx->pc = 0x336384u;
label_336384:
    // 0x336384: 0xc0400a8  jal         func_1002A0
label_336388:
    if (ctx->pc == 0x336388u) {
        ctx->pc = 0x336388u;
            // 0x336388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33638Cu;
        goto label_33638c;
    }
    ctx->pc = 0x336384u;
    SET_GPR_U32(ctx, 31, 0x33638Cu);
    ctx->pc = 0x336388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336384u;
            // 0x336388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33638Cu; }
        if (ctx->pc != 0x33638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33638Cu; }
        if (ctx->pc != 0x33638Cu) { return; }
    }
    ctx->pc = 0x33638Cu;
label_33638c:
    // 0x33638c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33638cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_336390:
    // 0x336390: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x336390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_336394:
    // 0x336394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_336398:
    // 0x336398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33639c:
    // 0x33639c: 0x3e00008  jr          $ra
label_3363a0:
    if (ctx->pc == 0x3363A0u) {
        ctx->pc = 0x3363A0u;
            // 0x3363a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3363A4u;
        goto label_3363a4;
    }
    ctx->pc = 0x33639Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3363A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33639Cu;
            // 0x3363a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3363A4u;
label_3363a4:
    // 0x3363a4: 0x0  nop
    ctx->pc = 0x3363a4u;
    // NOP
label_3363a8:
    // 0x3363a8: 0x0  nop
    ctx->pc = 0x3363a8u;
    // NOP
label_3363ac:
    // 0x3363ac: 0x0  nop
    ctx->pc = 0x3363acu;
    // NOP
label_3363b0:
    // 0x3363b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3363b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3363b4:
    // 0x3363b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3363b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3363b8:
    // 0x3363b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3363b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3363bc:
    // 0x3363bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3363bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3363c0:
    // 0x3363c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3363c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3363c4:
    // 0x3363c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3363c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3363c8:
    // 0x3363c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3363c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3363cc:
    // 0x3363cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3363ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3363d0:
    // 0x3363d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3363d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3363d4:
    // 0x3363d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3363d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3363d8:
    // 0x3363d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3363d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3363dc:
    // 0x3363dc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3363dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3363e0:
    // 0x3363e0: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_3363e4:
    if (ctx->pc == 0x3363E4u) {
        ctx->pc = 0x3363E4u;
            // 0x3363e4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3363E8u;
        goto label_3363e8;
    }
    ctx->pc = 0x3363E0u;
    {
        const bool branch_taken_0x3363e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3363E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3363E0u;
            // 0x3363e4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3363e0) {
            ctx->pc = 0x336430u;
            goto label_336430;
        }
    }
    ctx->pc = 0x3363E8u;
label_3363e8:
    // 0x3363e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3363e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3363ec:
    // 0x3363ec: 0x50a3004f  beql        $a1, $v1, . + 4 + (0x4F << 2)
label_3363f0:
    if (ctx->pc == 0x3363F0u) {
        ctx->pc = 0x3363F0u;
            // 0x3363f0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x3363F4u;
        goto label_3363f4;
    }
    ctx->pc = 0x3363ECu;
    {
        const bool branch_taken_0x3363ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3363ec) {
            ctx->pc = 0x3363F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3363ECu;
            // 0x3363f0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33652Cu;
            goto label_33652c;
        }
    }
    ctx->pc = 0x3363F4u;
label_3363f4:
    // 0x3363f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3363f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3363f8:
    // 0x3363f8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3363fc:
    if (ctx->pc == 0x3363FCu) {
        ctx->pc = 0x336400u;
        goto label_336400;
    }
    ctx->pc = 0x3363F8u;
    {
        const bool branch_taken_0x3363f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3363f8) {
            ctx->pc = 0x336408u;
            goto label_336408;
        }
    }
    ctx->pc = 0x336400u;
label_336400:
    // 0x336400: 0x10000049  b           . + 4 + (0x49 << 2)
label_336404:
    if (ctx->pc == 0x336404u) {
        ctx->pc = 0x336408u;
        goto label_336408;
    }
    ctx->pc = 0x336400u;
    {
        const bool branch_taken_0x336400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336400) {
            ctx->pc = 0x336528u;
            goto label_336528;
        }
    }
    ctx->pc = 0x336408u;
label_336408:
    // 0x336408: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x336408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33640c:
    // 0x33640c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33640cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_336410:
    // 0x336410: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x336410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_336414:
    // 0x336414: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x336414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_336418:
    // 0x336418: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x336418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_33641c:
    // 0x33641c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x33641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_336420:
    // 0x336420: 0x320f809  jalr        $t9
label_336424:
    if (ctx->pc == 0x336424u) {
        ctx->pc = 0x336424u;
            // 0x336424: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x336428u;
        goto label_336428;
    }
    ctx->pc = 0x336420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336428u);
        ctx->pc = 0x336424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336420u;
            // 0x336424: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x336428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x336428u; }
            if (ctx->pc != 0x336428u) { return; }
        }
        }
    }
    ctx->pc = 0x336428u;
label_336428:
    // 0x336428: 0x1000003f  b           . + 4 + (0x3F << 2)
label_33642c:
    if (ctx->pc == 0x33642Cu) {
        ctx->pc = 0x336430u;
        goto label_336430;
    }
    ctx->pc = 0x336428u;
    {
        const bool branch_taken_0x336428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336428) {
            ctx->pc = 0x336528u;
            goto label_336528;
        }
    }
    ctx->pc = 0x336430u;
label_336430:
    // 0x336430: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x336430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_336434:
    // 0x336434: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_336438:
    if (ctx->pc == 0x336438u) {
        ctx->pc = 0x33643Cu;
        goto label_33643c;
    }
    ctx->pc = 0x336434u;
    {
        const bool branch_taken_0x336434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x336434) {
            ctx->pc = 0x336528u;
            goto label_336528;
        }
    }
    ctx->pc = 0x33643Cu;
label_33643c:
    // 0x33643c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x33643cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_336440:
    // 0x336440: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x336440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_336444:
    // 0x336444: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x336444u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_336448:
    // 0x336448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x336448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33644c:
    // 0x33644c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x33644cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_336450:
    // 0x336450: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x336450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_336454:
    // 0x336454: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x336454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_336458:
    // 0x336458: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x336458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_33645c:
    // 0x33645c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33645cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_336460:
    // 0x336460: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x336460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_336464:
    // 0x336464: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x336464u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_336468:
    // 0x336468: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x336468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_33646c:
    // 0x33646c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x33646cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_336470:
    // 0x336470: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x336470u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_336474:
    // 0x336474: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x336474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_336478:
    // 0x336478: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x336478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_33647c:
    // 0x33647c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x33647cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_336480:
    // 0x336480: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x336480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_336484:
    // 0x336484: 0x24b60010  addiu       $s6, $a1, 0x10
    ctx->pc = 0x336484u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_336488:
    // 0x336488: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x336488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_33648c:
    // 0x33648c: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x33648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_336490:
    // 0x336490: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x336490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_336494:
    // 0x336494: 0xc04e4a4  jal         func_139290
label_336498:
    if (ctx->pc == 0x336498u) {
        ctx->pc = 0x336498u;
            // 0x336498: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33649Cu;
        goto label_33649c;
    }
    ctx->pc = 0x336494u;
    SET_GPR_U32(ctx, 31, 0x33649Cu);
    ctx->pc = 0x336498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336494u;
            // 0x336498: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33649Cu; }
        if (ctx->pc != 0x33649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33649Cu; }
        if (ctx->pc != 0x33649Cu) { return; }
    }
    ctx->pc = 0x33649Cu;
label_33649c:
    // 0x33649c: 0xc054c40  jal         func_153100
label_3364a0:
    if (ctx->pc == 0x3364A0u) {
        ctx->pc = 0x3364A0u;
            // 0x3364a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3364A4u;
        goto label_3364a4;
    }
    ctx->pc = 0x33649Cu;
    SET_GPR_U32(ctx, 31, 0x3364A4u);
    ctx->pc = 0x3364A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33649Cu;
            // 0x3364a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3364A4u; }
        if (ctx->pc != 0x3364A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3364A4u; }
        if (ctx->pc != 0x3364A4u) { return; }
    }
    ctx->pc = 0x3364A4u;
label_3364a4:
    // 0x3364a4: 0xc04e738  jal         func_139CE0
label_3364a8:
    if (ctx->pc == 0x3364A8u) {
        ctx->pc = 0x3364A8u;
            // 0x3364a8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x3364ACu;
        goto label_3364ac;
    }
    ctx->pc = 0x3364A4u;
    SET_GPR_U32(ctx, 31, 0x3364ACu);
    ctx->pc = 0x3364A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3364A4u;
            // 0x3364a8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3364ACu; }
        if (ctx->pc != 0x3364ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3364ACu; }
        if (ctx->pc != 0x3364ACu) { return; }
    }
    ctx->pc = 0x3364ACu;
label_3364ac:
    // 0x3364ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3364acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3364b0:
    // 0x3364b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3364b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3364b4:
    // 0x3364b4: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x3364b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3364b8:
    // 0x3364b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3364b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3364bc:
    // 0x3364bc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3364bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3364c0:
    // 0x3364c0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3364c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3364c4:
    // 0x3364c4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3364c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3364c8:
    // 0x3364c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3364c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3364cc:
    // 0x3364cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3364ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3364d0:
    // 0x3364d0: 0xc0cdae4  jal         func_336B90
label_3364d4:
    if (ctx->pc == 0x3364D4u) {
        ctx->pc = 0x3364D4u;
            // 0x3364d4: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3364D8u;
        goto label_3364d8;
    }
    ctx->pc = 0x3364D0u;
    SET_GPR_U32(ctx, 31, 0x3364D8u);
    ctx->pc = 0x3364D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3364D0u;
            // 0x3364d4: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336B90u;
    if (runtime->hasFunction(0x336B90u)) {
        auto targetFn = runtime->lookupFunction(0x336B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3364D8u; }
        if (ctx->pc != 0x3364D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336B90_0x336b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3364D8u; }
        if (ctx->pc != 0x3364D8u) { return; }
    }
    ctx->pc = 0x3364D8u;
label_3364d8:
    // 0x3364d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3364d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3364dc:
    // 0x3364dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3364dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3364e0:
    // 0x3364e0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3364e4:
    if (ctx->pc == 0x3364E4u) {
        ctx->pc = 0x3364E4u;
            // 0x3364e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3364E8u;
        goto label_3364e8;
    }
    ctx->pc = 0x3364E0u;
    {
        const bool branch_taken_0x3364e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3364E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3364E0u;
            // 0x3364e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3364e0) {
            ctx->pc = 0x3364B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3364b4;
        }
    }
    ctx->pc = 0x3364E8u;
label_3364e8:
    // 0x3364e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3364e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3364ec:
    // 0x3364ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3364ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3364f0:
    // 0x3364f0: 0xc054c3c  jal         func_1530F0
label_3364f4:
    if (ctx->pc == 0x3364F4u) {
        ctx->pc = 0x3364F4u;
            // 0x3364f4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3364F8u;
        goto label_3364f8;
    }
    ctx->pc = 0x3364F0u;
    SET_GPR_U32(ctx, 31, 0x3364F8u);
    ctx->pc = 0x3364F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3364F0u;
            // 0x3364f4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3364F8u; }
        if (ctx->pc != 0x3364F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3364F8u; }
        if (ctx->pc != 0x3364F8u) { return; }
    }
    ctx->pc = 0x3364F8u;
label_3364f8:
    // 0x3364f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3364f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3364fc:
    // 0x3364fc: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3364fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_336500:
    // 0x336500: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_336504:
    if (ctx->pc == 0x336504u) {
        ctx->pc = 0x336504u;
            // 0x336504: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x336508u;
        goto label_336508;
    }
    ctx->pc = 0x336500u;
    {
        const bool branch_taken_0x336500 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x336504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336500u;
            // 0x336504: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336500) {
            ctx->pc = 0x336528u;
            goto label_336528;
        }
    }
    ctx->pc = 0x336508u;
label_336508:
    // 0x336508: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x336508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_33650c:
    // 0x33650c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_336510:
    // 0x336510: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x336510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_336514:
    // 0x336514: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x336514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_336518:
    // 0x336518: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x336518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_33651c:
    // 0x33651c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x33651cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_336520:
    // 0x336520: 0xc055ea8  jal         func_157AA0
label_336524:
    if (ctx->pc == 0x336524u) {
        ctx->pc = 0x336524u;
            // 0x336524: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336528u;
        goto label_336528;
    }
    ctx->pc = 0x336520u;
    SET_GPR_U32(ctx, 31, 0x336528u);
    ctx->pc = 0x336524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336520u;
            // 0x336524: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336528u; }
        if (ctx->pc != 0x336528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336528u; }
        if (ctx->pc != 0x336528u) { return; }
    }
    ctx->pc = 0x336528u;
label_336528:
    // 0x336528: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x336528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_33652c:
    // 0x33652c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33652cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_336530:
    // 0x336530: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x336530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_336534:
    // 0x336534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x336534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_336538:
    // 0x336538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x336538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33653c:
    // 0x33653c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33653cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_336540:
    // 0x336540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_336544:
    // 0x336544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_336548:
    // 0x336548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33654c:
    // 0x33654c: 0x3e00008  jr          $ra
label_336550:
    if (ctx->pc == 0x336550u) {
        ctx->pc = 0x336550u;
            // 0x336550: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x336554u;
        goto label_336554;
    }
    ctx->pc = 0x33654Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33654Cu;
            // 0x336550: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336554u;
label_336554:
    // 0x336554: 0x0  nop
    ctx->pc = 0x336554u;
    // NOP
label_336558:
    // 0x336558: 0x0  nop
    ctx->pc = 0x336558u;
    // NOP
label_33655c:
    // 0x33655c: 0x0  nop
    ctx->pc = 0x33655cu;
    // NOP
label_336560:
    // 0x336560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x336560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_336564:
    // 0x336564: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x336564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_336568:
    // 0x336568: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x336568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_33656c:
    // 0x33656c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_336570:
    // 0x336570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_336574:
    // 0x336574: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_336578:
    // 0x336578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33657c:
    // 0x33657c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x33657cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_336580:
    // 0x336580: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_336584:
    if (ctx->pc == 0x336584u) {
        ctx->pc = 0x336584u;
            // 0x336584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336588u;
        goto label_336588;
    }
    ctx->pc = 0x336580u;
    {
        const bool branch_taken_0x336580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x336584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336580u;
            // 0x336584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336580) {
            ctx->pc = 0x3365B4u;
            goto label_3365b4;
        }
    }
    ctx->pc = 0x336588u;
label_336588:
    // 0x336588: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x336588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33658c:
    // 0x33658c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_336590:
    if (ctx->pc == 0x336590u) {
        ctx->pc = 0x336590u;
            // 0x336590: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x336594u;
        goto label_336594;
    }
    ctx->pc = 0x33658Cu;
    {
        const bool branch_taken_0x33658c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33658c) {
            ctx->pc = 0x336590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33658Cu;
            // 0x336590: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3365A8u;
            goto label_3365a8;
        }
    }
    ctx->pc = 0x336594u;
label_336594:
    // 0x336594: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x336594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_336598:
    // 0x336598: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_33659c:
    if (ctx->pc == 0x33659Cu) {
        ctx->pc = 0x3365A0u;
        goto label_3365a0;
    }
    ctx->pc = 0x336598u;
    {
        const bool branch_taken_0x336598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x336598) {
            ctx->pc = 0x3365E8u;
            goto label_3365e8;
        }
    }
    ctx->pc = 0x3365A0u;
label_3365a0:
    // 0x3365a0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3365a4:
    if (ctx->pc == 0x3365A4u) {
        ctx->pc = 0x3365A8u;
        goto label_3365a8;
    }
    ctx->pc = 0x3365A0u;
    {
        const bool branch_taken_0x3365a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3365a0) {
            ctx->pc = 0x3365E8u;
            goto label_3365e8;
        }
    }
    ctx->pc = 0x3365A8u;
label_3365a8:
    // 0x3365a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3365a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3365ac:
    // 0x3365ac: 0x320f809  jalr        $t9
label_3365b0:
    if (ctx->pc == 0x3365B0u) {
        ctx->pc = 0x3365B4u;
        goto label_3365b4;
    }
    ctx->pc = 0x3365ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3365B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3365B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3365B4u; }
            if (ctx->pc != 0x3365B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3365B4u;
label_3365b4:
    // 0x3365b4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x3365b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3365b8:
    // 0x3365b8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3365bc:
    if (ctx->pc == 0x3365BCu) {
        ctx->pc = 0x3365C0u;
        goto label_3365c0;
    }
    ctx->pc = 0x3365B8u;
    {
        const bool branch_taken_0x3365b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3365b8) {
            ctx->pc = 0x3365E8u;
            goto label_3365e8;
        }
    }
    ctx->pc = 0x3365C0u;
label_3365c0:
    // 0x3365c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3365c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3365c4:
    // 0x3365c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3365c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3365c8:
    // 0x3365c8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3365c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3365cc:
    // 0x3365cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3365ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3365d0:
    // 0x3365d0: 0xc0e3658  jal         func_38D960
label_3365d4:
    if (ctx->pc == 0x3365D4u) {
        ctx->pc = 0x3365D4u;
            // 0x3365d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3365D8u;
        goto label_3365d8;
    }
    ctx->pc = 0x3365D0u;
    SET_GPR_U32(ctx, 31, 0x3365D8u);
    ctx->pc = 0x3365D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3365D0u;
            // 0x3365d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3365D8u; }
        if (ctx->pc != 0x3365D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3365D8u; }
        if (ctx->pc != 0x3365D8u) { return; }
    }
    ctx->pc = 0x3365D8u;
label_3365d8:
    // 0x3365d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3365d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3365dc:
    // 0x3365dc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3365dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3365e0:
    // 0x3365e0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3365e4:
    if (ctx->pc == 0x3365E4u) {
        ctx->pc = 0x3365E4u;
            // 0x3365e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3365E8u;
        goto label_3365e8;
    }
    ctx->pc = 0x3365E0u;
    {
        const bool branch_taken_0x3365e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3365E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3365E0u;
            // 0x3365e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3365e0) {
            ctx->pc = 0x3365C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3365c8;
        }
    }
    ctx->pc = 0x3365E8u;
label_3365e8:
    // 0x3365e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3365e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3365ec:
    // 0x3365ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3365ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3365f0:
    // 0x3365f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3365f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3365f4:
    // 0x3365f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3365f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3365f8:
    // 0x3365f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3365f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3365fc:
    // 0x3365fc: 0x3e00008  jr          $ra
label_336600:
    if (ctx->pc == 0x336600u) {
        ctx->pc = 0x336600u;
            // 0x336600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x336604u;
        goto label_336604;
    }
    ctx->pc = 0x3365FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3365FCu;
            // 0x336600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336604u;
label_336604:
    // 0x336604: 0x0  nop
    ctx->pc = 0x336604u;
    // NOP
label_336608:
    // 0x336608: 0x0  nop
    ctx->pc = 0x336608u;
    // NOP
label_33660c:
    // 0x33660c: 0x0  nop
    ctx->pc = 0x33660cu;
    // NOP
label_336610:
    // 0x336610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x336610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_336614:
    // 0x336614: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x336614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_336618:
    // 0x336618: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x336618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33661c:
    // 0x33661c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_336620:
    // 0x336620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_336624:
    // 0x336624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_336628:
    // 0x336628: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x336628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_33662c:
    // 0x33662c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_336630:
    if (ctx->pc == 0x336630u) {
        ctx->pc = 0x336630u;
            // 0x336630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336634u;
        goto label_336634;
    }
    ctx->pc = 0x33662Cu;
    {
        const bool branch_taken_0x33662c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x336630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33662Cu;
            // 0x336630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33662c) {
            ctx->pc = 0x336668u;
            goto label_336668;
        }
    }
    ctx->pc = 0x336634u;
label_336634:
    // 0x336634: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x336634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336638:
    // 0x336638: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x336638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33663c:
    // 0x33663c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x33663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_336640:
    // 0x336640: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x336640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_336644:
    // 0x336644: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x336644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_336648:
    // 0x336648: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x336648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33664c:
    // 0x33664c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x33664cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_336650:
    // 0x336650: 0x320f809  jalr        $t9
label_336654:
    if (ctx->pc == 0x336654u) {
        ctx->pc = 0x336658u;
        goto label_336658;
    }
    ctx->pc = 0x336650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336658u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x336658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x336658u; }
            if (ctx->pc != 0x336658u) { return; }
        }
        }
    }
    ctx->pc = 0x336658u;
label_336658:
    // 0x336658: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x336658u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_33665c:
    // 0x33665c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x33665cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_336660:
    // 0x336660: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_336664:
    if (ctx->pc == 0x336664u) {
        ctx->pc = 0x336664u;
            // 0x336664: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x336668u;
        goto label_336668;
    }
    ctx->pc = 0x336660u;
    {
        const bool branch_taken_0x336660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x336664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336660u;
            // 0x336664: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336660) {
            ctx->pc = 0x33663Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33663c;
        }
    }
    ctx->pc = 0x336668u;
label_336668:
    // 0x336668: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x336668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33666c:
    // 0x33666c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33666cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_336670:
    // 0x336670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_336674:
    // 0x336674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_336678:
    // 0x336678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33667c:
    // 0x33667c: 0x3e00008  jr          $ra
label_336680:
    if (ctx->pc == 0x336680u) {
        ctx->pc = 0x336680u;
            // 0x336680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x336684u;
        goto label_336684;
    }
    ctx->pc = 0x33667Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33667Cu;
            // 0x336680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336684u;
label_336684:
    // 0x336684: 0x0  nop
    ctx->pc = 0x336684u;
    // NOP
label_336688:
    // 0x336688: 0x0  nop
    ctx->pc = 0x336688u;
    // NOP
label_33668c:
    // 0x33668c: 0x0  nop
    ctx->pc = 0x33668cu;
    // NOP
}
