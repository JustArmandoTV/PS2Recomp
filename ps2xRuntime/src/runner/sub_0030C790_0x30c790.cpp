#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030C790
// Address: 0x30c790 - 0x30cb10
void sub_0030C790_0x30c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C790_0x30c790");
#endif

    switch (ctx->pc) {
        case 0x30c7d4u: goto label_30c7d4;
        case 0x30c7ecu: goto label_30c7ec;
        case 0x30c8c4u: goto label_30c8c4;
        case 0x30c8d4u: goto label_30c8d4;
        case 0x30c8fcu: goto label_30c8fc;
        case 0x30c91cu: goto label_30c91c;
        case 0x30c934u: goto label_30c934;
        case 0x30c944u: goto label_30c944;
        case 0x30c954u: goto label_30c954;
        case 0x30c9e8u: goto label_30c9e8;
        case 0x30c9fcu: goto label_30c9fc;
        case 0x30ca18u: goto label_30ca18;
        case 0x30ca60u: goto label_30ca60;
        case 0x30ca88u: goto label_30ca88;
        case 0x30ca90u: goto label_30ca90;
        case 0x30caa0u: goto label_30caa0;
        case 0x30caa8u: goto label_30caa8;
        case 0x30cabcu: goto label_30cabc;
        case 0x30cad4u: goto label_30cad4;
        case 0x30cadcu: goto label_30cadc;
        case 0x30cae4u: goto label_30cae4;
        default: break;
    }

    ctx->pc = 0x30c790u;

    // 0x30c790: 0x27bdf710  addiu       $sp, $sp, -0x8F0
    ctx->pc = 0x30c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965008));
    // 0x30c794: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30c798: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30c79c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30c7a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30c7a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c7a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c7b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7b4: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x30c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x30c7b8: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x30C7B8u;
    {
        const bool branch_taken_0x30c7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7B8u;
            // 0x30c7bc: 0x26330080  addiu       $s3, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7b8) {
            ctx->pc = 0x30CAE4u;
            goto label_30cae4;
        }
    }
    ctx->pc = 0x30C7C0u;
    // 0x30c7c0: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x30c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x30c7c4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C7C4u;
    {
        const bool branch_taken_0x30c7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c7c4) {
            ctx->pc = 0x30C7DCu;
            goto label_30c7dc;
        }
    }
    ctx->pc = 0x30C7CCu;
    // 0x30c7cc: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x30C7CCu;
    SET_GPR_U32(ctx, 31, 0x30C7D4u);
    ctx->pc = 0x30C7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7CCu;
            // 0x30c7d0: 0x27a408b0  addiu       $a0, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7D4u; }
        if (ctx->pc != 0x30C7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7D4u; }
        if (ctx->pc != 0x30C7D4u) { return; }
    }
    ctx->pc = 0x30C7D4u;
label_30c7d4:
    // 0x30c7d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30C7D4u;
    {
        const bool branch_taken_0x30c7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c7d4) {
            ctx->pc = 0x30C7ECu;
            goto label_30c7ec;
        }
    }
    ctx->pc = 0x30C7DCu;
label_30c7dc:
    // 0x30c7dc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x30c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x30c7e0: 0x27a408b0  addiu       $a0, $sp, 0x8B0
    ctx->pc = 0x30c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
    // 0x30c7e4: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x30C7E4u;
    SET_GPR_U32(ctx, 31, 0x30C7ECu);
    ctx->pc = 0x30C7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C7E4u;
            // 0x30c7e8: 0x24a5bbb0  addiu       $a1, $a1, -0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7ECu; }
        if (ctx->pc != 0x30C7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C7ECu; }
        if (ctx->pc != 0x30C7ECu) { return; }
    }
    ctx->pc = 0x30C7ECu;
