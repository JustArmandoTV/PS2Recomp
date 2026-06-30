#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C42D0
// Address: 0x2c42d0 - 0x2c4430
void sub_002C42D0_0x2c42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C42D0_0x2c42d0");
#endif

    switch (ctx->pc) {
        case 0x2c42d0u: goto label_2c42d0;
        case 0x2c42d4u: goto label_2c42d4;
        case 0x2c42d8u: goto label_2c42d8;
        case 0x2c42dcu: goto label_2c42dc;
        case 0x2c42e0u: goto label_2c42e0;
        case 0x2c42e4u: goto label_2c42e4;
        case 0x2c42e8u: goto label_2c42e8;
        case 0x2c42ecu: goto label_2c42ec;
        case 0x2c42f0u: goto label_2c42f0;
        case 0x2c42f4u: goto label_2c42f4;
        case 0x2c42f8u: goto label_2c42f8;
        case 0x2c42fcu: goto label_2c42fc;
        case 0x2c4300u: goto label_2c4300;
        case 0x2c4304u: goto label_2c4304;
        case 0x2c4308u: goto label_2c4308;
        case 0x2c430cu: goto label_2c430c;
        case 0x2c4310u: goto label_2c4310;
        case 0x2c4314u: goto label_2c4314;
        case 0x2c4318u: goto label_2c4318;
        case 0x2c431cu: goto label_2c431c;
        case 0x2c4320u: goto label_2c4320;
        case 0x2c4324u: goto label_2c4324;
        case 0x2c4328u: goto label_2c4328;
        case 0x2c432cu: goto label_2c432c;
        case 0x2c4330u: goto label_2c4330;
        case 0x2c4334u: goto label_2c4334;
        case 0x2c4338u: goto label_2c4338;
        case 0x2c433cu: goto label_2c433c;
        case 0x2c4340u: goto label_2c4340;
        case 0x2c4344u: goto label_2c4344;
        case 0x2c4348u: goto label_2c4348;
        case 0x2c434cu: goto label_2c434c;
        case 0x2c4350u: goto label_2c4350;
        case 0x2c4354u: goto label_2c4354;
        case 0x2c4358u: goto label_2c4358;
        case 0x2c435cu: goto label_2c435c;
        case 0x2c4360u: goto label_2c4360;
        case 0x2c4364u: goto label_2c4364;
        case 0x2c4368u: goto label_2c4368;
        case 0x2c436cu: goto label_2c436c;
        case 0x2c4370u: goto label_2c4370;
        case 0x2c4374u: goto label_2c4374;
        case 0x2c4378u: goto label_2c4378;
        case 0x2c437cu: goto label_2c437c;
        case 0x2c4380u: goto label_2c4380;
        case 0x2c4384u: goto label_2c4384;
        case 0x2c4388u: goto label_2c4388;
        case 0x2c438cu: goto label_2c438c;
        case 0x2c4390u: goto label_2c4390;
        case 0x2c4394u: goto label_2c4394;
        case 0x2c4398u: goto label_2c4398;
        case 0x2c439cu: goto label_2c439c;
        case 0x2c43a0u: goto label_2c43a0;
        case 0x2c43a4u: goto label_2c43a4;
        case 0x2c43a8u: goto label_2c43a8;
        case 0x2c43acu: goto label_2c43ac;
        case 0x2c43b0u: goto label_2c43b0;
        case 0x2c43b4u: goto label_2c43b4;
        case 0x2c43b8u: goto label_2c43b8;
        case 0x2c43bcu: goto label_2c43bc;
        case 0x2c43c0u: goto label_2c43c0;
        case 0x2c43c4u: goto label_2c43c4;
        case 0x2c43c8u: goto label_2c43c8;
        case 0x2c43ccu: goto label_2c43cc;
        case 0x2c43d0u: goto label_2c43d0;
        case 0x2c43d4u: goto label_2c43d4;
        case 0x2c43d8u: goto label_2c43d8;
        case 0x2c43dcu: goto label_2c43dc;
        case 0x2c43e0u: goto label_2c43e0;
        case 0x2c43e4u: goto label_2c43e4;
        case 0x2c43e8u: goto label_2c43e8;
        case 0x2c43ecu: goto label_2c43ec;
        case 0x2c43f0u: goto label_2c43f0;
        case 0x2c43f4u: goto label_2c43f4;
        case 0x2c43f8u: goto label_2c43f8;
        case 0x2c43fcu: goto label_2c43fc;
        case 0x2c4400u: goto label_2c4400;
        case 0x2c4404u: goto label_2c4404;
        case 0x2c4408u: goto label_2c4408;
        case 0x2c440cu: goto label_2c440c;
        case 0x2c4410u: goto label_2c4410;
        case 0x2c4414u: goto label_2c4414;
        case 0x2c4418u: goto label_2c4418;
        case 0x2c441cu: goto label_2c441c;
        case 0x2c4420u: goto label_2c4420;
        case 0x2c4424u: goto label_2c4424;
        case 0x2c4428u: goto label_2c4428;
        case 0x2c442cu: goto label_2c442c;
        default: break;
    }

    ctx->pc = 0x2c42d0u;

