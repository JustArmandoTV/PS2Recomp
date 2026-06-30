#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE2C0
// Address: 0x1de2c0 - 0x1de3d0
void sub_001DE2C0_0x1de2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE2C0_0x1de2c0");
#endif

    switch (ctx->pc) {
        case 0x1de2c0u: goto label_1de2c0;
        case 0x1de2c4u: goto label_1de2c4;
        case 0x1de2c8u: goto label_1de2c8;
        case 0x1de2ccu: goto label_1de2cc;
        case 0x1de2d0u: goto label_1de2d0;
        case 0x1de2d4u: goto label_1de2d4;
        case 0x1de2d8u: goto label_1de2d8;
        case 0x1de2dcu: goto label_1de2dc;
        case 0x1de2e0u: goto label_1de2e0;
        case 0x1de2e4u: goto label_1de2e4;
        case 0x1de2e8u: goto label_1de2e8;
        case 0x1de2ecu: goto label_1de2ec;
        case 0x1de2f0u: goto label_1de2f0;
        case 0x1de2f4u: goto label_1de2f4;
        case 0x1de2f8u: goto label_1de2f8;
        case 0x1de2fcu: goto label_1de2fc;
        case 0x1de300u: goto label_1de300;
        case 0x1de304u: goto label_1de304;
        case 0x1de308u: goto label_1de308;
        case 0x1de30cu: goto label_1de30c;
        case 0x1de310u: goto label_1de310;
        case 0x1de314u: goto label_1de314;
        case 0x1de318u: goto label_1de318;
        case 0x1de31cu: goto label_1de31c;
        case 0x1de320u: goto label_1de320;
        case 0x1de324u: goto label_1de324;
        case 0x1de328u: goto label_1de328;
        case 0x1de32cu: goto label_1de32c;
        case 0x1de330u: goto label_1de330;
        case 0x1de334u: goto label_1de334;
        case 0x1de338u: goto label_1de338;
        case 0x1de33cu: goto label_1de33c;
        case 0x1de340u: goto label_1de340;
        case 0x1de344u: goto label_1de344;
        case 0x1de348u: goto label_1de348;
        case 0x1de34cu: goto label_1de34c;
        case 0x1de350u: goto label_1de350;
        case 0x1de354u: goto label_1de354;
        case 0x1de358u: goto label_1de358;
        case 0x1de35cu: goto label_1de35c;
        case 0x1de360u: goto label_1de360;
        case 0x1de364u: goto label_1de364;
        case 0x1de368u: goto label_1de368;
        case 0x1de36cu: goto label_1de36c;
        case 0x1de370u: goto label_1de370;
        case 0x1de374u: goto label_1de374;
        case 0x1de378u: goto label_1de378;
        case 0x1de37cu: goto label_1de37c;
        case 0x1de380u: goto label_1de380;
        case 0x1de384u: goto label_1de384;
        case 0x1de388u: goto label_1de388;
        case 0x1de38cu: goto label_1de38c;
        case 0x1de390u: goto label_1de390;
        case 0x1de394u: goto label_1de394;
        case 0x1de398u: goto label_1de398;
        case 0x1de39cu: goto label_1de39c;
        case 0x1de3a0u: goto label_1de3a0;
        case 0x1de3a4u: goto label_1de3a4;
        case 0x1de3a8u: goto label_1de3a8;
        case 0x1de3acu: goto label_1de3ac;
        case 0x1de3b0u: goto label_1de3b0;
        case 0x1de3b4u: goto label_1de3b4;
        case 0x1de3b8u: goto label_1de3b8;
        case 0x1de3bcu: goto label_1de3bc;
        case 0x1de3c0u: goto label_1de3c0;
        case 0x1de3c4u: goto label_1de3c4;
        case 0x1de3c8u: goto label_1de3c8;
        case 0x1de3ccu: goto label_1de3cc;
        default: break;
    }

    ctx->pc = 0x1de2c0u;

