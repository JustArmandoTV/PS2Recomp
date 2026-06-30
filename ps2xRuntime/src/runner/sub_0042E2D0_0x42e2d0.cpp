#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042E2D0
// Address: 0x42e2d0 - 0x42e530
void sub_0042E2D0_0x42e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E2D0_0x42e2d0");
#endif

    switch (ctx->pc) {
        case 0x42e2d0u: goto label_42e2d0;
        case 0x42e2d4u: goto label_42e2d4;
        case 0x42e2d8u: goto label_42e2d8;
        case 0x42e2dcu: goto label_42e2dc;
        case 0x42e2e0u: goto label_42e2e0;
        case 0x42e2e4u: goto label_42e2e4;
        case 0x42e2e8u: goto label_42e2e8;
        case 0x42e2ecu: goto label_42e2ec;
        case 0x42e2f0u: goto label_42e2f0;
        case 0x42e2f4u: goto label_42e2f4;
        case 0x42e2f8u: goto label_42e2f8;
        case 0x42e2fcu: goto label_42e2fc;
        case 0x42e300u: goto label_42e300;
        case 0x42e304u: goto label_42e304;
        case 0x42e308u: goto label_42e308;
        case 0x42e30cu: goto label_42e30c;
        case 0x42e310u: goto label_42e310;
        case 0x42e314u: goto label_42e314;
        case 0x42e318u: goto label_42e318;
        case 0x42e31cu: goto label_42e31c;
        case 0x42e320u: goto label_42e320;
        case 0x42e324u: goto label_42e324;
        case 0x42e328u: goto label_42e328;
        case 0x42e32cu: goto label_42e32c;
        case 0x42e330u: goto label_42e330;
        case 0x42e334u: goto label_42e334;
        case 0x42e338u: goto label_42e338;
        case 0x42e33cu: goto label_42e33c;
        case 0x42e340u: goto label_42e340;
        case 0x42e344u: goto label_42e344;
        case 0x42e348u: goto label_42e348;
        case 0x42e34cu: goto label_42e34c;
        case 0x42e350u: goto label_42e350;
        case 0x42e354u: goto label_42e354;
        case 0x42e358u: goto label_42e358;
        case 0x42e35cu: goto label_42e35c;
        case 0x42e360u: goto label_42e360;
        case 0x42e364u: goto label_42e364;
        case 0x42e368u: goto label_42e368;
        case 0x42e36cu: goto label_42e36c;
        case 0x42e370u: goto label_42e370;
        case 0x42e374u: goto label_42e374;
        case 0x42e378u: goto label_42e378;
        case 0x42e37cu: goto label_42e37c;
        case 0x42e380u: goto label_42e380;
        case 0x42e384u: goto label_42e384;
        case 0x42e388u: goto label_42e388;
        case 0x42e38cu: goto label_42e38c;
        case 0x42e390u: goto label_42e390;
        case 0x42e394u: goto label_42e394;
        case 0x42e398u: goto label_42e398;
        case 0x42e39cu: goto label_42e39c;
        case 0x42e3a0u: goto label_42e3a0;
        case 0x42e3a4u: goto label_42e3a4;
        case 0x42e3a8u: goto label_42e3a8;
        case 0x42e3acu: goto label_42e3ac;
        case 0x42e3b0u: goto label_42e3b0;
        case 0x42e3b4u: goto label_42e3b4;
        case 0x42e3b8u: goto label_42e3b8;
        case 0x42e3bcu: goto label_42e3bc;
        case 0x42e3c0u: goto label_42e3c0;
        case 0x42e3c4u: goto label_42e3c4;
        case 0x42e3c8u: goto label_42e3c8;
        case 0x42e3ccu: goto label_42e3cc;
        case 0x42e3d0u: goto label_42e3d0;
        case 0x42e3d4u: goto label_42e3d4;
        case 0x42e3d8u: goto label_42e3d8;
        case 0x42e3dcu: goto label_42e3dc;
        case 0x42e3e0u: goto label_42e3e0;
        case 0x42e3e4u: goto label_42e3e4;
        case 0x42e3e8u: goto label_42e3e8;
        case 0x42e3ecu: goto label_42e3ec;
        case 0x42e3f0u: goto label_42e3f0;
        case 0x42e3f4u: goto label_42e3f4;
        case 0x42e3f8u: goto label_42e3f8;
        case 0x42e3fcu: goto label_42e3fc;
        case 0x42e400u: goto label_42e400;
        case 0x42e404u: goto label_42e404;
        case 0x42e408u: goto label_42e408;
        case 0x42e40cu: goto label_42e40c;
        case 0x42e410u: goto label_42e410;
        case 0x42e414u: goto label_42e414;
        case 0x42e418u: goto label_42e418;
        case 0x42e41cu: goto label_42e41c;
        case 0x42e420u: goto label_42e420;
        case 0x42e424u: goto label_42e424;
        case 0x42e428u: goto label_42e428;
        case 0x42e42cu: goto label_42e42c;
        case 0x42e430u: goto label_42e430;
        case 0x42e434u: goto label_42e434;
        case 0x42e438u: goto label_42e438;
        case 0x42e43cu: goto label_42e43c;
        case 0x42e440u: goto label_42e440;
        case 0x42e444u: goto label_42e444;
        case 0x42e448u: goto label_42e448;
        case 0x42e44cu: goto label_42e44c;
        case 0x42e450u: goto label_42e450;
        case 0x42e454u: goto label_42e454;
        case 0x42e458u: goto label_42e458;
        case 0x42e45cu: goto label_42e45c;
        case 0x42e460u: goto label_42e460;
        case 0x42e464u: goto label_42e464;
        case 0x42e468u: goto label_42e468;
        case 0x42e46cu: goto label_42e46c;
        case 0x42e470u: goto label_42e470;
        case 0x42e474u: goto label_42e474;
        case 0x42e478u: goto label_42e478;
        case 0x42e47cu: goto label_42e47c;
        case 0x42e480u: goto label_42e480;
        case 0x42e484u: goto label_42e484;
        case 0x42e488u: goto label_42e488;
        case 0x42e48cu: goto label_42e48c;
        case 0x42e490u: goto label_42e490;
        case 0x42e494u: goto label_42e494;
        case 0x42e498u: goto label_42e498;
        case 0x42e49cu: goto label_42e49c;
        case 0x42e4a0u: goto label_42e4a0;
        case 0x42e4a4u: goto label_42e4a4;
        case 0x42e4a8u: goto label_42e4a8;
        case 0x42e4acu: goto label_42e4ac;
        case 0x42e4b0u: goto label_42e4b0;
        case 0x42e4b4u: goto label_42e4b4;
        case 0x42e4b8u: goto label_42e4b8;
        case 0x42e4bcu: goto label_42e4bc;
        case 0x42e4c0u: goto label_42e4c0;
        case 0x42e4c4u: goto label_42e4c4;
        case 0x42e4c8u: goto label_42e4c8;
        case 0x42e4ccu: goto label_42e4cc;
        case 0x42e4d0u: goto label_42e4d0;
        case 0x42e4d4u: goto label_42e4d4;
        case 0x42e4d8u: goto label_42e4d8;
        case 0x42e4dcu: goto label_42e4dc;
        case 0x42e4e0u: goto label_42e4e0;
        case 0x42e4e4u: goto label_42e4e4;
        case 0x42e4e8u: goto label_42e4e8;
        case 0x42e4ecu: goto label_42e4ec;
        case 0x42e4f0u: goto label_42e4f0;
        case 0x42e4f4u: goto label_42e4f4;
        case 0x42e4f8u: goto label_42e4f8;
        case 0x42e4fcu: goto label_42e4fc;
        case 0x42e500u: goto label_42e500;
        case 0x42e504u: goto label_42e504;
        case 0x42e508u: goto label_42e508;
        case 0x42e50cu: goto label_42e50c;
        case 0x42e510u: goto label_42e510;
        case 0x42e514u: goto label_42e514;
        case 0x42e518u: goto label_42e518;
        case 0x42e51cu: goto label_42e51c;
        case 0x42e520u: goto label_42e520;
        case 0x42e524u: goto label_42e524;
        case 0x42e528u: goto label_42e528;
        case 0x42e52cu: goto label_42e52c;
        default: break;
    }

    ctx->pc = 0x42e2d0u;

