#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229140
// Address: 0x229140 - 0x229fb0
void sub_00229140_0x229140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229140_0x229140");
#endif

    switch (ctx->pc) {
        case 0x2291a0u: goto label_2291a0;
        case 0x229250u: goto label_229250;
        case 0x2292f4u: goto label_2292f4;
        case 0x229360u: goto label_229360;
        case 0x229a08u: goto label_229a08;
        case 0x229ae4u: goto label_229ae4;
        case 0x229b34u: goto label_229b34;
        case 0x229f20u: goto label_229f20;
        default: break;
    }

    ctx->pc = 0x229140u;

    // 0x229140: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x229140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x229144: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x229144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x229148: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x229148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x22914c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x22914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x229150: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x229150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x229154: 0x345effff  ori         $fp, $v0, 0xFFFF
    ctx->pc = 0x229154u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x229158: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x229158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x22915c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x22915cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229160: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x229160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x229164: 0x2516ffff  addiu       $s6, $t0, -0x1
    ctx->pc = 0x229164u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x229168: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x229168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22916c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22916cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229170: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x229170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x229174: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x229174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229178: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x229178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22917c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22917cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229180: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x229180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x229184: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x229184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x229188: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x229188u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22918c: 0xafa900bc  sw          $t1, 0xBC($sp)
    ctx->pc = 0x22918cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 9));
    // 0x229190: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x229190u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x229194: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x229194u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x229198: 0x6c00371  bltz        $s6, . + 4 + (0x371 << 2)
    ctx->pc = 0x229198u;
    {
        const bool branch_taken_0x229198 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x22919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229198u;
            // 0x22919c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229198) {
            ctx->pc = 0x229F60u;
            goto label_229f60;
        }
    }
    ctx->pc = 0x2291A0u;
label_2291a0:
    // 0x2291a0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2291a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2291a4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2291a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2291a8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2291a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2291ac: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x2291acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2291b0: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x2291b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2291b4: 0x1020023a  beqz        $at, . + 4 + (0x23A << 2)
    ctx->pc = 0x2291B4u;
    {
        const bool branch_taken_0x2291b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2291b4) {
            ctx->pc = 0x229AA0u;
            goto label_229aa0;
        }
    }
    ctx->pc = 0x2291BCu;
    // 0x2291bc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2291bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x2291c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2291c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2291c4: 0x2463f2a0  addiu       $v1, $v1, -0xD60
    ctx->pc = 0x2291c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963872));
    // 0x2291c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2291c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2291cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2291ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2291d0: 0x400008  jr          $v0
    ctx->pc = 0x2291D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2291D8u: goto label_2291d8;
            case 0x229250u: goto label_229250;
            case 0x229300u: goto label_229300;
            case 0x229368u: goto label_229368;
            case 0x2293E0u: goto label_2293e0;
            case 0x229458u: goto label_229458;
            case 0x229AA0u: goto label_229aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2291D8u;
label_2291d8:
    // 0x2291d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2291d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2291dc: 0xc6670020  lwc1        $f7, 0x20($s3)
    ctx->pc = 0x2291dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2291e0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2291e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2291e4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2291e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2291e8: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2291e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2291ec: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2291ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2291f0: 0xe7a700e0  swc1        $f7, 0xE0($sp)
    ctx->pc = 0x2291f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2291f4: 0xc6660024  lwc1        $f6, 0x24($s3)
    ctx->pc = 0x2291f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2291f8: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x2291f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2291fc: 0xc6650028  lwc1        $f5, 0x28($s3)
    ctx->pc = 0x2291fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x229200: 0xe7a500e8  swc1        $f5, 0xE8($sp)
    ctx->pc = 0x229200u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x229204: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x229204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229208: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x229208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x22920c: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x22920cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229210: 0xc64200d4  lwc1        $f2, 0xD4($s2)
    ctx->pc = 0x229210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229214: 0xc64100d8  lwc1        $f1, 0xD8($s2)
    ctx->pc = 0x229214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229218: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x229218u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
    // 0x22921c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x22921cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x229220: 0xc64300d0  lwc1        $f3, 0xD0($s2)
    ctx->pc = 0x229220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229224: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x229224u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[2];
    // 0x229228: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x229228u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
    // 0x22922c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x22922cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x229230: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x229230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x229234: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x229234u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
    // 0x229238: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x229238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x22923c: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x22923cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x229240: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x229240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x229244: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x229244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x229248: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x229248u;
    SET_GPR_U32(ctx, 31, 0x229250u);
    ctx->pc = 0x22924Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229248u;
            // 0x22924c: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229250u; }
        if (ctx->pc != 0x229250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229250u; }
        if (ctx->pc != 0x229250u) { return; }
    }
    ctx->pc = 0x229250u;
label_229250:
    // 0x229250: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x229250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x229254: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x229254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229258: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x229258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x22925c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x22925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x229260: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x229260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229264: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x229264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x229268: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x229268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22926c: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x22926cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x229270: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x229270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229274: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x229274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x229278: 0xc6640024  lwc1        $f4, 0x24($s3)
    ctx->pc = 0x229278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22927c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x22927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229280: 0xc6650020  lwc1        $f5, 0x20($s3)
    ctx->pc = 0x229280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x229284: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x229284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229288: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x229288u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x22928c: 0xc6630028  lwc1        $f3, 0x28($s3)
    ctx->pc = 0x22928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229290: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x229290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229294: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x229294u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x229298: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x229298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x22929c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x22929cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x2292a0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x2292a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2292a4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x2292a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2292a8: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x2292a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2292ac: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2292acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2292b0: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2292b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x2292b4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2292b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2292b8: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x2292b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x2292bc: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x2292bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2292c0: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x2292c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2292c4: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x2292c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2292c8: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x2292c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2292cc: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x2292ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x2292d0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2292d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2292d4: 0xe64000f8  swc1        $f0, 0xF8($s2)
    ctx->pc = 0x2292d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x2292d8: 0xae4000fc  sw          $zero, 0xFC($s2)
    ctx->pc = 0x2292d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
    // 0x2292dc: 0xc6740040  lwc1        $f20, 0x40($s3)
    ctx->pc = 0x2292dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2292e0: 0xc6750044  lwc1        $f21, 0x44($s3)
    ctx->pc = 0x2292e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2292e4: 0xc6760048  lwc1        $f22, 0x48($s3)
    ctx->pc = 0x2292e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2292e8: 0xc677004c  lwc1        $f23, 0x4C($s3)
    ctx->pc = 0x2292e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2292ec: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x2292ECu;
    SET_GPR_U32(ctx, 31, 0x2292F4u);
    ctx->pc = 0x2292F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2292ECu;
            // 0x2292f0: 0x26660050  addiu       $a2, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292F4u; }
        if (ctx->pc != 0x2292F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292F4u; }
        if (ctx->pc != 0x2292F4u) { return; }
    }
    ctx->pc = 0x2292F4u;
label_2292f4:
    // 0x2292f4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2292F4u;
    {
        const bool branch_taken_0x2292f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2292f4) {
            ctx->pc = 0x2294C8u;
            goto label_2294c8;
        }
    }
    ctx->pc = 0x2292FCu;
    // 0x2292fc: 0x0  nop
    ctx->pc = 0x2292fcu;
    // NOP
label_229300:
    // 0x229300: 0x26660050  addiu       $a2, $s3, 0x50
    ctx->pc = 0x229300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x229304: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x229304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229308: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x229308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x22930c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x22930cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x229310: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x229310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229314: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x229314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x229318: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x229318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22931c: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x22931cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x229320: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x229320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229324: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x229324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x229328: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x229328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22932c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x22932cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x229330: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x229330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229334: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x229334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x229338: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x229338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22933c: 0xe64000f8  swc1        $f0, 0xF8($s2)
    ctx->pc = 0x22933cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x229340: 0xc660005c  lwc1        $f0, 0x5C($s3)
    ctx->pc = 0x229340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229344: 0xe64000fc  swc1        $f0, 0xFC($s2)
    ctx->pc = 0x229344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
    // 0x229348: 0xc6740040  lwc1        $f20, 0x40($s3)
    ctx->pc = 0x229348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22934c: 0xc6750044  lwc1        $f21, 0x44($s3)
    ctx->pc = 0x22934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x229350: 0xc6760048  lwc1        $f22, 0x48($s3)
    ctx->pc = 0x229350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x229354: 0xc677004c  lwc1        $f23, 0x4C($s3)
    ctx->pc = 0x229354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x229358: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x229358u;
    SET_GPR_U32(ctx, 31, 0x229360u);
    ctx->pc = 0x22935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229358u;
            // 0x22935c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229360u; }
        if (ctx->pc != 0x229360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229360u; }
        if (ctx->pc != 0x229360u) { return; }
    }
    ctx->pc = 0x229360u;