label_30c7ec:
    // 0x30c7ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30c7f0: 0x8e2600cc  lw          $a2, 0xCC($s1)
    ctx->pc = 0x30c7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x30c7f4: 0xc443f580  lwc1        $f3, -0xA80($v0)
    ctx->pc = 0x30c7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30c7f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30c7fc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x30c7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x30c800: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30c804: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x30c804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x30c808: 0xc462f584  lwc1        $f2, -0xA7C($v1)
    ctx->pc = 0x30c808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c80c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30c810: 0x24a5bbb0  addiu       $a1, $a1, -0x4450
    ctx->pc = 0x30c810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
    // 0x30c814: 0xc441f588  lwc1        $f1, -0xA78($v0)
    ctx->pc = 0x30c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c818: 0x27b508b0  addiu       $s5, $sp, 0x8B0
    ctx->pc = 0x30c818u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
    // 0x30c81c: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x30c81cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x30c820: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x30c820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x30c824: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30c824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30c828: 0xc440f58c  lwc1        $f0, -0xA74($v0)
    ctx->pc = 0x30c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c82c: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x30c82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x30c830: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30c834: 0xc443f590  lwc1        $f3, -0xA70($v0)
    ctx->pc = 0x30c834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30c838: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x30c838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x30c83c: 0xc4c40020  lwc1        $f4, 0x20($a2)
    ctx->pc = 0x30c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30c840: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30c840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30c844: 0xc442f594  lwc1        $f2, -0xA6C($v0)
    ctx->pc = 0x30c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c848: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x30c848u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x30c84c: 0xc4c40024  lwc1        $f4, 0x24($a2)
    ctx->pc = 0x30c84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30c850: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30c850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30c854: 0xc441f598  lwc1        $f1, -0xA68($v0)
    ctx->pc = 0x30c854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c858: 0xe7a400f4  swc1        $f4, 0xF4($sp)
    ctx->pc = 0x30c858u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x30c85c: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x30c85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30c860: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30c860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30c864: 0xc440f59c  lwc1        $f0, -0xA64($v0)
    ctx->pc = 0x30c864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c868: 0xe7a400f8  swc1        $f4, 0xF8($sp)
    ctx->pc = 0x30c868u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x30c86c: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x30c86cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x30c870: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x30c870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x30c874: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30c874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x30c878: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x30c878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x30c87c: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x30c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x30c880: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x30c880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x30c884: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x30c884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c888: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30c888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x30c88c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x30c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x30c890: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x30c890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x30c894: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x30c894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c898: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x30c898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x30c89c: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x30c89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c8a0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x30c8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x30c8a4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30c8a8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30c8ac: 0x84d20004  lh          $s2, 0x4($a2)
    ctx->pc = 0x30c8acu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30c8b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30c8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30c8b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30c8bc: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x30C8BCu;
    SET_GPR_U32(ctx, 31, 0x30C8C4u);
    ctx->pc = 0x30C8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8BCu;
            // 0x30c8c0: 0x24540010  addiu       $s4, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8C4u; }
        if (ctx->pc != 0x30C8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8C4u; }
        if (ctx->pc != 0x30C8C4u) { return; }
    }
    ctx->pc = 0x30C8C4u;
label_30c8c4:
    // 0x30c8c4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x30c8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x30c8c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30c8cc: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x30C8CCu;
    SET_GPR_U32(ctx, 31, 0x30C8D4u);
    ctx->pc = 0x30C8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8CCu;
            // 0x30c8d0: 0x24a5bbb0  addiu       $a1, $a1, -0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8D4u; }
        if (ctx->pc != 0x30C8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8D4u; }
        if (ctx->pc != 0x30C8D4u) { return; }
    }
    ctx->pc = 0x30C8D4u;
label_30c8d4:
    // 0x30c8d4: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x30c8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30c8d8: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x30C8D8u;
    {
        const bool branch_taken_0x30c8d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8D8u;
            // 0x30c8dc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8d8) {
            ctx->pc = 0x30C904u;
            goto label_30c904;
        }
    }
    ctx->pc = 0x30C8E0u;
    // 0x30c8e0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x30c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30c8e4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30c8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c8e8: 0x12343c  dsll32      $a2, $s2, 16
    ctx->pc = 0x30c8e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x30c8ec: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x30c8ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c8f0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x30c8f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x30c8f4: 0xc05161c  jal         func_145870
    ctx->pc = 0x30C8F4u;
    SET_GPR_U32(ctx, 31, 0x30C8FCu);
    ctx->pc = 0x30C8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8F4u;
            // 0x30c8f8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145870u;
    if (runtime->hasFunction(0x145870u)) {
        auto targetFn = runtime->lookupFunction(0x145870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8FCu; }
        if (ctx->pc != 0x30C8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145870_0x145870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C8FCu; }
        if (ctx->pc != 0x30C8FCu) { return; }
    }
    ctx->pc = 0x30C8FCu;
label_30c8fc:
    // 0x30c8fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30C8FCu;
    {
        const bool branch_taken_0x30c8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C8FCu;
            // 0x30c900: 0x27b300a0  addiu       $s3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8fc) {
            ctx->pc = 0x30C920u;
            goto label_30c920;
        }
    }
    ctx->pc = 0x30C904u;
