#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A538
// Address: 0x18a538 - 0x18a560
void sub_0018A538_0x18a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A538_0x18a538");
#endif

    switch (ctx->pc) {
        case 0x18a538u: goto label_18a538;
        case 0x18a53cu: goto label_18a53c;
        case 0x18a540u: goto label_18a540;
        case 0x18a544u: goto label_18a544;
        case 0x18a548u: goto label_18a548;
        case 0x18a54cu: goto label_18a54c;
        case 0x18a550u: goto label_18a550;
        case 0x18a554u: goto label_18a554;
        case 0x18a558u: goto label_18a558;
        case 0x18a55cu: goto label_18a55c;
        default: break;
    }

    ctx->pc = 0x18a538u;

label_18a538:
    // 0x18a538: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18a538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18a53c:
    // 0x18a53c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a53cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18a540:
    // 0x18a540: 0x8c426a2c  lw          $v0, 0x6A2C($v0)
    ctx->pc = 0x18a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27180)));
label_18a544:
    // 0x18a544: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a548:
    if (ctx->pc == 0x18A548u) {
        ctx->pc = 0x18A548u;
            // 0x18a548: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18A54Cu;
        goto label_18a54c;
    }
    ctx->pc = 0x18A544u;
    {
        const bool branch_taken_0x18a544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A544u;
            // 0x18a548: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a544) {
            ctx->pc = 0x18A554u;
            goto label_18a554;
        }
    }
    ctx->pc = 0x18A54Cu;
label_18a54c:
    // 0x18a54c: 0x40f809  jalr        $v0
label_18a550:
    if (ctx->pc == 0x18A550u) {
        ctx->pc = 0x18A554u;
        goto label_18a554;
    }
    ctx->pc = 0x18A54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A554u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x18A554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18A554u; }
            if (ctx->pc != 0x18A554u) { return; }
        }
        }
    }
    ctx->pc = 0x18A554u;
label_18a554:
    // 0x18a554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a558:
    // 0x18a558: 0x3e00008  jr          $ra
label_18a55c:
    if (ctx->pc == 0x18A55Cu) {
        ctx->pc = 0x18A55Cu;
            // 0x18a55c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18A560u;
        goto label_fallthrough_0x18a558;
    }
    ctx->pc = 0x18A558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A558u;
            // 0x18a55c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x18a558:
    ctx->pc = 0x18A560u;
}
