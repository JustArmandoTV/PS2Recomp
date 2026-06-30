#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180C38
// Address: 0x180c38 - 0x180c68
void sub_00180C38_0x180c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180C38_0x180c38");
#endif

    ctx->pc = 0x180c38u;

    // 0x180c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180c3c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180C3Cu;
    {
        const bool branch_taken_0x180c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x180C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180C3Cu;
            // 0x180c40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c3c) {
            ctx->pc = 0x180C58u;
            goto label_180c58;
        }
    }
    ctx->pc = 0x180C44u;
    // 0x180c44: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180c4c: 0x24846ae0  addiu       $a0, $a0, 0x6AE0
    ctx->pc = 0x180c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27360));
    // 0x180c50: 0x8060334  j           func_180CD0
    ctx->pc = 0x180C50u;
    ctx->pc = 0x180C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C50u;
            // 0x180c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180CD0_0x180cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180C58u;
label_180c58:
    // 0x180c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180c5c: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x180c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x180c60: 0x3e00008  jr          $ra
    ctx->pc = 0x180C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180C60u;
            // 0x180c64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180C68u;
}
