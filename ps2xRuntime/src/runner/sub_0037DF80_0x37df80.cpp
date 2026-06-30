#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037DF80
// Address: 0x37df80 - 0x37e220
void sub_0037DF80_0x37df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037DF80_0x37df80");
#endif

    switch (ctx->pc) {
        case 0x37df80u: goto label_37df80;
        case 0x37df84u: goto label_37df84;
        case 0x37df88u: goto label_37df88;
        case 0x37df8cu: goto label_37df8c;
        case 0x37df90u: goto label_37df90;
        case 0x37df94u: goto label_37df94;
        case 0x37df98u: goto label_37df98;
        case 0x37df9cu: goto label_37df9c;
        case 0x37dfa0u: goto label_37dfa0;
        case 0x37dfa4u: goto label_37dfa4;
        case 0x37dfa8u: goto label_37dfa8;
        case 0x37dfacu: goto label_37dfac;
        case 0x37dfb0u: goto label_37dfb0;
        case 0x37dfb4u: goto label_37dfb4;
        case 0x37dfb8u: goto label_37dfb8;
        case 0x37dfbcu: goto label_37dfbc;
        case 0x37dfc0u: goto label_37dfc0;
        case 0x37dfc4u: goto label_37dfc4;
        case 0x37dfc8u: goto label_37dfc8;
        case 0x37dfccu: goto label_37dfcc;
        case 0x37dfd0u: goto label_37dfd0;
        case 0x37dfd4u: goto label_37dfd4;
        case 0x37dfd8u: goto label_37dfd8;
        case 0x37dfdcu: goto label_37dfdc;
        case 0x37dfe0u: goto label_37dfe0;
        case 0x37dfe4u: goto label_37dfe4;
        case 0x37dfe8u: goto label_37dfe8;
        case 0x37dfecu: goto label_37dfec;
        case 0x37dff0u: goto label_37dff0;
        case 0x37dff4u: goto label_37dff4;
        case 0x37dff8u: goto label_37dff8;
        case 0x37dffcu: goto label_37dffc;
        case 0x37e000u: goto label_37e000;
        case 0x37e004u: goto label_37e004;
        case 0x37e008u: goto label_37e008;
        case 0x37e00cu: goto label_37e00c;
        case 0x37e010u: goto label_37e010;
        case 0x37e014u: goto label_37e014;
        case 0x37e018u: goto label_37e018;
        case 0x37e01cu: goto label_37e01c;
        case 0x37e020u: goto label_37e020;
        case 0x37e024u: goto label_37e024;
        case 0x37e028u: goto label_37e028;
        case 0x37e02cu: goto label_37e02c;
        case 0x37e030u: goto label_37e030;
        case 0x37e034u: goto label_37e034;
        case 0x37e038u: goto label_37e038;
        case 0x37e03cu: goto label_37e03c;
        case 0x37e040u: goto label_37e040;
        case 0x37e044u: goto label_37e044;
        case 0x37e048u: goto label_37e048;
        case 0x37e04cu: goto label_37e04c;
        case 0x37e050u: goto label_37e050;
        case 0x37e054u: goto label_37e054;
        case 0x37e058u: goto label_37e058;
        case 0x37e05cu: goto label_37e05c;
        case 0x37e060u: goto label_37e060;
        case 0x37e064u: goto label_37e064;
        case 0x37e068u: goto label_37e068;
        case 0x37e06cu: goto label_37e06c;
        case 0x37e070u: goto label_37e070;
        case 0x37e074u: goto label_37e074;
        case 0x37e078u: goto label_37e078;
        case 0x37e07cu: goto label_37e07c;
        case 0x37e080u: goto label_37e080;
        case 0x37e084u: goto label_37e084;
        case 0x37e088u: goto label_37e088;
        case 0x37e08cu: goto label_37e08c;
        case 0x37e090u: goto label_37e090;
        case 0x37e094u: goto label_37e094;
        case 0x37e098u: goto label_37e098;
        case 0x37e09cu: goto label_37e09c;
        case 0x37e0a0u: goto label_37e0a0;
        case 0x37e0a4u: goto label_37e0a4;
        case 0x37e0a8u: goto label_37e0a8;
        case 0x37e0acu: goto label_37e0ac;
        case 0x37e0b0u: goto label_37e0b0;
        case 0x37e0b4u: goto label_37e0b4;
        case 0x37e0b8u: goto label_37e0b8;
        case 0x37e0bcu: goto label_37e0bc;
        case 0x37e0c0u: goto label_37e0c0;
        case 0x37e0c4u: goto label_37e0c4;
        case 0x37e0c8u: goto label_37e0c8;
        case 0x37e0ccu: goto label_37e0cc;
        case 0x37e0d0u: goto label_37e0d0;
        case 0x37e0d4u: goto label_37e0d4;
        case 0x37e0d8u: goto label_37e0d8;
        case 0x37e0dcu: goto label_37e0dc;
        case 0x37e0e0u: goto label_37e0e0;
        case 0x37e0e4u: goto label_37e0e4;
        case 0x37e0e8u: goto label_37e0e8;
        case 0x37e0ecu: goto label_37e0ec;
        case 0x37e0f0u: goto label_37e0f0;
        case 0x37e0f4u: goto label_37e0f4;
        case 0x37e0f8u: goto label_37e0f8;
        case 0x37e0fcu: goto label_37e0fc;
        case 0x37e100u: goto label_37e100;
        case 0x37e104u: goto label_37e104;
        case 0x37e108u: goto label_37e108;
        case 0x37e10cu: goto label_37e10c;
        case 0x37e110u: goto label_37e110;
        case 0x37e114u: goto label_37e114;
        case 0x37e118u: goto label_37e118;
        case 0x37e11cu: goto label_37e11c;
        case 0x37e120u: goto label_37e120;
        case 0x37e124u: goto label_37e124;
        case 0x37e128u: goto label_37e128;
        case 0x37e12cu: goto label_37e12c;
        case 0x37e130u: goto label_37e130;
        case 0x37e134u: goto label_37e134;
        case 0x37e138u: goto label_37e138;
        case 0x37e13cu: goto label_37e13c;
        case 0x37e140u: goto label_37e140;
        case 0x37e144u: goto label_37e144;
        case 0x37e148u: goto label_37e148;
        case 0x37e14cu: goto label_37e14c;
        case 0x37e150u: goto label_37e150;
        case 0x37e154u: goto label_37e154;
        case 0x37e158u: goto label_37e158;
        case 0x37e15cu: goto label_37e15c;
        case 0x37e160u: goto label_37e160;
        case 0x37e164u: goto label_37e164;
        case 0x37e168u: goto label_37e168;
        case 0x37e16cu: goto label_37e16c;
        case 0x37e170u: goto label_37e170;
        case 0x37e174u: goto label_37e174;
        case 0x37e178u: goto label_37e178;
        case 0x37e17cu: goto label_37e17c;
        case 0x37e180u: goto label_37e180;
        case 0x37e184u: goto label_37e184;
        case 0x37e188u: goto label_37e188;
        case 0x37e18cu: goto label_37e18c;
        case 0x37e190u: goto label_37e190;
        case 0x37e194u: goto label_37e194;
        case 0x37e198u: goto label_37e198;
        case 0x37e19cu: goto label_37e19c;
        case 0x37e1a0u: goto label_37e1a0;
        case 0x37e1a4u: goto label_37e1a4;
        case 0x37e1a8u: goto label_37e1a8;
        case 0x37e1acu: goto label_37e1ac;
        case 0x37e1b0u: goto label_37e1b0;
        case 0x37e1b4u: goto label_37e1b4;
        case 0x37e1b8u: goto label_37e1b8;
        case 0x37e1bcu: goto label_37e1bc;
        case 0x37e1c0u: goto label_37e1c0;
        case 0x37e1c4u: goto label_37e1c4;
        case 0x37e1c8u: goto label_37e1c8;
        case 0x37e1ccu: goto label_37e1cc;
        case 0x37e1d0u: goto label_37e1d0;
        case 0x37e1d4u: goto label_37e1d4;
        case 0x37e1d8u: goto label_37e1d8;
        case 0x37e1dcu: goto label_37e1dc;
        case 0x37e1e0u: goto label_37e1e0;
        case 0x37e1e4u: goto label_37e1e4;
        case 0x37e1e8u: goto label_37e1e8;
        case 0x37e1ecu: goto label_37e1ec;
        case 0x37e1f0u: goto label_37e1f0;
        case 0x37e1f4u: goto label_37e1f4;
        case 0x37e1f8u: goto label_37e1f8;
        case 0x37e1fcu: goto label_37e1fc;
        case 0x37e200u: goto label_37e200;
        case 0x37e204u: goto label_37e204;
        case 0x37e208u: goto label_37e208;
        case 0x37e20cu: goto label_37e20c;
        case 0x37e210u: goto label_37e210;
        case 0x37e214u: goto label_37e214;
        case 0x37e218u: goto label_37e218;
        case 0x37e21cu: goto label_37e21c;
        default: break;
    }

    ctx->pc = 0x37df80u;

