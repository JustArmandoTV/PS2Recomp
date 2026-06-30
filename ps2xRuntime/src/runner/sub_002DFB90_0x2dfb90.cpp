#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DFB90
// Address: 0x2dfb90 - 0x2dfcd0
void sub_002DFB90_0x2dfb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFB90_0x2dfb90");
#endif

    switch (ctx->pc) {
        case 0x2dfbecu: goto label_2dfbec;
        case 0x2dfbf8u: goto label_2dfbf8;
        case 0x2dfc08u: goto label_2dfc08;
        case 0x2dfca0u: goto label_2dfca0;
        case 0x2dfcb0u: goto label_2dfcb0;
        default: break;
    }

    ctx->pc = 0x2dfb90u;

    // 0x2dfb90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2dfb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2dfb94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dfb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dfb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dfb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dfb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dfb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dfba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dfba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfba4: 0x94830050  lhu         $v1, 0x50($a0)
    ctx->pc = 0x2dfba4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2dfba8: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2DFBA8u;
    {
        const bool branch_taken_0x2dfba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFBA8u;
            // 0x2dfbac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfba8) {
            ctx->pc = 0x2DFCBCu;
            goto label_2dfcbc;
        }
    }
    ctx->pc = 0x2DFBB0u;
    // 0x2dfbb0: 0x96260052  lhu         $a2, 0x52($s1)
    ctx->pc = 0x2dfbb0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2dfbb4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2dfbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2dfbb8: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2dfbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2dfbbc: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2dfbbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2dfbc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2dfbc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2dfbc4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2dfbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dfbc8: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x2dfbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2dfbcc: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2dfbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2dfbd0: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x2dfbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2dfbd4: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x2dfbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2dfbd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dfbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dfbdc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dfbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dfbe0: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2dfbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2dfbe4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2DFBE4u;
    SET_GPR_U32(ctx, 31, 0x2DFBECu);
    ctx->pc = 0x2DFBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFBE4u;
            // 0x2dfbe8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBECu; }
        if (ctx->pc != 0x2DFBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBECu; }
        if (ctx->pc != 0x2DFBECu) { return; }
    }
    ctx->pc = 0x2DFBECu;
label_2dfbec:
    // 0x2dfbec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2dfbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dfbf0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2DFBF0u;
    SET_GPR_U32(ctx, 31, 0x2DFBF8u);
    ctx->pc = 0x2DFBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFBF0u;
            // 0x2dfbf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBF8u; }
        if (ctx->pc != 0x2DFBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBF8u; }
        if (ctx->pc != 0x2DFBF8u) { return; }
    }
    ctx->pc = 0x2DFBF8u;
label_2dfbf8:
    // 0x2dfbf8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2dfbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dfbfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dfbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc00: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x2DFC00u;
    SET_GPR_U32(ctx, 31, 0x2DFC08u);
    ctx->pc = 0x2DFC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC00u;
            // 0x2dfc04: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC08u; }
        if (ctx->pc != 0x2DFC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC08u; }
        if (ctx->pc != 0x2DFC08u) { return; }
    }
    ctx->pc = 0x2DFC08u;
label_2dfc08:
    // 0x2dfc08: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2dfc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfc0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2dfc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dfc10: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x2dfc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dfc14: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2dfc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dfc18: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2dfc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfc1c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dfc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2dfc20: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2dfc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfc24: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x2dfc24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2dfc28: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2dfc28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2dfc2c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2dfc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2dfc30: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x2dfc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dfc34: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2dfc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dfc38: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2dfc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dfc3c: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x2dfc3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2dfc40: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x2dfc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dfc44: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2dfc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfc48: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2dfc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfc4c: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x2dfc4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2dfc50: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x2dfc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dfc54: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x2dfc54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2dfc58: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x2dfc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dfc5c: 0xe7a400bc  swc1        $f4, 0xBC($sp)
    ctx->pc = 0x2dfc5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2dfc60: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2dfc60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2dfc64: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x2dfc64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2dfc68: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2dfc68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2dfc6c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2dfc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2dfc70: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2dfc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfc74: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2dfc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2dfc78: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2dfc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfc7c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2dfc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2dfc80: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2dfc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfc84: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2dfc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2dfc88: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x2dfc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfc8c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2dfc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2dfc90: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2dfc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x2dfc94: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x2dfc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x2dfc98: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x2DFC98u;
    SET_GPR_U32(ctx, 31, 0x2DFCA0u);
    ctx->pc = 0x2DFC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC98u;
            // 0x2dfc9c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCA0u; }
        if (ctx->pc != 0x2DFCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCA0u; }
        if (ctx->pc != 0x2DFCA0u) { return; }
    }
    ctx->pc = 0x2DFCA0u;
label_2dfca0:
    // 0x2dfca0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dfca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfca4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dfca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dfca8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2DFCA8u;
    SET_GPR_U32(ctx, 31, 0x2DFCB0u);
    ctx->pc = 0x2DFCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFCA8u;
            // 0x2dfcac: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCB0u; }
        if (ctx->pc != 0x2DFCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCB0u; }
        if (ctx->pc != 0x2DFCB0u) { return; }
    }
    ctx->pc = 0x2DFCB0u;
label_2dfcb0:
    // 0x2dfcb0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2dfcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfcb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dfcb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2dfcb8: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2dfcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_2dfcbc:
    // 0x2dfcbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dfcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfcc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dfcc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfcc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dfcc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfcc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFCC8u;
            // 0x2dfccc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFCD0u;
}