label_229360:
    // 0x229360: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x229360u;
    {
        const bool branch_taken_0x229360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229360) {
            ctx->pc = 0x2294C8u;
            goto label_2294c8;
        }
    }
    ctx->pc = 0x229368u;
label_229368:
    // 0x229368: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x229368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22936c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x22936cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x229370: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x229370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229374: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x229374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x229378: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x229378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22937c: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x22937cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x229380: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x229380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229384: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x229384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x229388: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x229388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22938c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x22938cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x229390: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x229390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229394: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x229394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x229398: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x229398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22939c: 0xe64000f8  swc1        $f0, 0xF8($s2)
    ctx->pc = 0x22939cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x2293a0: 0xc660005c  lwc1        $f0, 0x5C($s3)
    ctx->pc = 0x2293a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2293a4: 0xe64000fc  swc1        $f0, 0xFC($s2)
    ctx->pc = 0x2293a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
    // 0x2293a8: 0xc6740040  lwc1        $f20, 0x40($s3)
    ctx->pc = 0x2293a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2293ac: 0xc6750044  lwc1        $f21, 0x44($s3)
    ctx->pc = 0x2293acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2293b0: 0xc6760048  lwc1        $f22, 0x48($s3)
    ctx->pc = 0x2293b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2293b4: 0xc677004c  lwc1        $f23, 0x4C($s3)
    ctx->pc = 0x2293b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2293b8: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x2293b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2293bc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2293bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2293c0: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x2293c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2293c4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2293c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2293c8: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x2293c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2293cc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2293ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2293d0: 0xc660005c  lwc1        $f0, 0x5C($s3)
    ctx->pc = 0x2293d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2293d4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2293D4u;
    {
        const bool branch_taken_0x2293d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2293D4u;
            // 0x2293d8: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293d4) {
            ctx->pc = 0x2294C8u;
            goto label_2294c8;
        }
    }
    ctx->pc = 0x2293DCu;
    // 0x2293dc: 0x0  nop
    ctx->pc = 0x2293dcu;
    // NOP
label_2293e0:
    // 0x2293e0: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x2293e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2293e4: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x2293e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x2293e8: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x2293e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2293ec: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x2293ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x2293f0: 0xc64000e8  lwc1        $f0, 0xE8($s2)
    ctx->pc = 0x2293f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2293f4: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x2293f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x2293f8: 0xc64000ec  lwc1        $f0, 0xEC($s2)
    ctx->pc = 0x2293f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2293fc: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x2293fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x229400: 0xc64000f0  lwc1        $f0, 0xF0($s2)
    ctx->pc = 0x229400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229404: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x229404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x229408: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x229408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22940c: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x22940cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x229410: 0xc64000f8  lwc1        $f0, 0xF8($s2)
    ctx->pc = 0x229410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229414: 0xe64000f8  swc1        $f0, 0xF8($s2)
    ctx->pc = 0x229414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x229418: 0xc64000fc  lwc1        $f0, 0xFC($s2)
    ctx->pc = 0x229418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22941c: 0xe64000fc  swc1        $f0, 0xFC($s2)
    ctx->pc = 0x22941cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
    // 0x229420: 0xc65400e0  lwc1        $f20, 0xE0($s2)
    ctx->pc = 0x229420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229424: 0xc65500e4  lwc1        $f21, 0xE4($s2)
    ctx->pc = 0x229424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x229428: 0xc65600e8  lwc1        $f22, 0xE8($s2)
    ctx->pc = 0x229428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22942c: 0xc65700ec  lwc1        $f23, 0xEC($s2)
    ctx->pc = 0x22942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x229430: 0xc64000f0  lwc1        $f0, 0xF0($s2)
    ctx->pc = 0x229430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229434: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x229434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x229438: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x229438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22943c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x22943cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x229440: 0xc64000f8  lwc1        $f0, 0xF8($s2)
    ctx->pc = 0x229440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229444: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x229444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x229448: 0xc64000fc  lwc1        $f0, 0xFC($s2)
    ctx->pc = 0x229448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22944c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x22944Cu;
    {
        const bool branch_taken_0x22944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22944Cu;
            // 0x229450: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22944c) {
            ctx->pc = 0x2294D0u;
            goto label_2294d0;
        }
    }
    ctx->pc = 0x229454u;
    // 0x229454: 0x0  nop
    ctx->pc = 0x229454u;
    // NOP
label_229458:
    // 0x229458: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x229458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22945c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x22945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x229460: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x229460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229464: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x229464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x229468: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x229468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22946c: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x22946cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x229470: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x229470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229474: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x229474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x229478: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x229478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22947c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x22947cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x229480: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x229480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229484: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x229484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x229488: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x229488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22948c: 0xe64000f8  swc1        $f0, 0xF8($s2)
    ctx->pc = 0x22948cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x229490: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x229490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229494: 0xe64000fc  swc1        $f0, 0xFC($s2)
    ctx->pc = 0x229494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
    // 0x229498: 0xc6740040  lwc1        $f20, 0x40($s3)
    ctx->pc = 0x229498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22949c: 0xc6750044  lwc1        $f21, 0x44($s3)
    ctx->pc = 0x22949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2294a0: 0xc6760048  lwc1        $f22, 0x48($s3)
    ctx->pc = 0x2294a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2294a4: 0xc677004c  lwc1        $f23, 0x4C($s3)
    ctx->pc = 0x2294a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2294a8: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x2294a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2294ac: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2294acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2294b0: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x2294b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2294b4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2294b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2294b8: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x2294b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2294bc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2294bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2294c0: 0xc660005c  lwc1        $f0, 0x5C($s3)
    ctx->pc = 0x2294c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2294c4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x2294c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_2294c8:
    // 0x2294c8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2294c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2294cc: 0xa64200c6  sh          $v0, 0xC6($s2)
    ctx->pc = 0x2294ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 198), (uint16_t)GPR_U32(ctx, 2));
label_2294d0:
    // 0x2294d0: 0x4600a305  abs.s       $f12, $f20
    ctx->pc = 0x2294d0u;
    ctx->f[12] = FPU_ABS_S(ctx->f[20]);
    // 0x2294d4: 0x4600aac5  abs.s       $f11, $f21
    ctx->pc = 0x2294d4u;
    ctx->f[11] = FPU_ABS_S(ctx->f[21]);
    // 0x2294d8: 0x4600b285  abs.s       $f10, $f22
    ctx->pc = 0x2294d8u;
    ctx->f[10] = FPU_ABS_S(ctx->f[22]);
    // 0x2294dc: 0x4600ba45  abs.s       $f9, $f23
    ctx->pc = 0x2294dcu;
    ctx->f[9] = FPU_ABS_S(ctx->f[23]);
    // 0x2294e0: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2294e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2294e4: 0x46000205  abs.s       $f8, $f0
    ctx->pc = 0x2294e4u;
    ctx->f[8] = FPU_ABS_S(ctx->f[0]);
    // 0x2294e8: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x2294e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2294ec: 0x46000105  abs.s       $f4, $f0
    ctx->pc = 0x2294ecu;
    ctx->f[4] = FPU_ABS_S(ctx->f[0]);
    // 0x2294f0: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x2294f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2294f4: 0x460010c5  abs.s       $f3, $f2
    ctx->pc = 0x2294f4u;
    ctx->f[3] = FPU_ABS_S(ctx->f[2]);
    // 0x2294f8: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x2294f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2294fc: 0x460009c5  abs.s       $f7, $f1
    ctx->pc = 0x2294fcu;
    ctx->f[7] = FPU_ABS_S(ctx->f[1]);
    // 0x229500: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x229500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x229504: 0x2463d1f0  addiu       $v1, $v1, -0x2E10
    ctx->pc = 0x229504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955504));
    // 0x229508: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x229508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22950c: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x22950cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229510: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x229510u;
    {
        const bool branch_taken_0x229510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229510) {
            ctx->pc = 0x229514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229510u;
            // 0x229514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22951Cu;
            goto label_22951c;
        }
    }
    ctx->pc = 0x229518u;
    // 0x229518: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x229518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22951c:
    // 0x22951c: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x22951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x229520: 0x46054034  c.lt.s      $f8, $f5
    ctx->pc = 0x229520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229524: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x229524u;
    {
        const bool branch_taken_0x229524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229524) {
            ctx->pc = 0x229528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229524u;
            // 0x229528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229530u;
            goto label_229530;
        }
    }
    ctx->pc = 0x22952Cu;
    // 0x22952c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_229530:
    // 0x229530: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x229530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x229534: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x229534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229538: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x229538u;
    {
        const bool branch_taken_0x229538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229538) {
            ctx->pc = 0x22953Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229538u;
            // 0x22953c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229544u;
            goto label_229544;
        }
    }
    ctx->pc = 0x229540u;
    // 0x229540: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_229544:
    // 0x229544: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x229544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229548: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x229548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22954c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22954Cu;
    {
        const bool branch_taken_0x22954c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22954Cu;
            // 0x229550: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22954c) {
            ctx->pc = 0x229558u;
            goto label_229558;
        }
    }
    ctx->pc = 0x229554u;
    // 0x229554: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x229554u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229558:
    // 0x229558: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x229558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22955c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22955cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x229560: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x229560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x229564: 0x46065834  c.lt.s      $f11, $f6
    ctx->pc = 0x229564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229568: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x229568u;
    {
        const bool branch_taken_0x229568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22956Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229568u;
            // 0x22956c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229568) {
            ctx->pc = 0x229578u;
            goto label_229578;
        }
    }
    ctx->pc = 0x229570u;
    // 0x229570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229570u;
    {
        const bool branch_taken_0x229570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229570u;
            // 0x229574: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229570) {
            ctx->pc = 0x22957Cu;
            goto label_22957c;
        }
    }
    ctx->pc = 0x229578u;
