#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170D30
// Address: 0x170d30 - 0x170d78
void sub_00170D30_0x170d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170D30_0x170d30");
#endif

    switch (ctx->pc) {
        case 0x170d4cu: goto label_170d4c;
        case 0x170d58u: goto label_170d58;
        case 0x170d60u: goto label_170d60;
        default: break;
    }

    ctx->pc = 0x170d30u;

    // 0x170d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170d40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170d44: 0xc05c846  jal         func_172118
    ctx->pc = 0x170D44u;
    SET_GPR_U32(ctx, 31, 0x170D4Cu);
    ctx->pc = 0x170D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D44u;
            // 0x170d48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D4Cu; }
        if (ctx->pc != 0x170D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D4Cu; }
        if (ctx->pc != 0x170D4Cu) { return; }
    }
    ctx->pc = 0x170D4Cu;
label_170d4c:
    // 0x170d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d50: 0xc05c35e  jal         func_170D78
    ctx->pc = 0x170D50u;
    SET_GPR_U32(ctx, 31, 0x170D58u);
    ctx->pc = 0x170D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D50u;
            // 0x170d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170D78u;
    if (runtime->hasFunction(0x170D78u)) {
        auto targetFn = runtime->lookupFunction(0x170D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D58u; }
        if (ctx->pc != 0x170D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170D78_0x170d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D58u; }
        if (ctx->pc != 0x170D58u) { return; }
    }
    ctx->pc = 0x170D58u;
label_170d58:
    // 0x170d58: 0xc05c84c  jal         func_172130
    ctx->pc = 0x170D58u;
    SET_GPR_U32(ctx, 31, 0x170D60u);
    ctx->pc = 0x170D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D58u;
            // 0x170d5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D60u; }
        if (ctx->pc != 0x170D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D60u; }
        if (ctx->pc != 0x170D60u) { return; }
    }
    ctx->pc = 0x170D60u;
label_170d60:
    // 0x170d60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170d64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170d70: 0x3e00008  jr          $ra
    ctx->pc = 0x170D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170D70u;
            // 0x170d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170D78u;
}
