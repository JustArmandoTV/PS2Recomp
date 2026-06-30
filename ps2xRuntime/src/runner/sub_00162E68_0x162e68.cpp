#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162E68
// Address: 0x162e68 - 0x162e98
void sub_00162E68_0x162e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162E68_0x162e68");
#endif

    switch (ctx->pc) {
        case 0x162e68u: goto label_162e68;
        case 0x162e6cu: goto label_162e6c;
        case 0x162e70u: goto label_162e70;
        case 0x162e74u: goto label_162e74;
        case 0x162e78u: goto label_162e78;
        case 0x162e7cu: goto label_162e7c;
        case 0x162e80u: goto label_162e80;
        case 0x162e84u: goto label_162e84;
        case 0x162e88u: goto label_162e88;
        case 0x162e8cu: goto label_162e8c;
        case 0x162e90u: goto label_162e90;
        case 0x162e94u: goto label_162e94;
        default: break;
    }

    ctx->pc = 0x162e68u;

label_162e68:
    // 0x162e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_162e6c:
    // 0x162e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_162e70:
    // 0x162e70: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x162e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_162e74:
    // 0x162e74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_162e78:
    if (ctx->pc == 0x162E78u) {
        ctx->pc = 0x162E78u;
            // 0x162e78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162E7Cu;
        goto label_162e7c;
    }
    ctx->pc = 0x162E74u;
    {
        const bool branch_taken_0x162e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E74u;
            // 0x162e78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e74) {
            ctx->pc = 0x162E8Cu;
            goto label_162e8c;
        }
    }
    ctx->pc = 0x162E7Cu;
label_162e7c:
    // 0x162e7c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x162e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_162e80:
    // 0x162e80: 0x8c435fc8  lw          $v1, 0x5FC8($v0)
    ctx->pc = 0x162e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24520)));
label_162e84:
    // 0x162e84: 0x60f809  jalr        $v1
label_162e88:
    if (ctx->pc == 0x162E88u) {
        ctx->pc = 0x162E8Cu;
        goto label_162e8c;
    }
    ctx->pc = 0x162E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162E8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x162E8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162E8Cu; }
            if (ctx->pc != 0x162E8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x162E8Cu;
label_162e8c:
    // 0x162e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162e90:
    // 0x162e90: 0x3e00008  jr          $ra
label_162e94:
    if (ctx->pc == 0x162E94u) {
        ctx->pc = 0x162E94u;
            // 0x162e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162E98u;
        goto label_fallthrough_0x162e90;
    }
    ctx->pc = 0x162E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E90u;
            // 0x162e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x162e90:
    ctx->pc = 0x162E98u;
}
