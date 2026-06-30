#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1060
// Address: 0x2c1060 - 0x2c1080
void sub_002C1060_0x2c1060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1060_0x2c1060");
#endif

    ctx->pc = 0x2c1060u;

    // 0x2c1060: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c1060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c1064: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c1064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1068: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c1068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c106c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c1070: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1070u;
            // 0x2c1074: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1078u;
    // 0x2c1078: 0x0  nop
    ctx->pc = 0x2c1078u;
    // NOP
    // 0x2c107c: 0x0  nop
    ctx->pc = 0x2c107cu;
    // NOP
}