label_37df80:
    // 0x37df80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37df84:
    // 0x37df84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37df84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37df88:
    // 0x37df88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37df8c:
    // 0x37df8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37df8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37df90:
    // 0x37df90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37df90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37df94:
    // 0x37df94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37df98:
    // 0x37df98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37df9c:
    // 0x37df9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37df9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37dfa0:
    // 0x37dfa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37dfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37dfa4:
    // 0x37dfa4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x37dfa4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37dfa8:
    // 0x37dfa8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37dfa8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37dfac:
    // 0x37dfac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37dfacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37dfb0:
    // 0x37dfb0: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x37dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_37dfb4:
    // 0x37dfb4: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x37dfb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37dfb8:
    // 0x37dfb8: 0x2463ffe7  addiu       $v1, $v1, -0x19
    ctx->pc = 0x37dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_37dfbc:
    // 0x37dfbc: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x37dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_37dfc0:
    // 0x37dfc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37dfc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37dfc4:
    // 0x37dfc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37dfc8:
    // 0x37dfc8: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37dfc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37dfcc:
    // 0x37dfcc: 0x2483ffd3  addiu       $v1, $a0, -0x2D
    ctx->pc = 0x37dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
label_37dfd0:
    // 0x37dfd0: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37dfd4:
    // 0x37dfd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37dfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37dfd8:
    // 0x37dfd8: 0xc0506ac  jal         func_141AB0
