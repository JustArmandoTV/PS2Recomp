#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4290
// Address: 0x2e4290 - 0x2e42c0
void sub_002E4290_0x2e4290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4290_0x2e4290");
#endif

    ctx->pc = 0x2e4290u;

    // 0x2e4290: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x2e4290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x2e4294: 0xa0860028  sb          $a2, 0x28($a0)
    ctx->pc = 0x2e4294u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x2e4298: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2e4298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e429c: 0xa0870029  sb          $a3, 0x29($a0)
    ctx->pc = 0x2e429cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 7));
    // 0x2e42a0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2e42a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e42a4: 0xa088002a  sb          $t0, 0x2A($a0)
    ctx->pc = 0x2e42a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e42a8: 0xa08a002b  sb          $t2, 0x2B($a0)
    ctx->pc = 0x2e42a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 10));
    // 0x2e42ac: 0x804a508  j           func_129420
    ctx->pc = 0x2E42ACu;
    ctx->pc = 0x2E42B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42ACu;
            // 0x2e42b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2E42B4u;
    // 0x2e42b4: 0x0  nop
    ctx->pc = 0x2e42b4u;
    // NOP
    // 0x2e42b8: 0x0  nop
    ctx->pc = 0x2e42b8u;
    // NOP
    // 0x2e42bc: 0x0  nop
    ctx->pc = 0x2e42bcu;
    // NOP
}
