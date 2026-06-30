#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171B08
// Address: 0x171b08 - 0x171b40
void sub_00171B08_0x171b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171B08_0x171b08");
#endif

    switch (ctx->pc) {
        case 0x171b1cu: goto label_171b1c;
        case 0x171b24u: goto label_171b24;
        case 0x171b2cu: goto label_171b2c;
        default: break;
    }

    ctx->pc = 0x171b08u;

    // 0x171b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171b10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171b14: 0xc05c846  jal         func_172118
    ctx->pc = 0x171B14u;
    SET_GPR_U32(ctx, 31, 0x171B1Cu);
    ctx->pc = 0x171B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B14u;
            // 0x171b18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B1Cu; }
        if (ctx->pc != 0x171B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B1Cu; }
        if (ctx->pc != 0x171B1Cu) { return; }
    }
    ctx->pc = 0x171B1Cu;
label_171b1c:
    // 0x171b1c: 0xc05c6d0  jal         func_171B40
    ctx->pc = 0x171B1Cu;
    SET_GPR_U32(ctx, 31, 0x171B24u);
    ctx->pc = 0x171B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B1Cu;
            // 0x171b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B40u;
    if (runtime->hasFunction(0x171B40u)) {
        auto targetFn = runtime->lookupFunction(0x171B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B24u; }
        if (ctx->pc != 0x171B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B40_0x171b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B24u; }
        if (ctx->pc != 0x171B24u) { return; }
    }
    ctx->pc = 0x171B24u;
label_171b24:
    // 0x171b24: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171B24u;
    SET_GPR_U32(ctx, 31, 0x171B2Cu);
    ctx->pc = 0x171B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B24u;
            // 0x171b28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B2Cu; }
        if (ctx->pc != 0x171B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B2Cu; }
        if (ctx->pc != 0x171B2Cu) { return; }
    }
    ctx->pc = 0x171B2Cu;
label_171b2c:
    // 0x171b2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171b30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171b38: 0x3e00008  jr          $ra
    ctx->pc = 0x171B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B38u;
            // 0x171b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171B40u;
}