label_42e2d0:
    // 0x42e2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42e2d4:
    // 0x42e2d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42e2d8:
    // 0x42e2d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42e2dc:
    // 0x42e2dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42e2e0:
    // 0x42e2e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42e2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42e2e4:
    // 0x42e2e4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_42e2e8:
    if (ctx->pc == 0x42E2E8u) {
        ctx->pc = 0x42E2E8u;
            // 0x42e2e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E2ECu;
        goto label_42e2ec;
    }
    ctx->pc = 0x42E2E4u;
    {
        const bool branch_taken_0x42e2e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E2E4u;
            // 0x42e2e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e2e4) {
            ctx->pc = 0x42E418u;
            goto label_42e418;
        }
    }
    ctx->pc = 0x42E2ECu;
label_42e2ec:
    // 0x42e2ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42e2f0:
    // 0x42e2f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42e2f4:
    // 0x42e2f4: 0x2463c6f0  addiu       $v1, $v1, -0x3910
    ctx->pc = 0x42e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952688));
label_42e2f8:
    // 0x42e2f8: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42e2fc:
    // 0x42e2fc: 0x2442c728  addiu       $v0, $v0, -0x38D8
    ctx->pc = 0x42e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952744));
label_42e300:
    // 0x42e300: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42e300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42e304:
    // 0x42e304: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x42e304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_42e308:
    // 0x42e308: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x42e308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_42e30c:
    // 0x42e30c: 0xc0407c0  jal         func_101F00
