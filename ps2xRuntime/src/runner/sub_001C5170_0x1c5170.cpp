#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5170
// Address: 0x1c5170 - 0x1c5410
void sub_001C5170_0x1c5170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5170_0x1c5170");
#endif

    switch (ctx->pc) {
        case 0x1c51a0u: goto label_1c51a0;
        case 0x1c51b0u: goto label_1c51b0;
        case 0x1c51c0u: goto label_1c51c0;
        case 0x1c51d0u: goto label_1c51d0;
        case 0x1c51e0u: goto label_1c51e0;
        case 0x1c51f0u: goto label_1c51f0;
        case 0x1c5200u: goto label_1c5200;
        case 0x1c5210u: goto label_1c5210;
        case 0x1c5220u: goto label_1c5220;
        case 0x1c5230u: goto label_1c5230;
        case 0x1c5240u: goto label_1c5240;
        case 0x1c5250u: goto label_1c5250;
        case 0x1c5260u: goto label_1c5260;
        case 0x1c5270u: goto label_1c5270;
        case 0x1c5280u: goto label_1c5280;
        case 0x1c5290u: goto label_1c5290;
        case 0x1c52a0u: goto label_1c52a0;
        case 0x1c52b0u: goto label_1c52b0;
        case 0x1c52c0u: goto label_1c52c0;
        case 0x1c52d0u: goto label_1c52d0;
        case 0x1c52e0u: goto label_1c52e0;
        case 0x1c52f0u: goto label_1c52f0;
        case 0x1c5300u: goto label_1c5300;
        case 0x1c5310u: goto label_1c5310;
        case 0x1c5320u: goto label_1c5320;
        case 0x1c5330u: goto label_1c5330;
        case 0x1c5340u: goto label_1c5340;
        case 0x1c5350u: goto label_1c5350;
        case 0x1c5360u: goto label_1c5360;
        case 0x1c5370u: goto label_1c5370;
        case 0x1c5380u: goto label_1c5380;
        case 0x1c5390u: goto label_1c5390;
        case 0x1c53a0u: goto label_1c53a0;
        case 0x1c53b0u: goto label_1c53b0;
        case 0x1c53c0u: goto label_1c53c0;
        case 0x1c53d0u: goto label_1c53d0;
        case 0x1c53e0u: goto label_1c53e0;
        case 0x1c53f0u: goto label_1c53f0;
        default: break;
    }

    ctx->pc = 0x1c5170u;

    // 0x1c5170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5174: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c5174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c5178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c517c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1c517cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1c5180: 0x2610a4e8  addiu       $s0, $s0, -0x5B18
    ctx->pc = 0x1c5180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943976));
    // 0x1c5184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5188: 0xac451ff8  sw          $a1, 0x1FF8($v0)
    ctx->pc = 0x1c5188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8184), GPR_U32(ctx, 5));
    // 0x1c518c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c518cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5198: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5198u;
    SET_GPR_U32(ctx, 31, 0x1C51A0u);
    ctx->pc = 0x1C519Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5198u;
            // 0x1c519c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51A0u; }
        if (ctx->pc != 0x1C51A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51A0u; }
        if (ctx->pc != 0x1C51A0u) { return; }
    }
    ctx->pc = 0x1C51A0u;
label_1c51a0:
    // 0x1c51a0: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1c51a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c51a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c51a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51a8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C51A8u;
    SET_GPR_U32(ctx, 31, 0x1C51B0u);
    ctx->pc = 0x1C51ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51A8u;
            // 0x1c51ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51B0u; }
        if (ctx->pc != 0x1C51B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51B0u; }
        if (ctx->pc != 0x1C51B0u) { return; }
    }
    ctx->pc = 0x1C51B0u;
label_1c51b0:
    // 0x1c51b0: 0x26240006  addiu       $a0, $s1, 0x6
    ctx->pc = 0x1c51b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1c51b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c51b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C51B8u;
    SET_GPR_U32(ctx, 31, 0x1C51C0u);
    ctx->pc = 0x1C51BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51B8u;
            // 0x1c51bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51C0u; }
        if (ctx->pc != 0x1C51C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51C0u; }
        if (ctx->pc != 0x1C51C0u) { return; }
    }
    ctx->pc = 0x1C51C0u;
label_1c51c0:
    // 0x1c51c0: 0x26240007  addiu       $a0, $s1, 0x7
    ctx->pc = 0x1c51c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x1c51c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c51c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51c8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C51C8u;
    SET_GPR_U32(ctx, 31, 0x1C51D0u);
    ctx->pc = 0x1C51CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51C8u;
            // 0x1c51cc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51D0u; }
        if (ctx->pc != 0x1C51D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51D0u; }
        if (ctx->pc != 0x1C51D0u) { return; }
    }
    ctx->pc = 0x1C51D0u;
