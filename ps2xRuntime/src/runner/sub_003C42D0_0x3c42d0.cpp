#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C42D0
// Address: 0x3c42d0 - 0x3c43a0
void sub_003C42D0_0x3c42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C42D0_0x3c42d0");
#endif

    switch (ctx->pc) {
        case 0x3c42d0u: goto label_3c42d0;
        case 0x3c42d4u: goto label_3c42d4;
        case 0x3c42d8u: goto label_3c42d8;
        case 0x3c42dcu: goto label_3c42dc;
        case 0x3c42e0u: goto label_3c42e0;
        case 0x3c42e4u: goto label_3c42e4;
        case 0x3c42e8u: goto label_3c42e8;
        case 0x3c42ecu: goto label_3c42ec;
        case 0x3c42f0u: goto label_3c42f0;
        case 0x3c42f4u: goto label_3c42f4;
        case 0x3c42f8u: goto label_3c42f8;
        case 0x3c42fcu: goto label_3c42fc;
        case 0x3c4300u: goto label_3c4300;
        case 0x3c4304u: goto label_3c4304;
        case 0x3c4308u: goto label_3c4308;
        case 0x3c430cu: goto label_3c430c;
        case 0x3c4310u: goto label_3c4310;
        case 0x3c4314u: goto label_3c4314;
        case 0x3c4318u: goto label_3c4318;
        case 0x3c431cu: goto label_3c431c;
        case 0x3c4320u: goto label_3c4320;
        case 0x3c4324u: goto label_3c4324;
        case 0x3c4328u: goto label_3c4328;
        case 0x3c432cu: goto label_3c432c;
        case 0x3c4330u: goto label_3c4330;
        case 0x3c4334u: goto label_3c4334;
        case 0x3c4338u: goto label_3c4338;
        case 0x3c433cu: goto label_3c433c;
        case 0x3c4340u: goto label_3c4340;
        case 0x3c4344u: goto label_3c4344;
        case 0x3c4348u: goto label_3c4348;
        case 0x3c434cu: goto label_3c434c;
        case 0x3c4350u: goto label_3c4350;
        case 0x3c4354u: goto label_3c4354;
        case 0x3c4358u: goto label_3c4358;
        case 0x3c435cu: goto label_3c435c;
        case 0x3c4360u: goto label_3c4360;
        case 0x3c4364u: goto label_3c4364;
        case 0x3c4368u: goto label_3c4368;
        case 0x3c436cu: goto label_3c436c;
        case 0x3c4370u: goto label_3c4370;
        case 0x3c4374u: goto label_3c4374;
        case 0x3c4378u: goto label_3c4378;
        case 0x3c437cu: goto label_3c437c;
        case 0x3c4380u: goto label_3c4380;
        case 0x3c4384u: goto label_3c4384;
        case 0x3c4388u: goto label_3c4388;
        case 0x3c438cu: goto label_3c438c;
        case 0x3c4390u: goto label_3c4390;
        case 0x3c4394u: goto label_3c4394;
        case 0x3c4398u: goto label_3c4398;
        case 0x3c439cu: goto label_3c439c;
        default: break;
    }

    ctx->pc = 0x3c42d0u;

label_3c42d0:
    // 0x3c42d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3c42d4:
    // 0x3c42d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3c42d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3c42d8:
    // 0x3c42d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3c42d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3c42dc:
    // 0x3c42dc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c42dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3c42e0:
    // 0x3c42e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c42e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c42e4:
    // 0x3c42e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c42e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c42e8:
    // 0x3c42e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c42e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c42ec:
    // 0x3c42ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c42ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3c42f0:
    // 0x3c42f0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3c42f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c42f4:
    // 0x3c42f4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3c42f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3c42f8:
    // 0x3c42f8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3c42f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3c42fc:
    // 0x3c42fc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3c42fcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3c4300:
    // 0x3c4300: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3c4300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c4304:
    // 0x3c4304: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3c4304u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3c4308:
    // 0x3c4308: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c4308u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3c430c:
    // 0x3c430c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c430cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c4310:
    // 0x3c4310: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x3c4310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3c4314:
    // 0x3c4314: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x3c4314u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_3c4318:
    // 0x3c4318: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x3c4318u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_3c431c:
    // 0x3c431c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x3c431cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_3c4320:
    // 0x3c4320: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c4320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c4324:
    // 0x3c4324: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x3c4324u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