label_229578:
    // 0x229578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22957c:
    // 0x22957c: 0x46056034  c.lt.s      $f12, $f5
    ctx->pc = 0x22957cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229580: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x229580u;
    {
        const bool branch_taken_0x229580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229580) {
            ctx->pc = 0x229584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229580u;
            // 0x229584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22958Cu;
            goto label_22958c;
        }
    }
    ctx->pc = 0x229588u;
    // 0x229588: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x229588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22958c:
    // 0x22958c: 0x46045034  c.lt.s      $f10, $f4
    ctx->pc = 0x22958cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229590: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x229590u;
    {
        const bool branch_taken_0x229590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229590) {
            ctx->pc = 0x229594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229590u;
            // 0x229594: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22959Cu;
            goto label_22959c;
        }
    }
    ctx->pc = 0x229598u;
    // 0x229598: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x229598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22959c:
    // 0x22959c: 0x46034834  c.lt.s      $f9, $f3
    ctx->pc = 0x22959cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2295a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2295A0u;
    {
        const bool branch_taken_0x2295a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2295A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2295A0u;
            // 0x2295a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295a0) {
            ctx->pc = 0x2295ACu;
            goto label_2295ac;
        }
    }
    ctx->pc = 0x2295A8u;
    // 0x2295a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2295a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2295ac:
    // 0x2295ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2295acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2295b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2295b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2295b4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2295b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2295b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2295b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2295bc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2295bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2295c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2295C0u;
    {
        const bool branch_taken_0x2295c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2295C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2295C0u;
            // 0x2295c4: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295c0) {
            ctx->pc = 0x2295D0u;
            goto label_2295d0;
        }
    }
    ctx->pc = 0x2295C8u;
    // 0x2295c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2295C8u;
    {
        const bool branch_taken_0x2295c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2295C8u;
            // 0x2295cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295c8) {
            ctx->pc = 0x2295D4u;
            goto label_2295d4;
        }
    }
    ctx->pc = 0x2295D0u;
label_2295d0:
    // 0x2295d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2295d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2295d4:
    // 0x2295d4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2295d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2295d8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2295d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2295dc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2295DCu;
    {
        const bool branch_taken_0x2295dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2295dc) {
            ctx->pc = 0x2295E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2295DCu;
            // 0x2295e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2295E8u;
            goto label_2295e8;
        }
    }
    ctx->pc = 0x2295E4u;
    // 0x2295e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2295e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2295e8:
    // 0x2295e8: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x2295e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2295ec: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2295ECu;
    {
        const bool branch_taken_0x2295ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2295ec) {
            ctx->pc = 0x2295F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2295ECu;
            // 0x2295f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2295F8u;
            goto label_2295f8;
        }
    }
    ctx->pc = 0x2295F4u;
    // 0x2295f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2295f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2295f8:
    // 0x2295f8: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2295f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2295fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2295FCu;
    {
        const bool branch_taken_0x2295fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2295FCu;
            // 0x229600: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295fc) {
            ctx->pc = 0x229608u;
            goto label_229608;
        }
    }
    ctx->pc = 0x229604u;
    // 0x229604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229608:
    // 0x229608: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x229608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x22960c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x22960cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x229610: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x229610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x229614: 0x4615a832  c.eq.s      $f21, $f21
    ctx->pc = 0x229614u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229618: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x229618u;
    {
        const bool branch_taken_0x229618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229618u;
            // 0x22961c: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229618) {
            ctx->pc = 0x229628u;
            goto label_229628;
        }
    }
    ctx->pc = 0x229620u;
    // 0x229620: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229620u;
    {
        const bool branch_taken_0x229620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229620u;
            // 0x229624: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229620) {
            ctx->pc = 0x22962Cu;
            goto label_22962c;
        }
    }
    ctx->pc = 0x229628u;
label_229628:
    // 0x229628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22962c:
    // 0x22962c: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x22962cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229630: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x229630u;
    {
        const bool branch_taken_0x229630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229630) {
            ctx->pc = 0x229634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229630u;
            // 0x229634: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22963Cu;
            goto label_22963c;
        }
    }
    ctx->pc = 0x229638u;
    // 0x229638: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x229638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22963c:
    // 0x22963c: 0x4616b032  c.eq.s      $f22, $f22
    ctx->pc = 0x22963cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229640: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x229640u;
    {
        const bool branch_taken_0x229640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229640) {
            ctx->pc = 0x229644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229640u;
            // 0x229644: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22964Cu;
            goto label_22964c;
        }
    }
    ctx->pc = 0x229648u;
    // 0x229648: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x229648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22964c:
    // 0x22964c: 0x4617b832  c.eq.s      $f23, $f23
    ctx->pc = 0x22964cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229650: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x229650u;
    {
        const bool branch_taken_0x229650 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229650u;
            // 0x229654: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229650) {
            ctx->pc = 0x22965Cu;
            goto label_22965c;
        }
    }
    ctx->pc = 0x229658u;
    // 0x229658: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22965c:
    // 0x22965c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22965cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x229660: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x229660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x229664: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x229664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x229668: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x229668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x22966c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x22966cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x229670: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x229670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x229674: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x229674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x229678: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x229678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x22967c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x22967Cu;
    {
        const bool branch_taken_0x22967c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22967c) {
            ctx->pc = 0x2296B0u;
            goto label_2296b0;
        }
    }
    ctx->pc = 0x229684u;
    // 0x229684: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x229684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x229688: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x229688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x22968c: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x22968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229690: 0xc4550004  lwc1        $f21, 0x4($v0)
    ctx->pc = 0x229690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x229694: 0xc4560008  lwc1        $f22, 0x8($v0)
    ctx->pc = 0x229694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x229698: 0xc457000c  lwc1        $f23, 0xC($v0)
    ctx->pc = 0x229698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22969c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x22969cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2296a0: 0xe7b50104  swc1        $f21, 0x104($sp)
    ctx->pc = 0x2296a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2296a4: 0xe7b60108  swc1        $f22, 0x108($sp)
    ctx->pc = 0x2296a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2296a8: 0xe7b7010c  swc1        $f23, 0x10C($sp)
    ctx->pc = 0x2296a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2296ac: 0x0  nop
    ctx->pc = 0x2296acu;
    // NOP
