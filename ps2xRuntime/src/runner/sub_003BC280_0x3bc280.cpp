#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BC280
// Address: 0x3bc280 - 0x3bc380
void sub_003BC280_0x3bc280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC280_0x3bc280");
#endif

    switch (ctx->pc) {
        case 0x3bc280u: goto label_3bc280;
        case 0x3bc284u: goto label_3bc284;
        case 0x3bc288u: goto label_3bc288;
        case 0x3bc28cu: goto label_3bc28c;
        case 0x3bc290u: goto label_3bc290;
        case 0x3bc294u: goto label_3bc294;
        case 0x3bc298u: goto label_3bc298;
        case 0x3bc29cu: goto label_3bc29c;
        case 0x3bc2a0u: goto label_3bc2a0;
        case 0x3bc2a4u: goto label_3bc2a4;
        case 0x3bc2a8u: goto label_3bc2a8;
        case 0x3bc2acu: goto label_3bc2ac;
        case 0x3bc2b0u: goto label_3bc2b0;
        case 0x3bc2b4u: goto label_3bc2b4;
        case 0x3bc2b8u: goto label_3bc2b8;
        case 0x3bc2bcu: goto label_3bc2bc;
        case 0x3bc2c0u: goto label_3bc2c0;
        case 0x3bc2c4u: goto label_3bc2c4;
        case 0x3bc2c8u: goto label_3bc2c8;
        case 0x3bc2ccu: goto label_3bc2cc;
        case 0x3bc2d0u: goto label_3bc2d0;
        case 0x3bc2d4u: goto label_3bc2d4;
        case 0x3bc2d8u: goto label_3bc2d8;
        case 0x3bc2dcu: goto label_3bc2dc;
        case 0x3bc2e0u: goto label_3bc2e0;
        case 0x3bc2e4u: goto label_3bc2e4;
        case 0x3bc2e8u: goto label_3bc2e8;
        case 0x3bc2ecu: goto label_3bc2ec;
        case 0x3bc2f0u: goto label_3bc2f0;
        case 0x3bc2f4u: goto label_3bc2f4;
        case 0x3bc2f8u: goto label_3bc2f8;
        case 0x3bc2fcu: goto label_3bc2fc;
        case 0x3bc300u: goto label_3bc300;
        case 0x3bc304u: goto label_3bc304;
        case 0x3bc308u: goto label_3bc308;
        case 0x3bc30cu: goto label_3bc30c;
        case 0x3bc310u: goto label_3bc310;
        case 0x3bc314u: goto label_3bc314;
        case 0x3bc318u: goto label_3bc318;
        case 0x3bc31cu: goto label_3bc31c;
        case 0x3bc320u: goto label_3bc320;
        case 0x3bc324u: goto label_3bc324;
        case 0x3bc328u: goto label_3bc328;
        case 0x3bc32cu: goto label_3bc32c;
        case 0x3bc330u: goto label_3bc330;
        case 0x3bc334u: goto label_3bc334;
        case 0x3bc338u: goto label_3bc338;
        case 0x3bc33cu: goto label_3bc33c;
        case 0x3bc340u: goto label_3bc340;
        case 0x3bc344u: goto label_3bc344;
        case 0x3bc348u: goto label_3bc348;
        case 0x3bc34cu: goto label_3bc34c;
        case 0x3bc350u: goto label_3bc350;
        case 0x3bc354u: goto label_3bc354;
        case 0x3bc358u: goto label_3bc358;
        case 0x3bc35cu: goto label_3bc35c;
        case 0x3bc360u: goto label_3bc360;
        case 0x3bc364u: goto label_3bc364;
        case 0x3bc368u: goto label_3bc368;
        case 0x3bc36cu: goto label_3bc36c;
        case 0x3bc370u: goto label_3bc370;
        case 0x3bc374u: goto label_3bc374;
        case 0x3bc378u: goto label_3bc378;
        case 0x3bc37cu: goto label_3bc37c;
        default: break;
    }

    ctx->pc = 0x3bc280u;

label_3bc280:
    // 0x3bc280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bc280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3bc284:
    // 0x3bc284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bc284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3bc288:
    // 0x3bc288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bc288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3bc28c:
    // 0x3bc28c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bc28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3bc290:
    // 0x3bc290: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bc290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bc294:
    // 0x3bc294: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3bc294u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bc298:
    // 0x3bc298: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x3bc298u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3bc29c:
    // 0x3bc29c: 0xc0c159c  jal         func_305670
label_3bc2a0:
    if (ctx->pc == 0x3BC2A0u) {
        ctx->pc = 0x3BC2A0u;
            // 0x3bc2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC2A4u;
        goto label_3bc2a4;
    }
    ctx->pc = 0x3BC29Cu;
    SET_GPR_U32(ctx, 31, 0x3BC2A4u);
    ctx->pc = 0x3BC2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC29Cu;
            // 0x3bc2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305670u;
    if (runtime->hasFunction(0x305670u)) {
        auto targetFn = runtime->lookupFunction(0x305670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC2A4u; }
        if (ctx->pc != 0x3BC2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305670_0x305670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC2A4u; }
        if (ctx->pc != 0x3BC2A4u) { return; }
    }
    ctx->pc = 0x3BC2A4u;
label_3bc2a4:
    // 0x3bc2a4: 0x8e250d9c  lw          $a1, 0xD9C($s1)
    ctx->pc = 0x3bc2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_3bc2a8:
    // 0x3bc2a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3bc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3bc2ac:
    // 0x3bc2ac: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3bc2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3bc2b0:
    // 0x3bc2b0: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x3bc2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_3bc2b4:
    // 0x3bc2b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bc2b8:
    // 0x3bc2b8: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x3bc2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3bc2bc:
    // 0x3bc2bc: 0xae220d9c  sw          $v0, 0xD9C($s1)
    ctx->pc = 0x3bc2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 2));
