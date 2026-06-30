#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238BD0
// Address: 0x238bd0 - 0x238c20
void sub_00238BD0_0x238bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238BD0_0x238bd0");
#endif

    switch (ctx->pc) {
        case 0x238bd0u: goto label_238bd0;
        case 0x238bd4u: goto label_238bd4;
        case 0x238bd8u: goto label_238bd8;
        case 0x238bdcu: goto label_238bdc;
        case 0x238be0u: goto label_238be0;
        case 0x238be4u: goto label_238be4;
        case 0x238be8u: goto label_238be8;
        case 0x238becu: goto label_238bec;
        case 0x238bf0u: goto label_238bf0;
        case 0x238bf4u: goto label_238bf4;
        case 0x238bf8u: goto label_238bf8;
        case 0x238bfcu: goto label_238bfc;
        case 0x238c00u: goto label_238c00;
        case 0x238c04u: goto label_238c04;
        case 0x238c08u: goto label_238c08;
        case 0x238c0cu: goto label_238c0c;
        case 0x238c10u: goto label_238c10;
        case 0x238c14u: goto label_238c14;
        case 0x238c18u: goto label_238c18;
        case 0x238c1cu: goto label_238c1c;
        default: break;
    }

    ctx->pc = 0x238bd0u;

label_238bd0:
    // 0x238bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_238bd4:
    // 0x238bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_238bd8:
    // 0x238bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_238bdc:
    // 0x238bdc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x238bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_238be0:
    // 0x238be0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238be4:
    // 0x238be4: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x238be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_238be8:
    // 0x238be8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x238be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_238bec:
    // 0x238bec: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x238becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_238bf0:
    // 0x238bf0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x238bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_238bf4:
    // 0x238bf4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x238bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_238bf8:
    // 0x238bf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x238bf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_238bfc:
    // 0x238bfc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x238bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_238c00:
    // 0x238c00: 0x320f809  jalr        $t9
label_238c04:
    if (ctx->pc == 0x238C04u) {
        ctx->pc = 0x238C04u;
            // 0x238c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238C08u;
        goto label_238c08;
    }
    ctx->pc = 0x238C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x238C08u);
        ctx->pc = 0x238C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C00u;
            // 0x238c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238C08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238C08u; }
            if (ctx->pc != 0x238C08u) { return; }
        }
        }
    }
    ctx->pc = 0x238C08u;
label_238c08:
    // 0x238c08: 0xc08e2b0  jal         func_238AC0
label_238c0c:
    if (ctx->pc == 0x238C0Cu) {
        ctx->pc = 0x238C0Cu;
            // 0x238c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238C10u;
        goto label_238c10;
    }
    ctx->pc = 0x238C08u;
    SET_GPR_U32(ctx, 31, 0x238C10u);
    ctx->pc = 0x238C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238C08u;
            // 0x238c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    if (runtime->hasFunction(0x238AC0u)) {
        auto targetFn = runtime->lookupFunction(0x238AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C10u; }
        if (ctx->pc != 0x238C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238AC0_0x238ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C10u; }
        if (ctx->pc != 0x238C10u) { return; }
    }
    ctx->pc = 0x238C10u;
label_238c10:
    // 0x238c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238c14:
    // 0x238c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_238c18:
    // 0x238c18: 0x3e00008  jr          $ra
label_238c1c:
    if (ctx->pc == 0x238C1Cu) {
        ctx->pc = 0x238C1Cu;
            // 0x238c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x238C20u;
        goto label_fallthrough_0x238c18;
    }
    ctx->pc = 0x238C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C18u;
            // 0x238c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x238c18:
    ctx->pc = 0x238C20u;
}