label_2296b0:
    // 0x2296b0: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x2296b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2296b4: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x2296b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2296b8: 0x4614a01e  madda.s     $f20, $f20
    ctx->pc = 0x2296b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x2296bc: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x2296bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x2296c0: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x2296c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2296c4: 0x4616b09c  madd.s      $f2, $f22, $f22
    ctx->pc = 0x2296c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
    // 0x2296c8: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x2296c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x2296cc: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x2296ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2296d0: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x2296d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x2296d4: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x2296d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2296d8: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x2296d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x2296dc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2296dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2296e0: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x2296e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x2296e4: 0xc64100b4  lwc1        $f1, 0xB4($s2)
    ctx->pc = 0x2296e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2296e8: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2296e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2296ec: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2296ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2296f0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2296F0u;
    {
        const bool branch_taken_0x2296f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2296f0) {
            ctx->pc = 0x229720u;
            goto label_229720;
        }
    }
    ctx->pc = 0x2296F8u;
    // 0x2296f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2296f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2296fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2296fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229700: 0x0  nop
    ctx->pc = 0x229700u;
    // NOP
    // 0x229704: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x229704u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x229708: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x229708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22970c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x22970cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x229710: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x229710u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x229714: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x229714u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x229718: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x229718u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x22971c: 0x0  nop
    ctx->pc = 0x22971cu;
    // NOP
label_229720:
    // 0x229720: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x229720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x229724: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x229724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229728: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x229728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22972c: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x22972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229730: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x229730u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229734: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x229734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x229738: 0x4614101c  madd.s      $f0, $f2, $f20
    ctx->pc = 0x229738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x22973c: 0x3c023ecf  lui         $v0, 0x3ECF
    ctx->pc = 0x22973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16079 << 16));
    // 0x229740: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x229740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x229744: 0x3443817a  ori         $v1, $v0, 0x817A
    ctx->pc = 0x229744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33146);
    // 0x229748: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x229748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22974c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x229750: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x229750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x229754: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x229754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x229758: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x229758u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22975c: 0x4615101c  madd.s      $f0, $f2, $f21
    ctx->pc = 0x22975cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
    // 0x229760: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x229760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x229764: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x229764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229768: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x229768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22976c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x22976cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229770: 0x4616101c  madd.s      $f0, $f2, $f22
    ctx->pc = 0x229770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[22]));
    // 0x229774: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x229774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x229778: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x229778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22977c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x22977cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229780: 0x4617101c  madd.s      $f0, $f2, $f23
    ctx->pc = 0x229780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[23]));
    // 0x229784: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x229784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x229788: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x229788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22978c: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x22978cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x229790: 0xc6440080  lwc1        $f4, 0x80($s2)
    ctx->pc = 0x229790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x229794: 0xc6450084  lwc1        $f5, 0x84($s2)
    ctx->pc = 0x229794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x229798: 0xc6460088  lwc1        $f6, 0x88($s2)
    ctx->pc = 0x229798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22979c: 0xc647008c  lwc1        $f7, 0x8C($s2)
    ctx->pc = 0x22979cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2297a0: 0xe6440070  swc1        $f4, 0x70($s2)
    ctx->pc = 0x2297a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x2297a4: 0xe6450074  swc1        $f5, 0x74($s2)
    ctx->pc = 0x2297a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x2297a8: 0xe6460078  swc1        $f6, 0x78($s2)
    ctx->pc = 0x2297a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x2297ac: 0xe647007c  swc1        $f7, 0x7C($s2)
    ctx->pc = 0x2297acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x2297b0: 0xc68a0008  lwc1        $f10, 0x8($s4)
    ctx->pc = 0x2297b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2297b4: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x2297b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2297b8: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2297b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2297bc: 0x460a4a42  mul.s       $f9, $f9, $f10
    ctx->pc = 0x2297bcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x2297c0: 0xc7a30108  lwc1        $f3, 0x108($sp)
    ctx->pc = 0x2297c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2297c4: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x2297c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x2297c8: 0xc64000b8  lwc1        $f0, 0xB8($s2)
    ctx->pc = 0x2297c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2297cc: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2297ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2297d0: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2297d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2297d4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2297d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2297d8: 0x460348c2  mul.s       $f3, $f9, $f3
    ctx->pc = 0x2297d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x2297dc: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x2297dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2297e0: 0x46031a5c  madd.s      $f9, $f3, $f3
    ctx->pc = 0x2297e0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2297e4: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2297e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2297e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2297E8u;
    {
        const bool branch_taken_0x2297e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2297ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2297E8u;
            // 0x2297ec: 0x46094202  mul.s       $f8, $f8, $f9 (Delay Slot)
        ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297e8) {
            ctx->pc = 0x2297F8u;
            goto label_2297f8;
        }
    }
    ctx->pc = 0x2297F0u;
    // 0x2297f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2297F0u;
    {
        const bool branch_taken_0x2297f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2297F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2297F0u;
            // 0x2297f4: 0x460d6b82  mul.s       $f14, $f13, $f13 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297f0) {
            ctx->pc = 0x229800u;
            goto label_229800;
        }
    }
    ctx->pc = 0x2297F8u;
label_2297f8:
    // 0x2297f8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2297f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2297fc: 0x460d6b82  mul.s       $f14, $f13, $f13
    ctx->pc = 0x2297fcu;
    ctx->f[14] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_229800:
    // 0x229800: 0x460e4036  c.le.s      $f8, $f14
    ctx->pc = 0x229800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229804: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x229804u;
    {
        const bool branch_taken_0x229804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229804) {
            ctx->pc = 0x229860u;
            goto label_229860;
        }
    }
    ctx->pc = 0x22980Cu;
    // 0x22980c: 0x3c033d35  lui         $v1, 0x3D35
    ctx->pc = 0x22980cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15669 << 16));
    // 0x229810: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x229810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x229814: 0x3464e52a  ori         $a0, $v1, 0xE52A
    ctx->pc = 0x229814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58666);
    // 0x229818: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x229818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x22981c: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x22981cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x229820: 0x3443a965  ori         $v1, $v0, 0xA965
    ctx->pc = 0x229820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43365);
    // 0x229824: 0x46084b02  mul.s       $f12, $f9, $f8
    ctx->pc = 0x229824u;
    ctx->f[12] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x229828: 0x3c023f52  lui         $v0, 0x3F52
    ctx->pc = 0x229828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16210 << 16));
    // 0x22982c: 0x3442acb8  ori         $v0, $v0, 0xACB8
    ctx->pc = 0x22982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44216);
    // 0x229830: 0x46084342  mul.s       $f13, $f8, $f8
    ctx->pc = 0x229830u;
    ctx->f[13] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x229834: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x229834u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229838: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x229838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x22983c: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x22983cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x229840: 0x46004818  adda.s      $f9, $f0
    ctx->pc = 0x229840u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x229844: 0x44835800  mtc1        $v1, $f11
    ctx->pc = 0x229844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x229848: 0x0  nop
    ctx->pc = 0x229848u;
    // NOP
    // 0x22984c: 0x4608501f  msuba.s     $f10, $f8
    ctx->pc = 0x22984cu;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[8]));
    // 0x229850: 0x460d581f  msuba.s     $f11, $f13
    ctx->pc = 0x229850u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[13]));
    // 0x229854: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x229854u;
    {
        const bool branch_taken_0x229854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229854u;
            // 0x229858: 0x460c6b1d  msub.s      $f12, $f13, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229854) {
            ctx->pc = 0x229900u;
            goto label_229900;
        }
    }
    ctx->pc = 0x22985Cu;
    // 0x22985c: 0x0  nop
    ctx->pc = 0x22985cu;
    // NOP