label_42e310:
    if (ctx->pc == 0x42E310u) {
        ctx->pc = 0x42E310u;
            // 0x42e310: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
        ctx->pc = 0x42E314u;
        goto label_42e314;
    }
    ctx->pc = 0x42E30Cu;
    SET_GPR_U32(ctx, 31, 0x42E314u);
    ctx->pc = 0x42E310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E30Cu;
            // 0x42e310: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E314u; }
        if (ctx->pc != 0x42E314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E314u; }
        if (ctx->pc != 0x42E314u) { return; }
    }
    ctx->pc = 0x42E314u;
label_42e314:
    // 0x42e314: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x42e314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_42e318:
    // 0x42e318: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_42e31c:
    if (ctx->pc == 0x42E31Cu) {
        ctx->pc = 0x42E31Cu;
            // 0x42e31c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x42E320u;
        goto label_42e320;
    }
    ctx->pc = 0x42E318u;
    {
        const bool branch_taken_0x42e318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e318) {
            ctx->pc = 0x42E31Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E318u;
            // 0x42e31c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E32Cu;
            goto label_42e32c;
        }
    }
    ctx->pc = 0x42E320u;
label_42e320:
    // 0x42e320: 0xc07507c  jal         func_1D41F0
label_42e324:
    if (ctx->pc == 0x42E324u) {
        ctx->pc = 0x42E324u;
            // 0x42e324: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x42E328u;
        goto label_42e328;
    }
    ctx->pc = 0x42E320u;
    SET_GPR_U32(ctx, 31, 0x42E328u);
    ctx->pc = 0x42E324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E320u;
            // 0x42e324: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E328u; }
        if (ctx->pc != 0x42E328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E328u; }
        if (ctx->pc != 0x42E328u) { return; }
    }
    ctx->pc = 0x42E328u;
label_42e328:
    // 0x42e328: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x42e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_42e32c:
    // 0x42e32c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_42e330:
    if (ctx->pc == 0x42E330u) {
        ctx->pc = 0x42E330u;
            // 0x42e330: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x42E334u;
        goto label_42e334;
    }
    ctx->pc = 0x42E32Cu;
    {
        const bool branch_taken_0x42e32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e32c) {
            ctx->pc = 0x42E330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E32Cu;
            // 0x42e330: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E35Cu;
            goto label_42e35c;
        }
    }
    ctx->pc = 0x42E334u;
label_42e334:
    // 0x42e334: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_42e338:
    if (ctx->pc == 0x42E338u) {
        ctx->pc = 0x42E33Cu;
        goto label_42e33c;
    }
    ctx->pc = 0x42E334u;
    {
        const bool branch_taken_0x42e334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e334) {
            ctx->pc = 0x42E358u;
            goto label_42e358;
        }
    }
    ctx->pc = 0x42E33Cu;
