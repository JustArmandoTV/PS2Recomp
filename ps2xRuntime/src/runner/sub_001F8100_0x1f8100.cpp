#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8100
// Address: 0x1f8100 - 0x1f8570
void sub_001F8100_0x1f8100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8100_0x1f8100");
#endif

    switch (ctx->pc) {
        case 0x1f8100u: goto label_1f8100;
        case 0x1f8104u: goto label_1f8104;
        case 0x1f8108u: goto label_1f8108;
        case 0x1f810cu: goto label_1f810c;
        case 0x1f8110u: goto label_1f8110;
        case 0x1f8114u: goto label_1f8114;
        case 0x1f8118u: goto label_1f8118;
        case 0x1f811cu: goto label_1f811c;
        case 0x1f8120u: goto label_1f8120;
        case 0x1f8124u: goto label_1f8124;
        case 0x1f8128u: goto label_1f8128;
        case 0x1f812cu: goto label_1f812c;
        case 0x1f8130u: goto label_1f8130;
        case 0x1f8134u: goto label_1f8134;
        case 0x1f8138u: goto label_1f8138;
        case 0x1f813cu: goto label_1f813c;
        case 0x1f8140u: goto label_1f8140;
        case 0x1f8144u: goto label_1f8144;
        case 0x1f8148u: goto label_1f8148;
        case 0x1f814cu: goto label_1f814c;
        case 0x1f8150u: goto label_1f8150;
        case 0x1f8154u: goto label_1f8154;
        case 0x1f8158u: goto label_1f8158;
        case 0x1f815cu: goto label_1f815c;
        case 0x1f8160u: goto label_1f8160;
        case 0x1f8164u: goto label_1f8164;
        case 0x1f8168u: goto label_1f8168;
        case 0x1f816cu: goto label_1f816c;
        case 0x1f8170u: goto label_1f8170;
        case 0x1f8174u: goto label_1f8174;
        case 0x1f8178u: goto label_1f8178;
        case 0x1f817cu: goto label_1f817c;
        case 0x1f8180u: goto label_1f8180;
        case 0x1f8184u: goto label_1f8184;
        case 0x1f8188u: goto label_1f8188;
        case 0x1f818cu: goto label_1f818c;
        case 0x1f8190u: goto label_1f8190;
        case 0x1f8194u: goto label_1f8194;
        case 0x1f8198u: goto label_1f8198;
        case 0x1f819cu: goto label_1f819c;
        case 0x1f81a0u: goto label_1f81a0;
        case 0x1f81a4u: goto label_1f81a4;
        case 0x1f81a8u: goto label_1f81a8;
        case 0x1f81acu: goto label_1f81ac;
        case 0x1f81b0u: goto label_1f81b0;
        case 0x1f81b4u: goto label_1f81b4;
        case 0x1f81b8u: goto label_1f81b8;
        case 0x1f81bcu: goto label_1f81bc;
        case 0x1f81c0u: goto label_1f81c0;
        case 0x1f81c4u: goto label_1f81c4;
        case 0x1f81c8u: goto label_1f81c8;
        case 0x1f81ccu: goto label_1f81cc;
        case 0x1f81d0u: goto label_1f81d0;
        case 0x1f81d4u: goto label_1f81d4;
        case 0x1f81d8u: goto label_1f81d8;
        case 0x1f81dcu: goto label_1f81dc;
        case 0x1f81e0u: goto label_1f81e0;
        case 0x1f81e4u: goto label_1f81e4;
        case 0x1f81e8u: goto label_1f81e8;
        case 0x1f81ecu: goto label_1f81ec;
        case 0x1f81f0u: goto label_1f81f0;
        case 0x1f81f4u: goto label_1f81f4;
        case 0x1f81f8u: goto label_1f81f8;
        case 0x1f81fcu: goto label_1f81fc;
        case 0x1f8200u: goto label_1f8200;
        case 0x1f8204u: goto label_1f8204;
        case 0x1f8208u: goto label_1f8208;
        case 0x1f820cu: goto label_1f820c;
        case 0x1f8210u: goto label_1f8210;
        case 0x1f8214u: goto label_1f8214;
        case 0x1f8218u: goto label_1f8218;
        case 0x1f821cu: goto label_1f821c;
        case 0x1f8220u: goto label_1f8220;
        case 0x1f8224u: goto label_1f8224;
        case 0x1f8228u: goto label_1f8228;
        case 0x1f822cu: goto label_1f822c;
        case 0x1f8230u: goto label_1f8230;
        case 0x1f8234u: goto label_1f8234;
        case 0x1f8238u: goto label_1f8238;
        case 0x1f823cu: goto label_1f823c;
        case 0x1f8240u: goto label_1f8240;
        case 0x1f8244u: goto label_1f8244;
        case 0x1f8248u: goto label_1f8248;
        case 0x1f824cu: goto label_1f824c;
        case 0x1f8250u: goto label_1f8250;
        case 0x1f8254u: goto label_1f8254;
        case 0x1f8258u: goto label_1f8258;
        case 0x1f825cu: goto label_1f825c;
        case 0x1f8260u: goto label_1f8260;
        case 0x1f8264u: goto label_1f8264;
        case 0x1f8268u: goto label_1f8268;
        case 0x1f826cu: goto label_1f826c;
        case 0x1f8270u: goto label_1f8270;
        case 0x1f8274u: goto label_1f8274;
        case 0x1f8278u: goto label_1f8278;
        case 0x1f827cu: goto label_1f827c;
        case 0x1f8280u: goto label_1f8280;
        case 0x1f8284u: goto label_1f8284;
        case 0x1f8288u: goto label_1f8288;
        case 0x1f828cu: goto label_1f828c;
        case 0x1f8290u: goto label_1f8290;
        case 0x1f8294u: goto label_1f8294;
        case 0x1f8298u: goto label_1f8298;
        case 0x1f829cu: goto label_1f829c;
        case 0x1f82a0u: goto label_1f82a0;
        case 0x1f82a4u: goto label_1f82a4;
        case 0x1f82a8u: goto label_1f82a8;
        case 0x1f82acu: goto label_1f82ac;
        case 0x1f82b0u: goto label_1f82b0;
        case 0x1f82b4u: goto label_1f82b4;
        case 0x1f82b8u: goto label_1f82b8;
        case 0x1f82bcu: goto label_1f82bc;
        case 0x1f82c0u: goto label_1f82c0;
        case 0x1f82c4u: goto label_1f82c4;
        case 0x1f82c8u: goto label_1f82c8;
        case 0x1f82ccu: goto label_1f82cc;
        case 0x1f82d0u: goto label_1f82d0;
        case 0x1f82d4u: goto label_1f82d4;
        case 0x1f82d8u: goto label_1f82d8;
        case 0x1f82dcu: goto label_1f82dc;
        case 0x1f82e0u: goto label_1f82e0;
        case 0x1f82e4u: goto label_1f82e4;
        case 0x1f82e8u: goto label_1f82e8;
        case 0x1f82ecu: goto label_1f82ec;
        case 0x1f82f0u: goto label_1f82f0;
        case 0x1f82f4u: goto label_1f82f4;
        case 0x1f82f8u: goto label_1f82f8;
        case 0x1f82fcu: goto label_1f82fc;
        case 0x1f8300u: goto label_1f8300;
        case 0x1f8304u: goto label_1f8304;
        case 0x1f8308u: goto label_1f8308;
        case 0x1f830cu: goto label_1f830c;
        case 0x1f8310u: goto label_1f8310;
        case 0x1f8314u: goto label_1f8314;
        case 0x1f8318u: goto label_1f8318;
        case 0x1f831cu: goto label_1f831c;
        case 0x1f8320u: goto label_1f8320;
        case 0x1f8324u: goto label_1f8324;
        case 0x1f8328u: goto label_1f8328;
        case 0x1f832cu: goto label_1f832c;
        case 0x1f8330u: goto label_1f8330;
        case 0x1f8334u: goto label_1f8334;
        case 0x1f8338u: goto label_1f8338;
        case 0x1f833cu: goto label_1f833c;
        case 0x1f8340u: goto label_1f8340;
        case 0x1f8344u: goto label_1f8344;
        case 0x1f8348u: goto label_1f8348;
        case 0x1f834cu: goto label_1f834c;
        case 0x1f8350u: goto label_1f8350;
        case 0x1f8354u: goto label_1f8354;
        case 0x1f8358u: goto label_1f8358;
        case 0x1f835cu: goto label_1f835c;
        case 0x1f8360u: goto label_1f8360;
        case 0x1f8364u: goto label_1f8364;
        case 0x1f8368u: goto label_1f8368;
        case 0x1f836cu: goto label_1f836c;
        case 0x1f8370u: goto label_1f8370;
        case 0x1f8374u: goto label_1f8374;
        case 0x1f8378u: goto label_1f8378;
        case 0x1f837cu: goto label_1f837c;
        case 0x1f8380u: goto label_1f8380;
        case 0x1f8384u: goto label_1f8384;
        case 0x1f8388u: goto label_1f8388;
        case 0x1f838cu: goto label_1f838c;
        case 0x1f8390u: goto label_1f8390;
        case 0x1f8394u: goto label_1f8394;
        case 0x1f8398u: goto label_1f8398;
        case 0x1f839cu: goto label_1f839c;
        case 0x1f83a0u: goto label_1f83a0;
        case 0x1f83a4u: goto label_1f83a4;
        case 0x1f83a8u: goto label_1f83a8;
        case 0x1f83acu: goto label_1f83ac;
        case 0x1f83b0u: goto label_1f83b0;
        case 0x1f83b4u: goto label_1f83b4;
        case 0x1f83b8u: goto label_1f83b8;
        case 0x1f83bcu: goto label_1f83bc;
        case 0x1f83c0u: goto label_1f83c0;
        case 0x1f83c4u: goto label_1f83c4;
        case 0x1f83c8u: goto label_1f83c8;
        case 0x1f83ccu: goto label_1f83cc;
        case 0x1f83d0u: goto label_1f83d0;
        case 0x1f83d4u: goto label_1f83d4;
        case 0x1f83d8u: goto label_1f83d8;
        case 0x1f83dcu: goto label_1f83dc;
        case 0x1f83e0u: goto label_1f83e0;
        case 0x1f83e4u: goto label_1f83e4;
        case 0x1f83e8u: goto label_1f83e8;
        case 0x1f83ecu: goto label_1f83ec;
        case 0x1f83f0u: goto label_1f83f0;
        case 0x1f83f4u: goto label_1f83f4;
        case 0x1f83f8u: goto label_1f83f8;
        case 0x1f83fcu: goto label_1f83fc;
        case 0x1f8400u: goto label_1f8400;
        case 0x1f8404u: goto label_1f8404;
        case 0x1f8408u: goto label_1f8408;
        case 0x1f840cu: goto label_1f840c;
        case 0x1f8410u: goto label_1f8410;
        case 0x1f8414u: goto label_1f8414;
        case 0x1f8418u: goto label_1f8418;
        case 0x1f841cu: goto label_1f841c;
        case 0x1f8420u: goto label_1f8420;
        case 0x1f8424u: goto label_1f8424;
        case 0x1f8428u: goto label_1f8428;
        case 0x1f842cu: goto label_1f842c;
        case 0x1f8430u: goto label_1f8430;
        case 0x1f8434u: goto label_1f8434;
        case 0x1f8438u: goto label_1f8438;
        case 0x1f843cu: goto label_1f843c;
        case 0x1f8440u: goto label_1f8440;
        case 0x1f8444u: goto label_1f8444;
        case 0x1f8448u: goto label_1f8448;
        case 0x1f844cu: goto label_1f844c;
        case 0x1f8450u: goto label_1f8450;
        case 0x1f8454u: goto label_1f8454;
        case 0x1f8458u: goto label_1f8458;
        case 0x1f845cu: goto label_1f845c;
        case 0x1f8460u: goto label_1f8460;
        case 0x1f8464u: goto label_1f8464;
        case 0x1f8468u: goto label_1f8468;
        case 0x1f846cu: goto label_1f846c;
        case 0x1f8470u: goto label_1f8470;
        case 0x1f8474u: goto label_1f8474;
        case 0x1f8478u: goto label_1f8478;
        case 0x1f847cu: goto label_1f847c;
        case 0x1f8480u: goto label_1f8480;
        case 0x1f8484u: goto label_1f8484;
        case 0x1f8488u: goto label_1f8488;
        case 0x1f848cu: goto label_1f848c;
        case 0x1f8490u: goto label_1f8490;
        case 0x1f8494u: goto label_1f8494;
        case 0x1f8498u: goto label_1f8498;
        case 0x1f849cu: goto label_1f849c;
        case 0x1f84a0u: goto label_1f84a0;
        case 0x1f84a4u: goto label_1f84a4;
        case 0x1f84a8u: goto label_1f84a8;
        case 0x1f84acu: goto label_1f84ac;
        case 0x1f84b0u: goto label_1f84b0;
        case 0x1f84b4u: goto label_1f84b4;
        case 0x1f84b8u: goto label_1f84b8;
        case 0x1f84bcu: goto label_1f84bc;
        case 0x1f84c0u: goto label_1f84c0;
        case 0x1f84c4u: goto label_1f84c4;
        case 0x1f84c8u: goto label_1f84c8;
        case 0x1f84ccu: goto label_1f84cc;
        case 0x1f84d0u: goto label_1f84d0;
        case 0x1f84d4u: goto label_1f84d4;
        case 0x1f84d8u: goto label_1f84d8;
        case 0x1f84dcu: goto label_1f84dc;
        case 0x1f84e0u: goto label_1f84e0;
        case 0x1f84e4u: goto label_1f84e4;
        case 0x1f84e8u: goto label_1f84e8;
        case 0x1f84ecu: goto label_1f84ec;
        case 0x1f84f0u: goto label_1f84f0;
        case 0x1f84f4u: goto label_1f84f4;
        case 0x1f84f8u: goto label_1f84f8;
        case 0x1f84fcu: goto label_1f84fc;
        case 0x1f8500u: goto label_1f8500;
        case 0x1f8504u: goto label_1f8504;
        case 0x1f8508u: goto label_1f8508;
        case 0x1f850cu: goto label_1f850c;
        case 0x1f8510u: goto label_1f8510;
        case 0x1f8514u: goto label_1f8514;
        case 0x1f8518u: goto label_1f8518;
        case 0x1f851cu: goto label_1f851c;
        case 0x1f8520u: goto label_1f8520;
        case 0x1f8524u: goto label_1f8524;
        case 0x1f8528u: goto label_1f8528;
        case 0x1f852cu: goto label_1f852c;
        case 0x1f8530u: goto label_1f8530;
        case 0x1f8534u: goto label_1f8534;
        case 0x1f8538u: goto label_1f8538;
        case 0x1f853cu: goto label_1f853c;
        case 0x1f8540u: goto label_1f8540;
        case 0x1f8544u: goto label_1f8544;
        case 0x1f8548u: goto label_1f8548;
        case 0x1f854cu: goto label_1f854c;
        case 0x1f8550u: goto label_1f8550;
        case 0x1f8554u: goto label_1f8554;
        case 0x1f8558u: goto label_1f8558;
        case 0x1f855cu: goto label_1f855c;
        case 0x1f8560u: goto label_1f8560;
        case 0x1f8564u: goto label_1f8564;
        case 0x1f8568u: goto label_1f8568;
        case 0x1f856cu: goto label_1f856c;
        default: break;
    }

    ctx->pc = 0x1f8100u;

