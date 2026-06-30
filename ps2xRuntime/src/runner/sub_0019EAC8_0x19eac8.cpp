#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EAC8
// Address: 0x19eac8 - 0x19eb98
void sub_0019EAC8_0x19eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EAC8_0x19eac8");
#endif

    switch (ctx->pc) {
        case 0x19eb1cu: goto label_19eb1c;
        case 0x19eb38u: goto label_19eb38;
        case 0x19eb54u: goto label_19eb54;
        case 0x19eb68u: goto label_19eb68;
        case 0x19eb7cu: goto label_19eb7c;
        default: break;
    }

    ctx->pc = 0x19eac8u;

    // 0x19eac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19eac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19eacc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x19eaccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ead0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19ead4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19ead4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ead8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19ead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19eadc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19eae0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x19eae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x19eae4: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x19eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x19eae8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x19eae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x19eaec: 0x8d110010  lw          $s1, 0x10($t0)
    ctx->pc = 0x19eaecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x19eaf0: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x19eaf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x19eaf4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x19eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x19eaf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19eaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eafc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19eafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb00: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x19eb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb04: 0xae490044  sw          $t1, 0x44($s2)
    ctx->pc = 0x19eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 9));
    // 0x19eb08: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19EB08u;
    {
        const bool branch_taken_0x19eb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19EB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB08u;
            // 0x19eb0c: 0xae510048  sw          $s1, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb08) {
            ctx->pc = 0x19EB28u;
            goto label_19eb28;
        }
    }
    ctx->pc = 0x19EB10u;
    // 0x19eb10: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x19eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19eb14: 0xc067aea  jal         func_19EBA8
    ctx->pc = 0x19EB14u;
    SET_GPR_U32(ctx, 31, 0x19EB1Cu);
    ctx->pc = 0x19EB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB14u;
            // 0x19eb18: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EBA8u;
    if (runtime->hasFunction(0x19EBA8u)) {
        auto targetFn = runtime->lookupFunction(0x19EBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB1Cu; }
        if (ctx->pc != 0x19EB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EBA8_0x19eba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB1Cu; }
        if (ctx->pc != 0x19EB1Cu) { return; }
    }
    ctx->pc = 0x19EB1Cu;
label_19eb1c:
    // 0x19eb1c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19EB1Cu;
    {
        const bool branch_taken_0x19eb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB1Cu;
            // 0x19eb20: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb1c) {
            ctx->pc = 0x19EB80u;
            goto label_19eb80;
        }
    }
    ctx->pc = 0x19EB24u;
    // 0x19eb24: 0x0  nop
    ctx->pc = 0x19eb24u;
    // NOP
label_19eb28:
    // 0x19eb28: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x19eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19eb2c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19eb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb30: 0xc06680c  jal         func_19A030
    ctx->pc = 0x19EB30u;
    SET_GPR_U32(ctx, 31, 0x19EB38u);
    ctx->pc = 0x19EB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB30u;
            // 0x19eb34: 0x1187c2  srl         $s0, $s1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A030u;
    if (runtime->hasFunction(0x19A030u)) {
        auto targetFn = runtime->lookupFunction(0x19A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB38u; }
        if (ctx->pc != 0x19EB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A030_0x19a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB38u; }
        if (ctx->pc != 0x19EB38u) { return; }
    }
    ctx->pc = 0x19EB38u;
label_19eb38:
    // 0x19eb38: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x19eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x19eb3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eb40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19eb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb44: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x19eb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x19eb48: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x19eb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x19eb4c: 0xc067aea  jal         func_19EBA8
    ctx->pc = 0x19EB4Cu;
    SET_GPR_U32(ctx, 31, 0x19EB54u);
    ctx->pc = 0x19EB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB4Cu;
            // 0x19eb50: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EBA8u;
    if (runtime->hasFunction(0x19EBA8u)) {
        auto targetFn = runtime->lookupFunction(0x19EBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB54u; }
        if (ctx->pc != 0x19EB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EBA8_0x19eba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB54u; }
        if (ctx->pc != 0x19EB54u) { return; }
    }
    ctx->pc = 0x19EB54u;
label_19eb54:
    // 0x19eb54: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x19eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x19eb58: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x19eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19eb5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19eb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb60: 0xc067aea  jal         func_19EBA8
    ctx->pc = 0x19EB60u;
    SET_GPR_U32(ctx, 31, 0x19EB68u);
    ctx->pc = 0x19EB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB60u;
            // 0x19eb64: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EBA8u;
    if (runtime->hasFunction(0x19EBA8u)) {
        auto targetFn = runtime->lookupFunction(0x19EBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB68u; }
        if (ctx->pc != 0x19EB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EBA8_0x19eba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB68u; }
        if (ctx->pc != 0x19EB68u) { return; }
    }
    ctx->pc = 0x19EB68u;
label_19eb68:
    // 0x19eb68: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x19eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x19eb6c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x19eb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19eb70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19eb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb74: 0xc067aea  jal         func_19EBA8
    ctx->pc = 0x19EB74u;
    SET_GPR_U32(ctx, 31, 0x19EB7Cu);
    ctx->pc = 0x19EB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB74u;
            // 0x19eb78: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EBA8u;
    if (runtime->hasFunction(0x19EBA8u)) {
        auto targetFn = runtime->lookupFunction(0x19EBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB7Cu; }
        if (ctx->pc != 0x19EB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EBA8_0x19eba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB7Cu; }
        if (ctx->pc != 0x19EB7Cu) { return; }
    }
    ctx->pc = 0x19EB7Cu;
label_19eb7c:
    // 0x19eb7c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19eb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19eb80:
    // 0x19eb80: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x19eb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19eb84: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19eb84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19eb88: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x19eb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19eb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB8Cu;
            // 0x19eb90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EB94u;
    // 0x19eb94: 0x0  nop
    ctx->pc = 0x19eb94u;
    // NOP
}
