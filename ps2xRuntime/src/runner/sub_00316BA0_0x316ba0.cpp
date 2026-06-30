#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00316BA0
// Address: 0x316ba0 - 0x316ea0
void sub_00316BA0_0x316ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316BA0_0x316ba0");
#endif

    switch (ctx->pc) {
        case 0x316c0cu: goto label_316c0c;
        case 0x316c44u: goto label_316c44;
        case 0x316c5cu: goto label_316c5c;
        case 0x316c7cu: goto label_316c7c;
        case 0x316c90u: goto label_316c90;
        case 0x316ca4u: goto label_316ca4;
        case 0x316cd0u: goto label_316cd0;
        case 0x316d0cu: goto label_316d0c;
        case 0x316da8u: goto label_316da8;
        case 0x316de0u: goto label_316de0;
        case 0x316df8u: goto label_316df8;
        case 0x316e0cu: goto label_316e0c;
        default: break;
    }

    ctx->pc = 0x316ba0u;

    // 0x316ba0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x316ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x316ba4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x316ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x316ba8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x316ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x316bac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x316bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x316bb0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x316bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x316bb4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x316bb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bb8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x316bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x316bbc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x316bbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bc0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x316bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x316bc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x316bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x316bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x316bcc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x316bccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x316bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x316bd4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x316bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x316bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x316bdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316be0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x316be0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x316be4: 0xa3a800bf  sb          $t0, 0xBF($sp)
    ctx->pc = 0x316be4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 8));
    // 0x316be8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x316be8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x316bec: 0x94be0012  lhu         $fp, 0x12($a1)
    ctx->pc = 0x316becu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x316bf0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x316bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x316bf4: 0xa4a00010  sh          $zero, 0x10($a1)
    ctx->pc = 0x316bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x316bf8: 0x1e1980  sll         $v1, $fp, 6
    ctx->pc = 0x316bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x316bfc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x316bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x316c00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x316c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c04: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x316C04u;
    SET_GPR_U32(ctx, 31, 0x316C0Cu);
    ctx->pc = 0x316C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316C04u;
            // 0x316c08: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C0Cu; }
        if (ctx->pc != 0x316C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C0Cu; }
        if (ctx->pc != 0x316C0Cu) { return; }
    }
    ctx->pc = 0x316C0Cu;
label_316c0c:
    // 0x316c0c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x316c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x316c10: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x316c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x316c14: 0xc440be58  lwc1        $f0, -0x41A8($v0)
    ctx->pc = 0x316c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316c18: 0x33d0ffff  andi        $s0, $fp, 0xFFFF
    ctx->pc = 0x316c18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x316c1c: 0xc474be58  lwc1        $f20, -0x41A8($v1)
    ctx->pc = 0x316c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294950488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x316c20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x316c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x316c24: 0x12020058  beq         $s0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x316C24u;
    {
        const bool branch_taken_0x316c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x316C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316C24u;
            // 0x316c28: 0xe7a000fc  swc1        $f0, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c24) {
            ctx->pc = 0x316D88u;
            goto label_316d88;
        }
    }
    ctx->pc = 0x316C2Cu;
    // 0x316c2c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x316c2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x316c30: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x316c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x316c34: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x316c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x316c38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x316c3c: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x316C3Cu;
    SET_GPR_U32(ctx, 31, 0x316C44u);
    ctx->pc = 0x316C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316C3Cu;
            // 0x316c40: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C44u; }
        if (ctx->pc != 0x316C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C44u; }
        if (ctx->pc != 0x316C44u) { return; }
    }
    ctx->pc = 0x316C44u;
label_316c44:
    // 0x316c44: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x316c44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x316c48: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x316c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x316c4c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x316c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x316c50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x316c54: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x316C54u;
    SET_GPR_U32(ctx, 31, 0x316C5Cu);
    ctx->pc = 0x316C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316C54u;
            // 0x316c58: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C5Cu; }
        if (ctx->pc != 0x316C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C5Cu; }
        if (ctx->pc != 0x316C5Cu) { return; }
    }
    ctx->pc = 0x316C5Cu;