label_30c904:
    // 0x30c904: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x30c904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30c908: 0x12343c  dsll32      $a2, $s2, 16
    ctx->pc = 0x30c908u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x30c90c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x30c90cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x30c910: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x30c910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c914: 0xc0514f8  jal         func_1453E0
    ctx->pc = 0x30C914u;
    SET_GPR_U32(ctx, 31, 0x30C91Cu);
    ctx->pc = 0x30C918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C914u;
            // 0x30c918: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1453E0u;
    if (runtime->hasFunction(0x1453E0u)) {
        auto targetFn = runtime->lookupFunction(0x1453E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C91Cu; }
        if (ctx->pc != 0x30C91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001453E0_0x1453e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C91Cu; }
        if (ctx->pc != 0x30C91Cu) { return; }
    }
    ctx->pc = 0x30C91Cu;
label_30c91c:
    // 0x30c91c: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x30c91cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30c920:
    // 0x30c920: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x30c920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x30c924: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30c924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30c928: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30c928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c92c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x30C92Cu;
    SET_GPR_U32(ctx, 31, 0x30C934u);
    ctx->pc = 0x30C930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C92Cu;
            // 0x30c930: 0x24c6bbf0  addiu       $a2, $a2, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C934u; }
        if (ctx->pc != 0x30C934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C934u; }
        if (ctx->pc != 0x30C934u) { return; }
    }
    ctx->pc = 0x30C934u;
label_30c934:
    // 0x30c934: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x30c934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30c938: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30c938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c93c: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x30C93Cu;
    SET_GPR_U32(ctx, 31, 0x30C944u);
    ctx->pc = 0x30C940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C93Cu;
            // 0x30c940: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C944u; }
        if (ctx->pc != 0x30C944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C944u; }
        if (ctx->pc != 0x30C944u) { return; }
    }
    ctx->pc = 0x30C944u;
label_30c944:
    // 0x30c944: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x30c944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x30c948: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30c948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c94c: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x30C94Cu;
    SET_GPR_U32(ctx, 31, 0x30C954u);
    ctx->pc = 0x30C950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C94Cu;
            // 0x30c950: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C954u; }
        if (ctx->pc != 0x30C954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C954u; }
        if (ctx->pc != 0x30C954u) { return; }
    }
    ctx->pc = 0x30C954u;
label_30c954:
    // 0x30c954: 0x96230064  lhu         $v1, 0x64($s1)
    ctx->pc = 0x30c954u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x30c958: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30c958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x30c95c: 0x5060003a  beql        $v1, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x30C95Cu;
    {
        const bool branch_taken_0x30c95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c95c) {
            ctx->pc = 0x30C960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C95Cu;
            // 0x30c960: 0x86230066  lh          $v1, 0x66($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CA48u;
            goto label_30ca48;
        }
    }
    ctx->pc = 0x30C964u;
    // 0x30c964: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x30c964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x30c968: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30c968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x30c96c: 0x96220064  lhu         $v0, 0x64($s1)
    ctx->pc = 0x30c96cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x30c970: 0x3c0a0060  lui         $t2, 0x60
    ctx->pc = 0x30c970u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)96 << 16));
    // 0x30c974: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x30c974u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x30c978: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x30c978u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x30c97c: 0x84720006  lh          $s2, 0x6($v1)
    ctx->pc = 0x30c97cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x30c980: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x30c980u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x30c984: 0x3044fffd  andi        $a0, $v0, 0xFFFD
    ctx->pc = 0x30c984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x30c988: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x30c988u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x30c98c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30c990: 0xa6240064  sh          $a0, 0x64($s1)
    ctx->pc = 0x30c990u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 4));
    // 0x30c994: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30c994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30c998: 0xc4a1f5a0  lwc1        $f1, -0xA60($a1)
    ctx->pc = 0x30c998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c99c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30c9a0: 0xc540f5a4  lwc1        $f0, -0xA5C($t2)
    ctx->pc = 0x30c9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294964644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c9a4: 0xc522f5a8  lwc1        $f2, -0xA58($t1)
    ctx->pc = 0x30c9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294964648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c9a8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x30c9a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x30c9ac: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x30c9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x30c9b0: 0xc501f5ac  lwc1        $f1, -0xA54($t0)
    ctx->pc = 0x30c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294964652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c9b4: 0xc4e0f5b0  lwc1        $f0, -0xA50($a3)
    ctx->pc = 0x30c9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294964656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c9b8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x30c9b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x30c9bc: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x30c9bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x30c9c0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x30c9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30c9c4: 0xc4c2f5b4  lwc1        $f2, -0xA4C($a2)
    ctx->pc = 0x30c9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30c9c8: 0xc461f5b8  lwc1        $f1, -0xA48($v1)
    ctx->pc = 0x30c9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c9cc: 0xc440f5bc  lwc1        $f0, -0xA44($v0)
    ctx->pc = 0x30c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c9d0: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x30c9d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x30c9d4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x30c9d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x30c9d8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x30c9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x30c9dc: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x30c9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x30c9e0: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x30C9E0u;
    SET_GPR_U32(ctx, 31, 0x30C9E8u);
    ctx->pc = 0x30C9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9E0u;
            // 0x30c9e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9E8u; }
        if (ctx->pc != 0x30C9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9E8u; }
        if (ctx->pc != 0x30C9E8u) { return; }
    }
    ctx->pc = 0x30C9E8u;