label_3c4328:
    // 0x3c4328: 0x320f809  jalr        $t9
label_3c432c:
    if (ctx->pc == 0x3C432Cu) {
        ctx->pc = 0x3C432Cu;
            // 0x3c432c: 0x46008506  mov.s       $f20, $f16 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[16]);
        ctx->pc = 0x3C4330u;
        goto label_3c4330;
    }
    ctx->pc = 0x3C4328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4330u);
        ctx->pc = 0x3C432Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4328u;
            // 0x3c432c: 0x46008506  mov.s       $f20, $f16 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4330u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4330u; }
            if (ctx->pc != 0x3C4330u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4330u;
label_3c4330:
    // 0x3c4330: 0x8e790004  lw          $t9, 0x4($s3)
    ctx->pc = 0x3c4330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3c4334:
    // 0x3c4334: 0x4616c380  add.s       $f14, $f24, $f22
    ctx->pc = 0x3c4334u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
label_3c4338:
    // 0x3c4338: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c4338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c433c:
    // 0x3c433c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c433cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4340:
    // 0x3c4340: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c4340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4344:
    // 0x3c4344: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c4344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c4348:
    // 0x3c4348: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3c4348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3c434c:
    // 0x3c434c: 0x4615bbc0  add.s       $f15, $f23, $f21
    ctx->pc = 0x3c434cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_3c4350:
    // 0x3c4350: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3c4350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3c4354:
    // 0x3c4354: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x3c4354u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
label_3c4358:
    // 0x3c4358: 0x320f809  jalr        $t9
label_3c435c:
    if (ctx->pc == 0x3C435Cu) {
        ctx->pc = 0x3C435Cu;
            // 0x3c435c: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x3C4360u;
        goto label_3c4360;
    }
    ctx->pc = 0x3C4358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4360u);
        ctx->pc = 0x3C435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4358u;
            // 0x3c435c: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4360u; }
            if (ctx->pc != 0x3C4360u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4360u;
label_3c4360:
    // 0x3c4360: 0x8e790004  lw          $t9, 0x4($s3)
    ctx->pc = 0x3c4360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3c4364:
    // 0x3c4364: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c4364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c4368:
    // 0x3c4368: 0x320f809  jalr        $t9
label_3c436c:
    if (ctx->pc == 0x3C436Cu) {
        ctx->pc = 0x3C436Cu;
            // 0x3c436c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4370u;
        goto label_3c4370;
    }
    ctx->pc = 0x3C4368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4370u);
        ctx->pc = 0x3C436Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4368u;
            // 0x3c436c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4370u; }
            if (ctx->pc != 0x3C4370u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4370u;
label_3c4370:
    // 0x3c4370: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3c4370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3c4374:
    // 0x3c4374: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3c4374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3c4378:
    // 0x3c4378: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3c4378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c437c:
    // 0x3c437c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3c437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c4380:
    // 0x3c4380: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c4380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4384:
    // 0x3c4384: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3c4384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c4388:
    // 0x3c4388: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c4388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c438c:
    // 0x3c438c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c4390:
    // 0x3c4390: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c4390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4394:
    // 0x3c4394: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c4394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c4398:
    // 0x3c4398: 0x3e00008  jr          $ra
label_3c439c:
    if (ctx->pc == 0x3C439Cu) {
        ctx->pc = 0x3C439Cu;
            // 0x3c439c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3C43A0u;
        goto label_fallthrough_0x3c4398;
    }
    ctx->pc = 0x3C4398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C439Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4398u;
            // 0x3c439c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3c4398:
    ctx->pc = 0x3C43A0u;
}
