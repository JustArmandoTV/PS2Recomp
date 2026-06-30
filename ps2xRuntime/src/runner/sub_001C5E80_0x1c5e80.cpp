#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5E80
// Address: 0x1c5e80 - 0x1c5ea8
void sub_001C5E80_0x1c5e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5E80_0x1c5e80");
#endif

    ctx->pc = 0x1c5e80u;

    // 0x1c5e80: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c5e80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5e84: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1c5e84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5e88: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1c5e88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c5e8c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1c5e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5e90: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1c5e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c5e94: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1c5e94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5e98: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1c5e98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c5e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E9Cu;
            // 0x1c5ea0: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5EA4u;
    // 0x1c5ea4: 0x0  nop
    ctx->pc = 0x1c5ea4u;
    // NOP
}
