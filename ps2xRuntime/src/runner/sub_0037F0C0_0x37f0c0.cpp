#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037F0C0
// Address: 0x37f0c0 - 0x37f3e0
void sub_0037F0C0_0x37f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F0C0_0x37f0c0");
#endif

    switch (ctx->pc) {
        case 0x37f0c0u: goto label_37f0c0;
        case 0x37f0c4u: goto label_37f0c4;
        case 0x37f0c8u: goto label_37f0c8;
        case 0x37f0ccu: goto label_37f0cc;
        case 0x37f0d0u: goto label_37f0d0;
        case 0x37f0d4u: goto label_37f0d4;
        case 0x37f0d8u: goto label_37f0d8;
        case 0x37f0dcu: goto label_37f0dc;
        case 0x37f0e0u: goto label_37f0e0;
        case 0x37f0e4u: goto label_37f0e4;
        case 0x37f0e8u: goto label_37f0e8;
        case 0x37f0ecu: goto label_37f0ec;
        case 0x37f0f0u: goto label_37f0f0;
        case 0x37f0f4u: goto label_37f0f4;
        case 0x37f0f8u: goto label_37f0f8;
        case 0x37f0fcu: goto label_37f0fc;
        case 0x37f100u: goto label_37f100;
        case 0x37f104u: goto label_37f104;
        case 0x37f108u: goto label_37f108;
        case 0x37f10cu: goto label_37f10c;
        case 0x37f110u: goto label_37f110;
        case 0x37f114u: goto label_37f114;
        case 0x37f118u: goto label_37f118;
        case 0x37f11cu: goto label_37f11c;
        case 0x37f120u: goto label_37f120;
        case 0x37f124u: goto label_37f124;
        case 0x37f128u: goto label_37f128;
        case 0x37f12cu: goto label_37f12c;
        case 0x37f130u: goto label_37f130;
        case 0x37f134u: goto label_37f134;
        case 0x37f138u: goto label_37f138;
        case 0x37f13cu: goto label_37f13c;
        case 0x37f140u: goto label_37f140;
        case 0x37f144u: goto label_37f144;
        case 0x37f148u: goto label_37f148;
        case 0x37f14cu: goto label_37f14c;
        case 0x37f150u: goto label_37f150;
        case 0x37f154u: goto label_37f154;
        case 0x37f158u: goto label_37f158;
        case 0x37f15cu: goto label_37f15c;
        case 0x37f160u: goto label_37f160;
        case 0x37f164u: goto label_37f164;
        case 0x37f168u: goto label_37f168;
        case 0x37f16cu: goto label_37f16c;
        case 0x37f170u: goto label_37f170;
        case 0x37f174u: goto label_37f174;
        case 0x37f178u: goto label_37f178;
        case 0x37f17cu: goto label_37f17c;
        case 0x37f180u: goto label_37f180;
        case 0x37f184u: goto label_37f184;
        case 0x37f188u: goto label_37f188;
        case 0x37f18cu: goto label_37f18c;
        case 0x37f190u: goto label_37f190;
        case 0x37f194u: goto label_37f194;
        case 0x37f198u: goto label_37f198;
        case 0x37f19cu: goto label_37f19c;
        case 0x37f1a0u: goto label_37f1a0;
        case 0x37f1a4u: goto label_37f1a4;
        case 0x37f1a8u: goto label_37f1a8;
        case 0x37f1acu: goto label_37f1ac;
        case 0x37f1b0u: goto label_37f1b0;
        case 0x37f1b4u: goto label_37f1b4;
        case 0x37f1b8u: goto label_37f1b8;
        case 0x37f1bcu: goto label_37f1bc;
        case 0x37f1c0u: goto label_37f1c0;
        case 0x37f1c4u: goto label_37f1c4;
        case 0x37f1c8u: goto label_37f1c8;
        case 0x37f1ccu: goto label_37f1cc;
        case 0x37f1d0u: goto label_37f1d0;
        case 0x37f1d4u: goto label_37f1d4;
        case 0x37f1d8u: goto label_37f1d8;
        case 0x37f1dcu: goto label_37f1dc;
        case 0x37f1e0u: goto label_37f1e0;
        case 0x37f1e4u: goto label_37f1e4;
        case 0x37f1e8u: goto label_37f1e8;
        case 0x37f1ecu: goto label_37f1ec;
        case 0x37f1f0u: goto label_37f1f0;
        case 0x37f1f4u: goto label_37f1f4;
        case 0x37f1f8u: goto label_37f1f8;
        case 0x37f1fcu: goto label_37f1fc;
        case 0x37f200u: goto label_37f200;
        case 0x37f204u: goto label_37f204;
        case 0x37f208u: goto label_37f208;
        case 0x37f20cu: goto label_37f20c;
        case 0x37f210u: goto label_37f210;
        case 0x37f214u: goto label_37f214;
        case 0x37f218u: goto label_37f218;
        case 0x37f21cu: goto label_37f21c;
        case 0x37f220u: goto label_37f220;
        case 0x37f224u: goto label_37f224;
        case 0x37f228u: goto label_37f228;
        case 0x37f22cu: goto label_37f22c;
        case 0x37f230u: goto label_37f230;
        case 0x37f234u: goto label_37f234;
        case 0x37f238u: goto label_37f238;
        case 0x37f23cu: goto label_37f23c;
        case 0x37f240u: goto label_37f240;
        case 0x37f244u: goto label_37f244;
        case 0x37f248u: goto label_37f248;
        case 0x37f24cu: goto label_37f24c;
        case 0x37f250u: goto label_37f250;
        case 0x37f254u: goto label_37f254;
        case 0x37f258u: goto label_37f258;
        case 0x37f25cu: goto label_37f25c;
        case 0x37f260u: goto label_37f260;
        case 0x37f264u: goto label_37f264;
        case 0x37f268u: goto label_37f268;
        case 0x37f26cu: goto label_37f26c;
        case 0x37f270u: goto label_37f270;
        case 0x37f274u: goto label_37f274;
        case 0x37f278u: goto label_37f278;
        case 0x37f27cu: goto label_37f27c;
        case 0x37f280u: goto label_37f280;
        case 0x37f284u: goto label_37f284;
        case 0x37f288u: goto label_37f288;
        case 0x37f28cu: goto label_37f28c;
        case 0x37f290u: goto label_37f290;
        case 0x37f294u: goto label_37f294;
        case 0x37f298u: goto label_37f298;
        case 0x37f29cu: goto label_37f29c;
        case 0x37f2a0u: goto label_37f2a0;
        case 0x37f2a4u: goto label_37f2a4;
        case 0x37f2a8u: goto label_37f2a8;
        case 0x37f2acu: goto label_37f2ac;
        case 0x37f2b0u: goto label_37f2b0;
        case 0x37f2b4u: goto label_37f2b4;
        case 0x37f2b8u: goto label_37f2b8;
        case 0x37f2bcu: goto label_37f2bc;
        case 0x37f2c0u: goto label_37f2c0;
        case 0x37f2c4u: goto label_37f2c4;
        case 0x37f2c8u: goto label_37f2c8;
        case 0x37f2ccu: goto label_37f2cc;
        case 0x37f2d0u: goto label_37f2d0;
        case 0x37f2d4u: goto label_37f2d4;
        case 0x37f2d8u: goto label_37f2d8;
        case 0x37f2dcu: goto label_37f2dc;
        case 0x37f2e0u: goto label_37f2e0;
        case 0x37f2e4u: goto label_37f2e4;
        case 0x37f2e8u: goto label_37f2e8;
        case 0x37f2ecu: goto label_37f2ec;
        case 0x37f2f0u: goto label_37f2f0;
        case 0x37f2f4u: goto label_37f2f4;
        case 0x37f2f8u: goto label_37f2f8;
        case 0x37f2fcu: goto label_37f2fc;
        case 0x37f300u: goto label_37f300;
        case 0x37f304u: goto label_37f304;
        case 0x37f308u: goto label_37f308;
        case 0x37f30cu: goto label_37f30c;
        case 0x37f310u: goto label_37f310;
        case 0x37f314u: goto label_37f314;
        case 0x37f318u: goto label_37f318;
        case 0x37f31cu: goto label_37f31c;
        case 0x37f320u: goto label_37f320;
        case 0x37f324u: goto label_37f324;
        case 0x37f328u: goto label_37f328;
        case 0x37f32cu: goto label_37f32c;
        case 0x37f330u: goto label_37f330;
        case 0x37f334u: goto label_37f334;
        case 0x37f338u: goto label_37f338;
        case 0x37f33cu: goto label_37f33c;
        case 0x37f340u: goto label_37f340;
        case 0x37f344u: goto label_37f344;
        case 0x37f348u: goto label_37f348;
        case 0x37f34cu: goto label_37f34c;
        case 0x37f350u: goto label_37f350;
        case 0x37f354u: goto label_37f354;
        case 0x37f358u: goto label_37f358;
        case 0x37f35cu: goto label_37f35c;
        case 0x37f360u: goto label_37f360;
        case 0x37f364u: goto label_37f364;
        case 0x37f368u: goto label_37f368;
        case 0x37f36cu: goto label_37f36c;
        case 0x37f370u: goto label_37f370;
        case 0x37f374u: goto label_37f374;
        case 0x37f378u: goto label_37f378;
        case 0x37f37cu: goto label_37f37c;
        case 0x37f380u: goto label_37f380;
        case 0x37f384u: goto label_37f384;
        case 0x37f388u: goto label_37f388;
        case 0x37f38cu: goto label_37f38c;
        case 0x37f390u: goto label_37f390;
        case 0x37f394u: goto label_37f394;
        case 0x37f398u: goto label_37f398;
        case 0x37f39cu: goto label_37f39c;
        case 0x37f3a0u: goto label_37f3a0;
        case 0x37f3a4u: goto label_37f3a4;
        case 0x37f3a8u: goto label_37f3a8;
        case 0x37f3acu: goto label_37f3ac;
        case 0x37f3b0u: goto label_37f3b0;
        case 0x37f3b4u: goto label_37f3b4;
        case 0x37f3b8u: goto label_37f3b8;
        case 0x37f3bcu: goto label_37f3bc;
        case 0x37f3c0u: goto label_37f3c0;
        case 0x37f3c4u: goto label_37f3c4;
        case 0x37f3c8u: goto label_37f3c8;
        case 0x37f3ccu: goto label_37f3cc;
        case 0x37f3d0u: goto label_37f3d0;
        case 0x37f3d4u: goto label_37f3d4;
        case 0x37f3d8u: goto label_37f3d8;
        case 0x37f3dcu: goto label_37f3dc;
        default: break;
    }

    ctx->pc = 0x37f0c0u;

