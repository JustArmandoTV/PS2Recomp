#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5410
// Address: 0x1c5410 - 0x1c5530
void sub_001C5410_0x1c5410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5410_0x1c5410");
#endif

    switch (ctx->pc) {
        case 0x1c5448u: goto label_1c5448;
        case 0x1c5458u: goto label_1c5458;
        case 0x1c5468u: goto label_1c5468;
        case 0x1c5478u: goto label_1c5478;
        case 0x1c5488u: goto label_1c5488;
        case 0x1c5498u: goto label_1c5498;
        case 0x1c54a8u: goto label_1c54a8;
        case 0x1c54b8u: goto label_1c54b8;
        case 0x1c54c8u: goto label_1c54c8;
        case 0x1c54d8u: goto label_1c54d8;
        case 0x1c54e8u: goto label_1c54e8;
        case 0x1c54f8u: goto label_1c54f8;
        case 0x1c5508u: goto label_1c5508;
        case 0x1c5518u: goto label_1c5518;
        default: break;
    }

    ctx->pc = 0x1c5410u;

    // 0x1c5410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5414: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c5414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c5418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c541c: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1c541cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
    // 0x1c5420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5424: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1c5424u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x1c5428: 0x26102000  addiu       $s0, $s0, 0x2000
    ctx->pc = 0x1c5428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x1c542c: 0x2631a588  addiu       $s1, $s1, -0x5A78
    ctx->pc = 0x1c542cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944136));
    // 0x1c5430: 0xac441ff8  sw          $a0, 0x1FF8($v0)
    ctx->pc = 0x1c5430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8184), GPR_U32(ctx, 4));
    // 0x1c5434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5438: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c5438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c543c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5440: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5440u;
    SET_GPR_U32(ctx, 31, 0x1C5448u);
    ctx->pc = 0x1C5444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5440u;
            // 0x1c5444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5448u; }
        if (ctx->pc != 0x1C5448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5448u; }
        if (ctx->pc != 0x1C5448u) { return; }
    }
    ctx->pc = 0x1C5448u;
label_1c5448:
    // 0x1c5448: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1c5448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c544c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c544cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5450: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5450u;
    SET_GPR_U32(ctx, 31, 0x1C5458u);
    ctx->pc = 0x1C5454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5450u;
            // 0x1c5454: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5458u; }
        if (ctx->pc != 0x1C5458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5458u; }
        if (ctx->pc != 0x1C5458u) { return; }
    }
    ctx->pc = 0x1C5458u;
label_1c5458:
    // 0x1c5458: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1c5458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1c545c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c545cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5460: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5460u;
    SET_GPR_U32(ctx, 31, 0x1C5468u);
    ctx->pc = 0x1C5464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5460u;
            // 0x1c5464: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5468u; }
        if (ctx->pc != 0x1C5468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5468u; }
        if (ctx->pc != 0x1C5468u) { return; }
    }
    ctx->pc = 0x1C5468u;
label_1c5468:
    // 0x1c5468: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1c5468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c546c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c546cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5470: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5470u;
    SET_GPR_U32(ctx, 31, 0x1C5478u);
    ctx->pc = 0x1C5474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5470u;
            // 0x1c5474: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5478u; }
        if (ctx->pc != 0x1C5478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5478u; }
        if (ctx->pc != 0x1C5478u) { return; }
    }
    ctx->pc = 0x1C5478u;
label_1c5478:
    // 0x1c5478: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1c5478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1c547c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c547cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5480: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5480u;
    SET_GPR_U32(ctx, 31, 0x1C5488u);
    ctx->pc = 0x1C5484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5480u;
            // 0x1c5484: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5488u; }
        if (ctx->pc != 0x1C5488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5488u; }
        if (ctx->pc != 0x1C5488u) { return; }
    }
    ctx->pc = 0x1C5488u;
label_1c5488:
    // 0x1c5488: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1c5488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c548c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c548cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5490: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5490u;
    SET_GPR_U32(ctx, 31, 0x1C5498u);
    ctx->pc = 0x1C5494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5490u;
            // 0x1c5494: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5498u; }
        if (ctx->pc != 0x1C5498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5498u; }
        if (ctx->pc != 0x1C5498u) { return; }
    }
    ctx->pc = 0x1C5498u;