label_42e33c:
    // 0x42e33c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42e340:
    if (ctx->pc == 0x42E340u) {
        ctx->pc = 0x42E344u;
        goto label_42e344;
    }
    ctx->pc = 0x42E33Cu;
    {
        const bool branch_taken_0x42e33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e33c) {
            ctx->pc = 0x42E358u;
            goto label_42e358;
        }
    }
    ctx->pc = 0x42E344u;
label_42e344:
    // 0x42e344: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x42e344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_42e348:
    // 0x42e348: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_42e34c:
    if (ctx->pc == 0x42E34Cu) {
        ctx->pc = 0x42E350u;
        goto label_42e350;
    }
    ctx->pc = 0x42E348u;
    {
        const bool branch_taken_0x42e348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e348) {
            ctx->pc = 0x42E358u;
            goto label_42e358;
        }
    }
    ctx->pc = 0x42E350u;
label_42e350:
    // 0x42e350: 0xc0400a8  jal         func_1002A0
label_42e354:
    if (ctx->pc == 0x42E354u) {
        ctx->pc = 0x42E358u;
        goto label_42e358;
    }
    ctx->pc = 0x42E350u;
    SET_GPR_U32(ctx, 31, 0x42E358u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E358u; }
        if (ctx->pc != 0x42E358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E358u; }
        if (ctx->pc != 0x42E358u) { return; }
    }
    ctx->pc = 0x42E358u;
label_42e358:
    // 0x42e358: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x42e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_42e35c:
    // 0x42e35c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_42e360:
    if (ctx->pc == 0x42E360u) {
        ctx->pc = 0x42E360u;
            // 0x42e360: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x42E364u;
        goto label_42e364;
    }
    ctx->pc = 0x42E35Cu;
    {
        const bool branch_taken_0x42e35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e35c) {
            ctx->pc = 0x42E360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E35Cu;
            // 0x42e360: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E38Cu;
            goto label_42e38c;
        }
    }
    ctx->pc = 0x42E364u;
label_42e364:
    // 0x42e364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_42e368:
    if (ctx->pc == 0x42E368u) {
        ctx->pc = 0x42E36Cu;
        goto label_42e36c;
    }
    ctx->pc = 0x42E364u;
    {
        const bool branch_taken_0x42e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e364) {
            ctx->pc = 0x42E388u;
            goto label_42e388;
        }
    }
    ctx->pc = 0x42E36Cu;
label_42e36c:
    // 0x42e36c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42e370:
    if (ctx->pc == 0x42E370u) {
        ctx->pc = 0x42E374u;
        goto label_42e374;
    }
    ctx->pc = 0x42E36Cu;
    {
        const bool branch_taken_0x42e36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e36c) {
            ctx->pc = 0x42E388u;
            goto label_42e388;
        }
    }
    ctx->pc = 0x42E374u;
label_42e374:
    // 0x42e374: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x42e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_42e378:
    // 0x42e378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_42e37c:
    if (ctx->pc == 0x42E37Cu) {
        ctx->pc = 0x42E380u;
        goto label_42e380;
    }
    ctx->pc = 0x42E378u;
    {
        const bool branch_taken_0x42e378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e378) {
            ctx->pc = 0x42E388u;
            goto label_42e388;
        }
    }
    ctx->pc = 0x42E380u;
label_42e380:
    // 0x42e380: 0xc0400a8  jal         func_1002A0
label_42e384:
    if (ctx->pc == 0x42E384u) {
        ctx->pc = 0x42E388u;
        goto label_42e388;
    }
    ctx->pc = 0x42E380u;
    SET_GPR_U32(ctx, 31, 0x42E388u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E388u; }
        if (ctx->pc != 0x42E388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E388u; }
        if (ctx->pc != 0x42E388u) { return; }
    }
    ctx->pc = 0x42E388u;
