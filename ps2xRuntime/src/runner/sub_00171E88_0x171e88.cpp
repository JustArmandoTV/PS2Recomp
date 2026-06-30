#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171E88
// Address: 0x171e88 - 0x171f48
void sub_00171E88_0x171e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171E88_0x171e88");
#endif

    switch (ctx->pc) {
        case 0x171e88u: goto label_171e88;
        case 0x171e8cu: goto label_171e8c;
        case 0x171e90u: goto label_171e90;
        case 0x171e94u: goto label_171e94;
        case 0x171e98u: goto label_171e98;
        case 0x171e9cu: goto label_171e9c;
        case 0x171ea0u: goto label_171ea0;
        case 0x171ea4u: goto label_171ea4;
        case 0x171ea8u: goto label_171ea8;
        case 0x171eacu: goto label_171eac;
        case 0x171eb0u: goto label_171eb0;
        case 0x171eb4u: goto label_171eb4;
        case 0x171eb8u: goto label_171eb8;
        case 0x171ebcu: goto label_171ebc;
        case 0x171ec0u: goto label_171ec0;
        case 0x171ec4u: goto label_171ec4;
        case 0x171ec8u: goto label_171ec8;
        case 0x171eccu: goto label_171ecc;
        case 0x171ed0u: goto label_171ed0;
        case 0x171ed4u: goto label_171ed4;
        case 0x171ed8u: goto label_171ed8;
        case 0x171edcu: goto label_171edc;
        case 0x171ee0u: goto label_171ee0;
        case 0x171ee4u: goto label_171ee4;
        case 0x171ee8u: goto label_171ee8;
        case 0x171eecu: goto label_171eec;
        case 0x171ef0u: goto label_171ef0;
        case 0x171ef4u: goto label_171ef4;
        case 0x171ef8u: goto label_171ef8;
        case 0x171efcu: goto label_171efc;
        case 0x171f00u: goto label_171f00;
        case 0x171f04u: goto label_171f04;
        case 0x171f08u: goto label_171f08;
        case 0x171f0cu: goto label_171f0c;
        case 0x171f10u: goto label_171f10;
        case 0x171f14u: goto label_171f14;
        case 0x171f18u: goto label_171f18;
        case 0x171f1cu: goto label_171f1c;
        case 0x171f20u: goto label_171f20;
        case 0x171f24u: goto label_171f24;
        case 0x171f28u: goto label_171f28;
        case 0x171f2cu: goto label_171f2c;
        case 0x171f30u: goto label_171f30;
        case 0x171f34u: goto label_171f34;
        case 0x171f38u: goto label_171f38;
        case 0x171f3cu: goto label_171f3c;
        case 0x171f40u: goto label_171f40;
        case 0x171f44u: goto label_171f44;
        default: break;
    }

    ctx->pc = 0x171e88u;

label_171e88:
    // 0x171e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_171e8c:
    // 0x171e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_171e90:
    // 0x171e90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x171e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_171e94:
    // 0x171e94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_171e98:
    // 0x171e98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x171e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171e9c:
    // 0x171e9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_171ea0:
    // 0x171ea0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x171ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_171ea4:
    // 0x171ea4: 0xc05c834  jal         func_1720D0
label_171ea8:
    if (ctx->pc == 0x171EA8u) {
        ctx->pc = 0x171EA8u;
            // 0x171ea8: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x171EACu;
        goto label_171eac;
    }
    ctx->pc = 0x171EA4u;
    SET_GPR_U32(ctx, 31, 0x171EACu);
    ctx->pc = 0x171EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171EA4u;
            // 0x171ea8: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EACu; }
        if (ctx->pc != 0x171EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EACu; }
        if (ctx->pc != 0x171EACu) { return; }
    }
    ctx->pc = 0x171EACu;
label_171eac:
    // 0x171eac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x171eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_171eb0:
    // 0x171eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171eb4:
    // 0x171eb4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x171eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_171eb8:
    // 0x171eb8: 0x40f809  jalr        $v0
