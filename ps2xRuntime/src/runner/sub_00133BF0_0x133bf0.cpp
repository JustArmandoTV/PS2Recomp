#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133BF0
// Address: 0x133bf0 - 0x133f30
void sub_00133BF0_0x133bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133BF0_0x133bf0");
#endif

    switch (ctx->pc) {
        case 0x133c0cu: goto label_133c0c;
        case 0x133c28u: goto label_133c28;
        case 0x133c30u: goto label_133c30;
        case 0x133c64u: goto label_133c64;
        case 0x133c80u: goto label_133c80;
        case 0x133c8cu: goto label_133c8c;
        case 0x133d1cu: goto label_133d1c;
        case 0x133d40u: goto label_133d40;
        case 0x133d60u: goto label_133d60;
        case 0x133db4u: goto label_133db4;
        case 0x133dd4u: goto label_133dd4;
        case 0x133df4u: goto label_133df4;
        case 0x133e14u: goto label_133e14;
        case 0x133e3cu: goto label_133e3c;
        case 0x133e74u: goto label_133e74;
        case 0x133e98u: goto label_133e98;
        case 0x133ec0u: goto label_133ec0;
        case 0x133ee4u: goto label_133ee4;
        case 0x133f00u: goto label_133f00;
        case 0x133f08u: goto label_133f08;
        default: break;
    }

    ctx->pc = 0x133bf0u;

label_133bf0:
    // 0x133bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x133bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x133bf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x133bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x133bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x133bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133c00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x133c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133c08: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x133c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_133c0c:
    // 0x133c0c: 0x8f8280bc  lw          $v0, -0x7F44($gp)
    ctx->pc = 0x133c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934716)));
    // 0x133c10: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x133c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x133c14: 0x8f8480c0  lw          $a0, -0x7F40($gp)
    ctx->pc = 0x133c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x133c18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x133c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x133c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c20: 0xc04e1b8  jal         func_1386E0
    ctx->pc = 0x133C20u;
    SET_GPR_U32(ctx, 31, 0x133C28u);
    ctx->pc = 0x133C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133C20u;
            // 0x133c24: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386E0u;
    if (runtime->hasFunction(0x1386E0u)) {
        auto targetFn = runtime->lookupFunction(0x1386E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C28u; }
        if (ctx->pc != 0x133C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386E0_0x1386e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C28u; }
        if (ctx->pc != 0x133C28u) { return; }
    }
    ctx->pc = 0x133C28u;
label_133c28:
    // 0x133c28: 0xc04e1b0  jal         func_1386C0
    ctx->pc = 0x133C28u;
    SET_GPR_U32(ctx, 31, 0x133C30u);
    ctx->pc = 0x133C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133C28u;
            // 0x133c2c: 0x8f8480c0  lw          $a0, -0x7F40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C30u; }
        if (ctx->pc != 0x133C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386C0_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C30u; }
        if (ctx->pc != 0x133C30u) { return; }
    }
    ctx->pc = 0x133C30u;
label_133c30:
    // 0x133c30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x133c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x133c34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c38: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x133c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x133c3c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x133C3Cu;
    {
        const bool branch_taken_0x133c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133c3c) {
            ctx->pc = 0x133C90u;
            goto label_133c90;
        }
    }
    ctx->pc = 0x133C44u;
    // 0x133c44: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x133c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x133c48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133C48u;
    {
        const bool branch_taken_0x133c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133c48) {
            ctx->pc = 0x133C70u;
            goto label_133c70;
        }
    }
    ctx->pc = 0x133C50u;
    // 0x133c50: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x133c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x133c54: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x133c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x133c58: 0xc62e0014  lwc1        $f14, 0x14($s1)
    ctx->pc = 0x133c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x133c5c: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x133C5Cu;
    SET_GPR_U32(ctx, 31, 0x133C64u);
    ctx->pc = 0x133C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133C5Cu;
            // 0x133c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (runtime->hasFunction(0x1354B0u)) {
        auto targetFn = runtime->lookupFunction(0x1354B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C64u; }
        if (ctx->pc != 0x133C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001354B0_0x1354b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C64u; }
        if (ctx->pc != 0x133C64u) { return; }
    }
    ctx->pc = 0x133C64u;
