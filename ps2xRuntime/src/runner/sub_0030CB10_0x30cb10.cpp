#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030CB10
// Address: 0x30cb10 - 0x30ce90
void sub_0030CB10_0x30cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CB10_0x30cb10");
#endif

    switch (ctx->pc) {
        case 0x30cb54u: goto label_30cb54;
        case 0x30cb6cu: goto label_30cb6c;
        case 0x30cc44u: goto label_30cc44;
        case 0x30cc54u: goto label_30cc54;
        case 0x30cc80u: goto label_30cc80;
        case 0x30cc9cu: goto label_30cc9c;
        case 0x30ccb4u: goto label_30ccb4;
        case 0x30ccc4u: goto label_30ccc4;
        case 0x30ccd4u: goto label_30ccd4;
        case 0x30cd68u: goto label_30cd68;
        case 0x30cd7cu: goto label_30cd7c;
        case 0x30cd98u: goto label_30cd98;
        case 0x30cdd0u: goto label_30cdd0;
        case 0x30ce08u: goto label_30ce08;
        case 0x30ce10u: goto label_30ce10;
        case 0x30ce20u: goto label_30ce20;
        case 0x30ce28u: goto label_30ce28;
        case 0x30ce3cu: goto label_30ce3c;
        case 0x30ce54u: goto label_30ce54;
        case 0x30ce5cu: goto label_30ce5c;
        case 0x30ce64u: goto label_30ce64;
        default: break;
    }

    ctx->pc = 0x30cb10u;

    // 0x30cb10: 0x27bdf710  addiu       $sp, $sp, -0x8F0
    ctx->pc = 0x30cb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965008));
    // 0x30cb14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30cb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30cb18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30cb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30cb1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30cb20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30cb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30cb24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30cb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30cb28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30cb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30cb2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30cb30: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x30cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x30cb34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30cb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb38: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x30CB38u;
    {
        const bool branch_taken_0x30cb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB38u;
            // 0x30cb3c: 0x26110080  addiu       $s1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb38) {
            ctx->pc = 0x30CE64u;
            goto label_30ce64;
        }
    }
    ctx->pc = 0x30CB40u;
    // 0x30cb40: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30cb44: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CB44u;
    {
        const bool branch_taken_0x30cb44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cb44) {
            ctx->pc = 0x30CB5Cu;
            goto label_30cb5c;
        }
    }
    ctx->pc = 0x30CB4Cu;
    // 0x30cb4c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x30CB4Cu;
    SET_GPR_U32(ctx, 31, 0x30CB54u);
    ctx->pc = 0x30CB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB4Cu;
            // 0x30cb50: 0x27a408b0  addiu       $a0, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB54u; }
        if (ctx->pc != 0x30CB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB54u; }
        if (ctx->pc != 0x30CB54u) { return; }
    }
    ctx->pc = 0x30CB54u;
label_30cb54:
    // 0x30cb54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30CB54u;
    {
        const bool branch_taken_0x30cb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cb54) {
            ctx->pc = 0x30CB6Cu;
            goto label_30cb6c;
        }
    }
    ctx->pc = 0x30CB5Cu;
label_30cb5c:
    // 0x30cb5c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x30cb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x30cb60: 0x27a408b0  addiu       $a0, $sp, 0x8B0
    ctx->pc = 0x30cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
    // 0x30cb64: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x30CB64u;
    SET_GPR_U32(ctx, 31, 0x30CB6Cu);
    ctx->pc = 0x30CB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB64u;
            // 0x30cb68: 0x24a5bbb0  addiu       $a1, $a1, -0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB6Cu; }
        if (ctx->pc != 0x30CB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CB6Cu; }
        if (ctx->pc != 0x30CB6Cu) { return; }
    }
    ctx->pc = 0x30CB6Cu;
