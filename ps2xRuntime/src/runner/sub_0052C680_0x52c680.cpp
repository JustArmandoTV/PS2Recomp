#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052C680
// Address: 0x52c680 - 0x52c820
void sub_0052C680_0x52c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052C680_0x52c680");
#endif

    switch (ctx->pc) {
        case 0x52c69cu: goto label_52c69c;
        case 0x52c6bcu: goto label_52c6bc;
        case 0x52c70cu: goto label_52c70c;
        case 0x52c728u: goto label_52c728;
        case 0x52c750u: goto label_52c750;
        case 0x52c7b0u: goto label_52c7b0;
        case 0x52c7bcu: goto label_52c7bc;
        case 0x52c7c8u: goto label_52c7c8;
        case 0x52c7d4u: goto label_52c7d4;
        case 0x52c7e0u: goto label_52c7e0;
        case 0x52c7ecu: goto label_52c7ec;
        case 0x52c804u: goto label_52c804;
        default: break;
    }

    ctx->pc = 0x52c680u;

    // 0x52c680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52c680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x52c684: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x52c684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x52c688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52c688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x52c68c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x52c68cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x52c690: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52c694: 0xc14b240  jal         func_52C900
    ctx->pc = 0x52C694u;
    SET_GPR_U32(ctx, 31, 0x52C69Cu);
    ctx->pc = 0x52C698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C694u;
            // 0x52c698: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52C900u;
    if (runtime->hasFunction(0x52C900u)) {
        auto targetFn = runtime->lookupFunction(0x52C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C69Cu; }
        if (ctx->pc != 0x52C69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052C900_0x52c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C69Cu; }
        if (ctx->pc != 0x52C69Cu) { return; }
    }
    ctx->pc = 0x52C69Cu;
label_52c69c:
    // 0x52c69c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52c6a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52c6a4: 0x24636960  addiu       $v1, $v1, 0x6960
    ctx->pc = 0x52c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26976));
    // 0x52c6a8: 0x24426998  addiu       $v0, $v0, 0x6998
    ctx->pc = 0x52c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
    // 0x52c6ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x52c6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52c6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52c6b4: 0xc14b23c  jal         func_52C8F0
    ctx->pc = 0x52C6B4u;
    SET_GPR_U32(ctx, 31, 0x52C6BCu);
    ctx->pc = 0x52C6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C6B4u;
            // 0x52c6b8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52C8F0u;
    if (runtime->hasFunction(0x52C8F0u)) {
        auto targetFn = runtime->lookupFunction(0x52C8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C6BCu; }
        if (ctx->pc != 0x52C6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052C8F0_0x52c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C6BCu; }
        if (ctx->pc != 0x52C6BCu) { return; }
    }
    ctx->pc = 0x52C6BCu;
label_52c6bc:
    // 0x52c6bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x52c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x52c6c0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x52c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x52c6c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52c6c8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x52c6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x52c6cc: 0x244268b0  addiu       $v0, $v0, 0x68B0
    ctx->pc = 0x52c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
    // 0x52c6d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x52c6d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52c6d8: 0x244268e8  addiu       $v0, $v0, 0x68E8
    ctx->pc = 0x52c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26856));
    // 0x52c6dc: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x52c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x52c6e0: 0x3c024053  lui         $v0, 0x4053
    ctx->pc = 0x52c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16467 << 16));
    // 0x52c6e4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x52c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x52c6e8: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x52c6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x52c6ec: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x52c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x52c6f0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x52c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x52c6f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x52c6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x52c6f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x52c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x52c6fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x52c700: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x52c700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x52c704: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x52C704u;
    SET_GPR_U32(ctx, 31, 0x52C70Cu);
    ctx->pc = 0x52C708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C704u;
            // 0x52c708: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C70Cu; }
        if (ctx->pc != 0x52C70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C70Cu; }
        if (ctx->pc != 0x52C70Cu) { return; }
    }
    ctx->pc = 0x52C70Cu;
label_52c70c:
    // 0x52c70c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x52c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x52c710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x52c710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52c714: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x52C714u;
    {
        const bool branch_taken_0x52c714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x52C718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C714u;
            // 0x52c718: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c714) {
            ctx->pc = 0x52C72Cu;
            goto label_52c72c;
        }
    }
    ctx->pc = 0x52C71Cu;
    // 0x52c71c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52c71cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x52c720: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x52C720u;
    SET_GPR_U32(ctx, 31, 0x52C728u);
    ctx->pc = 0x52C724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C720u;
            // 0x52c724: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C728u; }
        if (ctx->pc != 0x52C728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C728u; }
        if (ctx->pc != 0x52C728u) { return; }
    }
    ctx->pc = 0x52C728u;
label_52c728:
    // 0x52c728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x52c728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52c72c:
    // 0x52c72c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x52c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x52c730: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52c730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52c734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52c734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52c738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52c73c: 0x3e00008  jr          $ra
    ctx->pc = 0x52C73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C73Cu;
            // 0x52c740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C744u;
    // 0x52c744: 0x0  nop
    ctx->pc = 0x52c744u;
    // NOP
    // 0x52c748: 0x0  nop
    ctx->pc = 0x52c748u;
    // NOP
    // 0x52c74c: 0x0  nop
    ctx->pc = 0x52c74cu;
    // NOP