label_1f8100:
    // 0x1f8100: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1f8100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1f8104:
    // 0x1f8104: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f8104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f8108:
    // 0x1f8108: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f8108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f810c:
    // 0x1f810c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f810cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f8110:
    // 0x1f8110: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f8110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f8114:
    // 0x1f8114: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f8114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f8118:
    // 0x1f8118: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f8118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f811c:
    // 0x1f811c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f811cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f8120:
    // 0x1f8120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f8120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f8124:
    // 0x1f8124: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1f8124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f8128:
    // 0x1f8128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f812c:
    // 0x1f812c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f8130:
    // 0x1f8130: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1f8130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f8134:
    // 0x1f8134: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f8138:
    // 0x1f8138: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f8138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f813c:
    // 0x1f813c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f8140:
    if (ctx->pc == 0x1F8140u) {
        ctx->pc = 0x1F8140u;
            // 0x1f8140: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F8144u;
        goto label_1f8144;
    }
    ctx->pc = 0x1F813Cu;
    {
        const bool branch_taken_0x1f813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F813Cu;
            // 0x1f8140: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f813c) {
            ctx->pc = 0x1F816Cu;
            goto label_1f816c;
        }
    }
    ctx->pc = 0x1F8144u;
label_1f8144:
    // 0x1f8144: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f8144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f8148:
    // 0x1f8148: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f8148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f814c:
    // 0x1f814c: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x1f814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
