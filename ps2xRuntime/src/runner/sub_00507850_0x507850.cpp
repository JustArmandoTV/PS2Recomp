#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00507850
// Address: 0x507850 - 0x507a40
void sub_00507850_0x507850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507850_0x507850");
#endif

    switch (ctx->pc) {
        case 0x50786cu: goto label_50786c;
        case 0x507874u: goto label_507874;
        case 0x5078d4u: goto label_5078d4;
        case 0x5078f8u: goto label_5078f8;
        case 0x50792cu: goto label_50792c;
        case 0x507950u: goto label_507950;
        case 0x507970u: goto label_507970;
        case 0x5079d0u: goto label_5079d0;
        case 0x5079dcu: goto label_5079dc;
        case 0x5079e8u: goto label_5079e8;
        case 0x5079f4u: goto label_5079f4;
        case 0x507a00u: goto label_507a00;
        case 0x507a0cu: goto label_507a0c;
        case 0x507a24u: goto label_507a24;
        default: break;
    }

    ctx->pc = 0x507850u;

    // 0x507850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x507850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x507854: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x507854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x507858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x507858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50785c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x50785cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x507860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x507860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x507864: 0xc141f68  jal         func_507DA0
    ctx->pc = 0x507864u;
    SET_GPR_U32(ctx, 31, 0x50786Cu);
    ctx->pc = 0x507868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507864u;
            // 0x507868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x507DA0u;
    if (runtime->hasFunction(0x507DA0u)) {
        auto targetFn = runtime->lookupFunction(0x507DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50786Cu; }
        if (ctx->pc != 0x50786Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00507DA0_0x507da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50786Cu; }
        if (ctx->pc != 0x50786Cu) { return; }
    }
    ctx->pc = 0x50786Cu;
label_50786c:
    // 0x50786c: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x50786Cu;
    SET_GPR_U32(ctx, 31, 0x507874u);
    ctx->pc = 0x507870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50786Cu;
            // 0x507870: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507874u; }
        if (ctx->pc != 0x507874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507874u; }
        if (ctx->pc != 0x507874u) { return; }
    }
    ctx->pc = 0x507874u;
label_507874:
    // 0x507874: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x507878: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50787c: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x50787cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x507880: 0x24425098  addiu       $v0, $v0, 0x5098
    ctx->pc = 0x507880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20632));
    // 0x507884: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x507884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x507888: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x507888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x50788c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50788cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x507890: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x507890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x507894: 0x24635010  addiu       $v1, $v1, 0x5010
    ctx->pc = 0x507894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20496));
    // 0x507898: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50789c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5078a0: 0x24425048  addiu       $v0, $v0, 0x5048
    ctx->pc = 0x5078a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20552));
    // 0x5078a4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5078a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x5078a8: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x5078a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x5078ac: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x5078acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x5078b0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x5078b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x5078b4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x5078b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x5078b8: 0x3c034198  lui         $v1, 0x4198
    ctx->pc = 0x5078b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16792 << 16));
    // 0x5078bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5078bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x5078c0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x5078c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x5078c4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x5078c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x5078c8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x5078c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x5078cc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x5078CCu;
    SET_GPR_U32(ctx, 31, 0x5078D4u);
    ctx->pc = 0x5078D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5078CCu;
            // 0x5078d0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5078D4u; }
        if (ctx->pc != 0x5078D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5078D4u; }
        if (ctx->pc != 0x5078D4u) { return; }
    }
    ctx->pc = 0x5078D4u;
label_5078d4:
    // 0x5078d4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x5078d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5078d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5078d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5078dc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x5078DCu;
    {
        const bool branch_taken_0x5078dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x5078E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5078DCu;
            // 0x5078e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5078dc) {
            ctx->pc = 0x5078FCu;
            goto label_5078fc;
        }
    }
    ctx->pc = 0x5078E4u;
    // 0x5078e4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x5078e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x5078e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x5078e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x5078ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5078ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5078f0: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x5078F0u;
    SET_GPR_U32(ctx, 31, 0x5078F8u);
    ctx->pc = 0x5078F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5078F0u;
            // 0x5078f4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5078F8u; }
        if (ctx->pc != 0x5078F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5078F8u; }
        if (ctx->pc != 0x5078F8u) { return; }
    }
    ctx->pc = 0x5078F8u;
