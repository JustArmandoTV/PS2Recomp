#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEDB0
// Address: 0x1fedb0 - 0x1fee30
void sub_001FEDB0_0x1fedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEDB0_0x1fedb0");
#endif

    switch (ctx->pc) {
        case 0x1fedb0u: goto label_1fedb0;
        case 0x1fedb4u: goto label_1fedb4;
        case 0x1fedb8u: goto label_1fedb8;
        case 0x1fedbcu: goto label_1fedbc;
        case 0x1fedc0u: goto label_1fedc0;
        case 0x1fedc4u: goto label_1fedc4;
        case 0x1fedc8u: goto label_1fedc8;
        case 0x1fedccu: goto label_1fedcc;
        case 0x1fedd0u: goto label_1fedd0;
        case 0x1fedd4u: goto label_1fedd4;
        case 0x1fedd8u: goto label_1fedd8;
        case 0x1feddcu: goto label_1feddc;
        case 0x1fede0u: goto label_1fede0;
        case 0x1fede4u: goto label_1fede4;
        case 0x1fede8u: goto label_1fede8;
        case 0x1fedecu: goto label_1fedec;
        case 0x1fedf0u: goto label_1fedf0;
        case 0x1fedf4u: goto label_1fedf4;
        case 0x1fedf8u: goto label_1fedf8;
        case 0x1fedfcu: goto label_1fedfc;
        case 0x1fee00u: goto label_1fee00;
        case 0x1fee04u: goto label_1fee04;
        case 0x1fee08u: goto label_1fee08;
        case 0x1fee0cu: goto label_1fee0c;
        case 0x1fee10u: goto label_1fee10;
        case 0x1fee14u: goto label_1fee14;
        case 0x1fee18u: goto label_1fee18;
        case 0x1fee1cu: goto label_1fee1c;
        case 0x1fee20u: goto label_1fee20;
        case 0x1fee24u: goto label_1fee24;
        case 0x1fee28u: goto label_1fee28;
        case 0x1fee2cu: goto label_1fee2c;
        default: break;
    }

    ctx->pc = 0x1fedb0u;

label_1fedb0:
    // 0x1fedb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fedb4:
    // 0x1fedb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fedb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fedb8:
    // 0x1fedb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fedb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fedbc:
    // 0x1fedbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fedbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fedc0:
    // 0x1fedc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fedc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fedc4:
    // 0x1fedc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fedc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fedc8:
    // 0x1fedc8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fedc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fedcc:
    // 0x1fedcc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fedccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1fedd0:
    // 0x1fedd0: 0x6000011  bltz        $s0, . + 4 + (0x11 << 2)
label_1fedd4:
    if (ctx->pc == 0x1FEDD4u) {
        ctx->pc = 0x1FEDD4u;
            // 0x1fedd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDD8u;
        goto label_1fedd8;
    }
    ctx->pc = 0x1FEDD0u;
    {
        const bool branch_taken_0x1fedd0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1FEDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEDD0u;
            // 0x1fedd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fedd0) {
            ctx->pc = 0x1FEE18u;
            goto label_1fee18;
        }
    }
    ctx->pc = 0x1FEDD8u;
label_1fedd8:
    // 0x1fedd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1feddc:
    // 0x1feddc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1feddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fede0:
    // 0x1fede0: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x1fede0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1fede4:
    // 0x1fede4: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1fede4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_1fede8:
    // 0x1fede8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1fede8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1fedec:
    // 0x1fedec: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1fedecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1fedf0:
    // 0x1fedf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fedf4:
    // 0x1fedf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fedf8:
    // 0x1fedf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fedfc:
    // 0x1fedfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fedfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fee00:
    // 0x1fee00: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1fee00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1fee04:
    // 0x1fee04: 0x320f809  jalr        $t9
label_1fee08:
    if (ctx->pc == 0x1FEE08u) {
        ctx->pc = 0x1FEE08u;
            // 0x1fee08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE0Cu;
        goto label_1fee0c;
    }
    ctx->pc = 0x1FEE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FEE0Cu);
        ctx->pc = 0x1FEE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE04u;
            // 0x1fee08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FEE0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE0Cu; }
            if (ctx->pc != 0x1FEE0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FEE0Cu;
label_1fee0c:
    // 0x1fee0c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fee0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1fee10:
    // 0x1fee10: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
label_1fee14:
    if (ctx->pc == 0x1FEE14u) {
        ctx->pc = 0x1FEE14u;
            // 0x1fee14: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1FEE18u;
        goto label_1fee18;
    }
    ctx->pc = 0x1FEE10u;
    {
        const bool branch_taken_0x1fee10 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1FEE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE10u;
            // 0x1fee14: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee10) {
            ctx->pc = 0x1FEDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fedd8;
        }
    }
    ctx->pc = 0x1FEE18u;
label_1fee18:
    // 0x1fee18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fee18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fee1c:
    // 0x1fee1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fee1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fee20:
    // 0x1fee20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fee20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fee24:
    // 0x1fee24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fee24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fee28:
    // 0x1fee28: 0x3e00008  jr          $ra
label_1fee2c:
    if (ctx->pc == 0x1FEE2Cu) {
        ctx->pc = 0x1FEE2Cu;
            // 0x1fee2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1FEE30u;
        goto label_fallthrough_0x1fee28;
    }
    ctx->pc = 0x1FEE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE28u;
            // 0x1fee2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1fee28:
    ctx->pc = 0x1FEE30u;
}
