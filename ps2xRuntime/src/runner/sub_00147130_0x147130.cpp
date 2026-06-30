#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00147130
// Address: 0x147130 - 0x1473e0
void sub_00147130_0x147130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147130_0x147130");
#endif

    switch (ctx->pc) {
        case 0x147130u: goto label_147130;
        case 0x147134u: goto label_147134;
        case 0x147138u: goto label_147138;
        case 0x14713cu: goto label_14713c;
        case 0x147140u: goto label_147140;
        case 0x147144u: goto label_147144;
        case 0x147148u: goto label_147148;
        case 0x14714cu: goto label_14714c;
        case 0x147150u: goto label_147150;
        case 0x147154u: goto label_147154;
        case 0x147158u: goto label_147158;
        case 0x14715cu: goto label_14715c;
        case 0x147160u: goto label_147160;
        case 0x147164u: goto label_147164;
        case 0x147168u: goto label_147168;
        case 0x14716cu: goto label_14716c;
        case 0x147170u: goto label_147170;
        case 0x147174u: goto label_147174;
        case 0x147178u: goto label_147178;
        case 0x14717cu: goto label_14717c;
        case 0x147180u: goto label_147180;
        case 0x147184u: goto label_147184;
        case 0x147188u: goto label_147188;
        case 0x14718cu: goto label_14718c;
        case 0x147190u: goto label_147190;
        case 0x147194u: goto label_147194;
        case 0x147198u: goto label_147198;
        case 0x14719cu: goto label_14719c;
        case 0x1471a0u: goto label_1471a0;
        case 0x1471a4u: goto label_1471a4;
        case 0x1471a8u: goto label_1471a8;
        case 0x1471acu: goto label_1471ac;
        case 0x1471b0u: goto label_1471b0;
        case 0x1471b4u: goto label_1471b4;
        case 0x1471b8u: goto label_1471b8;
        case 0x1471bcu: goto label_1471bc;
        case 0x1471c0u: goto label_1471c0;
        case 0x1471c4u: goto label_1471c4;
        case 0x1471c8u: goto label_1471c8;
        case 0x1471ccu: goto label_1471cc;
        case 0x1471d0u: goto label_1471d0;
        case 0x1471d4u: goto label_1471d4;
        case 0x1471d8u: goto label_1471d8;
        case 0x1471dcu: goto label_1471dc;
        case 0x1471e0u: goto label_1471e0;
        case 0x1471e4u: goto label_1471e4;
        case 0x1471e8u: goto label_1471e8;
        case 0x1471ecu: goto label_1471ec;
        case 0x1471f0u: goto label_1471f0;
        case 0x1471f4u: goto label_1471f4;
        case 0x1471f8u: goto label_1471f8;
        case 0x1471fcu: goto label_1471fc;
        case 0x147200u: goto label_147200;
        case 0x147204u: goto label_147204;
        case 0x147208u: goto label_147208;
        case 0x14720cu: goto label_14720c;
        case 0x147210u: goto label_147210;
        case 0x147214u: goto label_147214;
        case 0x147218u: goto label_147218;
        case 0x14721cu: goto label_14721c;
        case 0x147220u: goto label_147220;
        case 0x147224u: goto label_147224;
        case 0x147228u: goto label_147228;
        case 0x14722cu: goto label_14722c;
        case 0x147230u: goto label_147230;
        case 0x147234u: goto label_147234;
        case 0x147238u: goto label_147238;
        case 0x14723cu: goto label_14723c;
        case 0x147240u: goto label_147240;
        case 0x147244u: goto label_147244;
        case 0x147248u: goto label_147248;
        case 0x14724cu: goto label_14724c;
        case 0x147250u: goto label_147250;
        case 0x147254u: goto label_147254;
        case 0x147258u: goto label_147258;
        case 0x14725cu: goto label_14725c;
        case 0x147260u: goto label_147260;
        case 0x147264u: goto label_147264;
        case 0x147268u: goto label_147268;
        case 0x14726cu: goto label_14726c;
        case 0x147270u: goto label_147270;
        case 0x147274u: goto label_147274;
        case 0x147278u: goto label_147278;
        case 0x14727cu: goto label_14727c;
        case 0x147280u: goto label_147280;
        case 0x147284u: goto label_147284;
        case 0x147288u: goto label_147288;
        case 0x14728cu: goto label_14728c;
        case 0x147290u: goto label_147290;
        case 0x147294u: goto label_147294;
        case 0x147298u: goto label_147298;
        case 0x14729cu: goto label_14729c;
        case 0x1472a0u: goto label_1472a0;
        case 0x1472a4u: goto label_1472a4;
        case 0x1472a8u: goto label_1472a8;
        case 0x1472acu: goto label_1472ac;
        case 0x1472b0u: goto label_1472b0;
        case 0x1472b4u: goto label_1472b4;
        case 0x1472b8u: goto label_1472b8;
        case 0x1472bcu: goto label_1472bc;
        case 0x1472c0u: goto label_1472c0;
        case 0x1472c4u: goto label_1472c4;
        case 0x1472c8u: goto label_1472c8;
        case 0x1472ccu: goto label_1472cc;
        case 0x1472d0u: goto label_1472d0;
        case 0x1472d4u: goto label_1472d4;
        case 0x1472d8u: goto label_1472d8;
        case 0x1472dcu: goto label_1472dc;
        case 0x1472e0u: goto label_1472e0;
        case 0x1472e4u: goto label_1472e4;
        case 0x1472e8u: goto label_1472e8;
        case 0x1472ecu: goto label_1472ec;
        case 0x1472f0u: goto label_1472f0;
        case 0x1472f4u: goto label_1472f4;
        case 0x1472f8u: goto label_1472f8;
        case 0x1472fcu: goto label_1472fc;
        case 0x147300u: goto label_147300;
        case 0x147304u: goto label_147304;
        case 0x147308u: goto label_147308;
        case 0x14730cu: goto label_14730c;
        case 0x147310u: goto label_147310;
        case 0x147314u: goto label_147314;
        case 0x147318u: goto label_147318;
        case 0x14731cu: goto label_14731c;
        case 0x147320u: goto label_147320;
        case 0x147324u: goto label_147324;
        case 0x147328u: goto label_147328;
        case 0x14732cu: goto label_14732c;
        case 0x147330u: goto label_147330;
        case 0x147334u: goto label_147334;
        case 0x147338u: goto label_147338;
        case 0x14733cu: goto label_14733c;
        case 0x147340u: goto label_147340;
        case 0x147344u: goto label_147344;
        case 0x147348u: goto label_147348;
        case 0x14734cu: goto label_14734c;
        case 0x147350u: goto label_147350;
        case 0x147354u: goto label_147354;
        case 0x147358u: goto label_147358;
        case 0x14735cu: goto label_14735c;
        case 0x147360u: goto label_147360;
        case 0x147364u: goto label_147364;
        case 0x147368u: goto label_147368;
        case 0x14736cu: goto label_14736c;
        case 0x147370u: goto label_147370;
        case 0x147374u: goto label_147374;
        case 0x147378u: goto label_147378;
        case 0x14737cu: goto label_14737c;
        case 0x147380u: goto label_147380;
        case 0x147384u: goto label_147384;
        case 0x147388u: goto label_147388;
        case 0x14738cu: goto label_14738c;
        case 0x147390u: goto label_147390;
        case 0x147394u: goto label_147394;
        case 0x147398u: goto label_147398;
        case 0x14739cu: goto label_14739c;
        case 0x1473a0u: goto label_1473a0;
        case 0x1473a4u: goto label_1473a4;
        case 0x1473a8u: goto label_1473a8;
        case 0x1473acu: goto label_1473ac;
        case 0x1473b0u: goto label_1473b0;
        case 0x1473b4u: goto label_1473b4;
        case 0x1473b8u: goto label_1473b8;
        case 0x1473bcu: goto label_1473bc;
        case 0x1473c0u: goto label_1473c0;
        case 0x1473c4u: goto label_1473c4;
        case 0x1473c8u: goto label_1473c8;
        case 0x1473ccu: goto label_1473cc;
        case 0x1473d0u: goto label_1473d0;
        case 0x1473d4u: goto label_1473d4;
        case 0x1473d8u: goto label_1473d8;
        case 0x1473dcu: goto label_1473dc;
        default: break;
    }

    ctx->pc = 0x147130u;

