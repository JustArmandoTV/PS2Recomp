#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003245B0
// Address: 0x3245b0 - 0x3245f0
void sub_003245B0_0x3245b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003245B0_0x3245b0");
#endif

    switch (ctx->pc) {
        case 0x3245b0u: goto label_3245b0;
        case 0x3245b4u: goto label_3245b4;
        case 0x3245b8u: goto label_3245b8;
        case 0x3245bcu: goto label_3245bc;
        case 0x3245c0u: goto label_3245c0;
        case 0x3245c4u: goto label_3245c4;
        case 0x3245c8u: goto label_3245c8;
        case 0x3245ccu: goto label_3245cc;
        case 0x3245d0u: goto label_3245d0;
        case 0x3245d4u: goto label_3245d4;
        case 0x3245d8u: goto label_3245d8;
        case 0x3245dcu: goto label_3245dc;
        case 0x3245e0u: goto label_3245e0;
        case 0x3245e4u: goto label_3245e4;
        case 0x3245e8u: goto label_3245e8;
        case 0x3245ecu: goto label_3245ec;
        default: break;
    }

    ctx->pc = 0x3245b0u;

label_3245b0:
    // 0x3245b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3245b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3245b4:
    // 0x3245b4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3245b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3245b8:
    // 0x3245b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3245b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3245bc:
    // 0x3245bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3245bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3245c0:
    // 0x3245c0: 0x8c6405dc  lw          $a0, 0x5DC($v1)
    ctx->pc = 0x3245c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1500)));
label_3245c4:
    // 0x3245c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3245c8:
    if (ctx->pc == 0x3245C8u) {
        ctx->pc = 0x3245C8u;
            // 0x3245c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3245CCu;
        goto label_3245cc;
    }
    ctx->pc = 0x3245C4u;
    {
        const bool branch_taken_0x3245c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3245c4) {
            ctx->pc = 0x3245C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3245C4u;
            // 0x3245c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3245E0u;
            goto label_3245e0;
        }
    }
    ctx->pc = 0x3245CCu;
label_3245cc:
    // 0x3245cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3245ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3245d0:
    // 0x3245d0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3245d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3245d4:
    // 0x3245d4: 0x320f809  jalr        $t9
label_3245d8:
    if (ctx->pc == 0x3245D8u) {
        ctx->pc = 0x3245DCu;
        goto label_3245dc;
    }
    ctx->pc = 0x3245D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3245DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3245DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3245DCu; }
            if (ctx->pc != 0x3245DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3245DCu;
label_3245dc:
    // 0x3245dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3245dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3245e0:
    // 0x3245e0: 0x3e00008  jr          $ra
label_3245e4:
    if (ctx->pc == 0x3245E4u) {
        ctx->pc = 0x3245E4u;
            // 0x3245e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3245E8u;
        goto label_3245e8;
    }
    ctx->pc = 0x3245E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3245E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3245E0u;
            // 0x3245e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3245E8u;
label_3245e8:
    // 0x3245e8: 0x0  nop
    ctx->pc = 0x3245e8u;
    // NOP
label_3245ec:
    // 0x3245ec: 0x0  nop
    ctx->pc = 0x3245ecu;
    // NOP
}
