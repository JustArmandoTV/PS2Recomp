#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A28D8
// Address: 0x1a28d8 - 0x1a2920
void sub_001A28D8_0x1a28d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A28D8_0x1a28d8");
#endif

    switch (ctx->pc) {
        case 0x1a28e8u: goto label_1a28e8;
        case 0x1a2908u: goto label_1a2908;
        default: break;
    }

    ctx->pc = 0x1a28d8u;

    // 0x1a28d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a28d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a28dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a28dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a28e0: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A28E0u;
    SET_GPR_U32(ctx, 31, 0x1A28E8u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A28E8u; }
        if (ctx->pc != 0x1A28E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A28E8u; }
        if (ctx->pc != 0x1A28E8u) { return; }
    }
    ctx->pc = 0x1A28E8u;
label_1a28e8:
    // 0x1a28e8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a28e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a28ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a28ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a28f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A28F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A28F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A28F0u;
            // 0x1a28f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A28F8u;
    // 0x1a28f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a28f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a28fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a28fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2900: 0xc0689fa  jal         func_1A27E8
    ctx->pc = 0x1A2900u;
    SET_GPR_U32(ctx, 31, 0x1A2908u);
    ctx->pc = 0x1A27E8u;
    if (runtime->hasFunction(0x1A27E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A27E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2908u; }
        if (ctx->pc != 0x1A2908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A27E8_0x1a27e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2908u; }
        if (ctx->pc != 0x1A2908u) { return; }
    }
    ctx->pc = 0x1A2908u;
label_1a2908:
    // 0x1a2908: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a2908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a290c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2910: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a2910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a2914: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2914u;
            // 0x1a2918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A291Cu;
    // 0x1a291c: 0x0  nop
    ctx->pc = 0x1a291cu;
    // NOP
}