label_37f0c0:
    // 0x37f0c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x37f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_37f0c4:
    // 0x37f0c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37f0c8:
    // 0x37f0c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x37f0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_37f0cc:
    // 0x37f0cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37f0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37f0d0:
    // 0x37f0d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37f0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_37f0d4:
    // 0x37f0d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37f0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37f0d8:
    // 0x37f0d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37f0dc:
    // 0x37f0dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37f0e0:
    // 0x37f0e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37f0e4:
    // 0x37f0e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37f0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37f0e8:
    // 0x37f0e8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x37f0e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37f0ec:
    // 0x37f0ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37f0ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37f0f0:
    // 0x37f0f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37f0f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37f0f4:
    // 0x37f0f4: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x37f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_37f0f8:
    // 0x37f0f8: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x37f0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37f0fc:
    // 0x37f0fc: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x37f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_37f100:
    // 0x37f100: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x37f100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_37f104:
    // 0x37f104: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37f104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f108:
    // 0x37f108: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37f108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37f10c:
    // 0x37f10c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37f10cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37f110:
    // 0x37f110: 0x2483ffd3  addiu       $v1, $a0, -0x2D
    ctx->pc = 0x37f110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
label_37f114:
    // 0x37f114: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37f114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37f118:
    // 0x37f118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37f118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f11c:
    // 0x37f11c: 0xc0506ac  jal         func_141AB0
