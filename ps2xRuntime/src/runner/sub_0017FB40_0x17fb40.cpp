#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FB40
// Address: 0x17fb40 - 0x17fd40
void sub_0017FB40_0x17fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FB40_0x17fb40");
#endif

    switch (ctx->pc) {
        case 0x17fbd4u: goto label_17fbd4;
        case 0x17fbecu: goto label_17fbec;
        case 0x17fbf4u: goto label_17fbf4;
        case 0x17fc2cu: goto label_17fc2c;
        case 0x17fc44u: goto label_17fc44;
        case 0x17fc50u: goto label_17fc50;
        case 0x17fc68u: goto label_17fc68;
        case 0x17fc78u: goto label_17fc78;
        case 0x17fcacu: goto label_17fcac;
        case 0x17fcb8u: goto label_17fcb8;
        case 0x17fcf8u: goto label_17fcf8;
        default: break;
    }

    ctx->pc = 0x17fb40u;

label_17fb40:
    // 0x17fb40: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x17fb40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17fb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17fb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17fb4c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17fb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17fb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17fb54: 0x24476b00  addiu       $a3, $v0, 0x6B00
    ctx->pc = 0x17fb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x17fb58: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17fb5c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x17fb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x17fb64: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x17fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17fb68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FB68u;
    {
        const bool branch_taken_0x17fb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB68u;
            // 0x17fb6c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb68) {
            ctx->pc = 0x17FB80u;
            goto label_17fb80;
        }
    }
    ctx->pc = 0x17FB70u;
    // 0x17fb70: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x17fb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fb78: 0x805fe94  j           func_17FA50
    ctx->pc = 0x17FB78u;
    ctx->pc = 0x17FB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB78u;
            // 0x17fb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FA50u;
    {
        auto targetFn = runtime->lookupFunction(0x17FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x17FB80u;
label_17fb80:
    // 0x17fb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fb84: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB84u;
            // 0x17fb88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FB8Cu;
    // 0x17fb8c: 0x0  nop
    ctx->pc = 0x17fb8cu;
    // NOP
    // 0x17fb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17fb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17fb94: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x17fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x17fb98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17fb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17fb9c: 0x2454e940  addiu       $s4, $v0, -0x16C0
    ctx->pc = 0x17fb9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961472));
    // 0x17fba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17fba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17fba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17fbac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17fbacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17fbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17fbb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17fbb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbb8: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x17fbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17fbbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17fbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17fbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17fbc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17fbcc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17FBCCu;
    SET_GPR_U32(ctx, 31, 0x17FBD4u);
    ctx->pc = 0x17FBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBCCu;
            // 0x17fbd0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBD4u; }
        if (ctx->pc != 0x17FBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBD4u; }
        if (ctx->pc != 0x17FBD4u) { return; }
    }
    ctx->pc = 0x17FBD4u;
label_17fbd4:
    // 0x17fbd4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17fbd8: 0x8c626b00  lw          $v0, 0x6B00($v1)
    ctx->pc = 0x17fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27392)));
    // 0x17fbdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FBDCu;
    {
        const bool branch_taken_0x17fbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fbdc) {
            ctx->pc = 0x17FBECu;
            goto label_17fbec;
        }
    }
    ctx->pc = 0x17FBE4u;
    // 0x17fbe4: 0xc05fec6  jal         func_17FB18
    ctx->pc = 0x17FBE4u;
    SET_GPR_U32(ctx, 31, 0x17FBECu);
    ctx->pc = 0x17FB18u;
    if (runtime->hasFunction(0x17FB18u)) {
        auto targetFn = runtime->lookupFunction(0x17FB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBECu; }
        if (ctx->pc != 0x17FBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FB18_0x17fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBECu; }
        if (ctx->pc != 0x17FBECu) { return; }
    }
    ctx->pc = 0x17FBECu;
label_17fbec:
    // 0x17fbec: 0xc05fe48  jal         func_17F920
    ctx->pc = 0x17FBECu;
    SET_GPR_U32(ctx, 31, 0x17FBF4u);
    ctx->pc = 0x17F920u;
    if (runtime->hasFunction(0x17F920u)) {
        auto targetFn = runtime->lookupFunction(0x17F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBF4u; }
        if (ctx->pc != 0x17FBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F920_0x17f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FBF4u; }
        if (ctx->pc != 0x17FBF4u) { return; }
    }
    ctx->pc = 0x17FBF4u;