label_42e388:
    // 0x42e388: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x42e388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_42e38c:
    // 0x42e38c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42e390:
    if (ctx->pc == 0x42E390u) {
        ctx->pc = 0x42E394u;
        goto label_42e394;
    }
    ctx->pc = 0x42E38Cu;
    {
        const bool branch_taken_0x42e38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e38c) {
            ctx->pc = 0x42E3A8u;
            goto label_42e3a8;
        }
    }
    ctx->pc = 0x42E394u;
label_42e394:
    // 0x42e394: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42e394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42e398:
    // 0x42e398: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42e398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42e39c:
    // 0x42e39c: 0x2463c6e0  addiu       $v1, $v1, -0x3920
    ctx->pc = 0x42e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952672));
label_42e3a0:
    // 0x42e3a0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x42e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_42e3a4:
    // 0x42e3a4: 0xac406ed8  sw          $zero, 0x6ED8($v0)
    ctx->pc = 0x42e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28376), GPR_U32(ctx, 0));
label_42e3a8:
    // 0x42e3a8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_42e3ac:
    if (ctx->pc == 0x42E3ACu) {
        ctx->pc = 0x42E3ACu;
            // 0x42e3ac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x42E3B0u;
        goto label_42e3b0;
    }
    ctx->pc = 0x42E3A8u;
    {
        const bool branch_taken_0x42e3a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e3a8) {
            ctx->pc = 0x42E3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E3A8u;
            // 0x42e3ac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E404u;
            goto label_42e404;
        }
    }
    ctx->pc = 0x42E3B0u;
label_42e3b0:
    // 0x42e3b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42e3b4:
    // 0x42e3b4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x42e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_42e3b8:
    // 0x42e3b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x42e3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_42e3bc:
    // 0x42e3bc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x42e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_42e3c0:
    // 0x42e3c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42e3c4:
    if (ctx->pc == 0x42E3C4u) {
        ctx->pc = 0x42E3C4u;
            // 0x42e3c4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x42E3C8u;
        goto label_42e3c8;
    }
    ctx->pc = 0x42E3C0u;
    {
        const bool branch_taken_0x42e3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e3c0) {
            ctx->pc = 0x42E3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E3C0u;
            // 0x42e3c4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E3DCu;
            goto label_42e3dc;
        }
    }
    ctx->pc = 0x42E3C8u;
label_42e3c8:
    // 0x42e3c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42e3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42e3cc:
    // 0x42e3cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42e3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42e3d0:
    // 0x42e3d0: 0x320f809  jalr        $t9
label_42e3d4:
    if (ctx->pc == 0x42E3D4u) {
        ctx->pc = 0x42E3D4u;
            // 0x42e3d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42E3D8u;
        goto label_42e3d8;
    }
    ctx->pc = 0x42E3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42E3D8u);
        ctx->pc = 0x42E3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E3D0u;
            // 0x42e3d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42E3D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42E3D8u; }
            if (ctx->pc != 0x42E3D8u) { return; }
        }
        }
    }
    ctx->pc = 0x42E3D8u;
label_42e3d8:
    // 0x42e3d8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x42e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_42e3dc:
    // 0x42e3dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42e3e0:
    if (ctx->pc == 0x42E3E0u) {
        ctx->pc = 0x42E3E0u;
            // 0x42e3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E3E4u;
        goto label_42e3e4;
    }
    ctx->pc = 0x42E3DCu;
    {
        const bool branch_taken_0x42e3dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e3dc) {
            ctx->pc = 0x42E3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E3DCu;
            // 0x42e3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E3F8u;
            goto label_42e3f8;
        }
    }
    ctx->pc = 0x42E3E4u;
label_42e3e4:
    // 0x42e3e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42e3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42e3e8:
    // 0x42e3e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42e3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42e3ec:
    // 0x42e3ec: 0x320f809  jalr        $t9
label_42e3f0:
    if (ctx->pc == 0x42E3F0u) {
        ctx->pc = 0x42E3F0u;
            // 0x42e3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42E3F4u;
        goto label_42e3f4;
    }
    ctx->pc = 0x42E3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42E3F4u);
        ctx->pc = 0x42E3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E3ECu;
            // 0x42e3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42E3F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42E3F4u; }
            if (ctx->pc != 0x42E3F4u) { return; }
        }
        }
    }
    ctx->pc = 0x42E3F4u;
