#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050C370
// Address: 0x50c370 - 0x50c3b0
void sub_0050C370_0x50c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050C370_0x50c370");
#endif

    switch (ctx->pc) {
        case 0x50c370u: goto label_50c370;
        case 0x50c374u: goto label_50c374;
        case 0x50c378u: goto label_50c378;
        case 0x50c37cu: goto label_50c37c;
        case 0x50c380u: goto label_50c380;
        case 0x50c384u: goto label_50c384;
        case 0x50c388u: goto label_50c388;
        case 0x50c38cu: goto label_50c38c;
        case 0x50c390u: goto label_50c390;
        case 0x50c394u: goto label_50c394;
        case 0x50c398u: goto label_50c398;
        case 0x50c39cu: goto label_50c39c;
        case 0x50c3a0u: goto label_50c3a0;
        case 0x50c3a4u: goto label_50c3a4;
        case 0x50c3a8u: goto label_50c3a8;
        case 0x50c3acu: goto label_50c3ac;
        default: break;
    }

    ctx->pc = 0x50c370u;

label_50c370:
    // 0x50c370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50c370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_50c374:
    // 0x50c374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50c374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50c378:
    // 0x50c378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50c378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50c37c:
    // 0x50c37c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50c37cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50c380:
    // 0x50c380: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x50c380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_50c384:
    // 0x50c384: 0x320f809  jalr        $t9
label_50c388:
    if (ctx->pc == 0x50C388u) {
        ctx->pc = 0x50C388u;
            // 0x50c388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C38Cu;
        goto label_50c38c;
    }
    ctx->pc = 0x50C384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50C38Cu);
        ctx->pc = 0x50C388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C384u;
            // 0x50c388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50C38Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50C38Cu; }
            if (ctx->pc != 0x50C38Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50C38Cu;
label_50c38c:
    // 0x50c38c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c390:
    // 0x50c390: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x50c390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_50c394:
    // 0x50c394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50c394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50c398:
    // 0x50c398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50c398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50c39c:
    // 0x50c39c: 0x3e00008  jr          $ra
label_50c3a0:
    if (ctx->pc == 0x50C3A0u) {
        ctx->pc = 0x50C3A0u;
            // 0x50c3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50C3A4u;
        goto label_50c3a4;
    }
    ctx->pc = 0x50C39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C39Cu;
            // 0x50c3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50C3A4u;
label_50c3a4:
    // 0x50c3a4: 0x0  nop
    ctx->pc = 0x50c3a4u;
    // NOP
label_50c3a8:
    // 0x50c3a8: 0x0  nop
    ctx->pc = 0x50c3a8u;
    // NOP
label_50c3ac:
    // 0x50c3ac: 0x0  nop
    ctx->pc = 0x50c3acu;
    // NOP
}
