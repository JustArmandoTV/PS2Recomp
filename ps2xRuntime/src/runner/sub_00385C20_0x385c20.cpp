#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00385C20
// Address: 0x385c20 - 0x385de0
void sub_00385C20_0x385c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385C20_0x385c20");
#endif

    switch (ctx->pc) {
        case 0x385cc8u: goto label_385cc8;
        case 0x385cdcu: goto label_385cdc;
        case 0x385cf0u: goto label_385cf0;
        case 0x385cfcu: goto label_385cfc;
        case 0x385d0cu: goto label_385d0c;
        case 0x385d1cu: goto label_385d1c;
        case 0x385d24u: goto label_385d24;
        case 0x385d34u: goto label_385d34;
        case 0x385d44u: goto label_385d44;
        case 0x385d50u: goto label_385d50;
        case 0x385d64u: goto label_385d64;
        case 0x385d74u: goto label_385d74;
        case 0x385d8cu: goto label_385d8c;
        case 0x385da4u: goto label_385da4;
        case 0x385dbcu: goto label_385dbc;
        default: break;
    }

    ctx->pc = 0x385c20u;

    // 0x385c20: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x385c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x385c24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x385c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x385c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x385c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x385c2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x385c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x385c30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x385c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x385c34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x385c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x385c38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x385c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x385c3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x385c3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x385c40: 0xc4810200  lwc1        $f1, 0x200($a0)
    ctx->pc = 0x385c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385c44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x385c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x385c48: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
    ctx->pc = 0x385C48u;
    {
        const bool branch_taken_0x385c48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x385C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385C48u;
            // 0x385c4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385c48) {
            ctx->pc = 0x385DBCu;
            goto label_385dbc;
        }
    }
    ctx->pc = 0x385C50u;
    // 0x385c50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x385c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x385c54: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x385c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x385c58: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x385c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x385c5c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x385c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x385c60: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x385c60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x385c64: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x385c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x385c68: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x385c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x385c6c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x385c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x385c70: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x385c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385c74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x385c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x385c78: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x385c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x385c7c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x385c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x385c80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x385c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x385c84: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x385c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x385c88: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x385c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x385c8c: 0xc6250200  lwc1        $f5, 0x200($s1)
    ctx->pc = 0x385c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x385c90: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x385c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x385c94: 0xc4e31b20  lwc1        $f3, 0x1B20($a3)
    ctx->pc = 0x385c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 6944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385c98: 0xc4c21b24  lwc1        $f2, 0x1B24($a2)
    ctx->pc = 0x385c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 6948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x385c9c: 0x46062943  div.s       $f5, $f5, $f6
    ctx->pc = 0x385c9cu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[6];
    // 0x385ca0: 0x261203a0  addiu       $s2, $s0, 0x3A0
    ctx->pc = 0x385ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
    // 0x385ca4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x385ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385ca8: 0xc4611b28  lwc1        $f1, 0x1B28($v1)
    ctx->pc = 0x385ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385cac: 0xc4401b2c  lwc1        $f0, 0x1B2C($v0)
    ctx->pc = 0x385cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385cb0: 0x46052501  sub.s       $f20, $f4, $f5
    ctx->pc = 0x385cb0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x385cb4: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x385cb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x385cb8: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x385cb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x385cbc: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x385cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x385cc0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x385CC0u;
    SET_GPR_U32(ctx, 31, 0x385CC8u);
    ctx->pc = 0x385CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385CC0u;
            // 0x385cc4: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385CC8u; }
        if (ctx->pc != 0x385CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385CC8u; }
        if (ctx->pc != 0x385CC8u) { return; }
    }
    ctx->pc = 0x385CC8u;
label_385cc8:
    // 0x385cc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x385cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385ccc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x385cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x385cd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x385cd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x385cd4: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x385CD4u;
    SET_GPR_U32(ctx, 31, 0x385CDCu);
    ctx->pc = 0x385CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385CD4u;
            // 0x385cd8: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385CDCu; }
        if (ctx->pc != 0x385CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385CDCu; }
        if (ctx->pc != 0x385CDCu) { return; }
    }
    ctx->pc = 0x385CDCu;
label_385cdc:
    // 0x385cdc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x385cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x385ce0: 0x262501f0  addiu       $a1, $s1, 0x1F0
    ctx->pc = 0x385ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x385ce4: 0x26130340  addiu       $s3, $s0, 0x340
    ctx->pc = 0x385ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x385ce8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x385CE8u;
    SET_GPR_U32(ctx, 31, 0x385CF0u);
    ctx->pc = 0x385CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385CE8u;
            // 0x385cec: 0x26120890  addiu       $s2, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385CF0u; }
        if (ctx->pc != 0x385CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385CF0u; }
        if (ctx->pc != 0x385CF0u) { return; }
    }
    ctx->pc = 0x385CF0u;
label_385cf0:
    // 0x385cf0: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x385cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x385cf4: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x385CF4u;
    SET_GPR_U32(ctx, 31, 0x385CFCu);
    ctx->pc = 0x385CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385CF4u;
            // 0x385cf8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385CFCu; }
        if (ctx->pc != 0x385CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385CFCu; }
        if (ctx->pc != 0x385CFCu) { return; }
    }
    ctx->pc = 0x385CFCu;
label_385cfc:
    // 0x385cfc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x385cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x385d00: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x385d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x385d04: 0xc04cca0  jal         func_133280
    ctx->pc = 0x385D04u;
    SET_GPR_U32(ctx, 31, 0x385D0Cu);
    ctx->pc = 0x385D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385D04u;
            // 0x385d08: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D0Cu; }
        if (ctx->pc != 0x385D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D0Cu; }
        if (ctx->pc != 0x385D0Cu) { return; }
    }
    ctx->pc = 0x385D0Cu;