label_316c5c:
    // 0x316c5c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x316c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316c60: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x316c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x316c64: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x316c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x316c68: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x316c68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x316c6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x316c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x316c70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x316c74: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x316C74u;
    SET_GPR_U32(ctx, 31, 0x316C7Cu);
    ctx->pc = 0x316C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316C74u;
            // 0x316c78: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C7Cu; }
        if (ctx->pc != 0x316C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C7Cu; }
        if (ctx->pc != 0x316C7Cu) { return; }
    }
    ctx->pc = 0x316C7Cu;
label_316c7c:
    // 0x316c7c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x316c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316c80: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x316c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x316c84: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x316c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x316c88: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x316C88u;
    SET_GPR_U32(ctx, 31, 0x316C90u);
    ctx->pc = 0x316C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316C88u;
            // 0x316c8c: 0xe7a000ec  swc1        $f0, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C90u; }
        if (ctx->pc != 0x316C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C90u; }
        if (ctx->pc != 0x316C90u) { return; }
    }
    ctx->pc = 0x316C90u;
label_316c90:
    // 0x316c90: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x316C90u;
    {
        const bool branch_taken_0x316c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316c90) {
            ctx->pc = 0x316C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316C90u;
            // 0x316c94: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x316CB0u;
            goto label_316cb0;
        }
    }
    ctx->pc = 0x316C98u;
    // 0x316c98: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x316c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x316c9c: 0xc0527c0  jal         func_149F00
    ctx->pc = 0x316C9Cu;
    SET_GPR_U32(ctx, 31, 0x316CA4u);
    ctx->pc = 0x316CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316C9Cu;
            // 0x316ca0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149F00u;
    if (runtime->hasFunction(0x149F00u)) {
        auto targetFn = runtime->lookupFunction(0x149F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CA4u; }
        if (ctx->pc != 0x316CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149F00_0x149f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CA4u; }
        if (ctx->pc != 0x316CA4u) { return; }
    }
    ctx->pc = 0x316CA4u;
label_316ca4:
    // 0x316ca4: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x316CA4u;
    {
        const bool branch_taken_0x316ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316ca4) {
            ctx->pc = 0x316CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316CA4u;
            // 0x316ca8: 0xa6a00010  sh          $zero, 0x10($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316D8Cu;
            goto label_316d8c;
        }
    }
    ctx->pc = 0x316CACu;
    // 0x316cac: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x316cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316cb0:
    // 0x316cb0: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x316cb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x316cb4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x316cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x316cb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x316cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316cbc: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x316cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x316cc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x316cc4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x316cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316cc8: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x316CC8u;
    SET_GPR_U32(ctx, 31, 0x316CD0u);
    ctx->pc = 0x316CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316CC8u;
            // 0x316ccc: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CD0u; }
        if (ctx->pc != 0x316CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CD0u; }
        if (ctx->pc != 0x316CD0u) { return; }
    }
    ctx->pc = 0x316CD0u;
label_316cd0:
    // 0x316cd0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x316cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x316cd4: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x316CD4u;
    {
        const bool branch_taken_0x316cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x316cd4) {
            ctx->pc = 0x316CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316CD4u;
            // 0x316cd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316D78u;
            goto label_316d78;
        }
    }
    ctx->pc = 0x316CDCu;
    // 0x316cdc: 0x93a200bf  lbu         $v0, 0xBF($sp)
    ctx->pc = 0x316cdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 191)));
    // 0x316ce0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x316CE0u;
    {
        const bool branch_taken_0x316ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316ce0) {
            ctx->pc = 0x316D74u;
            goto label_316d74;
        }
    }
    ctx->pc = 0x316CE8u;
    // 0x316ce8: 0x96450002  lhu         $a1, 0x2($s2)
    ctx->pc = 0x316ce8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x316cec: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x316cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x316cf0: 0xa6a00010  sh          $zero, 0x10($s5)
    ctx->pc = 0x316cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x316cf4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x316cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x316cf8: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x316cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x316cfc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x316cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x316d00: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x316d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x316d04: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x316d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316d08: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x316d08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_316d0c:
    // 0x316d0c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x316D0Cu;
    {
        const bool branch_taken_0x316d0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x316d0c) {
            ctx->pc = 0x316D38u;
            goto label_316d38;
        }
    }
    ctx->pc = 0x316D14u;
    // 0x316d14: 0xa6a60012  sh          $a2, 0x12($s5)
    ctx->pc = 0x316d14u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 18), (uint16_t)GPR_U32(ctx, 6));
    // 0x316d18: 0x92a20010  lbu         $v0, 0x10($s5)
    ctx->pc = 0x316d18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x316d1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x316d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x316d20: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x316d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x316d24: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x316d24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x316d28: 0x96a20010  lhu         $v0, 0x10($s5)
    ctx->pc = 0x316d28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x316d2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x316d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x316d30: 0xa6a20010  sh          $v0, 0x10($s5)
    ctx->pc = 0x316d30u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x316d34: 0x0  nop
    ctx->pc = 0x316d34u;
    // NOP
