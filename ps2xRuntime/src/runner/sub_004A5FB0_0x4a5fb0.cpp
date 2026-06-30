#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5FB0
// Address: 0x4a5fb0 - 0x4a6100
void sub_004A5FB0_0x4a5fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5FB0_0x4a5fb0");
#endif

    switch (ctx->pc) {
        case 0x4a5fb0u: goto label_4a5fb0;
        case 0x4a5fb4u: goto label_4a5fb4;
        case 0x4a5fb8u: goto label_4a5fb8;
        case 0x4a5fbcu: goto label_4a5fbc;
        case 0x4a5fc0u: goto label_4a5fc0;
        case 0x4a5fc4u: goto label_4a5fc4;
        case 0x4a5fc8u: goto label_4a5fc8;
        case 0x4a5fccu: goto label_4a5fcc;
        case 0x4a5fd0u: goto label_4a5fd0;
        case 0x4a5fd4u: goto label_4a5fd4;
        case 0x4a5fd8u: goto label_4a5fd8;
        case 0x4a5fdcu: goto label_4a5fdc;
        case 0x4a5fe0u: goto label_4a5fe0;
        case 0x4a5fe4u: goto label_4a5fe4;
        case 0x4a5fe8u: goto label_4a5fe8;
        case 0x4a5fecu: goto label_4a5fec;
        case 0x4a5ff0u: goto label_4a5ff0;
        case 0x4a5ff4u: goto label_4a5ff4;
        case 0x4a5ff8u: goto label_4a5ff8;
        case 0x4a5ffcu: goto label_4a5ffc;
        case 0x4a6000u: goto label_4a6000;
        case 0x4a6004u: goto label_4a6004;
        case 0x4a6008u: goto label_4a6008;
        case 0x4a600cu: goto label_4a600c;
        case 0x4a6010u: goto label_4a6010;
        case 0x4a6014u: goto label_4a6014;
        case 0x4a6018u: goto label_4a6018;
        case 0x4a601cu: goto label_4a601c;
        case 0x4a6020u: goto label_4a6020;
        case 0x4a6024u: goto label_4a6024;
        case 0x4a6028u: goto label_4a6028;
        case 0x4a602cu: goto label_4a602c;
        case 0x4a6030u: goto label_4a6030;
        case 0x4a6034u: goto label_4a6034;
        case 0x4a6038u: goto label_4a6038;
        case 0x4a603cu: goto label_4a603c;
        case 0x4a6040u: goto label_4a6040;
        case 0x4a6044u: goto label_4a6044;
        case 0x4a6048u: goto label_4a6048;
        case 0x4a604cu: goto label_4a604c;
        case 0x4a6050u: goto label_4a6050;
        case 0x4a6054u: goto label_4a6054;
        case 0x4a6058u: goto label_4a6058;
        case 0x4a605cu: goto label_4a605c;
        case 0x4a6060u: goto label_4a6060;
        case 0x4a6064u: goto label_4a6064;
        case 0x4a6068u: goto label_4a6068;
        case 0x4a606cu: goto label_4a606c;
        case 0x4a6070u: goto label_4a6070;
        case 0x4a6074u: goto label_4a6074;
        case 0x4a6078u: goto label_4a6078;
        case 0x4a607cu: goto label_4a607c;
        case 0x4a6080u: goto label_4a6080;
        case 0x4a6084u: goto label_4a6084;
        case 0x4a6088u: goto label_4a6088;
        case 0x4a608cu: goto label_4a608c;
        case 0x4a6090u: goto label_4a6090;
        case 0x4a6094u: goto label_4a6094;
        case 0x4a6098u: goto label_4a6098;
        case 0x4a609cu: goto label_4a609c;
        case 0x4a60a0u: goto label_4a60a0;
        case 0x4a60a4u: goto label_4a60a4;
        case 0x4a60a8u: goto label_4a60a8;
        case 0x4a60acu: goto label_4a60ac;
        case 0x4a60b0u: goto label_4a60b0;
        case 0x4a60b4u: goto label_4a60b4;
        case 0x4a60b8u: goto label_4a60b8;
        case 0x4a60bcu: goto label_4a60bc;
        case 0x4a60c0u: goto label_4a60c0;
        case 0x4a60c4u: goto label_4a60c4;
        case 0x4a60c8u: goto label_4a60c8;
        case 0x4a60ccu: goto label_4a60cc;
        case 0x4a60d0u: goto label_4a60d0;
        case 0x4a60d4u: goto label_4a60d4;
        case 0x4a60d8u: goto label_4a60d8;
        case 0x4a60dcu: goto label_4a60dc;
        case 0x4a60e0u: goto label_4a60e0;
        case 0x4a60e4u: goto label_4a60e4;
        case 0x4a60e8u: goto label_4a60e8;
        case 0x4a60ecu: goto label_4a60ec;
        case 0x4a60f0u: goto label_4a60f0;
        case 0x4a60f4u: goto label_4a60f4;
        case 0x4a60f8u: goto label_4a60f8;
        case 0x4a60fcu: goto label_4a60fc;
        default: break;
    }

    ctx->pc = 0x4a5fb0u;

