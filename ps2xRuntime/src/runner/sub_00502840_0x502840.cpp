#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502840
// Address: 0x502840 - 0x5029e0
void sub_00502840_0x502840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502840_0x502840");
#endif

    switch (ctx->pc) {
        case 0x50285cu: goto label_50285c;
        case 0x50287cu: goto label_50287c;
        case 0x5028c4u: goto label_5028c4;
        case 0x5028e8u: goto label_5028e8;
        case 0x502910u: goto label_502910;
        case 0x502970u: goto label_502970;
        case 0x50297cu: goto label_50297c;
        case 0x502988u: goto label_502988;
        case 0x502994u: goto label_502994;
        case 0x5029a0u: goto label_5029a0;
        case 0x5029acu: goto label_5029ac;
        case 0x5029c4u: goto label_5029c4;
        default: break;
    }

    ctx->pc = 0x502840u;

    // 0x502840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x502840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x502844: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x502844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x502848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x502848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50284c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x50284cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x502850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x502850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x502854: 0xc140b68  jal         func_502DA0
    ctx->pc = 0x502854u;
    SET_GPR_U32(ctx, 31, 0x50285Cu);
    ctx->pc = 0x502858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502854u;
            // 0x502858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502DA0u;
    if (runtime->hasFunction(0x502DA0u)) {
        auto targetFn = runtime->lookupFunction(0x502DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50285Cu; }
        if (ctx->pc != 0x50285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502DA0_0x502da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50285Cu; }
        if (ctx->pc != 0x50285Cu) { return; }
    }
    ctx->pc = 0x50285Cu;
label_50285c:
    // 0x50285c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50285cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x502860: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x502864: 0x24634a90  addiu       $v1, $v1, 0x4A90
    ctx->pc = 0x502864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19088));
    // 0x502868: 0x24424ac8  addiu       $v0, $v0, 0x4AC8
    ctx->pc = 0x502868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19144));
    // 0x50286c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50286cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x502870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x502870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x502874: 0xc140b64  jal         func_502D90
    ctx->pc = 0x502874u;
    SET_GPR_U32(ctx, 31, 0x50287Cu);
    ctx->pc = 0x502878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502874u;
            // 0x502878: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502D90u;
    if (runtime->hasFunction(0x502D90u)) {
        auto targetFn = runtime->lookupFunction(0x502D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50287Cu; }
        if (ctx->pc != 0x50287Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502D90_0x502d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50287Cu; }
        if (ctx->pc != 0x50287Cu) { return; }
    }
    ctx->pc = 0x50287Cu;
label_50287c:
    // 0x50287c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x50287cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x502880: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x502880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x502884: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x502888: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x502888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x50288c: 0x24424a40  addiu       $v0, $v0, 0x4A40
    ctx->pc = 0x50288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19008));
    // 0x502890: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x502890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x502894: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x502894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x502898: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50289c: 0x24424a78  addiu       $v0, $v0, 0x4A78
    ctx->pc = 0x50289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19064));
    // 0x5028a0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5028a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x5028a4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x5028a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x5028a8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x5028a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x5028ac: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x5028acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x5028b0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x5028b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x5028b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5028b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x5028b8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x5028b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x5028bc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x5028BCu;
    SET_GPR_U32(ctx, 31, 0x5028C4u);
    ctx->pc = 0x5028C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5028BCu;
            // 0x5028c0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5028C4u; }
        if (ctx->pc != 0x5028C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5028C4u; }
        if (ctx->pc != 0x5028C4u) { return; }
    }
    ctx->pc = 0x5028C4u;
label_5028c4:
    // 0x5028c4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x5028c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5028c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5028c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5028cc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x5028CCu;
    {
        const bool branch_taken_0x5028cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x5028D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5028CCu;
            // 0x5028d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5028cc) {
            ctx->pc = 0x5028ECu;
            goto label_5028ec;
        }
    }
    ctx->pc = 0x5028D4u;
    // 0x5028d4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x5028d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x5028d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x5028d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x5028dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5028dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5028e0: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x5028E0u;
    SET_GPR_U32(ctx, 31, 0x5028E8u);
    ctx->pc = 0x5028E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5028E0u;
            // 0x5028e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5028E8u; }
        if (ctx->pc != 0x5028E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5028E8u; }
        if (ctx->pc != 0x5028E8u) { return; }
    }
    ctx->pc = 0x5028E8u;
label_5028e8:
    // 0x5028e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5028e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5028ec:
    // 0x5028ec: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x5028ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x5028f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5028f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5028f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5028f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5028f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5028f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5028fc: 0x3e00008  jr          $ra
    ctx->pc = 0x5028FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5028FCu;
            // 0x502900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502904u;
    // 0x502904: 0x0  nop
    ctx->pc = 0x502904u;
    // NOP
    // 0x502908: 0x0  nop
    ctx->pc = 0x502908u;
    // NOP
    // 0x50290c: 0x0  nop
    ctx->pc = 0x50290cu;
    // NOP