label_1de2c0:
    // 0x1de2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1de2c4:
    // 0x1de2c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1de2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1de2c8:
    // 0x1de2c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1de2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1de2cc:
    // 0x1de2cc: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x1de2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_1de2d0:
    // 0x1de2d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1de2d4:
    // 0x1de2d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1de2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1de2d8:
    // 0x1de2d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1de2dc:
    // 0x1de2dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de2e0:
    // 0x1de2e0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1de2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_1de2e4:
    // 0x1de2e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1de2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1de2e8:
    // 0x1de2e8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1de2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1de2ec:
    // 0x1de2ec: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1de2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_1de2f0:
    // 0x1de2f0: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x1de2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
label_1de2f4:
    // 0x1de2f4: 0x24a5cfe0  addiu       $a1, $a1, -0x3020
    ctx->pc = 0x1de2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954976));
label_1de2f8:
    // 0x1de2f8: 0xc04a508  jal         func_129420
label_1de2fc:
    if (ctx->pc == 0x1DE2FCu) {
        ctx->pc = 0x1DE2FCu;
            // 0x1de2fc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x1DE300u;
        goto label_1de300;
    }
    ctx->pc = 0x1DE2F8u;
    SET_GPR_U32(ctx, 31, 0x1DE300u);
    ctx->pc = 0x1DE2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE2F8u;
            // 0x1de2fc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE300u; }
        if (ctx->pc != 0x1DE300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE300u; }
        if (ctx->pc != 0x1DE300u) { return; }
    }
    ctx->pc = 0x1DE300u;
label_1de300:
    // 0x1de300: 0x8e390030  lw          $t9, 0x30($s1)
    ctx->pc = 0x1de300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1de304:
    // 0x1de304: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1de304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1de308:
    // 0x1de308: 0x320f809  jalr        $t9
label_1de30c:
    if (ctx->pc == 0x1DE30Cu) {
        ctx->pc = 0x1DE30Cu;
            // 0x1de30c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE310u;
        goto label_1de310;
    }
    ctx->pc = 0x1DE308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE310u);
        ctx->pc = 0x1DE30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE308u;
            // 0x1de30c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE310u; }
            if (ctx->pc != 0x1DE310u) { return; }
        }
        }
    }
    ctx->pc = 0x1DE310u;
label_1de310:
    // 0x1de310: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1de310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1de314:
    // 0x1de314: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1de314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1de318:
    // 0x1de318: 0x24635a90  addiu       $v1, $v1, 0x5A90
    ctx->pc = 0x1de318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23184));
label_1de31c:
    // 0x1de31c: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1de31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_1de320:
    // 0x1de320: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1de320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_1de324:
    // 0x1de324: 0x3c03468c  lui         $v1, 0x468C
    ctx->pc = 0x1de324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18060 << 16));
label_1de328:
    // 0x1de328: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1de328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_1de32c:
    // 0x1de32c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1de32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_1de330:
    // 0x1de330: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1de330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_1de334:
    // 0x1de334: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1de338:
    // 0x1de338: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1de338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_1de33c:
    // 0x1de33c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1de33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1de340:
    // 0x1de340: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1de340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_1de344:
    // 0x1de344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de348:
    // 0x1de348: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1de348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_1de34c:
    // 0x1de34c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x1de34cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_1de350:
    // 0x1de350: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x1de350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_1de354:
    // 0x1de354: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1de354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1de358:
    // 0x1de358: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x1de358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1de35c:
    // 0x1de35c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1de35cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_1de360:
    // 0x1de360: 0x0  nop
    ctx->pc = 0x1de360u;
    // NOP
label_1de364:
    // 0x1de364: 0x0  nop
    ctx->pc = 0x1de364u;
    // NOP
