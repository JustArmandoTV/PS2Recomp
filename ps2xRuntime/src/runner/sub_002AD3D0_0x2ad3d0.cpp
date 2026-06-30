#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD3D0
// Address: 0x2ad3d0 - 0x2ad5f0
void sub_002AD3D0_0x2ad3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD3D0_0x2ad3d0");
#endif

    switch (ctx->pc) {
        case 0x2ad410u: goto label_2ad410;
        case 0x2ad418u: goto label_2ad418;
        case 0x2ad420u: goto label_2ad420;
        case 0x2ad42cu: goto label_2ad42c;
        case 0x2ad440u: goto label_2ad440;
        case 0x2ad448u: goto label_2ad448;
        case 0x2ad468u: goto label_2ad468;
        case 0x2ad470u: goto label_2ad470;
        case 0x2ad478u: goto label_2ad478;
        case 0x2ad480u: goto label_2ad480;
        case 0x2ad488u: goto label_2ad488;
        case 0x2ad490u: goto label_2ad490;
        case 0x2ad498u: goto label_2ad498;
        case 0x2ad4a0u: goto label_2ad4a0;
        case 0x2ad4a8u: goto label_2ad4a8;
        case 0x2ad4b4u: goto label_2ad4b4;
        case 0x2ad4b8u: goto label_2ad4b8;
        case 0x2ad4c4u: goto label_2ad4c4;
        case 0x2ad4e4u: goto label_2ad4e4;
        case 0x2ad4f4u: goto label_2ad4f4;
        case 0x2ad508u: goto label_2ad508;
        case 0x2ad51cu: goto label_2ad51c;
        case 0x2ad530u: goto label_2ad530;
        case 0x2ad544u: goto label_2ad544;
        case 0x2ad558u: goto label_2ad558;
        case 0x2ad56cu: goto label_2ad56c;
        case 0x2ad5c0u: goto label_2ad5c0;
        case 0x2ad5ccu: goto label_2ad5cc;
        default: break;
    }

    ctx->pc = 0x2ad3d0u;

    // 0x2ad3d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ad3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ad3d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ad3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ad3d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ad3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ad3dc: 0x2463cab8  addiu       $v1, $v1, -0x3548
    ctx->pc = 0x2ad3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953656));
    // 0x2ad3e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ad3e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ad3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ad3e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad3ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad3f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ad3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ad3f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad3f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ad3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ad3fc: 0xac508a00  sw          $s0, -0x7600($v0)
    ctx->pc = 0x2ad3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937088), GPR_U32(ctx, 16));
    // 0x2ad400: 0x2463cac8  addiu       $v1, $v1, -0x3538
    ctx->pc = 0x2ad400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953672));
    // 0x2ad404: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ad404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ad408: 0xc043eaa  jal         func_10FAA8
    ctx->pc = 0x2AD408u;
    SET_GPR_U32(ctx, 31, 0x2AD410u);
    ctx->pc = 0x2AD40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD408u;
            // 0x2ad40c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FAA8u;
    if (runtime->hasFunction(0x10FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD410u; }
        if (ctx->pc != 0x2AD410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA8_0x10faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD410u; }
        if (ctx->pc != 0x2AD410u) { return; }
    }
    ctx->pc = 0x2AD410u;
label_2ad410:
    // 0x2ad410: 0xc047bb4  jal         func_11EED0
    ctx->pc = 0x2AD410u;
    SET_GPR_U32(ctx, 31, 0x2AD418u);
    ctx->pc = 0x2AD414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD410u;
            // 0x2ad414: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EED0u;
    if (runtime->hasFunction(0x11EED0u)) {
        auto targetFn = runtime->lookupFunction(0x11EED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD418u; }
        if (ctx->pc != 0x2AD418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EED0_0x11eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD418u; }
        if (ctx->pc != 0x2AD418u) { return; }
    }
    ctx->pc = 0x2AD418u;
label_2ad418:
    // 0x2ad418: 0xc047eaa  jal         func_11FAA8
    ctx->pc = 0x2AD418u;
    SET_GPR_U32(ctx, 31, 0x2AD420u);
    ctx->pc = 0x2AD41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD418u;
            // 0x2ad41c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FAA8u;
    if (runtime->hasFunction(0x11FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x11FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD420u; }
        if (ctx->pc != 0x2AD420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011FAA8_0x11faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD420u; }
        if (ctx->pc != 0x2AD420u) { return; }
    }
    ctx->pc = 0x2AD420u;