label_37dfdc:
    if (ctx->pc == 0x37DFDCu) {
        ctx->pc = 0x37DFDCu;
            // 0x37dfdc: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37DFE0u;
        goto label_37dfe0;
    }
    ctx->pc = 0x37DFD8u;
    SET_GPR_U32(ctx, 31, 0x37DFE0u);
    ctx->pc = 0x37DFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DFD8u;
            // 0x37dfdc: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DFE0u; }
        if (ctx->pc != 0x37DFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DFE0u; }
        if (ctx->pc != 0x37DFE0u) { return; }
    }
    ctx->pc = 0x37DFE0u;
label_37dfe0:
    // 0x37dfe0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37dfe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37dfe4:
    // 0x37dfe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37dfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37dfe8:
    // 0x37dfe8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37dfe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37dfec:
    // 0x37dfec: 0x320f809  jalr        $t9
label_37dff0:
    if (ctx->pc == 0x37DFF0u) {
        ctx->pc = 0x37DFF0u;
            // 0x37dff0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37DFF4u;
        goto label_37dff4;
    }
    ctx->pc = 0x37DFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37DFF4u);
        ctx->pc = 0x37DFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DFECu;
            // 0x37dff0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37DFF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37DFF4u; }
            if (ctx->pc != 0x37DFF4u) { return; }
        }
        }
    }
    ctx->pc = 0x37DFF4u;
label_37dff4:
    // 0x37dff4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x37dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_37dff8:
    // 0x37dff8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37dffc:
    // 0x37dffc: 0x24a55880  addiu       $a1, $a1, 0x5880
    ctx->pc = 0x37dffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22656));
label_37e000:
    // 0x37e000: 0x84445730  lh          $a0, 0x5730($v0)
    ctx->pc = 0x37e000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22320)));
label_37e004:
    // 0x37e004: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x37e004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e008:
    // 0x37e008: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37e008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37e00c:
    // 0x37e00c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x37e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37e010:
    // 0x37e010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e014:
    // 0x37e014: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37e014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37e018:
    // 0x37e018: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37e018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37e01c:
    // 0x37e01c: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37e01cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37e020:
    // 0x37e020: 0x84435732  lh          $v1, 0x5732($v0)
    ctx->pc = 0x37e020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22322)));
label_37e024:
    // 0x37e024: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e028:
    // 0x37e028: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37e028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37e02c:
    // 0x37e02c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e030:
    // 0x37e030: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37e030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e034:
    // 0x37e034: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37e034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e038:
    // 0x37e038: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37e038u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37e03c:
    // 0x37e03c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37e03cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37e040:
    // 0x37e040: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37e040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e044:
    // 0x37e044: 0xc0bc284  jal         func_2F0A10