label_1c51d0:
    // 0x1c51d0: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1c51d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1c51d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c51d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51d8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C51D8u;
    SET_GPR_U32(ctx, 31, 0x1C51E0u);
    ctx->pc = 0x1C51DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51D8u;
            // 0x1c51dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51E0u; }
        if (ctx->pc != 0x1C51E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51E0u; }
        if (ctx->pc != 0x1C51E0u) { return; }
    }
    ctx->pc = 0x1C51E0u;
label_1c51e0:
    // 0x1c51e0: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x1c51e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1c51e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c51e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51e8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C51E8u;
    SET_GPR_U32(ctx, 31, 0x1C51F0u);
    ctx->pc = 0x1C51ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51E8u;
            // 0x1c51ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51F0u; }
        if (ctx->pc != 0x1C51F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51F0u; }
        if (ctx->pc != 0x1C51F0u) { return; }
    }
    ctx->pc = 0x1C51F0u;
label_1c51f0:
    // 0x1c51f0: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x1c51f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x1c51f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c51f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51f8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C51F8u;
    SET_GPR_U32(ctx, 31, 0x1C5200u);
    ctx->pc = 0x1C51FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51F8u;
            // 0x1c51fc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5200u; }
        if (ctx->pc != 0x1C5200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5200u; }
        if (ctx->pc != 0x1C5200u) { return; }
    }
    ctx->pc = 0x1C5200u;
label_1c5200:
    // 0x1c5200: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1c5200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1c5204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5208: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5208u;
    SET_GPR_U32(ctx, 31, 0x1C5210u);
    ctx->pc = 0x1C520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5208u;
            // 0x1c520c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5210u; }
        if (ctx->pc != 0x1C5210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5210u; }
        if (ctx->pc != 0x1C5210u) { return; }
    }
    ctx->pc = 0x1C5210u;
label_1c5210:
    // 0x1c5210: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x1c5210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x1c5214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5218: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5218u;
    SET_GPR_U32(ctx, 31, 0x1C5220u);
    ctx->pc = 0x1C521Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5218u;
            // 0x1c521c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5220u; }
        if (ctx->pc != 0x1C5220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5220u; }
        if (ctx->pc != 0x1C5220u) { return; }
    }
    ctx->pc = 0x1C5220u;
label_1c5220:
    // 0x1c5220: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x1c5220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1c5224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5228: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5228u;
    SET_GPR_U32(ctx, 31, 0x1C5230u);
    ctx->pc = 0x1C522Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5228u;
            // 0x1c522c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5230u; }
        if (ctx->pc != 0x1C5230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5230u; }
        if (ctx->pc != 0x1C5230u) { return; }
    }
    ctx->pc = 0x1C5230u;
label_1c5230:
    // 0x1c5230: 0x2624005c  addiu       $a0, $s1, 0x5C
    ctx->pc = 0x1c5230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x1c5234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5238: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5238u;
    SET_GPR_U32(ctx, 31, 0x1C5240u);
    ctx->pc = 0x1C523Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5238u;
            // 0x1c523c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5240u; }
        if (ctx->pc != 0x1C5240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5240u; }
        if (ctx->pc != 0x1C5240u) { return; }
    }
    ctx->pc = 0x1C5240u;
label_1c5240:
    // 0x1c5240: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x1c5240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x1c5244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5248: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5248u;
    SET_GPR_U32(ctx, 31, 0x1C5250u);
    ctx->pc = 0x1C524Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5248u;
            // 0x1c524c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5250u; }
        if (ctx->pc != 0x1C5250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5250u; }
        if (ctx->pc != 0x1C5250u) { return; }
    }
    ctx->pc = 0x1C5250u;
label_1c5250:
    // 0x1c5250: 0x2624007a  addiu       $a0, $s1, 0x7A
    ctx->pc = 0x1c5250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 122));
    // 0x1c5254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5258: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5258u;
    SET_GPR_U32(ctx, 31, 0x1C5260u);
    ctx->pc = 0x1C525Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5258u;
            // 0x1c525c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5260u; }
        if (ctx->pc != 0x1C5260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5260u; }
        if (ctx->pc != 0x1C5260u) { return; }
    }
    ctx->pc = 0x1C5260u;
