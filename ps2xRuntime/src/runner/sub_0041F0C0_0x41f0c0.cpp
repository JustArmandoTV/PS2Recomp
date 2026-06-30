#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041F0C0
// Address: 0x41f0c0 - 0x41f290
void sub_0041F0C0_0x41f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F0C0_0x41f0c0");
#endif

    switch (ctx->pc) {
        case 0x41f0c0u: goto label_41f0c0;
        case 0x41f0c4u: goto label_41f0c4;
        case 0x41f0c8u: goto label_41f0c8;
        case 0x41f0ccu: goto label_41f0cc;
        case 0x41f0d0u: goto label_41f0d0;
        case 0x41f0d4u: goto label_41f0d4;
        case 0x41f0d8u: goto label_41f0d8;
        case 0x41f0dcu: goto label_41f0dc;
        case 0x41f0e0u: goto label_41f0e0;
        case 0x41f0e4u: goto label_41f0e4;
        case 0x41f0e8u: goto label_41f0e8;
        case 0x41f0ecu: goto label_41f0ec;
        case 0x41f0f0u: goto label_41f0f0;
        case 0x41f0f4u: goto label_41f0f4;
        case 0x41f0f8u: goto label_41f0f8;
        case 0x41f0fcu: goto label_41f0fc;
        case 0x41f100u: goto label_41f100;
        case 0x41f104u: goto label_41f104;
        case 0x41f108u: goto label_41f108;
        case 0x41f10cu: goto label_41f10c;
        case 0x41f110u: goto label_41f110;
        case 0x41f114u: goto label_41f114;
        case 0x41f118u: goto label_41f118;
        case 0x41f11cu: goto label_41f11c;
        case 0x41f120u: goto label_41f120;
        case 0x41f124u: goto label_41f124;
        case 0x41f128u: goto label_41f128;
        case 0x41f12cu: goto label_41f12c;
        case 0x41f130u: goto label_41f130;
        case 0x41f134u: goto label_41f134;
        case 0x41f138u: goto label_41f138;
        case 0x41f13cu: goto label_41f13c;
        case 0x41f140u: goto label_41f140;
        case 0x41f144u: goto label_41f144;
        case 0x41f148u: goto label_41f148;
        case 0x41f14cu: goto label_41f14c;
        case 0x41f150u: goto label_41f150;
        case 0x41f154u: goto label_41f154;
        case 0x41f158u: goto label_41f158;
        case 0x41f15cu: goto label_41f15c;
        case 0x41f160u: goto label_41f160;
        case 0x41f164u: goto label_41f164;
        case 0x41f168u: goto label_41f168;
        case 0x41f16cu: goto label_41f16c;
        case 0x41f170u: goto label_41f170;
        case 0x41f174u: goto label_41f174;
        case 0x41f178u: goto label_41f178;
        case 0x41f17cu: goto label_41f17c;
        case 0x41f180u: goto label_41f180;
        case 0x41f184u: goto label_41f184;
        case 0x41f188u: goto label_41f188;
        case 0x41f18cu: goto label_41f18c;
        case 0x41f190u: goto label_41f190;
        case 0x41f194u: goto label_41f194;
        case 0x41f198u: goto label_41f198;
        case 0x41f19cu: goto label_41f19c;
        case 0x41f1a0u: goto label_41f1a0;
        case 0x41f1a4u: goto label_41f1a4;
        case 0x41f1a8u: goto label_41f1a8;
        case 0x41f1acu: goto label_41f1ac;
        case 0x41f1b0u: goto label_41f1b0;
        case 0x41f1b4u: goto label_41f1b4;
        case 0x41f1b8u: goto label_41f1b8;
        case 0x41f1bcu: goto label_41f1bc;
        case 0x41f1c0u: goto label_41f1c0;
        case 0x41f1c4u: goto label_41f1c4;
        case 0x41f1c8u: goto label_41f1c8;
        case 0x41f1ccu: goto label_41f1cc;
        case 0x41f1d0u: goto label_41f1d0;
        case 0x41f1d4u: goto label_41f1d4;
        case 0x41f1d8u: goto label_41f1d8;
        case 0x41f1dcu: goto label_41f1dc;
        case 0x41f1e0u: goto label_41f1e0;
        case 0x41f1e4u: goto label_41f1e4;
        case 0x41f1e8u: goto label_41f1e8;
        case 0x41f1ecu: goto label_41f1ec;
        case 0x41f1f0u: goto label_41f1f0;
        case 0x41f1f4u: goto label_41f1f4;
        case 0x41f1f8u: goto label_41f1f8;
        case 0x41f1fcu: goto label_41f1fc;
        case 0x41f200u: goto label_41f200;
        case 0x41f204u: goto label_41f204;
        case 0x41f208u: goto label_41f208;
        case 0x41f20cu: goto label_41f20c;
        case 0x41f210u: goto label_41f210;
        case 0x41f214u: goto label_41f214;
        case 0x41f218u: goto label_41f218;
        case 0x41f21cu: goto label_41f21c;
        case 0x41f220u: goto label_41f220;
        case 0x41f224u: goto label_41f224;
        case 0x41f228u: goto label_41f228;
        case 0x41f22cu: goto label_41f22c;
        case 0x41f230u: goto label_41f230;
        case 0x41f234u: goto label_41f234;
        case 0x41f238u: goto label_41f238;
        case 0x41f23cu: goto label_41f23c;
        case 0x41f240u: goto label_41f240;
        case 0x41f244u: goto label_41f244;
        case 0x41f248u: goto label_41f248;
        case 0x41f24cu: goto label_41f24c;
        case 0x41f250u: goto label_41f250;
        case 0x41f254u: goto label_41f254;
        case 0x41f258u: goto label_41f258;
        case 0x41f25cu: goto label_41f25c;
        case 0x41f260u: goto label_41f260;
        case 0x41f264u: goto label_41f264;
        case 0x41f268u: goto label_41f268;
        case 0x41f26cu: goto label_41f26c;
        case 0x41f270u: goto label_41f270;
        case 0x41f274u: goto label_41f274;
        case 0x41f278u: goto label_41f278;
        case 0x41f27cu: goto label_41f27c;
        case 0x41f280u: goto label_41f280;
        case 0x41f284u: goto label_41f284;
        case 0x41f288u: goto label_41f288;
        case 0x41f28cu: goto label_41f28c;
        default: break;
    }

    ctx->pc = 0x41f0c0u;

