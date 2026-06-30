#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00524C30
// Address: 0x524c30 - 0x524db0
void sub_00524C30_0x524c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00524C30_0x524c30");
#endif

    switch (ctx->pc) {
        case 0x524c6cu: goto label_524c6c;
        case 0x524c80u: goto label_524c80;
        case 0x524c94u: goto label_524c94;
        case 0x524cd0u: goto label_524cd0;
        case 0x524cecu: goto label_524cec;
        case 0x524cf8u: goto label_524cf8;
        case 0x524d04u: goto label_524d04;
        case 0x524d24u: goto label_524d24;
        case 0x524d44u: goto label_524d44;
        case 0x524d88u: goto label_524d88;
        default: break;
    }

    ctx->pc = 0x524c30u;

    // 0x524c30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x524c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x524c34: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x524c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x524c38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x524c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x524c3c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x524c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x524c40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x524c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x524c44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x524c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x524c48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x524c48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x524c4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x524c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x524c50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x524c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x524c54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x524c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x524c58: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x524c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x524c5c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x524c5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x524c60: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x524c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x524c64: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x524C64u;
    SET_GPR_U32(ctx, 31, 0x524C6Cu);
    ctx->pc = 0x524C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524C64u;
            // 0x524c68: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524C6Cu; }
        if (ctx->pc != 0x524C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524C6Cu; }
        if (ctx->pc != 0x524C6Cu) { return; }
    }
    ctx->pc = 0x524C6Cu;
label_524c6c:
    // 0x524c6c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x524c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x524c70: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x524c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x524c74: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x524c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x524c78: 0xc04cca0  jal         func_133280
    ctx->pc = 0x524C78u;
    SET_GPR_U32(ctx, 31, 0x524C80u);
    ctx->pc = 0x524C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524C78u;
            // 0x524c7c: 0x24c6c900  addiu       $a2, $a2, -0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524C80u; }
        if (ctx->pc != 0x524C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524C80u; }
        if (ctx->pc != 0x524C80u) { return; }
    }
    ctx->pc = 0x524C80u;
label_524c80:
    // 0x524c80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x524c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x524c84: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x524c84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x524c88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x524c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x524c8c: 0xae6200dc  sw          $v0, 0xDC($s3)
    ctx->pc = 0x524c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 2));
    // 0x524c90: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x524c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_524c94:
    // 0x524c94: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x524c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x524c98: 0x1242002f  beq         $s2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x524C98u;
    {
        const bool branch_taken_0x524c98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x524c98) {
            ctx->pc = 0x524D58u;
            goto label_524d58;
        }
    }
    ctx->pc = 0x524CA0u;
    // 0x524ca0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x524ca4: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x524ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x524ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x524ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x524cac: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x524cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x524cb0: 0x8c820ccc  lw          $v0, 0xCCC($a0)
    ctx->pc = 0x524cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3276)));
    // 0x524cb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x524cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x524cb8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x524CB8u;
    {
        const bool branch_taken_0x524cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x524CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524CB8u;
            // 0x524cbc: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x524cb8) {
            ctx->pc = 0x524D58u;
            goto label_524d58;
        }
    }
    ctx->pc = 0x524CC0u;
    // 0x524cc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x524cc4: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x524cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
    // 0x524cc8: 0xc149628  jal         func_5258A0
    ctx->pc = 0x524CC8u;
    SET_GPR_U32(ctx, 31, 0x524CD0u);
    ctx->pc = 0x524CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524CC8u;
            // 0x524ccc: 0x8e050d98  lw          $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5258A0u;
    if (runtime->hasFunction(0x5258A0u)) {
        auto targetFn = runtime->lookupFunction(0x5258A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524CD0u; }
        if (ctx->pc != 0x524CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005258A0_0x5258a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524CD0u; }
        if (ctx->pc != 0x524CD0u) { return; }
    }
    ctx->pc = 0x524CD0u;
label_524cd0:
    // 0x524cd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x524cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x524cd4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x524CD4u;
    {
        const bool branch_taken_0x524cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x524cd4) {
            ctx->pc = 0x524D58u;
            goto label_524d58;
        }
    }
    ctx->pc = 0x524CDCu;
    // 0x524cdc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x524cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x524ce0: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x524ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x524ce4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x524CE4u;
    SET_GPR_U32(ctx, 31, 0x524CECu);
    ctx->pc = 0x524CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524CE4u;
            // 0x524ce8: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524CECu; }
        if (ctx->pc != 0x524CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524CECu; }
        if (ctx->pc != 0x524CECu) { return; }
    }
    ctx->pc = 0x524CECu;
label_524cec:
    // 0x524cec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x524cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x524cf0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x524CF0u;
    SET_GPR_U32(ctx, 31, 0x524CF8u);
    ctx->pc = 0x524CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524CF0u;
            // 0x524cf4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524CF8u; }
        if (ctx->pc != 0x524CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524CF8u; }
        if (ctx->pc != 0x524CF8u) { return; }
    }
    ctx->pc = 0x524CF8u;
