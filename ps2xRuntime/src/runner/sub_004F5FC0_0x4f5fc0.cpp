#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F5FC0
// Address: 0x4f5fc0 - 0x4f5fe0
void sub_004F5FC0_0x4f5fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5FC0_0x4f5fc0");
#endif

    ctx->pc = 0x4f5fc0u;

    // 0x4f5fc0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4f5fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x4f5fc4: 0xa085000c  sb          $a1, 0xC($a0)
    ctx->pc = 0x4f5fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x4f5fc8: 0x24638ab8  addiu       $v1, $v1, -0x7548
    ctx->pc = 0x4f5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937272));
    // 0x4f5fcc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4f5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f5fd0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x4f5fd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f5fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5FD4u;
            // 0x4f5fd8: 0xa0830025  sb          $v1, 0x25($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5FDCu;
    // 0x4f5fdc: 0x0  nop
    ctx->pc = 0x4f5fdcu;
    // NOP
}