label_41f0c0:
    // 0x41f0c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x41f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_41f0c4:
    // 0x41f0c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x41f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_41f0c8:
    // 0x41f0c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41f0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41f0cc:
    // 0x41f0cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x41f0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_41f0d0:
    // 0x41f0d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41f0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41f0d4:
    // 0x41f0d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x41f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_41f0d8:
    // 0x41f0d8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x41f0d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_41f0dc:
    // 0x41f0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41f0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41f0e0:
    // 0x41f0e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x41f0e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_41f0e4:
    // 0x41f0e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x41f0e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_41f0e8:
    // 0x41f0e8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x41f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_41f0ec:
    // 0x41f0ec: 0xc4830200  lwc1        $f3, 0x200($a0)
    ctx->pc = 0x41f0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41f0f0:
    // 0x41f0f0: 0xc4800234  lwc1        $f0, 0x234($a0)
    ctx->pc = 0x41f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41f0f4:
    // 0x41f0f4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x41f0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41f0f8:
    // 0x41f0f8: 0x46031101  sub.s       $f4, $f2, $f3
    ctx->pc = 0x41f0f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_41f0fc:
    // 0x41f0fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x41f0fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_41f100:
    // 0x41f100: 0x46006583  div.s       $f22, $f12, $f0
    ctx->pc = 0x41f100u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[22] = ctx->f[12] / ctx->f[0];
label_41f104:
    // 0x41f104: 0x0  nop
    ctx->pc = 0x41f104u;
    // NOP
label_41f108:
    // 0x41f108: 0x0  nop
    ctx->pc = 0x41f108u;
    // NOP
label_41f10c:
    // 0x41f10c: 0x4603b036  c.le.s      $f22, $f3
    ctx->pc = 0x41f10cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41f110:
    // 0x41f110: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_41f114:
    if (ctx->pc == 0x41F114u) {
        ctx->pc = 0x41F114u;
            // 0x41f114: 0x46160302  mul.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x41F118u;
        goto label_41f118;
    }
    ctx->pc = 0x41F110u;
    {
        const bool branch_taken_0x41f110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41f110) {
            ctx->pc = 0x41F114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41F110u;
            // 0x41f114: 0x46160302  mul.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x41F12Cu;
            goto label_41f12c;
        }
    }
    ctx->pc = 0x41F118u;
