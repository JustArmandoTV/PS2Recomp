#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022ABB0
// Address: 0x22abb0 - 0x22ac40
void sub_0022ABB0_0x22abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ABB0_0x22abb0");
#endif

    switch (ctx->pc) {
        case 0x22abb0u: goto label_22abb0;
        case 0x22abb4u: goto label_22abb4;
        case 0x22abb8u: goto label_22abb8;
        case 0x22abbcu: goto label_22abbc;
        case 0x22abc0u: goto label_22abc0;
        case 0x22abc4u: goto label_22abc4;
        case 0x22abc8u: goto label_22abc8;
        case 0x22abccu: goto label_22abcc;
        case 0x22abd0u: goto label_22abd0;
        case 0x22abd4u: goto label_22abd4;
        case 0x22abd8u: goto label_22abd8;
        case 0x22abdcu: goto label_22abdc;
        case 0x22abe0u: goto label_22abe0;
        case 0x22abe4u: goto label_22abe4;
        case 0x22abe8u: goto label_22abe8;
        case 0x22abecu: goto label_22abec;
        case 0x22abf0u: goto label_22abf0;
        case 0x22abf4u: goto label_22abf4;
        case 0x22abf8u: goto label_22abf8;
        case 0x22abfcu: goto label_22abfc;
        case 0x22ac00u: goto label_22ac00;
        case 0x22ac04u: goto label_22ac04;
        case 0x22ac08u: goto label_22ac08;
        case 0x22ac0cu: goto label_22ac0c;
        case 0x22ac10u: goto label_22ac10;
        case 0x22ac14u: goto label_22ac14;
        case 0x22ac18u: goto label_22ac18;
        case 0x22ac1cu: goto label_22ac1c;
        case 0x22ac20u: goto label_22ac20;
        case 0x22ac24u: goto label_22ac24;
        case 0x22ac28u: goto label_22ac28;
        case 0x22ac2cu: goto label_22ac2c;
        case 0x22ac30u: goto label_22ac30;
        case 0x22ac34u: goto label_22ac34;
        case 0x22ac38u: goto label_22ac38;
        case 0x22ac3cu: goto label_22ac3c;
        default: break;
    }

    ctx->pc = 0x22abb0u;

label_22abb0:
    // 0x22abb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22abb4:
    // 0x22abb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22abb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22abb8:
    // 0x22abb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22abbc:
    // 0x22abbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22abc0:
    // 0x22abc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22abc4:
    // 0x22abc4: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x22abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_22abc8:
    // 0x22abc8: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x22abc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22abcc:
    // 0x22abcc: 0x6200010  bltz        $s1, . + 4 + (0x10 << 2)
label_22abd0:
    if (ctx->pc == 0x22ABD0u) {
        ctx->pc = 0x22ABD0u;
            // 0x22abd0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22ABD4u;
        goto label_22abd4;
    }
    ctx->pc = 0x22ABCCu;
    {
        const bool branch_taken_0x22abcc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x22ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABCCu;
            // 0x22abd0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22abcc) {
            ctx->pc = 0x22AC10u;
            goto label_22ac10;
        }
    }
    ctx->pc = 0x22ABD4u;
label_22abd4:
    // 0x22abd4: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x22abd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_22abd8:
    // 0x22abd8: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x22abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_22abdc:
    // 0x22abdc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22abe0:
    // 0x22abe0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22abe4:
    // 0x22abe4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_22abe8:
    if (ctx->pc == 0x22ABE8u) {
        ctx->pc = 0x22ABECu;
        goto label_22abec;
    }
    ctx->pc = 0x22ABE4u;
    {
        const bool branch_taken_0x22abe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22abe4) {
            ctx->pc = 0x22AC00u;
            goto label_22ac00;
        }
    }
    ctx->pc = 0x22ABECu;
label_22abec:
    // 0x22abec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22abecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22abf0:
    // 0x22abf0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x22abf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_22abf4:
    // 0x22abf4: 0x320f809  jalr        $t9
label_22abf8:
    if (ctx->pc == 0x22ABF8u) {
        ctx->pc = 0x22ABF8u;
            // 0x22abf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22ABFCu;
        goto label_22abfc;
    }
    ctx->pc = 0x22ABF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22ABFCu);
        ctx->pc = 0x22ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABF4u;
            // 0x22abf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22ABFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22ABFCu; }
            if (ctx->pc != 0x22ABFCu) { return; }
        }
        }
    }
    ctx->pc = 0x22ABFCu;
label_22abfc:
    // 0x22abfc: 0x0  nop
    ctx->pc = 0x22abfcu;
    // NOP
label_22ac00:
    // 0x22ac00: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22ac00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22ac04:
    // 0x22ac04: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
label_22ac08:
    if (ctx->pc == 0x22AC08u) {
        ctx->pc = 0x22AC08u;
            // 0x22ac08: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x22AC0Cu;
        goto label_22ac0c;
    }
    ctx->pc = 0x22AC04u;
    {
        const bool branch_taken_0x22ac04 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x22AC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC04u;
            // 0x22ac08: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac04) {
            ctx->pc = 0x22ABD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22abd8;
        }
    }
    ctx->pc = 0x22AC0Cu;
label_22ac0c:
    // 0x22ac0c: 0x0  nop
    ctx->pc = 0x22ac0cu;
    // NOP
label_22ac10:
    // 0x22ac10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22ac10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22ac14:
    // 0x22ac14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ac14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22ac18:
    // 0x22ac18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ac18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ac1c:
    // 0x22ac1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ac1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ac20:
    // 0x22ac20: 0x3e00008  jr          $ra
label_22ac24:
    if (ctx->pc == 0x22AC24u) {
        ctx->pc = 0x22AC24u;
            // 0x22ac24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22AC28u;
        goto label_22ac28;
    }
    ctx->pc = 0x22AC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC20u;
            // 0x22ac24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AC28u;
label_22ac28:
    // 0x22ac28: 0x0  nop
    ctx->pc = 0x22ac28u;
    // NOP
label_22ac2c:
    // 0x22ac2c: 0x0  nop
    ctx->pc = 0x22ac2cu;
    // NOP
label_22ac30:
    // 0x22ac30: 0x3e00008  jr          $ra
label_22ac34:
    if (ctx->pc == 0x22AC34u) {
        ctx->pc = 0x22AC38u;
        goto label_22ac38;
    }
    ctx->pc = 0x22AC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AC38u;
label_22ac38:
    // 0x22ac38: 0x0  nop
    ctx->pc = 0x22ac38u;
    // NOP
label_22ac3c:
    // 0x22ac3c: 0x0  nop
    ctx->pc = 0x22ac3cu;
    // NOP
}