label_1c5498:
    // 0x1c5498: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1c5498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1c549c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c549cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54a0: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C54A0u;
    SET_GPR_U32(ctx, 31, 0x1C54A8u);
    ctx->pc = 0x1C54A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54A0u;
            // 0x1c54a4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54A8u; }
        if (ctx->pc != 0x1C54A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54A8u; }
        if (ctx->pc != 0x1C54A8u) { return; }
    }
    ctx->pc = 0x1C54A8u;
label_1c54a8:
    // 0x1c54a8: 0x2604001b  addiu       $a0, $s0, 0x1B
    ctx->pc = 0x1c54a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 27));
    // 0x1c54ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c54acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54b0: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C54B0u;
    SET_GPR_U32(ctx, 31, 0x1C54B8u);
    ctx->pc = 0x1C54B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54B0u;
            // 0x1c54b4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54B8u; }
        if (ctx->pc != 0x1C54B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54B8u; }
        if (ctx->pc != 0x1C54B8u) { return; }
    }
    ctx->pc = 0x1C54B8u;
label_1c54b8:
    // 0x1c54b8: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x1c54b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1c54bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c54bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54c0: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C54C0u;
    SET_GPR_U32(ctx, 31, 0x1C54C8u);
    ctx->pc = 0x1C54C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54C0u;
            // 0x1c54c4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54C8u; }
        if (ctx->pc != 0x1C54C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54C8u; }
        if (ctx->pc != 0x1C54C8u) { return; }
    }
    ctx->pc = 0x1C54C8u;
label_1c54c8:
    // 0x1c54c8: 0x2604001d  addiu       $a0, $s0, 0x1D
    ctx->pc = 0x1c54c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 29));
    // 0x1c54cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c54ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54d0: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C54D0u;
    SET_GPR_U32(ctx, 31, 0x1C54D8u);
    ctx->pc = 0x1C54D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54D0u;
            // 0x1c54d4: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54D8u; }
        if (ctx->pc != 0x1C54D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54D8u; }
        if (ctx->pc != 0x1C54D8u) { return; }
    }
    ctx->pc = 0x1C54D8u;
label_1c54d8:
    // 0x1c54d8: 0x2604001e  addiu       $a0, $s0, 0x1E
    ctx->pc = 0x1c54d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
    // 0x1c54dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c54dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54e0: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C54E0u;
    SET_GPR_U32(ctx, 31, 0x1C54E8u);
    ctx->pc = 0x1C54E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54E0u;
            // 0x1c54e4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54E8u; }
        if (ctx->pc != 0x1C54E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54E8u; }
        if (ctx->pc != 0x1C54E8u) { return; }
    }
    ctx->pc = 0x1C54E8u;
label_1c54e8:
    // 0x1c54e8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1c54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c54ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c54ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54f0: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C54F0u;
    SET_GPR_U32(ctx, 31, 0x1C54F8u);
    ctx->pc = 0x1C54F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54F0u;
            // 0x1c54f4: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54F8u; }
        if (ctx->pc != 0x1C54F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54F8u; }
        if (ctx->pc != 0x1C54F8u) { return; }
    }
    ctx->pc = 0x1C54F8u;
label_1c54f8:
    // 0x1c54f8: 0x26040022  addiu       $a0, $s0, 0x22
    ctx->pc = 0x1c54f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 34));
    // 0x1c54fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c54fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5500: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5500u;
    SET_GPR_U32(ctx, 31, 0x1C5508u);
    ctx->pc = 0x1C5504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5500u;
            // 0x1c5504: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5508u; }
        if (ctx->pc != 0x1C5508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5508u; }
        if (ctx->pc != 0x1C5508u) { return; }
    }
    ctx->pc = 0x1C5508u;
label_1c5508:
    // 0x1c5508: 0x26040023  addiu       $a0, $s0, 0x23
    ctx->pc = 0x1c5508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 35));
    // 0x1c550c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c550cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5510: 0xc071570  jal         func_1C55C0
    ctx->pc = 0x1C5510u;
    SET_GPR_U32(ctx, 31, 0x1C5518u);
    ctx->pc = 0x1C5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5510u;
            // 0x1c5514: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55C0u;
    if (runtime->hasFunction(0x1C55C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5518u; }
        if (ctx->pc != 0x1C5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5518u; }
        if (ctx->pc != 0x1C5518u) { return; }
    }
    ctx->pc = 0x1C5518u;
label_1c5518:
    // 0x1c5518: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c5518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c551c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c551cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5528: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5528u;
            // 0x1c552c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5530u;
}
