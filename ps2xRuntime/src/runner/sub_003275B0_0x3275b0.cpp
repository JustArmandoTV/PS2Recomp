#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003275B0
// Address: 0x3275b0 - 0x327600
void sub_003275B0_0x3275b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003275B0_0x3275b0");
#endif

    switch (ctx->pc) {
        case 0x3275e0u: goto label_3275e0;
        default: break;
    }

    ctx->pc = 0x3275b0u;

    // 0x3275b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3275b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3275b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3275b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3275b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3275b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3275bc: 0x24c40060  addiu       $a0, $a2, 0x60
    ctx->pc = 0x3275bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x3275c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3275c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3275c4: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x3275c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3275c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3275c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3275cc: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x3275ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3275d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3275d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3275d4: 0x24c5005c  addiu       $a1, $a2, 0x5C
    ctx->pc = 0x3275d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
    // 0x3275d8: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x3275D8u;
    SET_GPR_U32(ctx, 31, 0x3275E0u);
    ctx->pc = 0x3275DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3275D8u;
            // 0x3275dc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3275E0u; }
        if (ctx->pc != 0x3275E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3275E0u; }
        if (ctx->pc != 0x3275E0u) { return; }
    }
    ctx->pc = 0x3275E0u;
label_3275e0:
    // 0x3275e0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3275e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3275e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3275e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3275e8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3275e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x3275ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3275ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3275f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3275f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3275f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3275F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3275F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3275F4u;
            // 0x3275f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3275FCu;
    // 0x3275fc: 0x0  nop
    ctx->pc = 0x3275fcu;
    // NOP
}