label_30cb6c:
    // 0x30cb6c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30cb70: 0x8e0600cc  lw          $a2, 0xCC($s0)
    ctx->pc = 0x30cb70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x30cb74: 0xc443f540  lwc1        $f3, -0xAC0($v0)
    ctx->pc = 0x30cb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30cb78: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30cb7c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x30cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x30cb80: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30cb84: 0x8cd40008  lw          $s4, 0x8($a2)
    ctx->pc = 0x30cb84u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x30cb88: 0xc462f544  lwc1        $f2, -0xABC($v1)
    ctx->pc = 0x30cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30cb8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30cb90: 0x24a5bbb0  addiu       $a1, $a1, -0x4450
    ctx->pc = 0x30cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
    // 0x30cb94: 0xc441f548  lwc1        $f1, -0xAB8($v0)
    ctx->pc = 0x30cb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cb98: 0x27b308b0  addiu       $s3, $sp, 0x8B0
    ctx->pc = 0x30cb98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
    // 0x30cb9c: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x30cb9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x30cba0: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x30cba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x30cba4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30cba8: 0xc440f54c  lwc1        $f0, -0xAB4($v0)
    ctx->pc = 0x30cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cbac: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x30cbacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x30cbb0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30cbb4: 0xc443f550  lwc1        $f3, -0xAB0($v0)
    ctx->pc = 0x30cbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30cbb8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x30cbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x30cbbc: 0xc4c40020  lwc1        $f4, 0x20($a2)
    ctx->pc = 0x30cbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30cbc0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30cbc4: 0xc442f554  lwc1        $f2, -0xAAC($v0)
    ctx->pc = 0x30cbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30cbc8: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x30cbc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x30cbcc: 0xc4c40024  lwc1        $f4, 0x24($a2)
    ctx->pc = 0x30cbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30cbd0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30cbd4: 0xc441f558  lwc1        $f1, -0xAA8($v0)
    ctx->pc = 0x30cbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cbd8: 0xe7a400f4  swc1        $f4, 0xF4($sp)
    ctx->pc = 0x30cbd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x30cbdc: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x30cbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30cbe0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30cbe4: 0xc440f55c  lwc1        $f0, -0xAA4($v0)
    ctx->pc = 0x30cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cbe8: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x30cbe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x30cbec: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x30cbecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x30cbf0: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x30cbf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x30cbf4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x30cbf8: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x30cbf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x30cbfc: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x30cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x30cc00: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x30cc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x30cc04: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x30cc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cc08: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x30cc0c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x30cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x30cc10: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x30cc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x30cc14: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x30cc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cc18: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x30cc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x30cc1c: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x30cc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cc20: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x30cc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x30cc24: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30cc28: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30cc2c: 0x84d50004  lh          $s5, 0x4($a2)
    ctx->pc = 0x30cc2cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30cc30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30cc34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30cc38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30cc3c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x30CC3Cu;
    SET_GPR_U32(ctx, 31, 0x30CC44u);
    ctx->pc = 0x30CC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC3Cu;
            // 0x30cc40: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC44u; }
        if (ctx->pc != 0x30CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC44u; }
        if (ctx->pc != 0x30CC44u) { return; }
    }
    ctx->pc = 0x30CC44u;
label_30cc44:
    // 0x30cc44: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x30cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x30cc48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30cc4c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x30CC4Cu;
    SET_GPR_U32(ctx, 31, 0x30CC54u);
    ctx->pc = 0x30CC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC4Cu;
            // 0x30cc50: 0x24a5bbb0  addiu       $a1, $a1, -0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC54u; }
        if (ctx->pc != 0x30CC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC54u; }
        if (ctx->pc != 0x30CC54u) { return; }
    }
    ctx->pc = 0x30CC54u;
label_30cc54:
    // 0x30cc54: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x30cc54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30cc58: 0x50e0000b  beql        $a3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x30CC58u;
    {
        const bool branch_taken_0x30cc58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cc58) {
            ctx->pc = 0x30CC5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC58u;
            // 0x30cc5c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CC88u;
            goto label_30cc88;
        }
    }
    ctx->pc = 0x30CC60u;
    // 0x30cc60: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x30cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30cc64: 0x15343c  dsll32      $a2, $s5, 16
    ctx->pc = 0x30cc64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 16));
    // 0x30cc68: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30cc6c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x30cc6cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x30cc70: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x30cc70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc74: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cc78: 0xc05161c  jal         func_145870
    ctx->pc = 0x30CC78u;
    SET_GPR_U32(ctx, 31, 0x30CC80u);
    ctx->pc = 0x30CC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC78u;
            // 0x30cc7c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145870u;
    if (runtime->hasFunction(0x145870u)) {
        auto targetFn = runtime->lookupFunction(0x145870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC80u; }
        if (ctx->pc != 0x30CC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145870_0x145870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC80u; }
        if (ctx->pc != 0x30CC80u) { return; }
    }
    ctx->pc = 0x30CC80u;
label_30cc80:
    // 0x30cc80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CC80u;
    {
        const bool branch_taken_0x30cc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC80u;
            // 0x30cc84: 0x27b300a0  addiu       $s3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc80) {
            ctx->pc = 0x30CCA0u;
            goto label_30cca0;
        }
    }
    ctx->pc = 0x30CC88u;
