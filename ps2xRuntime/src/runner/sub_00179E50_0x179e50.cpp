#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00179E50
// Address: 0x179e50 - 0x179f10
void sub_00179E50_0x179e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179E50_0x179e50");
#endif

    switch (ctx->pc) {
        case 0x179e50u: goto label_179e50;
        case 0x179e54u: goto label_179e54;
        case 0x179e58u: goto label_179e58;
        case 0x179e5cu: goto label_179e5c;
        case 0x179e60u: goto label_179e60;
        case 0x179e64u: goto label_179e64;
        case 0x179e68u: goto label_179e68;
        case 0x179e6cu: goto label_179e6c;
        case 0x179e70u: goto label_179e70;
        case 0x179e74u: goto label_179e74;
        case 0x179e78u: goto label_179e78;
        case 0x179e7cu: goto label_179e7c;
        case 0x179e80u: goto label_179e80;
        case 0x179e84u: goto label_179e84;
        case 0x179e88u: goto label_179e88;
        case 0x179e8cu: goto label_179e8c;
        case 0x179e90u: goto label_179e90;
        case 0x179e94u: goto label_179e94;
        case 0x179e98u: goto label_179e98;
        case 0x179e9cu: goto label_179e9c;
        case 0x179ea0u: goto label_179ea0;
        case 0x179ea4u: goto label_179ea4;
        case 0x179ea8u: goto label_179ea8;
        case 0x179eacu: goto label_179eac;
        case 0x179eb0u: goto label_179eb0;
        case 0x179eb4u: goto label_179eb4;
        case 0x179eb8u: goto label_179eb8;
        case 0x179ebcu: goto label_179ebc;
        case 0x179ec0u: goto label_179ec0;
        case 0x179ec4u: goto label_179ec4;
        case 0x179ec8u: goto label_179ec8;
        case 0x179eccu: goto label_179ecc;
        case 0x179ed0u: goto label_179ed0;
        case 0x179ed4u: goto label_179ed4;
        case 0x179ed8u: goto label_179ed8;
        case 0x179edcu: goto label_179edc;
        case 0x179ee0u: goto label_179ee0;
        case 0x179ee4u: goto label_179ee4;
        case 0x179ee8u: goto label_179ee8;
        case 0x179eecu: goto label_179eec;
        case 0x179ef0u: goto label_179ef0;
        case 0x179ef4u: goto label_179ef4;
        case 0x179ef8u: goto label_179ef8;
        case 0x179efcu: goto label_179efc;
        case 0x179f00u: goto label_179f00;
        case 0x179f04u: goto label_179f04;
        case 0x179f08u: goto label_179f08;
        case 0x179f0cu: goto label_179f0c;
        default: break;
    }

    ctx->pc = 0x179e50u;

label_179e50:
    // 0x179e50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_179e54:
    // 0x179e54: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x179e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_179e58:
    // 0x179e58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x179e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179e5c:
    // 0x179e5c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x179e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_179e60:
    // 0x179e60: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_179e64:
    if (ctx->pc == 0x179E64u) {
        ctx->pc = 0x179E64u;
            // 0x179e64: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x179E68u;
        goto label_179e68;
    }
    ctx->pc = 0x179E60u;
    {
        const bool branch_taken_0x179e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179E60u;
            // 0x179e64: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e60) {
            ctx->pc = 0x179E78u;
            goto label_179e78;
        }
    }
    ctx->pc = 0x179E68u;
label_179e68:
    // 0x179e68: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179e6c:
    // 0x179e6c: 0x10000011  b           . + 4 + (0x11 << 2)
label_179e70:
    if (ctx->pc == 0x179E70u) {
        ctx->pc = 0x179E70u;
            // 0x179e70: 0x24845608  addiu       $a0, $a0, 0x5608 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22024));
        ctx->pc = 0x179E74u;
        goto label_179e74;
    }
    ctx->pc = 0x179E6Cu;
    {
        const bool branch_taken_0x179e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179E6Cu;
            // 0x179e70: 0x24845608  addiu       $a0, $a0, 0x5608 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e6c) {
            ctx->pc = 0x179EB4u;
            goto label_179eb4;
        }
    }
    ctx->pc = 0x179E74u;
label_179e74:
    // 0x179e74: 0x0  nop
    ctx->pc = 0x179e74u;
    // NOP
label_179e78:
    // 0x179e78: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_179e7c:
    if (ctx->pc == 0x179E7Cu) {
        ctx->pc = 0x179E80u;
        goto label_179e80;
    }
    ctx->pc = 0x179E78u;
    {
        const bool branch_taken_0x179e78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179e78) {
            ctx->pc = 0x179E90u;
            goto label_179e90;
        }
    }
    ctx->pc = 0x179E80u;
label_179e80:
    // 0x179e80: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179e84:
    // 0x179e84: 0x1000000b  b           . + 4 + (0xB << 2)
label_179e88:
    if (ctx->pc == 0x179E88u) {
        ctx->pc = 0x179E88u;
            // 0x179e88: 0x24845630  addiu       $a0, $a0, 0x5630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22064));
        ctx->pc = 0x179E8Cu;
        goto label_179e8c;
    }
    ctx->pc = 0x179E84u;
    {
        const bool branch_taken_0x179e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179E84u;
            // 0x179e88: 0x24845630  addiu       $a0, $a0, 0x5630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e84) {
            ctx->pc = 0x179EB4u;
            goto label_179eb4;
        }
    }
    ctx->pc = 0x179E8Cu;