label_524cf8:
    // 0x524cf8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x524cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x524cfc: 0xc04cc08  jal         func_133020
    ctx->pc = 0x524CFCu;
    SET_GPR_U32(ctx, 31, 0x524D04u);
    ctx->pc = 0x524D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524CFCu;
            // 0x524d00: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524D04u; }
        if (ctx->pc != 0x524D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524D04u; }
        if (ctx->pc != 0x524D04u) { return; }
    }
    ctx->pc = 0x524D04u;
label_524d04:
    // 0x524d04: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x524d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x524d08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x524d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x524d0c: 0x0  nop
    ctx->pc = 0x524d0cu;
    // NOP
    // 0x524d10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x524d10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x524d14: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x524D14u;
    {
        const bool branch_taken_0x524d14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x524d14) {
            ctx->pc = 0x524D58u;
            goto label_524d58;
        }
    }
    ctx->pc = 0x524D1Cu;
    // 0x524d1c: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x524D1Cu;
    SET_GPR_U32(ctx, 31, 0x524D24u);
    ctx->pc = 0x524D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524D1Cu;
            // 0x524d20: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524D24u; }
        if (ctx->pc != 0x524D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524D24u; }
        if (ctx->pc != 0x524D24u) { return; }
    }
    ctx->pc = 0x524D24u;
label_524d24:
    // 0x524d24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x524d24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x524d28: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x524d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x524d2c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x524D2Cu;
    {
        const bool branch_taken_0x524d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x524d2c) {
            ctx->pc = 0x524D58u;
            goto label_524d58;
        }
    }
    ctx->pc = 0x524D34u;
    // 0x524d34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x524d38: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x524d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
    // 0x524d3c: 0xc149628  jal         func_5258A0
    ctx->pc = 0x524D3Cu;
    SET_GPR_U32(ctx, 31, 0x524D44u);
    ctx->pc = 0x524D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524D3Cu;
            // 0x524d40: 0x8e050d98  lw          $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5258A0u;
    if (runtime->hasFunction(0x5258A0u)) {
        auto targetFn = runtime->lookupFunction(0x5258A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524D44u; }
        if (ctx->pc != 0x524D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005258A0_0x5258a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524D44u; }
        if (ctx->pc != 0x524D44u) { return; }
    }
    ctx->pc = 0x524D44u;
label_524d44:
    // 0x524d44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x524D44u;
    {
        const bool branch_taken_0x524d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x524d44) {
            ctx->pc = 0x524D58u;
            goto label_524d58;
        }
    }
    ctx->pc = 0x524D4Cu;
    // 0x524d4c: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x524d4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x524d50: 0xae7200dc  sw          $s2, 0xDC($s3)
    ctx->pc = 0x524d50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 18));
    // 0x524d54: 0x0  nop
    ctx->pc = 0x524d54u;
    // NOP
label_524d58:
    // 0x524d58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x524d5c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x524d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x524d60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x524d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x524d64: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x524d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
    // 0x524d68: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x524d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x524d6c: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x524D6Cu;
    {
        const bool branch_taken_0x524d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x524D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524D6Cu;
            // 0x524d70: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x524d6c) {
            ctx->pc = 0x524C94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_524c94;
        }
    }
    ctx->pc = 0x524D74u;
    // 0x524d74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x524d78: 0x8c440cc0  lw          $a0, 0xCC0($v0)
    ctx->pc = 0x524d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
    // 0x524d7c: 0x8e6600dc  lw          $a2, 0xDC($s3)
    ctx->pc = 0x524d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x524d80: 0xc149554  jal         func_525550
    ctx->pc = 0x524D80u;
    SET_GPR_U32(ctx, 31, 0x524D88u);
    ctx->pc = 0x524D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524D80u;
            // 0x524d84: 0x8e6500d4  lw          $a1, 0xD4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x525550u;
    if (runtime->hasFunction(0x525550u)) {
        auto targetFn = runtime->lookupFunction(0x525550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524D88u; }
        if (ctx->pc != 0x524D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00525550_0x525550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524D88u; }
        if (ctx->pc != 0x524D88u) { return; }
    }
    ctx->pc = 0x524D88u;
label_524d88:
    // 0x524d88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x524d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x524d8c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x524d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x524d90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x524d90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x524d94: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x524d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x524d98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x524d98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x524d9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x524d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x524da0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x524da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x524da4: 0x3e00008  jr          $ra
    ctx->pc = 0x524DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x524DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524DA4u;
            // 0x524da8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x524DACu;
    // 0x524dac: 0x0  nop
    ctx->pc = 0x524dacu;
    // NOP
}