label_1c5260:
    // 0x1c5260: 0x2624007c  addiu       $a0, $s1, 0x7C
    ctx->pc = 0x1c5260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x1c5264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5268: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5268u;
    SET_GPR_U32(ctx, 31, 0x1C5270u);
    ctx->pc = 0x1C526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5268u;
            // 0x1c526c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5270u; }
        if (ctx->pc != 0x1C5270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5270u; }
        if (ctx->pc != 0x1C5270u) { return; }
    }
    ctx->pc = 0x1C5270u;
label_1c5270:
    // 0x1c5270: 0x2624007e  addiu       $a0, $s1, 0x7E
    ctx->pc = 0x1c5270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 126));
    // 0x1c5274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5278: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5278u;
    SET_GPR_U32(ctx, 31, 0x1C5280u);
    ctx->pc = 0x1C527Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5278u;
            // 0x1c527c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5280u; }
        if (ctx->pc != 0x1C5280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5280u; }
        if (ctx->pc != 0x1C5280u) { return; }
    }
    ctx->pc = 0x1C5280u;
label_1c5280:
    // 0x1c5280: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1c5280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1c5284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5288: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5288u;
    SET_GPR_U32(ctx, 31, 0x1C5290u);
    ctx->pc = 0x1C528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5288u;
            // 0x1c528c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5290u; }
        if (ctx->pc != 0x1C5290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5290u; }
        if (ctx->pc != 0x1C5290u) { return; }
    }
    ctx->pc = 0x1C5290u;
label_1c5290:
    // 0x1c5290: 0x26240082  addiu       $a0, $s1, 0x82
    ctx->pc = 0x1c5290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 130));
    // 0x1c5294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5298: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5298u;
    SET_GPR_U32(ctx, 31, 0x1C52A0u);
    ctx->pc = 0x1C529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5298u;
            // 0x1c529c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52A0u; }
        if (ctx->pc != 0x1C52A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52A0u; }
        if (ctx->pc != 0x1C52A0u) { return; }
    }
    ctx->pc = 0x1C52A0u;
label_1c52a0:
    // 0x1c52a0: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x1c52a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x1c52a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c52a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52a8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C52A8u;
    SET_GPR_U32(ctx, 31, 0x1C52B0u);
    ctx->pc = 0x1C52ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52A8u;
            // 0x1c52ac: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52B0u; }
        if (ctx->pc != 0x1C52B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52B0u; }
        if (ctx->pc != 0x1C52B0u) { return; }
    }
    ctx->pc = 0x1C52B0u;
label_1c52b0:
    // 0x1c52b0: 0x26240088  addiu       $a0, $s1, 0x88
    ctx->pc = 0x1c52b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x1c52b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c52b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52b8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C52B8u;
    SET_GPR_U32(ctx, 31, 0x1C52C0u);
    ctx->pc = 0x1C52BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52B8u;
            // 0x1c52bc: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52C0u; }
        if (ctx->pc != 0x1C52C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52C0u; }
        if (ctx->pc != 0x1C52C0u) { return; }
    }
    ctx->pc = 0x1C52C0u;
label_1c52c0:
    // 0x1c52c0: 0x2624008c  addiu       $a0, $s1, 0x8C
    ctx->pc = 0x1c52c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    // 0x1c52c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c52c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52c8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C52C8u;
    SET_GPR_U32(ctx, 31, 0x1C52D0u);
    ctx->pc = 0x1C52CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52C8u;
            // 0x1c52cc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52D0u; }
        if (ctx->pc != 0x1C52D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52D0u; }
        if (ctx->pc != 0x1C52D0u) { return; }
    }
    ctx->pc = 0x1C52D0u;
label_1c52d0:
    // 0x1c52d0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x1c52d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1c52d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c52d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52d8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C52D8u;
    SET_GPR_U32(ctx, 31, 0x1C52E0u);
    ctx->pc = 0x1C52DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52D8u;
            // 0x1c52dc: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52E0u; }
        if (ctx->pc != 0x1C52E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52E0u; }
        if (ctx->pc != 0x1C52E0u) { return; }
    }
    ctx->pc = 0x1C52E0u;
label_1c52e0:
    // 0x1c52e0: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x1c52e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x1c52e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c52e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52e8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C52E8u;
    SET_GPR_U32(ctx, 31, 0x1C52F0u);
    ctx->pc = 0x1C52ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52E8u;
            // 0x1c52ec: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52F0u; }
        if (ctx->pc != 0x1C52F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52F0u; }
        if (ctx->pc != 0x1C52F0u) { return; }
    }
    ctx->pc = 0x1C52F0u;
