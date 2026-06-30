#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196420
// Address: 0x196420 - 0x1964a0
void sub_00196420_0x196420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196420_0x196420");
#endif

    switch (ctx->pc) {
        case 0x196438u: goto label_196438;
        case 0x19644cu: goto label_19644c;
        case 0x196478u: goto label_196478;
        case 0x196484u: goto label_196484;
        default: break;
    }

    ctx->pc = 0x196420u;

    // 0x196420: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x196420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x196424: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x196424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x196428: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x196428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19642c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x19642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x196430: 0x3e00008  jr          $ra
    ctx->pc = 0x196430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196430u;
            // 0x196434: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196438u;
label_196438:
    // 0x196438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19643c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196440: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x196440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x196444: 0xc06599a  jal         func_196668
    ctx->pc = 0x196444u;
    SET_GPR_U32(ctx, 31, 0x19644Cu);
    ctx->pc = 0x196448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196444u;
            // 0x196448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19644Cu; }
        if (ctx->pc != 0x19644Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19644Cu; }
        if (ctx->pc != 0x19644Cu) { return; }
    }
    ctx->pc = 0x19644Cu;
label_19644c:
    // 0x19644c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x19644cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x196450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196454: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196454u;
    {
        const bool branch_taken_0x196454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196454u;
            // 0x196458: 0x34a50201  ori         $a1, $a1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196454) {
            ctx->pc = 0x196470u;
            goto label_196470;
        }
    }
    ctx->pc = 0x19645Cu;
    // 0x19645c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19645cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196464: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x196464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196468: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x196468u;
    ctx->pc = 0x19646Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196468u;
            // 0x19646c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196470u;
label_196470:
    // 0x196470: 0xc0659c2  jal         func_196708
    ctx->pc = 0x196470u;
    SET_GPR_U32(ctx, 31, 0x196478u);
    ctx->pc = 0x196708u;
    if (runtime->hasFunction(0x196708u)) {
        auto targetFn = runtime->lookupFunction(0x196708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196478u; }
        if (ctx->pc != 0x196478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196708_0x196708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196478u; }
        if (ctx->pc != 0x196478u) { return; }
    }
    ctx->pc = 0x196478u;
label_196478:
    // 0x196478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19647c: 0xc06592a  jal         func_1964A8
    ctx->pc = 0x19647Cu;
    SET_GPR_U32(ctx, 31, 0x196484u);
    ctx->pc = 0x196480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19647Cu;
            // 0x196480: 0x2405042c  addiu       $a1, $zero, 0x42C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1068));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1964A8u;
    if (runtime->hasFunction(0x1964A8u)) {
        auto targetFn = runtime->lookupFunction(0x1964A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196484u; }
        if (ctx->pc != 0x196484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001964A8_0x1964a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196484u; }
        if (ctx->pc != 0x196484u) { return; }
    }
    ctx->pc = 0x196484u;
label_196484:
    // 0x196484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196488: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x196488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x19648c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19648cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196494: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x196494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196498: 0x3e00008  jr          $ra
    ctx->pc = 0x196498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19649Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196498u;
            // 0x19649c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1964A0u;
}