label_147130:
    // 0x147130: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x147130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_147134:
    // 0x147134: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x147134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_147138:
    // 0x147138: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x147138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_14713c:
    // 0x14713c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_147140:
    // 0x147140: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x147140u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147144:
    // 0x147144: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x147144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_147148:
    // 0x147148: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x147148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_14714c:
    // 0x14714c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14714cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_147150:
    // 0x147150: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x147150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_147154:
    // 0x147154: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_147158:
    // 0x147158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14715c:
    // 0x14715c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_147160:
    // 0x147160: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x147160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_147164:
    // 0x147164: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x147164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_147168:
    // 0x147168: 0x1860008f  blez        $v1, . + 4 + (0x8F << 2)
label_14716c:
    if (ctx->pc == 0x14716Cu) {
        ctx->pc = 0x14716Cu;
            // 0x14716c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147170u;
        goto label_147170;
    }
    ctx->pc = 0x147168u;
    {
        const bool branch_taken_0x147168 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147168u;
            // 0x14716c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147168) {
            ctx->pc = 0x1473A8u;
            goto label_1473a8;
        }
    }
    ctx->pc = 0x147170u;
label_147170:
    // 0x147170: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x147170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_147174:
    // 0x147174: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x147174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_147178:
    // 0x147178: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x147178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14717c:
    // 0x14717c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x14717cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_147180:
    // 0x147180: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