label_42e3f4:
    // 0x42e3f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42e3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42e3f8:
    // 0x42e3f8: 0xc075bf8  jal         func_1D6FE0
label_42e3fc:
    if (ctx->pc == 0x42E3FCu) {
        ctx->pc = 0x42E3FCu;
            // 0x42e3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E400u;
        goto label_42e400;
    }
    ctx->pc = 0x42E3F8u;
    SET_GPR_U32(ctx, 31, 0x42E400u);
    ctx->pc = 0x42E3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E3F8u;
            // 0x42e3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E400u; }
        if (ctx->pc != 0x42E400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E400u; }
        if (ctx->pc != 0x42E400u) { return; }
    }
    ctx->pc = 0x42E400u;
label_42e400:
    // 0x42e400: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42e400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_42e404:
    // 0x42e404: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42e404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42e408:
    // 0x42e408: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42e40c:
    if (ctx->pc == 0x42E40Cu) {
        ctx->pc = 0x42E40Cu;
            // 0x42e40c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E410u;
        goto label_42e410;
    }
    ctx->pc = 0x42E408u;
    {
        const bool branch_taken_0x42e408 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42e408) {
            ctx->pc = 0x42E40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E408u;
            // 0x42e40c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E41Cu;
            goto label_42e41c;
        }
    }
    ctx->pc = 0x42E410u;
label_42e410:
    // 0x42e410: 0xc0400a8  jal         func_1002A0
label_42e414:
    if (ctx->pc == 0x42E414u) {
        ctx->pc = 0x42E414u;
            // 0x42e414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E418u;
        goto label_42e418;
    }
    ctx->pc = 0x42E410u;
    SET_GPR_U32(ctx, 31, 0x42E418u);
    ctx->pc = 0x42E414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E410u;
            // 0x42e414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E418u; }
        if (ctx->pc != 0x42E418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E418u; }
        if (ctx->pc != 0x42E418u) { return; }
    }
    ctx->pc = 0x42E418u;
label_42e418:
    // 0x42e418: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42e418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42e41c:
    // 0x42e41c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42e41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42e420:
    // 0x42e420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42e420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42e424:
    // 0x42e424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42e424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42e428:
    // 0x42e428: 0x3e00008  jr          $ra
label_42e42c:
    if (ctx->pc == 0x42E42Cu) {
        ctx->pc = 0x42E42Cu;
            // 0x42e42c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42E430u;
        goto label_42e430;
    }
    ctx->pc = 0x42E428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E428u;
            // 0x42e42c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42E430u;
label_42e430:
    // 0x42e430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42e434:
    // 0x42e434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42e438:
    // 0x42e438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42e438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42e43c:
    // 0x42e43c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42e43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42e440:
    // 0x42e440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42e440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42e444:
    // 0x42e444: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_42e448:
    if (ctx->pc == 0x42E448u) {
        ctx->pc = 0x42E448u;
            // 0x42e448: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E44Cu;
        goto label_42e44c;
    }
    ctx->pc = 0x42E444u;
    {
        const bool branch_taken_0x42e444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E444u;
            // 0x42e448: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e444) {
            ctx->pc = 0x42E50Cu;
            goto label_42e50c;
        }
    }
    ctx->pc = 0x42E44Cu;
label_42e44c:
    // 0x42e44c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42e450:
    // 0x42e450: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42e450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42e454:
    // 0x42e454: 0x2463c640  addiu       $v1, $v1, -0x39C0
    ctx->pc = 0x42e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952512));
label_42e458:
    // 0x42e458: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x42e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
label_42e45c:
    // 0x42e45c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42e460:
    // 0x42e460: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x42e460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_42e464:
    // 0x42e464: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42e464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42e468:
    // 0x42e468: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x42e468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_42e46c:
    // 0x42e46c: 0x320f809  jalr        $t9
label_42e470:
    if (ctx->pc == 0x42E470u) {
        ctx->pc = 0x42E474u;
        goto label_42e474;
    }
    ctx->pc = 0x42E46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42E474u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42E474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42E474u; }
            if (ctx->pc != 0x42E474u) { return; }
        }
        }
    }
    ctx->pc = 0x42E474u;