label_1f8150:
    // 0x1f8150: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f8150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f8154:
    // 0x1f8154: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f8154u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f8158:
    // 0x1f8158: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f8158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f815c:
    // 0x1f815c: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f815cu;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_1f8160:
    // 0x1f8160: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f8160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f8164:
    // 0x1f8164: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1f8164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
label_1f8168:
    // 0x1f8168: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f8168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f816c:
    // 0x1f816c: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x1f816cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
label_1f8170:
    // 0x1f8170: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8174:
    // 0x1f8174: 0xafa60104  sw          $a2, 0x104($sp)
    ctx->pc = 0x1f8174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
label_1f8178:
    // 0x1f8178: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1f8178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f817c:
    // 0x1f817c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1f817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f8180:
    // 0x1f8180: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f8180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f8184:
    // 0x1f8184: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x1f8184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f8188:
    // 0x1f8188: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f8188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f818c:
    // 0x1f818c: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x1f818cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8190:
    // 0x1f8190: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f8190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8194:
    // 0x1f8194: 0x24720030  addiu       $s2, $v1, 0x30
    ctx->pc = 0x1f8194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1f8198:
    // 0x1f8198: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f8198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f819c:
    // 0x1f819c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1f819cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1f81a0:
    // 0x1f81a0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1f81a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1f81a4:
    // 0x1f81a4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1f81a8:
    // 0x1f81a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f81a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f81ac:
    // 0x1f81ac: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1f81acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f81b0:
    // 0x1f81b0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1f81b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1f81b4:
    // 0x1f81b4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1f81b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1f81b8:
    // 0x1f81b8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1f81b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1f81bc:
    // 0x1f81bc: 0xc44b0014  lwc1        $f11, 0x14($v0)
    ctx->pc = 0x1f81bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f81c0:
    // 0x1f81c0: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1f81c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1f81c4:
    // 0x1f81c4: 0xc44a0018  lwc1        $f10, 0x18($v0)
    ctx->pc = 0x1f81c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f81c8:
    // 0x1f81c8: 0xe7ab0074  swc1        $f11, 0x74($sp)
    ctx->pc = 0x1f81c8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f81cc:
    // 0x1f81cc: 0xc449001c  lwc1        $f9, 0x1C($v0)
    ctx->pc = 0x1f81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f81d0:
    // 0x1f81d0: 0xe7aa0078  swc1        $f10, 0x78($sp)
    ctx->pc = 0x1f81d0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1f81d4:
    // 0x1f81d4: 0xc4480020  lwc1        $f8, 0x20($v0)
    ctx->pc = 0x1f81d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f81d8:
    // 0x1f81d8: 0xe7a9007c  swc1        $f9, 0x7C($sp)
    ctx->pc = 0x1f81d8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1f81dc:
    // 0x1f81dc: 0xc4470024  lwc1        $f7, 0x24($v0)
    ctx->pc = 0x1f81dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f81e0:
    // 0x1f81e0: 0xe7a80080  swc1        $f8, 0x80($sp)
    ctx->pc = 0x1f81e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f81e4:
    // 0x1f81e4: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1f81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f81e8:
    // 0x1f81e8: 0xe7a70084  swc1        $f7, 0x84($sp)
    ctx->pc = 0x1f81e8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f81ec:
    // 0x1f81ec: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1f81ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f81f0:
    // 0x1f81f0: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x1f81f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f81f4:
    // 0x1f81f4: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1f81f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f81f8:
    // 0x1f81f8: 0xe7a5008c  swc1        $f5, 0x8C($sp)
    ctx->pc = 0x1f81f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f81fc:
    // 0x1f81fc: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1f81fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8200:
    // 0x1f8200: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1f8200u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f8204:
    // 0x1f8204: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1f8204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8208:
    // 0x1f8208: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1f8208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f820c:
    // 0x1f820c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8210:
    // 0x1f8210: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1f8210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f8214:
    // 0x1f8214: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1f8214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f8218:
    // 0x1f8218: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1f8218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f821c:
    // 0x1f821c: 0xc7ab0060  lwc1        $f11, 0x60($sp)
    ctx->pc = 0x1f821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f8220:
    // 0x1f8220: 0xc7aa0070  lwc1        $f10, 0x70($sp)
    ctx->pc = 0x1f8220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f8224:
    // 0x1f8224: 0xc7a90090  lwc1        $f9, 0x90($sp)
    ctx->pc = 0x1f8224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f8228:
    // 0x1f8228: 0xc7a80084  lwc1        $f8, 0x84($sp)
    ctx->pc = 0x1f8228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f822c:
    // 0x1f822c: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x1f822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f8230:
    // 0x1f8230: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x1f8230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8234:
    // 0x1f8234: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x1f8234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8238:
    // 0x1f8238: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x1f8238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f823c:
    // 0x1f823c: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1f823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8240:
    // 0x1f8240: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1f8240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8244:
    // 0x1f8244: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1f8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8248:
    // 0x1f8248: 0xc46e0004  lwc1        $f14, 0x4($v1)
    ctx->pc = 0x1f8248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f824c:
    // 0x1f824c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1f824cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1f8250:
    // 0x1f8250: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1f8250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f8254:
    // 0x1f8254: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x1f8254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f8258:
    // 0x1f8258: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1f8258u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1f825c:
    // 0x1f825c: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1f825cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1f8260:
    // 0x1f8260: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1f8260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1f8264:
    // 0x1f8264: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1f8264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1f8268:
    // 0x1f8268: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1f8268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1f826c:
    // 0x1f826c: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1f826cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1f8270:
    // 0x1f8270: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f8270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f8274:
    // 0x1f8274: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1f8274u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1f8278:
    // 0x1f8278: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1f8278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1f827c:
    // 0x1f827c: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1f827cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1f8280:
    // 0x1f8280: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1f8280u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1f8284:
    // 0x1f8284: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1f8284u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1f8288:
    // 0x1f8288: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1f8288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1f828c:
    // 0x1f828c: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1f828cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1f8290:
    // 0x1f8290: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f8294:
    // 0x1f8294: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1f8294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1f8298:
    // 0x1f8298: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1f8298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1f829c:
    // 0x1f829c: 0x4e1ffea  bgez        $a3, . + 4 + (-0x16 << 2)
