#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192B70
// Address: 0x192b70 - 0x192b98
void sub_00192B70_0x192b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192B70_0x192b70");
#endif

    ctx->pc = 0x192b70u;

    // 0x192b70: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x192b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x192b74: 0xac44feb4  sw          $a0, -0x14C($v0)
    ctx->pc = 0x192b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966964), GPR_U32(ctx, 4));
    // 0x192b78: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192B78u;
    {
        const bool branch_taken_0x192b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B78u;
            // 0x192b7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b78) {
            ctx->pc = 0x192B8Cu;
            goto label_192b8c;
        }
    }
    ctx->pc = 0x192B80u;
    // 0x192b80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x192b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192b84: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x192b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x192b88: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x192b88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_192b8c:
    // 0x192b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x192B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192B94u;
    // 0x192b94: 0x0  nop
    ctx->pc = 0x192b94u;
    // NOP
}
