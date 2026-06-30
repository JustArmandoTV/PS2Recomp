#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3A30
// Address: 0x3c3a30 - 0x3c3a40
void sub_003C3A30_0x3c3a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3A30_0x3c3a30");
#endif

    ctx->pc = 0x3c3a30u;

    // 0x3c3a30: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3c3a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c3a34: 0x904200b0  lbu         $v0, 0xB0($v0)
    ctx->pc = 0x3c3a34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x3c3a38: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3A38u;
            // 0x3c3a3c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3A40u;
}