label_37f120:
    if (ctx->pc == 0x37F120u) {
        ctx->pc = 0x37F120u;
            // 0x37f120: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37F124u;
        goto label_37f124;
    }
    ctx->pc = 0x37F11Cu;
    SET_GPR_U32(ctx, 31, 0x37F124u);
    ctx->pc = 0x37F120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F11Cu;
            // 0x37f120: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F124u; }
        if (ctx->pc != 0x37F124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F124u; }
        if (ctx->pc != 0x37F124u) { return; }
    }
    ctx->pc = 0x37F124u;
label_37f124:
    // 0x37f124: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37f124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37f128:
    // 0x37f128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f12c:
    // 0x37f12c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37f12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37f130:
    // 0x37f130: 0x320f809  jalr        $t9
label_37f134:
    if (ctx->pc == 0x37F134u) {
        ctx->pc = 0x37F134u;
            // 0x37f134: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37F138u;
        goto label_37f138;
    }
    ctx->pc = 0x37F130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F138u);
        ctx->pc = 0x37F134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F130u;
            // 0x37f134: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F138u; }
            if (ctx->pc != 0x37F138u) { return; }
        }
        }
    }
    ctx->pc = 0x37F138u;
label_37f138:
    // 0x37f138: 0x3c140065  lui         $s4, 0x65
    ctx->pc = 0x37f138u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)101 << 16));
