#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00145F00
// Address: 0x145f00 - 0x145f30
void sub_00145F00_0x145f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145F00_0x145f00");
#endif

    ctx->pc = 0x145f00u;

    // 0x145f00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145f04: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x145F04u;
    {
        const bool branch_taken_0x145f04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x145f04) {
            ctx->pc = 0x145F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145F04u;
            // 0x145f08: 0x2403ffdf  addiu       $v1, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145F20u;
            goto label_145f20;
        }
    }
    ctx->pc = 0x145F0Cu;
    // 0x145f0c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x145f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x145f10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x145f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x145f14: 0xaf8482f0  sw          $a0, -0x7D10($gp)
    ctx->pc = 0x145f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935280), GPR_U32(ctx, 4));
    // 0x145f18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145F18u;
    {
        const bool branch_taken_0x145f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145F18u;
            // 0x145f1c: 0xaf8382f4  sw          $v1, -0x7D0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f18) {
            ctx->pc = 0x145F28u;
            goto label_145f28;
        }
    }
    ctx->pc = 0x145F20u;
label_145f20:
    // 0x145f20: 0xaf8082f0  sw          $zero, -0x7D10($gp)
    ctx->pc = 0x145f20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935280), GPR_U32(ctx, 0));
    // 0x145f24: 0xaf8382f4  sw          $v1, -0x7D0C($gp)
    ctx->pc = 0x145f24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935284), GPR_U32(ctx, 3));
label_145f28:
    // 0x145f28: 0x3e00008  jr          $ra
    ctx->pc = 0x145F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145F30u;
}