label_133c64:
    // 0x133c64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x133C64u;
    {
        const bool branch_taken_0x133c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c64) {
            ctx->pc = 0x133C90u;
            goto label_133c90;
        }
    }
    ctx->pc = 0x133C6Cu;
    // 0x133c6c: 0x0  nop
    ctx->pc = 0x133c6cu;
    // NOP
label_133c70:
    // 0x133c70: 0x8f8580a0  lw          $a1, -0x7F60($gp)
    ctx->pc = 0x133c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x133c74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x133c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x133c78: 0xc04cb9c  jal         func_132E70
    ctx->pc = 0x133C78u;
    SET_GPR_U32(ctx, 31, 0x133C80u);
    ctx->pc = 0x133C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133C78u;
            // 0x133c7c: 0x2626000c  addiu       $a2, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C80u; }
        if (ctx->pc != 0x133C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C80u; }
        if (ctx->pc != 0x133C80u) { return; }
    }
    ctx->pc = 0x133C80u;
label_133c80:
    // 0x133c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c84: 0xc04ce78  jal         func_1339E0
    ctx->pc = 0x133C84u;
    SET_GPR_U32(ctx, 31, 0x133C8Cu);
    ctx->pc = 0x133C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133C84u;
            // 0x133c88: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1339E0u;
    if (runtime->hasFunction(0x1339E0u)) {
        auto targetFn = runtime->lookupFunction(0x1339E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C8Cu; }
        if (ctx->pc != 0x133C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001339E0_0x1339e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C8Cu; }
        if (ctx->pc != 0x133C8Cu) { return; }
    }
    ctx->pc = 0x133C8Cu;
label_133c8c:
    // 0x133c8c: 0x0  nop
    ctx->pc = 0x133c8cu;
    // NOP
label_133c90:
    // 0x133c90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x133c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x133c94: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x133c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x133c98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x133C98u;
    {
        const bool branch_taken_0x133c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c98) {
            ctx->pc = 0x133CF0u;
            goto label_133cf0;
        }
    }
    ctx->pc = 0x133CA0u;
    // 0x133ca0: 0x8f8280a0  lw          $v0, -0x7F60($gp)
    ctx->pc = 0x133ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x133ca4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x133ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133ca8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x133ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x133cac: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x133cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133cb0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x133cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x133cb4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x133cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133cb8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x133cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x133cbc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x133cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133cc0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x133cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x133cc4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x133cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133cc8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x133cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x133ccc: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x133cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133cd0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x133cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x133cd4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x133cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133cd8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x133cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x133cdc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x133cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133ce0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x133ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x133ce4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x133ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133ce8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x133CE8u;
    {
        const bool branch_taken_0x133ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133CE8u;
            // 0x133cec: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ce8) {
            ctx->pc = 0x133D60u;
            goto label_133d60;
        }
    }
    ctx->pc = 0x133CF0u;
label_133cf0:
    // 0x133cf0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x133cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x133cf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x133cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x133cf8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x133CF8u;
    {
        const bool branch_taken_0x133cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133cf8) {
            ctx->pc = 0x133D60u;
            goto label_133d60;
        }
    }
    ctx->pc = 0x133D00u;
    // 0x133d00: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x133d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x133d04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x133d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x133d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133D08u;
    {
        const bool branch_taken_0x133d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d08) {
            ctx->pc = 0x133D20u;
            goto label_133d20;
        }
    }
    ctx->pc = 0x133D10u;
    // 0x133d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d14: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x133D14u;
    SET_GPR_U32(ctx, 31, 0x133D1Cu);
    ctx->pc = 0x133D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133D14u;
            // 0x133d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D1Cu; }
        if (ctx->pc != 0x133D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D1Cu; }
        if (ctx->pc != 0x133D1Cu) { return; }
    }
    ctx->pc = 0x133D1Cu;