label_147184:
    if (ctx->pc == 0x147184u) {
        ctx->pc = 0x147188u;
        goto label_147188;
    }
    ctx->pc = 0x147180u;
    {
        const bool branch_taken_0x147180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147180) {
            ctx->pc = 0x147388u;
            goto label_147388;
        }
    }
    ctx->pc = 0x147188u;
label_147188:
    // 0x147188: 0x30a4000c  andi        $a0, $a1, 0xC
    ctx->pc = 0x147188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
label_14718c:
    // 0x14718c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x14718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_147190:
    // 0x147190: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_147194:
    if (ctx->pc == 0x147194u) {
        ctx->pc = 0x147198u;
        goto label_147198;
    }
    ctx->pc = 0x147190u;
    {
        const bool branch_taken_0x147190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x147190) {
            ctx->pc = 0x1471B0u;
            goto label_1471b0;
        }
    }
    ctx->pc = 0x147198u;
label_147198:
    // 0x147198: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x147198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14719c:
    // 0x14719c: 0x1087007c  beq         $a0, $a3, . + 4 + (0x7C << 2)
label_1471a0:
    if (ctx->pc == 0x1471A0u) {
        ctx->pc = 0x1471A4u;
        goto label_1471a4;
    }
    ctx->pc = 0x14719Cu;
    {
        const bool branch_taken_0x14719c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x14719c) {
            ctx->pc = 0x147390u;
            goto label_147390;
        }
    }
    ctx->pc = 0x1471A4u;
label_1471a4:
    // 0x1471a4: 0x10000054  b           . + 4 + (0x54 << 2)
label_1471a8:
    if (ctx->pc == 0x1471A8u) {
        ctx->pc = 0x1471ACu;
        goto label_1471ac;
    }
    ctx->pc = 0x1471A4u;
    {
        const bool branch_taken_0x1471a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1471a4) {
            ctx->pc = 0x1472F8u;
            goto label_1472f8;
        }
    }
    ctx->pc = 0x1471ACu;
label_1471ac:
    // 0x1471ac: 0x0  nop
    ctx->pc = 0x1471acu;
    // NOP
label_1471b0:
    // 0x1471b0: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x1471b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_1471b4:
    // 0x1471b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1471b8:
    if (ctx->pc == 0x1471B8u) {
        ctx->pc = 0x1471B8u;
            // 0x1471b8: 0x8cd50008  lw          $s5, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->pc = 0x1471BCu;
        goto label_1471bc;
    }
    ctx->pc = 0x1471B4u;
    {
        const bool branch_taken_0x1471b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1471B4u;
            // 0x1471b8: 0x8cd50008  lw          $s5, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471b4) {
            ctx->pc = 0x1471C8u;
            goto label_1471c8;
        }
    }
    ctx->pc = 0x1471BCu;