label_229860:
    // 0x229860: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x229860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x229864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229868: 0x0  nop
    ctx->pc = 0x229868u;
    // NOP
    // 0x22986c: 0x46080216  rsqrt.s     $f8, $f0, $f8
    ctx->pc = 0x22986cu;
    ctx->f[8] = 1.0f / sqrtf(ctx->f[0]);
    // 0x229870: 0x3c023d35  lui         $v0, 0x3D35
    ctx->pc = 0x229870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15669 << 16));
    // 0x229874: 0x3444e52a  ori         $a0, $v0, 0xE52A
    ctx->pc = 0x229874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58666);
    // 0x229878: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x229878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x22987c: 0x3443a965  ori         $v1, $v0, 0xA965
    ctx->pc = 0x22987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43365);
    // 0x229880: 0x3c023f52  lui         $v0, 0x3F52
    ctx->pc = 0x229880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16210 << 16));
    // 0x229884: 0x3442acb8  ori         $v0, $v0, 0xACB8
    ctx->pc = 0x229884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44216);
    // 0x229888: 0x46086b42  mul.s       $f13, $f13, $f8
    ctx->pc = 0x229888u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
    // 0x22988c: 0xc7a9010c  lwc1        $f9, 0x10C($sp)
    ctx->pc = 0x22988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x229890: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x229890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229894: 0xc7ab0104  lwc1        $f11, 0x104($sp)
    ctx->pc = 0x229894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x229898: 0x460d4a42  mul.s       $f9, $f9, $f13
    ctx->pc = 0x229898u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x22989c: 0x460d6302  mul.s       $f12, $f12, $f13
    ctx->pc = 0x22989cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x2298a0: 0xc7aa0108  lwc1        $f10, 0x108($sp)
    ctx->pc = 0x2298a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2298a4: 0x460d5ac2  mul.s       $f11, $f11, $f13
    ctx->pc = 0x2298a4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
    // 0x2298a8: 0x460d5282  mul.s       $f10, $f10, $f13
    ctx->pc = 0x2298a8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
    // 0x2298ac: 0xe7a9010c  swc1        $f9, 0x10C($sp)
    ctx->pc = 0x2298acu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2298b0: 0xe7aa0108  swc1        $f10, 0x108($sp)
    ctx->pc = 0x2298b0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2298b4: 0xe7ab0104  swc1        $f11, 0x104($sp)
    ctx->pc = 0x2298b4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2298b8: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x2298b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x2298bc: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x2298bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x2298c0: 0x460d18c2  mul.s       $f3, $f3, $f13
    ctx->pc = 0x2298c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x2298c4: 0xe7ac0100  swc1        $f12, 0x100($sp)
    ctx->pc = 0x2298c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2298c8: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x2298c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2298cc: 0x0  nop
    ctx->pc = 0x2298ccu;
    // NOP
    // 0x2298d0: 0x460e4b02  mul.s       $f12, $f9, $f14
    ctx->pc = 0x2298d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
    // 0x2298d4: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x2298d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2298d8: 0x460e7342  mul.s       $f13, $f14, $f14
    ctx->pc = 0x2298d8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x2298dc: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x2298dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2298e0: 0x46004818  adda.s      $f9, $f0
    ctx->pc = 0x2298e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2298e4: 0x44835800  mtc1        $v1, $f11
    ctx->pc = 0x2298e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2298e8: 0x0  nop
    ctx->pc = 0x2298e8u;
    // NOP
    // 0x2298ec: 0x460e501f  msuba.s     $f10, $f14
    ctx->pc = 0x2298ecu;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[14]));
    // 0x2298f0: 0x460d581f  msuba.s     $f11, $f13
    ctx->pc = 0x2298f0u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[13]));
    // 0x2298f4: 0x46007206  mov.s       $f8, $f14
    ctx->pc = 0x2298f4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[14]);
    // 0x2298f8: 0x460c6b1d  msub.s      $f12, $f13, $f12
    ctx->pc = 0x2298f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
    // 0x2298fc: 0x0  nop
    ctx->pc = 0x2298fcu;
    // NOP
label_229900:
    // 0x229900: 0x4606101a  mula.s      $f2, $f6
    ctx->pc = 0x229900u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x229904: 0x46051add  msub.s      $f11, $f3, $f5
    ctx->pc = 0x229904u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x229908: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x229908u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x22990c: 0x46060a9d  msub.s      $f10, $f1, $f6
    ctx->pc = 0x22990cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x229910: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x229910u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x229914: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x229914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x229918: 0x4604125d  msub.s      $f9, $f2, $f4
    ctx->pc = 0x229918u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x22991c: 0x460b6818  adda.s      $f13, $f11
    ctx->pc = 0x22991cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
    // 0x229920: 0x460462dc  madd.s      $f11, $f12, $f4
    ctx->pc = 0x229920u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[4]));
    // 0x229924: 0x460a6818  adda.s      $f13, $f10
    ctx->pc = 0x229924u;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x229928: 0x4605629c  madd.s      $f10, $f12, $f5
    ctx->pc = 0x229928u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[5]));
    // 0x22992c: 0x46096818  adda.s      $f13, $f9
    ctx->pc = 0x22992cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
    // 0x229930: 0x4606625c  madd.s      $f9, $f12, $f6
    ctx->pc = 0x229930u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[6]));
    // 0x229934: 0x460b6818  adda.s      $f13, $f11
    ctx->pc = 0x229934u;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
    // 0x229938: 0x46013adc  madd.s      $f11, $f7, $f1
    ctx->pc = 0x229938u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x22993c: 0x460a6818  adda.s      $f13, $f10
    ctx->pc = 0x22993cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x229940: 0x46023a9c  madd.s      $f10, $f7, $f2
    ctx->pc = 0x229940u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x229944: 0x46096818  adda.s      $f13, $f9
    ctx->pc = 0x229944u;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
    // 0x229948: 0x46033a5c  madd.s      $f9, $f7, $f3
    ctx->pc = 0x229948u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x22994c: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x22994cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x229950: 0x4604081e  madda.s     $f1, $f4
    ctx->pc = 0x229950u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x229954: 0x46076102  mul.s       $f4, $f12, $f7
    ctx->pc = 0x229954u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x229958: 0x4606195c  madd.s      $f5, $f3, $f6
    ctx->pc = 0x229958u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x22995c: 0x460a501a  mula.s      $f10, $f10
    ctx->pc = 0x22995cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x229960: 0x460b581e  madda.s     $f11, $f11
    ctx->pc = 0x229960u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[11]));
    // 0x229964: 0x46052141  sub.s       $f5, $f4, $f5
    ctx->pc = 0x229964u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x229968: 0x4609481e  madda.s     $f9, $f9
    ctx->pc = 0x229968u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[9]));
    // 0x22996c: 0x4605291c  madd.s      $f4, $f5, $f5
    ctx->pc = 0x22996cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x229970: 0x460d2032  c.eq.s      $f4, $f13
    ctx->pc = 0x229970u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229974: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x229974u;
    {
        const bool branch_taken_0x229974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229974) {
            ctx->pc = 0x229998u;
            goto label_229998;
        }
    }
    ctx->pc = 0x22997Cu;
    // 0x22997c: 0x0  nop
    ctx->pc = 0x22997cu;
    // NOP
    // 0x229980: 0x0  nop
    ctx->pc = 0x229980u;
    // NOP
    // 0x229984: 0x46040356  rsqrt.s     $f13, $f0, $f4
    ctx->pc = 0x229984u;
    ctx->f[13] = 1.0f / sqrtf(ctx->f[0]);
    // 0x229988: 0x0  nop
    ctx->pc = 0x229988u;
    // NOP
    // 0x22998c: 0x0  nop
    ctx->pc = 0x22998cu;
    // NOP
    // 0x229990: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x229990u;
    {
        const bool branch_taken_0x229990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229990) {
            ctx->pc = 0x229998u;
            goto label_229998;
        }
    }
    ctx->pc = 0x229998u;