label_37f13c:
    // 0x37f13c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37f140:
    // 0x37f140: 0x26945870  addiu       $s4, $s4, 0x5870
    ctx->pc = 0x37f140u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 22640));
label_37f144:
    // 0x37f144: 0x84535732  lh          $s3, 0x5732($v0)
    ctx->pc = 0x37f144u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22322)));
label_37f148:
    // 0x37f148: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x37f148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f14c:
    // 0x37f14c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37f150:
    // 0x37f150: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x37f150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37f154:
    // 0x37f154: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37f154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37f158:
    // 0x37f158: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37f158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37f15c:
    // 0x37f15c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f160:
    // 0x37f160: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37f160u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37f164:
    // 0x37f164: 0x84525730  lh          $s2, 0x5730($v0)
    ctx->pc = 0x37f164u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22320)));
label_37f168:
    // 0x37f168: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37f168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37f16c:
    // 0x37f16c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x37f16cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f170:
    // 0x37f170: 0x0  nop
    ctx->pc = 0x37f170u;
    // NOP
label_37f174:
    // 0x37f174: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x37f174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37f178:
    // 0x37f178: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x37f178u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f17c:
    // 0x37f17c: 0x0  nop
    ctx->pc = 0x37f17cu;
    // NOP
label_37f180:
    // 0x37f180: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37f180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37f184:
    // 0x37f184: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37f184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37f188:
    // 0x37f188: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f18c:
    // 0x37f18c: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37f18cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37f190:
    // 0x37f190: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37f190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37f194:
    // 0x37f194: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37f194u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37f198:
    // 0x37f198: 0xc0bc284  jal         func_2F0A10
label_37f19c:
    if (ctx->pc == 0x37F19Cu) {
        ctx->pc = 0x37F19Cu;
            // 0x37f19c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37F1A0u;
        goto label_37f1a0;
    }
    ctx->pc = 0x37F198u;
    SET_GPR_U32(ctx, 31, 0x37F1A0u);
    ctx->pc = 0x37F19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F198u;
            // 0x37f19c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F1A0u; }
        if (ctx->pc != 0x37F1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F1A0u; }
        if (ctx->pc != 0x37F1A0u) { return; }
    }
    ctx->pc = 0x37F1A0u;
label_37f1a0:
    // 0x37f1a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37f1a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37f1a4:
    // 0x37f1a4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37f1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37f1a8:
    // 0x37f1a8: 0x320f809  jalr        $t9