label_1471bc:
    // 0x1471bc: 0x3c170014  lui         $s7, 0x14
    ctx->pc = 0x1471bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)20 << 16));
label_1471c0:
    // 0x1471c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1471c4:
    if (ctx->pc == 0x1471C4u) {
        ctx->pc = 0x1471C4u;
            // 0x1471c4: 0x26f77100  addiu       $s7, $s7, 0x7100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 28928));
        ctx->pc = 0x1471C8u;
        goto label_1471c8;
    }
    ctx->pc = 0x1471C0u;
    {
        const bool branch_taken_0x1471c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1471C0u;
            // 0x1471c4: 0x26f77100  addiu       $s7, $s7, 0x7100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 28928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471c0) {
            ctx->pc = 0x1471D0u;
            goto label_1471d0;
        }
    }
    ctx->pc = 0x1471C8u;
label_1471c8:
    // 0x1471c8: 0x3c170014  lui         $s7, 0x14
    ctx->pc = 0x1471c8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)20 << 16));
label_1471cc:
    // 0x1471cc: 0x26f770d0  addiu       $s7, $s7, 0x70D0
    ctx->pc = 0x1471ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 28880));
label_1471d0:
    // 0x1471d0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1471d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1471d4:
    // 0x1471d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1471d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1471d8:
    // 0x1471d8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1471d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1471dc:
    // 0x1471dc: 0x2472fff0  addiu       $s2, $v1, -0x10
    ctx->pc = 0x1471dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1471e0:
    // 0x1471e0: 0x2b2082b  sltu        $at, $s5, $s2
    ctx->pc = 0x1471e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1471e4:
    // 0x1471e4: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
label_1471e8:
    if (ctx->pc == 0x1471E8u) {
        ctx->pc = 0x1471ECu;
        goto label_1471ec;
    }
    ctx->pc = 0x1471E4u;
    {
        const bool branch_taken_0x1471e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1471e4) {
            ctx->pc = 0x147388u;
            goto label_147388;
        }
    }
    ctx->pc = 0x1471ECu;
label_1471ec:
    // 0x1471ec: 0x0  nop
    ctx->pc = 0x1471ecu;
    // NOP
label_1471f0:
    // 0x1471f0: 0x92b10008  lbu         $s1, 0x8($s5)
    ctx->pc = 0x1471f0u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
label_1471f4:
    // 0x1471f4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1471f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1471f8:
    // 0x1471f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1471f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1471fc:
    // 0x1471fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1471fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_147200:
    // 0x147200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x147200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_147204:
    // 0x147204: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x147204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_147208:
    // 0x147208: 0x2e0f809  jalr        $s7
label_14720c:
    if (ctx->pc == 0x14720Cu) {
        ctx->pc = 0x14720Cu;
            // 0x14720c: 0x2a29821  addu        $s3, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x147210u;
        goto label_147210;
    }
    ctx->pc = 0x147208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x147210u);
        ctx->pc = 0x14720Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147208u;
            // 0x14720c: 0x2a29821  addu        $s3, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x147210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x147210u; }
            if (ctx->pc != 0x147210u) { return; }
        }
        }
    }
    ctx->pc = 0x147210u;
label_147210:
    // 0x147210: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x147210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_147214:
    // 0x147214: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
label_147218:
    if (ctx->pc == 0x147218u) {
        ctx->pc = 0x147218u;
            // 0x147218: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14721Cu;
        goto label_14721c;
    }
    ctx->pc = 0x147214u;
    {
        const bool branch_taken_0x147214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x147218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147214u;
            // 0x147218: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147214) {
            ctx->pc = 0x1472E0u;
            goto label_1472e0;
        }
    }
    ctx->pc = 0x14721Cu;
label_14721c:
    // 0x14721c: 0x0  nop
    ctx->pc = 0x14721cu;
    // NOP
label_147220:
    // 0x147220: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x147220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_147224:
    // 0x147224: 0x3c023980  lui         $v0, 0x3980
    ctx->pc = 0x147224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14720 << 16));
label_147228:
    // 0x147228: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x147228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_14722c:
    // 0x14722c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14722cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_147230:
    // 0x147230: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x147230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147234:
    // 0x147234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147238:
    // 0x147238: 0x0  nop
    ctx->pc = 0x147238u;
    // NOP