label_2ad420:
    // 0x2ad420: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2ad420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2ad424: 0xc045706  jal         func_115C18
    ctx->pc = 0x2AD424u;
    SET_GPR_U32(ctx, 31, 0x2AD42Cu);
    ctx->pc = 0x2AD428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD424u;
            // 0x2ad428: 0x24841300  addiu       $a0, $a0, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115C18u;
    if (runtime->hasFunction(0x115C18u)) {
        auto targetFn = runtime->lookupFunction(0x115C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD42Cu; }
        if (ctx->pc != 0x2AD42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115C18_0x115c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD42Cu; }
        if (ctx->pc != 0x2AD42Cu) { return; }
    }
    ctx->pc = 0x2AD42Cu;
label_2ad42c:
    // 0x2ad42c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ad42cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ad430: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ad430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ad434: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AD434u;
    {
        const bool branch_taken_0x2ad434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad434) {
            ctx->pc = 0x2AD420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad420;
        }
    }
    ctx->pc = 0x2AD43Cu;
    // 0x2ad43c: 0x0  nop
    ctx->pc = 0x2ad43cu;
    // NOP
label_2ad440:
    // 0x2ad440: 0xc0456f2  jal         func_115BC8
    ctx->pc = 0x2AD440u;
    SET_GPR_U32(ctx, 31, 0x2AD448u);
    ctx->pc = 0x115BC8u;
    if (runtime->hasFunction(0x115BC8u)) {
        auto targetFn = runtime->lookupFunction(0x115BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD448u; }
        if (ctx->pc != 0x2AD448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115BC8_0x115bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD448u; }
        if (ctx->pc != 0x2AD448u) { return; }
    }
    ctx->pc = 0x2AD448u;
label_2ad448:
    // 0x2ad448: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ad448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ad44c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ad44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ad450: 0x0  nop
    ctx->pc = 0x2ad450u;
    // NOP
    // 0x2ad454: 0x0  nop
    ctx->pc = 0x2ad454u;
    // NOP
    // 0x2ad458: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AD458u;
    {
        const bool branch_taken_0x2ad458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad458) {
            ctx->pc = 0x2AD440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad440;
        }
    }
    ctx->pc = 0x2AD460u;
    // 0x2ad460: 0xc043eaa  jal         func_10FAA8
    ctx->pc = 0x2AD460u;
    SET_GPR_U32(ctx, 31, 0x2AD468u);
    ctx->pc = 0x2AD464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD460u;
            // 0x2ad464: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FAA8u;
    if (runtime->hasFunction(0x10FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD468u; }
        if (ctx->pc != 0x2AD468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA8_0x10faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD468u; }
        if (ctx->pc != 0x2AD468u) { return; }
    }
    ctx->pc = 0x2AD468u;
label_2ad468:
    // 0x2ad468: 0xc04095e  jal         func_102578
    ctx->pc = 0x2AD468u;
    SET_GPR_U32(ctx, 31, 0x2AD470u);
    ctx->pc = 0x102578u;
    if (runtime->hasFunction(0x102578u)) {
        auto targetFn = runtime->lookupFunction(0x102578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD470u; }
        if (ctx->pc != 0x2AD470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102578_0x102578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD470u; }
        if (ctx->pc != 0x2AD470u) { return; }
    }
    ctx->pc = 0x2AD470u;
label_2ad470:
    // 0x2ad470: 0xc040ec0  jal         func_103B00
    ctx->pc = 0x2AD470u;
    SET_GPR_U32(ctx, 31, 0x2AD478u);
    ctx->pc = 0x2AD474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD470u;
            // 0x2ad474: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103B00u;
    if (runtime->hasFunction(0x103B00u)) {
        auto targetFn = runtime->lookupFunction(0x103B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD478u; }
        if (ctx->pc != 0x2AD478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103B00_0x103b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD478u; }
        if (ctx->pc != 0x2AD478u) { return; }
    }
    ctx->pc = 0x2AD478u;