label_37f1ac:
    if (ctx->pc == 0x37F1ACu) {
        ctx->pc = 0x37F1ACu;
            // 0x37f1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37F1B0u;
        goto label_37f1b0;
    }
    ctx->pc = 0x37F1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F1B0u);
        ctx->pc = 0x37F1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F1A8u;
            // 0x37f1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F1B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F1B0u; }
            if (ctx->pc != 0x37F1B0u) { return; }
        }
        }
    }
    ctx->pc = 0x37F1B0u;
label_37f1b0:
    // 0x37f1b0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x37f1b0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f1b4:
    // 0x37f1b4: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x37f1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
label_37f1b8:
    // 0x37f1b8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x37f1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37f1bc:
    // 0x37f1bc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x37f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_37f1c0:
    // 0x37f1c0: 0x3c0623ff  lui         $a2, 0x23FF
    ctx->pc = 0x37f1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9215 << 16));
label_37f1c4:
    // 0x37f1c4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x37f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_37f1c8:
    // 0x37f1c8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37f1cc:
    // 0x37f1cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37f1d0:
    // 0x37f1d0: 0x24a55740  addiu       $a1, $a1, 0x5740
    ctx->pc = 0x37f1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22336));
label_37f1d4:
    // 0x37f1d4: 0x34c623ff  ori         $a2, $a2, 0x23FF
    ctx->pc = 0x37f1d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)9215);
label_37f1d8:
    // 0x37f1d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f1d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f1dc:
    // 0x37f1dc: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x37f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37f1e0:
    // 0x37f1e0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x37f1e0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f1e4:
    // 0x37f1e4: 0x0  nop
    ctx->pc = 0x37f1e4u;
    // NOP
label_37f1e8:
    // 0x37f1e8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37f1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37f1ec:
    // 0x37f1ec: 0x4601ab00  add.s       $f12, $f21, $f1
    ctx->pc = 0x37f1ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37f1f0:
    // 0x37f1f0: 0xc4615748  lwc1        $f1, 0x5748($v1)
    ctx->pc = 0x37f1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37f1f4:
    // 0x37f1f4: 0xc440574c  lwc1        $f0, 0x574C($v0)
    ctx->pc = 0x37f1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f1f8:
    // 0x37f1f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x37f1f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_37f1fc:
    // 0x37f1fc: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x37f1fcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_37f200:
    // 0x37f200: 0x44889000  mtc1        $t0, $f18
    ctx->pc = 0x37f200u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37f204:
    // 0x37f204: 0xc0bc284  jal         func_2F0A10
label_37f208:
    if (ctx->pc == 0x37F208u) {
        ctx->pc = 0x37F208u;
            // 0x37f208: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x37F20Cu;
        goto label_37f20c;
    }
    ctx->pc = 0x37F204u;
    SET_GPR_U32(ctx, 31, 0x37F20Cu);
    ctx->pc = 0x37F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F204u;
            // 0x37f208: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F20Cu; }
        if (ctx->pc != 0x37F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F20Cu; }
        if (ctx->pc != 0x37F20Cu) { return; }
    }
    ctx->pc = 0x37F20Cu;
label_37f20c:
    // 0x37f20c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37f20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37f210:
    // 0x37f210: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37f210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37f214:
    // 0x37f214: 0x320f809  jalr        $t9
