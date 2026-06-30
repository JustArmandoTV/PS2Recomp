#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC388
// Address: 0x1bc388 - 0x1bc3a0
void sub_001BC388_0x1bc388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC388_0x1bc388");
#endif

    ctx->pc = 0x1bc388u;

    // 0x1bc388: 0x90830020  lbu         $v1, 0x20($a0)
    ctx->pc = 0x1bc388u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1bc38c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x1bc38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bc390: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1bc390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bc394: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC394u;
            // 0x1bc398: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC39Cu;
    // 0x1bc39c: 0x0  nop
    ctx->pc = 0x1bc39cu;
    // NOP
}