label_1c52f0:
    // 0x1c52f0: 0x26240098  addiu       $a0, $s1, 0x98
    ctx->pc = 0x1c52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x1c52f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c52f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52f8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C52F8u;
    SET_GPR_U32(ctx, 31, 0x1C5300u);
    ctx->pc = 0x1C52FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52F8u;
            // 0x1c52fc: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5300u; }
        if (ctx->pc != 0x1C5300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5300u; }
        if (ctx->pc != 0x1C5300u) { return; }
    }
    ctx->pc = 0x1C5300u;
label_1c5300:
    // 0x1c5300: 0x2624009c  addiu       $a0, $s1, 0x9C
    ctx->pc = 0x1c5300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
    // 0x1c5304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5308: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5308u;
    SET_GPR_U32(ctx, 31, 0x1C5310u);
    ctx->pc = 0x1C530Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5308u;
            // 0x1c530c: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5310u; }
        if (ctx->pc != 0x1C5310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5310u; }
        if (ctx->pc != 0x1C5310u) { return; }
    }
    ctx->pc = 0x1C5310u;
label_1c5310:
    // 0x1c5310: 0x262400be  addiu       $a0, $s1, 0xBE
    ctx->pc = 0x1c5310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 190));
    // 0x1c5314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5318: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5318u;
    SET_GPR_U32(ctx, 31, 0x1C5320u);
    ctx->pc = 0x1C531Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5318u;
            // 0x1c531c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5320u; }
        if (ctx->pc != 0x1C5320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5320u; }
        if (ctx->pc != 0x1C5320u) { return; }
    }
    ctx->pc = 0x1C5320u;
label_1c5320:
    // 0x1c5320: 0x2624013e  addiu       $a0, $s1, 0x13E
    ctx->pc = 0x1c5320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 318));
    // 0x1c5324: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5328: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5328u;
    SET_GPR_U32(ctx, 31, 0x1C5330u);
    ctx->pc = 0x1C532Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5328u;
            // 0x1c532c: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5330u; }
        if (ctx->pc != 0x1C5330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5330u; }
        if (ctx->pc != 0x1C5330u) { return; }
    }
    ctx->pc = 0x1C5330u;
label_1c5330:
    // 0x1c5330: 0x262401be  addiu       $a0, $s1, 0x1BE
    ctx->pc = 0x1c5330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 446));
    // 0x1c5334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5338: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5338u;
    SET_GPR_U32(ctx, 31, 0x1C5340u);
    ctx->pc = 0x1C533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5338u;
            // 0x1c533c: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5340u; }
        if (ctx->pc != 0x1C5340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5340u; }
        if (ctx->pc != 0x1C5340u) { return; }
    }
    ctx->pc = 0x1C5340u;
label_1c5340:
    // 0x1c5340: 0x2624023e  addiu       $a0, $s1, 0x23E
    ctx->pc = 0x1c5340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 574));
    // 0x1c5344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5348: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5348u;
    SET_GPR_U32(ctx, 31, 0x1C5350u);
    ctx->pc = 0x1C534Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5348u;
            // 0x1c534c: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5350u; }
        if (ctx->pc != 0x1C5350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5350u; }
        if (ctx->pc != 0x1C5350u) { return; }
    }
    ctx->pc = 0x1C5350u;
label_1c5350:
    // 0x1c5350: 0x262402be  addiu       $a0, $s1, 0x2BE
    ctx->pc = 0x1c5350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 702));
    // 0x1c5354: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5358: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5358u;
    SET_GPR_U32(ctx, 31, 0x1C5360u);
    ctx->pc = 0x1C535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5358u;
            // 0x1c535c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5360u; }
        if (ctx->pc != 0x1C5360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5360u; }
        if (ctx->pc != 0x1C5360u) { return; }
    }
    ctx->pc = 0x1C5360u;
label_1c5360:
    // 0x1c5360: 0x262402e3  addiu       $a0, $s1, 0x2E3
    ctx->pc = 0x1c5360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 739));
    // 0x1c5364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5368: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5368u;
    SET_GPR_U32(ctx, 31, 0x1C5370u);
    ctx->pc = 0x1C536Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5368u;
            // 0x1c536c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5370u; }
        if (ctx->pc != 0x1C5370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5370u; }
        if (ctx->pc != 0x1C5370u) { return; }
    }
    ctx->pc = 0x1C5370u;
label_1c5370:
    // 0x1c5370: 0x26240308  addiu       $a0, $s1, 0x308
    ctx->pc = 0x1c5370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x1c5374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5378: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5378u;
    SET_GPR_U32(ctx, 31, 0x1C5380u);
    ctx->pc = 0x1C537Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5378u;
            // 0x1c537c: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5380u; }
        if (ctx->pc != 0x1C5380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5380u; }
        if (ctx->pc != 0x1C5380u) { return; }
    }
    ctx->pc = 0x1C5380u;
