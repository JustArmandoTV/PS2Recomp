#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BC30
// Address: 0x19bc30 - 0x19bd58
void sub_0019BC30_0x19bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BC30_0x19bc30");
#endif

    switch (ctx->pc) {
        case 0x19bc40u: goto label_19bc40;
        case 0x19bc50u: goto label_19bc50;
        case 0x19bc5cu: goto label_19bc5c;
        case 0x19bc9cu: goto label_19bc9c;
        case 0x19bd20u: goto label_19bd20;
        case 0x19bd44u: goto label_19bd44;
        default: break;
    }

    ctx->pc = 0x19bc30u;

    // 0x19bc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bc38: 0xc06cf0e  jal         func_1B3C38
    ctx->pc = 0x19BC38u;
    SET_GPR_U32(ctx, 31, 0x19BC40u);
    ctx->pc = 0x19BC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC38u;
            // 0x19bc3c: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C38u;
    if (runtime->hasFunction(0x1B3C38u)) {
        auto targetFn = runtime->lookupFunction(0x1B3C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC40u; }
        if (ctx->pc != 0x19BC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3C38_0x1b3c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC40u; }
        if (ctx->pc != 0x19BC40u) { return; }
    }
    ctx->pc = 0x19BC40u;
label_19bc40:
    // 0x19bc40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BC40u;
    {
        const bool branch_taken_0x19bc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC40u;
            // 0x19bc44: 0x2404fecd  addiu       $a0, $zero, -0x133 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966989));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc40) {
            ctx->pc = 0x19BC60u;
            goto label_19bc60;
        }
    }
    ctx->pc = 0x19BC48u;
    // 0x19bc48: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x19BC48u;
    SET_GPR_U32(ctx, 31, 0x19BC50u);
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC50u; }
        if (ctx->pc != 0x19BC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC50u; }
        if (ctx->pc != 0x19BC50u) { return; }
    }
    ctx->pc = 0x19BC50u;
label_19bc50:
    // 0x19bc50: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19bc54: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19BC54u;
    SET_GPR_U32(ctx, 31, 0x19BC5Cu);
    ctx->pc = 0x19BC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC54u;
            // 0x19bc58: 0x24849350  addiu       $a0, $a0, -0x6CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC5Cu; }
        if (ctx->pc != 0x19BC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC5Cu; }
        if (ctx->pc != 0x19BC5Cu) { return; }
    }
    ctx->pc = 0x19BC5Cu;
label_19bc5c:
    // 0x19bc5c: 0x2402fecd  addiu       $v0, $zero, -0x133
    ctx->pc = 0x19bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966989));
label_19bc60:
    // 0x19bc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bc64: 0x3e00008  jr          $ra
    ctx->pc = 0x19BC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC64u;
            // 0x19bc68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BC6Cu;
    // 0x19bc6c: 0x0  nop
    ctx->pc = 0x19bc6cu;
    // NOP
    // 0x19bc70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19bc74: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19bc78: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19bc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc7c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x19bc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x19bc80: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19bc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc84: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19bc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19bc88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19bc88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc8c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x19bc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x19bc90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19bc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc94: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x19BC94u;
    SET_GPR_U32(ctx, 31, 0x19BC9Cu);
    ctx->pc = 0x19BC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC94u;
            // 0x19bc98: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (runtime->hasFunction(0x1B44D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B44D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC9Cu; }
        if (ctx->pc != 0x19BC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B44D0_0x1b44d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC9Cu; }
        if (ctx->pc != 0x19BC9Cu) { return; }
    }
    ctx->pc = 0x19BC9Cu;
label_19bc9c:
    // 0x19bc9c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x19bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bca0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x19bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19bca4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x19bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x19bca8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19bcac: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x19bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x19bcb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x19bcb4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19bcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bcb8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x19bcb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19bcbc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19bcbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bcc0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x19bcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x19BCC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCC4u;
            // 0x19bcc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BCCCu;
    // 0x19bccc: 0x0  nop
    ctx->pc = 0x19bcccu;
    // NOP
    // 0x19bcd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bcd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bcd8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BCD8u;
    {
        const bool branch_taken_0x19bcd8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19BCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCD8u;
            // 0x19bcdc: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bcd8) {
            ctx->pc = 0x19BCF0u;
            goto label_19bcf0;
        }
    }
    ctx->pc = 0x19BCE0u;
    // 0x19bce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bce4: 0x806d150  j           func_1B4540
    ctx->pc = 0x19BCE4u;
    ctx->pc = 0x19BCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCE4u;
            // 0x19bce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4540u;
    if (runtime->hasFunction(0x1B4540u)) {
        auto targetFn = runtime->lookupFunction(0x1B4540u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B4540_0x1b4540(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19BCECu;
    // 0x19bcec: 0x0  nop
    ctx->pc = 0x19bcecu;
    // NOP
label_19bcf0:
    // 0x19bcf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x19BCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCF4u;
            // 0x19bcf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BCFCu;
    // 0x19bcfc: 0x0  nop
    ctx->pc = 0x19bcfcu;
    // NOP
    // 0x19bd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bd04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19bd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bd0c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x19bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19bd10: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19BD10u;
    {
        const bool branch_taken_0x19bd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD10u;
            // 0x19bd14: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd10) {
            ctx->pc = 0x19BD4Cu;
            goto label_19bd4c;
        }
    }
    ctx->pc = 0x19BD18u;
    // 0x19bd18: 0xc06c834  jal         func_1B20D0
    ctx->pc = 0x19BD18u;
    SET_GPR_U32(ctx, 31, 0x19BD20u);
    ctx->pc = 0x1B20D0u;
    if (runtime->hasFunction(0x1B20D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B20D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD20u; }
        if (ctx->pc != 0x19BD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B20D0_0x1b20d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD20u; }
        if (ctx->pc != 0x19BD20u) { return; }
    }
    ctx->pc = 0x19BD20u;
label_19bd20:
    // 0x19bd20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bd24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19BD24u;
    {
        const bool branch_taken_0x19bd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD24u;
            // 0x19bd28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd24) {
            ctx->pc = 0x19BD48u;
            goto label_19bd48;
        }
    }
    ctx->pc = 0x19BD2Cu;
    // 0x19bd2c: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BD2Cu;
    {
        const bool branch_taken_0x19bd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x19BD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD2Cu;
            // 0x19bd30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd2c) {
            ctx->pc = 0x19BD48u;
            goto label_19bd48;
        }
    }
    ctx->pc = 0x19BD34u;
    // 0x19bd34: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19bd38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd3c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19BD3Cu;
    SET_GPR_U32(ctx, 31, 0x19BD44u);
    ctx->pc = 0x19BD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD3Cu;
            // 0x19bd40: 0x24849370  addiu       $a0, $a0, -0x6C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD44u; }
        if (ctx->pc != 0x19BD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD44u; }
        if (ctx->pc != 0x19BD44u) { return; }
    }
    ctx->pc = 0x19BD44u;
label_19bd44:
    // 0x19bd44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19bd44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bd48:
    // 0x19bd48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19bd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19bd4c:
    // 0x19bd4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bd50: 0x3e00008  jr          $ra
    ctx->pc = 0x19BD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD50u;
            // 0x19bd54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BD58u;
}
