#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001862A0
// Address: 0x1862a0 - 0x1862e8
void sub_001862A0_0x1862a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001862A0_0x1862a0");
#endif

    switch (ctx->pc) {
        case 0x1862c0u: goto label_1862c0;
        case 0x1862ccu: goto label_1862cc;
        case 0x1862d4u: goto label_1862d4;
        default: break;
    }

    ctx->pc = 0x1862a0u;

    // 0x1862a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1862a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1862a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1862a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862a8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1862a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1862ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1862acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1862b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862b4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1862b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1862b8: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x1862B8u;
    SET_GPR_U32(ctx, 31, 0x1862C0u);
    ctx->pc = 0x1862BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1862B8u;
            // 0x1862bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862C0u; }
        if (ctx->pc != 0x1862C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862C0u; }
        if (ctx->pc != 0x1862C0u) { return; }
    }
    ctx->pc = 0x1862C0u;
label_1862c0:
    // 0x1862c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1862c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862c4: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x1862C4u;
    SET_GPR_U32(ctx, 31, 0x1862CCu);
    ctx->pc = 0x1862C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1862C4u;
            // 0x1862c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862CCu; }
        if (ctx->pc != 0x1862CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862CCu; }
        if (ctx->pc != 0x1862CCu) { return; }
    }
    ctx->pc = 0x1862CCu;
label_1862cc:
    // 0x1862cc: 0xc061288  jal         func_184A20
    ctx->pc = 0x1862CCu;
    SET_GPR_U32(ctx, 31, 0x1862D4u);
    ctx->pc = 0x1862D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1862CCu;
            // 0x1862d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A20u;
    if (runtime->hasFunction(0x184A20u)) {
        auto targetFn = runtime->lookupFunction(0x184A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862D4u; }
        if (ctx->pc != 0x1862D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A20_0x184a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862D4u; }
        if (ctx->pc != 0x1862D4u) { return; }
    }
    ctx->pc = 0x1862D4u;
label_1862d4:
    // 0x1862d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1862d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1862d8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1862d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1862dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1862DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1862E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862DCu;
            // 0x1862e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1862E4u;
    // 0x1862e4: 0x0  nop
    ctx->pc = 0x1862e4u;
    // NOP
}