label_133d1c:
    // 0x133d1c: 0x0  nop
    ctx->pc = 0x133d1cu;
    // NOP
label_133d20:
    // 0x133d20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x133d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x133d24: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x133d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x133d28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x133d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x133d2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133D2Cu;
    {
        const bool branch_taken_0x133d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d2c) {
            ctx->pc = 0x133D40u;
            goto label_133d40;
        }
    }
    ctx->pc = 0x133D34u;
    // 0x133d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d38: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x133D38u;
    SET_GPR_U32(ctx, 31, 0x133D40u);
    ctx->pc = 0x133D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133D38u;
            // 0x133d3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D40u; }
        if (ctx->pc != 0x133D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D40u; }
        if (ctx->pc != 0x133D40u) { return; }
    }
    ctx->pc = 0x133D40u;
label_133d40:
    // 0x133d40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x133d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x133d44: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x133d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x133d48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x133d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x133d4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133D4Cu;
    {
        const bool branch_taken_0x133d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d4c) {
            ctx->pc = 0x133D60u;
            goto label_133d60;
        }
    }
    ctx->pc = 0x133D54u;
    // 0x133d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d58: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x133D58u;
    SET_GPR_U32(ctx, 31, 0x133D60u);
    ctx->pc = 0x133D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133D58u;
            // 0x133d5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D60u; }
        if (ctx->pc != 0x133D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D60u; }
        if (ctx->pc != 0x133D60u) { return; }
    }
    ctx->pc = 0x133D60u;
label_133d60:
    // 0x133d60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x133d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x133d64: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x133d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x133d68: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x133D68u;
    {
        const bool branch_taken_0x133d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133d68) {
            ctx->pc = 0x133E18u;
            goto label_133e18;
        }
    }
    ctx->pc = 0x133D70u;
    // 0x133d70: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x133d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x133d74: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x133d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133d78: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x133D78u;
    {
        const bool branch_taken_0x133d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x133d78) {
            ctx->pc = 0x133DE0u;
            goto label_133de0;
        }
    }
    ctx->pc = 0x133D80u;
    // 0x133d80: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x133d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x133d84: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x133D84u;
    {
        const bool branch_taken_0x133d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x133d84) {
            ctx->pc = 0x133DC0u;
            goto label_133dc0;
        }
    }
    ctx->pc = 0x133D8Cu;
    // 0x133d8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x133D8Cu;
    {
        const bool branch_taken_0x133d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d8c) {
            ctx->pc = 0x133DA0u;
            goto label_133da0;
        }
    }
    ctx->pc = 0x133D94u;
    // 0x133d94: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x133D94u;
    {
        const bool branch_taken_0x133d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d94) {
            ctx->pc = 0x133E00u;
            goto label_133e00;
        }
    }
    ctx->pc = 0x133D9Cu;
    // 0x133d9c: 0x0  nop
    ctx->pc = 0x133d9cu;
    // NOP
label_133da0:
    // 0x133da0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x133da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x133da4: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x133da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x133da8: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x133da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x133dac: 0xc04d384  jal         func_134E10
    ctx->pc = 0x133DACu;
    SET_GPR_U32(ctx, 31, 0x133DB4u);
    ctx->pc = 0x133DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133DACu;
            // 0x133db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134E10u;
    if (runtime->hasFunction(0x134E10u)) {
        auto targetFn = runtime->lookupFunction(0x134E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DB4u; }
        if (ctx->pc != 0x133DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134E10_0x134e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DB4u; }
        if (ctx->pc != 0x133DB4u) { return; }
    }
    ctx->pc = 0x133DB4u;