label_1f82a0:
    if (ctx->pc == 0x1F82A0u) {
        ctx->pc = 0x1F82A0u;
            // 0x1f82a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x1F82A4u;
        goto label_1f82a4;
    }
    ctx->pc = 0x1F829Cu;
    {
        const bool branch_taken_0x1f829c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1F82A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F829Cu;
            // 0x1f82a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f829c) {
            ctx->pc = 0x1F8248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8248;
        }
    }
    ctx->pc = 0x1F82A4u;
label_1f82a4:
    // 0x1f82a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f82a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f82a8:
    // 0x1f82a8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1f82a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f82ac:
    // 0x1f82ac: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1f82acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f82b0:
    // 0x1f82b0: 0xc09e998  jal         func_27A660
label_1f82b4:
    if (ctx->pc == 0x1F82B4u) {
        ctx->pc = 0x1F82B4u;
            // 0x1f82b4: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1F82B8u;
        goto label_1f82b8;
    }
    ctx->pc = 0x1F82B0u;
    SET_GPR_U32(ctx, 31, 0x1F82B8u);
    ctx->pc = 0x1F82B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82B0u;
            // 0x1f82b4: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A660u;
    if (runtime->hasFunction(0x27A660u)) {
        auto targetFn = runtime->lookupFunction(0x27A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82B8u; }
        if (ctx->pc != 0x1F82B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A660_0x27a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82B8u; }
        if (ctx->pc != 0x1F82B8u) { return; }
    }
    ctx->pc = 0x1F82B8u;