label_17fbf4:
    // 0x17fbf4: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x17FBF4u;
    {
        const bool branch_taken_0x17fbf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBF4u;
            // 0x17fbf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbf4) {
            ctx->pc = 0x17FCC8u;
            goto label_17fcc8;
        }
    }
    ctx->pc = 0x17FBFCu;
    // 0x17fbfc: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FBFCu;
    {
        const bool branch_taken_0x17fbfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBFCu;
            // 0x17fc00: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbfc) {
            ctx->pc = 0x17FC10u;
            goto label_17fc10;
        }
    }
    ctx->pc = 0x17FC04u;
    // 0x17fc04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17fc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17FC08u;
    {
        const bool branch_taken_0x17fc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC08u;
            // 0x17fc0c: 0x24846638  addiu       $a0, $a0, 0x6638 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc08) {
            ctx->pc = 0x17FC24u;
            goto label_17fc24;
        }
    }
    ctx->pc = 0x17FC10u;
label_17fc10:
    // 0x17fc10: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17FC10u;
    {
        const bool branch_taken_0x17fc10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC10u;
            // 0x17fc14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc10) {
            ctx->pc = 0x17FC38u;
            goto label_17fc38;
        }
    }
    ctx->pc = 0x17FC18u;
    // 0x17fc18: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17fc1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17fc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc20: 0x24846668  addiu       $a0, $a0, 0x6668
    ctx->pc = 0x17fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26216));
label_17fc24:
    // 0x17fc24: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17FC24u;
    SET_GPR_U32(ctx, 31, 0x17FC2Cu);
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC2Cu; }
        if (ctx->pc != 0x17FC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC2Cu; }
        if (ctx->pc != 0x17FC2Cu) { return; }
    }
    ctx->pc = 0x17FC2Cu;
label_17fc2c:
    // 0x17fc2c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x17FC2Cu;
    {
        const bool branch_taken_0x17fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC2Cu;
            // 0x17fc30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc2c) {
            ctx->pc = 0x17FCC8u;
            goto label_17fcc8;
        }
    }
    ctx->pc = 0x17FC34u;
    // 0x17fc34: 0x0  nop
    ctx->pc = 0x17fc34u;
    // NOP
label_17fc38:
    // 0x17fc38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17fc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc3c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17FC3Cu;
    SET_GPR_U32(ctx, 31, 0x17FC44u);
    ctx->pc = 0x17FC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC3Cu;
            // 0x17fc40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC44u; }
        if (ctx->pc != 0x17FC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC44u; }
        if (ctx->pc != 0x17FC44u) { return; }
    }
    ctx->pc = 0x17FC44u;
label_17fc44:
    // 0x17fc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc48: 0xc05fd82  jal         func_17F608
    ctx->pc = 0x17FC48u;
    SET_GPR_U32(ctx, 31, 0x17FC50u);
    ctx->pc = 0x17FC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC48u;
            // 0x17fc4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F608u;
    if (runtime->hasFunction(0x17F608u)) {
        auto targetFn = runtime->lookupFunction(0x17F608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC50u; }
        if (ctx->pc != 0x17FC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F608_0x17f608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC50u; }
        if (ctx->pc != 0x17FC50u) { return; }
    }
    ctx->pc = 0x17FC50u;
label_17fc50:
    // 0x17fc50: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x17FC50u;
    {
        const bool branch_taken_0x17fc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fc50) {
            ctx->pc = 0x17FC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC50u;
            // 0x17fc54: 0x26500009  addiu       $s0, $s2, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FC80u;
            goto label_17fc80;
        }
    }
    ctx->pc = 0x17FC58u;
    // 0x17fc58: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17fc5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc60: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17FC60u;
    SET_GPR_U32(ctx, 31, 0x17FC68u);
    ctx->pc = 0x17FC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC60u;
            // 0x17fc64: 0x24846698  addiu       $a0, $a0, 0x6698 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC68u; }
        if (ctx->pc != 0x17FC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC68u; }
        if (ctx->pc != 0x17FC68u) { return; }
    }
    ctx->pc = 0x17FC68u;
label_17fc68:
    // 0x17fc68: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17fc68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17fc6c: 0x24a566c0  addiu       $a1, $a1, 0x66C0
    ctx->pc = 0x17fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26304));
    // 0x17fc70: 0xc05f8e4  jal         func_17E390
    ctx->pc = 0x17FC70u;
    SET_GPR_U32(ctx, 31, 0x17FC78u);
    ctx->pc = 0x17FC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC70u;
            // 0x17fc74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC78u; }
        if (ctx->pc != 0x17FC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E390_0x17e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FC78u; }
        if (ctx->pc != 0x17FC78u) { return; }
    }
    ctx->pc = 0x17FC78u;
