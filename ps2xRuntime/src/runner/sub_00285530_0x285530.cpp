#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285530
// Address: 0x285530 - 0x285720
void sub_00285530_0x285530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285530_0x285530");
#endif

    switch (ctx->pc) {
        case 0x2855c0u: goto label_2855c0;
        case 0x28562cu: goto label_28562c;
        case 0x2856a0u: goto label_2856a0;
        case 0x2856b0u: goto label_2856b0;
        default: break;
    }

    ctx->pc = 0x285530u;

    // 0x285530: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x285530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x285534: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x285534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x285538: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x285538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28553c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x285540: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x285540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x285544: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x285544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x285548: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28554c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x285550: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x285550u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285554: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x285558: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x285558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28555c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x285560: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x285560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x285564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x285568: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x285568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28556c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28556cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285570: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x285570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285574: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x285574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285578: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x285578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28557c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x28557cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x285580: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x285580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x285584: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x285584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x285588: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x285588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x28558c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28558cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x285590: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x285590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x285594: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x285594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x285598: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x285598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28559c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28559cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2855a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2855a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2855a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2855a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2855a8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2855a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2855ac: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2855acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2855b0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2855b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2855b4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2855B4u;
    {
        const bool branch_taken_0x2855b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2855B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2855B4u;
            // 0x2855b8: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855b4) {
            ctx->pc = 0x2856B8u;
            goto label_2856b8;
        }
    }
    ctx->pc = 0x2855BCu;
    // 0x2855bc: 0x0  nop
    ctx->pc = 0x2855bcu;
    // NOP
label_2855c0:
    // 0x2855c0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2855c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2855c4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2855c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2855c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2855c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2855cc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2855ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2855d0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2855d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2855d4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2855d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2855d8: 0x27a200ac  addiu       $v0, $sp, 0xAC
    ctx->pc = 0x2855d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2855dc: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2855dcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2855e0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2855e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2855e4: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2855e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2855e8: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x2855e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2855ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2855ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2855f0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2855f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2855f4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2855f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2855f8: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2855f8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2855fc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2855fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x285600: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x285600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x285604: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x285604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x285608: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x285608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x28560c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x28560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285610: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x285610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285614: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x285614u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x285618: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x285618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x28561c: 0xe6c20004  swc1        $f2, 0x4($s6)
    ctx->pc = 0x28561cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x285620: 0xe6c10008  swc1        $f1, 0x8($s6)
    ctx->pc = 0x285620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x285624: 0xc0a33f0  jal         func_28CFC0
    ctx->pc = 0x285624u;
    SET_GPR_U32(ctx, 31, 0x28562Cu);
    ctx->pc = 0x285628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285624u;
            // 0x285628: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CFC0u;
    if (runtime->hasFunction(0x28CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x28CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28562Cu; }
        if (ctx->pc != 0x28562Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CFC0_0x28cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28562Cu; }
        if (ctx->pc != 0x28562Cu) { return; }
    }
    ctx->pc = 0x28562Cu;
label_28562c:
    // 0x28562c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x285630: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x285630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285634: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x285634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285638: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x285638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28563c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x28563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285640: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x285640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x285644: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x285644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x285648: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x285648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28564c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x28564cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x285650: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x285650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x285654: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x285654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x285658: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x285658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28565c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x285660: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x285660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285664: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x285664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x285668: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x285668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28566c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28566cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x285670: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x285670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285674: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x285674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285678: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x285678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28567c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x28567cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x285680: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x285680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285684: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x285684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285688: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x285688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28568c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x285690: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x285690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285694: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x285694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x285698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28569c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x28569cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2856a0:
    // 0x2856a0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2856a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2856a4: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2856a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2856a8: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2856A8u;
    {
        const bool branch_taken_0x2856a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2856a8) {
            ctx->pc = 0x2855C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2855c0;
        }
    }
    ctx->pc = 0x2856B0u;
label_2856b0:
    // 0x2856b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2856B0u;
    {
        const bool branch_taken_0x2856b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2856b0) {
            ctx->pc = 0x2856E8u;
            goto label_2856e8;
        }
    }
    ctx->pc = 0x2856B8u;
label_2856b8:
    // 0x2856b8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2856b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2856bc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2856bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2856c0: 0x1020fffb  beqz        $at, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2856C0u;
    {
        const bool branch_taken_0x2856c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2856C0u;
            // 0x2856c4: 0x3c120064  lui         $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856c0) {
            ctx->pc = 0x2856B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2856b0;
        }
    }
    ctx->pc = 0x2856C8u;
    // 0x2856c8: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x2856c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2856cc: 0x26520350  addiu       $s2, $s2, 0x350
    ctx->pc = 0x2856ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 848));
    // 0x2856d0: 0x27b600c0  addiu       $s6, $sp, 0xC0
    ctx->pc = 0x2856d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2856d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2856d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2856d8: 0x27b700a4  addiu       $s7, $sp, 0xA4
    ctx->pc = 0x2856d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2856dc: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x2856DCu;
    {
        const bool branch_taken_0x2856dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2856DCu;
            // 0x2856e0: 0x27be00a8  addiu       $fp, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856dc) {
            ctx->pc = 0x2856A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2856a0;
        }
    }
    ctx->pc = 0x2856E4u;
    // 0x2856e4: 0x0  nop
    ctx->pc = 0x2856e4u;
    // NOP
label_2856e8:
    // 0x2856e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2856e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2856ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2856ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2856f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2856f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2856f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2856f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2856f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2856f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2856fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2856fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285700: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28570c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28570cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285710: 0x3e00008  jr          $ra
    ctx->pc = 0x285710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285710u;
            // 0x285714: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285718u;
    // 0x285718: 0x0  nop
    ctx->pc = 0x285718u;
    // NOP
    // 0x28571c: 0x0  nop
    ctx->pc = 0x28571cu;
    // NOP
}
