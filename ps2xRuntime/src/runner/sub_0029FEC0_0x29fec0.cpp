#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029FEC0
// Address: 0x29fec0 - 0x29ff00
void sub_0029FEC0_0x29fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FEC0_0x29fec0");
#endif

    switch (ctx->pc) {
        case 0x29fec0u: goto label_29fec0;
        case 0x29fec4u: goto label_29fec4;
        case 0x29fec8u: goto label_29fec8;
        case 0x29feccu: goto label_29fecc;
        case 0x29fed0u: goto label_29fed0;
        case 0x29fed4u: goto label_29fed4;
        case 0x29fed8u: goto label_29fed8;
        case 0x29fedcu: goto label_29fedc;
        case 0x29fee0u: goto label_29fee0;
        case 0x29fee4u: goto label_29fee4;
        case 0x29fee8u: goto label_29fee8;
        case 0x29feecu: goto label_29feec;
        case 0x29fef0u: goto label_29fef0;
        case 0x29fef4u: goto label_29fef4;
        case 0x29fef8u: goto label_29fef8;
        case 0x29fefcu: goto label_29fefc;
        default: break;
    }

    ctx->pc = 0x29fec0u;

label_29fec0:
    // 0x29fec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29fec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29fec4:
    // 0x29fec4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29fec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fec8:
    // 0x29fec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29fec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29fecc:
    // 0x29fecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29feccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29fed0:
    // 0x29fed0: 0xa3a5002f  sb          $a1, 0x2F($sp)
    ctx->pc = 0x29fed0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 47), (uint8_t)GPR_U32(ctx, 5));
label_29fed4:
    // 0x29fed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29fed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29fed8:
    // 0x29fed8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x29fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_29fedc:
    // 0x29fedc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29fedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29fee0:
    // 0x29fee0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x29fee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_29fee4:
    // 0x29fee4: 0x320f809  jalr        $t9
label_29fee8:
    if (ctx->pc == 0x29FEE8u) {
        ctx->pc = 0x29FEE8u;
            // 0x29fee8: 0x27a5002f  addiu       $a1, $sp, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 47));
        ctx->pc = 0x29FEECu;
        goto label_29feec;
    }
    ctx->pc = 0x29FEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29FEECu);
        ctx->pc = 0x29FEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEE4u;
            // 0x29fee8: 0x27a5002f  addiu       $a1, $sp, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 47));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29FEECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29FEECu; }
            if (ctx->pc != 0x29FEECu) { return; }
        }
        }
    }
    ctx->pc = 0x29FEECu;
label_29feec:
    // 0x29feec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29feecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fef0:
    // 0x29fef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29fef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29fef4:
    // 0x29fef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29fef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29fef8:
    // 0x29fef8: 0x3e00008  jr          $ra
label_29fefc:
    if (ctx->pc == 0x29FEFCu) {
        ctx->pc = 0x29FEFCu;
            // 0x29fefc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29FF00u;
        goto label_fallthrough_0x29fef8;
    }
    ctx->pc = 0x29FEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEF8u;
            // 0x29fefc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29fef8:
    ctx->pc = 0x29FF00u;
}