label_17fc78:
    // 0x17fc78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17FC78u;
    {
        const bool branch_taken_0x17fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC78u;
            // 0x17fc7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc78) {
            ctx->pc = 0x17FCC8u;
            goto label_17fcc8;
        }
    }
    ctx->pc = 0x17FC80u;
label_17fc80:
    // 0x17fc80: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17fc80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc84: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x17fc84u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x17fc88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17fc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc90: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17FC90u;
    {
        const bool branch_taken_0x17fc90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fc90) {
            ctx->pc = 0x17FC94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC90u;
            // 0x17fc94: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FC98u;
            goto label_17fc98;
        }
    }
    ctx->pc = 0x17FC98u;
label_17fc98:
    // 0x17fc98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17fc98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17fc9c: 0x8812  mflo        $s1
    ctx->pc = 0x17fc9cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x17fca0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17fca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fca4: 0xc05fd1a  jal         func_17F468
    ctx->pc = 0x17FCA4u;
    SET_GPR_U32(ctx, 31, 0x17FCACu);
    ctx->pc = 0x17FCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCA4u;
            // 0x17fca8: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F468u;
    if (runtime->hasFunction(0x17F468u)) {
        auto targetFn = runtime->lookupFunction(0x17F468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCACu; }
        if (ctx->pc != 0x17FCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F468_0x17f468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCACu; }
        if (ctx->pc != 0x17FCACu) { return; }
    }
    ctx->pc = 0x17FCACu;
label_17fcac:
    // 0x17fcac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcb0: 0xc05fdda  jal         func_17F768
    ctx->pc = 0x17FCB0u;
    SET_GPR_U32(ctx, 31, 0x17FCB8u);
    ctx->pc = 0x17FCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCB0u;
            // 0x17fcb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F768u;
    if (runtime->hasFunction(0x17F768u)) {
        auto targetFn = runtime->lookupFunction(0x17F768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCB8u; }
        if (ctx->pc != 0x17FCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F768_0x17f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCB8u; }
        if (ctx->pc != 0x17FCB8u) { return; }
    }
    ctx->pc = 0x17FCB8u;
label_17fcb8:
    // 0x17fcb8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17FCB8u;
    {
        const bool branch_taken_0x17fcb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fcb8) {
            ctx->pc = 0x17FCBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCB8u;
            // 0x17fcbc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FCC0u;
            goto label_17fcc0;
        }
    }
    ctx->pc = 0x17FCC0u;
label_17fcc0:
    // 0x17fcc0: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x17fcc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17fcc4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_17fcc8:
    // 0x17fcc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17fcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17fcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17fcd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17fcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fcd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17fcd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fcd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17fcd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fcdc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17fcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fce0: 0x3e00008  jr          $ra
    ctx->pc = 0x17FCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCE0u;
            // 0x17fce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FCE8u;
    // 0x17fce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17fce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17fcec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17fcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17fcf0: 0xc05fed0  jal         func_17FB40
    ctx->pc = 0x17FCF0u;
    SET_GPR_U32(ctx, 31, 0x17FCF8u);
    ctx->pc = 0x17FCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCF0u;
            // 0x17fcf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FB40u;
    goto label_17fb40;
    ctx->pc = 0x17FCF8u;
label_17fcf8:
    // 0x17fcf8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17fcfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17fcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fd00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17fd00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17fd04: 0x3e00008  jr          $ra
    ctx->pc = 0x17FD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD04u;
            // 0x17fd08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FD0Cu;
    // 0x17fd0c: 0x0  nop
    ctx->pc = 0x17fd0cu;
    // NOP
    // 0x17fd10: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17FD10u;
    {
        const bool branch_taken_0x17fd10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD10u;
            // 0x17fd14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd10) {
            ctx->pc = 0x17FD30u;
            goto label_17fd30;
        }
    }
    ctx->pc = 0x17FD18u;
    // 0x17fd18: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FD18u;
    {
        const bool branch_taken_0x17fd18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD18u;
            // 0x17fd1c: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd18) {
            ctx->pc = 0x17FD34u;
            goto label_17fd34;
        }
    }
    ctx->pc = 0x17FD20u;
    // 0x17fd20: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17fd24: 0x3e00008  jr          $ra
    ctx->pc = 0x17FD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD24u;
            // 0x17fd28: 0xac446b10  sw          $a0, 0x6B10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FD2Cu;
    // 0x17fd2c: 0x0  nop
    ctx->pc = 0x17fd2cu;
    // NOP
label_17fd30:
    // 0x17fd30: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_17fd34:
    // 0x17fd34: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x17fd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x17fd38: 0x3e00008  jr          $ra
    ctx->pc = 0x17FD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD38u;
            // 0x17fd3c: 0xac626b10  sw          $v0, 0x6B10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FD40u;
}