label_2ad478:
    // 0x2ad478: 0xc0451e6  jal         func_114798
    ctx->pc = 0x2AD478u;
    SET_GPR_U32(ctx, 31, 0x2AD480u);
    ctx->pc = 0x114798u;
    if (runtime->hasFunction(0x114798u)) {
        auto targetFn = runtime->lookupFunction(0x114798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD480u; }
        if (ctx->pc != 0x2AD480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114798_0x114798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD480u; }
        if (ctx->pc != 0x2AD480u) { return; }
    }
    ctx->pc = 0x2AD480u;
label_2ad480:
    // 0x2ad480: 0xc047bb4  jal         func_11EED0
    ctx->pc = 0x2AD480u;
    SET_GPR_U32(ctx, 31, 0x2AD488u);
    ctx->pc = 0x2AD484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD480u;
            // 0x2ad484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EED0u;
    if (runtime->hasFunction(0x11EED0u)) {
        auto targetFn = runtime->lookupFunction(0x11EED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD488u; }
        if (ctx->pc != 0x2AD488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EED0_0x11eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD488u; }
        if (ctx->pc != 0x2AD488u) { return; }
    }
    ctx->pc = 0x2AD488u;
label_2ad488:
    // 0x2ad488: 0xc047eaa  jal         func_11FAA8
    ctx->pc = 0x2AD488u;
    SET_GPR_U32(ctx, 31, 0x2AD490u);
    ctx->pc = 0x2AD48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD488u;
            // 0x2ad48c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FAA8u;
    if (runtime->hasFunction(0x11FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x11FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD490u; }
        if (ctx->pc != 0x2AD490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011FAA8_0x11faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD490u; }
        if (ctx->pc != 0x2AD490u) { return; }
    }
    ctx->pc = 0x2AD490u;
label_2ad490:
    // 0x2ad490: 0xc04539e  jal         func_114E78
    ctx->pc = 0x2AD490u;
    SET_GPR_U32(ctx, 31, 0x2AD498u);
    ctx->pc = 0x114E78u;
    if (runtime->hasFunction(0x114E78u)) {
        auto targetFn = runtime->lookupFunction(0x114E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD498u; }
        if (ctx->pc != 0x2AD498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114E78_0x114e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD498u; }
        if (ctx->pc != 0x2AD498u) { return; }
    }
    ctx->pc = 0x2AD498u;
label_2ad498:
    // 0x2ad498: 0xc044582  jal         func_111608
    ctx->pc = 0x2AD498u;
    SET_GPR_U32(ctx, 31, 0x2AD4A0u);
    ctx->pc = 0x111608u;
    if (runtime->hasFunction(0x111608u)) {
        auto targetFn = runtime->lookupFunction(0x111608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4A0u; }
        if (ctx->pc != 0x2AD4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111608_0x111608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4A0u; }
        if (ctx->pc != 0x2AD4A0u) { return; }
    }
    ctx->pc = 0x2AD4A0u;
label_2ad4a0:
    // 0x2ad4a0: 0xc047cf4  jal         func_11F3D0
    ctx->pc = 0x2AD4A0u;
    SET_GPR_U32(ctx, 31, 0x2AD4A8u);
    ctx->pc = 0x2AD4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4A0u;
            // 0x2ad4a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F3D0u;
    if (runtime->hasFunction(0x11F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x11F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4A8u; }
        if (ctx->pc != 0x2AD4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F3D0_0x11f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4A8u; }
        if (ctx->pc != 0x2AD4A8u) { return; }
    }
    ctx->pc = 0x2AD4A8u;
label_2ad4a8:
    // 0x2ad4a8: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x2ad4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
    // 0x2ad4ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ad4acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4b0: 0x26311290  addiu       $s1, $s1, 0x1290
    ctx->pc = 0x2ad4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4752));
label_2ad4b4:
    // 0x2ad4b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ad4b8:
    // 0x2ad4b8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2ad4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ad4bc: 0xc0455ba  jal         func_1156E8
    ctx->pc = 0x2AD4BCu;
    SET_GPR_U32(ctx, 31, 0x2AD4C4u);
    ctx->pc = 0x2AD4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4BCu;
            // 0x2ad4c0: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1156E8u;
    if (runtime->hasFunction(0x1156E8u)) {
        auto targetFn = runtime->lookupFunction(0x1156E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4C4u; }
        if (ctx->pc != 0x2AD4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001156E8_0x1156e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4C4u; }
        if (ctx->pc != 0x2AD4C4u) { return; }
    }
    ctx->pc = 0x2AD4C4u;