label_42e474:
    // 0x42e474: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_42e478:
    if (ctx->pc == 0x42E478u) {
        ctx->pc = 0x42E478u;
            // 0x42e478: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x42E47Cu;
        goto label_42e47c;
    }
    ctx->pc = 0x42E474u;
    {
        const bool branch_taken_0x42e474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e474) {
            ctx->pc = 0x42E478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E474u;
            // 0x42e478: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E4F8u;
            goto label_42e4f8;
        }
    }
    ctx->pc = 0x42E47Cu;
label_42e47c:
    // 0x42e47c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42e480:
    // 0x42e480: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42e480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42e484:
    // 0x42e484: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x42e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_42e488:
    // 0x42e488: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x42e488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_42e48c:
    // 0x42e48c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42e490:
    // 0x42e490: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x42e490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_42e494:
    // 0x42e494: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x42e494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_42e498:
    // 0x42e498: 0xc0aecc4  jal         func_2BB310
label_42e49c:
    if (ctx->pc == 0x42E49Cu) {
        ctx->pc = 0x42E49Cu;
            // 0x42e49c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42E4A0u;
        goto label_42e4a0;
    }
    ctx->pc = 0x42E498u;
    SET_GPR_U32(ctx, 31, 0x42E4A0u);
    ctx->pc = 0x42E49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E498u;
            // 0x42e49c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E4A0u; }
        if (ctx->pc != 0x42E4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E4A0u; }
        if (ctx->pc != 0x42E4A0u) { return; }
    }
    ctx->pc = 0x42E4A0u;
label_42e4a0:
    // 0x42e4a0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x42e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_42e4a4:
    // 0x42e4a4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x42e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_42e4a8:
    // 0x42e4a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42e4ac:
    if (ctx->pc == 0x42E4ACu) {
        ctx->pc = 0x42E4ACu;
            // 0x42e4ac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x42E4B0u;
        goto label_42e4b0;
    }
    ctx->pc = 0x42E4A8u;
    {
        const bool branch_taken_0x42e4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e4a8) {
            ctx->pc = 0x42E4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E4A8u;
            // 0x42e4ac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E4C4u;
            goto label_42e4c4;
        }
    }
    ctx->pc = 0x42E4B0u;
label_42e4b0:
    // 0x42e4b0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x42e4b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_42e4b4:
    // 0x42e4b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42e4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42e4b8:
    // 0x42e4b8: 0x320f809  jalr        $t9
label_42e4bc:
    if (ctx->pc == 0x42E4BCu) {
        ctx->pc = 0x42E4BCu;
            // 0x42e4bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42E4C0u;
        goto label_42e4c0;
    }
    ctx->pc = 0x42E4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42E4C0u);
        ctx->pc = 0x42E4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E4B8u;
            // 0x42e4bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42E4C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42E4C0u; }
            if (ctx->pc != 0x42E4C0u) { return; }
        }
        }
    }
    ctx->pc = 0x42E4C0u;
label_42e4c0:
    // 0x42e4c0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x42e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_42e4c4:
    // 0x42e4c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x42e4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42e4c8:
    // 0x42e4c8: 0xc0aec9c  jal         func_2BB270
label_42e4cc:
    if (ctx->pc == 0x42E4CCu) {
        ctx->pc = 0x42E4CCu;
            // 0x42e4cc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x42E4D0u;
        goto label_42e4d0;
    }
    ctx->pc = 0x42E4C8u;
    SET_GPR_U32(ctx, 31, 0x42E4D0u);
    ctx->pc = 0x42E4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E4C8u;
            // 0x42e4cc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E4D0u; }
        if (ctx->pc != 0x42E4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E4D0u; }
        if (ctx->pc != 0x42E4D0u) { return; }
    }
    ctx->pc = 0x42E4D0u;
label_42e4d0:
    // 0x42e4d0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x42e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_42e4d4:
    // 0x42e4d4: 0xc0aec88  jal         func_2BB220