label_1f82b8:
    // 0x1f82b8: 0xc7a700b0  lwc1        $f7, 0xB0($sp)
    ctx->pc = 0x1f82b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f82bc:
    // 0x1f82bc: 0xc6480000  lwc1        $f8, 0x0($s2)
    ctx->pc = 0x1f82bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f82c0:
    // 0x1f82c0: 0xc7a500b4  lwc1        $f5, 0xB4($sp)
    ctx->pc = 0x1f82c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f82c4:
    // 0x1f82c4: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x1f82c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f82c8:
    // 0x1f82c8: 0x46074201  sub.s       $f8, $f8, $f7
    ctx->pc = 0x1f82c8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
label_1f82cc:
    // 0x1f82cc: 0x460531c1  sub.s       $f7, $f6, $f5
    ctx->pc = 0x1f82ccu;
    ctx->f[7] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_1f82d0:
    // 0x1f82d0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f82d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f82d4:
    // 0x1f82d4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1f82d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f82d8:
    // 0x1f82d8: 0x4607381a  mula.s      $f7, $f7
    ctx->pc = 0x1f82d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_1f82dc:
    // 0x1f82dc: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1f82dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f82e0:
    // 0x1f82e0: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x1f82e0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f82e4:
    // 0x1f82e4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1f82e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f82e8:
    // 0x1f82e8: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1f82e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f82ec:
    // 0x1f82ec: 0xc7a400bc  lwc1        $f4, 0xBC($sp)
    ctx->pc = 0x1f82ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f82f0:
    // 0x1f82f0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1f82f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1f82f4:
    // 0x1f82f4: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x1f82f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1f82f8:
    // 0x1f82f8: 0xc645000c  lwc1        $f5, 0xC($s2)
    ctx->pc = 0x1f82f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f82fc:
    // 0x1f82fc: 0x4608401e  madda.s     $f8, $f8
    ctx->pc = 0x1f82fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
