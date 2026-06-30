#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00547300
// Address: 0x547300 - 0x547320
void sub_00547300_0x547300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00547300_0x547300");
#endif

    ctx->pc = 0x547300u;

    // 0x547300: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x547300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x547304: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x547304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
    // 0x547308: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x547308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
    // 0x54730c: 0x8c63b708  lw          $v1, -0x48F8($v1)
    ctx->pc = 0x54730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948616)));
    // 0x547310: 0x2484b6f8  addiu       $a0, $a0, -0x4908
    ctx->pc = 0x547310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948600));
    // 0x547314: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x547314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x547318: 0x3e00008  jr          $ra
    ctx->pc = 0x547318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54731Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547318u;
            // 0x54731c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547320u;
}