label_1c5380:
    // 0x1c5380: 0x2624032d  addiu       $a0, $s1, 0x32D
    ctx->pc = 0x1c5380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 813));
    // 0x1c5384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5388: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5388u;
    SET_GPR_U32(ctx, 31, 0x1C5390u);
    ctx->pc = 0x1C538Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5388u;
            // 0x1c538c: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5390u; }
        if (ctx->pc != 0x1C5390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5390u; }
        if (ctx->pc != 0x1C5390u) { return; }
    }
    ctx->pc = 0x1C5390u;
label_1c5390:
    // 0x1c5390: 0x2624033e  addiu       $a0, $s1, 0x33E
    ctx->pc = 0x1c5390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 830));
    // 0x1c5394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5398: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5398u;
    SET_GPR_U32(ctx, 31, 0x1C53A0u);
    ctx->pc = 0x1C539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5398u;
            // 0x1c539c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53A0u; }
        if (ctx->pc != 0x1C53A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53A0u; }
        if (ctx->pc != 0x1C53A0u) { return; }
    }
    ctx->pc = 0x1C53A0u;
label_1c53a0:
    // 0x1c53a0: 0x2624034f  addiu       $a0, $s1, 0x34F
    ctx->pc = 0x1c53a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 847));
    // 0x1c53a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c53a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53a8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C53A8u;
    SET_GPR_U32(ctx, 31, 0x1C53B0u);
    ctx->pc = 0x1C53ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C53A8u;
            // 0x1c53ac: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53B0u; }
        if (ctx->pc != 0x1C53B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53B0u; }
        if (ctx->pc != 0x1C53B0u) { return; }
    }
    ctx->pc = 0x1C53B0u;
label_1c53b0:
    // 0x1c53b0: 0x26240360  addiu       $a0, $s1, 0x360
    ctx->pc = 0x1c53b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x1c53b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c53b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53b8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C53B8u;
    SET_GPR_U32(ctx, 31, 0x1C53C0u);
    ctx->pc = 0x1C53BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C53B8u;
            // 0x1c53bc: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53C0u; }
        if (ctx->pc != 0x1C53C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53C0u; }
        if (ctx->pc != 0x1C53C0u) { return; }
    }
    ctx->pc = 0x1C53C0u;
label_1c53c0:
    // 0x1c53c0: 0x26240371  addiu       $a0, $s1, 0x371
    ctx->pc = 0x1c53c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 881));
    // 0x1c53c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c53c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53c8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C53C8u;
    SET_GPR_U32(ctx, 31, 0x1C53D0u);
    ctx->pc = 0x1C53CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C53C8u;
            // 0x1c53cc: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53D0u; }
        if (ctx->pc != 0x1C53D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53D0u; }
        if (ctx->pc != 0x1C53D0u) { return; }
    }
    ctx->pc = 0x1C53D0u;
label_1c53d0:
    // 0x1c53d0: 0x26240372  addiu       $a0, $s1, 0x372
    ctx->pc = 0x1c53d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 882));
    // 0x1c53d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c53d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53d8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C53D8u;
    SET_GPR_U32(ctx, 31, 0x1C53E0u);
    ctx->pc = 0x1C53DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C53D8u;
            // 0x1c53dc: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53E0u; }
        if (ctx->pc != 0x1C53E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53E0u; }
        if (ctx->pc != 0x1C53E0u) { return; }
    }
    ctx->pc = 0x1C53E0u;
label_1c53e0:
    // 0x1c53e0: 0x26240373  addiu       $a0, $s1, 0x373
    ctx->pc = 0x1c53e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 883));
    // 0x1c53e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c53e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53e8: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C53E8u;
    SET_GPR_U32(ctx, 31, 0x1C53F0u);
    ctx->pc = 0x1C53ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C53E8u;
            // 0x1c53ec: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53F0u; }
        if (ctx->pc != 0x1C53F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53F0u; }
        if (ctx->pc != 0x1C53F0u) { return; }
    }
    ctx->pc = 0x1C53F0u;
label_1c53f0:
    // 0x1c53f0: 0x26240573  addiu       $a0, $s1, 0x573
    ctx->pc = 0x1c53f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1395));
    // 0x1c53f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c53f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c53f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c53fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c53fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5400: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x1c5400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c5404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5408: 0x8071570  j           func_1C55C0
    ctx->pc = 0x1C5408u;
    ctx->pc = 0x1C540Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5408u;
            // 0x1c540c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5410u;
}
