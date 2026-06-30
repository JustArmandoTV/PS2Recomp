#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166690
// Address: 0x166690 - 0x1666e8
void sub_00166690_0x166690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166690_0x166690");
#endif

    ctx->pc = 0x166690u;

    // 0x166690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x166690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x166694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x166694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x166698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16669c: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x16669cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1666a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1666A0u;
    {
        const bool branch_taken_0x1666a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1666A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1666A0u;
            // 0x1666a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666a0) {
            ctx->pc = 0x1666B8u;
            goto label_1666b8;
        }
    }
    ctx->pc = 0x1666A8u;
    // 0x1666a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1666a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1666ac: 0x8059922  j           func_166488
    ctx->pc = 0x1666ACu;
    ctx->pc = 0x1666B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666ACu;
            // 0x1666b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166488u;
    {
        auto targetFn = runtime->lookupFunction(0x166488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1666B4u;
    // 0x1666b4: 0x0  nop
    ctx->pc = 0x1666b4u;
    // NOP
label_1666b8:
    // 0x1666b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1666B8u;
    {
        const bool branch_taken_0x1666b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1666BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1666B8u;
            // 0x1666bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666b8) {
            ctx->pc = 0x1666C8u;
            goto label_1666c8;
        }
    }
    ctx->pc = 0x1666C0u;
    // 0x1666c0: 0x80598bc  j           func_1662F0
    ctx->pc = 0x1666C0u;
    ctx->pc = 0x1666C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666C0u;
            // 0x1666c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1662F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1662F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1666C8u;
label_1666c8:
    // 0x1666c8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1666C8u;
    {
        const bool branch_taken_0x1666c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1666c8) {
            ctx->pc = 0x1666E0u;
            goto label_1666e0;
        }
    }
    ctx->pc = 0x1666D0u;
    // 0x1666d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1666d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1666d4: 0x805985e  j           func_166178
    ctx->pc = 0x1666D4u;
    ctx->pc = 0x1666D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666D4u;
            // 0x1666d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166178u;
    {
        auto targetFn = runtime->lookupFunction(0x166178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1666DCu;
    // 0x1666dc: 0x0  nop
    ctx->pc = 0x1666dcu;
    // NOP
label_1666e0:
    // 0x1666e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1666E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1666E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1666E0u;
            // 0x1666e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1666E8u;
}