label_41f118:
    // 0x41f118: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x41f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41f11c:
    // 0x41f11c: 0x46001d86  mov.s       $f22, $f3
    ctx->pc = 0x41f11cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[3]);
label_41f120:
    // 0x41f120: 0xae020224  sw          $v0, 0x224($s0)
    ctx->pc = 0x41f120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
label_41f124:
    // 0x41f124: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x41f124u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
label_41f128:
    // 0x41f128: 0x46160302  mul.s       $f12, $f0, $f22
    ctx->pc = 0x41f128u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_41f12c:
    // 0x41f12c: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x41f12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_41f130:
    // 0x41f130: 0xe6160204  swc1        $f22, 0x204($s0)
    ctx->pc = 0x41f130u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 516), bits); }
label_41f134:
    // 0x41f134: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x41f134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41f138:
    // 0x41f138: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x41f138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_41f13c:
    // 0x41f13c: 0xc6030208  lwc1        $f3, 0x208($s0)
    ctx->pc = 0x41f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41f140:
    // 0x41f140: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x41f140u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_41f144:
    // 0x41f144: 0xc6000214  lwc1        $f0, 0x214($s0)
    ctx->pc = 0x41f144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41f148:
    // 0x41f148: 0x46041d5c  madd.s      $f21, $f3, $f4
    ctx->pc = 0x41f148u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_41f14c:
    // 0x41f14c: 0xc601020c  lwc1        $f1, 0x20C($s0)
    ctx->pc = 0x41f14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41f150:
    // 0x41f150: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x41f150u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_41f154:
    // 0x41f154: 0xc0b8160  jal         func_2E0580
label_41f158:
    if (ctx->pc == 0x41F158u) {
        ctx->pc = 0x41F158u;
            // 0x41f158: 0x46040d1c  madd.s      $f20, $f1, $f4 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
        ctx->pc = 0x41F15Cu;
        goto label_41f15c;
    }
    ctx->pc = 0x41F154u;
    SET_GPR_U32(ctx, 31, 0x41F15Cu);
    ctx->pc = 0x41F158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F154u;
            // 0x41f158: 0x46040d1c  madd.s      $f20, $f1, $f4 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F15Cu; }
        if (ctx->pc != 0x41F15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F15Cu; }
        if (ctx->pc != 0x41F15Cu) { return; }
    }
    ctx->pc = 0x41F15Cu;
label_41f15c:
    // 0x41f15c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x41f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_41f160:
    // 0x41f160: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x41f160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_41f164:
    // 0x41f164: 0xc04cbf0  jal         func_132FC0
label_41f168:
    if (ctx->pc == 0x41F168u) {
        ctx->pc = 0x41F168u;
            // 0x41f168: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x41F16Cu;
        goto label_41f16c;
    }
    ctx->pc = 0x41F164u;
    SET_GPR_U32(ctx, 31, 0x41F16Cu);
    ctx->pc = 0x41F168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F164u;
            // 0x41f168: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F16Cu; }
        if (ctx->pc != 0x41F16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F16Cu; }
        if (ctx->pc != 0x41F16Cu) { return; }
    }
    ctx->pc = 0x41F16Cu;
label_41f16c:
    // 0x41f16c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x41f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_41f170:
    // 0x41f170: 0xc04cc44  jal         func_133110
label_41f174:
    if (ctx->pc == 0x41F174u) {
        ctx->pc = 0x41F174u;
            // 0x41f174: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41F178u;
        goto label_41f178;
    }
    ctx->pc = 0x41F170u;
    SET_GPR_U32(ctx, 31, 0x41F178u);
    ctx->pc = 0x41F174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F170u;
            // 0x41f174: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F178u; }
        if (ctx->pc != 0x41F178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F178u; }
        if (ctx->pc != 0x41F178u) { return; }
    }
    ctx->pc = 0x41F178u;
label_41f178:
    // 0x41f178: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x41f178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_41f17c:
    // 0x41f17c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x41f17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_41f180:
    // 0x41f180: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x41f180u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_41f184:
    // 0x41f184: 0xc04cc7c  jal         func_1331F0
