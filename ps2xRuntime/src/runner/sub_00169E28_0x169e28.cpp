#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169E28
// Address: 0x169e28 - 0x169f10
void sub_00169E28_0x169e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169E28_0x169e28");
#endif

    switch (ctx->pc) {
        case 0x169e5cu: goto label_169e5c;
        case 0x169e64u: goto label_169e64;
        case 0x169e80u: goto label_169e80;
        case 0x169e94u: goto label_169e94;
        case 0x169eacu: goto label_169eac;
        case 0x169ee4u: goto label_169ee4;
        case 0x169ef0u: goto label_169ef0;
        case 0x169ef8u: goto label_169ef8;
        default: break;
    }

    ctx->pc = 0x169e28u;

    // 0x169e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169e2c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x169e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169e30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169e34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x169e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x169e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169e3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x169e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x169e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169e50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x169e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x169e54: 0xc05a148  jal         func_168520
    ctx->pc = 0x169E54u;
    SET_GPR_U32(ctx, 31, 0x169E5Cu);
    ctx->pc = 0x169E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E54u;
            // 0x169e58: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E5Cu; }
        if (ctx->pc != 0x169E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E5Cu; }
        if (ctx->pc != 0x169E5Cu) { return; }
    }
    ctx->pc = 0x169E5Cu;
label_169e5c:
    // 0x169e5c: 0xc05a5ba  jal         func_1696E8
    ctx->pc = 0x169E5Cu;
    SET_GPR_U32(ctx, 31, 0x169E64u);
    ctx->pc = 0x1696E8u;
    if (runtime->hasFunction(0x1696E8u)) {
        auto targetFn = runtime->lookupFunction(0x1696E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E64u; }
        if (ctx->pc != 0x169E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001696E8_0x1696e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E64u; }
        if (ctx->pc != 0x169E64u) { return; }
    }
    ctx->pc = 0x169E64u;
label_169e64:
    // 0x169e64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x169e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x169e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e70: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169E70u;
    {
        const bool branch_taken_0x169e70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x169E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169E70u;
            // 0x169e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e70) {
            ctx->pc = 0x169E94u;
            goto label_169e94;
        }
    }
    ctx->pc = 0x169E78u;
    // 0x169e78: 0xc05a724  jal         func_169C90
    ctx->pc = 0x169E78u;
    SET_GPR_U32(ctx, 31, 0x169E80u);
    ctx->pc = 0x169C90u;
    if (runtime->hasFunction(0x169C90u)) {
        auto targetFn = runtime->lookupFunction(0x169C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E80u; }
        if (ctx->pc != 0x169E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C90_0x169c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E80u; }
        if (ctx->pc != 0x169E80u) { return; }
    }
    ctx->pc = 0x169E80u;
label_169e80:
    // 0x169e80: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169E80u;
    {
        const bool branch_taken_0x169e80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x169E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169E80u;
            // 0x169e84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e80) {
            ctx->pc = 0x169E98u;
            goto label_169e98;
        }
    }
    ctx->pc = 0x169E88u;
    // 0x169e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e8c: 0xc05a810  jal         func_16A040
    ctx->pc = 0x169E8Cu;
    SET_GPR_U32(ctx, 31, 0x169E94u);
    ctx->pc = 0x169E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E8Cu;
            // 0x169e90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (runtime->hasFunction(0x16A040u)) {
        auto targetFn = runtime->lookupFunction(0x16A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E94u; }
        if (ctx->pc != 0x169E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A040_0x16a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E94u; }
        if (ctx->pc != 0x169E94u) { return; }
    }
    ctx->pc = 0x169E94u;
label_169e94:
    // 0x169e94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x169e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_169e98:
    // 0x169e98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x169e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169ea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169ea4: 0xc05a148  jal         func_168520
    ctx->pc = 0x169EA4u;
    SET_GPR_U32(ctx, 31, 0x169EACu);
    ctx->pc = 0x169EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EA4u;
            // 0x169ea8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EACu; }
        if (ctx->pc != 0x169EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EACu; }
        if (ctx->pc != 0x169EACu) { return; }
    }
    ctx->pc = 0x169EACu;
label_169eac:
    // 0x169eac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169eb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169eb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x169eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169ebc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x169ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x169EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169EC0u;
            // 0x169ec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169EC8u;
    // 0x169ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ed4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169edc: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x169EDCu;
    SET_GPR_U32(ctx, 31, 0x169EE4u);
    ctx->pc = 0x169EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EDCu;
            // 0x169ee0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EE4u; }
        if (ctx->pc != 0x169EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EE4u; }
        if (ctx->pc != 0x169EE4u) { return; }
    }
    ctx->pc = 0x169EE4u;
label_169ee4:
    // 0x169ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ee8: 0xc05a7c4  jal         func_169F10
    ctx->pc = 0x169EE8u;
    SET_GPR_U32(ctx, 31, 0x169EF0u);
    ctx->pc = 0x169EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EE8u;
            // 0x169eec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169F10u;
    if (runtime->hasFunction(0x169F10u)) {
        auto targetFn = runtime->lookupFunction(0x169F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EF0u; }
        if (ctx->pc != 0x169EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169F10_0x169f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EF0u; }
        if (ctx->pc != 0x169EF0u) { return; }
    }
    ctx->pc = 0x169EF0u;
label_169ef0:
    // 0x169ef0: 0xc05adca  jal         func_16B728
    ctx->pc = 0x169EF0u;
    SET_GPR_U32(ctx, 31, 0x169EF8u);
    ctx->pc = 0x169EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EF0u;
            // 0x169ef4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EF8u; }
        if (ctx->pc != 0x169EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EF8u; }
        if (ctx->pc != 0x169EF8u) { return; }
    }
    ctx->pc = 0x169EF8u;
label_169ef8:
    // 0x169ef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169efc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f08: 0x3e00008  jr          $ra
    ctx->pc = 0x169F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F08u;
            // 0x169f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F10u;
}