label_229998:
    // 0x229998: 0x46010900  add.s       $f4, $f1, $f1
    ctx->pc = 0x229998u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x22999c: 0x46031840  add.s       $f1, $f3, $f3
    ctx->pc = 0x22999cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2299a0: 0xe64400a0  swc1        $f4, 0xA0($s2)
    ctx->pc = 0x2299a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x2299a4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2299a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2299a8: 0xe64200a4  swc1        $f2, 0xA4($s2)
    ctx->pc = 0x2299a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
    // 0x2299ac: 0xe64100a8  swc1        $f1, 0xA8($s2)
    ctx->pc = 0x2299acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    // 0x2299b0: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x2299b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2299b4: 0x460d2842  mul.s       $f1, $f5, $f13
    ctx->pc = 0x2299b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x2299b8: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x2299b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
    // 0x2299bc: 0x460d5902  mul.s       $f4, $f11, $f13
    ctx->pc = 0x2299bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
    // 0x2299c0: 0x460d50c2  mul.s       $f3, $f10, $f13
    ctx->pc = 0x2299c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
    // 0x2299c4: 0x460d4882  mul.s       $f2, $f9, $f13
    ctx->pc = 0x2299c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x2299c8: 0x46080144  c1          0x80144
    ctx->pc = 0x2299c8u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x2299cc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2299ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2299d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2299d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2299d4: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x2299d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2299d8: 0x26500050  addiu       $s0, $s2, 0x50
    ctx->pc = 0x2299d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2299dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2299dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2299e0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2299e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2299e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2299e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2299e8: 0x0  nop
    ctx->pc = 0x2299e8u;
    // NOP
    // 0x2299ec: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2299ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2299f0: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x2299f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
    // 0x2299f4: 0xe6440080  swc1        $f4, 0x80($s2)
    ctx->pc = 0x2299f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x2299f8: 0xe6430084  swc1        $f3, 0x84($s2)
    ctx->pc = 0x2299f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x2299fc: 0xe6420088  swc1        $f2, 0x88($s2)
    ctx->pc = 0x2299fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x229a00: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x229A00u;
    SET_GPR_U32(ctx, 31, 0x229A08u);
    ctx->pc = 0x229A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229A00u;
            // 0x229a04: 0xe641008c  swc1        $f1, 0x8C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A08u; }
        if (ctx->pc != 0x229A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A08u; }
        if (ctx->pc != 0x229A08u) { return; }
    }
    ctx->pc = 0x229A08u;
label_229a08:
    // 0x229a08: 0xc6080044  lwc1        $f8, 0x44($s0)
    ctx->pc = 0x229a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x229a0c: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x229a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x229a10: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x229a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229a14: 0xc6090040  lwc1        $f9, 0x40($s0)
    ctx->pc = 0x229a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x229a18: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x229a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229a1c: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x229a1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x229a20: 0xc6070048  lwc1        $f7, 0x48($s0)
    ctx->pc = 0x229a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x229a24: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x229a24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x229a28: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x229a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229a2c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x229a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229a30: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x229a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229a34: 0x4602395c  madd.s      $f5, $f7, $f2
    ctx->pc = 0x229a34u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x229a38: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x229a38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x229a3c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x229a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229a40: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x229a40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x229a44: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x229a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x229a48: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x229a48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x229a4c: 0x4604391c  madd.s      $f4, $f7, $f4
    ctx->pc = 0x229a4cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x229a50: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x229a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229a54: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x229a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229a58: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x229a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229a5c: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x229a5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x229a60: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x229a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x229a64: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x229a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x229a68: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x229a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229a6c: 0x4602481e  madda.s     $f9, $f2
    ctx->pc = 0x229a6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
    // 0x229a70: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x229a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x229a74: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x229a74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x229a78: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x229a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x229a7c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x229a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229a80: 0xe7a500c0  swc1        $f5, 0xC0($sp)
    ctx->pc = 0x229a80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x229a84: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x229a84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x229a88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x229a88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x229a8c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x229a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x229a90: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x229a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229a94: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x229a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x229a98: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x229a98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x229a9c: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x229a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_229aa0:
    // 0x229aa0: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x229aa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x229aa4: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x229aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x229aa8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x229aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x229aac: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x229AACu;
    {
        const bool branch_taken_0x229aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229aac) {
            ctx->pc = 0x229B38u;
            goto label_229b38;
        }
    }
    ctx->pc = 0x229AB4u;
    // 0x229ab4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x229ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229ab8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x229abc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x229abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x229ac0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x229ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x229ac4: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x229ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x229ac8: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x229ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229acc: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x229accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x229ad0: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x229ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229ad4: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x229ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x229ad8: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x229ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229adc: 0xc0a4644  jal         func_291910
    ctx->pc = 0x229ADCu;
    SET_GPR_U32(ctx, 31, 0x229AE4u);
    ctx->pc = 0x229AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229ADCu;
            // 0x229ae0: 0xe64000ec  swc1        $f0, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291910u;
    if (runtime->hasFunction(0x291910u)) {
        auto targetFn = runtime->lookupFunction(0x291910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229AE4u; }
        if (ctx->pc != 0x229AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291910_0x291910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229AE4u; }
        if (ctx->pc != 0x229AE4u) { return; }
    }
    ctx->pc = 0x229AE4u;
label_229ae4:
    // 0x229ae4: 0xc64300d0  lwc1        $f3, 0xD0($s2)
    ctx->pc = 0x229ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229ae8: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x229ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x229aec: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x229aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229af0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x229af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x229af4: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x229af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229af8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x229af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x229afc: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x229afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229b00: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x229b00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x229b04: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x229b04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x229b08: 0xc64300d4  lwc1        $f3, 0xD4($s2)
    ctx->pc = 0x229b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229b0c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x229b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229b10: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x229b10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x229b14: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x229b14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x229b18: 0xc64200d8  lwc1        $f2, 0xD8($s2)
    ctx->pc = 0x229b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229b1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x229b1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x229b20: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x229b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x229b24: 0xc64100dc  lwc1        $f1, 0xDC($s2)
    ctx->pc = 0x229b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229b28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x229b2c: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x229B2Cu;
    SET_GPR_U32(ctx, 31, 0x229B34u);
    ctx->pc = 0x229B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229B2Cu;
            // 0x229b30: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B34u; }
        if (ctx->pc != 0x229B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B34u; }
        if (ctx->pc != 0x229B34u) { return; }
    }
    ctx->pc = 0x229B34u;
label_229b34:
    // 0x229b34: 0x0  nop
    ctx->pc = 0x229b34u;
    // NOP
label_229b38:
    // 0x229b38: 0xc64200e4  lwc1        $f2, 0xE4($s2)
    ctx->pc = 0x229b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229b3c: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x229b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229b40: 0xc64000e8  lwc1        $f0, 0xE8($s2)
    ctx->pc = 0x229b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229b44: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x229b44u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x229b48: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x229b48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x229b4c: 0x460000dc  madd.s      $f3, $f0, $f0
    ctx->pc = 0x229b4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x229b50: 0xc64200f4  lwc1        $f2, 0xF4($s2)
    ctx->pc = 0x229b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229b54: 0xc64100f0  lwc1        $f1, 0xF0($s2)
    ctx->pc = 0x229b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229b58: 0xc64000f8  lwc1        $f0, 0xF8($s2)
    ctx->pc = 0x229b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229b5c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x229b5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x229b60: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x229b60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x229b64: 0x4600009c  madd.s      $f2, $f0, $f0
    ctx->pc = 0x229b64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x229b68: 0xc64000b8  lwc1        $f0, 0xB8($s2)
    ctx->pc = 0x229b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229b6c: 0xc64100b4  lwc1        $f1, 0xB4($s2)
    ctx->pc = 0x229b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229b70: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x229b70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x229b74: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x229b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x229b78: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x229b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229b7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x229B7Cu;
    {
        const bool branch_taken_0x229b7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229b7c) {
            ctx->pc = 0x229B90u;
            goto label_229b90;
        }
    }
    ctx->pc = 0x229B84u;
    // 0x229b84: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x229b84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229b88: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x229B88u;
    {
        const bool branch_taken_0x229b88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229b88) {
            ctx->pc = 0x229C08u;
            goto label_229c08;
        }
    }
    ctx->pc = 0x229B90u;
label_229b90:
    // 0x229b90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x229b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x229b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229b98: 0x0  nop
    ctx->pc = 0x229b98u;
    // NOP
    // 0x229b9c: 0x46030016  rsqrt.s     $f0, $f0, $f3
    ctx->pc = 0x229b9cu;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x229ba0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x229ba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x229ba4: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x229ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229ba8: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x229ba8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229bac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x229bb0: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x229bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x229bb4: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x229bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229bb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x229bbc: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x229bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x229bc0: 0xc64000e8  lwc1        $f0, 0xE8($s2)
    ctx->pc = 0x229bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229bc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x229bc8: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x229bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x229bcc: 0xc64000ec  lwc1        $f0, 0xEC($s2)
    ctx->pc = 0x229bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229bd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x229bd4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x229BD4u;
    {
        const bool branch_taken_0x229bd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229BD4u;
            // 0x229bd8: 0xe64000ec  swc1        $f0, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bd4) {
            ctx->pc = 0x229C08u;
            goto label_229c08;
        }
    }
    ctx->pc = 0x229BDCu;
    // 0x229bdc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x229be0: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x229be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x229be4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x229be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229be8: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x229be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x229bec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x229becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229bf0: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x229bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x229bf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x229bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229bf8: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x229bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x229bfc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x229bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c00: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x229c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x229c04: 0x0  nop
    ctx->pc = 0x229c04u;
    // NOP