label_2c42d0:
    // 0x2c42d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c42d4:
    // 0x2c42d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c42d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c42d8:
    // 0x2c42d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c42d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c42dc:
    // 0x2c42dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c42dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c42e0:
    // 0x2c42e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c42e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c42e4:
    // 0x2c42e4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c42e8:
    if (ctx->pc == 0x2C42E8u) {
        ctx->pc = 0x2C42E8u;
            // 0x2c42e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C42ECu;
        goto label_2c42ec;
    }
    ctx->pc = 0x2C42E4u;
    {
        const bool branch_taken_0x2c42e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C42E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C42E4u;
            // 0x2c42e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42e4) {
            ctx->pc = 0x2C4418u;
            goto label_2c4418;
        }
    }
    ctx->pc = 0x2C42ECu;
label_2c42ec:
    // 0x2c42ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c42ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c42f0:
    // 0x2c42f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c42f4:
    // 0x2c42f4: 0x24631070  addiu       $v1, $v1, 0x1070
    ctx->pc = 0x2c42f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4208));
label_2c42f8:
    // 0x2c42f8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c42f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c42fc:
    // 0x2c42fc: 0x244210a8  addiu       $v0, $v0, 0x10A8
    ctx->pc = 0x2c42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4264));
label_2c4300:
    // 0x2c4300: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c4300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c4304:
    // 0x2c4304: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c4304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c4308:
    // 0x2c4308: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c4308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c430c:
    // 0x2c430c: 0xc0407c0  jal         func_101F00
label_2c4310:
    if (ctx->pc == 0x2C4310u) {
        ctx->pc = 0x2C4310u;
            // 0x2c4310: 0x24a541d0  addiu       $a1, $a1, 0x41D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16848));
        ctx->pc = 0x2C4314u;
        goto label_2c4314;
    }
    ctx->pc = 0x2C430Cu;
    SET_GPR_U32(ctx, 31, 0x2C4314u);
    ctx->pc = 0x2C4310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C430Cu;
            // 0x2c4310: 0x24a541d0  addiu       $a1, $a1, 0x41D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4314u; }
        if (ctx->pc != 0x2C4314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4314u; }
        if (ctx->pc != 0x2C4314u) { return; }
    }
    ctx->pc = 0x2C4314u;
label_2c4314:
    // 0x2c4314: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c4314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c4318:
    // 0x2c4318: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c431c:
    if (ctx->pc == 0x2C431Cu) {
        ctx->pc = 0x2C431Cu;
            // 0x2c431c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C4320u;
        goto label_2c4320;
    }
    ctx->pc = 0x2C4318u;
    {
        const bool branch_taken_0x2c4318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4318) {
            ctx->pc = 0x2C431Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4318u;
            // 0x2c431c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C432Cu;
            goto label_2c432c;
        }
    }
    ctx->pc = 0x2C4320u;
label_2c4320:
    // 0x2c4320: 0xc07507c  jal         func_1D41F0