label_316d38:
    // 0x316d38: 0x24e7ffc0  addiu       $a3, $a3, -0x40
    ctx->pc = 0x316d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
    // 0x316d3c: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x316d3cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x316d40: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x316d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x316d44: 0x96a30010  lhu         $v1, 0x10($s5)
    ctx->pc = 0x316d44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x316d48: 0xc0102a  slt         $v0, $a2, $zero
    ctx->pc = 0x316d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x316d4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x316d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x316d50: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x316d50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x316d54: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x316d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x316d58: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x316d58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x316d5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x316d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x316d60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x316d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x316d64: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x316D64u;
    {
        const bool branch_taken_0x316d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316d64) {
            ctx->pc = 0x316D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316D64u;
            // 0x316d68: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316d0c;
        }
    }
    ctx->pc = 0x316D6Cu;
    // 0x316d6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x316D6Cu;
    {
        const bool branch_taken_0x316d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316D6Cu;
            // 0x316d70: 0x64170001  daddiu      $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316d6c) {
            ctx->pc = 0x316D80u;
            goto label_316d80;
        }
    }
    ctx->pc = 0x316D74u;
label_316d74:
    // 0x316d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316d78:
    // 0x316d78: 0xa6a20010  sh          $v0, 0x10($s5)
    ctx->pc = 0x316d78u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x316d7c: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x316d7cu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_316d80:
    // 0x316d80: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x316D80u;
    {
        const bool branch_taken_0x316d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316d80) {
            ctx->pc = 0x316E58u;
            goto label_316e58;
        }
    }
    ctx->pc = 0x316D88u;
label_316d88:
    // 0x316d88: 0xa6a00010  sh          $zero, 0x10($s5)
    ctx->pc = 0x316d88u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 0));
label_316d8c:
    // 0x316d8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x316d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x316d90: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x316d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x316d94: 0x282b024  and         $s6, $s4, $v0
    ctx->pc = 0x316d94u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x316d98: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x316d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x316d9c: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x316d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x316da0: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x316da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x316da4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x316da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316da8:
    // 0x316da8: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x316da8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x316dac: 0x2831024  and         $v0, $s4, $v1
    ctx->pc = 0x316dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x316db0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x316DB0u;
    {
        const bool branch_taken_0x316db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316db0) {
            ctx->pc = 0x316E38u;
            goto label_316e38;
        }
    }
    ctx->pc = 0x316DB8u;
    // 0x316db8: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x316DB8u;
    {
        const bool branch_taken_0x316db8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x316db8) {
            ctx->pc = 0x316DC8u;
            goto label_316dc8;
        }
    }
    ctx->pc = 0x316DC0u;
    // 0x316dc0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x316DC0u;
    {
        const bool branch_taken_0x316dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x316dc0) {
            ctx->pc = 0x316E38u;
            goto label_316e38;
        }
    }
    ctx->pc = 0x316DC8u;