label_5078f8:
    // 0x5078f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5078f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5078fc:
    // 0x5078fc: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x5078fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x507900: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x507900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x507904: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x507904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x507908: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x507908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x50790c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x50790cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x507910: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x507910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x507914: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x507914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x507918: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x507918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x50791c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x50791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x507920: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x507920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x507924: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x507924u;
    SET_GPR_U32(ctx, 31, 0x50792Cu);
    ctx->pc = 0x507928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507924u;
            // 0x507928: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50792Cu; }
        if (ctx->pc != 0x50792Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50792Cu; }
        if (ctx->pc != 0x50792Cu) { return; }
    }
    ctx->pc = 0x50792Cu;
label_50792c:
    // 0x50792c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x50792cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x507930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x507930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507934: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x507934u;
    {
        const bool branch_taken_0x507934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x507938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507934u;
            // 0x507938: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507934) {
            ctx->pc = 0x507954u;
            goto label_507954;
        }
    }
    ctx->pc = 0x50793Cu;
    // 0x50793c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x50793cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x507940: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x507940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x507944: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x507944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x507948: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x507948u;
    SET_GPR_U32(ctx, 31, 0x507950u);
    ctx->pc = 0x50794Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507948u;
            // 0x50794c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507950u; }
        if (ctx->pc != 0x507950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507950u; }
        if (ctx->pc != 0x507950u) { return; }
    }
    ctx->pc = 0x507950u;
label_507950:
    // 0x507950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x507950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_507954:
    // 0x507954: 0xae040094  sw          $a0, 0x94($s0)
    ctx->pc = 0x507954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 4));
    // 0x507958: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x507958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50795c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50795cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x507960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507964: 0x3e00008  jr          $ra
    ctx->pc = 0x507964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507964u;
            // 0x507968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50796Cu;
    // 0x50796c: 0x0  nop
    ctx->pc = 0x50796cu;
    // NOP
label_507970:
    // 0x507970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x507970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x507974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x507974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x507978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x507978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x50797c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x507980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x507980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507984: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x507984u;
    {
        const bool branch_taken_0x507984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x507988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507984u;
            // 0x507988: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507984) {
            ctx->pc = 0x507A24u;
            goto label_507a24;
        }
    }
    ctx->pc = 0x50798Cu;
    // 0x50798c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50798cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x507990: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x507994: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x507994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x507998: 0x24425098  addiu       $v0, $v0, 0x5098
    ctx->pc = 0x507998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20632));
    // 0x50799c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50799cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5079a0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x5079A0u;
    {
        const bool branch_taken_0x5079a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5079A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5079A0u;
            // 0x5079a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5079a0) {
            ctx->pc = 0x507A0Cu;
            goto label_507a0c;
        }
    }
    ctx->pc = 0x5079A8u;
    // 0x5079a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5079a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x5079ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5079acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5079b0: 0x24634fc0  addiu       $v1, $v1, 0x4FC0
    ctx->pc = 0x5079b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20416));
    // 0x5079b4: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x5079b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x5079b8: 0x24424ff8  addiu       $v0, $v0, 0x4FF8
    ctx->pc = 0x5079b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20472));
    // 0x5079bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5079bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5079c0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5079c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x5079c4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x5079c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x5079c8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x5079C8u;
    SET_GPR_U32(ctx, 31, 0x5079D0u);
    ctx->pc = 0x5079CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5079C8u;
            // 0x5079cc: 0x24a57b10  addiu       $a1, $a1, 0x7B10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5079D0u; }
        if (ctx->pc != 0x5079D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5079D0u; }
        if (ctx->pc != 0x5079D0u) { return; }
    }
    ctx->pc = 0x5079D0u;