label_14723c:
    // 0x14723c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14723cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_147240:
    // 0x147240: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x147240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_147244:
    // 0x147244: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x147244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_147248:
    // 0x147248: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x147248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_14724c:
    // 0x14724c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14724cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147250:
    // 0x147250: 0x0  nop
    ctx->pc = 0x147250u;
    // NOP
label_147254:
    // 0x147254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x147254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_147258:
    // 0x147258: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x147258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14725c:
    // 0x14725c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x14725cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_147260:
    // 0x147260: 0x86620004  lh          $v0, 0x4($s3)
    ctx->pc = 0x147260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_147264:
    // 0x147264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147268:
    // 0x147268: 0x0  nop
    ctx->pc = 0x147268u;
    // NOP
label_14726c:
    // 0x14726c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14726cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_147270:
    // 0x147270: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x147270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_147274:
    // 0x147274: 0xc04cb44  jal         func_132D10
label_147278:
    if (ctx->pc == 0x147278u) {
        ctx->pc = 0x147278u;
            // 0x147278: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->pc = 0x14727Cu;
        goto label_14727c;
    }
    ctx->pc = 0x147274u;
    SET_GPR_U32(ctx, 31, 0x14727Cu);
    ctx->pc = 0x147278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147274u;
            // 0x147278: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14727Cu; }
        if (ctx->pc != 0x14727Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14727Cu; }
        if (ctx->pc != 0x14727Cu) { return; }
    }
    ctx->pc = 0x14727Cu;
label_14727c:
    // 0x14727c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x14727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_147280:
    // 0x147280: 0x3c034580  lui         $v1, 0x4580
    ctx->pc = 0x147280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17792 << 16));
label_147284:
    // 0x147284: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x147284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_147288:
    // 0x147288: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x147288u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_14728c:
    // 0x14728c: 0x291182b  sltu        $v1, $s4, $s1
    ctx->pc = 0x14728cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_147290:
    // 0x147290: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x147290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_147294:
    // 0x147294: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x147294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_147298:
    // 0x147298: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x147298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14729c:
    // 0x14729c: 0x0  nop
    ctx->pc = 0x14729cu;
    // NOP
label_1472a0:
    // 0x1472a0: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x1472a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
label_1472a4:
    // 0x1472a4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1472a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1472a8:
    // 0x1472a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1472a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1472ac:
    // 0x1472ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1472acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1472b0:
    // 0x1472b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1472b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1472b4:
    // 0x1472b4: 0x0  nop
    ctx->pc = 0x1472b4u;
    // NOP
label_1472b8:
    // 0x1472b8: 0xa6640002  sh          $a0, 0x2($s3)
    ctx->pc = 0x1472b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 4));
label_1472bc:
    // 0x1472bc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1472bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1472c0:
    // 0x1472c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1472c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1472c4:
    // 0x1472c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1472c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1472c8:
    // 0x1472c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1472c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1472cc:
    // 0x1472cc: 0x0  nop
    ctx->pc = 0x1472ccu;
    // NOP
label_1472d0:
    // 0x1472d0: 0xa6640004  sh          $a0, 0x4($s3)
    ctx->pc = 0x1472d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 4));
label_1472d4:
    // 0x1472d4: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_1472d8:
    if (ctx->pc == 0x1472D8u) {
        ctx->pc = 0x1472D8u;
            // 0x1472d8: 0x26730006  addiu       $s3, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->pc = 0x1472DCu;
        goto label_1472dc;
    }
    ctx->pc = 0x1472D4u;
    {
        const bool branch_taken_0x1472d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1472D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1472D4u;
            // 0x1472d8: 0x26730006  addiu       $s3, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472d4) {
            ctx->pc = 0x147220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147220;
        }
    }
    ctx->pc = 0x1472DCu;
label_1472dc:
    // 0x1472dc: 0x0  nop
    ctx->pc = 0x1472dcu;
    // NOP
label_1472e0:
    // 0x1472e0: 0x2b2182b  sltu        $v1, $s5, $s2
    ctx->pc = 0x1472e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1472e4:
    // 0x1472e4: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_1472e8:
    if (ctx->pc == 0x1472E8u) {
        ctx->pc = 0x1472ECu;
        goto label_1472ec;
    }
    ctx->pc = 0x1472E4u;
    {
        const bool branch_taken_0x1472e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1472e4) {
            ctx->pc = 0x1471F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1471f0;
        }
    }
    ctx->pc = 0x1472ECu;