label_502910:
    // 0x502910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x502910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x502914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x502914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x502918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x502918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x50291c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x502920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x502920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x502924: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x502924u;
    {
        const bool branch_taken_0x502924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x502928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502924u;
            // 0x502928: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502924) {
            ctx->pc = 0x5029C4u;
            goto label_5029c4;
        }
    }
    ctx->pc = 0x50292Cu;
    // 0x50292c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50292cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x502930: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x502934: 0x24634a90  addiu       $v1, $v1, 0x4A90
    ctx->pc = 0x502934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19088));
    // 0x502938: 0x24424ac8  addiu       $v0, $v0, 0x4AC8
    ctx->pc = 0x502938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19144));
    // 0x50293c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50293cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x502940: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x502940u;
    {
        const bool branch_taken_0x502940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x502944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502940u;
            // 0x502944: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502940) {
            ctx->pc = 0x5029ACu;
            goto label_5029ac;
        }
    }
    ctx->pc = 0x502948u;
    // 0x502948: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x50294c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50294cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x502950: 0x246349f0  addiu       $v1, $v1, 0x49F0
    ctx->pc = 0x502950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18928));
    // 0x502954: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x502954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x502958: 0x24424a28  addiu       $v0, $v0, 0x4A28
    ctx->pc = 0x502958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18984));
    // 0x50295c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50295cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x502960: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x502960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x502964: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x502964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x502968: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x502968u;
    SET_GPR_U32(ctx, 31, 0x502970u);
    ctx->pc = 0x50296Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502968u;
            // 0x50296c: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502970u; }
        if (ctx->pc != 0x502970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502970u; }
        if (ctx->pc != 0x502970u) { return; }
    }
    ctx->pc = 0x502970u;
label_502970:
    // 0x502970: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x502970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x502974: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x502974u;
    SET_GPR_U32(ctx, 31, 0x50297Cu);
    ctx->pc = 0x502978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502974u;
            // 0x502978: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50297Cu; }
        if (ctx->pc != 0x50297Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50297Cu; }
        if (ctx->pc != 0x50297Cu) { return; }
    }
    ctx->pc = 0x50297Cu;
label_50297c:
    // 0x50297c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x50297cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x502980: 0xc140a90  jal         func_502A40
    ctx->pc = 0x502980u;
    SET_GPR_U32(ctx, 31, 0x502988u);
    ctx->pc = 0x502984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502980u;
            // 0x502984: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502A40u;
    if (runtime->hasFunction(0x502A40u)) {
        auto targetFn = runtime->lookupFunction(0x502A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502988u; }
        if (ctx->pc != 0x502988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502A40_0x502a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502988u; }
        if (ctx->pc != 0x502988u) { return; }
    }
    ctx->pc = 0x502988u;
label_502988:
    // 0x502988: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x502988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x50298c: 0xc140a90  jal         func_502A40
    ctx->pc = 0x50298Cu;
    SET_GPR_U32(ctx, 31, 0x502994u);
    ctx->pc = 0x502990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50298Cu;
            // 0x502990: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502A40u;
    if (runtime->hasFunction(0x502A40u)) {
        auto targetFn = runtime->lookupFunction(0x502A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502994u; }
        if (ctx->pc != 0x502994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502A40_0x502a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502994u; }
        if (ctx->pc != 0x502994u) { return; }
    }
    ctx->pc = 0x502994u;
label_502994:
    // 0x502994: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x502994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x502998: 0xc140a78  jal         func_5029E0
    ctx->pc = 0x502998u;
    SET_GPR_U32(ctx, 31, 0x5029A0u);
    ctx->pc = 0x50299Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502998u;
            // 0x50299c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5029E0u;
    if (runtime->hasFunction(0x5029E0u)) {
        auto targetFn = runtime->lookupFunction(0x5029E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5029A0u; }
        if (ctx->pc != 0x5029A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005029E0_0x5029e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5029A0u; }
        if (ctx->pc != 0x5029A0u) { return; }
    }
    ctx->pc = 0x5029A0u;
label_5029a0:
    // 0x5029a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5029a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5029a4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x5029A4u;
    SET_GPR_U32(ctx, 31, 0x5029ACu);
    ctx->pc = 0x5029A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5029A4u;
            // 0x5029a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5029ACu; }
        if (ctx->pc != 0x5029ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5029ACu; }
        if (ctx->pc != 0x5029ACu) { return; }
    }
    ctx->pc = 0x5029ACu;
label_5029ac:
    // 0x5029ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5029acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x5029b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5029b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5029b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5029B4u;
    {
        const bool branch_taken_0x5029b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5029b4) {
            ctx->pc = 0x5029B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5029B4u;
            // 0x5029b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5029C8u;
            goto label_5029c8;
        }
    }
    ctx->pc = 0x5029BCu;
    // 0x5029bc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5029BCu;
    SET_GPR_U32(ctx, 31, 0x5029C4u);
    ctx->pc = 0x5029C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5029BCu;
            // 0x5029c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5029C4u; }
        if (ctx->pc != 0x5029C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5029C4u; }
        if (ctx->pc != 0x5029C4u) { return; }
    }
    ctx->pc = 0x5029C4u;
label_5029c4:
    // 0x5029c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5029c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5029c8:
    // 0x5029c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5029c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5029cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5029ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5029d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5029d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5029d4: 0x3e00008  jr          $ra
    ctx->pc = 0x5029D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5029D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5029D4u;
            // 0x5029d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5029DCu;
    // 0x5029dc: 0x0  nop
    ctx->pc = 0x5029dcu;
    // NOP
}