label_229c08:
    // 0x229c08: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x229c08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229c0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x229C0Cu;
    {
        const bool branch_taken_0x229c0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229c0c) {
            ctx->pc = 0x229C20u;
            goto label_229c20;
        }
    }
    ctx->pc = 0x229C14u;
    // 0x229c14: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x229c14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229c18: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x229C18u;
    {
        const bool branch_taken_0x229c18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229c18) {
            ctx->pc = 0x229C98u;
            goto label_229c98;
        }
    }
    ctx->pc = 0x229C20u;
label_229c20:
    // 0x229c20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x229c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x229c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229c28: 0x0  nop
    ctx->pc = 0x229c28u;
    // NOP
    // 0x229c2c: 0x460200d6  rsqrt.s     $f3, $f0, $f2
    ctx->pc = 0x229c2cu;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
    // 0x229c30: 0xc64100b8  lwc1        $f1, 0xB8($s2)
    ctx->pc = 0x229c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229c34: 0xc64000f0  lwc1        $f0, 0xF0($s2)
    ctx->pc = 0x229c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c38: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x229c38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229c3c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x229c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x229c40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x229c44: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x229c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x229c48: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x229c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x229c50: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x229c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x229c54: 0xc64000f8  lwc1        $f0, 0xF8($s2)
    ctx->pc = 0x229c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x229c5c: 0xe64000f8  swc1        $f0, 0xF8($s2)
    ctx->pc = 0x229c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x229c60: 0xc64000fc  lwc1        $f0, 0xFC($s2)
    ctx->pc = 0x229c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x229c68: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x229C68u;
    {
        const bool branch_taken_0x229c68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229C68u;
            // 0x229c6c: 0xe64000fc  swc1        $f0, 0xFC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c68) {
            ctx->pc = 0x229C98u;
            goto label_229c98;
        }
    }
    ctx->pc = 0x229C70u;
    // 0x229c70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x229c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x229c74: 0x2442d6e0  addiu       $v0, $v0, -0x2920
    ctx->pc = 0x229c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956768));
    // 0x229c78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x229c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c7c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x229c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x229c80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x229c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c84: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x229c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x229c88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x229c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c8c: 0xe64000f8  swc1        $f0, 0xF8($s2)
    ctx->pc = 0x229c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    // 0x229c90: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x229c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c94: 0xe64000fc  swc1        $f0, 0xFC($s2)
    ctx->pc = 0x229c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
label_229c98:
    // 0x229c98: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x229c98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x229c9c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x229c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229ca0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x229ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x229ca4: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x229CA4u;
    {
        const bool branch_taken_0x229ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229CA4u;
            // 0x229ca8: 0xa2430009  sb          $v1, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ca4) {
            ctx->pc = 0x229F28u;
            goto label_229f28;
        }
    }
    ctx->pc = 0x229CACu;
    // 0x229cac: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x229cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x229cb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229CB0u;
    {
        const bool branch_taken_0x229cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229cb0) {
            ctx->pc = 0x229CC0u;
            goto label_229cc0;
        }
    }
    ctx->pc = 0x229CB8u;
    // 0x229cb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x229CB8u;
    {
        const bool branch_taken_0x229cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229CB8u;
            // 0x229cbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229cb8) {
            ctx->pc = 0x229CE0u;
            goto label_229ce0;
        }
    }
    ctx->pc = 0x229CC0u;
label_229cc0:
    // 0x229cc0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x229cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x229cc4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229CC4u;
    {
        const bool branch_taken_0x229cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229cc4) {
            ctx->pc = 0x229CD8u;
            goto label_229cd8;
        }
    }
    ctx->pc = 0x229CCCu;
    // 0x229ccc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x229cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x229cd0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x229CD0u;
    {
        const bool branch_taken_0x229cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229CD0u;
            // 0x229cd4: 0xa2420009  sb          $v0, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229cd0) {
            ctx->pc = 0x229F28u;
            goto label_229f28;
        }
    }
    ctx->pc = 0x229CD8u;
label_229cd8:
    // 0x229cd8: 0xa2400009  sb          $zero, 0x9($s2)
    ctx->pc = 0x229cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x229cdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x229cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229ce0:
    // 0x229ce0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x229ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x229ce4: 0xc64100b0  lwc1        $f1, 0xB0($s2)
    ctx->pc = 0x229ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229cec: 0x0  nop
    ctx->pc = 0x229cecu;
    // NOP
    // 0x229cf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229cf4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x229CF4u;
    {
        const bool branch_taken_0x229cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229cf4) {
            ctx->pc = 0x229CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229CF4u;
            // 0x229cf8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x229CFCu;
            goto label_229cfc;
        }
    }
    ctx->pc = 0x229CFCu;
label_229cfc:
    // 0x229cfc: 0xc64400f4  lwc1        $f4, 0xF4($s2)
    ctx->pc = 0x229cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x229d00: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x229d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x229d04: 0xc64300f0  lwc1        $f3, 0xF0($s2)
    ctx->pc = 0x229d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229d08: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x229d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x229d0c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x229d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x229d10: 0x24650100  addiu       $a1, $v1, 0x100
    ctx->pc = 0x229d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x229d14: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x229d14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x229d18: 0xc64200f8  lwc1        $f2, 0xF8($s2)
    ctx->pc = 0x229d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229d1c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x229d1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x229d20: 0xc64700e4  lwc1        $f7, 0xE4($s2)
    ctx->pc = 0x229d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x229d24: 0x4602109c  madd.s      $f2, $f2, $f2
    ctx->pc = 0x229d24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x229d28: 0xc64600e0  lwc1        $f6, 0xE0($s2)
    ctx->pc = 0x229d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x229d2c: 0x4607381a  mula.s      $f7, $f7
    ctx->pc = 0x229d2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x229d30: 0xc64500e8  lwc1        $f5, 0xE8($s2)
    ctx->pc = 0x229d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x229d34: 0x4606301e  madda.s     $f6, $f6
    ctx->pc = 0x229d34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x229d38: 0xc460010c  lwc1        $f0, 0x10C($v1)
    ctx->pc = 0x229d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229d3c: 0x4605281e  madda.s     $f5, $f5
    ctx->pc = 0x229d3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x229d40: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x229d40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x229d44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x229d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229d48: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x229D48u;
    {
        const bool branch_taken_0x229d48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229D48u;
            // 0x229d4c: 0x24a2000c  addiu       $v0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d48) {
            ctx->pc = 0x229D58u;
            goto label_229d58;
        }
    }
    ctx->pc = 0x229D50u;
    // 0x229d50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x229D50u;
    {
        const bool branch_taken_0x229d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229D50u;
            // 0x229d54: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d50) {
            ctx->pc = 0x229D60u;
            goto label_229d60;
        }
    }
    ctx->pc = 0x229D58u;