label_3bc2c0:
    // 0x3bc2c0: 0xc6210b00  lwc1        $f1, 0xB00($s1)
    ctx->pc = 0x3bc2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bc2c4:
    // 0x3bc2c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3bc2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3bc2c8:
    // 0x3bc2c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3bc2c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3bc2cc:
    // 0x3bc2cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc2ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3bc2d0:
    // 0x3bc2d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bc2d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3bc2d4:
    // 0x3bc2d4: 0xc04f26c  jal         func_13C9B0
label_3bc2d8:
    if (ctx->pc == 0x3BC2D8u) {
        ctx->pc = 0x3BC2D8u;
            // 0x3bc2d8: 0xae220b00  sw          $v0, 0xB00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2816), GPR_U32(ctx, 2));
        ctx->pc = 0x3BC2DCu;
        goto label_3bc2dc;
    }
    ctx->pc = 0x3BC2D4u;
    SET_GPR_U32(ctx, 31, 0x3BC2DCu);
    ctx->pc = 0x3BC2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC2D4u;
            // 0x3bc2d8: 0xae220b00  sw          $v0, 0xB00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2816), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC2DCu; }
        if (ctx->pc != 0x3BC2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC2DCu; }
        if (ctx->pc != 0x3BC2DCu) { return; }
    }
    ctx->pc = 0x3BC2DCu;
label_3bc2dc:
    // 0x3bc2dc: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x3bc2dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3bc2e0:
    // 0x3bc2e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc2e4:
    // 0x3bc2e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3bc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3bc2e8:
    // 0x3bc2e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3bc2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bc2ec:
    // 0x3bc2ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3bc2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3bc2f0:
    // 0x3bc2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc2f4:
    // 0x3bc2f4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3bc2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3bc2f8:
    // 0x3bc2f8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3bc2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3bc2fc:
    // 0x3bc2fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3bc2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3bc300:
    // 0x3bc300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bc300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3bc304:
    // 0x3bc304: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3bc304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3bc308:
    // 0x3bc308: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3bc308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3bc30c:
    // 0x3bc30c: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x3bc30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_3bc310:
    // 0x3bc310: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bc310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bc314:
    // 0x3bc314: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3bc314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3bc318:
    // 0x3bc318: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3bc318u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3bc31c:
    // 0x3bc31c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3bc31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3bc320:
    // 0x3bc320: 0x320f809  jalr        $t9
label_3bc324:
    if (ctx->pc == 0x3BC324u) {
        ctx->pc = 0x3BC324u;
            // 0x3bc324: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3BC328u;
        goto label_3bc328;
    }
    ctx->pc = 0x3BC320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC328u);
        ctx->pc = 0x3BC324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC320u;
            // 0x3bc324: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC328u; }
            if (ctx->pc != 0x3BC328u) { return; }
        }
        }
    }
    ctx->pc = 0x3BC328u;
label_3bc328:
    // 0x3bc328: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3bc328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3bc32c:
    // 0x3bc32c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3bc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3bc330:
    // 0x3bc330: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3bc330u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3bc334:
    // 0x3bc334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bc334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bc338:
    // 0x3bc338: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3bc338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3bc33c:
    // 0x3bc33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc340:
    // 0x3bc340: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3bc340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3bc344:
    // 0x3bc344: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x3bc344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3bc348:
    // 0x3bc348: 0x320f809  jalr        $t9
label_3bc34c:
    if (ctx->pc == 0x3BC34Cu) {
        ctx->pc = 0x3BC34Cu;
            // 0x3bc34c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3BC350u;
        goto label_3bc350;
    }
    ctx->pc = 0x3BC348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC350u);
        ctx->pc = 0x3BC34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC348u;
            // 0x3bc34c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC350u; }
            if (ctx->pc != 0x3BC350u) { return; }
        }
        }
    }
    ctx->pc = 0x3BC350u;
label_3bc350:
    // 0x3bc350: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3bc350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3bc354:
    // 0x3bc354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc358:
    // 0x3bc358: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3bc358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bc35c:
    // 0x3bc35c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3bc35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3bc360:
    // 0x3bc360: 0x320f809  jalr        $t9
label_3bc364:
    if (ctx->pc == 0x3BC364u) {
        ctx->pc = 0x3BC364u;
            // 0x3bc364: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3BC368u;
        goto label_3bc368;
    }
    ctx->pc = 0x3BC360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC368u);
        ctx->pc = 0x3BC364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC360u;
            // 0x3bc364: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC368u; }
            if (ctx->pc != 0x3BC368u) { return; }
        }
        }
    }
    ctx->pc = 0x3BC368u;
label_3bc368:
    // 0x3bc368: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bc368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3bc36c:
    // 0x3bc36c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bc36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bc370:
    // 0x3bc370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bc370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bc374:
    // 0x3bc374: 0x3e00008  jr          $ra
label_3bc378:
    if (ctx->pc == 0x3BC378u) {
        ctx->pc = 0x3BC378u;
            // 0x3bc378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3BC37Cu;
        goto label_3bc37c;
    }
    ctx->pc = 0x3BC374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC374u;
            // 0x3bc378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BC37Cu;
label_3bc37c:
    // 0x3bc37c: 0x0  nop
    ctx->pc = 0x3bc37cu;
    // NOP
}