label_133db4:
    // 0x133db4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x133DB4u;
    {
        const bool branch_taken_0x133db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133db4) {
            ctx->pc = 0x133E18u;
            goto label_133e18;
        }
    }
    ctx->pc = 0x133DBCu;
    // 0x133dbc: 0x0  nop
    ctx->pc = 0x133dbcu;
    // NOP
label_133dc0:
    // 0x133dc0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x133dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x133dc4: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x133dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x133dc8: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x133dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x133dcc: 0xc04d3f4  jal         func_134FD0
    ctx->pc = 0x133DCCu;
    SET_GPR_U32(ctx, 31, 0x133DD4u);
    ctx->pc = 0x133DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133DCCu;
            // 0x133dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FD0u;
    if (runtime->hasFunction(0x134FD0u)) {
        auto targetFn = runtime->lookupFunction(0x134FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DD4u; }
        if (ctx->pc != 0x133DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134FD0_0x134fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DD4u; }
        if (ctx->pc != 0x133DD4u) { return; }
    }
    ctx->pc = 0x133DD4u;
label_133dd4:
    // 0x133dd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x133DD4u;
    {
        const bool branch_taken_0x133dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133dd4) {
            ctx->pc = 0x133E18u;
            goto label_133e18;
        }
    }
    ctx->pc = 0x133DDCu;
    // 0x133ddc: 0x0  nop
    ctx->pc = 0x133ddcu;
    // NOP
label_133de0:
    // 0x133de0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x133de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x133de4: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x133de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x133de8: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x133de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x133dec: 0xc04d464  jal         func_135190
    ctx->pc = 0x133DECu;
    SET_GPR_U32(ctx, 31, 0x133DF4u);
    ctx->pc = 0x133DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133DECu;
            // 0x133df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135190u;
    if (runtime->hasFunction(0x135190u)) {
        auto targetFn = runtime->lookupFunction(0x135190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DF4u; }
        if (ctx->pc != 0x133DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135190_0x135190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DF4u; }
        if (ctx->pc != 0x133DF4u) { return; }
    }
    ctx->pc = 0x133DF4u;
label_133df4:
    // 0x133df4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x133DF4u;
    {
        const bool branch_taken_0x133df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133df4) {
            ctx->pc = 0x133E18u;
            goto label_133e18;
        }
    }
    ctx->pc = 0x133DFCu;
    // 0x133dfc: 0x0  nop
    ctx->pc = 0x133dfcu;
    // NOP
label_133e00:
    // 0x133e00: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x133e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x133e04: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x133e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x133e08: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x133e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x133e0c: 0xc04d384  jal         func_134E10
    ctx->pc = 0x133E0Cu;
    SET_GPR_U32(ctx, 31, 0x133E14u);
    ctx->pc = 0x133E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133E0Cu;
            // 0x133e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134E10u;
    if (runtime->hasFunction(0x134E10u)) {
        auto targetFn = runtime->lookupFunction(0x134E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E14u; }
        if (ctx->pc != 0x133E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134E10_0x134e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E14u; }
        if (ctx->pc != 0x133E14u) { return; }
    }
    ctx->pc = 0x133E14u;
label_133e14:
    // 0x133e14: 0x0  nop
    ctx->pc = 0x133e14u;
    // NOP
label_133e18:
    // 0x133e18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x133e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x133e1c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x133e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x133e20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x133E20u;
    {
        const bool branch_taken_0x133e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133e20) {
            ctx->pc = 0x133E40u;
            goto label_133e40;
        }
    }
    ctx->pc = 0x133E28u;
    // 0x133e28: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x133e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x133e2c: 0xc62d0028  lwc1        $f13, 0x28($s1)
    ctx->pc = 0x133e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x133e30: 0xc62e002c  lwc1        $f14, 0x2C($s1)
    ctx->pc = 0x133e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x133e34: 0xc04d5a4  jal         func_135690
    ctx->pc = 0x133E34u;
    SET_GPR_U32(ctx, 31, 0x133E3Cu);
    ctx->pc = 0x133E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133E34u;
            // 0x133e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135690u;
    if (runtime->hasFunction(0x135690u)) {
        auto targetFn = runtime->lookupFunction(0x135690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E3Cu; }
        if (ctx->pc != 0x133E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135690_0x135690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E3Cu; }
        if (ctx->pc != 0x133E3Cu) { return; }
    }
    ctx->pc = 0x133E3Cu;