label_4a5fb0:
    // 0x4a5fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a5fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a5fb4:
    // 0x4a5fb4: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x4a5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_4a5fb8:
    // 0x4a5fb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a5fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a5fbc:
    // 0x4a5fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a5fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a5fc0:
    // 0x4a5fc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a5fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a5fc4:
    // 0x4a5fc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a5fc8:
    // 0x4a5fc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a5fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a5fcc:
    // 0x4a5fcc: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x4a5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_4a5fd0:
    // 0x4a5fd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a5fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a5fd4:
    // 0x4a5fd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a5fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a5fd8:
    // 0x4a5fd8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4a5fd8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4a5fdc:
    // 0x4a5fdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a5fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a5fe0:
    // 0x4a5fe0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4a5fe0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4a5fe4:
    // 0x4a5fe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a5fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a5fe8:
    // 0x4a5fe8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a5fe8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a5fec:
    // 0x4a5fec: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x4a5fecu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_4a5ff0:
    // 0x4a5ff0: 0x46170540  add.s       $f21, $f0, $f23
    ctx->pc = 0x4a5ff0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a5ff4:
    // 0x4a5ff4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a5ff4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a5ff8:
    // 0x4a5ff8: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x4a5ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a5ffc:
    // 0x4a5ffc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x4a5ffcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_4a6000:
    // 0x4a6000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a6000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6004:
    // 0x4a6004: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a6004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6008:
    // 0x4a6008: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a6008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a600c:
    // 0x4a600c: 0xc0506ac  jal         func_141AB0
label_4a6010:
    if (ctx->pc == 0x4A6010u) {
        ctx->pc = 0x4A6010u;
            // 0x4a6010: 0x46160500  add.s       $f20, $f0, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x4A6014u;
        goto label_4a6014;
    }
    ctx->pc = 0x4A600Cu;
    SET_GPR_U32(ctx, 31, 0x4A6014u);
    ctx->pc = 0x4A6010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A600Cu;
            // 0x4a6010: 0x46160500  add.s       $f20, $f0, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6014u; }
        if (ctx->pc != 0x4A6014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6014u; }
        if (ctx->pc != 0x4A6014u) { return; }
    }
    ctx->pc = 0x4A6014u;
label_4a6014:
    // 0x4a6014: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a6018:
    // 0x4a6018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a6018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a601c:
    // 0x4a601c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a601cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a6020:
    // 0x4a6020: 0x320f809  jalr        $t9
label_4a6024:
    if (ctx->pc == 0x4A6024u) {
        ctx->pc = 0x4A6024u;
            // 0x4a6024: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A6028u;
        goto label_4a6028;
    }
    ctx->pc = 0x4A6020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6028u);
        ctx->pc = 0x4A6024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6020u;
            // 0x4a6024: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6028u; }
            if (ctx->pc != 0x4A6028u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6028u;
label_4a6028:
    // 0x4a6028: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a6028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a602c:
    // 0x4a602c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a602cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6030:
    // 0x4a6030: 0x24a54fc0  addiu       $a1, $a1, 0x4FC0
    ctx->pc = 0x4a6030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20416));
label_4a6034:
    // 0x4a6034: 0x84444e78  lh          $a0, 0x4E78($v0)
    ctx->pc = 0x4a6034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20088)));
label_4a6038:
    // 0x4a6038: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4a6038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a603c:
    // 0x4a603c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x4a603cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_4a6040:
    // 0x4a6040: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4a6040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a6044:
    // 0x4a6044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6048:
    // 0x4a6048: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4a6048u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a604c:
    // 0x4a604c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6050:
    // 0x4a6050: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x4a6050u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a6054:
    // 0x4a6054: 0x84484e7a  lh          $t0, 0x4E7A($v0)
    ctx->pc = 0x4a6054u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20090)));
