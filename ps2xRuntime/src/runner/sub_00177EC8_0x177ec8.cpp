#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177EC8
// Address: 0x177ec8 - 0x1780b8
void sub_00177EC8_0x177ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177EC8_0x177ec8");
#endif

    switch (ctx->pc) {
        case 0x177f38u: goto label_177f38;
        case 0x177f78u: goto label_177f78;
        case 0x177fa0u: goto label_177fa0;
        case 0x177fe8u: goto label_177fe8;
        case 0x177ffcu: goto label_177ffc;
        case 0x178058u: goto label_178058;
        default: break;
    }

    ctx->pc = 0x177ec8u;

label_177ec8:
    // 0x177ec8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177ecc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x177eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x177ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ed4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x177ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x177ed8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x177ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177edc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x177edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x177ee0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x177ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177ee4: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x177EE4u;
    {
        const bool branch_taken_0x177ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x177EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177EE4u;
            // 0x177ee8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ee4) {
            ctx->pc = 0x177EF8u;
            goto label_177ef8;
        }
    }
    ctx->pc = 0x177EECu;
    // 0x177eec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x177eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177ef0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x177ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x177ef4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x177ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_177ef8:
    // 0x177ef8: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x177EF8u;
    {
        const bool branch_taken_0x177ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x177ef8) {
            ctx->pc = 0x177EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177EF8u;
            // 0x177efc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177FACu;
            goto label_177fac;
        }
    }
    ctx->pc = 0x177F00u;
    // 0x177f00: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x177f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x177f04: 0x5451000e  bnel        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x177F04u;
    {
        const bool branch_taken_0x177f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x177f04) {
            ctx->pc = 0x177F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177F04u;
            // 0x177f08: 0x86030036  lh          $v1, 0x36($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177F40u;
            goto label_177f40;
        }
    }
    ctx->pc = 0x177F0Cu;
    // 0x177f0c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x177f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x177f10: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x177f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x177f14: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x177f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x177f18: 0x260a0034  addiu       $t2, $s0, 0x34
    ctx->pc = 0x177f18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x177f1c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x177f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x177f20: 0x86080030  lh          $t0, 0x30($s0)
    ctx->pc = 0x177f20u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x177f24: 0x86090032  lh          $t1, 0x32($s0)
    ctx->pc = 0x177f24u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x177f28: 0x860b0036  lh          $t3, 0x36($s0)
    ctx->pc = 0x177f28u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x177f2c: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x177f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x177f30: 0xc059cd0  jal         func_167340
    ctx->pc = 0x177F30u;
    SET_GPR_U32(ctx, 31, 0x177F38u);
    ctx->pc = 0x177F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F30u;
            // 0x177f34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167340u;
    if (runtime->hasFunction(0x167340u)) {
        auto targetFn = runtime->lookupFunction(0x167340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F38u; }
        if (ctx->pc != 0x177F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167340_0x167340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F38u; }
        if (ctx->pc != 0x177F38u) { return; }
    }
    ctx->pc = 0x177F38u;
label_177f38:
    // 0x177f38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x177F38u;
    {
        const bool branch_taken_0x177f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177F38u;
            // 0x177f3c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f38) {
            ctx->pc = 0x177FA0u;
            goto label_177fa0;
        }
    }
    ctx->pc = 0x177F40u;
label_177f40:
    // 0x177f40: 0x260c0034  addiu       $t4, $s0, 0x34
    ctx->pc = 0x177f40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x177f44: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x177f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x177f48: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x177f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x177f4c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x177f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x177f50: 0x2609002c  addiu       $t1, $s0, 0x2C
    ctx->pc = 0x177f50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x177f54: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x177f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x177f58: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x177f58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x177f5c: 0x860a0030  lh          $t2, 0x30($s0)
    ctx->pc = 0x177f5cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x177f60: 0x860b0032  lh          $t3, 0x32($s0)
    ctx->pc = 0x177f60u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x177f64: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x177f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x177f68: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x177f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x177f6c: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x177f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x177f70: 0xc059f0c  jal         func_167C30
    ctx->pc = 0x177F70u;
    SET_GPR_U32(ctx, 31, 0x177F78u);
    ctx->pc = 0x177F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177F70u;
            // 0x177f74: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167C30u;
    if (runtime->hasFunction(0x167C30u)) {
        auto targetFn = runtime->lookupFunction(0x167C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F78u; }
        if (ctx->pc != 0x177F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167C30_0x167c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177F78u; }
        if (ctx->pc != 0x177F78u) { return; }
    }
    ctx->pc = 0x177F78u;