label_1f8300:
    // 0x1f8300: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1f8300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_1f8304:
    // 0x1f8304: 0x460630dc  madd.s      $f3, $f6, $f6
    ctx->pc = 0x1f8304u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
label_1f8308:
    // 0x1f8308: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1f8308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f830c:
    // 0x1f830c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f830cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8310:
    // 0x1f8310: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1f8314:
    if (ctx->pc == 0x1F8314u) {
        ctx->pc = 0x1F8314u;
            // 0x1f8314: 0x46042901  sub.s       $f4, $f5, $f4 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
        ctx->pc = 0x1F8318u;
        goto label_1f8318;
    }
    ctx->pc = 0x1F8310u;
    {
        const bool branch_taken_0x1f8310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8310u;
            // 0x1f8314: 0x46042901  sub.s       $f4, $f5, $f4 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8310) {
            ctx->pc = 0x1F8320u;
            goto label_1f8320;
        }
    }
    ctx->pc = 0x1F8318u;
label_1f8318:
    // 0x1f8318: 0x10000073  b           . + 4 + (0x73 << 2)
label_1f831c:
    if (ctx->pc == 0x1F831Cu) {
        ctx->pc = 0x1F831Cu;
            // 0x1f831c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F8320u;
        goto label_1f8320;
    }
    ctx->pc = 0x1F8318u;
    {
        const bool branch_taken_0x1f8318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8318u;
            // 0x1f831c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8318) {
            ctx->pc = 0x1F84E8u;
            goto label_1f84e8;
        }
    }
    ctx->pc = 0x1F8320u;
label_1f8320:
    // 0x1f8320: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1f8320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8324:
    // 0x1f8324: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_1f8328:
    if (ctx->pc == 0x1F8328u) {
        ctx->pc = 0x1F8328u;
            // 0x1f8328: 0xc7a300d0  lwc1        $f3, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1F832Cu;
        goto label_1f832c;
    }
    ctx->pc = 0x1F8324u;
    {
        const bool branch_taken_0x1f8324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8324) {
            ctx->pc = 0x1F8328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8324u;
            // 0x1f8328: 0xc7a300d0  lwc1        $f3, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F834Cu;
            goto label_1f834c;
        }
    }
    ctx->pc = 0x1F832Cu;
label_1f832c:
    // 0x1f832c: 0x0  nop
    ctx->pc = 0x1f832cu;
    // NOP
label_1f8330:
    // 0x1f8330: 0x0  nop
    ctx->pc = 0x1f8330u;
    // NOP
label_1f8334:
    // 0x1f8334: 0x46030004  c1          0x30004
    ctx->pc = 0x1f8334u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1f8338:
    // 0x1f8338: 0xe7a800f0  swc1        $f8, 0xF0($sp)
    ctx->pc = 0x1f8338u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f833c:
    // 0x1f833c: 0xe7a700f4  swc1        $f7, 0xF4($sp)
    ctx->pc = 0x1f833cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f8340:
    // 0x1f8340: 0xe7a600f8  swc1        $f6, 0xF8($sp)
    ctx->pc = 0x1f8340u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f8344:
    // 0x1f8344: 0x10000030  b           . + 4 + (0x30 << 2)
label_1f8348:
    if (ctx->pc == 0x1F8348u) {
        ctx->pc = 0x1F8348u;
            // 0x1f8348: 0xe7a400fc  swc1        $f4, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->pc = 0x1F834Cu;
        goto label_1f834c;
    }
    ctx->pc = 0x1F8344u;
    {
        const bool branch_taken_0x1f8344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8344u;
            // 0x1f8348: 0xe7a400fc  swc1        $f4, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8344) {
            ctx->pc = 0x1F8408u;
            goto label_1f8408;
        }
    }
    ctx->pc = 0x1F834Cu;
label_1f834c:
    // 0x1f834c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1f834cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1f8350:
    // 0x1f8350: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1f8350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8354:
    // 0x1f8354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8358:
    // 0x1f8358: 0xc7a700d4  lwc1        $f7, 0xD4($sp)
    ctx->pc = 0x1f8358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f835c:
    // 0x1f835c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8360:
    // 0x1f8360: 0xc7a600c4  lwc1        $f6, 0xC4($sp)
    ctx->pc = 0x1f8360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8364:
    // 0x1f8364: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f8368:
    // 0x1f8368: 0x46021a01  sub.s       $f8, $f3, $f2
    ctx->pc = 0x1f8368u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f836c:
    // 0x1f836c: 0xc7a500d8  lwc1        $f5, 0xD8($sp)
    ctx->pc = 0x1f836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8370:
    // 0x1f8370: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x1f8370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8374:
    // 0x1f8374: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x1f8374u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1f8378:
    // 0x1f8378: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1f8378u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f837c:
    // 0x1f837c: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x1f837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8380:
    // 0x1f8380: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x1f8380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8384:
    // 0x1f8384: 0xe7a800a0  swc1        $f8, 0xA0($sp)
    ctx->pc = 0x1f8384u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f8388:
    // 0x1f8388: 0xe7a600a4  swc1        $f6, 0xA4($sp)
    ctx->pc = 0x1f8388u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f838c:
    // 0x1f838c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1f838cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f8390:
    // 0x1f8390: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x1f8390u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f8394:
    // 0x1f8394: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x1f8394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1f8398:
    // 0x1f8398: 0x46004145  abs.s       $f5, $f8
    ctx->pc = 0x1f8398u;
    ctx->f[5] = FPU_ABS_S(ctx->f[8]);
