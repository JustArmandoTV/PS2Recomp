#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8F20
// Address: 0x1b8f20 - 0x1b8f60
void sub_001B8F20_0x1b8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8F20_0x1b8f20");
#endif

    switch (ctx->pc) {
        case 0x1b8f40u: goto label_1b8f40;
        default: break;
    }

    ctx->pc = 0x1b8f20u;

    // 0x1b8f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f30: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1b8f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1b8f34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b8f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b8f38: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1B8F38u;
    SET_GPR_U32(ctx, 31, 0x1B8F40u);
    ctx->pc = 0x1B8F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F38u;
            // 0x1b8f3c: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F40u; }
        if (ctx->pc != 0x1B8F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F40u; }
        if (ctx->pc != 0x1B8F40u) { return; }
    }
    ctx->pc = 0x1B8F40u;
label_1b8f40:
    // 0x1b8f40: 0x8e02019c  lw          $v0, 0x19C($s0)
    ctx->pc = 0x1b8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x1b8f44: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b8f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1b8f48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8f4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b8f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8f50: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x1b8f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x1b8f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8f58: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F58u;
            // 0x1b8f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8F60u;
}
