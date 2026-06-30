#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180390
// Address: 0x180390 - 0x1803d0
void sub_00180390_0x180390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180390_0x180390");
#endif

    ctx->pc = 0x180390u;

    // 0x180390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180394: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180394u;
    {
        const bool branch_taken_0x180394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x180398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180394u;
            // 0x180398: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180394) {
            ctx->pc = 0x1803B0u;
            goto label_1803b0;
        }
    }
    ctx->pc = 0x18039Cu;
    // 0x18039c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18039cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1803a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1803a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1803a4: 0x248467b8  addiu       $a0, $a0, 0x67B8
    ctx->pc = 0x1803a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26552));
    // 0x1803a8: 0x8060334  j           func_180CD0
    ctx->pc = 0x1803A8u;
    ctx->pc = 0x1803ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1803A8u;
            // 0x1803ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180CD0_0x180cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1803B0u;
label_1803b0:
    // 0x1803b0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1803b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1803B4u;
    {
        const bool branch_taken_0x1803b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1803B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1803B4u;
            // 0x1803b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803b4) {
            ctx->pc = 0x1803C8u;
            goto label_1803c8;
        }
    }
    ctx->pc = 0x1803BCu;
    // 0x1803bc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1803bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1803c0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1803c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1803c4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1803c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_1803c8:
    // 0x1803c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1803C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1803CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1803C8u;
            // 0x1803cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1803D0u;
}