label_1f839c:
    // 0x1f839c: 0x460030c5  abs.s       $f3, $f6
    ctx->pc = 0x1f839cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[6]);
label_1f83a0:
    // 0x1f83a0: 0x46002085  abs.s       $f2, $f4
    ctx->pc = 0x1f83a0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[4]);
label_1f83a4:
    // 0x1f83a4: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x1f83a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f83a8:
    // 0x1f83a8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1f83ac:
    if (ctx->pc == 0x1F83ACu) {
        ctx->pc = 0x1F83B0u;
        goto label_1f83b0;
    }
    ctx->pc = 0x1F83A8u;
    {
        const bool branch_taken_0x1f83a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f83a8) {
            ctx->pc = 0x1F83BCu;
            goto label_1f83bc;
        }
    }
    ctx->pc = 0x1F83B0u;
label_1f83b0:
    // 0x1f83b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f83b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f83b4:
    // 0x1f83b4: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x1f83b4u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
label_1f83b8:
    // 0x1f83b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f83b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f83bc:
    // 0x1f83bc: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x1f83bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f83c0:
    // 0x1f83c0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1f83c4:
    if (ctx->pc == 0x1F83C4u) {
        ctx->pc = 0x1F83C4u;
            // 0x1f83c4: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1F83C8u;
        goto label_1f83c8;
    }
    ctx->pc = 0x1F83C0u;
    {
        const bool branch_taken_0x1f83c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f83c0) {
            ctx->pc = 0x1F83C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83C0u;
            // 0x1f83c4: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F83D0u;
            goto label_1f83d0;
        }
    }
    ctx->pc = 0x1F83C8u;
label_1f83c8:
    // 0x1f83c8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f83c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f83cc:
    // 0x1f83cc: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1f83ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f83d0:
    // 0x1f83d0: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x1f83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_1f83d4:
    // 0x1f83d4: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1f83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_1f83d8:
    // 0x1f83d8: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x1f83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_1f83dc:
    // 0x1f83dc: 0xc46300a0  lwc1        $f3, 0xA0($v1)
    ctx->pc = 0x1f83dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f83e0:
    // 0x1f83e0: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x1f83e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_1f83e4:
    // 0x1f83e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f83e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f83e8:
    // 0x1f83e8: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1f83e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1f83ec:
    // 0x1f83ec: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x1f83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1f83f0:
    // 0x1f83f0: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1f83f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1f83f4:
    // 0x1f83f4: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1f83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_1f83f8:
    // 0x1f83f8: 0xc48200a0  lwc1        $f2, 0xA0($a0)
    ctx->pc = 0x1f83f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f83fc:
    // 0x1f83fc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1f83fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f8400:
    // 0x1f8400: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1f8400u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1f8404:
    // 0x1f8404: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1f8404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1f8408:
    // 0x1f8408: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x1f8408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f840c:
    // 0x1f840c: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x1f840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8410:
    // 0x1f8410: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f8410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8414:
    // 0x1f8414: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f8414u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1f8418:
    // 0x1f8418: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1f8418u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_1f841c:
    // 0x1f841c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1f841cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f8420:
    // 0x1f8420: 0x460210dc  madd.s      $f3, $f2, $f2
    ctx->pc = 0x1f8420u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1f8424:
    // 0x1f8424: 0x46051832  c.eq.s      $f3, $f5
    ctx->pc = 0x1f8424u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8428:
    // 0x1f8428: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1f842c:
    if (ctx->pc == 0x1F842Cu) {
        ctx->pc = 0x1F8430u;
        goto label_1f8430;
    }
    ctx->pc = 0x1F8428u;
    {
        const bool branch_taken_0x1f8428 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8428) {
            ctx->pc = 0x1F844Cu;
            goto label_1f844c;
        }
    }
    ctx->pc = 0x1F8430u;
label_1f8430:
    // 0x1f8430: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f8430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f8434:
    // 0x1f8434: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f8434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f8438:
    // 0x1f8438: 0x0  nop
    ctx->pc = 0x1f8438u;
    // NOP
label_1f843c:
    // 0x1f843c: 0x46031156  rsqrt.s     $f5, $f2, $f3
    ctx->pc = 0x1f843cu;
    ctx->f[5] = 1.0f / sqrtf(ctx->f[2]);
label_1f8440:
    // 0x1f8440: 0x0  nop
    ctx->pc = 0x1f8440u;
    // NOP
label_1f8444:
    // 0x1f8444: 0x0  nop
    ctx->pc = 0x1f8444u;
    // NOP
label_1f8448:
    // 0x1f8448: 0x0  nop
    ctx->pc = 0x1f8448u;
    // NOP
label_1f844c:
    // 0x1f844c: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x1f844cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8450:
    // 0x1f8450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8454:
    // 0x1f8454: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1f8454u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f8458:
    // 0x1f8458: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f8458u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f845c:
    // 0x1f845c: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x1f845cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f8460:
    // 0x1f8460: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x1f8460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8464:
    // 0x1f8464: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f8464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f8468:
    // 0x1f8468: 0x0  nop
    ctx->pc = 0x1f8468u;
    // NOP
