#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00379950
// Address: 0x379950 - 0x379970
void sub_00379950_0x379950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379950_0x379950");
#endif

    ctx->pc = 0x379950u;

    // 0x379950: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x379950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x379954: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x379954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x379958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x379958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37995c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379960: 0x3e00008  jr          $ra
    ctx->pc = 0x379960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379960u;
            // 0x379964: 0x8c4200d4  lw          $v0, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379968u;
    // 0x379968: 0x0  nop
    ctx->pc = 0x379968u;
    // NOP
    // 0x37996c: 0x0  nop
    ctx->pc = 0x37996cu;
    // NOP
}
