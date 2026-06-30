#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EB00
// Address: 0x15eb00 - 0x15ec90
void sub_0015EB00_0x15eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EB00_0x15eb00");
#endif

    switch (ctx->pc) {
        case 0x15eb44u: goto label_15eb44;
        case 0x15eb64u: goto label_15eb64;
        case 0x15eb8cu: goto label_15eb8c;
        case 0x15ebb0u: goto label_15ebb0;
        case 0x15ebe4u: goto label_15ebe4;
        case 0x15ec2cu: goto label_15ec2c;
        case 0x15ec58u: goto label_15ec58;
        default: break;
    }

    ctx->pc = 0x15eb00u;

    // 0x15eb00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x15eb04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15eb08: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x15eb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x15eb0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15eb10: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x15eb10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15eb14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15eb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15eb18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15eb18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15eb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15eb20: 0x26a200a8  addiu       $v0, $s5, 0xA8
    ctx->pc = 0x15eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 168));
    // 0x15eb24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15eb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15eb28: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x15eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x15eb2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15eb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15eb30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15eb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15eb34: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x15eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x15eb38: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x15eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x15eb3c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15EB3Cu;
    SET_GPR_U32(ctx, 31, 0x15EB44u);
    ctx->pc = 0x15EB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB3Cu;
            // 0x15eb40: 0x26a5009c  addiu       $a1, $s5, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB44u; }
        if (ctx->pc != 0x15EB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB44u; }
        if (ctx->pc != 0x15EB44u) { return; }
    }
    ctx->pc = 0x15EB44u;
label_15eb44:
    // 0x15eb44: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x15eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x15eb48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15eb48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb4c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x15eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15eb50: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x15eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x15eb54: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x15eb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eb58: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x15eb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x15eb5c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x15eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15eb60: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x15eb60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15eb64:
    // 0x15eb64: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x15eb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x15eb68: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x15EB68u;
    {
        const bool branch_taken_0x15eb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb68) {
            ctx->pc = 0x15EC58u;
            goto label_15ec58;
        }
    }
    ctx->pc = 0x15EB70u;
    // 0x15eb70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eb74: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x15eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15eb78: 0x2828804  sllv        $s1, $v0, $s4
    ctx->pc = 0x15eb78u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x15eb7c: 0x26a500c4  addiu       $a1, $s5, 0xC4
    ctx->pc = 0x15eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
    // 0x15eb80: 0x27a600ac  addiu       $a2, $sp, 0xAC
    ctx->pc = 0x15eb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x15eb84: 0xc057f64  jal         func_15FD90
    ctx->pc = 0x15EB84u;
    SET_GPR_U32(ctx, 31, 0x15EB8Cu);
    ctx->pc = 0x15EB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB84u;
            // 0x15eb88: 0xafb100ac  sw          $s1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FD90u;
    if (runtime->hasFunction(0x15FD90u)) {
        auto targetFn = runtime->lookupFunction(0x15FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB8Cu; }
        if (ctx->pc != 0x15EB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FD90_0x15fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB8Cu; }
        if (ctx->pc != 0x15EB8Cu) { return; }
    }
    ctx->pc = 0x15EB8Cu;
label_15eb8c:
    // 0x15eb8c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15eb90: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15eb94: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15eb98: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x15eb98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15eb9c: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x15eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x15eba0: 0x12050017  beq         $s0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x15EBA0u;
    {
        const bool branch_taken_0x15eba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x15eba0) {
            ctx->pc = 0x15EC00u;
            goto label_15ec00;
        }
    }
    ctx->pc = 0x15EBA8u;
    // 0x15eba8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x15eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15ebac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x15ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_15ebb0:
    // 0x15ebb0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x15ebb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x15ebb4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x15ebb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x15ebb8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x15ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15ebbc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x15ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15ebc0: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x15ebc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15ebc4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15EBC4u;
    {
        const bool branch_taken_0x15ebc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ebc4) {
            ctx->pc = 0x15EBF0u;
            goto label_15ebf0;
        }
    }
    ctx->pc = 0x15EBCCu;
    // 0x15ebcc: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x15ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x15ebd0: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x15ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x15ebd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ebd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ebd8: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x15ebd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x15ebdc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15EBDCu;
    SET_GPR_U32(ctx, 31, 0x15EBE4u);
    ctx->pc = 0x15EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBDCu;
            // 0x15ebe0: 0x27a7007c  addiu       $a3, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBE4u; }
        if (ctx->pc != 0x15EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBE4u; }
        if (ctx->pc != 0x15EBE4u) { return; }
    }
    ctx->pc = 0x15EBE4u;