label_1f846c:
    // 0x1f846c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f846cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f8470:
    // 0x1f8470: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x1f8470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f8474:
    // 0x1f8474: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f8474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8478:
    // 0x1f8478: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f8478u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f847c:
    // 0x1f847c: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f847cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f8480:
    // 0x1f8480: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x1f8480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8484:
    // 0x1f8484: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f8484u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f8488:
    // 0x1f8488: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x1f8488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f848c:
    // 0x1f848c: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x1f848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8490:
    // 0x1f8490: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1f8490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8494:
    // 0x1f8494: 0xc7a400f0  lwc1        $f4, 0xF0($sp)
    ctx->pc = 0x1f8494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8498:
    // 0x1f8498: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1f8498u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1f849c:
    // 0x1f849c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x1f849cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1f84a0:
    // 0x1f84a0: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x1f84a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1f84a4:
    // 0x1f84a4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1f84a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f84a8:
    // 0x1f84a8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f84a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f84ac:
    // 0x1f84ac: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x1f84acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f84b0:
    // 0x1f84b0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f84b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f84b4:
    // 0x1f84b4: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f84b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f84b8:
    // 0x1f84b8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f84b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f84bc:
    // 0x1f84bc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f84bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f84c0:
    // 0x1f84c0: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f84c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f84c4:
    // 0x1f84c4: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f84c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f84c8:
    // 0x1f84c8: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f84c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f84cc:
    // 0x1f84cc: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f84ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f84d0:
    // 0x1f84d0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1f84d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f84d4:
    // 0x1f84d4: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x1f84d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f84d8:
    // 0x1f84d8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f84d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f84dc:
    // 0x1f84dc: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f84dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f84e0:
    // 0x1f84e0: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1f84e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f84e4:
    // 0x1f84e4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f84e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f84e8:
    // 0x1f84e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f84ec:
    if (ctx->pc == 0x1F84ECu) {
        ctx->pc = 0x1F84F0u;
        goto label_1f84f0;
    }
    ctx->pc = 0x1F84E8u;
    {
        const bool branch_taken_0x1f84e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f84e8) {
            ctx->pc = 0x1F8504u;
            goto label_1f8504;
        }
    }
    ctx->pc = 0x1F84F0u;
label_1f84f0:
    // 0x1f84f0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1f84f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f84f4:
    // 0x1f84f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f84f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f84f8:
    // 0x1f84f8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f84f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f84fc:
    // 0x1f84fc: 0x320f809  jalr        $t9
label_1f8500:
    if (ctx->pc == 0x1F8500u) {
        ctx->pc = 0x1F8500u;
            // 0x1f8500: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1F8504u;
        goto label_1f8504;
    }
    ctx->pc = 0x1F84FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F8504u);
        ctx->pc = 0x1F8500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F84FCu;
            // 0x1f8500: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F8504u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F8504u; }
            if (ctx->pc != 0x1F8504u) { return; }
        }
        }
    }
    ctx->pc = 0x1F8504u;
label_1f8504:
    // 0x1f8504: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f8504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f8508:
    // 0x1f8508: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f8508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f850c:
    // 0x1f850c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f850cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f8510:
    // 0x1f8510: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f8510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f8514:
    // 0x1f8514: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f8514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f8518:
    // 0x1f8518: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f8518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f851c:
    // 0x1f851c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8520:
    if (ctx->pc == 0x1F8520u) {
        ctx->pc = 0x1F8520u;
            // 0x1f8520: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F8524u;
        goto label_1f8524;
    }
    ctx->pc = 0x1F851Cu;
    {
        const bool branch_taken_0x1f851c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F851Cu;
            // 0x1f8520: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f851c) {
            ctx->pc = 0x1F854Cu;
            goto label_1f854c;
        }
    }
    ctx->pc = 0x1F8524u;
label_1f8524:
    // 0x1f8524: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f8524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f8528:
    // 0x1f8528: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f852c:
    // 0x1f852c: 0x2463b010  addiu       $v1, $v1, -0x4FF0
    ctx->pc = 0x1f852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946832));
label_1f8530:
    // 0x1f8530: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f8530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f8534:
    // 0x1f8534: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f8534u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f8538:
    // 0x1f8538: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f8538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f853c:
    // 0x1f853c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f853cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f8540:
    // 0x1f8540: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f8540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f8544:
    // 0x1f8544: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f8544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f8548:
    // 0x1f8548: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f8548u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f854c:
    // 0x1f854c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f8550:
    // 0x1f8550: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f8550u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f8554:
    // 0x1f8554: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f8554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f8558:
    // 0x1f8558: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f8558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f855c:
    // 0x1f855c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f855cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8560:
    // 0x1f8560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8564:
    // 0x1f8564: 0x3e00008  jr          $ra
label_1f8568:
    if (ctx->pc == 0x1F8568u) {
        ctx->pc = 0x1F8568u;
            // 0x1f8568: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1F856Cu;
        goto label_1f856c;
    }
    ctx->pc = 0x1F8564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8564u;
            // 0x1f8568: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F856Cu;
label_1f856c:
    // 0x1f856c: 0x0  nop
    ctx->pc = 0x1f856cu;
    // NOP
}