label_179e8c:
    // 0x179e8c: 0x0  nop
    ctx->pc = 0x179e8cu;
    // NOP
label_179e90:
    // 0x179e90: 0xc05e158  jal         func_178560
label_179e94:
    if (ctx->pc == 0x179E94u) {
        ctx->pc = 0x179E98u;
        goto label_179e98;
    }
    ctx->pc = 0x179E90u;
    SET_GPR_U32(ctx, 31, 0x179E98u);
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179E98u; }
        if (ctx->pc != 0x179E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179E98u; }
        if (ctx->pc != 0x179E98u) { return; }
    }
    ctx->pc = 0x179E98u;
label_179e98:
    // 0x179e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179e9c:
    // 0x179e9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x179e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179ea0:
    // 0x179ea0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179ea4:
    // 0x179ea4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_179ea8:
    if (ctx->pc == 0x179EA8u) {
        ctx->pc = 0x179EA8u;
            // 0x179ea8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x179EACu;
        goto label_179eac;
    }
    ctx->pc = 0x179EA4u;
    {
        const bool branch_taken_0x179ea4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x179EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179EA4u;
            // 0x179ea8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ea4) {
            ctx->pc = 0x179EC8u;
            goto label_179ec8;
        }
    }
    ctx->pc = 0x179EACu;
label_179eac:
    // 0x179eac: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179eb0:
    // 0x179eb0: 0x24845658  addiu       $a0, $a0, 0x5658
    ctx->pc = 0x179eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22104));
label_179eb4:
    // 0x179eb4: 0xc05e0a6  jal         func_178298
label_179eb8:
    if (ctx->pc == 0x179EB8u) {
        ctx->pc = 0x179EBCu;
        goto label_179ebc;
    }
    ctx->pc = 0x179EB4u;
    SET_GPR_U32(ctx, 31, 0x179EBCu);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179EBCu; }
        if (ctx->pc != 0x179EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179EBCu; }
        if (ctx->pc != 0x179EBCu) { return; }
    }
    ctx->pc = 0x179EBCu;
label_179ebc:
    // 0x179ebc: 0x1000000e  b           . + 4 + (0xE << 2)
label_179ec0:
    if (ctx->pc == 0x179EC0u) {
        ctx->pc = 0x179EC0u;
            // 0x179ec0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x179EC4u;
        goto label_179ec4;
    }
    ctx->pc = 0x179EBCu;
    {
        const bool branch_taken_0x179ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179EBCu;
            // 0x179ec0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ebc) {
            ctx->pc = 0x179EF8u;
            goto label_179ef8;
        }
    }
    ctx->pc = 0x179EC4u;
label_179ec4:
    // 0x179ec4: 0x0  nop
    ctx->pc = 0x179ec4u;
    // NOP
label_179ec8:
    // 0x179ec8: 0xc04a576  jal         func_1295D8
label_179ecc:
    if (ctx->pc == 0x179ECCu) {
        ctx->pc = 0x179ED0u;
        goto label_179ed0;
    }
    ctx->pc = 0x179EC8u;
    SET_GPR_U32(ctx, 31, 0x179ED0u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179ED0u; }
        if (ctx->pc != 0x179ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179ED0u; }
        if (ctx->pc != 0x179ED0u) { return; }
    }
    ctx->pc = 0x179ED0u;
label_179ed0:
    // 0x179ed0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x179ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_179ed4:
    // 0x179ed4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x179ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_179ed8:
    // 0x179ed8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179edc:
    // 0x179edc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x179edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_179ee0:
    // 0x179ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179ee4:
    // 0x179ee4: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x179ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_179ee8:
    // 0x179ee8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_179eec:
    if (ctx->pc == 0x179EECu) {
        ctx->pc = 0x179EECu;
            // 0x179eec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179EF0u;
        goto label_179ef0;
    }
    ctx->pc = 0x179EE8u;
    {
        const bool branch_taken_0x179ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179EE8u;
            // 0x179eec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ee8) {
            ctx->pc = 0x179EF8u;
            goto label_179ef8;
        }
    }
    ctx->pc = 0x179EF0u;
label_179ef0:
    // 0x179ef0: 0x60f809  jalr        $v1
label_179ef4:
    if (ctx->pc == 0x179EF4u) {
        ctx->pc = 0x179EF8u;
        goto label_179ef8;
    }
    ctx->pc = 0x179EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x179EF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x179EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179EF8u; }
            if (ctx->pc != 0x179EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x179EF8u;
label_179ef8:
    // 0x179ef8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x179ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_179efc:
    // 0x179efc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x179efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_179f00:
    // 0x179f00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x179f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_179f04:
    // 0x179f04: 0x3e00008  jr          $ra
label_179f08:
    if (ctx->pc == 0x179F08u) {
        ctx->pc = 0x179F08u;
            // 0x179f08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x179F0Cu;
        goto label_179f0c;
    }
    ctx->pc = 0x179F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179F04u;
            // 0x179f08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179F0Cu;
label_179f0c:
    // 0x179f0c: 0x0  nop
    ctx->pc = 0x179f0cu;
    // NOP
}