label_1472ec:
    // 0x1472ec: 0x10000026  b           . + 4 + (0x26 << 2)
label_1472f0:
    if (ctx->pc == 0x1472F0u) {
        ctx->pc = 0x1472F4u;
        goto label_1472f4;
    }
    ctx->pc = 0x1472ECu;
    {
        const bool branch_taken_0x1472ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1472ec) {
            ctx->pc = 0x147388u;
            goto label_147388;
        }
    }
    ctx->pc = 0x1472F4u;
label_1472f4:
    // 0x1472f4: 0x0  nop
    ctx->pc = 0x1472f4u;
    // NOP
label_1472f8:
    // 0x1472f8: 0x30a40070  andi        $a0, $a1, 0x70
    ctx->pc = 0x1472f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)112);
label_1472fc:
    // 0x1472fc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1472fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_147300:
    // 0x147300: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_147304:
    if (ctx->pc == 0x147304u) {
        ctx->pc = 0x147308u;
        goto label_147308;
    }
    ctx->pc = 0x147300u;
    {
        const bool branch_taken_0x147300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x147300) {
            ctx->pc = 0x147310u;
            goto label_147310;
        }
    }
    ctx->pc = 0x147308u;
label_147308:
    // 0x147308: 0x10000003  b           . + 4 + (0x3 << 2)
label_14730c:
    if (ctx->pc == 0x14730Cu) {
        ctx->pc = 0x147310u;
        goto label_147310;
    }
    ctx->pc = 0x147308u;
    {
        const bool branch_taken_0x147308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147308) {
            ctx->pc = 0x147318u;
            goto label_147318;
        }
    }
    ctx->pc = 0x147310u;
label_147310:
    // 0x147310: 0x10000003  b           . + 4 + (0x3 << 2)
label_147314:
    if (ctx->pc == 0x147314u) {
        ctx->pc = 0x147318u;
        goto label_147318;
    }
    ctx->pc = 0x147310u;
    {
        const bool branch_taken_0x147310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147310) {
            ctx->pc = 0x147320u;
            goto label_147320;
        }
    }
    ctx->pc = 0x147318u;
label_147318:
    // 0x147318: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x147318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14731c:
    // 0x14731c: 0x0  nop
    ctx->pc = 0x14731cu;
    // NOP
label_147320:
    // 0x147320: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x147320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_147324:
    // 0x147324: 0x8cd50008  lw          $s5, 0x8($a2)
    ctx->pc = 0x147324u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_147328:
    // 0x147328: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x147328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_14732c:
    // 0x14732c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x14732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_147330:
    // 0x147330: 0x2473fff0  addiu       $s3, $v1, -0x10
    ctx->pc = 0x147330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_147334:
    // 0x147334: 0x2b3082b  sltu        $at, $s5, $s3
    ctx->pc = 0x147334u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_147338:
    // 0x147338: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_14733c:
    if (ctx->pc == 0x14733Cu) {
        ctx->pc = 0x147340u;
        goto label_147340;
    }
    ctx->pc = 0x147338u;
    {
        const bool branch_taken_0x147338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147338) {
            ctx->pc = 0x147388u;
            goto label_147388;
        }
    }
    ctx->pc = 0x147340u;
label_147340:
    // 0x147340: 0x79100  sll         $s2, $a3, 4
    ctx->pc = 0x147340u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_147344:
    // 0x147344: 0x0  nop
    ctx->pc = 0x147344u;
    // NOP
label_147348:
    // 0x147348: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x147348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_14734c:
    // 0x14734c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14734cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_147350:
    // 0x147350: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_147354:
    if (ctx->pc == 0x147354u) {
        ctx->pc = 0x147354u;
            // 0x147354: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->pc = 0x147358u;
        goto label_147358;
    }
    ctx->pc = 0x147350u;
    {
        const bool branch_taken_0x147350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x147354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147350u;
            // 0x147354: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147350) {
            ctx->pc = 0x147378u;
            goto label_147378;
        }
    }
    ctx->pc = 0x147358u;