label_133e3c:
    // 0x133e3c: 0x0  nop
    ctx->pc = 0x133e3cu;
    // NOP
label_133e40:
    // 0x133e40: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x133e40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x133e44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x133e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133e48: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x133E48u;
    {
        const bool branch_taken_0x133e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x133e48) {
            ctx->pc = 0x133E98u;
            goto label_133e98;
        }
    }
    ctx->pc = 0x133E50u;
    // 0x133e50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x133e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x133e54: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x133e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x133e58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133E58u;
    {
        const bool branch_taken_0x133e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e58) {
            ctx->pc = 0x133E80u;
            goto label_133e80;
        }
    }
    ctx->pc = 0x133E60u;
    // 0x133e60: 0x8f8280b0  lw          $v0, -0x7F50($gp)
    ctx->pc = 0x133e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934704)));
    // 0x133e64: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x133e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x133e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e6c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x133E6Cu;
    SET_GPR_U32(ctx, 31, 0x133E74u);
    ctx->pc = 0x133E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133E6Cu;
            // 0x133e70: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E74u; }
        if (ctx->pc != 0x133E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E74u; }
        if (ctx->pc != 0x133E74u) { return; }
    }
    ctx->pc = 0x133E74u;
label_133e74:
    // 0x133e74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x133E74u;
    {
        const bool branch_taken_0x133e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e74) {
            ctx->pc = 0x133E98u;
            goto label_133e98;
        }
    }
    ctx->pc = 0x133E7Cu;
    // 0x133e7c: 0x0  nop
    ctx->pc = 0x133e7cu;
    // NOP
label_133e80:
    // 0x133e80: 0x8f8280b0  lw          $v0, -0x7F50($gp)
    ctx->pc = 0x133e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934704)));
    // 0x133e84: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x133e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x133e88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e8c: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x133e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x133e90: 0xc04cd60  jal         func_133580
    ctx->pc = 0x133E90u;
    SET_GPR_U32(ctx, 31, 0x133E98u);
    ctx->pc = 0x133E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133E90u;
            // 0x133e94: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E98u; }
        if (ctx->pc != 0x133E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E98u; }
        if (ctx->pc != 0x133E98u) { return; }
    }
    ctx->pc = 0x133E98u;
label_133e98:
    // 0x133e98: 0x8f8280b4  lw          $v0, -0x7F4C($gp)
    ctx->pc = 0x133e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934708)));
    // 0x133e9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x133E9Cu;
    {
        const bool branch_taken_0x133e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e9c) {
            ctx->pc = 0x133EE8u;
            goto label_133ee8;
        }
    }
    ctx->pc = 0x133EA4u;
    // 0x133ea4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x133EA4u;
    {
        const bool branch_taken_0x133ea4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x133ea4) {
            ctx->pc = 0x133EC8u;
            goto label_133ec8;
        }
    }
    ctx->pc = 0x133EACu;
    // 0x133eac: 0x8f8280b8  lw          $v0, -0x7F48($gp)
    ctx->pc = 0x133eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x133eb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133EB0u;
    {
        const bool branch_taken_0x133eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133eb0) {
            ctx->pc = 0x133EC8u;
            goto label_133ec8;
        }
    }
    ctx->pc = 0x133EB8u;
    // 0x133eb8: 0xc04c6ac  jal         func_131AB0
    ctx->pc = 0x133EB8u;
    SET_GPR_U32(ctx, 31, 0x133EC0u);
    ctx->pc = 0x133EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133EB8u;
            // 0x133ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131AB0u;
    if (runtime->hasFunction(0x131AB0u)) {
        auto targetFn = runtime->lookupFunction(0x131AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133EC0u; }
        if (ctx->pc != 0x133EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131AB0_0x131ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133EC0u; }
        if (ctx->pc != 0x133EC0u) { return; }
    }
    ctx->pc = 0x133EC0u;
