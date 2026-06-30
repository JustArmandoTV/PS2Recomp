#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170C30
// Address: 0x170c30 - 0x170c68
void sub_00170C30_0x170c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170C30_0x170c30");
#endif

    switch (ctx->pc) {
        case 0x170c44u: goto label_170c44;
        case 0x170c4cu: goto label_170c4c;
        case 0x170c54u: goto label_170c54;
        default: break;
    }

    ctx->pc = 0x170c30u;

    // 0x170c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170c38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170c3c: 0xc05c846  jal         func_172118
    ctx->pc = 0x170C3Cu;
    SET_GPR_U32(ctx, 31, 0x170C44u);
    ctx->pc = 0x170C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C3Cu;
            // 0x170c40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C44u; }
        if (ctx->pc != 0x170C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C44u; }
        if (ctx->pc != 0x170C44u) { return; }
    }
    ctx->pc = 0x170C44u;
label_170c44:
    // 0x170c44: 0xc05c31a  jal         func_170C68
    ctx->pc = 0x170C44u;
    SET_GPR_U32(ctx, 31, 0x170C4Cu);
    ctx->pc = 0x170C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C44u;
            // 0x170c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C68u;
    if (runtime->hasFunction(0x170C68u)) {
        auto targetFn = runtime->lookupFunction(0x170C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C4Cu; }
        if (ctx->pc != 0x170C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C68_0x170c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C4Cu; }
        if (ctx->pc != 0x170C4Cu) { return; }
    }
    ctx->pc = 0x170C4Cu;
label_170c4c:
    // 0x170c4c: 0xc05c84c  jal         func_172130
    ctx->pc = 0x170C4Cu;
    SET_GPR_U32(ctx, 31, 0x170C54u);
    ctx->pc = 0x170C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C4Cu;
            // 0x170c50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C54u; }
        if (ctx->pc != 0x170C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C54u; }
        if (ctx->pc != 0x170C54u) { return; }
    }
    ctx->pc = 0x170C54u;
label_170c54:
    // 0x170c54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170c58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170c60: 0x3e00008  jr          $ra
    ctx->pc = 0x170C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C60u;
            // 0x170c64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170C68u;
}
