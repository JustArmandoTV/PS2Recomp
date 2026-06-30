#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139CE0
// Address: 0x139ce0 - 0x139d10
void sub_00139CE0_0x139ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139CE0_0x139ce0");
#endif

    ctx->pc = 0x139ce0u;

    // 0x139ce0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x139ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x139ce4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x139ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x139ce8: 0xac435854  sw          $v1, 0x5854($v0)
    ctx->pc = 0x139ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 3));
    // 0x139cec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x139cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x139cf0: 0xaf848158  sw          $a0, -0x7EA8($gp)
    ctx->pc = 0x139cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934872), GPR_U32(ctx, 4));
    // 0x139cf4: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x139cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
    // 0x139cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x139CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CFCu;
            // 0x139d00: 0xaf828220  sw          $v0, -0x7DE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139D04u;
    // 0x139d04: 0x0  nop
    ctx->pc = 0x139d04u;
    // NOP
    // 0x139d08: 0x0  nop
    ctx->pc = 0x139d08u;
    // NOP
    // 0x139d0c: 0x0  nop
    ctx->pc = 0x139d0cu;
    // NOP
}