label_37f218:
    if (ctx->pc == 0x37F218u) {
        ctx->pc = 0x37F218u;
            // 0x37f218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37F21Cu;
        goto label_37f21c;
    }
    ctx->pc = 0x37F214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F21Cu);
        ctx->pc = 0x37F218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F214u;
            // 0x37f218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F21Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F21Cu; }
            if (ctx->pc != 0x37F21Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37F21Cu;
label_37f21c:
    // 0x37f21c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37f220:
    // 0x37f220: 0x8e3200dc  lw          $s2, 0xDC($s1)
    ctx->pc = 0x37f220u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_37f224:
    // 0x37f224: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x37f224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_37f228:
    // 0x37f228: 0x8c530080  lw          $s3, 0x80($v0)
    ctx->pc = 0x37f228u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_37f22c:
    // 0x37f22c: 0xc157054  jal         func_55C150
label_37f230:
    if (ctx->pc == 0x37F230u) {
        ctx->pc = 0x37F230u;
            // 0x37f230: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x37F234u;
        goto label_37f234;
    }
    ctx->pc = 0x37F22Cu;
    SET_GPR_U32(ctx, 31, 0x37F234u);
    ctx->pc = 0x37F230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F22Cu;
            // 0x37f230: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F234u; }
        if (ctx->pc != 0x37F234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F234u; }
        if (ctx->pc != 0x37F234u) { return; }
    }
    ctx->pc = 0x37F234u;
label_37f234:
    // 0x37f234: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x37f234u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37f238:
    // 0x37f238: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37f238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37f23c:
    // 0x37f23c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37f23cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37f240:
    // 0x37f240: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x37f240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_37f244:
    // 0x37f244: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37f248:
    // 0x37f248: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37f24c:
    // 0x37f24c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37f24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37f250:
    // 0x37f250: 0xc440a21c  lwc1        $f0, -0x5DE4($v0)
    ctx->pc = 0x37f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f254:
    // 0x37f254: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37f258:
    // 0x37f258: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37f25c:
    // 0x37f25c: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x37f25cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_37f260:
    // 0x37f260: 0xc156fc8  jal         func_55BF20
label_37f264:
    if (ctx->pc == 0x37F264u) {
        ctx->pc = 0x37F264u;
            // 0x37f264: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x37F268u;
        goto label_37f268;
    }
    ctx->pc = 0x37F260u;
    SET_GPR_U32(ctx, 31, 0x37F268u);
    ctx->pc = 0x37F264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F260u;
            // 0x37f264: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF20u;
    if (runtime->hasFunction(0x55BF20u)) {
        auto targetFn = runtime->lookupFunction(0x55BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F268u; }
        if (ctx->pc != 0x37F268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF20_0x55bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F268u; }
        if (ctx->pc != 0x37F268u) { return; }
    }
    ctx->pc = 0x37F268u;
label_37f268:
    // 0x37f268: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x37f268u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37f26c:
    // 0x37f26c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x37f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_37f270:
    // 0x37f270: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37f270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37f274:
    // 0x37f274: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37f278:
    // 0x37f278: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37f27c:
    // 0x37f27c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37f27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37f280:
    // 0x37f280: 0x0  nop
    ctx->pc = 0x37f280u;
    // NOP
label_37f284:
    // 0x37f284: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x37f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_37f288:
    // 0x37f288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37f288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f28c:
    // 0x37f28c: 0x0  nop
    ctx->pc = 0x37f28cu;
    // NOP
label_37f290:
    // 0x37f290: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37f290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37f294:
    // 0x37f294: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x37f294u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f298:
    // 0x37f298: 0x0  nop
    ctx->pc = 0x37f298u;
    // NOP
label_37f29c:
    // 0x37f29c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x37f29cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_37f2a0:
    // 0x37f2a0: 0xc157054  jal         func_55C150
label_37f2a4:
    if (ctx->pc == 0x37F2A4u) {
        ctx->pc = 0x37F2A4u;
            // 0x37f2a4: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x37F2A8u;
        goto label_37f2a8;
    }
    ctx->pc = 0x37F2A0u;
    SET_GPR_U32(ctx, 31, 0x37F2A8u);
    ctx->pc = 0x37F2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F2A0u;
            // 0x37f2a4: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F2A8u; }
        if (ctx->pc != 0x37F2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F2A8u; }
        if (ctx->pc != 0x37F2A8u) { return; }
    }
    ctx->pc = 0x37F2A8u;
label_37f2a8:
    // 0x37f2a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37f2ac:
    // 0x37f2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f2b0:
    // 0x37f2b0: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37f2b4:
    // 0x37f2b4: 0xc0506ac  jal         func_141AB0
