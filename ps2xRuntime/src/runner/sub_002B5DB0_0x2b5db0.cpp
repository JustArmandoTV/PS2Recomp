#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5DB0
// Address: 0x2b5db0 - 0x2b5de0
void sub_002B5DB0_0x2b5db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5DB0_0x2b5db0");
#endif

    switch (ctx->pc) {
        case 0x2b5dc4u: goto label_2b5dc4;
        default: break;
    }

    ctx->pc = 0x2b5db0u;

    // 0x2b5db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5dbc: 0xc057fa4  jal         func_15FE90
    ctx->pc = 0x2B5DBCu;
    SET_GPR_U32(ctx, 31, 0x2B5DC4u);
    ctx->pc = 0x2B5DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5DBCu;
            // 0x2b5dc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FE90u;
    if (runtime->hasFunction(0x15FE90u)) {
        auto targetFn = runtime->lookupFunction(0x15FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5DC4u; }
        if (ctx->pc != 0x2B5DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE90_0x15fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5DC4u; }
        if (ctx->pc != 0x2B5DC4u) { return; }
    }
    ctx->pc = 0x2B5DC4u;
label_2b5dc4:
    // 0x2b5dc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b5dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5dcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5DD0u;
            // 0x2b5dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5DD8u;
    // 0x2b5dd8: 0x0  nop
    ctx->pc = 0x2b5dd8u;
    // NOP
    // 0x2b5ddc: 0x0  nop
    ctx->pc = 0x2b5ddcu;
    // NOP
}