label_41f188:
    if (ctx->pc == 0x41F188u) {
        ctx->pc = 0x41F188u;
            // 0x41f188: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41F18Cu;
        goto label_41f18c;
    }
    ctx->pc = 0x41F184u;
    SET_GPR_U32(ctx, 31, 0x41F18Cu);
    ctx->pc = 0x41F188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F184u;
            // 0x41f188: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F18Cu; }
        if (ctx->pc != 0x41F18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F18Cu; }
        if (ctx->pc != 0x41F18Cu) { return; }
    }
    ctx->pc = 0x41F18Cu;
label_41f18c:
    // 0x41f18c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x41f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_41f190:
    // 0x41f190: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x41f190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_41f194:
    // 0x41f194: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x41f194u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_41f198:
    // 0x41f198: 0xc04cc7c  jal         func_1331F0
label_41f19c:
    if (ctx->pc == 0x41F19Cu) {
        ctx->pc = 0x41F19Cu;
            // 0x41f19c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41F1A0u;
        goto label_41f1a0;
    }
    ctx->pc = 0x41F198u;
    SET_GPR_U32(ctx, 31, 0x41F1A0u);
    ctx->pc = 0x41F19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F198u;
            // 0x41f19c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F1A0u; }
        if (ctx->pc != 0x41F1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F1A0u; }
        if (ctx->pc != 0x41F1A0u) { return; }
    }
    ctx->pc = 0x41F1A0u;
label_41f1a0:
    // 0x41f1a0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x41f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_41f1a4:
    // 0x41f1a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x41f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_41f1a8:
    // 0x41f1a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x41f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_41f1ac:
    // 0x41f1ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x41f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_41f1b0:
    // 0x41f1b0: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x41f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41f1b4:
    // 0x41f1b4: 0xc089688  jal         func_225A20
label_41f1b8:
    if (ctx->pc == 0x41F1B8u) {
        ctx->pc = 0x41F1B8u;
            // 0x41f1b8: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x41F1BCu;
        goto label_41f1bc;
    }
    ctx->pc = 0x41F1B4u;
    SET_GPR_U32(ctx, 31, 0x41F1BCu);
    ctx->pc = 0x41F1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F1B4u;
            // 0x41f1b8: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F1BCu; }
        if (ctx->pc != 0x41F1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F1BCu; }
        if (ctx->pc != 0x41F1BCu) { return; }
    }
    ctx->pc = 0x41F1BCu;
label_41f1bc:
    // 0x41f1bc: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x41f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41f1c0:
    // 0x41f1c0: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x41f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_41f1c4:
    // 0x41f1c4: 0xc7ae0068  lwc1        $f14, 0x68($sp)
    ctx->pc = 0x41f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_41f1c8:
    // 0x41f1c8: 0xc04cbd8  jal         func_132F60
label_41f1cc:
    if (ctx->pc == 0x41F1CCu) {
        ctx->pc = 0x41F1CCu;
            // 0x41f1cc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x41F1D0u;
        goto label_41f1d0;
    }
    ctx->pc = 0x41F1C8u;
    SET_GPR_U32(ctx, 31, 0x41F1D0u);
    ctx->pc = 0x41F1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F1C8u;
            // 0x41f1cc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F1D0u; }
        if (ctx->pc != 0x41F1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F1D0u; }
        if (ctx->pc != 0x41F1D0u) { return; }
    }
    ctx->pc = 0x41F1D0u;
label_41f1d0:
    // 0x41f1d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x41f1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_41f1d4:
    // 0x41f1d4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x41f1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_41f1d8:
    // 0x41f1d8: 0xc04cc90  jal         func_133240
label_41f1dc:
    if (ctx->pc == 0x41F1DCu) {
        ctx->pc = 0x41F1DCu;
            // 0x41f1dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41F1E0u;
        goto label_41f1e0;
    }
    ctx->pc = 0x41F1D8u;
    SET_GPR_U32(ctx, 31, 0x41F1E0u);
    ctx->pc = 0x41F1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F1D8u;
            // 0x41f1dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F1E0u; }
        if (ctx->pc != 0x41F1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F1E0u; }
        if (ctx->pc != 0x41F1E0u) { return; }
    }
    ctx->pc = 0x41F1E0u;