label_30cc88:
    // 0x30cc88: 0x15343c  dsll32      $a2, $s5, 16
    ctx->pc = 0x30cc88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 16));
    // 0x30cc8c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x30cc8cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x30cc90: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x30cc90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc94: 0xc0514f8  jal         func_1453E0
    ctx->pc = 0x30CC94u;
    SET_GPR_U32(ctx, 31, 0x30CC9Cu);
    ctx->pc = 0x30CC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CC94u;
            // 0x30cc98: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1453E0u;
    if (runtime->hasFunction(0x1453E0u)) {
        auto targetFn = runtime->lookupFunction(0x1453E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC9Cu; }
        if (ctx->pc != 0x30CC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001453E0_0x1453e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CC9Cu; }
        if (ctx->pc != 0x30CC9Cu) { return; }
    }
    ctx->pc = 0x30CC9Cu;
label_30cc9c:
    // 0x30cc9c: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x30cc9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30cca0:
    // 0x30cca0: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x30cca0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x30cca4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30cca8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30cca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ccac: 0xc04cca0  jal         func_133280
    ctx->pc = 0x30CCACu;
    SET_GPR_U32(ctx, 31, 0x30CCB4u);
    ctx->pc = 0x30CCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCACu;
            // 0x30ccb0: 0x24c6bbf0  addiu       $a2, $a2, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCB4u; }
        if (ctx->pc != 0x30CCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCB4u; }
        if (ctx->pc != 0x30CCB4u) { return; }
    }
    ctx->pc = 0x30CCB4u;
label_30ccb4:
    // 0x30ccb4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x30ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30ccb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30ccb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ccbc: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x30CCBCu;
    SET_GPR_U32(ctx, 31, 0x30CCC4u);
    ctx->pc = 0x30CCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCBCu;
            // 0x30ccc0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCC4u; }
        if (ctx->pc != 0x30CCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCC4u; }
        if (ctx->pc != 0x30CCC4u) { return; }
    }
    ctx->pc = 0x30CCC4u;
label_30ccc4:
    // 0x30ccc4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x30ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x30ccc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30ccc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cccc: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x30CCCCu;
    SET_GPR_U32(ctx, 31, 0x30CCD4u);
    ctx->pc = 0x30CCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCCCu;
            // 0x30ccd0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCD4u; }
        if (ctx->pc != 0x30CCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CCD4u; }
        if (ctx->pc != 0x30CCD4u) { return; }
    }
    ctx->pc = 0x30CCD4u;
label_30ccd4:
    // 0x30ccd4: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x30ccd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x30ccd8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30ccd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x30ccdc: 0x5060003d  beql        $v1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x30CCDCu;
    {
        const bool branch_taken_0x30ccdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ccdc) {
            ctx->pc = 0x30CCE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CCDCu;
            // 0x30cce0: 0x86030066  lh          $v1, 0x66($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CDD4u;
            goto label_30cdd4;
        }
    }
    ctx->pc = 0x30CCE4u;
    // 0x30cce4: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x30cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x30cce8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x30ccec: 0x96020064  lhu         $v0, 0x64($s0)
    ctx->pc = 0x30ccecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x30ccf0: 0x3c0a0060  lui         $t2, 0x60
    ctx->pc = 0x30ccf0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)96 << 16));
    // 0x30ccf4: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x30ccf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x30ccf8: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x30ccf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x30ccfc: 0x84710006  lh          $s1, 0x6($v1)
    ctx->pc = 0x30ccfcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x30cd00: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x30cd00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x30cd04: 0x3044fffd  andi        $a0, $v0, 0xFFFD
    ctx->pc = 0x30cd04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x30cd08: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x30cd08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x30cd0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30cd10: 0xa6040064  sh          $a0, 0x64($s0)
    ctx->pc = 0x30cd10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 4));
    // 0x30cd14: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30cd18: 0xc4a1f560  lwc1        $f1, -0xAA0($a1)
    ctx->pc = 0x30cd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cd1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30cd20: 0xc540f564  lwc1        $f0, -0xA9C($t2)
    ctx->pc = 0x30cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294964580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cd24: 0xc522f568  lwc1        $f2, -0xA98($t1)
    ctx->pc = 0x30cd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294964584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30cd28: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x30cd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x30cd2c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x30cd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x30cd30: 0xc501f56c  lwc1        $f1, -0xA94($t0)
    ctx->pc = 0x30cd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294964588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cd34: 0xc4e0f570  lwc1        $f0, -0xA90($a3)
    ctx->pc = 0x30cd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294964592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cd38: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x30cd38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x30cd3c: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x30cd3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x30cd40: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x30cd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30cd44: 0xc4c2f574  lwc1        $f2, -0xA8C($a2)
    ctx->pc = 0x30cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30cd48: 0xc461f578  lwc1        $f1, -0xA88($v1)
    ctx->pc = 0x30cd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cd4c: 0xc440f57c  lwc1        $f0, -0xA84($v0)
    ctx->pc = 0x30cd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cd50: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x30cd50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x30cd54: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x30cd54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x30cd58: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x30cd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x30cd5c: 0x8e0600d4  lw          $a2, 0xD4($s0)
    ctx->pc = 0x30cd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x30cd60: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x30CD60u;
    SET_GPR_U32(ctx, 31, 0x30CD68u);
    ctx->pc = 0x30CD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD60u;
            // 0x30cd64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD68u; }
        if (ctx->pc != 0x30CD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD68u; }
        if (ctx->pc != 0x30CD68u) { return; }
    }
    ctx->pc = 0x30CD68u;