label_37e048:
    if (ctx->pc == 0x37E048u) {
        ctx->pc = 0x37E048u;
            // 0x37e048: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37E04Cu;
        goto label_37e04c;
    }
    ctx->pc = 0x37E044u;
    SET_GPR_U32(ctx, 31, 0x37E04Cu);
    ctx->pc = 0x37E048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E044u;
            // 0x37e048: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E04Cu; }
        if (ctx->pc != 0x37E04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E04Cu; }
        if (ctx->pc != 0x37E04Cu) { return; }
    }
    ctx->pc = 0x37E04Cu;
label_37e04c:
    // 0x37e04c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37e04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37e050:
    // 0x37e050: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37e050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37e054:
    // 0x37e054: 0x320f809  jalr        $t9
label_37e058:
    if (ctx->pc == 0x37E058u) {
        ctx->pc = 0x37E058u;
            // 0x37e058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37E05Cu;
        goto label_37e05c;
    }
    ctx->pc = 0x37E054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E05Cu);
        ctx->pc = 0x37E058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E054u;
            // 0x37e058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E05Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E05Cu; }
            if (ctx->pc != 0x37E05Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37E05Cu;
label_37e05c:
    // 0x37e05c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37e060:
    // 0x37e060: 0x8e5000dc  lw          $s0, 0xDC($s2)
    ctx->pc = 0x37e060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_37e064:
    // 0x37e064: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x37e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_37e068:
    // 0x37e068: 0x8c530080  lw          $s3, 0x80($v0)
    ctx->pc = 0x37e068u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_37e06c:
    // 0x37e06c: 0xc157054  jal         func_55C150
label_37e070:
    if (ctx->pc == 0x37E070u) {
        ctx->pc = 0x37E070u;
            // 0x37e070: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x37E074u;
        goto label_37e074;
    }
    ctx->pc = 0x37E06Cu;
    SET_GPR_U32(ctx, 31, 0x37E074u);
    ctx->pc = 0x37E070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E06Cu;
            // 0x37e070: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E074u; }
        if (ctx->pc != 0x37E074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E074u; }
        if (ctx->pc != 0x37E074u) { return; }
    }
    ctx->pc = 0x37E074u;
label_37e074:
    // 0x37e074: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x37e074u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e078:
    // 0x37e078: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37e078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37e07c:
    // 0x37e07c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37e07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37e080:
    // 0x37e080: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x37e080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_37e084:
    // 0x37e084: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37e084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37e088:
    // 0x37e088: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37e08c:
    // 0x37e08c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37e08cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37e090:
    // 0x37e090: 0xc440a21c  lwc1        $f0, -0x5DE4($v0)
    ctx->pc = 0x37e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e094:
    // 0x37e094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37e094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37e098:
    // 0x37e098: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37e09c:
    // 0x37e09c: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x37e09cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_37e0a0:
    // 0x37e0a0: 0xc156fc8  jal         func_55BF20
label_37e0a4:
    if (ctx->pc == 0x37E0A4u) {
        ctx->pc = 0x37E0A4u;
            // 0x37e0a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x37E0A8u;
        goto label_37e0a8;
    }
    ctx->pc = 0x37E0A0u;
    SET_GPR_U32(ctx, 31, 0x37E0A8u);
    ctx->pc = 0x37E0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E0A0u;
            // 0x37e0a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF20u;
    if (runtime->hasFunction(0x55BF20u)) {
        auto targetFn = runtime->lookupFunction(0x55BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E0A8u; }
        if (ctx->pc != 0x37E0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF20_0x55bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E0A8u; }
        if (ctx->pc != 0x37E0A8u) { return; }
    }
    ctx->pc = 0x37E0A8u;
label_37e0a8:
    // 0x37e0a8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x37e0a8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e0ac:
    // 0x37e0ac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x37e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37e0b0:
    // 0x37e0b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37e0b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37e0b4:
    // 0x37e0b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37e0b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37e0b8:
    // 0x37e0b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e0b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37e0bc:
    // 0x37e0bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37e0bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37e0c0:
    // 0x37e0c0: 0x0  nop
    ctx->pc = 0x37e0c0u;
    // NOP
label_37e0c4:
    // 0x37e0c4: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x37e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_37e0c8:
    // 0x37e0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e0cc:
    // 0x37e0cc: 0x0  nop
    ctx->pc = 0x37e0ccu;
    // NOP
label_37e0d0:
    // 0x37e0d0: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37e0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37e0d4:
    // 0x37e0d4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x37e0d4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e0d8:
    // 0x37e0d8: 0x0  nop
    ctx->pc = 0x37e0d8u;
    // NOP
