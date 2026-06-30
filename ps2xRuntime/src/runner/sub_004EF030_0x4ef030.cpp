#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EF030
// Address: 0x4ef030 - 0x4ef060
void sub_004EF030_0x4ef030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF030_0x4ef030");
#endif

    ctx->pc = 0x4ef030u;

    // 0x4ef030: 0x8c830cc0  lw          $v1, 0xCC0($a0)
    ctx->pc = 0x4ef030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3264)));
    // 0x4ef034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ef034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ef038: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4EF038u;
    {
        const bool branch_taken_0x4ef038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ef038) {
            ctx->pc = 0x4EF03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF038u;
            // 0x4ef03c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF058u;
            goto label_4ef058;
        }
    }
    ctx->pc = 0x4EF040u;
    // 0x4ef040: 0x8c830cc4  lw          $v1, 0xCC4($a0)
    ctx->pc = 0x4ef040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3268)));
    // 0x4ef044: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ef044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4ef048: 0x24428840  addiu       $v0, $v0, -0x77C0
    ctx->pc = 0x4ef048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936640));
    // 0x4ef04c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ef04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4ef050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ef050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ef054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ef054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ef058:
    // 0x4ef058: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF060u;
}