label_52c750:
    // 0x52c750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x52c754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x52c758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52c758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52c75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52c760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52c760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52c764: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x52C764u;
    {
        const bool branch_taken_0x52c764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52C768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C764u;
            // 0x52c768: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c764) {
            ctx->pc = 0x52C804u;
            goto label_52c804;
        }
    }
    ctx->pc = 0x52C76Cu;
    // 0x52c76c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52c770: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52c770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52c774: 0x24636960  addiu       $v1, $v1, 0x6960
    ctx->pc = 0x52c774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26976));
    // 0x52c778: 0x24426998  addiu       $v0, $v0, 0x6998
    ctx->pc = 0x52c778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
    // 0x52c77c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x52c780: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x52C780u;
    {
        const bool branch_taken_0x52c780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52C784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C780u;
            // 0x52c784: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c780) {
            ctx->pc = 0x52C7ECu;
            goto label_52c7ec;
        }
    }
    ctx->pc = 0x52C788u;
    // 0x52c788: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52c788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52c78c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52c790: 0x24636910  addiu       $v1, $v1, 0x6910
    ctx->pc = 0x52c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26896));
    // 0x52c794: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52c794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x52c798: 0x24426948  addiu       $v0, $v0, 0x6948
    ctx->pc = 0x52c798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
    // 0x52c79c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x52c7a0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x52c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x52c7a4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x52c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x52c7a8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x52C7A8u;
    SET_GPR_U32(ctx, 31, 0x52C7B0u);
    ctx->pc = 0x52C7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C7A8u;
            // 0x52c7ac: 0x24a5c1a0  addiu       $a1, $a1, -0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7B0u; }
        if (ctx->pc != 0x52C7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7B0u; }
        if (ctx->pc != 0x52C7B0u) { return; }
    }
    ctx->pc = 0x52C7B0u;
label_52c7b0:
    // 0x52c7b0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x52c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x52c7b4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x52C7B4u;
    SET_GPR_U32(ctx, 31, 0x52C7BCu);
    ctx->pc = 0x52C7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C7B4u;
            // 0x52c7b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7BCu; }
        if (ctx->pc != 0x52C7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7BCu; }
        if (ctx->pc != 0x52C7BCu) { return; }
    }
    ctx->pc = 0x52C7BCu;
label_52c7bc:
    // 0x52c7bc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x52c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x52c7c0: 0xc14b220  jal         func_52C880
    ctx->pc = 0x52C7C0u;
    SET_GPR_U32(ctx, 31, 0x52C7C8u);
    ctx->pc = 0x52C7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C7C0u;
            // 0x52c7c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52C880u;
    if (runtime->hasFunction(0x52C880u)) {
        auto targetFn = runtime->lookupFunction(0x52C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7C8u; }
        if (ctx->pc != 0x52C7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052C880_0x52c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7C8u; }
        if (ctx->pc != 0x52C7C8u) { return; }
    }
    ctx->pc = 0x52C7C8u;
label_52c7c8:
    // 0x52c7c8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x52c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x52c7cc: 0xc14b220  jal         func_52C880
    ctx->pc = 0x52C7CCu;
    SET_GPR_U32(ctx, 31, 0x52C7D4u);
    ctx->pc = 0x52C7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C7CCu;
            // 0x52c7d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52C880u;
    if (runtime->hasFunction(0x52C880u)) {
        auto targetFn = runtime->lookupFunction(0x52C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7D4u; }
        if (ctx->pc != 0x52C7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052C880_0x52c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7D4u; }
        if (ctx->pc != 0x52C7D4u) { return; }
    }
    ctx->pc = 0x52C7D4u;
label_52c7d4:
    // 0x52c7d4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x52c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x52c7d8: 0xc14b208  jal         func_52C820
    ctx->pc = 0x52C7D8u;
    SET_GPR_U32(ctx, 31, 0x52C7E0u);
    ctx->pc = 0x52C7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C7D8u;
            // 0x52c7dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52C820u;
    if (runtime->hasFunction(0x52C820u)) {
        auto targetFn = runtime->lookupFunction(0x52C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7E0u; }
        if (ctx->pc != 0x52C7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052C820_0x52c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7E0u; }
        if (ctx->pc != 0x52C7E0u) { return; }
    }
    ctx->pc = 0x52C7E0u;
label_52c7e0:
    // 0x52c7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52c7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52c7e4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x52C7E4u;
    SET_GPR_U32(ctx, 31, 0x52C7ECu);
    ctx->pc = 0x52C7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C7E4u;
            // 0x52c7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7ECu; }
        if (ctx->pc != 0x52C7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C7ECu; }
        if (ctx->pc != 0x52C7ECu) { return; }
    }
    ctx->pc = 0x52C7ECu;
label_52c7ec:
    // 0x52c7ec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x52c7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x52c7f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52c7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x52c7f4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x52C7F4u;
    {
        const bool branch_taken_0x52c7f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52c7f4) {
            ctx->pc = 0x52C7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C7F4u;
            // 0x52c7f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C808u;
            goto label_52c808;
        }
    }
    ctx->pc = 0x52C7FCu;
    // 0x52c7fc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52C7FCu;
    SET_GPR_U32(ctx, 31, 0x52C804u);
    ctx->pc = 0x52C800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C7FCu;
            // 0x52c800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C804u; }
        if (ctx->pc != 0x52C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C804u; }
        if (ctx->pc != 0x52C804u) { return; }
    }
    ctx->pc = 0x52C804u;
label_52c804:
    // 0x52c804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52c804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52c808:
    // 0x52c808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52c808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52c80c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52c80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52c810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52c814: 0x3e00008  jr          $ra
    ctx->pc = 0x52C814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C814u;
            // 0x52c818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C81Cu;
    // 0x52c81c: 0x0  nop
    ctx->pc = 0x52c81cu;
    // NOP
}
