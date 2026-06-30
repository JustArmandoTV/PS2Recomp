#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00510EB0
// Address: 0x510eb0 - 0x510f30
void sub_00510EB0_0x510eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510EB0_0x510eb0");
#endif

    switch (ctx->pc) {
        case 0x510eb0u: goto label_510eb0;
        case 0x510eb4u: goto label_510eb4;
        case 0x510eb8u: goto label_510eb8;
        case 0x510ebcu: goto label_510ebc;
        case 0x510ec0u: goto label_510ec0;
        case 0x510ec4u: goto label_510ec4;
        case 0x510ec8u: goto label_510ec8;
        case 0x510eccu: goto label_510ecc;
        case 0x510ed0u: goto label_510ed0;
        case 0x510ed4u: goto label_510ed4;
        case 0x510ed8u: goto label_510ed8;
        case 0x510edcu: goto label_510edc;
        case 0x510ee0u: goto label_510ee0;
        case 0x510ee4u: goto label_510ee4;
        case 0x510ee8u: goto label_510ee8;
        case 0x510eecu: goto label_510eec;
        case 0x510ef0u: goto label_510ef0;
        case 0x510ef4u: goto label_510ef4;
        case 0x510ef8u: goto label_510ef8;
        case 0x510efcu: goto label_510efc;
        case 0x510f00u: goto label_510f00;
        case 0x510f04u: goto label_510f04;
        case 0x510f08u: goto label_510f08;
        case 0x510f0cu: goto label_510f0c;
        case 0x510f10u: goto label_510f10;
        case 0x510f14u: goto label_510f14;
        case 0x510f18u: goto label_510f18;
        case 0x510f1cu: goto label_510f1c;
        case 0x510f20u: goto label_510f20;
        case 0x510f24u: goto label_510f24;
        case 0x510f28u: goto label_510f28;
        case 0x510f2cu: goto label_510f2c;
        default: break;
    }

    ctx->pc = 0x510eb0u;

label_510eb0:
    // 0x510eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x510eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_510eb4:
    // 0x510eb4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x510eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_510eb8:
    // 0x510eb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x510eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_510ebc:
    // 0x510ebc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x510ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_510ec0:
    // 0x510ec0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x510ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_510ec4:
    // 0x510ec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x510ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_510ec8:
    // 0x510ec8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x510ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_510ecc:
    // 0x510ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x510eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_510ed0:
    // 0x510ed0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x510ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_510ed4:
    // 0x510ed4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x510ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_510ed8:
    // 0x510ed8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x510ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_510edc:
    // 0x510edc: 0x24710090  addiu       $s1, $v1, 0x90
    ctx->pc = 0x510edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_510ee0:
    // 0x510ee0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x510ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_510ee4:
    // 0x510ee4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_510ee8:
    if (ctx->pc == 0x510EE8u) {
        ctx->pc = 0x510EECu;
        goto label_510eec;
    }
    ctx->pc = 0x510EE4u;
    {
        const bool branch_taken_0x510ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x510ee4) {
            ctx->pc = 0x510F00u;
            goto label_510f00;
        }
    }
    ctx->pc = 0x510EECu;
label_510eec:
    // 0x510eec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x510eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_510ef0:
    // 0x510ef0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x510ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_510ef4:
    // 0x510ef4: 0x320f809  jalr        $t9
label_510ef8:
    if (ctx->pc == 0x510EF8u) {
        ctx->pc = 0x510EF8u;
            // 0x510ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510EFCu;
        goto label_510efc;
    }
    ctx->pc = 0x510EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x510EFCu);
        ctx->pc = 0x510EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510EF4u;
            // 0x510ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x510EFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x510EFCu; }
            if (ctx->pc != 0x510EFCu) { return; }
        }
        }
    }
    ctx->pc = 0x510EFCu;
label_510efc:
    // 0x510efc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x510efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_510f00:
    // 0x510f00: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x510f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_510f04:
    // 0x510f04: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x510f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_510f08:
    // 0x510f08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x510f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_510f0c:
    // 0x510f0c: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x510f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_510f10:
    // 0x510f10: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x510f10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_510f14:
    // 0x510f14: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_510f18:
    if (ctx->pc == 0x510F18u) {
        ctx->pc = 0x510F18u;
            // 0x510f18: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x510F1Cu;
        goto label_510f1c;
    }
    ctx->pc = 0x510F14u;
    {
        const bool branch_taken_0x510f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x510F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510F14u;
            // 0x510f18: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510f14) {
            ctx->pc = 0x510EE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_510ee0;
        }
    }
    ctx->pc = 0x510F1Cu;
label_510f1c:
    // 0x510f1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x510f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_510f20:
    // 0x510f20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x510f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_510f24:
    // 0x510f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x510f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_510f28:
    // 0x510f28: 0x3e00008  jr          $ra
label_510f2c:
    if (ctx->pc == 0x510F2Cu) {
        ctx->pc = 0x510F2Cu;
            // 0x510f2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x510F30u;
        goto label_fallthrough_0x510f28;
    }
    ctx->pc = 0x510F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510F28u;
            // 0x510f2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x510f28:
    ctx->pc = 0x510F30u;
}
