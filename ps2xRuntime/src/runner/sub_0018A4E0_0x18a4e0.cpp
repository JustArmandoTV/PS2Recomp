#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A4E0
// Address: 0x18a4e0 - 0x18a508
void sub_0018A4E0_0x18a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A4E0_0x18a4e0");
#endif

    switch (ctx->pc) {
        case 0x18a4e0u: goto label_18a4e0;
        case 0x18a4e4u: goto label_18a4e4;
        case 0x18a4e8u: goto label_18a4e8;
        case 0x18a4ecu: goto label_18a4ec;
        case 0x18a4f0u: goto label_18a4f0;
        case 0x18a4f4u: goto label_18a4f4;
        case 0x18a4f8u: goto label_18a4f8;
        case 0x18a4fcu: goto label_18a4fc;
        case 0x18a500u: goto label_18a500;
        case 0x18a504u: goto label_18a504;
        default: break;
    }

    ctx->pc = 0x18a4e0u;

label_18a4e0:
    // 0x18a4e0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a4e4:
    // 0x18a4e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a4e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a4e8:
    // 0x18a4e8: 0x8c426a24  lw          $v0, 0x6A24($v0)
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27172)));
label_18a4ec:
    // 0x18a4ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a4f0:
    if (ctx->pc == 0x18A4F0u) {
        ctx->pc = 0x18A4F0u;
            // 0x18a4f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A4F4u;
        goto label_18a4f4;
    }
    ctx->pc = 0x18A4ECu;
    {
        const bool branch_taken_0x18a4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4ECu;
            // 0x18a4f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4ec) {
            ctx->pc = 0x18A4FCu;
            goto label_18a4fc;
        }
    }
    ctx->pc = 0x18A4F4u;
label_18a4f4:
    // 0x18a4f4: 0x40f809  jalr        $v0
label_18a4f8:
    if (ctx->pc == 0x18A4F8u) {
        ctx->pc = 0x18A4FCu;
        goto label_18a4fc;
    }
    ctx->pc = 0x18A4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A4FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A4FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A4FCu; }
            if (ctx->pc != 0x18A4FCu) { return; }
        }
        }
    }
    ctx->pc = 0x18A4FCu;
label_18a4fc:
    // 0x18a4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a500:
    // 0x18a500: 0x3e00008  jr          $ra
label_18a504:
    if (ctx->pc == 0x18A504u) {
        ctx->pc = 0x18A504u;
            // 0x18a504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A508u;
        goto label_fallthrough_0x18a500;
    }
    ctx->pc = 0x18A500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A500u;
            // 0x18a504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x18a500:
    ctx->pc = 0x18A508u;
}