label_385d0c:
    // 0x385d0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x385d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385d10: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x385d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x385d14: 0xc04cc90  jal         func_133240
    ctx->pc = 0x385D14u;
    SET_GPR_U32(ctx, 31, 0x385D1Cu);
    ctx->pc = 0x385D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385D14u;
            // 0x385d18: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D1Cu; }
        if (ctx->pc != 0x385D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D1Cu; }
        if (ctx->pc != 0x385D1Cu) { return; }
    }
    ctx->pc = 0x385D1Cu;
label_385d1c:
    // 0x385d1c: 0xc04cc14  jal         func_133050
    ctx->pc = 0x385D1Cu;
    SET_GPR_U32(ctx, 31, 0x385D24u);
    ctx->pc = 0x385D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385D1Cu;
            // 0x385d20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D24u; }
        if (ctx->pc != 0x385D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D24u; }
        if (ctx->pc != 0x385D24u) { return; }
    }
    ctx->pc = 0x385D24u;
label_385d24:
    // 0x385d24: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x385d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
    // 0x385d28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x385d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385d2c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x385D2Cu;
    SET_GPR_U32(ctx, 31, 0x385D34u);
    ctx->pc = 0x385D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385D2Cu;
            // 0x385d30: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D34u; }
        if (ctx->pc != 0x385D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D34u; }
        if (ctx->pc != 0x385D34u) { return; }
    }
    ctx->pc = 0x385D34u;
label_385d34:
    // 0x385d34: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x385d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x385d38: 0x260402e0  addiu       $a0, $s0, 0x2E0
    ctx->pc = 0x385d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x385d3c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x385D3Cu;
    SET_GPR_U32(ctx, 31, 0x385D44u);
    ctx->pc = 0x385D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385D3Cu;
            // 0x385d40: 0x24a55d50  addiu       $a1, $a1, 0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D44u; }
        if (ctx->pc != 0x385D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D44u; }
        if (ctx->pc != 0x385D44u) { return; }
    }
    ctx->pc = 0x385D44u;
label_385d44:
    // 0x385d44: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x385d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x385d48: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x385D48u;
    SET_GPR_U32(ctx, 31, 0x385D50u);
    ctx->pc = 0x385D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385D48u;
            // 0x385d4c: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D50u; }
        if (ctx->pc != 0x385D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D50u; }
        if (ctx->pc != 0x385D50u) { return; }
    }
    ctx->pc = 0x385D50u;
label_385d50:
    // 0x385d50: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x385d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x385d54: 0x26040840  addiu       $a0, $s0, 0x840
    ctx->pc = 0x385d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x385d58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x385d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x385d5c: 0xc0c6250  jal         func_318940
    ctx->pc = 0x385D5Cu;
    SET_GPR_U32(ctx, 31, 0x385D64u);
    ctx->pc = 0x385D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385D5Cu;
            // 0x385d60: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D64u; }
        if (ctx->pc != 0x385D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D64u; }
        if (ctx->pc != 0x385D64u) { return; }
    }
    ctx->pc = 0x385D64u;
label_385d64:
    // 0x385d64: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x385d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x385d68: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x385d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x385d6c: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x385D6Cu;
    SET_GPR_U32(ctx, 31, 0x385D74u);
    ctx->pc = 0x385D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385D6Cu;
            // 0x385d70: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D74u; }
        if (ctx->pc != 0x385D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D74u; }
        if (ctx->pc != 0x385D74u) { return; }
    }
    ctx->pc = 0x385D74u;
label_385d74:
    // 0x385d74: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x385d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385d78: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x385d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    // 0x385d7c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x385d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x385d80: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x385d80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x385d84: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x385D84u;
    SET_GPR_U32(ctx, 31, 0x385D8Cu);
    ctx->pc = 0x385D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385D84u;
            // 0x385d88: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D8Cu; }
        if (ctx->pc != 0x385D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385D8Cu; }
        if (ctx->pc != 0x385D8Cu) { return; }
    }
    ctx->pc = 0x385D8Cu;
label_385d8c:
    // 0x385d8c: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x385d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x385d90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x385d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x385d94: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x385d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x385d98: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x385d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x385d9c: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x385D9Cu;
    SET_GPR_U32(ctx, 31, 0x385DA4u);
    ctx->pc = 0x385DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385D9Cu;
            // 0x385da0: 0x2644009c  addiu       $a0, $s2, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385DA4u; }
        if (ctx->pc != 0x385DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385DA4u; }
        if (ctx->pc != 0x385DA4u) { return; }
    }
    ctx->pc = 0x385DA4u;
label_385da4:
    // 0x385da4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x385da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x385da8: 0x26060560  addiu       $a2, $s0, 0x560
    ctx->pc = 0x385da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x385dac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x385dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x385db0: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x385db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x385db4: 0xc0c6250  jal         func_318940
    ctx->pc = 0x385DB4u;
    SET_GPR_U32(ctx, 31, 0x385DBCu);
    ctx->pc = 0x385DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385DB4u;
            // 0x385db8: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385DBCu; }
        if (ctx->pc != 0x385DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385DBCu; }
        if (ctx->pc != 0x385DBCu) { return; }
    }
    ctx->pc = 0x385DBCu;
label_385dbc:
    // 0x385dbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x385dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x385dc0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x385dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x385dc4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x385dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x385dc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x385dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x385dcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x385dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x385dd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x385dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x385DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385DD4u;
            // 0x385dd8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385DDCu;
    // 0x385ddc: 0x0  nop
    ctx->pc = 0x385ddcu;
    // NOP
}