label_41f1e0:
    // 0x41f1e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x41f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_41f1e4:
    // 0x41f1e4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x41f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_41f1e8:
    // 0x41f1e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41f1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41f1ec:
    // 0x41f1ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41f1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41f1f0:
    // 0x41f1f0: 0x46160303  div.s       $f12, $f0, $f22
    ctx->pc = 0x41f1f0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[22];
label_41f1f4:
    // 0x41f1f4: 0x0  nop
    ctx->pc = 0x41f1f4u;
    // NOP
label_41f1f8:
    // 0x41f1f8: 0x0  nop
    ctx->pc = 0x41f1f8u;
    // NOP
label_41f1fc:
    // 0x41f1fc: 0xc04cc70  jal         func_1331C0
label_41f200:
    if (ctx->pc == 0x41F200u) {
        ctx->pc = 0x41F204u;
        goto label_41f204;
    }
    ctx->pc = 0x41F1FCu;
    SET_GPR_U32(ctx, 31, 0x41F204u);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F204u; }
        if (ctx->pc != 0x41F204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F204u; }
        if (ctx->pc != 0x41F204u) { return; }
    }
    ctx->pc = 0x41F204u;
label_41f204:
    // 0x41f204: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x41f204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41f208:
    // 0x41f208: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x41f208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_41f20c:
    // 0x41f20c: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x41f20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_41f210:
    // 0x41f210: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x41f210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_41f214:
    // 0x41f214: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x41f214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41f218:
    // 0x41f218: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x41f218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_41f21c:
    // 0x41f21c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x41f21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_41f220:
    // 0x41f220: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x41f220u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_41f224:
    // 0x41f224: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x41f224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_41f228:
    // 0x41f228: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x41f228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41f22c:
    // 0x41f22c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x41f22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_41f230:
    // 0x41f230: 0x0  nop
    ctx->pc = 0x41f230u;
    // NOP
label_41f234:
    // 0x41f234: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x41f234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_41f238:
    // 0x41f238: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x41f238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_41f23c:
    // 0x41f23c: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x41f23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_41f240:
    // 0x41f240: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x41f240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_41f244:
    // 0x41f244: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x41f244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_41f248:
    // 0x41f248: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x41f248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_41f24c:
    // 0x41f24c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x41f24cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_41f250:
    // 0x41f250: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x41f250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_41f254:
    // 0x41f254: 0x8e100050  lw          $s0, 0x50($s0)
    ctx->pc = 0x41f254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_41f258:
    // 0x41f258: 0xc088b74  jal         func_222DD0
label_41f25c:
    if (ctx->pc == 0x41F25Cu) {
        ctx->pc = 0x41F25Cu;
            // 0x41f25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41F260u;
        goto label_41f260;
    }
    ctx->pc = 0x41F258u;
    SET_GPR_U32(ctx, 31, 0x41F260u);
    ctx->pc = 0x41F25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F258u;
            // 0x41f25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F260u; }
        if (ctx->pc != 0x41F260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F260u; }
        if (ctx->pc != 0x41F260u) { return; }
    }
    ctx->pc = 0x41F260u;
label_41f260:
    // 0x41f260: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x41f260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_41f264:
    // 0x41f264: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x41f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_41f268:
    // 0x41f268: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x41f268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_41f26c:
    // 0x41f26c: 0x320f809  jalr        $t9
label_41f270:
    if (ctx->pc == 0x41F270u) {
        ctx->pc = 0x41F270u;
            // 0x41f270: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x41F274u;
        goto label_41f274;
    }
    ctx->pc = 0x41F26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41F274u);
        ctx->pc = 0x41F270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41F26Cu;
            // 0x41f270: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41F274u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41F274u; }
            if (ctx->pc != 0x41F274u) { return; }
        }
        }
    }
    ctx->pc = 0x41F274u;
label_41f274:
    // 0x41f274: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41f274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41f278:
    // 0x41f278: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x41f278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_41f27c:
    // 0x41f27c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41f27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41f280:
    // 0x41f280: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x41f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_41f284:
    // 0x41f284: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x41f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41f288:
    // 0x41f288: 0x3e00008  jr          $ra
label_41f28c:
    if (ctx->pc == 0x41F28Cu) {
        ctx->pc = 0x41F28Cu;
            // 0x41f28c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x41F290u;
        goto label_fallthrough_0x41f288;
    }
    ctx->pc = 0x41F288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41F288u;
            // 0x41f28c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x41f288:
    ctx->pc = 0x41F290u;
}