label_133ec0:
    // 0x133ec0: 0xe7808010  swc1        $f0, -0x7FF0($gp)
    ctx->pc = 0x133ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934544), bits); }
    // 0x133ec4: 0x0  nop
    ctx->pc = 0x133ec4u;
    // NOP
label_133ec8:
    // 0x133ec8: 0x8f8480b4  lw          $a0, -0x7F4C($gp)
    ctx->pc = 0x133ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934708)));
    // 0x133ecc: 0x8f8580bc  lw          $a1, -0x7F44($gp)
    ctx->pc = 0x133eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934716)));
    // 0x133ed0: 0xc78c8010  lwc1        $f12, -0x7FF0($gp)
    ctx->pc = 0x133ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x133ed4: 0x8f8880b8  lw          $t0, -0x7F48($gp)
    ctx->pc = 0x133ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x133ed8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x133ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133edc: 0xc04c54c  jal         func_131530
    ctx->pc = 0x133EDCu;
    SET_GPR_U32(ctx, 31, 0x133EE4u);
    ctx->pc = 0x133EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133EDCu;
            // 0x133ee0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (runtime->hasFunction(0x131530u)) {
        auto targetFn = runtime->lookupFunction(0x131530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133EE4u; }
        if (ctx->pc != 0x133EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131530_0x131530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133EE4u; }
        if (ctx->pc != 0x133EE4u) { return; }
    }
    ctx->pc = 0x133EE4u;
label_133ee4:
    // 0x133ee4: 0x0  nop
    ctx->pc = 0x133ee4u;
    // NOP
label_133ee8:
    // 0x133ee8: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x133ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x133eec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x133eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133ef0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133EF0u;
    {
        const bool branch_taken_0x133ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x133ef0) {
            ctx->pc = 0x133F00u;
            goto label_133f00;
        }
    }
    ctx->pc = 0x133EF8u;
    // 0x133ef8: 0xc04cefc  jal         func_133BF0
    ctx->pc = 0x133EF8u;
    SET_GPR_U32(ctx, 31, 0x133F00u);
    ctx->pc = 0x133BF0u;
    goto label_133bf0;
    ctx->pc = 0x133F00u;
label_133f00:
    // 0x133f00: 0xc04e1d4  jal         func_138750
    ctx->pc = 0x133F00u;
    SET_GPR_U32(ctx, 31, 0x133F08u);
    ctx->pc = 0x133F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133F00u;
            // 0x133f04: 0x8f8480c0  lw          $a0, -0x7F40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138750u;
    if (runtime->hasFunction(0x138750u)) {
        auto targetFn = runtime->lookupFunction(0x138750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F08u; }
        if (ctx->pc != 0x133F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138750_0x138750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F08u; }
        if (ctx->pc != 0x133F08u) { return; }
    }
    ctx->pc = 0x133F08u;
label_133f08:
    // 0x133f08: 0x8632000a  lh          $s2, 0xA($s1)
    ctx->pc = 0x133f08u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x133f0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133f10: 0x5643ff3e  bnel        $s2, $v1, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x133F10u;
    {
        const bool branch_taken_0x133f10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x133f10) {
            ctx->pc = 0x133F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133F10u;
            // 0x133f14: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133C0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_133c0c;
        }
    }
    ctx->pc = 0x133F18u;
    // 0x133f18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x133f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133f1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133f20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133f28: 0x3e00008  jr          $ra
    ctx->pc = 0x133F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133F28u;
            // 0x133f2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133F30u;
}
