#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172B58
// Address: 0x172b58 - 0x172b80
void sub_00172B58_0x172b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172B58_0x172b58");
#endif

    switch (ctx->pc) {
        case 0x172b58u: goto label_172b58;
        case 0x172b5cu: goto label_172b5c;
        case 0x172b60u: goto label_172b60;
        case 0x172b64u: goto label_172b64;
        case 0x172b68u: goto label_172b68;
        case 0x172b6cu: goto label_172b6c;
        case 0x172b70u: goto label_172b70;
        case 0x172b74u: goto label_172b74;
        case 0x172b78u: goto label_172b78;
        case 0x172b7cu: goto label_172b7c;
        default: break;
    }

    ctx->pc = 0x172b58u;

label_172b58:
    // 0x172b58: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x172b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_172b5c:
    // 0x172b5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_172b60:
    // 0x172b60: 0x8c423f2c  lw          $v0, 0x3F2C($v0)
    ctx->pc = 0x172b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16172)));
label_172b64:
    // 0x172b64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_172b68:
    if (ctx->pc == 0x172B68u) {
        ctx->pc = 0x172B68u;
            // 0x172b68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x172B6Cu;
        goto label_172b6c;
    }
    ctx->pc = 0x172B64u;
    {
        const bool branch_taken_0x172b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B64u;
            // 0x172b68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b64) {
            ctx->pc = 0x172B74u;
            goto label_172b74;
        }
    }
    ctx->pc = 0x172B6Cu;
label_172b6c:
    // 0x172b6c: 0x40f809  jalr        $v0
label_172b70:
    if (ctx->pc == 0x172B70u) {
        ctx->pc = 0x172B74u;
        goto label_172b74;
    }
    ctx->pc = 0x172B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172B74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x172B74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172B74u; }
            if (ctx->pc != 0x172B74u) { return; }
        }
        }
    }
    ctx->pc = 0x172B74u;
label_172b74:
    // 0x172b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172b78:
    // 0x172b78: 0x3e00008  jr          $ra
label_172b7c:
    if (ctx->pc == 0x172B7Cu) {
        ctx->pc = 0x172B7Cu;
            // 0x172b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x172B80u;
        goto label_fallthrough_0x172b78;
    }
    ctx->pc = 0x172B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B78u;
            // 0x172b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x172b78:
    ctx->pc = 0x172B80u;
}
