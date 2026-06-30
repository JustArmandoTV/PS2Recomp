#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B728
// Address: 0x16b728 - 0x16b768
void sub_0016B728_0x16b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B728_0x16b728");
#endif

    ctx->pc = 0x16b728u;

    // 0x16b728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b72c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b734: 0x80599e0  j           func_166780
    ctx->pc = 0x16B734u;
    ctx->pc = 0x16B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B734u;
            // 0x16b738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B73Cu;
    // 0x16b73c: 0x0  nop
    ctx->pc = 0x16b73cu;
    // NOP
    // 0x16b740: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16b740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16b744: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16b744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16b748: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x16b748u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x16b74c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x16b74cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x16b750: 0xac449d50  sw          $a0, -0x62B0($v0)
    ctx->pc = 0x16b750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942032), GPR_U32(ctx, 4));
    // 0x16b754: 0xac659d54  sw          $a1, -0x62AC($v1)
    ctx->pc = 0x16b754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942036), GPR_U32(ctx, 5));
    // 0x16b758: 0xad069d58  sw          $a2, -0x62A8($t0)
    ctx->pc = 0x16b758u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294942040), GPR_U32(ctx, 6));
    // 0x16b75c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B75Cu;
            // 0x16b760: 0xad279d5c  sw          $a3, -0x62A4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294942044), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B764u;
    // 0x16b764: 0x0  nop
    ctx->pc = 0x16b764u;
    // NOP
}
