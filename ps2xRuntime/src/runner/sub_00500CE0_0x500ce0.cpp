#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500CE0
// Address: 0x500ce0 - 0x500e70
void sub_00500CE0_0x500ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500CE0_0x500ce0");
#endif

    switch (ctx->pc) {
        case 0x500d10u: goto label_500d10;
        case 0x500d50u: goto label_500d50;
        case 0x500d9cu: goto label_500d9c;
        case 0x500e14u: goto label_500e14;
        case 0x500e30u: goto label_500e30;
        default: break;
    }

    ctx->pc = 0x500ce0u;

    // 0x500ce0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x500ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x500ce4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x500ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x500ce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x500ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x500cec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x500cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x500cf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x500cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x500cf4: 0x2491008c  addiu       $s1, $a0, 0x8C
    ctx->pc = 0x500cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    // 0x500cf8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x500cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x500cfc: 0x8c900088  lw          $s0, 0x88($a0)
    ctx->pc = 0x500cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x500d00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x500d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x500d04: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x500d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x500d08: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x500d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x500d0c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x500d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_500d10:
    // 0x500d10: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x500d10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x500d14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x500d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x500d18: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x500d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x500d1c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x500d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x500d20: 0x84420144  lh          $v0, 0x144($v0)
    ctx->pc = 0x500d20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x500d24: 0x9063000a  lbu         $v1, 0xA($v1)
    ctx->pc = 0x500d24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x500d28: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x500D28u;
    {
        const bool branch_taken_0x500d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x500d28) {
            ctx->pc = 0x500D50u;
            goto label_500d50;
        }
    }
    ctx->pc = 0x500D30u;
    // 0x500d30: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x500d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x500d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x500d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500d38: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x500d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x500d3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x500d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x500d40: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x500d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x500d44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x500d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x500d48: 0xc0b4904  jal         func_2D2410
    ctx->pc = 0x500D48u;
    SET_GPR_U32(ctx, 31, 0x500D50u);
    ctx->pc = 0x500D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500D48u;
            // 0x500d4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500D50u; }
        if (ctx->pc != 0x500D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500D50u; }
        if (ctx->pc != 0x500D50u) { return; }
    }
    ctx->pc = 0x500D50u;
label_500d50:
    // 0x500d50: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x500d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x500d54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x500d54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x500d58: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x500d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x500d5c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x500d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x500d60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x500d60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x500d64: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x500d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x500d68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x500d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x500d6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x500d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x500d70: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x500D70u;
    {
        const bool branch_taken_0x500d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x500d70) {
            ctx->pc = 0x500D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500D70u;
            // 0x500d74: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_500d10;
        }
    }
    ctx->pc = 0x500D78u;
    // 0x500d78: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x500d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x500d7c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x500D7Cu;
    {
        const bool branch_taken_0x500d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x500d7c) {
            ctx->pc = 0x500D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500D7Cu;
            // 0x500d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500DA0u;
            goto label_500da0;
        }
    }
    ctx->pc = 0x500D84u;
    // 0x500d84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x500d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x500d88: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x500d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x500d8c: 0x83a60050  lb          $a2, 0x50($sp)
    ctx->pc = 0x500d8cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x500d90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x500d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x500d94: 0xc140448  jal         func_501120
    ctx->pc = 0x500D94u;
    SET_GPR_U32(ctx, 31, 0x500D9Cu);
    ctx->pc = 0x500D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500D94u;
            // 0x500d98: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x501120u;
    if (runtime->hasFunction(0x501120u)) {
        auto targetFn = runtime->lookupFunction(0x501120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500D9Cu; }
        if (ctx->pc != 0x500D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00501120_0x501120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500D9Cu; }
        if (ctx->pc != 0x500D9Cu) { return; }
    }
    ctx->pc = 0x500D9Cu;