label_147358:
    // 0x147358: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x147358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14735c:
    // 0x14735c: 0xc04cb44  jal         func_132D10
label_147360:
    if (ctx->pc == 0x147360u) {
        ctx->pc = 0x147360u;
            // 0x147360: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147364u;
        goto label_147364;
    }
    ctx->pc = 0x14735Cu;
    SET_GPR_U32(ctx, 31, 0x147364u);
    ctx->pc = 0x147360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14735Cu;
            // 0x147360: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147364u; }
        if (ctx->pc != 0x147364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147364u; }
        if (ctx->pc != 0x147364u) { return; }
    }
    ctx->pc = 0x147364u;
label_147364:
    // 0x147364: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x147364u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_147368:
    // 0x147368: 0x291182b  sltu        $v1, $s4, $s1
    ctx->pc = 0x147368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_14736c:
    // 0x14736c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_147370:
    if (ctx->pc == 0x147370u) {
        ctx->pc = 0x147370u;
            // 0x147370: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->pc = 0x147374u;
        goto label_147374;
    }
    ctx->pc = 0x14736Cu;
    {
        const bool branch_taken_0x14736c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14736Cu;
            // 0x147370: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14736c) {
            ctx->pc = 0x147358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147358;
        }
    }
    ctx->pc = 0x147374u;
label_147374:
    // 0x147374: 0x0  nop
    ctx->pc = 0x147374u;
    // NOP
label_147378:
    // 0x147378: 0x2b3182b  sltu        $v1, $s5, $s3
    ctx->pc = 0x147378u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_14737c:
    // 0x14737c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_147380:
    if (ctx->pc == 0x147380u) {
        ctx->pc = 0x147384u;
        goto label_147384;
    }
    ctx->pc = 0x14737Cu;
    {
        const bool branch_taken_0x14737c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14737c) {
            ctx->pc = 0x147348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147348;
        }
    }
    ctx->pc = 0x147384u;
label_147384:
    // 0x147384: 0x0  nop
    ctx->pc = 0x147384u;
    // NOP
label_147388:
    // 0x147388: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x147388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_14738c:
    // 0x14738c: 0x0  nop
    ctx->pc = 0x14738cu;
    // NOP
label_147390:
    // 0x147390: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x147390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_147394:
    // 0x147394: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x147394u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_147398:
    // 0x147398: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x147398u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_14739c:
    // 0x14739c: 0x5460ff75  bnel        $v1, $zero, . + 4 + (-0x8B << 2)
label_1473a0:
    if (ctx->pc == 0x1473A0u) {
        ctx->pc = 0x1473A0u;
            // 0x1473a0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1473A4u;
        goto label_1473a4;
    }
    ctx->pc = 0x14739Cu;
    {
        const bool branch_taken_0x14739c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14739c) {
            ctx->pc = 0x1473A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14739Cu;
            // 0x1473a0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147174u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147174;
        }
    }
    ctx->pc = 0x1473A4u;
label_1473a4:
    // 0x1473a4: 0x0  nop
    ctx->pc = 0x1473a4u;
    // NOP
label_1473a8:
    // 0x1473a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1473a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1473ac:
    // 0x1473ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1473acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1473b0:
    // 0x1473b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1473b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1473b4:
    // 0x1473b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1473b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1473b8:
    // 0x1473b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1473b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1473bc:
    // 0x1473bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1473bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1473c0:
    // 0x1473c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1473c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1473c4:
    // 0x1473c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1473c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1473c8:
    // 0x1473c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1473c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1473cc:
    // 0x1473cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1473ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1473d0:
    // 0x1473d0: 0x3e00008  jr          $ra
label_1473d4:
    if (ctx->pc == 0x1473D4u) {
        ctx->pc = 0x1473D4u;
            // 0x1473d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1473D8u;
        goto label_1473d8;
    }
    ctx->pc = 0x1473D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1473D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1473D0u;
            // 0x1473d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1473D8u;
label_1473d8:
    // 0x1473d8: 0x0  nop
    ctx->pc = 0x1473d8u;
    // NOP
label_1473dc:
    // 0x1473dc: 0x0  nop
    ctx->pc = 0x1473dcu;
    // NOP
}
