#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CFA40
// Address: 0x1cfa40 - 0x1cfa70
void sub_001CFA40_0x1cfa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFA40_0x1cfa40");
#endif

    switch (ctx->pc) {
        case 0x1cfa4cu: goto label_1cfa4c;
        default: break;
    }

    ctx->pc = 0x1cfa40u;

    // 0x1cfa40: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1cfa40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1cfa44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cfa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfa48: 0x24849760  addiu       $a0, $a0, -0x68A0
    ctx->pc = 0x1cfa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940512));
label_1cfa4c:
    // 0x1cfa4c: 0xa085002f  sb          $a1, 0x2F($a0)
    ctx->pc = 0x1cfa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 47), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cfa50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cfa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cfa54: 0xa085002e  sb          $a1, 0x2E($a0)
    ctx->pc = 0x1cfa54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 46), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cfa58: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1cfa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1cfa5c: 0x0  nop
    ctx->pc = 0x1cfa5cu;
    // NOP
    // 0x1cfa60: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CFA60u;
    {
        const bool branch_taken_0x1cfa60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfa60) {
            ctx->pc = 0x1CFA4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cfa4c;
        }
    }
    ctx->pc = 0x1CFA68u;
    // 0x1cfa68: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CFA70u;
}