label_30cd68:
    // 0x30cd68: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x30cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x30cd6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30cd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd70: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x30cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30cd74: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x30CD74u;
    SET_GPR_U32(ctx, 31, 0x30CD7Cu);
    ctx->pc = 0x30CD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD74u;
            // 0x30cd78: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD7Cu; }
        if (ctx->pc != 0x30CD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD7Cu; }
        if (ctx->pc != 0x30CD7Cu) { return; }
    }
    ctx->pc = 0x30CD7Cu;
label_30cd7c:
    // 0x30cd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30cd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd80: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x30cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30cd84: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x30cd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30cd88: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x30cd88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x30cd8c: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x30cd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30cd90: 0xc0c3c00  jal         func_30F000
    ctx->pc = 0x30CD90u;
    SET_GPR_U32(ctx, 31, 0x30CD98u);
    ctx->pc = 0x30CD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CD90u;
            // 0x30cd94: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F000u;
    if (runtime->hasFunction(0x30F000u)) {
        auto targetFn = runtime->lookupFunction(0x30F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD98u; }
        if (ctx->pc != 0x30CD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F000_0x30f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CD98u; }
        if (ctx->pc != 0x30CD98u) { return; }
    }
    ctx->pc = 0x30CD98u;
label_30cd98:
    // 0x30cd98: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x30cd98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x30cd9c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x30cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x30cda0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30cda0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30cda4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30cda8: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x30cda8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
    // 0x30cdac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30cdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30cdb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30cdb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30cdb4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x30cdb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30cdb8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CDB8u;
    {
        const bool branch_taken_0x30cdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cdb8) {
            ctx->pc = 0x30CDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDB8u;
            // 0x30cdbc: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CDC8u;
            goto label_30cdc8;
        }
    }
    ctx->pc = 0x30CDC0u;
    // 0x30cdc0: 0xa6110066  sh          $s1, 0x66($s0)
    ctx->pc = 0x30cdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 17));
    // 0x30cdc4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x30cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_30cdc8:
    // 0x30cdc8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x30CDC8u;
    SET_GPR_U32(ctx, 31, 0x30CDD0u);
    ctx->pc = 0x30CDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDC8u;
            // 0x30cdcc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CDD0u; }
        if (ctx->pc != 0x30CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CDD0u; }
        if (ctx->pc != 0x30CDD0u) { return; }
    }
    ctx->pc = 0x30CDD0u;
label_30cdd0:
    // 0x30cdd0: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x30cdd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_30cdd4:
    // 0x30cdd4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x30cdd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30cdd8: 0x54200023  bnel        $at, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x30CDD8u;
    {
        const bool branch_taken_0x30cdd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cdd8) {
            ctx->pc = 0x30CDDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CDD8u;
            // 0x30cddc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CE68u;
            goto label_30ce68;
        }
    }
    ctx->pc = 0x30CDE0u;
    // 0x30cde0: 0x3c090065  lui         $t1, 0x65
    ctx->pc = 0x30cde0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)101 << 16));
    // 0x30cde4: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x30cde4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cde8: 0x2529bbf0  addiu       $t1, $t1, -0x4410
    ctx->pc = 0x30cde8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949872));
    // 0x30cdec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cdf0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x30cdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x30cdf4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30cdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30cdf8: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x30cdf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30cdfc: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x30cdfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x30ce00: 0xc0c3b5c  jal         func_30ED70
    ctx->pc = 0x30CE00u;
    SET_GPR_U32(ctx, 31, 0x30CE08u);
    ctx->pc = 0x30CE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE00u;
            // 0x30ce04: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30ED70u;
    if (runtime->hasFunction(0x30ED70u)) {
        auto targetFn = runtime->lookupFunction(0x30ED70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE08u; }
        if (ctx->pc != 0x30CE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030ED70_0x30ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE08u; }
        if (ctx->pc != 0x30CE08u) { return; }
    }
    ctx->pc = 0x30CE08u;
