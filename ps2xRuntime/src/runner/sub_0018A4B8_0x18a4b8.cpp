#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A4B8
// Address: 0x18a4b8 - 0x18a4e0
void sub_0018A4B8_0x18a4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A4B8_0x18a4b8");
#endif

    switch (ctx->pc) {
        case 0x18a4b8u: goto label_18a4b8;
        case 0x18a4bcu: goto label_18a4bc;
        case 0x18a4c0u: goto label_18a4c0;
        case 0x18a4c4u: goto label_18a4c4;
        case 0x18a4c8u: goto label_18a4c8;
        case 0x18a4ccu: goto label_18a4cc;
        case 0x18a4d0u: goto label_18a4d0;
        case 0x18a4d4u: goto label_18a4d4;
        case 0x18a4d8u: goto label_18a4d8;
        case 0x18a4dcu: goto label_18a4dc;
        default: break;
    }

    ctx->pc = 0x18a4b8u;

label_18a4b8:
    // 0x18a4b8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a4bc:
    // 0x18a4bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a4bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a4c0:
    // 0x18a4c0: 0x8c426a20  lw          $v0, 0x6A20($v0)
    ctx->pc = 0x18a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27168)));
label_18a4c4:
    // 0x18a4c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a4c8:
    if (ctx->pc == 0x18A4C8u) {
        ctx->pc = 0x18A4C8u;
            // 0x18a4c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A4CCu;
        goto label_18a4cc;
    }
    ctx->pc = 0x18A4C4u;
    {
        const bool branch_taken_0x18a4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4C4u;
            // 0x18a4c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4c4) {
            ctx->pc = 0x18A4D4u;
            goto label_18a4d4;
        }
    }
    ctx->pc = 0x18A4CCu;
label_18a4cc:
    // 0x18a4cc: 0x40f809  jalr        $v0
label_18a4d0:
    if (ctx->pc == 0x18A4D0u) {
        ctx->pc = 0x18A4D4u;
        goto label_18a4d4;
    }
    ctx->pc = 0x18A4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A4D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A4D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A4D4u; }
            if (ctx->pc != 0x18A4D4u) { return; }
        }
        }
    }
    ctx->pc = 0x18A4D4u;
label_18a4d4:
    // 0x18a4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a4d8:
    // 0x18a4d8: 0x3e00008  jr          $ra
label_18a4dc:
    if (ctx->pc == 0x18A4DCu) {
        ctx->pc = 0x18A4DCu;
            // 0x18a4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A4E0u;
        goto label_fallthrough_0x18a4d8;
    }
    ctx->pc = 0x18A4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4D8u;
            // 0x18a4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x18a4d8:
    ctx->pc = 0x18A4E0u;
}