label_500d9c:
    // 0x500d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x500d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_500da0:
    // 0x500da0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x500da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x500da4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x500da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x500da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x500dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500db0: 0x3e00008  jr          $ra
    ctx->pc = 0x500DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500DB0u;
            // 0x500db4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500DB8u;
    // 0x500db8: 0x0  nop
    ctx->pc = 0x500db8u;
    // NOP
    // 0x500dbc: 0x0  nop
    ctx->pc = 0x500dbcu;
    // NOP
    // 0x500dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x500dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x500dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x500dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x500dc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x500dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x500dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x500dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x500dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x500dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x500dd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x500dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500dd8: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x500dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x500ddc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x500ddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x500de0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x500DE0u;
    {
        const bool branch_taken_0x500de0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x500DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500DE0u;
            // 0x500de4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500de0) {
            ctx->pc = 0x500E50u;
            goto label_500e50;
        }
    }
    ctx->pc = 0x500DE8u;
    // 0x500de8: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x500de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x500dec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x500decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x500df0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x500DF0u;
    {
        const bool branch_taken_0x500df0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x500df0) {
            ctx->pc = 0x500E28u;
            goto label_500e28;
        }
    }
    ctx->pc = 0x500DF8u;
    // 0x500df8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x500df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x500dfc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x500DFCu;
    {
        const bool branch_taken_0x500dfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x500dfc) {
            ctx->pc = 0x500E0Cu;
            goto label_500e0c;
        }
    }
    ctx->pc = 0x500E04u;
    // 0x500e04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x500E04u;
    {
        const bool branch_taken_0x500e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x500E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500E04u;
            // 0x500e08: 0xae300078  sw          $s0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500e04) {
            ctx->pc = 0x500E48u;
            goto label_500e48;
        }
    }
    ctx->pc = 0x500E0Cu;
label_500e0c:
    // 0x500e0c: 0xc1402b4  jal         func_500AD0
    ctx->pc = 0x500E0Cu;
    SET_GPR_U32(ctx, 31, 0x500E14u);
    ctx->pc = 0x500AD0u;
    if (runtime->hasFunction(0x500AD0u)) {
        auto targetFn = runtime->lookupFunction(0x500AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500E14u; }
        if (ctx->pc != 0x500E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500AD0_0x500ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500E14u; }
        if (ctx->pc != 0x500E14u) { return; }
    }
    ctx->pc = 0x500E14u;
label_500e14:
    // 0x500e14: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x500e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
    // 0x500e18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x500e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x500e1c: 0xae24006c  sw          $a0, 0x6C($s1)
    ctx->pc = 0x500e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 4));
    // 0x500e20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x500E20u;
    {
        const bool branch_taken_0x500e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x500E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500E20u;
            // 0x500e24: 0xae230064  sw          $v1, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500e20) {
            ctx->pc = 0x500E44u;
            goto label_500e44;
        }
    }
    ctx->pc = 0x500E28u;
label_500e28:
    // 0x500e28: 0xc140228  jal         func_5008A0
    ctx->pc = 0x500E28u;
    SET_GPR_U32(ctx, 31, 0x500E30u);
    ctx->pc = 0x5008A0u;
    if (runtime->hasFunction(0x5008A0u)) {
        auto targetFn = runtime->lookupFunction(0x5008A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500E30u; }
        if (ctx->pc != 0x500E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005008A0_0x5008a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500E30u; }
        if (ctx->pc != 0x500E30u) { return; }
    }
    ctx->pc = 0x500E30u;
label_500e30:
    // 0x500e30: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x500e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
    // 0x500e34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x500e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x500e38: 0xae24006c  sw          $a0, 0x6C($s1)
    ctx->pc = 0x500e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 4));
    // 0x500e3c: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x500e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x500e40: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x500e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_500e44:
    // 0x500e44: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x500e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
label_500e48:
    // 0x500e48: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x500e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x500e4c: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x500e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
label_500e50:
    // 0x500e50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x500e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x500e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x500e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x500E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500E5Cu;
            // 0x500e60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500E64u;
    // 0x500e64: 0x0  nop
    ctx->pc = 0x500e64u;
    // NOP
    // 0x500e68: 0x0  nop
    ctx->pc = 0x500e68u;
    // NOP
    // 0x500e6c: 0x0  nop
    ctx->pc = 0x500e6cu;
    // NOP
}
