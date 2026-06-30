#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C3430
// Address: 0x4c3430 - 0x4c35b0
void sub_004C3430_0x4c3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C3430_0x4c3430");
#endif

    switch (ctx->pc) {
        case 0x4c3430u: goto label_4c3430;
        case 0x4c3434u: goto label_4c3434;
        case 0x4c3438u: goto label_4c3438;
        case 0x4c343cu: goto label_4c343c;
        case 0x4c3440u: goto label_4c3440;
        case 0x4c3444u: goto label_4c3444;
        case 0x4c3448u: goto label_4c3448;
        case 0x4c344cu: goto label_4c344c;
        case 0x4c3450u: goto label_4c3450;
        case 0x4c3454u: goto label_4c3454;
        case 0x4c3458u: goto label_4c3458;
        case 0x4c345cu: goto label_4c345c;
        case 0x4c3460u: goto label_4c3460;
        case 0x4c3464u: goto label_4c3464;
        case 0x4c3468u: goto label_4c3468;
        case 0x4c346cu: goto label_4c346c;
        case 0x4c3470u: goto label_4c3470;
        case 0x4c3474u: goto label_4c3474;
        case 0x4c3478u: goto label_4c3478;
        case 0x4c347cu: goto label_4c347c;
        case 0x4c3480u: goto label_4c3480;
        case 0x4c3484u: goto label_4c3484;
        case 0x4c3488u: goto label_4c3488;
        case 0x4c348cu: goto label_4c348c;
        case 0x4c3490u: goto label_4c3490;
        case 0x4c3494u: goto label_4c3494;
        case 0x4c3498u: goto label_4c3498;
        case 0x4c349cu: goto label_4c349c;
        case 0x4c34a0u: goto label_4c34a0;
        case 0x4c34a4u: goto label_4c34a4;
        case 0x4c34a8u: goto label_4c34a8;
        case 0x4c34acu: goto label_4c34ac;
        case 0x4c34b0u: goto label_4c34b0;
        case 0x4c34b4u: goto label_4c34b4;
        case 0x4c34b8u: goto label_4c34b8;
        case 0x4c34bcu: goto label_4c34bc;
        case 0x4c34c0u: goto label_4c34c0;
        case 0x4c34c4u: goto label_4c34c4;
        case 0x4c34c8u: goto label_4c34c8;
        case 0x4c34ccu: goto label_4c34cc;
        case 0x4c34d0u: goto label_4c34d0;
        case 0x4c34d4u: goto label_4c34d4;
        case 0x4c34d8u: goto label_4c34d8;
        case 0x4c34dcu: goto label_4c34dc;
        case 0x4c34e0u: goto label_4c34e0;
        case 0x4c34e4u: goto label_4c34e4;
        case 0x4c34e8u: goto label_4c34e8;
        case 0x4c34ecu: goto label_4c34ec;
        case 0x4c34f0u: goto label_4c34f0;
        case 0x4c34f4u: goto label_4c34f4;
        case 0x4c34f8u: goto label_4c34f8;
        case 0x4c34fcu: goto label_4c34fc;
        case 0x4c3500u: goto label_4c3500;
        case 0x4c3504u: goto label_4c3504;
        case 0x4c3508u: goto label_4c3508;
        case 0x4c350cu: goto label_4c350c;
        case 0x4c3510u: goto label_4c3510;
        case 0x4c3514u: goto label_4c3514;
        case 0x4c3518u: goto label_4c3518;
        case 0x4c351cu: goto label_4c351c;
        case 0x4c3520u: goto label_4c3520;
        case 0x4c3524u: goto label_4c3524;
        case 0x4c3528u: goto label_4c3528;
        case 0x4c352cu: goto label_4c352c;
        case 0x4c3530u: goto label_4c3530;
        case 0x4c3534u: goto label_4c3534;
        case 0x4c3538u: goto label_4c3538;
        case 0x4c353cu: goto label_4c353c;
        case 0x4c3540u: goto label_4c3540;
        case 0x4c3544u: goto label_4c3544;
        case 0x4c3548u: goto label_4c3548;
        case 0x4c354cu: goto label_4c354c;
        case 0x4c3550u: goto label_4c3550;
        case 0x4c3554u: goto label_4c3554;
        case 0x4c3558u: goto label_4c3558;
        case 0x4c355cu: goto label_4c355c;
        case 0x4c3560u: goto label_4c3560;
        case 0x4c3564u: goto label_4c3564;
        case 0x4c3568u: goto label_4c3568;
        case 0x4c356cu: goto label_4c356c;
        case 0x4c3570u: goto label_4c3570;
        case 0x4c3574u: goto label_4c3574;
        case 0x4c3578u: goto label_4c3578;
        case 0x4c357cu: goto label_4c357c;
        case 0x4c3580u: goto label_4c3580;
        case 0x4c3584u: goto label_4c3584;
        case 0x4c3588u: goto label_4c3588;
        case 0x4c358cu: goto label_4c358c;
        case 0x4c3590u: goto label_4c3590;
        case 0x4c3594u: goto label_4c3594;
        case 0x4c3598u: goto label_4c3598;
        case 0x4c359cu: goto label_4c359c;
        case 0x4c35a0u: goto label_4c35a0;
        case 0x4c35a4u: goto label_4c35a4;
        case 0x4c35a8u: goto label_4c35a8;
        case 0x4c35acu: goto label_4c35ac;
        default: break;
    }

    ctx->pc = 0x4c3430u;