label_4a6058:
    // 0x4a6058: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a6058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a605c:
    // 0x4a605c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a6060:
    // 0x4a6060: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a6060u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6064:
    // 0x4a6064: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4a6064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a6068:
    // 0x4a6068: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x4a6068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a606c:
    // 0x4a606c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a6070:
    // 0x4a6070: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a6070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a6074:
    // 0x4a6074: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x4a6074u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_4a6078:
    // 0x4a6078: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4a6078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4a607c:
    // 0x4a607c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a607cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a6080:
    // 0x4a6080: 0xc0bc284  jal         func_2F0A10
label_4a6084:
    if (ctx->pc == 0x4A6084u) {
        ctx->pc = 0x4A6084u;
            // 0x4a6084: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A6088u;
        goto label_4a6088;
    }
    ctx->pc = 0x4A6080u;
    SET_GPR_U32(ctx, 31, 0x4A6088u);
    ctx->pc = 0x4A6084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6080u;
            // 0x4a6084: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6088u; }
        if (ctx->pc != 0x4A6088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6088u; }
        if (ctx->pc != 0x4A6088u) { return; }
    }
    ctx->pc = 0x4A6088u;
label_4a6088:
    // 0x4a6088: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a608c:
    // 0x4a608c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a608cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a6090:
    // 0x4a6090: 0x320f809  jalr        $t9
label_4a6094:
    if (ctx->pc == 0x4A6094u) {
        ctx->pc = 0x4A6094u;
            // 0x4a6094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6098u;
        goto label_4a6098;
    }
    ctx->pc = 0x4A6090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6098u);
        ctx->pc = 0x4A6094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6090u;
            // 0x4a6094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6098u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6098u; }
            if (ctx->pc != 0x4A6098u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6098u;
label_4a6098:
    // 0x4a6098: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4a6098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4a609c:
    // 0x4a609c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a609cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4a60a0:
    // 0x4a60a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a60a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a60a4:
    // 0x4a60a4: 0x3c08420c  lui         $t0, 0x420C
    ctx->pc = 0x4a60a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16908 << 16));
label_4a60a8:
    // 0x4a60a8: 0x46170300  add.s       $f12, $f0, $f23
    ctx->pc = 0x4a60a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a60ac:
    // 0x4a60ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a60acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a60b0:
    // 0x4a60b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a60b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a60b4:
    // 0x4a60b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a60b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a60b8:
    // 0x4a60b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4a60b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4a60bc:
    // 0x4a60bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a60bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a60c0:
    // 0x4a60c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a60c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a60c4:
    // 0x4a60c4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4a60c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4a60c8:
    // 0x4a60c8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a60c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4a60cc:
    // 0x4a60cc: 0xc15706c  jal         func_55C1B0
label_4a60d0:
    if (ctx->pc == 0x4A60D0u) {
        ctx->pc = 0x4A60D0u;
            // 0x4a60d0: 0x46160340  add.s       $f13, $f0, $f22 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x4A60D4u;
        goto label_4a60d4;
    }
    ctx->pc = 0x4A60CCu;
    SET_GPR_U32(ctx, 31, 0x4A60D4u);
    ctx->pc = 0x4A60D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A60CCu;
            // 0x4a60d0: 0x46160340  add.s       $f13, $f0, $f22 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A60D4u; }
        if (ctx->pc != 0x4A60D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A60D4u; }
        if (ctx->pc != 0x4A60D4u) { return; }
    }
    ctx->pc = 0x4A60D4u;
label_4a60d4:
    // 0x4a60d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a60d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a60d8:
    // 0x4a60d8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4a60d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4a60dc:
    // 0x4a60dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a60dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a60e0:
    // 0x4a60e0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4a60e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4a60e4:
    // 0x4a60e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a60e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a60e8:
    // 0x4a60e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a60e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a60ec:
    // 0x4a60ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a60ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a60f0:
    // 0x4a60f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a60f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a60f4:
    // 0x4a60f4: 0x3e00008  jr          $ra
label_4a60f8:
    if (ctx->pc == 0x4A60F8u) {
        ctx->pc = 0x4A60F8u;
            // 0x4a60f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A60FCu;
        goto label_4a60fc;
    }
    ctx->pc = 0x4A60F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A60F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A60F4u;
            // 0x4a60f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A60FCu;
label_4a60fc:
    // 0x4a60fc: 0x0  nop
    ctx->pc = 0x4a60fcu;
    // NOP
}