label_30ce08:
    // 0x30ce08: 0xc0508b0  jal         func_1422C0
    ctx->pc = 0x30CE08u;
    SET_GPR_U32(ctx, 31, 0x30CE10u);
    ctx->pc = 0x30CE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE08u;
            // 0x30ce0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE10u; }
        if (ctx->pc != 0x30CE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE10u; }
        if (ctx->pc != 0x30CE10u) { return; }
    }
    ctx->pc = 0x30CE10u;
label_30ce10:
    // 0x30ce10: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x30ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x30ce14: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x30ce14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x30ce18: 0xc0506ac  jal         func_141AB0
    ctx->pc = 0x30CE18u;
    SET_GPR_U32(ctx, 31, 0x30CE20u);
    ctx->pc = 0x30CE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE18u;
            // 0x30ce1c: 0x8e0404b0  lw          $a0, 0x4B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE20u; }
        if (ctx->pc != 0x30CE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE20u; }
        if (ctx->pc != 0x30CE20u) { return; }
    }
    ctx->pc = 0x30CE20u;
label_30ce20:
    // 0x30ce20: 0xc05068c  jal         func_141A30
    ctx->pc = 0x30CE20u;
    SET_GPR_U32(ctx, 31, 0x30CE28u);
    ctx->pc = 0x30CE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE20u;
            // 0x30ce24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE28u; }
        if (ctx->pc != 0x30CE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE28u; }
        if (ctx->pc != 0x30CE28u) { return; }
    }
    ctx->pc = 0x30CE28u;
label_30ce28:
    // 0x30ce28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x30ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30ce2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ce30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30ce30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce34: 0xc0508b4  jal         func_1422D0
    ctx->pc = 0x30CE34u;
    SET_GPR_U32(ctx, 31, 0x30CE3Cu);
    ctx->pc = 0x30CE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE34u;
            // 0x30ce38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE3Cu; }
        if (ctx->pc != 0x30CE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE3Cu; }
        if (ctx->pc != 0x30CE3Cu) { return; }
    }
    ctx->pc = 0x30CE3Cu;
label_30ce3c:
    // 0x30ce3c: 0x86020066  lh          $v0, 0x66($s0)
    ctx->pc = 0x30ce3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x30ce40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ce44: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x30ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x30ce48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30ce4c: 0xc050a08  jal         func_142820
    ctx->pc = 0x30CE4Cu;
    SET_GPR_U32(ctx, 31, 0x30CE54u);
    ctx->pc = 0x30CE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE4Cu;
            // 0x30ce50: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE54u; }
        if (ctx->pc != 0x30CE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE54u; }
        if (ctx->pc != 0x30CE54u) { return; }
    }
    ctx->pc = 0x30CE54u;
label_30ce54:
    // 0x30ce54: 0xc050a88  jal         func_142A20
    ctx->pc = 0x30CE54u;
    SET_GPR_U32(ctx, 31, 0x30CE5Cu);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE5Cu; }
        if (ctx->pc != 0x30CE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE5Cu; }
        if (ctx->pc != 0x30CE5Cu) { return; }
    }
    ctx->pc = 0x30CE5Cu;
label_30ce5c:
    // 0x30ce5c: 0xc05068c  jal         func_141A30
    ctx->pc = 0x30CE5Cu;
    SET_GPR_U32(ctx, 31, 0x30CE64u);
    ctx->pc = 0x30CE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE5Cu;
            // 0x30ce60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE64u; }
        if (ctx->pc != 0x30CE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CE64u; }
        if (ctx->pc != 0x30CE64u) { return; }
    }
    ctx->pc = 0x30CE64u;
label_30ce64:
    // 0x30ce64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30ce64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_30ce68:
    // 0x30ce68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30ce68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ce6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30ce6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ce70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30ce70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ce74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30ce74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ce78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ce78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ce7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ce7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ce80: 0x3e00008  jr          $ra
    ctx->pc = 0x30CE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CE80u;
            // 0x30ce84: 0x27bd08f0  addiu       $sp, $sp, 0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30CE88u;
    // 0x30ce88: 0x0  nop
    ctx->pc = 0x30ce88u;
    // NOP
    // 0x30ce8c: 0x0  nop
    ctx->pc = 0x30ce8cu;
    // NOP
}
