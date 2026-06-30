#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039BCF0
// Address: 0x39bcf0 - 0x39bd40
void sub_0039BCF0_0x39bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BCF0_0x39bcf0");
#endif

    switch (ctx->pc) {
        case 0x39bcf0u: goto label_39bcf0;
        case 0x39bcf4u: goto label_39bcf4;
        case 0x39bcf8u: goto label_39bcf8;
        case 0x39bcfcu: goto label_39bcfc;
        case 0x39bd00u: goto label_39bd00;
        case 0x39bd04u: goto label_39bd04;
        case 0x39bd08u: goto label_39bd08;
        case 0x39bd0cu: goto label_39bd0c;
        case 0x39bd10u: goto label_39bd10;
        case 0x39bd14u: goto label_39bd14;
        case 0x39bd18u: goto label_39bd18;
        case 0x39bd1cu: goto label_39bd1c;
        case 0x39bd20u: goto label_39bd20;
        case 0x39bd24u: goto label_39bd24;
        case 0x39bd28u: goto label_39bd28;
        case 0x39bd2cu: goto label_39bd2c;
        case 0x39bd30u: goto label_39bd30;
        case 0x39bd34u: goto label_39bd34;
        case 0x39bd38u: goto label_39bd38;
        case 0x39bd3cu: goto label_39bd3c;
        default: break;
    }

    ctx->pc = 0x39bcf0u;

label_39bcf0:
    // 0x39bcf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39bcf4:
    // 0x39bcf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39bcf8:
    // 0x39bcf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39bcfc:
    // 0x39bcfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39bcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39bd00:
    // 0x39bd00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39bd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39bd04:
    // 0x39bd04: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x39bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
label_39bd08:
    // 0x39bd08: 0x8c910090  lw          $s1, 0x90($a0)
    ctx->pc = 0x39bd08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_39bd0c:
    // 0x39bd0c: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x39bd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_39bd10:
    // 0x39bd10: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x39bd10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39bd14:
    // 0x39bd14: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x39bd14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_39bd18:
    // 0x39bd18: 0x320f809  jalr        $t9
label_39bd1c:
    if (ctx->pc == 0x39BD1Cu) {
        ctx->pc = 0x39BD1Cu;
            // 0x39bd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39BD20u;
        goto label_39bd20;
    }
    ctx->pc = 0x39BD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39BD20u);
        ctx->pc = 0x39BD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BD18u;
            // 0x39bd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39BD20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39BD20u; }
            if (ctx->pc != 0x39BD20u) { return; }
        }
        }
    }
    ctx->pc = 0x39BD20u;
label_39bd20:
    // 0x39bd20: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x39bd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_39bd24:
    // 0x39bd24: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_39bd28:
    if (ctx->pc == 0x39BD28u) {
        ctx->pc = 0x39BD28u;
            // 0x39bd28: 0x263101b0  addiu       $s1, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->pc = 0x39BD2Cu;
        goto label_39bd2c;
    }
    ctx->pc = 0x39BD24u;
    {
        const bool branch_taken_0x39bd24 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x39BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BD24u;
            // 0x39bd28: 0x263101b0  addiu       $s1, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd24) {
            ctx->pc = 0x39BD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39bd10;
        }
    }
    ctx->pc = 0x39BD2Cu;
label_39bd2c:
    // 0x39bd2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39bd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39bd30:
    // 0x39bd30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39bd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39bd34:
    // 0x39bd34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39bd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39bd38:
    // 0x39bd38: 0x3e00008  jr          $ra
label_39bd3c:
    if (ctx->pc == 0x39BD3Cu) {
        ctx->pc = 0x39BD3Cu;
            // 0x39bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39BD40u;
        goto label_fallthrough_0x39bd38;
    }
    ctx->pc = 0x39BD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BD38u;
            // 0x39bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x39bd38:
    ctx->pc = 0x39BD40u;
}
