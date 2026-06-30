#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00547350
// Address: 0x547350 - 0x547370
void sub_00547350_0x547350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00547350_0x547350");
#endif

    ctx->pc = 0x547350u;

    // 0x547350: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x547350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x547354: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x547354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x547358: 0x2442b6f8  addiu       $v0, $v0, -0x4908
    ctx->pc = 0x547358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948600));
    // 0x54735c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x547360: 0x3e00008  jr          $ra
    ctx->pc = 0x547360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547360u;
            // 0x547364: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547368u;
    // 0x547368: 0x0  nop
    ctx->pc = 0x547368u;
    // NOP
    // 0x54736c: 0x0  nop
    ctx->pc = 0x54736cu;
    // NOP
}
