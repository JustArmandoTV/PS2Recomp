#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001707A0
// Address: 0x1707a0 - 0x1707e8
void sub_001707A0_0x1707a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001707A0_0x1707a0");
#endif

    switch (ctx->pc) {
        case 0x1707bcu: goto label_1707bc;
        case 0x1707c8u: goto label_1707c8;
        case 0x1707d0u: goto label_1707d0;
        default: break;
    }

    ctx->pc = 0x1707a0u;

    // 0x1707a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1707a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1707a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1707a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1707a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1707a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1707acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1707b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1707b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1707b4: 0xc05c846  jal         func_172118
    ctx->pc = 0x1707B4u;
    SET_GPR_U32(ctx, 31, 0x1707BCu);
    ctx->pc = 0x1707B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1707B4u;
            // 0x1707b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707BCu; }
        if (ctx->pc != 0x1707BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707BCu; }
        if (ctx->pc != 0x1707BCu) { return; }
    }
    ctx->pc = 0x1707BCu;
label_1707bc:
    // 0x1707bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1707bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707c0: 0xc05c1fa  jal         func_1707E8
    ctx->pc = 0x1707C0u;
    SET_GPR_U32(ctx, 31, 0x1707C8u);
    ctx->pc = 0x1707C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1707C0u;
            // 0x1707c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1707E8u;
    if (runtime->hasFunction(0x1707E8u)) {
        auto targetFn = runtime->lookupFunction(0x1707E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707C8u; }
        if (ctx->pc != 0x1707C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001707E8_0x1707e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707C8u; }
        if (ctx->pc != 0x1707C8u) { return; }
    }
    ctx->pc = 0x1707C8u;
label_1707c8:
    // 0x1707c8: 0xc05c84c  jal         func_172130
    ctx->pc = 0x1707C8u;
    SET_GPR_U32(ctx, 31, 0x1707D0u);
    ctx->pc = 0x1707CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1707C8u;
            // 0x1707cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707D0u; }
        if (ctx->pc != 0x1707D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707D0u; }
        if (ctx->pc != 0x1707D0u) { return; }
    }
    ctx->pc = 0x1707D0u;
label_1707d0:
    // 0x1707d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1707d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1707d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1707d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1707d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1707dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1707dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1707e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1707E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1707E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707E0u;
            // 0x1707e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1707E8u;
}