label_37e0dc:
    // 0x37e0dc: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x37e0dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_37e0e0:
    // 0x37e0e0: 0xc157054  jal         func_55C150
label_37e0e4:
    if (ctx->pc == 0x37E0E4u) {
        ctx->pc = 0x37E0E4u;
            // 0x37e0e4: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x37E0E8u;
        goto label_37e0e8;
    }
    ctx->pc = 0x37E0E0u;
    SET_GPR_U32(ctx, 31, 0x37E0E8u);
    ctx->pc = 0x37E0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E0E0u;
            // 0x37e0e4: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E0E8u; }
        if (ctx->pc != 0x37E0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E0E8u; }
        if (ctx->pc != 0x37E0E8u) { return; }
    }
    ctx->pc = 0x37E0E8u;
label_37e0e8:
    // 0x37e0e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37e0ec:
    // 0x37e0ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37e0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e0f0:
    // 0x37e0f0: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37e0f4:
    // 0x37e0f4: 0xc0506ac  jal         func_141AB0
label_37e0f8:
    if (ctx->pc == 0x37E0F8u) {
        ctx->pc = 0x37E0F8u;
            // 0x37e0f8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37E0FCu;
        goto label_37e0fc;
    }
    ctx->pc = 0x37E0F4u;
    SET_GPR_U32(ctx, 31, 0x37E0FCu);
    ctx->pc = 0x37E0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E0F4u;
            // 0x37e0f8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E0FCu; }
        if (ctx->pc != 0x37E0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E0FCu; }
        if (ctx->pc != 0x37E0FCu) { return; }
    }
    ctx->pc = 0x37E0FCu;
label_37e0fc:
    // 0x37e0fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37e0fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37e100:
    // 0x37e100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e104:
    // 0x37e104: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37e104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37e108:
    // 0x37e108: 0x320f809  jalr        $t9
label_37e10c:
    if (ctx->pc == 0x37E10Cu) {
        ctx->pc = 0x37E10Cu;
            // 0x37e10c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37E110u;
        goto label_37e110;
    }
    ctx->pc = 0x37E108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E110u);
        ctx->pc = 0x37E10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E108u;
            // 0x37e10c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E110u; }
            if (ctx->pc != 0x37E110u) { return; }
        }
        }
    }
    ctx->pc = 0x37E110u;
label_37e110:
    // 0x37e110: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37e110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37e114:
    // 0x37e114: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x37e114u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_37e118:
    // 0x37e118: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x37e118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_37e11c:
    // 0x37e11c: 0x2610a210  addiu       $s0, $s0, -0x5DF0
    ctx->pc = 0x37e11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943248));
label_37e120:
    // 0x37e120: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x37e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37e124:
    // 0x37e124: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37e124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37e128:
    // 0x37e128: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x37e128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e12c:
    // 0x37e12c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37e12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e130:
    // 0x37e130: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37e130u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37e134:
    // 0x37e134: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37e134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37e138:
    // 0x37e138: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37e138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e13c:
    // 0x37e13c: 0x84482102  lh          $t0, 0x2102($v0)
    ctx->pc = 0x37e13cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_37e140:
    // 0x37e140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e144:
    // 0x37e144: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e148:
    // 0x37e148: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37e148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37e14c:
    // 0x37e14c: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37e14cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37e150:
    // 0x37e150: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x37e150u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37e154:
    // 0x37e154: 0x0  nop
    ctx->pc = 0x37e154u;
    // NOP
label_37e158:
    // 0x37e158: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x37e158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e15c:
    // 0x37e15c: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x37e15cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_37e160:
    // 0x37e160: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x37e160u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_37e164:
    // 0x37e164: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37e164u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37e168:
    // 0x37e168: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37e168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e16c:
    // 0x37e16c: 0xc0bc284  jal         func_2F0A10
label_37e170:
    if (ctx->pc == 0x37E170u) {
        ctx->pc = 0x37E170u;
            // 0x37e170: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37E174u;
        goto label_37e174;
    }
    ctx->pc = 0x37E16Cu;
    SET_GPR_U32(ctx, 31, 0x37E174u);
    ctx->pc = 0x37E170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E16Cu;
            // 0x37e170: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E174u; }
        if (ctx->pc != 0x37E174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E174u; }
        if (ctx->pc != 0x37E174u) { return; }
    }
    ctx->pc = 0x37E174u;
