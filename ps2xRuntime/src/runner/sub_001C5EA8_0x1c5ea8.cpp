#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5EA8
// Address: 0x1c5ea8 - 0x1c5ee8
void sub_001C5EA8_0x1c5ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5EA8_0x1c5ea8");
#endif

    ctx->pc = 0x1c5ea8u;

    // 0x1c5ea8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c5ea8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5eac: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1c5eacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5eb0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1c5eb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c5eb4: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1c5eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5eb8: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1c5eb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c5ebc: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1c5ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5ec0: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1c5ec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c5ec4: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1c5ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5ec8: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x1c5ec8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c5ecc: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x1c5eccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5ed0: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x1c5ed0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1c5ed4: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x1c5ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5ed8: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x1c5ed8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1c5edc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5EDCu;
            // 0x1c5ee0: 0xa0a20006  sb          $v0, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5EE4u;
    // 0x1c5ee4: 0x0  nop
    ctx->pc = 0x1c5ee4u;
    // NOP
}