label_37f2b8:
    if (ctx->pc == 0x37F2B8u) {
        ctx->pc = 0x37F2B8u;
            // 0x37f2b8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37F2BCu;
        goto label_37f2bc;
    }
    ctx->pc = 0x37F2B4u;
    SET_GPR_U32(ctx, 31, 0x37F2BCu);
    ctx->pc = 0x37F2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F2B4u;
            // 0x37f2b8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F2BCu; }
        if (ctx->pc != 0x37F2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F2BCu; }
        if (ctx->pc != 0x37F2BCu) { return; }
    }
    ctx->pc = 0x37F2BCu;
label_37f2bc:
    // 0x37f2bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37f2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37f2c0:
    // 0x37f2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f2c4:
    // 0x37f2c4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37f2c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37f2c8:
    // 0x37f2c8: 0x320f809  jalr        $t9
label_37f2cc:
    if (ctx->pc == 0x37F2CCu) {
        ctx->pc = 0x37F2CCu;
            // 0x37f2cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37F2D0u;
        goto label_37f2d0;
    }
    ctx->pc = 0x37F2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F2D0u);
        ctx->pc = 0x37F2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F2C8u;
            // 0x37f2cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F2D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F2D0u; }
            if (ctx->pc != 0x37F2D0u) { return; }
        }
        }
    }
    ctx->pc = 0x37F2D0u;
label_37f2d0:
    // 0x37f2d0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37f2d4:
    // 0x37f2d4: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x37f2d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_37f2d8:
    // 0x37f2d8: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x37f2d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_37f2dc:
    // 0x37f2dc: 0x2652a210  addiu       $s2, $s2, -0x5DF0
    ctx->pc = 0x37f2dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943248));
label_37f2e0:
    // 0x37f2e0: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x37f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37f2e4:
    // 0x37f2e4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37f2e8:
    // 0x37f2e8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x37f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f2ec:
    // 0x37f2ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37f2f0:
    // 0x37f2f0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37f2f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37f2f4:
    // 0x37f2f4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37f2f8:
    // 0x37f2f8: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37f2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37f2fc:
    // 0x37f2fc: 0x84482102  lh          $t0, 0x2102($v0)
    ctx->pc = 0x37f2fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_37f300:
    // 0x37f300: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37f300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37f304:
    // 0x37f304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f308:
    // 0x37f308: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f30c:
    // 0x37f30c: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37f30cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37f310:
    // 0x37f310: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x37f310u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37f314:
    // 0x37f314: 0x0  nop
    ctx->pc = 0x37f314u;
    // NOP
label_37f318:
    // 0x37f318: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x37f318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37f31c:
    // 0x37f31c: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x37f31cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_37f320:
    // 0x37f320: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x37f320u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_37f324:
    // 0x37f324: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37f324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37f328:
    // 0x37f328: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37f328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37f32c:
    // 0x37f32c: 0xc0bc284  jal         func_2F0A10
label_37f330:
    if (ctx->pc == 0x37F330u) {
        ctx->pc = 0x37F330u;
            // 0x37f330: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37F334u;
        goto label_37f334;
    }
    ctx->pc = 0x37F32Cu;
    SET_GPR_U32(ctx, 31, 0x37F334u);
    ctx->pc = 0x37F330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F32Cu;
            // 0x37f330: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F334u; }
        if (ctx->pc != 0x37F334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F334u; }
        if (ctx->pc != 0x37F334u) { return; }
    }
    ctx->pc = 0x37F334u;
label_37f334:
    // 0x37f334: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x37f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f338:
    // 0x37f338: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37f338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37f33c:
    // 0x37f33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f340:
    // 0x37f340: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37f340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37f344:
    // 0x37f344: 0x320f809  jalr        $t9