label_37e174:
    // 0x37e174: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x37e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e178:
    // 0x37e178: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37e178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37e17c:
    // 0x37e17c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e180:
    // 0x37e180: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37e180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37e184:
    // 0x37e184: 0x320f809  jalr        $t9
label_37e188:
    if (ctx->pc == 0x37E188u) {
        ctx->pc = 0x37E188u;
            // 0x37e188: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37E18Cu;
        goto label_37e18c;
    }
    ctx->pc = 0x37E184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E18Cu);
        ctx->pc = 0x37E188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E184u;
            // 0x37e188: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E18Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E18Cu; }
            if (ctx->pc != 0x37E18Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37E18Cu;
label_37e18c:
    // 0x37e18c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37e190:
    // 0x37e190: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37e190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37e194:
    // 0x37e194: 0xc4409c9c  lwc1        $f0, -0x6364($v0)
    ctx->pc = 0x37e194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e198:
    // 0x37e198: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x37e198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_37e19c:
    // 0x37e19c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37e19cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37e1a0:
    // 0x37e1a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37e1a4:
    // 0x37e1a4: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37e1a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37e1a8:
    // 0x37e1a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_37e1ac:
    // 0x37e1ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37e1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37e1b0:
    // 0x37e1b0: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37e1b4:
    // 0x37e1b4: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37e1b4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37e1b8:
    // 0x37e1b8: 0xc156fdc  jal         func_55BF70
label_37e1bc:
    if (ctx->pc == 0x37E1BCu) {
        ctx->pc = 0x37E1BCu;
            // 0x37e1bc: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->pc = 0x37E1C0u;
        goto label_37e1c0;
    }
    ctx->pc = 0x37E1B8u;
    SET_GPR_U32(ctx, 31, 0x37E1C0u);
    ctx->pc = 0x37E1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E1B8u;
            // 0x37e1bc: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF70u;
    if (runtime->hasFunction(0x55BF70u)) {
        auto targetFn = runtime->lookupFunction(0x55BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E1C0u; }
        if (ctx->pc != 0x37E1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF70_0x55bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E1C0u; }
        if (ctx->pc != 0x37E1C0u) { return; }
    }
    ctx->pc = 0x37E1C0u;
label_37e1c0:
    // 0x37e1c0: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x37e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_37e1c4:
    // 0x37e1c4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37e1c8:
    // 0x37e1c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e1cc:
    // 0x37e1cc: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x37e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_37e1d0:
    // 0x37e1d0: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37e1d0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37e1d4:
    // 0x37e1d4: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37e1d8:
    // 0x37e1d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37e1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37e1dc:
    // 0x37e1dc: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37e1dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37e1e0:
    // 0x37e1e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e1e4:
    // 0x37e1e4: 0xc64e00bc  lwc1        $f14, 0xBC($s2)
    ctx->pc = 0x37e1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_37e1e8:
    // 0x37e1e8: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37e1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37e1ec:
    // 0x37e1ec: 0xc15706c  jal         func_55C1B0
label_37e1f0:
    if (ctx->pc == 0x37E1F0u) {
        ctx->pc = 0x37E1F0u;
            // 0x37e1f0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x37E1F4u;
        goto label_37e1f4;
    }
    ctx->pc = 0x37E1ECu;
    SET_GPR_U32(ctx, 31, 0x37E1F4u);
    ctx->pc = 0x37E1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E1ECu;
            // 0x37e1f0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E1F4u; }
        if (ctx->pc != 0x37E1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E1F4u; }
        if (ctx->pc != 0x37E1F4u) { return; }
    }
    ctx->pc = 0x37E1F4u;
label_37e1f4:
    // 0x37e1f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37e1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37e1f8:
    // 0x37e1f8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x37e1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_37e1fc:
    // 0x37e1fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37e1fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37e200:
    // 0x37e200: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37e200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37e204:
    // 0x37e204: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37e204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37e208:
    // 0x37e208: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37e20c:
    // 0x37e20c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37e20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37e210:
    // 0x37e210: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37e210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37e214:
    // 0x37e214: 0x3e00008  jr          $ra
label_37e218:
    if (ctx->pc == 0x37E218u) {
        ctx->pc = 0x37E218u;
            // 0x37e218: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37E21Cu;
        goto label_37e21c;
    }
    ctx->pc = 0x37E214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E214u;
            // 0x37e218: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37E21Cu;
label_37e21c:
    // 0x37e21c: 0x0  nop
    ctx->pc = 0x37e21cu;
    // NOP
}