label_30c9e8:
    // 0x30c9e8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x30c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x30c9ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30c9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c9f0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x30c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30c9f4: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x30C9F4u;
    SET_GPR_U32(ctx, 31, 0x30C9FCu);
    ctx->pc = 0x30C9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C9F4u;
            // 0x30c9f8: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9FCu; }
        if (ctx->pc != 0x30C9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C9FCu; }
        if (ctx->pc != 0x30C9FCu) { return; }
    }
    ctx->pc = 0x30C9FCu;
label_30c9fc:
    // 0x30c9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ca00: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x30ca00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30ca04: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x30ca04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30ca08: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x30ca08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x30ca0c: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x30ca0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30ca10: 0xc0c3c00  jal         func_30F000
    ctx->pc = 0x30CA10u;
    SET_GPR_U32(ctx, 31, 0x30CA18u);
    ctx->pc = 0x30CA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA10u;
            // 0x30ca14: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F000u;
    if (runtime->hasFunction(0x30F000u)) {
        auto targetFn = runtime->lookupFunction(0x30F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA18u; }
        if (ctx->pc != 0x30CA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F000_0x30f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA18u; }
        if (ctx->pc != 0x30CA18u) { return; }
    }
    ctx->pc = 0x30CA18u;
label_30ca18:
    // 0x30ca18: 0x86240066  lh          $a0, 0x66($s1)
    ctx->pc = 0x30ca18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
    // 0x30ca1c: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x30ca1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x30ca20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30ca20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30ca24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30ca28: 0xa6240066  sh          $a0, 0x66($s1)
    ctx->pc = 0x30ca28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ca2c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x30ca2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x30ca30: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30ca30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30ca34: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x30ca34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30ca38: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30CA38u;
    {
        const bool branch_taken_0x30ca38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ca38) {
            ctx->pc = 0x30CA44u;
            goto label_30ca44;
        }
    }
    ctx->pc = 0x30CA40u;
    // 0x30ca40: 0xa6320066  sh          $s2, 0x66($s1)
    ctx->pc = 0x30ca40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 18));
label_30ca44:
    // 0x30ca44: 0x86230066  lh          $v1, 0x66($s1)
    ctx->pc = 0x30ca44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_30ca48:
    // 0x30ca48: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x30ca48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30ca4c: 0x54200026  bnel        $at, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x30CA4Cu;
    {
        const bool branch_taken_0x30ca4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ca4c) {
            ctx->pc = 0x30CA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA4Cu;
            // 0x30ca50: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30CAE8u;
            goto label_30cae8;
        }
    }
    ctx->pc = 0x30CA54u;
    // 0x30ca54: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x30ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x30ca58: 0xc04cc04  jal         func_133010
    ctx->pc = 0x30CA58u;
    SET_GPR_U32(ctx, 31, 0x30CA60u);
    ctx->pc = 0x30CA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA58u;
            // 0x30ca5c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA60u; }
        if (ctx->pc != 0x30CA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA60u; }
        if (ctx->pc != 0x30CA60u) { return; }
    }
    ctx->pc = 0x30CA60u;
label_30ca60:
    // 0x30ca60: 0x3c090065  lui         $t1, 0x65
    ctx->pc = 0x30ca60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)101 << 16));
    // 0x30ca64: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x30ca64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ca68: 0x2529bbf0  addiu       $t1, $t1, -0x4410
    ctx->pc = 0x30ca68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949872));
    // 0x30ca6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ca6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ca70: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x30ca70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x30ca74: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30ca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30ca78: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x30ca78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30ca7c: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x30ca7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x30ca80: 0xc0c3b5c  jal         func_30ED70
    ctx->pc = 0x30CA80u;
    SET_GPR_U32(ctx, 31, 0x30CA88u);
    ctx->pc = 0x30CA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA80u;
            // 0x30ca84: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30ED70u;
    if (runtime->hasFunction(0x30ED70u)) {
        auto targetFn = runtime->lookupFunction(0x30ED70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA88u; }
        if (ctx->pc != 0x30CA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030ED70_0x30ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA88u; }
        if (ctx->pc != 0x30CA88u) { return; }
    }
    ctx->pc = 0x30CA88u;