label_5079d0:
    // 0x5079d0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x5079d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x5079d4: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x5079D4u;
    SET_GPR_U32(ctx, 31, 0x5079DCu);
    ctx->pc = 0x5079D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5079D4u;
            // 0x5079d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5079DCu; }
        if (ctx->pc != 0x5079DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5079DCu; }
        if (ctx->pc != 0x5079DCu) { return; }
    }
    ctx->pc = 0x5079DCu;
label_5079dc:
    // 0x5079dc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x5079dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x5079e0: 0xc141ea8  jal         func_507AA0
    ctx->pc = 0x5079E0u;
    SET_GPR_U32(ctx, 31, 0x5079E8u);
    ctx->pc = 0x5079E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5079E0u;
            // 0x5079e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x507AA0u;
    if (runtime->hasFunction(0x507AA0u)) {
        auto targetFn = runtime->lookupFunction(0x507AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5079E8u; }
        if (ctx->pc != 0x5079E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00507AA0_0x507aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5079E8u; }
        if (ctx->pc != 0x5079E8u) { return; }
    }
    ctx->pc = 0x5079E8u;
label_5079e8:
    // 0x5079e8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x5079e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x5079ec: 0xc141ea8  jal         func_507AA0
    ctx->pc = 0x5079ECu;
    SET_GPR_U32(ctx, 31, 0x5079F4u);
    ctx->pc = 0x5079F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5079ECu;
            // 0x5079f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x507AA0u;
    if (runtime->hasFunction(0x507AA0u)) {
        auto targetFn = runtime->lookupFunction(0x507AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5079F4u; }
        if (ctx->pc != 0x5079F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00507AA0_0x507aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5079F4u; }
        if (ctx->pc != 0x5079F4u) { return; }
    }
    ctx->pc = 0x5079F4u;
label_5079f4:
    // 0x5079f4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x5079f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x5079f8: 0xc141e90  jal         func_507A40
    ctx->pc = 0x5079F8u;
    SET_GPR_U32(ctx, 31, 0x507A00u);
    ctx->pc = 0x5079FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5079F8u;
            // 0x5079fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x507A40u;
    if (runtime->hasFunction(0x507A40u)) {
        auto targetFn = runtime->lookupFunction(0x507A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507A00u; }
        if (ctx->pc != 0x507A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00507A40_0x507a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507A00u; }
        if (ctx->pc != 0x507A00u) { return; }
    }
    ctx->pc = 0x507A00u;
label_507a00:
    // 0x507a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x507a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507a04: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x507A04u;
    SET_GPR_U32(ctx, 31, 0x507A0Cu);
    ctx->pc = 0x507A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507A04u;
            // 0x507a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507A0Cu; }
        if (ctx->pc != 0x507A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507A0Cu; }
        if (ctx->pc != 0x507A0Cu) { return; }
    }
    ctx->pc = 0x507A0Cu;
label_507a0c:
    // 0x507a0c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x507a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x507a10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x507a10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x507a14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x507A14u;
    {
        const bool branch_taken_0x507a14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x507a14) {
            ctx->pc = 0x507A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507A14u;
            // 0x507a18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507A28u;
            goto label_507a28;
        }
    }
    ctx->pc = 0x507A1Cu;
    // 0x507a1c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x507A1Cu;
    SET_GPR_U32(ctx, 31, 0x507A24u);
    ctx->pc = 0x507A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507A1Cu;
            // 0x507a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507A24u; }
        if (ctx->pc != 0x507A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507A24u; }
        if (ctx->pc != 0x507A24u) { return; }
    }
    ctx->pc = 0x507A24u;
label_507a24:
    // 0x507a24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x507a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_507a28:
    // 0x507a28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x507a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x507a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x507a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x507a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507a34: 0x3e00008  jr          $ra
    ctx->pc = 0x507A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507A34u;
            // 0x507a38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x507A3Cu;
    // 0x507a3c: 0x0  nop
    ctx->pc = 0x507a3cu;
    // NOP
}