label_2c4324:
    if (ctx->pc == 0x2C4324u) {
        ctx->pc = 0x2C4324u;
            // 0x2c4324: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C4328u;
        goto label_2c4328;
    }
    ctx->pc = 0x2C4320u;
    SET_GPR_U32(ctx, 31, 0x2C4328u);
    ctx->pc = 0x2C4324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4320u;
            // 0x2c4324: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4328u; }
        if (ctx->pc != 0x2C4328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4328u; }
        if (ctx->pc != 0x2C4328u) { return; }
    }
    ctx->pc = 0x2C4328u;
label_2c4328:
    // 0x2c4328: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c4328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c432c:
    // 0x2c432c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c4330:
    if (ctx->pc == 0x2C4330u) {
        ctx->pc = 0x2C4330u;
            // 0x2c4330: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C4334u;
        goto label_2c4334;
    }
    ctx->pc = 0x2C432Cu;
    {
        const bool branch_taken_0x2c432c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c432c) {
            ctx->pc = 0x2C4330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C432Cu;
            // 0x2c4330: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C435Cu;
            goto label_2c435c;
        }
    }
    ctx->pc = 0x2C4334u;
label_2c4334:
    // 0x2c4334: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c4338:
    if (ctx->pc == 0x2C4338u) {
        ctx->pc = 0x2C433Cu;
        goto label_2c433c;
    }
    ctx->pc = 0x2C4334u;
    {
        const bool branch_taken_0x2c4334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4334) {
            ctx->pc = 0x2C4358u;
            goto label_2c4358;
        }
    }
    ctx->pc = 0x2C433Cu;
label_2c433c:
    // 0x2c433c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c4340:
    if (ctx->pc == 0x2C4340u) {
        ctx->pc = 0x2C4344u;
        goto label_2c4344;
    }
    ctx->pc = 0x2C433Cu;
    {
        const bool branch_taken_0x2c433c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c433c) {
            ctx->pc = 0x2C4358u;
            goto label_2c4358;
        }
    }
    ctx->pc = 0x2C4344u;
label_2c4344:
    // 0x2c4344: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c4344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c4348:
    // 0x2c4348: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c434c:
    if (ctx->pc == 0x2C434Cu) {
        ctx->pc = 0x2C4350u;
        goto label_2c4350;
    }
    ctx->pc = 0x2C4348u;
    {
        const bool branch_taken_0x2c4348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4348) {
            ctx->pc = 0x2C4358u;
            goto label_2c4358;
        }
    }
    ctx->pc = 0x2C4350u;
label_2c4350:
    // 0x2c4350: 0xc0400a8  jal         func_1002A0
label_2c4354:
    if (ctx->pc == 0x2C4354u) {
        ctx->pc = 0x2C4358u;
        goto label_2c4358;
    }
    ctx->pc = 0x2C4350u;
    SET_GPR_U32(ctx, 31, 0x2C4358u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4358u; }
        if (ctx->pc != 0x2C4358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4358u; }
        if (ctx->pc != 0x2C4358u) { return; }
    }
    ctx->pc = 0x2C4358u;
label_2c4358:
    // 0x2c4358: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c4358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c435c:
    // 0x2c435c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c4360:
    if (ctx->pc == 0x2C4360u) {
        ctx->pc = 0x2C4360u;
            // 0x2c4360: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C4364u;
        goto label_2c4364;
    }
    ctx->pc = 0x2C435Cu;
    {
        const bool branch_taken_0x2c435c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c435c) {
            ctx->pc = 0x2C4360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C435Cu;
            // 0x2c4360: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C438Cu;
            goto label_2c438c;
        }
    }
    ctx->pc = 0x2C4364u;
label_2c4364:
    // 0x2c4364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c4368:
    if (ctx->pc == 0x2C4368u) {
        ctx->pc = 0x2C436Cu;
        goto label_2c436c;
    }
    ctx->pc = 0x2C4364u;
    {
        const bool branch_taken_0x2c4364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4364) {
            ctx->pc = 0x2C4388u;
            goto label_2c4388;
        }
    }
    ctx->pc = 0x2C436Cu;