label_15ebe4:
    // 0x15ebe4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x15ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x15ebe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15EBE8u;
    {
        const bool branch_taken_0x15ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBE8u;
            // 0x15ebec: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebe8) {
            ctx->pc = 0x15EC00u;
            goto label_15ec00;
        }
    }
    ctx->pc = 0x15EBF0u;
label_15ebf0:
    // 0x15ebf0: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x15ebf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15ebf4: 0x1605ffee  bne         $s0, $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15EBF4u;
    {
        const bool branch_taken_0x15ebf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x15ebf4) {
            ctx->pc = 0x15EBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ebb0;
        }
    }
    ctx->pc = 0x15EBFCu;
    // 0x15ebfc: 0x0  nop
    ctx->pc = 0x15ebfcu;
    // NOP
label_15ec00:
    // 0x15ec00: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x15ec00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x15ec04: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x15ec04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x15ec08: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x15ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x15ec0c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15EC0Cu;
    {
        const bool branch_taken_0x15ec0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ec0c) {
            ctx->pc = 0x15EC38u;
            goto label_15ec38;
        }
    }
    ctx->pc = 0x15EC14u;
    // 0x15ec14: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x15ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x15ec18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ec18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec1c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15ec20: 0x27a60094  addiu       $a2, $sp, 0x94
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x15ec24: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15EC24u;
    SET_GPR_U32(ctx, 31, 0x15EC2Cu);
    ctx->pc = 0x15EC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC24u;
            // 0x15ec28: 0x27a7007c  addiu       $a3, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC2Cu; }
        if (ctx->pc != 0x15EC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC2Cu; }
        if (ctx->pc != 0x15EC2Cu) { return; }
    }
    ctx->pc = 0x15EC2Cu;
label_15ec2c:
    // 0x15ec2c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x15ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15ec30: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x15ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x15ec34: 0x0  nop
    ctx->pc = 0x15ec34u;
    // NOP
label_15ec38:
    // 0x15ec38: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x15ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15ec3c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x15ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15ec40: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x15ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x15ec44: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15ec44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15ec48: 0xafb10080  sw          $s1, 0x80($sp)
    ctx->pc = 0x15ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 17));
    // 0x15ec4c: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x15ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x15ec50: 0xc058070  jal         func_1601C0
    ctx->pc = 0x15EC50u;
    SET_GPR_U32(ctx, 31, 0x15EC58u);
    ctx->pc = 0x15EC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC50u;
            // 0x15ec54: 0x2445003c  addiu       $a1, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601C0u;
    if (runtime->hasFunction(0x1601C0u)) {
        auto targetFn = runtime->lookupFunction(0x1601C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC58u; }
        if (ctx->pc != 0x15EC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601C0_0x1601c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC58u; }
        if (ctx->pc != 0x15EC58u) { return; }
    }
    ctx->pc = 0x15EC58u;
label_15ec58:
    // 0x15ec58: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x15ec58u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x15ec5c: 0x1660ffc1  bnez        $s3, . + 4 + (-0x3F << 2)
    ctx->pc = 0x15EC5Cu;
    {
        const bool branch_taken_0x15ec5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC5Cu;
            // 0x15ec60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec5c) {
            ctx->pc = 0x15EB64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15eb64;
        }
    }
    ctx->pc = 0x15EC64u;
    // 0x15ec64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15ec64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15ec68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15ec68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15ec6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15ec6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ec70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15ec70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ec74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ec74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ec78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ec78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ec7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ec7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ec80: 0x3e00008  jr          $ra
    ctx->pc = 0x15EC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC80u;
            // 0x15ec84: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EC88u;
    // 0x15ec88: 0x0  nop
    ctx->pc = 0x15ec88u;
    // NOP
    // 0x15ec8c: 0x0  nop
    ctx->pc = 0x15ec8cu;
    // NOP
}