label_4c3430:
    // 0x4c3430: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4c3430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4c3434:
    // 0x4c3434: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4c3434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_4c3438:
    // 0x4c3438: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4c3438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4c343c:
    // 0x4c343c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4c343cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4c3440:
    // 0x4c3440: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4c3440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4c3444:
    // 0x4c3444: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x4c3444u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4c3448:
    // 0x4c3448: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4c3448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4c344c:
    // 0x4c344c: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x4c344cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4c3450:
    // 0x4c3450: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4c3450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4c3454:
    // 0x4c3454: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x4c3454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4c3458:
    // 0x4c3458: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4c3458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4c345c:
    // 0x4c345c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4c345cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c3460:
    // 0x4c3460: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4c3460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4c3464:
    // 0x4c3464: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4c3464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c3468:
    // 0x4c3468: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4c3468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4c346c:
    // 0x4c346c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4c346cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c3470:
    // 0x4c3470: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4c3470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4c3474:
    // 0x4c3474: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4c3474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c3478:
    // 0x4c3478: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c3478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c347c:
    // 0x4c347c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4c347cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4c3480:
    // 0x4c3480: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c3480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c3484:
    // 0x4c3484: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x4c3484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4c3488:
    // 0x4c3488: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4c3488u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_4c348c:
    // 0x4c348c: 0x3445423f  ori         $a1, $v0, 0x423F
    ctx->pc = 0x4c348cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_4c3490:
    // 0x4c3490: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4c3490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c3494:
    // 0x4c3494: 0xc10ca68  jal         func_4329A0
label_4c3498:
    if (ctx->pc == 0x4C3498u) {
        ctx->pc = 0x4C3498u;
            // 0x4c3498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C349Cu;
        goto label_4c349c;
    }
    ctx->pc = 0x4C3494u;
    SET_GPR_U32(ctx, 31, 0x4C349Cu);
    ctx->pc = 0x4C3498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3494u;
            // 0x4c3498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C349Cu; }
        if (ctx->pc != 0x4C349Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C349Cu; }
        if (ctx->pc != 0x4C349Cu) { return; }
    }
    ctx->pc = 0x4C349Cu;
label_4c349c:
    // 0x4c349c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c349cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c34a0:
    // 0x4c34a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c34a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c34a4:
    // 0x4c34a4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4c34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4c34a8:
    // 0x4c34a8: 0x246310c0  addiu       $v1, $v1, 0x10C0
    ctx->pc = 0x4c34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4288));
label_4c34ac:
    // 0x4c34ac: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4c34acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_4c34b0:
    // 0x4c34b0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4c34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_4c34b4:
    // 0x4c34b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c34b8:
    // 0x4c34b8: 0xaeb40054  sw          $s4, 0x54($s5)
    ctx->pc = 0x4c34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 20));
label_4c34bc:
    // 0x4c34bc: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x4c34bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4c34c0:
    // 0x4c34c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c34c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c34c4:
    // 0x4c34c4: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x4c34c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_4c34c8:
    // 0x4c34c8: 0x320f809  jalr        $t9
label_4c34cc:
    if (ctx->pc == 0x4C34CCu) {
        ctx->pc = 0x4C34D0u;
        goto label_4c34d0;
    }
    ctx->pc = 0x4C34C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C34D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C34D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C34D0u; }
            if (ctx->pc != 0x4C34D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4C34D0u;
label_4c34d0:
    // 0x4c34d0: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x4c34d0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c34d4:
    // 0x4c34d4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x4c34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4c34d8:
    // 0x4c34d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4c34d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4c34dc:
    // 0x4c34dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c34e0:
    // 0x4c34e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4c34e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4c34e4:
    // 0x4c34e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c34e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4c34e8:
    // 0x4c34e8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4c34e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4c34ec:
    // 0x4c34ec: 0x0  nop
    ctx->pc = 0x4c34ecu;
    // NOP
label_4c34f0:
    // 0x4c34f0: 0xaea40058  sw          $a0, 0x58($s5)
    ctx->pc = 0x4c34f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 4));
label_4c34f4:
    // 0x4c34f4: 0xaea3005c  sw          $v1, 0x5C($s5)
    ctx->pc = 0x4c34f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