label_2c436c:
    // 0x2c436c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c4370:
    if (ctx->pc == 0x2C4370u) {
        ctx->pc = 0x2C4374u;
        goto label_2c4374;
    }
    ctx->pc = 0x2C436Cu;
    {
        const bool branch_taken_0x2c436c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c436c) {
            ctx->pc = 0x2C4388u;
            goto label_2c4388;
        }
    }
    ctx->pc = 0x2C4374u;
label_2c4374:
    // 0x2c4374: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c4374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c4378:
    // 0x2c4378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c437c:
    if (ctx->pc == 0x2C437Cu) {
        ctx->pc = 0x2C4380u;
        goto label_2c4380;
    }
    ctx->pc = 0x2C4378u;
    {
        const bool branch_taken_0x2c4378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4378) {
            ctx->pc = 0x2C4388u;
            goto label_2c4388;
        }
    }
    ctx->pc = 0x2C4380u;
label_2c4380:
    // 0x2c4380: 0xc0400a8  jal         func_1002A0
label_2c4384:
    if (ctx->pc == 0x2C4384u) {
        ctx->pc = 0x2C4388u;
        goto label_2c4388;
    }
    ctx->pc = 0x2C4380u;
    SET_GPR_U32(ctx, 31, 0x2C4388u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4388u; }
        if (ctx->pc != 0x2C4388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4388u; }
        if (ctx->pc != 0x2C4388u) { return; }
    }
    ctx->pc = 0x2C4388u;
label_2c4388:
    // 0x2c4388: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c4388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c438c:
    // 0x2c438c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c4390:
    if (ctx->pc == 0x2C4390u) {
        ctx->pc = 0x2C4394u;
        goto label_2c4394;
    }
    ctx->pc = 0x2C438Cu;
    {
        const bool branch_taken_0x2c438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c438c) {
            ctx->pc = 0x2C43A8u;
            goto label_2c43a8;
        }
    }
    ctx->pc = 0x2C4394u;
label_2c4394:
    // 0x2c4394: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c4398:
    // 0x2c4398: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c4398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c439c:
    // 0x2c439c: 0x24631060  addiu       $v1, $v1, 0x1060
    ctx->pc = 0x2c439cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4192));
label_2c43a0:
    // 0x2c43a0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c43a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c43a4:
    // 0x2c43a4: 0xac400db0  sw          $zero, 0xDB0($v0)
    ctx->pc = 0x2c43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3504), GPR_U32(ctx, 0));
label_2c43a8:
    // 0x2c43a8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c43ac:
    if (ctx->pc == 0x2C43ACu) {
        ctx->pc = 0x2C43ACu;
            // 0x2c43ac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C43B0u;
        goto label_2c43b0;
    }
    ctx->pc = 0x2C43A8u;
    {
        const bool branch_taken_0x2c43a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c43a8) {
            ctx->pc = 0x2C43ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C43A8u;
            // 0x2c43ac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4404u;
            goto label_2c4404;
        }
    }
    ctx->pc = 0x2C43B0u;
label_2c43b0:
    // 0x2c43b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c43b4:
    // 0x2c43b4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c43b8:
    // 0x2c43b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c43bc:
    // 0x2c43bc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c43bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c43c0:
    // 0x2c43c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c43c4:
    if (ctx->pc == 0x2C43C4u) {
        ctx->pc = 0x2C43C4u;
            // 0x2c43c4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C43C8u;
        goto label_2c43c8;
    }
    ctx->pc = 0x2C43C0u;
    {
        const bool branch_taken_0x2c43c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c43c0) {
            ctx->pc = 0x2C43C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C43C0u;
            // 0x2c43c4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C43DCu;
            goto label_2c43dc;
        }
    }
    ctx->pc = 0x2C43C8u;
label_2c43c8:
    // 0x2c43c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c43c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c43cc:
    // 0x2c43cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c43ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c43d0:
    // 0x2c43d0: 0x320f809  jalr        $t9
