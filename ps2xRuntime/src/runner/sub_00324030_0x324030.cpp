#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00324030
// Address: 0x324030 - 0x324070
void sub_00324030_0x324030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324030_0x324030");
#endif

    ctx->pc = 0x324030u;

    // 0x324030: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x324030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x324034: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x324034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x324038: 0x3e00008  jr          $ra
    ctx->pc = 0x324038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324038u;
            // 0x32403c: 0xac830064  sw          $v1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324040u;
    // 0x324040: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x324040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x324044: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x324044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324048: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x324048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x32404c: 0x8057b7c  j           func_15EDF0
    ctx->pc = 0x32404Cu;
    ctx->pc = 0x324050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32404Cu;
            // 0x324050: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x324054u;
    // 0x324054: 0x0  nop
    ctx->pc = 0x324054u;
    // NOP
    // 0x324058: 0x0  nop
    ctx->pc = 0x324058u;
    // NOP
    // 0x32405c: 0x0  nop
    ctx->pc = 0x32405cu;
    // NOP
    // 0x324060: 0x3e00008  jr          $ra
    ctx->pc = 0x324060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324060u;
            // 0x324064: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324068u;
    // 0x324068: 0x0  nop
    ctx->pc = 0x324068u;
    // NOP
    // 0x32406c: 0x0  nop
    ctx->pc = 0x32406cu;
    // NOP
}
