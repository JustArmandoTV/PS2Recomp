#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020FBE8
// Address: 0x20fbe8 - 0x20fc10
void sub_0020FBE8_0x20fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FBE8_0x20fbe8");
#endif

    ctx->pc = 0x20fbe8u;

    // 0x20fbe8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x20fbe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fbec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20fbf0: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x20fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x20fbf4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20fbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20fbf8: 0x24670020  addiu       $a3, $v1, 0x20
    ctx->pc = 0x20fbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x20fbfc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x20fbfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20fc00: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20fc00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20fc04: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x20fc04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x20fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x20FC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC08u;
            // 0x20fc0c: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FC10u;
}