label_30ca88:
    // 0x30ca88: 0xc0508b0  jal         func_1422C0
    ctx->pc = 0x30CA88u;
    SET_GPR_U32(ctx, 31, 0x30CA90u);
    ctx->pc = 0x30CA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA88u;
            // 0x30ca8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA90u; }
        if (ctx->pc != 0x30CA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CA90u; }
        if (ctx->pc != 0x30CA90u) { return; }
    }
    ctx->pc = 0x30CA90u;
label_30ca90:
    // 0x30ca90: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x30ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x30ca94: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x30ca94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x30ca98: 0xc0506ac  jal         func_141AB0
    ctx->pc = 0x30CA98u;
    SET_GPR_U32(ctx, 31, 0x30CAA0u);
    ctx->pc = 0x30CA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CA98u;
            // 0x30ca9c: 0x8e2404b0  lw          $a0, 0x4B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAA0u; }
        if (ctx->pc != 0x30CAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAA0u; }
        if (ctx->pc != 0x30CAA0u) { return; }
    }
    ctx->pc = 0x30CAA0u;
label_30caa0:
    // 0x30caa0: 0xc05068c  jal         func_141A30
    ctx->pc = 0x30CAA0u;
    SET_GPR_U32(ctx, 31, 0x30CAA8u);
    ctx->pc = 0x30CAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CAA0u;
            // 0x30caa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAA8u; }
        if (ctx->pc != 0x30CAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAA8u; }
        if (ctx->pc != 0x30CAA8u) { return; }
    }
    ctx->pc = 0x30CAA8u;
label_30caa8:
    // 0x30caa8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x30caa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30caac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30caacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30cab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cab4: 0xc0508b4  jal         func_1422D0
    ctx->pc = 0x30CAB4u;
    SET_GPR_U32(ctx, 31, 0x30CABCu);
    ctx->pc = 0x30CAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CAB4u;
            // 0x30cab8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CABCu; }
        if (ctx->pc != 0x30CABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CABCu; }
        if (ctx->pc != 0x30CABCu) { return; }
    }
    ctx->pc = 0x30CABCu;
label_30cabc:
    // 0x30cabc: 0x86220066  lh          $v0, 0x66($s1)
    ctx->pc = 0x30cabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
    // 0x30cac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cac4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x30cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x30cac8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30cacc: 0xc050a08  jal         func_142820
    ctx->pc = 0x30CACCu;
    SET_GPR_U32(ctx, 31, 0x30CAD4u);
    ctx->pc = 0x30CAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CACCu;
            // 0x30cad0: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAD4u; }
        if (ctx->pc != 0x30CAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAD4u; }
        if (ctx->pc != 0x30CAD4u) { return; }
    }
    ctx->pc = 0x30CAD4u;
label_30cad4:
    // 0x30cad4: 0xc050a88  jal         func_142A20
    ctx->pc = 0x30CAD4u;
    SET_GPR_U32(ctx, 31, 0x30CADCu);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CADCu; }
        if (ctx->pc != 0x30CADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CADCu; }
        if (ctx->pc != 0x30CADCu) { return; }
    }
    ctx->pc = 0x30CADCu;
label_30cadc:
    // 0x30cadc: 0xc05068c  jal         func_141A30
    ctx->pc = 0x30CADCu;
    SET_GPR_U32(ctx, 31, 0x30CAE4u);
    ctx->pc = 0x30CAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30CADCu;
            // 0x30cae0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAE4u; }
        if (ctx->pc != 0x30CAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30CAE4u; }
        if (ctx->pc != 0x30CAE4u) { return; }
    }
    ctx->pc = 0x30CAE4u;
label_30cae4:
    // 0x30cae4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30cae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_30cae8:
    // 0x30cae8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30cae8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30caec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30caecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30caf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30caf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30caf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30caf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30caf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30caf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cafc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30cafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cb00: 0x3e00008  jr          $ra
    ctx->pc = 0x30CB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30CB00u;
            // 0x30cb04: 0x27bd08f0  addiu       $sp, $sp, 0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30CB08u;
    // 0x30cb08: 0x0  nop
    ctx->pc = 0x30cb08u;
    // NOP
    // 0x30cb0c: 0x0  nop
    ctx->pc = 0x30cb0cu;
    // NOP
}
