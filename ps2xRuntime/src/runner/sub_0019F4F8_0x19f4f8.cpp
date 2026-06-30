#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F4F8
// Address: 0x19f4f8 - 0x19f518
void sub_0019F4F8_0x19f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F4F8_0x19f4f8");
#endif

    ctx->pc = 0x19f4f8u;

    // 0x19f4f8: 0x24820408  addiu       $v0, $a0, 0x408
    ctx->pc = 0x19f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
    // 0x19f4fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f500: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19f500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x19f504: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19f504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19f508: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19f508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19f50c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F50Cu;
            // 0x19f510: 0xac830404  sw          $v1, 0x404($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F514u;
    // 0x19f514: 0x0  nop
    ctx->pc = 0x19f514u;
    // NOP
}
