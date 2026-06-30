#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A490
// Address: 0x18a490 - 0x18a4b8
void sub_0018A490_0x18a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A490_0x18a490");
#endif

    switch (ctx->pc) {
        case 0x18a490u: goto label_18a490;
        case 0x18a494u: goto label_18a494;
        case 0x18a498u: goto label_18a498;
        case 0x18a49cu: goto label_18a49c;
        case 0x18a4a0u: goto label_18a4a0;
        case 0x18a4a4u: goto label_18a4a4;
        case 0x18a4a8u: goto label_18a4a8;
        case 0x18a4acu: goto label_18a4ac;
        case 0x18a4b0u: goto label_18a4b0;
        case 0x18a4b4u: goto label_18a4b4;
        default: break;
    }

    ctx->pc = 0x18a490u;

label_18a490:
    // 0x18a490: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a494:
    // 0x18a494: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a498:
    // 0x18a498: 0x8c426a1c  lw          $v0, 0x6A1C($v0)
    ctx->pc = 0x18a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27164)));
label_18a49c:
    // 0x18a49c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a4a0:
    if (ctx->pc == 0x18A4A0u) {
        ctx->pc = 0x18A4A0u;
            // 0x18a4a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A4A4u;
        goto label_18a4a4;
    }
    ctx->pc = 0x18A49Cu;
    {
        const bool branch_taken_0x18a49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A49Cu;
            // 0x18a4a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a49c) {
            ctx->pc = 0x18A4ACu;
            goto label_18a4ac;
        }
    }
    ctx->pc = 0x18A4A4u;
label_18a4a4:
    // 0x18a4a4: 0x40f809  jalr        $v0
label_18a4a8:
    if (ctx->pc == 0x18A4A8u) {
        ctx->pc = 0x18A4ACu;
        goto label_18a4ac;
    }
    ctx->pc = 0x18A4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A4ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A4ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A4ACu; }
            if (ctx->pc != 0x18A4ACu) { return; }
        }
        }
    }
    ctx->pc = 0x18A4ACu;
label_18a4ac:
    // 0x18a4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a4b0:
    // 0x18a4b0: 0x3e00008  jr          $ra
label_18a4b4:
    if (ctx->pc == 0x18A4B4u) {
        ctx->pc = 0x18A4B4u;
            // 0x18a4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A4B8u;
        goto label_fallthrough_0x18a4b0;
    }
    ctx->pc = 0x18A4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4B0u;
            // 0x18a4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x18a4b0:
    ctx->pc = 0x18A4B8u;
}