label_171ebc:
    if (ctx->pc == 0x171EBCu) {
        ctx->pc = 0x171EBCu;
            // 0x171ebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171EC0u;
        goto label_171ec0;
    }
    ctx->pc = 0x171EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171EC0u);
        ctx->pc = 0x171EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171EB8u;
            // 0x171ebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171EC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171EC0u; }
            if (ctx->pc != 0x171EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x171EC0u;
label_171ec0:
    // 0x171ec0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x171ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_171ec4:
    // 0x171ec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x171ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171ec8:
    // 0x171ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171ecc:
    // 0x171ecc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x171eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_171ed0:
    // 0x171ed0: 0x40f809  jalr        $v0
label_171ed4:
    if (ctx->pc == 0x171ED4u) {
        ctx->pc = 0x171ED4u;
            // 0x171ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x171ED8u;
        goto label_171ed8;
    }
    ctx->pc = 0x171ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171ED8u);
        ctx->pc = 0x171ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171ED0u;
            // 0x171ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171ED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171ED8u; }
            if (ctx->pc != 0x171ED8u) { return; }
        }
        }
    }
    ctx->pc = 0x171ED8u;
label_171ed8:
    // 0x171ed8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x171ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_171edc:
    // 0x171edc: 0xc05c83a  jal         func_1720E8
label_171ee0:
    if (ctx->pc == 0x171EE0u) {
        ctx->pc = 0x171EE0u;
            // 0x171ee0: 0xae510044  sw          $s1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 17));
        ctx->pc = 0x171EE4u;
        goto label_171ee4;
    }
    ctx->pc = 0x171EDCu;
    SET_GPR_U32(ctx, 31, 0x171EE4u);
    ctx->pc = 0x171EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171EDCu;
            // 0x171ee0: 0xae510044  sw          $s1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EE4u; }
        if (ctx->pc != 0x171EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720E8_0x1720e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EE4u; }
        if (ctx->pc != 0x171EE4u) { return; }
    }
    ctx->pc = 0x171EE4u;
label_171ee4:
    // 0x171ee4: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x171ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_171ee8:
    // 0x171ee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171eec:
    // 0x171eec: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x171eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_171ef0:
    // 0x171ef0: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x171ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_171ef4:
    // 0x171ef4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_171ef8:
    // 0x171ef8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_171efc:
    // 0x171efc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x171efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_171f00:
    // 0x171f00: 0x3e00008  jr          $ra
label_171f04:
    if (ctx->pc == 0x171F04u) {
        ctx->pc = 0x171F04u;
            // 0x171f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x171F08u;
        goto label_171f08;
    }
    ctx->pc = 0x171F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F00u;
            // 0x171f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171F08u;
label_171f08:
    // 0x171f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_171f0c:
    // 0x171f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_171f10:
    // 0x171f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171f14:
    // 0x171f14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_171f18:
    // 0x171f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_171f1c:
    // 0x171f1c: 0xc05c846  jal         func_172118
label_171f20:
    if (ctx->pc == 0x171F20u) {
        ctx->pc = 0x171F20u;
            // 0x171f20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171F24u;
        goto label_171f24;
    }
    ctx->pc = 0x171F1Cu;
    SET_GPR_U32(ctx, 31, 0x171F24u);
    ctx->pc = 0x171F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F1Cu;
            // 0x171f20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F24u; }
        if (ctx->pc != 0x171F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F24u; }
        if (ctx->pc != 0x171F24u) { return; }
    }
    ctx->pc = 0x171F24u;
label_171f24:
    // 0x171f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171f28:
    // 0x171f28: 0xc05c7d2  jal         func_171F48
label_171f2c:
    if (ctx->pc == 0x171F2Cu) {
        ctx->pc = 0x171F2Cu;
            // 0x171f2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171F30u;
        goto label_171f30;
    }
    ctx->pc = 0x171F28u;
    SET_GPR_U32(ctx, 31, 0x171F30u);
    ctx->pc = 0x171F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F28u;
            // 0x171f2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171F48u;
    if (runtime->hasFunction(0x171F48u)) {
        auto targetFn = runtime->lookupFunction(0x171F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F30u; }
        if (ctx->pc != 0x171F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171F48_0x171f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F30u; }
        if (ctx->pc != 0x171F30u) { return; }
    }
    ctx->pc = 0x171F30u;
label_171f30:
    // 0x171f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171f34:
    // 0x171f34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_171f38:
    // 0x171f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_171f3c:
    // 0x171f3c: 0x805c84c  j           func_172130
label_171f40:
    if (ctx->pc == 0x171F40u) {
        ctx->pc = 0x171F40u;
            // 0x171f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x171F44u;
        goto label_171f44;
    }
    ctx->pc = 0x171F3Cu;
    ctx->pc = 0x171F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F3Cu;
            // 0x171f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172130_0x172130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x171F44u;
label_171f44:
    // 0x171f44: 0x0  nop
    ctx->pc = 0x171f44u;
    // NOP
}