label_37f348:
    if (ctx->pc == 0x37F348u) {
        ctx->pc = 0x37F348u;
            // 0x37f348: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37F34Cu;
        goto label_37f34c;
    }
    ctx->pc = 0x37F344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F34Cu);
        ctx->pc = 0x37F348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F344u;
            // 0x37f348: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F34Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F34Cu; }
            if (ctx->pc != 0x37F34Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37F34Cu;
label_37f34c:
    // 0x37f34c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37f350:
    // 0x37f350: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37f350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37f354:
    // 0x37f354: 0xc4409c9c  lwc1        $f0, -0x6364($v0)
    ctx->pc = 0x37f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f358:
    // 0x37f358: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x37f358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_37f35c:
    // 0x37f35c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37f35cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37f360:
    // 0x37f360: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x37f360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_37f364:
    // 0x37f364: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37f364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37f368:
    // 0x37f368: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37f368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_37f36c:
    // 0x37f36c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37f36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37f370:
    // 0x37f370: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f374:
    // 0x37f374: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37f374u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37f378:
    // 0x37f378: 0xc156fdc  jal         func_55BF70
label_37f37c:
    if (ctx->pc == 0x37F37Cu) {
        ctx->pc = 0x37F37Cu;
            // 0x37f37c: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->pc = 0x37F380u;
        goto label_37f380;
    }
    ctx->pc = 0x37F378u;
    SET_GPR_U32(ctx, 31, 0x37F380u);
    ctx->pc = 0x37F37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F378u;
            // 0x37f37c: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF70u;
    if (runtime->hasFunction(0x55BF70u)) {
        auto targetFn = runtime->lookupFunction(0x55BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F380u; }
        if (ctx->pc != 0x37F380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF70_0x55bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F380u; }
        if (ctx->pc != 0x37F380u) { return; }
    }
    ctx->pc = 0x37F380u;
label_37f380:
    // 0x37f380: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x37f380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_37f384:
    // 0x37f384: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37f384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37f388:
    // 0x37f388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37f388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f38c:
    // 0x37f38c: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x37f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_37f390:
    // 0x37f390: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37f390u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37f394:
    // 0x37f394: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f398:
    // 0x37f398: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x37f398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_37f39c:
    // 0x37f39c: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37f39cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37f3a0:
    // 0x37f3a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f3a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f3a4:
    // 0x37f3a4: 0xc62e00bc  lwc1        $f14, 0xBC($s1)
    ctx->pc = 0x37f3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_37f3a8:
    // 0x37f3a8: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37f3a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37f3ac:
    // 0x37f3ac: 0xc15706c  jal         func_55C1B0
label_37f3b0:
    if (ctx->pc == 0x37F3B0u) {
        ctx->pc = 0x37F3B0u;
            // 0x37f3b0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x37F3B4u;
        goto label_37f3b4;
    }
    ctx->pc = 0x37F3ACu;
    SET_GPR_U32(ctx, 31, 0x37F3B4u);
    ctx->pc = 0x37F3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F3ACu;
            // 0x37f3b0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F3B4u; }
        if (ctx->pc != 0x37F3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F3B4u; }
        if (ctx->pc != 0x37F3B4u) { return; }
    }
    ctx->pc = 0x37F3B4u;
label_37f3b4:
    // 0x37f3b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x37f3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_37f3b8:
    // 0x37f3b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x37f3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_37f3bc:
    // 0x37f3bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37f3bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37f3c0:
    // 0x37f3c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37f3c4:
    // 0x37f3c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37f3c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37f3c8:
    // 0x37f3c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37f3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37f3cc:
    // 0x37f3cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37f3ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37f3d0:
    // 0x37f3d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37f3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37f3d4:
    // 0x37f3d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37f3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37f3d8:
    // 0x37f3d8: 0x3e00008  jr          $ra
label_37f3dc:
    if (ctx->pc == 0x37F3DCu) {
        ctx->pc = 0x37F3DCu;
            // 0x37f3dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x37F3E0u;
        goto label_fallthrough_0x37f3d8;
    }
    ctx->pc = 0x37F3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F3D8u;
            // 0x37f3dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x37f3d8:
    ctx->pc = 0x37F3E0u;
}