label_2ad4c4:
    // 0x2ad4c4: 0x442fffc  bltzl       $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2AD4C4u;
    {
        const bool branch_taken_0x2ad4c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ad4c4) {
            ctx->pc = 0x2AD4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4C4u;
            // 0x2ad4c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD4B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad4b8;
        }
    }
    ctx->pc = 0x2AD4CCu;
    // 0x2ad4cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ad4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ad4d0: 0x2e420009  sltiu       $v0, $s2, 0x9
    ctx->pc = 0x2ad4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ad4d4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AD4D4u;
    {
        const bool branch_taken_0x2ad4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4D4u;
            // 0x2ad4d8: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad4d4) {
            ctx->pc = 0x2AD4B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad4b4;
        }
    }
    ctx->pc = 0x2AD4DCu;
    // 0x2ad4dc: 0xc04620c  jal         func_118830
    ctx->pc = 0x2AD4DCu;
    SET_GPR_U32(ctx, 31, 0x2AD4E4u);
    ctx->pc = 0x118830u;
    if (runtime->hasFunction(0x118830u)) {
        auto targetFn = runtime->lookupFunction(0x118830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4E4u; }
        if (ctx->pc != 0x2AD4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118830_0x118830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4E4u; }
        if (ctx->pc != 0x2AD4E4u) { return; }
    }
    ctx->pc = 0x2AD4E4u;
label_2ad4e4:
    // 0x2ad4e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad4e8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2ad4e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ad4ec: 0xc046262  jal         func_118988
    ctx->pc = 0x2AD4ECu;
    SET_GPR_U32(ctx, 31, 0x2AD4F4u);
    ctx->pc = 0x2AD4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4ECu;
            // 0x2ad4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4F4u; }
        if (ctx->pc != 0x2AD4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4F4u; }
        if (ctx->pc != 0x2AD4F4u) { return; }
    }
    ctx->pc = 0x2AD4F4u;
label_2ad4f4:
    // 0x2ad4f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad4f8: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2ad4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2ad4fc: 0x24060980  addiu       $a2, $zero, 0x980
    ctx->pc = 0x2ad4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
    // 0x2ad500: 0xc046262  jal         func_118988
    ctx->pc = 0x2AD500u;
    SET_GPR_U32(ctx, 31, 0x2AD508u);
    ctx->pc = 0x2AD504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD500u;
            // 0x2ad504: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD508u; }
        if (ctx->pc != 0x2AD508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD508u; }
        if (ctx->pc != 0x2AD508u) { return; }
    }
    ctx->pc = 0x2AD508u;
label_2ad508:
    // 0x2ad508: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad50c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2ad50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2ad510: 0x24060a80  addiu       $a2, $zero, 0xA80
    ctx->pc = 0x2ad510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2688));
    // 0x2ad514: 0xc046262  jal         func_118988
    ctx->pc = 0x2AD514u;
    SET_GPR_U32(ctx, 31, 0x2AD51Cu);
    ctx->pc = 0x2AD518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD514u;
            // 0x2ad518: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD51Cu; }
        if (ctx->pc != 0x2AD51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD51Cu; }
        if (ctx->pc != 0x2AD51Cu) { return; }
    }
    ctx->pc = 0x2AD51Cu;
label_2ad51c:
    // 0x2ad51c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad520: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2ad520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2ad524: 0x24060981  addiu       $a2, $zero, 0x981
    ctx->pc = 0x2ad524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2433));
    // 0x2ad528: 0xc046262  jal         func_118988
    ctx->pc = 0x2AD528u;
    SET_GPR_U32(ctx, 31, 0x2AD530u);
    ctx->pc = 0x2AD52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD528u;
            // 0x2ad52c: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD530u; }
        if (ctx->pc != 0x2AD530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD530u; }
        if (ctx->pc != 0x2AD530u) { return; }
    }
    ctx->pc = 0x2AD530u;