label_316dc8:
    // 0x316dc8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x316dc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x316dcc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x316dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x316dd0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x316dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x316dd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x316dd8: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x316DD8u;
    SET_GPR_U32(ctx, 31, 0x316DE0u);
    ctx->pc = 0x316DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316DD8u;
            // 0x316ddc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316DE0u; }
        if (ctx->pc != 0x316DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316DE0u; }
        if (ctx->pc != 0x316DE0u) { return; }
    }
    ctx->pc = 0x316DE0u;
label_316de0:
    // 0x316de0: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x316de0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x316de4: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x316de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x316de8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x316de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x316dec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x316df0: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x316DF0u;
    SET_GPR_U32(ctx, 31, 0x316DF8u);
    ctx->pc = 0x316DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316DF0u;
            // 0x316df4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316DF8u; }
        if (ctx->pc != 0x316DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316DF8u; }
        if (ctx->pc != 0x316DF8u) { return; }
    }
    ctx->pc = 0x316DF8u;
label_316df8:
    // 0x316df8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x316df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316dfc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x316dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x316e00: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x316e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x316e04: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x316E04u;
    SET_GPR_U32(ctx, 31, 0x316E0Cu);
    ctx->pc = 0x316E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316E04u;
            // 0x316e08: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316E0Cu; }
        if (ctx->pc != 0x316E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316E0Cu; }
        if (ctx->pc != 0x316E0Cu) { return; }
    }
    ctx->pc = 0x316E0Cu;
label_316e0c:
    // 0x316e0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x316E0Cu;
    {
        const bool branch_taken_0x316e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316e0c) {
            ctx->pc = 0x316E38u;
            goto label_316e38;
        }
    }
    ctx->pc = 0x316E14u;
    // 0x316e14: 0xa6b30012  sh          $s3, 0x12($s5)
    ctx->pc = 0x316e14u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 18), (uint16_t)GPR_U32(ctx, 19));
    // 0x316e18: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x316e18u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x316e1c: 0x92a20010  lbu         $v0, 0x10($s5)
    ctx->pc = 0x316e1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x316e20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x316e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x316e24: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x316e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x316e28: 0xa4530000  sh          $s3, 0x0($v0)
    ctx->pc = 0x316e28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x316e2c: 0x96a20010  lhu         $v0, 0x10($s5)
    ctx->pc = 0x316e2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x316e30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x316e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x316e34: 0xa6a20010  sh          $v0, 0x10($s5)
    ctx->pc = 0x316e34u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 2));
label_316e38:
    // 0x316e38: 0x96a30010  lhu         $v1, 0x10($s5)
    ctx->pc = 0x316e38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x316e3c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x316e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x316e40: 0x260102a  slt         $v0, $s3, $zero
    ctx->pc = 0x316e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x316e44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x316e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x316e48: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x316e48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x316e4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x316e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x316e50: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x316E50u;
    {
        const bool branch_taken_0x316e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316E50u;
            // 0x316e54: 0x2652ffc0  addiu       $s2, $s2, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e50) {
            ctx->pc = 0x316DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316da8;
        }
    }
    ctx->pc = 0x316E58u;
label_316e58:
    // 0x316e58: 0x96a20012  lhu         $v0, 0x12($s5)
    ctx->pc = 0x316e58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x316e5c: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x316E5Cu;
    {
        const bool branch_taken_0x316e5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x316e5c) {
            ctx->pc = 0x316E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316E5Cu;
            // 0x316e60: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316E6Cu;
            goto label_316e6c;
        }
    }
    ctx->pc = 0x316E64u;
    // 0x316e64: 0xa6be0014  sh          $fp, 0x14($s5)
    ctx->pc = 0x316e64u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 30));
    // 0x316e68: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x316e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_316e6c:
    // 0x316e6c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x316e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x316e70: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x316e70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x316e74: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x316e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x316e78: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x316e78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x316e7c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x316e7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316e80: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x316e80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316e84: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x316e84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316e88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x316e88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316e8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x316e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316e90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x316e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316e94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316e98: 0x3e00008  jr          $ra
    ctx->pc = 0x316E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316E98u;
            // 0x316e9c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316EA0u;
}
