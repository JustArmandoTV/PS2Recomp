#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C81D0
// Address: 0x1c81d0 - 0x1c8208
void sub_001C81D0_0x1c81d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C81D0_0x1c81d0");
#endif

    switch (ctx->pc) {
        case 0x1c81e0u: goto label_1c81e0;
        default: break;
    }

    ctx->pc = 0x1c81d0u;

    // 0x1c81d0: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1c81d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1c81d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c81d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c81d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c81d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81dc: 0x0  nop
    ctx->pc = 0x1c81dcu;
    // NOP
label_1c81e0:
    // 0x1c81e0: 0x641006  srlv        $v0, $a0, $v1
    ctx->pc = 0x1c81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1c81e4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c81e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c81e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c81e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c81ec: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1c81ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c81f0: 0x0  nop
    ctx->pc = 0x1c81f0u;
    // NOP
    // 0x1c81f4: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C81F4u;
    {
        const bool branch_taken_0x1c81f4 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1C81F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C81F4u;
            // 0x1c81f8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81f4) {
            ctx->pc = 0x1C81E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c81e0;
        }
    }
    ctx->pc = 0x1C81FCu;
    // 0x1c81fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C81FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8204u;
    // 0x1c8204: 0x0  nop
    ctx->pc = 0x1c8204u;
    // NOP
}