label_42e4d8:
    if (ctx->pc == 0x42E4D8u) {
        ctx->pc = 0x42E4D8u;
            // 0x42e4d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x42E4DCu;
        goto label_42e4dc;
    }
    ctx->pc = 0x42E4D4u;
    SET_GPR_U32(ctx, 31, 0x42E4DCu);
    ctx->pc = 0x42E4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E4D4u;
            // 0x42e4d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E4DCu; }
        if (ctx->pc != 0x42E4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E4DCu; }
        if (ctx->pc != 0x42E4DCu) { return; }
    }
    ctx->pc = 0x42E4DCu;
label_42e4dc:
    // 0x42e4dc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x42e4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_42e4e0:
    // 0x42e4e0: 0xc0aec0c  jal         func_2BB030
label_42e4e4:
    if (ctx->pc == 0x42E4E4u) {
        ctx->pc = 0x42E4E4u;
            // 0x42e4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E4E8u;
        goto label_42e4e8;
    }
    ctx->pc = 0x42E4E0u;
    SET_GPR_U32(ctx, 31, 0x42E4E8u);
    ctx->pc = 0x42E4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E4E0u;
            // 0x42e4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E4E8u; }
        if (ctx->pc != 0x42E4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E4E8u; }
        if (ctx->pc != 0x42E4E8u) { return; }
    }
    ctx->pc = 0x42E4E8u;
label_42e4e8:
    // 0x42e4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42e4ec:
    // 0x42e4ec: 0xc0aeaa8  jal         func_2BAAA0
label_42e4f0:
    if (ctx->pc == 0x42E4F0u) {
        ctx->pc = 0x42E4F0u;
            // 0x42e4f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E4F4u;
        goto label_42e4f4;
    }
    ctx->pc = 0x42E4ECu;
    SET_GPR_U32(ctx, 31, 0x42E4F4u);
    ctx->pc = 0x42E4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E4ECu;
            // 0x42e4f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E4F4u; }
        if (ctx->pc != 0x42E4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E4F4u; }
        if (ctx->pc != 0x42E4F4u) { return; }
    }
    ctx->pc = 0x42E4F4u;
label_42e4f4:
    // 0x42e4f4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x42e4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_42e4f8:
    // 0x42e4f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42e4f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42e4fc:
    // 0x42e4fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42e500:
    if (ctx->pc == 0x42E500u) {
        ctx->pc = 0x42E500u;
            // 0x42e500: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E504u;
        goto label_42e504;
    }
    ctx->pc = 0x42E4FCu;
    {
        const bool branch_taken_0x42e4fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42e4fc) {
            ctx->pc = 0x42E500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42E4FCu;
            // 0x42e500: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42E510u;
            goto label_42e510;
        }
    }
    ctx->pc = 0x42E504u;
label_42e504:
    // 0x42e504: 0xc0400a8  jal         func_1002A0
label_42e508:
    if (ctx->pc == 0x42E508u) {
        ctx->pc = 0x42E508u;
            // 0x42e508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E50Cu;
        goto label_42e50c;
    }
    ctx->pc = 0x42E504u;
    SET_GPR_U32(ctx, 31, 0x42E50Cu);
    ctx->pc = 0x42E508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E504u;
            // 0x42e508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E50Cu; }
        if (ctx->pc != 0x42E50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E50Cu; }
        if (ctx->pc != 0x42E50Cu) { return; }
    }
    ctx->pc = 0x42E50Cu;
label_42e50c:
    // 0x42e50c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42e50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42e510:
    // 0x42e510: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42e510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42e514:
    // 0x42e514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42e514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42e518:
    // 0x42e518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42e518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42e51c:
    // 0x42e51c: 0x3e00008  jr          $ra
label_42e520:
    if (ctx->pc == 0x42E520u) {
        ctx->pc = 0x42E520u;
            // 0x42e520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42E524u;
        goto label_42e524;
    }
    ctx->pc = 0x42E51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E51Cu;
            // 0x42e520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42E524u;
label_42e524:
    // 0x42e524: 0x0  nop
    ctx->pc = 0x42e524u;
    // NOP
label_42e528:
    // 0x42e528: 0x0  nop
    ctx->pc = 0x42e528u;
    // NOP
label_42e52c:
    // 0x42e52c: 0x0  nop
    ctx->pc = 0x42e52cu;
    // NOP
}