label_2ad530:
    // 0x2ad530: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad534: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2ad534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2ad538: 0x24060a81  addiu       $a2, $zero, 0xA81
    ctx->pc = 0x2ad538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2689));
    // 0x2ad53c: 0xc046262  jal         func_118988
    ctx->pc = 0x2AD53Cu;
    SET_GPR_U32(ctx, 31, 0x2AD544u);
    ctx->pc = 0x2AD540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD53Cu;
            // 0x2ad540: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD544u; }
        if (ctx->pc != 0x2AD544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD544u; }
        if (ctx->pc != 0x2AD544u) { return; }
    }
    ctx->pc = 0x2AD544u;
label_2ad544:
    // 0x2ad544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad548: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2ad548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2ad54c: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2ad54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ad550: 0xc046262  jal         func_118988
    ctx->pc = 0x2AD550u;
    SET_GPR_U32(ctx, 31, 0x2AD558u);
    ctx->pc = 0x2AD554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD550u;
            // 0x2ad554: 0x24070fc0  addiu       $a3, $zero, 0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD558u; }
        if (ctx->pc != 0x2AD558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD558u; }
        if (ctx->pc != 0x2AD558u) { return; }
    }
    ctx->pc = 0x2AD558u;
label_2ad558:
    // 0x2ad558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad55c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2ad55cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2ad560: 0x24060801  addiu       $a2, $zero, 0x801
    ctx->pc = 0x2ad560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x2ad564: 0xc046262  jal         func_118988
    ctx->pc = 0x2AD564u;
    SET_GPR_U32(ctx, 31, 0x2AD56Cu);
    ctx->pc = 0x2AD568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD564u;
            // 0x2ad568: 0x24070fcc  addiu       $a3, $zero, 0xFCC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4044));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD56Cu; }
        if (ctx->pc != 0x2AD56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD56Cu; }
        if (ctx->pc != 0x2AD56Cu) { return; }
    }
    ctx->pc = 0x2AD56Cu;
label_2ad56c:
    // 0x2ad56c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ad56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad570: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ad570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad57c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad580: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD580u;
            // 0x2ad584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD588u;
    // 0x2ad588: 0x0  nop
    ctx->pc = 0x2ad588u;
    // NOP
    // 0x2ad58c: 0x0  nop
    ctx->pc = 0x2ad58cu;
    // NOP
    // 0x2ad590: 0x80430e8  j           func_10C3A0
    ctx->pc = 0x2AD590u;
    ctx->pc = 0x2AD594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD590u;
            // 0x2ad594: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2AD598u;
    // 0x2ad598: 0x0  nop
    ctx->pc = 0x2ad598u;
    // NOP
    // 0x2ad59c: 0x0  nop
    ctx->pc = 0x2ad59cu;
    // NOP
    // 0x2ad5a0: 0x80430e0  j           func_10C380
    ctx->pc = 0x2AD5A0u;
    ctx->pc = 0x2AD5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5A0u;
            // 0x2ad5a4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C380_0x10c380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2AD5A8u;
    // 0x2ad5a8: 0x0  nop
    ctx->pc = 0x2ad5a8u;
    // NOP
    // 0x2ad5ac: 0x0  nop
    ctx->pc = 0x2ad5acu;
    // NOP
    // 0x2ad5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ad5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ad5b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad5b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad5bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ad5c0:
    // 0x2ad5c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ad5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ad5c4: 0xc0430f4  jal         func_10C3D0
    ctx->pc = 0x2AD5C4u;
    SET_GPR_U32(ctx, 31, 0x2AD5CCu);
    ctx->pc = 0x2AD5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5C4u;
            // 0x2ad5c8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3D0u;
    if (runtime->hasFunction(0x10C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD5CCu; }
        if (ctx->pc != 0x2AD5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3D0_0x10c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD5CCu; }
        if (ctx->pc != 0x2AD5CCu) { return; }
    }
    ctx->pc = 0x2AD5CCu;
label_2ad5cc:
    // 0x2ad5cc: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2ad5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2ad5d0: 0x0  nop
    ctx->pc = 0x2ad5d0u;
    // NOP
    // 0x2ad5d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AD5D4u;
    {
        const bool branch_taken_0x2ad5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad5d4) {
            ctx->pc = 0x2AD5C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad5c0;
        }
    }
    ctx->pc = 0x2AD5DCu;
    // 0x2ad5dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad5e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5E4u;
            // 0x2ad5e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD5ECu;
    // 0x2ad5ec: 0x0  nop
    ctx->pc = 0x2ad5ecu;
    // NOP
}