label_177f78:
    // 0x177f78: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x177f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x177f7c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x177f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x177f80: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x177f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177f84: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x177f84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x177f88: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x177f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x177f8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x177f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177f90: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x177F90u;
    {
        const bool branch_taken_0x177f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x177F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177F90u;
            // 0x177f94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f90) {
            ctx->pc = 0x177FA4u;
            goto label_177fa4;
        }
    }
    ctx->pc = 0x177F98u;
    // 0x177f98: 0xc05dfae  jal         func_177EB8
    ctx->pc = 0x177F98u;
    SET_GPR_U32(ctx, 31, 0x177FA0u);
    ctx->pc = 0x177EB8u;
    if (runtime->hasFunction(0x177EB8u)) {
        auto targetFn = runtime->lookupFunction(0x177EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FA0u; }
        if (ctx->pc != 0x177FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177EB8_0x177eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177FA0u; }
        if (ctx->pc != 0x177FA0u) { return; }
    }
    ctx->pc = 0x177FA0u;
label_177fa0:
    // 0x177fa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x177fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_177fa4:
    // 0x177fa4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x177fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x177fa8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x177fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_177fac:
    // 0x177fac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x177facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177fb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x177FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177FB4u;
            // 0x177fb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177FBCu;
    // 0x177fbc: 0x0  nop
    ctx->pc = 0x177fbcu;
    // NOP
    // 0x177fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177fc4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x177fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x177fc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x177fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x177fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177fd0: 0x24503f88  addiu       $s0, $v0, 0x3F88
    ctx->pc = 0x177fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16264));
    // 0x177fd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177fd8: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x177fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x177fdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177fe0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x177fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177fe4: 0x0  nop
    ctx->pc = 0x177fe4u;
    // NOP
label_177fe8:
    // 0x177fe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x177fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x177fec: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x177FECu;
    {
        const bool branch_taken_0x177fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x177fec) {
            ctx->pc = 0x177FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177FECu;
            // 0x177ff0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178000u;
            goto label_178000;
        }
    }
    ctx->pc = 0x177FF4u;
    // 0x177ff4: 0xc05dfb2  jal         func_177EC8
    ctx->pc = 0x177FF4u;
    SET_GPR_U32(ctx, 31, 0x177FFCu);
    ctx->pc = 0x177FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177FF4u;
            // 0x177ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177EC8u;
    goto label_177ec8;
    ctx->pc = 0x177FFCu;
label_177ffc:
    // 0x177ffc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x177ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_178000:
    // 0x178000: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x178000u;
    {
        const bool branch_taken_0x178000 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x178004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178000u;
            // 0x178004: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178000) {
            ctx->pc = 0x177FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177fe8;
        }
    }
    ctx->pc = 0x178008u;
    // 0x178008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17800c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17800cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178010: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178014: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x178014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178018: 0x3e00008  jr          $ra
    ctx->pc = 0x178018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17801Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178018u;
            // 0x17801c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178020u;
    // 0x178020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178024: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x178024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x178028: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x178028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x17802c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178030: 0x2463d188  addiu       $v1, $v1, -0x2E78
    ctx->pc = 0x178030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955400));
    // 0x178034: 0x24424ad8  addiu       $v0, $v0, 0x4AD8
    ctx->pc = 0x178034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19160));
    // 0x178038: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x178038u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x17803c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x178040: 0x2610d198  addiu       $s0, $s0, -0x2E68
    ctx->pc = 0x178040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955416));
    // 0x178044: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x178044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x178048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17804c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17804cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178050: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x178050u;
    SET_GPR_U32(ctx, 31, 0x178058u);
    ctx->pc = 0x178054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178050u;
            // 0x178054: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178058u; }
        if (ctx->pc != 0x178058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178058u; }
        if (ctx->pc != 0x178058u) { return; }
    }
    ctx->pc = 0x178058u;
label_178058:
    // 0x178058: 0x3c07006d  lui         $a3, 0x6D
    ctx->pc = 0x178058u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)109 << 16));
    // 0x17805c: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x17805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x178060: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x178060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x178064: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x178064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x178068: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x178068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17806c: 0x908023  subu        $s0, $a0, $s0
    ctx->pc = 0x17806cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x178070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178074: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x178074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17807c: 0x2445000f  addiu       $a1, $v0, 0xF
    ctx->pc = 0x17807cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x178080: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x178080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x178084: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x178084u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x178088: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x178088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x17808c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x17808cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x178090: 0xace4d18c  sw          $a0, -0x2E74($a3)
    ctx->pc = 0x178090u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294955404), GPR_U32(ctx, 4));
    // 0x178094: 0xacc2d190  sw          $v0, -0x2E70($a2)
    ctx->pc = 0x178094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955408), GPR_U32(ctx, 2));
    // 0x178098: 0x3e00008  jr          $ra
    ctx->pc = 0x178098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178098u;
            // 0x17809c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1780A0u;
    // 0x1780a0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1780a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1780a4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1780a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x1780a8: 0xac40d18c  sw          $zero, -0x2E74($v0)
    ctx->pc = 0x1780a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955404), GPR_U32(ctx, 0));
    // 0x1780ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1780ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1780B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1780ACu;
            // 0x1780b0: 0xac60d190  sw          $zero, -0x2E70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294955408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1780B4u;
    // 0x1780b4: 0x0  nop
    ctx->pc = 0x1780b4u;
    // NOP
}
