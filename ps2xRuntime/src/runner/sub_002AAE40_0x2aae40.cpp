#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AAE40
// Address: 0x2aae40 - 0x2aae70
void sub_002AAE40_0x2aae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAE40_0x2aae40");
#endif

    switch (ctx->pc) {
        case 0x2aae54u: goto label_2aae54;
        default: break;
    }

    ctx->pc = 0x2aae40u;

    // 0x2aae40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aae44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aae48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aae4c: 0xc0aab9c  jal         func_2AAE70
    ctx->pc = 0x2AAE4Cu;
    SET_GPR_U32(ctx, 31, 0x2AAE54u);
    ctx->pc = 0x2AAE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE4Cu;
            // 0x2aae50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAE70u;
    if (runtime->hasFunction(0x2AAE70u)) {
        auto targetFn = runtime->lookupFunction(0x2AAE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE54u; }
        if (ctx->pc != 0x2AAE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAE70_0x2aae70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE54u; }
        if (ctx->pc != 0x2AAE54u) { return; }
    }
    ctx->pc = 0x2AAE54u;
label_2aae54:
    // 0x2aae54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aae54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aae58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aae5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aae5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aae60: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE60u;
            // 0x2aae64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAE68u;
    // 0x2aae68: 0x0  nop
    ctx->pc = 0x2aae68u;
    // NOP
    // 0x2aae6c: 0x0  nop
    ctx->pc = 0x2aae6cu;
    // NOP
}
