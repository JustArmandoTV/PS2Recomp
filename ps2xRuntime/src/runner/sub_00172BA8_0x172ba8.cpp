#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172BA8
// Address: 0x172ba8 - 0x172bd0
void sub_00172BA8_0x172ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172BA8_0x172ba8");
#endif

    switch (ctx->pc) {
        case 0x172ba8u: goto label_172ba8;
        case 0x172bacu: goto label_172bac;
        case 0x172bb0u: goto label_172bb0;
        case 0x172bb4u: goto label_172bb4;
        case 0x172bb8u: goto label_172bb8;
        case 0x172bbcu: goto label_172bbc;
        case 0x172bc0u: goto label_172bc0;
        case 0x172bc4u: goto label_172bc4;
        case 0x172bc8u: goto label_172bc8;
        case 0x172bccu: goto label_172bcc;
        default: break;
    }

    ctx->pc = 0x172ba8u;

label_172ba8:
    // 0x172ba8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x172ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_172bac:
    // 0x172bac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_172bb0:
    // 0x172bb0: 0x8c423f38  lw          $v0, 0x3F38($v0)
    ctx->pc = 0x172bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16184)));
label_172bb4:
    // 0x172bb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_172bb8:
    if (ctx->pc == 0x172BB8u) {
        ctx->pc = 0x172BB8u;
            // 0x172bb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x172BBCu;
        goto label_172bbc;
    }
    ctx->pc = 0x172BB4u;
    {
        const bool branch_taken_0x172bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172BB4u;
            // 0x172bb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bb4) {
            ctx->pc = 0x172BC4u;
            goto label_172bc4;
        }
    }
    ctx->pc = 0x172BBCu;
label_172bbc:
    // 0x172bbc: 0x40f809  jalr        $v0
label_172bc0:
    if (ctx->pc == 0x172BC0u) {
        ctx->pc = 0x172BC4u;
        goto label_172bc4;
    }
    ctx->pc = 0x172BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172BC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x172BC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172BC4u; }
            if (ctx->pc != 0x172BC4u) { return; }
        }
        }
    }
    ctx->pc = 0x172BC4u;
label_172bc4:
    // 0x172bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172bc8:
    // 0x172bc8: 0x3e00008  jr          $ra
label_172bcc:
    if (ctx->pc == 0x172BCCu) {
        ctx->pc = 0x172BCCu;
            // 0x172bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x172BD0u;
        goto label_fallthrough_0x172bc8;
    }
    ctx->pc = 0x172BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172BC8u;
            // 0x172bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x172bc8:
    ctx->pc = 0x172BD0u;
}
