#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184B50
// Address: 0x184b50 - 0x184ba0
void sub_00184B50_0x184b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184B50_0x184b50");
#endif

    ctx->pc = 0x184b50u;

    // 0x184b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184b54: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x184b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x184b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184b5c: 0x24630290  addiu       $v1, $v1, 0x290
    ctx->pc = 0x184b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
    // 0x184b60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x184b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184b64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x184b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x184b68: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x184B68u;
    {
        const bool branch_taken_0x184b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B68u;
            // 0x184b6c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b68) {
            ctx->pc = 0x184B90u;
            goto label_184b90;
        }
    }
    ctx->pc = 0x184B70u;
    // 0x184b70: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x184b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x184b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b7c: 0x24840298  addiu       $a0, $a0, 0x298
    ctx->pc = 0x184b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 664));
    // 0x184b80: 0x24060480  addiu       $a2, $zero, 0x480
    ctx->pc = 0x184b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x184b84: 0x804a576  j           func_1295D8
    ctx->pc = 0x184B84u;
    ctx->pc = 0x184B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184B84u;
            // 0x184b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184B8Cu;
    // 0x184b8c: 0x0  nop
    ctx->pc = 0x184b8cu;
    // NOP
label_184b90:
    // 0x184b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184b94: 0x3e00008  jr          $ra
    ctx->pc = 0x184B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B94u;
            // 0x184b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184B9Cu;
    // 0x184b9c: 0x0  nop
    ctx->pc = 0x184b9cu;
    // NOP
}