label_4c34f8:
    // 0x4c34f8: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x4c34f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4c34fc:
    // 0x4c34fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c34fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c3500:
    // 0x4c3500: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x4c3500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_4c3504:
    // 0x4c3504: 0x320f809  jalr        $t9
label_4c3508:
    if (ctx->pc == 0x4C3508u) {
        ctx->pc = 0x4C350Cu;
        goto label_4c350c;
    }
    ctx->pc = 0x4C3504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C350Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C350Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C350Cu; }
            if (ctx->pc != 0x4C350Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C350Cu;
label_4c350c:
    // 0x4c350c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x4c350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c3510:
    // 0x4c3510: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x4c3510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_4c3514:
    // 0x4c3514: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4c3514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4c3518:
    // 0x4c3518: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4c3518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4c351c:
    // 0x4c351c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c351cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4c3520:
    // 0x4c3520: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4c3520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4c3524:
    // 0x4c3524: 0x0  nop
    ctx->pc = 0x4c3524u;
    // NOP
label_4c3528:
    // 0x4c3528: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x4c3528u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
label_4c352c:
    // 0x4c352c: 0xe6b40064  swc1        $f20, 0x64($s5)
    ctx->pc = 0x4c352cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
label_4c3530:
    // 0x4c3530: 0xaeb20068  sw          $s2, 0x68($s5)
    ctx->pc = 0x4c3530u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 18));
label_4c3534:
    // 0x4c3534: 0xaebe006c  sw          $fp, 0x6C($s5)
    ctx->pc = 0x4c3534u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 30));
label_4c3538:
    // 0x4c3538: 0xa2b60080  sb          $s6, 0x80($s5)
    ctx->pc = 0x4c3538u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 22));
label_4c353c:
    // 0x4c353c: 0xa2a20081  sb          $v0, 0x81($s5)
    ctx->pc = 0x4c353cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 2));
label_4c3540:
    // 0x4c3540: 0xaeb70084  sw          $s7, 0x84($s5)
    ctx->pc = 0x4c3540u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 23));
label_4c3544:
    // 0x4c3544: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4c3548:
    if (ctx->pc == 0x4C3548u) {
        ctx->pc = 0x4C3548u;
            // 0x4c3548: 0xaeb10088  sw          $s1, 0x88($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 17));
        ctx->pc = 0x4C354Cu;
        goto label_4c354c;
    }
    ctx->pc = 0x4C3544u;
    {
        const bool branch_taken_0x4c3544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3544u;
            // 0x4c3548: 0xaeb10088  sw          $s1, 0x88($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3544) {
            ctx->pc = 0x4C356Cu;
            goto label_4c356c;
        }
    }
    ctx->pc = 0x4C354Cu;
label_4c354c:
    // 0x4c354c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x4c354cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c3550:
    // 0x4c3550: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x4c3550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c3554:
    // 0x4c3554: 0xe6a10070  swc1        $f1, 0x70($s5)
    ctx->pc = 0x4c3554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
label_4c3558:
    // 0x4c3558: 0xe6a00074  swc1        $f0, 0x74($s5)
    ctx->pc = 0x4c3558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
label_4c355c:
    // 0x4c355c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x4c355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c3560:
    // 0x4c3560: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x4c3560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c3564:
    // 0x4c3564: 0xe6a10078  swc1        $f1, 0x78($s5)
    ctx->pc = 0x4c3564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 120), bits); }
label_4c3568:
    // 0x4c3568: 0xe6a0007c  swc1        $f0, 0x7C($s5)
    ctx->pc = 0x4c3568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 124), bits); }
label_4c356c:
    // 0x4c356c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4c356cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c3570:
    // 0x4c3570: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4c3570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4c3574:
    // 0x4c3574: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4c3574u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4c3578:
    // 0x4c3578: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c3578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c357c:
    // 0x4c357c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4c357cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4c3580:
    // 0x4c3580: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4c3580u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c3584:
    // 0x4c3584: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4c3584u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c3588:
    // 0x4c3588: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4c3588u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c358c:
    // 0x4c358c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4c358cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c3590:
    // 0x4c3590: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4c3590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c3594:
    // 0x4c3594: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4c3594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c3598:
    // 0x4c3598: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c3598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c359c:
    // 0x4c359c: 0x3e00008  jr          $ra
label_4c35a0:
    if (ctx->pc == 0x4C35A0u) {
        ctx->pc = 0x4C35A0u;
            // 0x4c35a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4C35A4u;
        goto label_4c35a4;
    }
    ctx->pc = 0x4C359Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C35A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C359Cu;
            // 0x4c35a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C35A4u;
label_4c35a4:
    // 0x4c35a4: 0x0  nop
    ctx->pc = 0x4c35a4u;
    // NOP
label_4c35a8:
    // 0x4c35a8: 0x0  nop
    ctx->pc = 0x4c35a8u;
    // NOP
label_4c35ac:
    // 0x4c35ac: 0x0  nop
    ctx->pc = 0x4c35acu;
    // NOP
}
