#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A588
// Address: 0x18a588 - 0x18a5b0
void sub_0018A588_0x18a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A588_0x18a588");
#endif

    switch (ctx->pc) {
        case 0x18a588u: goto label_18a588;
        case 0x18a58cu: goto label_18a58c;
        case 0x18a590u: goto label_18a590;
        case 0x18a594u: goto label_18a594;
        case 0x18a598u: goto label_18a598;
        case 0x18a59cu: goto label_18a59c;
        case 0x18a5a0u: goto label_18a5a0;
        case 0x18a5a4u: goto label_18a5a4;
        case 0x18a5a8u: goto label_18a5a8;
        case 0x18a5acu: goto label_18a5ac;
        default: break;
    }

    ctx->pc = 0x18a588u;

label_18a588:
    // 0x18a588: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a58c:
    // 0x18a58c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a58cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a590:
    // 0x18a590: 0x8c426a34  lw          $v0, 0x6A34($v0)
    ctx->pc = 0x18a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27188)));
label_18a594:
    // 0x18a594: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a598:
    if (ctx->pc == 0x18A598u) {
        ctx->pc = 0x18A598u;
            // 0x18a598: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A59Cu;
        goto label_18a59c;
    }
    ctx->pc = 0x18A594u;
    {
        const bool branch_taken_0x18a594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A594u;
            // 0x18a598: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a594) {
            ctx->pc = 0x18A5A4u;
            goto label_18a5a4;
        }
    }
    ctx->pc = 0x18A59Cu;
label_18a59c:
    // 0x18a59c: 0x40f809  jalr        $v0
label_18a5a0:
    if (ctx->pc == 0x18A5A0u) {
        ctx->pc = 0x18A5A4u;
        goto label_18a5a4;
    }
    ctx->pc = 0x18A59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A5A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A5A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A5A4u; }
            if (ctx->pc != 0x18A5A4u) { return; }
        }
        }
    }
    ctx->pc = 0x18A5A4u;
label_18a5a4:
    // 0x18a5a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a5a8:
    // 0x18a5a8: 0x3e00008  jr          $ra
label_18a5ac:
    if (ctx->pc == 0x18A5ACu) {
        ctx->pc = 0x18A5ACu;
            // 0x18a5ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A5B0u;
        goto label_fallthrough_0x18a5a8;
    }
    ctx->pc = 0x18A5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5A8u;
            // 0x18a5ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x18a5a8:
    ctx->pc = 0x18A5B0u;
}
