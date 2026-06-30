#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8808
// Address: 0x1c8808 - 0x1c8848
void sub_001C8808_0x1c8808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8808_0x1c8808");
#endif

    ctx->pc = 0x1c8808u;

    // 0x1c8808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c880c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c880cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c8810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8814: 0x2463a6c4  addiu       $v1, $v1, -0x593C
    ctx->pc = 0x1c8814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944452));
    // 0x1c8818: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c8818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c881c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c8820: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8820u;
    {
        const bool branch_taken_0x1c8820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8820u;
            // 0x1c8824: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8820) {
            ctx->pc = 0x1C8838u;
            goto label_1c8838;
        }
    }
    ctx->pc = 0x1C8828u;
    // 0x1c8828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c882c: 0x8071fcc  j           func_1C7F30
    ctx->pc = 0x1C882Cu;
    ctx->pc = 0x1C8830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C882Cu;
            // 0x1c8830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F30u;
    {
        auto targetFn = runtime->lookupFunction(0x1C7F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C8834u;
    // 0x1c8834: 0x0  nop
    ctx->pc = 0x1c8834u;
    // NOP
label_1c8838:
    // 0x1c8838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c883c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C883Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C883Cu;
            // 0x1c8840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8844u;
    // 0x1c8844: 0x0  nop
    ctx->pc = 0x1c8844u;
    // NOP
}
