#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172B80
// Address: 0x172b80 - 0x172ba8
void sub_00172B80_0x172b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172B80_0x172b80");
#endif

    switch (ctx->pc) {
        case 0x172b80u: goto label_172b80;
        case 0x172b84u: goto label_172b84;
        case 0x172b88u: goto label_172b88;
        case 0x172b8cu: goto label_172b8c;
        case 0x172b90u: goto label_172b90;
        case 0x172b94u: goto label_172b94;
        case 0x172b98u: goto label_172b98;
        case 0x172b9cu: goto label_172b9c;
        case 0x172ba0u: goto label_172ba0;
        case 0x172ba4u: goto label_172ba4;
        default: break;
    }

    ctx->pc = 0x172b80u;

label_172b80:
    // 0x172b80: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x172b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_172b84:
    // 0x172b84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_172b88:
    // 0x172b88: 0x8c423f30  lw          $v0, 0x3F30($v0)
    ctx->pc = 0x172b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16176)));
label_172b8c:
    // 0x172b8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_172b90:
    if (ctx->pc == 0x172B90u) {
        ctx->pc = 0x172B90u;
            // 0x172b90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x172B94u;
        goto label_172b94;
    }
    ctx->pc = 0x172B8Cu;
    {
        const bool branch_taken_0x172b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B8Cu;
            // 0x172b90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b8c) {
            ctx->pc = 0x172B9Cu;
            goto label_172b9c;
        }
    }
    ctx->pc = 0x172B94u;
label_172b94:
    // 0x172b94: 0x40f809  jalr        $v0
label_172b98:
    if (ctx->pc == 0x172B98u) {
        ctx->pc = 0x172B9Cu;
        goto label_172b9c;
    }
    ctx->pc = 0x172B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172B9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x172B9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172B9Cu; }
            if (ctx->pc != 0x172B9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x172B9Cu;
label_172b9c:
    // 0x172b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172ba0:
    // 0x172ba0: 0x3e00008  jr          $ra
label_172ba4:
    if (ctx->pc == 0x172BA4u) {
        ctx->pc = 0x172BA4u;
            // 0x172ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x172BA8u;
        goto label_fallthrough_0x172ba0;
    }
    ctx->pc = 0x172BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172BA0u;
            // 0x172ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x172ba0:
    ctx->pc = 0x172BA8u;
}
