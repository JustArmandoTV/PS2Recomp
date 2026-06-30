#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494400
// Address: 0x494400 - 0x494420
void sub_00494400_0x494400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494400_0x494400");
#endif

    ctx->pc = 0x494400u;

    // 0x494400: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x494400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x494404: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x494404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494408: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x494408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x49440c: 0x3e00008  jr          $ra
    ctx->pc = 0x49440Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49440Cu;
            // 0x494410: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x494414u;
    // 0x494414: 0x0  nop
    ctx->pc = 0x494414u;
    // NOP
    // 0x494418: 0x0  nop
    ctx->pc = 0x494418u;
    // NOP
    // 0x49441c: 0x0  nop
    ctx->pc = 0x49441cu;
    // NOP
}
