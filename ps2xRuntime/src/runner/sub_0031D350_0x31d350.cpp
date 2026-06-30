#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D350
// Address: 0x31d350 - 0x31d370
void sub_0031D350_0x31d350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D350_0x31d350");
#endif

    ctx->pc = 0x31d350u;

    // 0x31d350: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31d350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31d354: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x31d354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x31d358: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x31d358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x31d35c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31d360: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31d360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31d364: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31d364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31d368: 0x3e00008  jr          $ra
    ctx->pc = 0x31D368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D368u;
            // 0x31d36c: 0xa4650046  sh          $a1, 0x46($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D370u;
}