label_1de368:
    // 0x1de368: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1de368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1de36c:
    // 0x1de36c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1de370:
    if (ctx->pc == 0x1DE370u) {
        ctx->pc = 0x1DE370u;
            // 0x1de370: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1DE374u;
        goto label_1de374;
    }
    ctx->pc = 0x1DE36Cu;
    {
        const bool branch_taken_0x1de36c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de36c) {
            ctx->pc = 0x1DE370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE36Cu;
            // 0x1de370: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE384u;
            goto label_1de384;
        }
    }
    ctx->pc = 0x1DE374u;
label_1de374:
    // 0x1de374: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de374u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1de378:
    // 0x1de378: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1de378u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1de37c:
    // 0x1de37c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de380:
    if (ctx->pc == 0x1DE380u) {
        ctx->pc = 0x1DE380u;
            // 0x1de380: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->pc = 0x1DE384u;
        goto label_1de384;
    }
    ctx->pc = 0x1DE37Cu;
    {
        const bool branch_taken_0x1de37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE37Cu;
            // 0x1de380: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de37c) {
            ctx->pc = 0x1DE39Cu;
            goto label_1de39c;
        }
    }
    ctx->pc = 0x1DE384u;
label_1de384:
    // 0x1de384: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1de384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1de388:
    // 0x1de388: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de388u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1de38c:
    // 0x1de38c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1de38cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1de390:
    // 0x1de390: 0x0  nop
    ctx->pc = 0x1de390u;
    // NOP
label_1de394:
    // 0x1de394: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1de394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1de398:
    // 0x1de398: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x1de398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_1de39c:
    // 0x1de39c: 0xc078974  jal         func_1E25D0
label_1de3a0:
    if (ctx->pc == 0x1DE3A0u) {
        ctx->pc = 0x1DE3A4u;
        goto label_1de3a4;
    }
    ctx->pc = 0x1DE39Cu;
    SET_GPR_U32(ctx, 31, 0x1DE3A4u);
    ctx->pc = 0x1E25D0u;
    if (runtime->hasFunction(0x1E25D0u)) {
        auto targetFn = runtime->lookupFunction(0x1E25D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE3A4u; }
        if (ctx->pc != 0x1DE3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E25D0_0x1e25d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE3A4u; }
        if (ctx->pc != 0x1DE3A4u) { return; }
    }
    ctx->pc = 0x1DE3A4u;
label_1de3a4:
    // 0x1de3a4: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1de3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1de3a8:
    // 0x1de3a8: 0xc0788fc  jal         func_1E23F0
label_1de3ac:
    if (ctx->pc == 0x1DE3ACu) {
        ctx->pc = 0x1DE3ACu;
            // 0x1de3ac: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->pc = 0x1DE3B0u;
        goto label_1de3b0;
    }
    ctx->pc = 0x1DE3A8u;
    SET_GPR_U32(ctx, 31, 0x1DE3B0u);
    ctx->pc = 0x1DE3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE3A8u;
            // 0x1de3ac: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE3B0u; }
        if (ctx->pc != 0x1DE3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE3B0u; }
        if (ctx->pc != 0x1DE3B0u) { return; }
    }
    ctx->pc = 0x1DE3B0u;
label_1de3b0:
    // 0x1de3b0: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x1de3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_1de3b4:
    // 0x1de3b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1de3b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1de3b8:
    // 0x1de3b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1de3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1de3bc:
    // 0x1de3bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de3c0:
    // 0x1de3c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de3c4:
    // 0x1de3c4: 0x3e00008  jr          $ra
label_1de3c8:
    if (ctx->pc == 0x1DE3C8u) {
        ctx->pc = 0x1DE3C8u;
            // 0x1de3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1DE3CCu;
        goto label_1de3cc;
    }
    ctx->pc = 0x1DE3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE3C4u;
            // 0x1de3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE3CCu;
label_1de3cc:
    // 0x1de3cc: 0x0  nop
    ctx->pc = 0x1de3ccu;
    // NOP
}