label_229d58:
    // 0x229d58: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x229d58u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x229d5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x229d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_229d60:
    // 0x229d60: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x229d60u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x229d64: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x229d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229d68: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x229d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x229d6c: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x229d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229d70: 0x2491821  addu        $v1, $s2, $t1
    ctx->pc = 0x229d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x229d74: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x229d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x229d78: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x229d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x229d7c: 0x964200c4  lhu         $v0, 0xC4($s2)
    ctx->pc = 0x229d7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x229d80: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x229d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x229d84: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x229d84u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229d88: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x229d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x229d8c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x229d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x229d90: 0xc6430064  lwc1        $f3, 0x64($s2)
    ctx->pc = 0x229d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229d94: 0x24480064  addiu       $t0, $v0, 0x64
    ctx->pc = 0x229d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x229d98: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x229d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229d9c: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x229d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x229da0: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x229da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229da4: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x229da4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x229da8: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x229da8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x229dac: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x229dacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x229db0: 0x4605281e  madda.s     $f5, $f5
    ctx->pc = 0x229db0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x229db4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x229db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229db8: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x229db8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x229dbc: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x229dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x229dc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229dc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229dc4: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x229DC4u;
    {
        const bool branch_taken_0x229dc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229DC4u;
            // 0x229dc8: 0x247000c8  addiu       $s0, $v1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229dc4) {
            ctx->pc = 0x229ED8u;
            goto label_229ed8;
        }
    }
    ctx->pc = 0x229DCCu;
    // 0x229dcc: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x229dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x229dd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x229dd4: 0x1024821  addu        $t1, $t0, $v0
    ctx->pc = 0x229dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x229dd8: 0x3c083c0c  lui         $t0, 0x3C0C
    ctx->pc = 0x229dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15372 << 16));
    // 0x229ddc: 0x852a001c  lh          $t2, 0x1C($t1)
    ctx->pc = 0x229ddcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x229de0: 0x3508cccd  ori         $t0, $t0, 0xCCCD
    ctx->pc = 0x229de0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)52429);
    // 0x229de4: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x229de4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x229de8: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x229de8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x229dec: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x229decu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x229df0: 0x2509ff80  addiu       $t1, $t0, -0x80
    ctx->pc = 0x229df0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
    // 0x229df4: 0xafaa011c  sw          $t2, 0x11C($sp)
    ctx->pc = 0x229df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 10));
    // 0x229df8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x229df8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229dfc: 0x34202  srl         $t0, $v1, 8
    ctx->pc = 0x229dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x229e00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x229e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x229e04: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x229e04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x229e08: 0x2509ff80  addiu       $t1, $t0, -0x80
    ctx->pc = 0x229e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
    // 0x229e0c: 0x34402  srl         $t0, $v1, 16
    ctx->pc = 0x229e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x229e10: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x229e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x229e14: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x229e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x229e18: 0x2508ff80  addiu       $t0, $t0, -0x80
    ctx->pc = 0x229e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
    // 0x229e1c: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x229e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x229e20: 0x460111c2  mul.s       $f7, $f2, $f1
    ctx->pc = 0x229e20u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x229e24: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x229e24u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229e28: 0x0  nop
    ctx->pc = 0x229e28u;
    // NOP
    // 0x229e2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x229e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x229e30: 0x46011142  mul.s       $f5, $f2, $f1
    ctx->pc = 0x229e30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x229e34: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x229e34u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229e38: 0x0  nop
    ctx->pc = 0x229e38u;
    // NOP
    // 0x229e3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x229e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x229e40: 0x460110c2  mul.s       $f3, $f2, $f1
    ctx->pc = 0x229e40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x229e44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x229e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229e48: 0x0  nop
    ctx->pc = 0x229e48u;
    // NOP
    // 0x229e4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x229e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x229e50: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x229e50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x229e54: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x229e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x229e58: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x229e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229e5c: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x229e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x229e60: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x229e60u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x229e64: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x229e64u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x229e68: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x229e68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x229e6c: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x229e6cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x229e70: 0x46014018  adda.s      $f8, $f1
    ctx->pc = 0x229e70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x229e74: 0x4606305c  madd.s      $f1, $f6, $f6
    ctx->pc = 0x229e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x229e78: 0x46014018  adda.s      $f8, $f1
    ctx->pc = 0x229e78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x229e7c: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x229e7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x229e80: 0x46014018  adda.s      $f8, $f1
    ctx->pc = 0x229e80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x229e84: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x229e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229e88: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x229e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229e8c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x229e8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x229e90: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x229e90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x229e94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229e94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229e98: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x229E98u;
    {
        const bool branch_taken_0x229e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229e98) {
            ctx->pc = 0x229ED8u;
            goto label_229ed8;
        }
    }
    ctx->pc = 0x229EA0u;
    // 0x229ea0: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x229ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x229ea4: 0x2a71021  addu        $v0, $s5, $a3
    ctx->pc = 0x229ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x229ea8: 0x94c3000a  lhu         $v1, 0xA($a2)
    ctx->pc = 0x229ea8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x229eac: 0x9042013d  lbu         $v0, 0x13D($v0)
    ctx->pc = 0x229eacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 317)));
    // 0x229eb0: 0x3065007f  andi        $a1, $v1, 0x7F
    ctx->pc = 0x229eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x229eb4: 0x22380  sll         $a0, $v0, 14
    ctx->pc = 0x229eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x229eb8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x229eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x229ebc: 0x51183  sra         $v0, $a1, 6
    ctx->pc = 0x229ebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 6));
    // 0x229ec0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x229ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229ec4: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x229ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x229ec8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x229ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x229ecc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x229eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x229ed0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x229ED0u;
    {
        const bool branch_taken_0x229ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229ED0u;
            // 0x229ed4: 0xa4c2000a  sh          $v0, 0xA($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ed0) {
            ctx->pc = 0x229F28u;
            goto label_229f28;
        }
    }
    ctx->pc = 0x229ED8u;
label_229ed8:
    // 0x229ed8: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x229ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x229edc: 0x2424021  addu        $t0, $s2, $v0
    ctx->pc = 0x229edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x229ee0: 0x2a71021  addu        $v0, $s5, $a3
    ctx->pc = 0x229ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x229ee4: 0x9042013d  lbu         $v0, 0x13D($v0)
    ctx->pc = 0x229ee4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 317)));
    // 0x229ee8: 0x9507000a  lhu         $a3, 0xA($t0)
    ctx->pc = 0x229ee8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x229eec: 0x21b80  sll         $v1, $v0, 14
    ctx->pc = 0x229eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x229ef0: 0x30e2007f  andi        $v0, $a3, 0x7F
    ctx->pc = 0x229ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x229ef4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x229ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x229ef8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x229ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x229efc: 0xa502000a  sh          $v0, 0xA($t0)
    ctx->pc = 0x229efcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x229f00: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x229f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229f04: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x229f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229f08: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x229f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229f0c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x229f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x229f10: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x229f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x229f14: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x229f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x229f18: 0xc0a467c  jal         func_2919F0
    ctx->pc = 0x229F18u;
    SET_GPR_U32(ctx, 31, 0x229F20u);
    ctx->pc = 0x229F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229F18u;
            // 0x229f1c: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2919F0u;
    if (runtime->hasFunction(0x2919F0u)) {
        auto targetFn = runtime->lookupFunction(0x2919F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F20u; }
        if (ctx->pc != 0x229F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002919F0_0x2919f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F20u; }
        if (ctx->pc != 0x229F20u) { return; }
    }
    ctx->pc = 0x229F20u;
label_229f20:
    // 0x229f20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x229f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x229f24: 0x0  nop
    ctx->pc = 0x229f24u;
    // NOP
label_229f28:
    // 0x229f28: 0x9643000c  lhu         $v1, 0xC($s2)
    ctx->pc = 0x229f28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x229f2c: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x229f2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x229f30: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x229f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x229f34: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x229f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x229f38: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x229f38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x229f3c: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x229F3Cu;
    {
        const bool branch_taken_0x229f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x229f3c) {
            ctx->pc = 0x229F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229F3Cu;
            // 0x229f40: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229F44u;
            goto label_229f44;
        }
    }
    ctx->pc = 0x229F44u;
label_229f44:
    // 0x229f44: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x229f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x229f48: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x229F48u;
    {
        const bool branch_taken_0x229f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x229f48) {
            ctx->pc = 0x229F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229F48u;
            // 0x229f4c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229F50u;
            goto label_229f50;
        }
    }
    ctx->pc = 0x229F50u;
label_229f50:
    // 0x229f50: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x229f50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x229f54: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x229f54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x229f58: 0x6c1fc91  bgez        $s6, . + 4 + (-0x36F << 2)
    ctx->pc = 0x229F58u;
    {
        const bool branch_taken_0x229f58 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x229F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229F58u;
            // 0x229f5c: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f58) {
            ctx->pc = 0x2291A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2291a0;
        }
    }
    ctx->pc = 0x229F60u;
label_229f60:
    // 0x229f60: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x229f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f64: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x229f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x229f68: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x229f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x229f6c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x229f6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x229f70: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x229f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x229f74: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x229f74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x229f78: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x229f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x229f7c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x229f7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229f80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x229f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229f84: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x229f84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229f88: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x229f88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229f8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x229f8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229f90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x229f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229f94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x229f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229f98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x229f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x229F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229F9Cu;
            // 0x229fa0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x229FA4u;
    // 0x229fa4: 0x0  nop
    ctx->pc = 0x229fa4u;
    // NOP
    // 0x229fa8: 0x0  nop
    ctx->pc = 0x229fa8u;
    // NOP
    // 0x229fac: 0x0  nop
    ctx->pc = 0x229facu;
    // NOP
}
