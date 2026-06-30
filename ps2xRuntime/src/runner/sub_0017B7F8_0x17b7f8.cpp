#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B7F8
// Address: 0x17b7f8 - 0x17b860
void sub_0017B7F8_0x17b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B7F8_0x17b7f8");
#endif

    switch (ctx->pc) {
        case 0x17b814u: goto label_17b814;
        case 0x17b820u: goto label_17b820;
        case 0x17b83cu: goto label_17b83c;
        case 0x17b844u: goto label_17b844;
        default: break;
    }

    ctx->pc = 0x17b7f8u;

    // 0x17b7f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b7fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b80c: 0xc05ed74  jal         func_17B5D0
    ctx->pc = 0x17B80Cu;
    SET_GPR_U32(ctx, 31, 0x17B814u);
    ctx->pc = 0x17B810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B80Cu;
            // 0x17b810: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B5D0u;
    if (runtime->hasFunction(0x17B5D0u)) {
        auto targetFn = runtime->lookupFunction(0x17B5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B814u; }
        if (ctx->pc != 0x17B814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B5D0_0x17b5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B814u; }
        if (ctx->pc != 0x17B814u) { return; }
    }
    ctx->pc = 0x17B814u;
label_17b814:
    // 0x17b814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b818: 0xc04461c  jal         func_111870
    ctx->pc = 0x17B818u;
    SET_GPR_U32(ctx, 31, 0x17B820u);
    ctx->pc = 0x17B81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B818u;
            // 0x17b81c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111870u;
    if (runtime->hasFunction(0x111870u)) {
        auto targetFn = runtime->lookupFunction(0x111870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B820u; }
        if (ctx->pc != 0x17B820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111870_0x111870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B820u; }
        if (ctx->pc != 0x17B820u) { return; }
    }
    ctx->pc = 0x17B820u;
label_17b820:
    // 0x17b820: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b828: 0x24845b30  addiu       $a0, $a0, 0x5B30
    ctx->pc = 0x17b828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23344));
    // 0x17b82c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B82Cu;
    {
        const bool branch_taken_0x17b82c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17B830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B82Cu;
            // 0x17b830: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b82c) {
            ctx->pc = 0x17B83Cu;
            goto label_17b83c;
        }
    }
    ctx->pc = 0x17B834u;
    // 0x17b834: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B834u;
    SET_GPR_U32(ctx, 31, 0x17B83Cu);
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B83Cu; }
        if (ctx->pc != 0x17B83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B83Cu; }
        if (ctx->pc != 0x17B83Cu) { return; }
    }
    ctx->pc = 0x17B83Cu;
label_17b83c:
    // 0x17b83c: 0xc05ed82  jal         func_17B608
    ctx->pc = 0x17B83Cu;
    SET_GPR_U32(ctx, 31, 0x17B844u);
    ctx->pc = 0x17B608u;
    if (runtime->hasFunction(0x17B608u)) {
        auto targetFn = runtime->lookupFunction(0x17B608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B844u; }
        if (ctx->pc != 0x17B844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B608_0x17b608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B844u; }
        if (ctx->pc != 0x17B844u) { return; }
    }
    ctx->pc = 0x17B844u;
label_17b844:
    // 0x17b844: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b854: 0x3e00008  jr          $ra
    ctx->pc = 0x17B854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B854u;
            // 0x17b858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B85Cu;
    // 0x17b85c: 0x0  nop
    ctx->pc = 0x17b85cu;
    // NOP
}