label_2c43d4:
    if (ctx->pc == 0x2C43D4u) {
        ctx->pc = 0x2C43D4u;
            // 0x2c43d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C43D8u;
        goto label_2c43d8;
    }
    ctx->pc = 0x2C43D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C43D8u);
        ctx->pc = 0x2C43D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C43D0u;
            // 0x2c43d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C43D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C43D8u; }
            if (ctx->pc != 0x2C43D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C43D8u;
label_2c43d8:
    // 0x2c43d8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c43d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c43dc:
    // 0x2c43dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c43e0:
    if (ctx->pc == 0x2C43E0u) {
        ctx->pc = 0x2C43E0u;
            // 0x2c43e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C43E4u;
        goto label_2c43e4;
    }
    ctx->pc = 0x2C43DCu;
    {
        const bool branch_taken_0x2c43dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c43dc) {
            ctx->pc = 0x2C43E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C43DCu;
            // 0x2c43e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C43F8u;
            goto label_2c43f8;
        }
    }
    ctx->pc = 0x2C43E4u;
label_2c43e4:
    // 0x2c43e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c43e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c43e8:
    // 0x2c43e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c43e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c43ec:
    // 0x2c43ec: 0x320f809  jalr        $t9
label_2c43f0:
    if (ctx->pc == 0x2C43F0u) {
        ctx->pc = 0x2C43F0u;
            // 0x2c43f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C43F4u;
        goto label_2c43f4;
    }
    ctx->pc = 0x2C43ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C43F4u);
        ctx->pc = 0x2C43F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C43ECu;
            // 0x2c43f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C43F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C43F4u; }
            if (ctx->pc != 0x2C43F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C43F4u;
label_2c43f4:
    // 0x2c43f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c43f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c43f8:
    // 0x2c43f8: 0xc075bf8  jal         func_1D6FE0
label_2c43fc:
    if (ctx->pc == 0x2C43FCu) {
        ctx->pc = 0x2C43FCu;
            // 0x2c43fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4400u;
        goto label_2c4400;
    }
    ctx->pc = 0x2C43F8u;
    SET_GPR_U32(ctx, 31, 0x2C4400u);
    ctx->pc = 0x2C43FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C43F8u;
            // 0x2c43fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4400u; }
        if (ctx->pc != 0x2C4400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4400u; }
        if (ctx->pc != 0x2C4400u) { return; }
    }
    ctx->pc = 0x2C4400u;
label_2c4400:
    // 0x2c4400: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c4400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c4404:
    // 0x2c4404: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c4404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c4408:
    // 0x2c4408: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c440c:
    if (ctx->pc == 0x2C440Cu) {
        ctx->pc = 0x2C440Cu;
            // 0x2c440c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4410u;
        goto label_2c4410;
    }
    ctx->pc = 0x2C4408u;
    {
        const bool branch_taken_0x2c4408 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c4408) {
            ctx->pc = 0x2C440Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4408u;
            // 0x2c440c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C441Cu;
            goto label_2c441c;
        }
    }
    ctx->pc = 0x2C4410u;
label_2c4410:
    // 0x2c4410: 0xc0400a8  jal         func_1002A0
label_2c4414:
    if (ctx->pc == 0x2C4414u) {
        ctx->pc = 0x2C4414u;
            // 0x2c4414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4418u;
        goto label_2c4418;
    }
    ctx->pc = 0x2C4410u;
    SET_GPR_U32(ctx, 31, 0x2C4418u);
    ctx->pc = 0x2C4414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4410u;
            // 0x2c4414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4418u; }
        if (ctx->pc != 0x2C4418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4418u; }
        if (ctx->pc != 0x2C4418u) { return; }
    }
    ctx->pc = 0x2C4418u;
label_2c4418:
    // 0x2c4418: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c4418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c441c:
    // 0x2c441c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4420:
    // 0x2c4420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4424:
    // 0x2c4424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4428:
    // 0x2c4428: 0x3e00008  jr          $ra
label_2c442c:
    if (ctx->pc == 0x2C442Cu) {
        ctx->pc = 0x2C442Cu;
            // 0x2c442c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C4430u;
        goto label_fallthrough_0x2c4428;
    }
    ctx->pc = 0x2C4428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4428u;
            // 0x2c442c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c4428:
    ctx->pc = 0x2C4430u;
}
