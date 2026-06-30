#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AD380
// Address: 0x4ad380 - 0x4ad3c0
void sub_004AD380_0x4ad380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD380_0x4ad380");
#endif

    ctx->pc = 0x4ad380u;

    // 0x4ad380: 0x8c8500a8  lw          $a1, 0xA8($a0)
    ctx->pc = 0x4ad380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x4ad384: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ad384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ad388: 0x8c8400a4  lw          $a0, 0xA4($a0)
    ctx->pc = 0x4ad388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x4ad38c: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD38Cu;
    {
        const bool branch_taken_0x4ad38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ad38c) {
            ctx->pc = 0x4AD390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD38Cu;
            // 0x4ad390: 0x3c033f31  lui         $v1, 0x3F31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16177 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD3A4u;
            goto label_4ad3a4;
        }
    }
    ctx->pc = 0x4AD394u;
    // 0x4ad394: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD394u;
    {
        const bool branch_taken_0x4ad394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad394) {
            ctx->pc = 0x4AD3ACu;
            goto label_4ad3ac;
        }
    }
    ctx->pc = 0x4AD39Cu;
    // 0x4ad39c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD39Cu;
    {
        const bool branch_taken_0x4ad39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad39c) {
            ctx->pc = 0x4AD3ACu;
            goto label_4ad3ac;
        }
    }
    ctx->pc = 0x4AD3A4u;
label_4ad3a4:
    // 0x4ad3a4: 0x3463c71c  ori         $v1, $v1, 0xC71C
    ctx->pc = 0x4ad3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50972);
    // 0x4ad3a8: 0xaca30de4  sw          $v1, 0xDE4($a1)
    ctx->pc = 0x4ad3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3556), GPR_U32(ctx, 3));
label_4ad3ac:
    // 0x4ad3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AD3B4u;
    // 0x4ad3b4: 0x0  nop
    ctx->pc = 0x4ad3b4u;
    // NOP
    // 0x4ad3b8: 0x0  nop
    ctx->pc = 0x4ad3b8u;
    // NOP
    // 0x4ad3bc: 0x0  nop
    ctx->pc = 0x4ad3bcu;
    // NOP
}
