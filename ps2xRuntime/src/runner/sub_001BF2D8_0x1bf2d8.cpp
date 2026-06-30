#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BF2D8
// Address: 0x1bf2d8 - 0x1bf610
void sub_001BF2D8_0x1bf2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF2D8_0x1bf2d8");
#endif

    switch (ctx->pc) {
        case 0x1bf2d8u: goto label_1bf2d8;
        case 0x1bf2dcu: goto label_1bf2dc;
        case 0x1bf2e0u: goto label_1bf2e0;
        case 0x1bf2e4u: goto label_1bf2e4;
        case 0x1bf2e8u: goto label_1bf2e8;
        case 0x1bf2ecu: goto label_1bf2ec;
        case 0x1bf2f0u: goto label_1bf2f0;
        case 0x1bf2f4u: goto label_1bf2f4;
        case 0x1bf2f8u: goto label_1bf2f8;
        case 0x1bf2fcu: goto label_1bf2fc;
        case 0x1bf300u: goto label_1bf300;
        case 0x1bf304u: goto label_1bf304;
        case 0x1bf308u: goto label_1bf308;
        case 0x1bf30cu: goto label_1bf30c;
        case 0x1bf310u: goto label_1bf310;
        case 0x1bf314u: goto label_1bf314;
        case 0x1bf318u: goto label_1bf318;
        case 0x1bf31cu: goto label_1bf31c;
        case 0x1bf320u: goto label_1bf320;
        case 0x1bf324u: goto label_1bf324;
        case 0x1bf328u: goto label_1bf328;
        case 0x1bf32cu: goto label_1bf32c;
        case 0x1bf330u: goto label_1bf330;
        case 0x1bf334u: goto label_1bf334;
        case 0x1bf338u: goto label_1bf338;
        case 0x1bf33cu: goto label_1bf33c;
        case 0x1bf340u: goto label_1bf340;
        case 0x1bf344u: goto label_1bf344;
        case 0x1bf348u: goto label_1bf348;
        case 0x1bf34cu: goto label_1bf34c;
        case 0x1bf350u: goto label_1bf350;
        case 0x1bf354u: goto label_1bf354;
        case 0x1bf358u: goto label_1bf358;
        case 0x1bf35cu: goto label_1bf35c;
        case 0x1bf360u: goto label_1bf360;
        case 0x1bf364u: goto label_1bf364;
        case 0x1bf368u: goto label_1bf368;
        case 0x1bf36cu: goto label_1bf36c;
        case 0x1bf370u: goto label_1bf370;
        case 0x1bf374u: goto label_1bf374;
        case 0x1bf378u: goto label_1bf378;
        case 0x1bf37cu: goto label_1bf37c;
        case 0x1bf380u: goto label_1bf380;
        case 0x1bf384u: goto label_1bf384;
        case 0x1bf388u: goto label_1bf388;
        case 0x1bf38cu: goto label_1bf38c;
        case 0x1bf390u: goto label_1bf390;
        case 0x1bf394u: goto label_1bf394;
        case 0x1bf398u: goto label_1bf398;
        case 0x1bf39cu: goto label_1bf39c;
        case 0x1bf3a0u: goto label_1bf3a0;
        case 0x1bf3a4u: goto label_1bf3a4;
        case 0x1bf3a8u: goto label_1bf3a8;
        case 0x1bf3acu: goto label_1bf3ac;
        case 0x1bf3b0u: goto label_1bf3b0;
        case 0x1bf3b4u: goto label_1bf3b4;
        case 0x1bf3b8u: goto label_1bf3b8;
        case 0x1bf3bcu: goto label_1bf3bc;
        case 0x1bf3c0u: goto label_1bf3c0;
        case 0x1bf3c4u: goto label_1bf3c4;
        case 0x1bf3c8u: goto label_1bf3c8;
        case 0x1bf3ccu: goto label_1bf3cc;
        case 0x1bf3d0u: goto label_1bf3d0;
        case 0x1bf3d4u: goto label_1bf3d4;
        case 0x1bf3d8u: goto label_1bf3d8;
        case 0x1bf3dcu: goto label_1bf3dc;
        case 0x1bf3e0u: goto label_1bf3e0;
        case 0x1bf3e4u: goto label_1bf3e4;
        case 0x1bf3e8u: goto label_1bf3e8;
        case 0x1bf3ecu: goto label_1bf3ec;
        case 0x1bf3f0u: goto label_1bf3f0;
        case 0x1bf3f4u: goto label_1bf3f4;
        case 0x1bf3f8u: goto label_1bf3f8;
        case 0x1bf3fcu: goto label_1bf3fc;
        case 0x1bf400u: goto label_1bf400;
        case 0x1bf404u: goto label_1bf404;
        case 0x1bf408u: goto label_1bf408;
        case 0x1bf40cu: goto label_1bf40c;
        case 0x1bf410u: goto label_1bf410;
        case 0x1bf414u: goto label_1bf414;
        case 0x1bf418u: goto label_1bf418;
        case 0x1bf41cu: goto label_1bf41c;
        case 0x1bf420u: goto label_1bf420;
        case 0x1bf424u: goto label_1bf424;
        case 0x1bf428u: goto label_1bf428;
        case 0x1bf42cu: goto label_1bf42c;
        case 0x1bf430u: goto label_1bf430;
        case 0x1bf434u: goto label_1bf434;
        case 0x1bf438u: goto label_1bf438;
        case 0x1bf43cu: goto label_1bf43c;
        case 0x1bf440u: goto label_1bf440;
        case 0x1bf444u: goto label_1bf444;
        case 0x1bf448u: goto label_1bf448;
        case 0x1bf44cu: goto label_1bf44c;
        case 0x1bf450u: goto label_1bf450;
        case 0x1bf454u: goto label_1bf454;
        case 0x1bf458u: goto label_1bf458;
        case 0x1bf45cu: goto label_1bf45c;
        case 0x1bf460u: goto label_1bf460;
        case 0x1bf464u: goto label_1bf464;
        case 0x1bf468u: goto label_1bf468;
        case 0x1bf46cu: goto label_1bf46c;
        case 0x1bf470u: goto label_1bf470;
        case 0x1bf474u: goto label_1bf474;
        case 0x1bf478u: goto label_1bf478;
        case 0x1bf47cu: goto label_1bf47c;
        case 0x1bf480u: goto label_1bf480;
        case 0x1bf484u: goto label_1bf484;
        case 0x1bf488u: goto label_1bf488;
        case 0x1bf48cu: goto label_1bf48c;
        case 0x1bf490u: goto label_1bf490;
        case 0x1bf494u: goto label_1bf494;
        case 0x1bf498u: goto label_1bf498;
        case 0x1bf49cu: goto label_1bf49c;
        case 0x1bf4a0u: goto label_1bf4a0;
        case 0x1bf4a4u: goto label_1bf4a4;
        case 0x1bf4a8u: goto label_1bf4a8;
        case 0x1bf4acu: goto label_1bf4ac;
        case 0x1bf4b0u: goto label_1bf4b0;
        case 0x1bf4b4u: goto label_1bf4b4;
        case 0x1bf4b8u: goto label_1bf4b8;
        case 0x1bf4bcu: goto label_1bf4bc;
        case 0x1bf4c0u: goto label_1bf4c0;
        case 0x1bf4c4u: goto label_1bf4c4;
        case 0x1bf4c8u: goto label_1bf4c8;
        case 0x1bf4ccu: goto label_1bf4cc;
        case 0x1bf4d0u: goto label_1bf4d0;
        case 0x1bf4d4u: goto label_1bf4d4;
        case 0x1bf4d8u: goto label_1bf4d8;
        case 0x1bf4dcu: goto label_1bf4dc;
        case 0x1bf4e0u: goto label_1bf4e0;
        case 0x1bf4e4u: goto label_1bf4e4;
        case 0x1bf4e8u: goto label_1bf4e8;
        case 0x1bf4ecu: goto label_1bf4ec;
        case 0x1bf4f0u: goto label_1bf4f0;
        case 0x1bf4f4u: goto label_1bf4f4;
        case 0x1bf4f8u: goto label_1bf4f8;
        case 0x1bf4fcu: goto label_1bf4fc;
        case 0x1bf500u: goto label_1bf500;
        case 0x1bf504u: goto label_1bf504;
        case 0x1bf508u: goto label_1bf508;
        case 0x1bf50cu: goto label_1bf50c;
        case 0x1bf510u: goto label_1bf510;
        case 0x1bf514u: goto label_1bf514;
        case 0x1bf518u: goto label_1bf518;
        case 0x1bf51cu: goto label_1bf51c;
        case 0x1bf520u: goto label_1bf520;
        case 0x1bf524u: goto label_1bf524;
        case 0x1bf528u: goto label_1bf528;
        case 0x1bf52cu: goto label_1bf52c;
        case 0x1bf530u: goto label_1bf530;
        case 0x1bf534u: goto label_1bf534;
        case 0x1bf538u: goto label_1bf538;
        case 0x1bf53cu: goto label_1bf53c;
        case 0x1bf540u: goto label_1bf540;
        case 0x1bf544u: goto label_1bf544;
        case 0x1bf548u: goto label_1bf548;
        case 0x1bf54cu: goto label_1bf54c;
        case 0x1bf550u: goto label_1bf550;
        case 0x1bf554u: goto label_1bf554;
        case 0x1bf558u: goto label_1bf558;
        case 0x1bf55cu: goto label_1bf55c;
        case 0x1bf560u: goto label_1bf560;
        case 0x1bf564u: goto label_1bf564;
        case 0x1bf568u: goto label_1bf568;
        case 0x1bf56cu: goto label_1bf56c;
        case 0x1bf570u: goto label_1bf570;
        case 0x1bf574u: goto label_1bf574;
        case 0x1bf578u: goto label_1bf578;
        case 0x1bf57cu: goto label_1bf57c;
        case 0x1bf580u: goto label_1bf580;
        case 0x1bf584u: goto label_1bf584;
        case 0x1bf588u: goto label_1bf588;
        case 0x1bf58cu: goto label_1bf58c;
        case 0x1bf590u: goto label_1bf590;
        case 0x1bf594u: goto label_1bf594;
        case 0x1bf598u: goto label_1bf598;
        case 0x1bf59cu: goto label_1bf59c;
        case 0x1bf5a0u: goto label_1bf5a0;
        case 0x1bf5a4u: goto label_1bf5a4;
        case 0x1bf5a8u: goto label_1bf5a8;
        case 0x1bf5acu: goto label_1bf5ac;
        case 0x1bf5b0u: goto label_1bf5b0;
        case 0x1bf5b4u: goto label_1bf5b4;
        case 0x1bf5b8u: goto label_1bf5b8;
        case 0x1bf5bcu: goto label_1bf5bc;
        case 0x1bf5c0u: goto label_1bf5c0;
        case 0x1bf5c4u: goto label_1bf5c4;
        case 0x1bf5c8u: goto label_1bf5c8;
        case 0x1bf5ccu: goto label_1bf5cc;
        case 0x1bf5d0u: goto label_1bf5d0;
        case 0x1bf5d4u: goto label_1bf5d4;
        case 0x1bf5d8u: goto label_1bf5d8;
        case 0x1bf5dcu: goto label_1bf5dc;
        case 0x1bf5e0u: goto label_1bf5e0;
        case 0x1bf5e4u: goto label_1bf5e4;
        case 0x1bf5e8u: goto label_1bf5e8;
        case 0x1bf5ecu: goto label_1bf5ec;
        case 0x1bf5f0u: goto label_1bf5f0;
        case 0x1bf5f4u: goto label_1bf5f4;
        case 0x1bf5f8u: goto label_1bf5f8;
        case 0x1bf5fcu: goto label_1bf5fc;
        case 0x1bf600u: goto label_1bf600;
        case 0x1bf604u: goto label_1bf604;
        case 0x1bf608u: goto label_1bf608;
        case 0x1bf60cu: goto label_1bf60c;
        default: break;
    }

    ctx->pc = 0x1bf2d8u;

label_1bf2d8:
    // 0x1bf2d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bf2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bf2dc:
    // 0x1bf2dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1bf2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1bf2e0:
    // 0x1bf2e0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1bf2e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1bf2e4:
    // 0x1bf2e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bf2e8:
    // 0x1bf2e8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bf2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bf2ec:
    // 0x1bf2ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bf2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bf2f0:
    // 0x1bf2f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bf2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bf2f4:
    // 0x1bf2f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bf2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1bf2f8:
    // 0x1bf2f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bf2f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf2fc:
    // 0x1bf2fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bf2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1bf300:
    // 0x1bf300: 0x26930400  addiu       $s3, $s4, 0x400
    ctx->pc = 0x1bf300u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
label_1bf304:
    // 0x1bf304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf308:
    // 0x1bf308: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1bf308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1bf30c:
    // 0x1bf30c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1bf30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1bf310:
    // 0x1bf310: 0xc04a576  jal         func_1295D8
label_1bf314:
    if (ctx->pc == 0x1BF314u) {
        ctx->pc = 0x1BF314u;
            // 0x1bf314: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF318u;
        goto label_1bf318;
    }
    ctx->pc = 0x1BF310u;
    SET_GPR_U32(ctx, 31, 0x1BF318u);
    ctx->pc = 0x1BF314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF310u;
            // 0x1bf314: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF318u; }
        if (ctx->pc != 0x1BF318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF318u; }
        if (ctx->pc != 0x1BF318u) { return; }
    }
    ctx->pc = 0x1BF318u;
label_1bf318:
    // 0x1bf318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bf318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bf31c:
    // 0x1bf31c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf320:
    // 0x1bf320: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf324:
    // 0x1bf324: 0xc06fc4c  jal         func_1BF130
label_1bf328:
    if (ctx->pc == 0x1BF328u) {
        ctx->pc = 0x1BF328u;
            // 0x1bf328: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF32Cu;
        goto label_1bf32c;
    }
    ctx->pc = 0x1BF324u;
    SET_GPR_U32(ctx, 31, 0x1BF32Cu);
    ctx->pc = 0x1BF328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF324u;
            // 0x1bf328: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF130u;
    if (runtime->hasFunction(0x1BF130u)) {
        auto targetFn = runtime->lookupFunction(0x1BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF32Cu; }
        if (ctx->pc != 0x1BF32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF130_0x1bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF32Cu; }
        if (ctx->pc != 0x1BF32Cu) { return; }
    }
    ctx->pc = 0x1BF32Cu;
label_1bf32c:
    // 0x1bf32c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bf32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bf330:
    // 0x1bf330: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x1bf330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1bf334:
    // 0x1bf334: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bf334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bf338:
    // 0x1bf338: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1bf33c:
    if (ctx->pc == 0x1BF33Cu) {
        ctx->pc = 0x1BF33Cu;
            // 0x1bf33c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1BF340u;
        goto label_1bf340;
    }
    ctx->pc = 0x1BF338u;
    {
        const bool branch_taken_0x1bf338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF338u;
            // 0x1bf33c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf338) {
            ctx->pc = 0x1BF3A0u;
            goto label_1bf3a0;
        }
    }
    ctx->pc = 0x1BF340u;
label_1bf340:
    // 0x1bf340: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bf340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bf344:
    // 0x1bf344: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1bf348:
    if (ctx->pc == 0x1BF348u) {
        ctx->pc = 0x1BF348u;
            // 0x1bf348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF34Cu;
        goto label_1bf34c;
    }
    ctx->pc = 0x1BF344u;
    {
        const bool branch_taken_0x1bf344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BF348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF344u;
            // 0x1bf348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf344) {
            ctx->pc = 0x1BF378u;
            goto label_1bf378;
        }
    }
    ctx->pc = 0x1BF34Cu;
label_1bf34c:
    // 0x1bf34c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bf34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf350:
    // 0x1bf350: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bf350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bf354:
    // 0x1bf354: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bf354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bf358:
    // 0x1bf358: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1bf358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bf35c:
    // 0x1bf35c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1bf35cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf360:
    // 0x1bf360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf364:
    // 0x1bf364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bf368:
    // 0x1bf368: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1bf368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bf36c:
    // 0x1bf36c: 0x806fcf4  j           func_1BF3D0
label_1bf370:
    if (ctx->pc == 0x1BF370u) {
        ctx->pc = 0x1BF370u;
            // 0x1bf370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1BF374u;
        goto label_1bf374;
    }
    ctx->pc = 0x1BF36Cu;
    ctx->pc = 0x1BF370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF36Cu;
            // 0x1bf370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF3D0u;
    goto label_1bf3d0;
    ctx->pc = 0x1BF374u;
label_1bf374:
    // 0x1bf374: 0x0  nop
    ctx->pc = 0x1bf374u;
    // NOP
label_1bf378:
    // 0x1bf378: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bf378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf37c:
    // 0x1bf37c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bf37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bf380:
    // 0x1bf380: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bf380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bf384:
    // 0x1bf384: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1bf384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bf388:
    // 0x1bf388: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1bf388u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf38c:
    // 0x1bf38c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf38cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf390:
    // 0x1bf390: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bf394:
    // 0x1bf394: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1bf394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bf398:
    // 0x1bf398: 0x806fd18  j           func_1BF460
label_1bf39c:
    if (ctx->pc == 0x1BF39Cu) {
        ctx->pc = 0x1BF39Cu;
            // 0x1bf39c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1BF3A0u;
        goto label_1bf3a0;
    }
    ctx->pc = 0x1BF398u;
    ctx->pc = 0x1BF39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF398u;
            // 0x1bf39c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF460u;
    goto label_1bf460;
    ctx->pc = 0x1BF3A0u;
label_1bf3a0:
    // 0x1bf3a0: 0xc64d0040  lwc1        $f13, 0x40($s2)
    ctx->pc = 0x1bf3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bf3a4:
    // 0x1bf3a4: 0x40f809  jalr        $v0
label_1bf3a8:
    if (ctx->pc == 0x1BF3A8u) {
        ctx->pc = 0x1BF3A8u;
            // 0x1bf3a8: 0xc64c003c  lwc1        $f12, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1BF3ACu;
        goto label_1bf3ac;
    }
    ctx->pc = 0x1BF3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF3ACu);
        ctx->pc = 0x1BF3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3A4u;
            // 0x1bf3a8: 0xc64c003c  lwc1        $f12, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BF3ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3ACu; }
            if (ctx->pc != 0x1BF3ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1BF3ACu;
label_1bf3ac:
    // 0x1bf3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf3b0:
    // 0x1bf3b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bf3b4:
    // 0x1bf3b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bf3b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf3b8:
    // 0x1bf3b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bf3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bf3bc:
    // 0x1bf3bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1bf3bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf3c0:
    // 0x1bf3c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1bf3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bf3c4:
    // 0x1bf3c4: 0x3e00008  jr          $ra
label_1bf3c8:
    if (ctx->pc == 0x1BF3C8u) {
        ctx->pc = 0x1BF3C8u;
            // 0x1bf3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1BF3CCu;
        goto label_1bf3cc;
    }
    ctx->pc = 0x1BF3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3C4u;
            // 0x1bf3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF3CCu;
label_1bf3cc:
    // 0x1bf3cc: 0x0  nop
    ctx->pc = 0x1bf3ccu;
    // NOP
label_1bf3d0:
    // 0x1bf3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bf3d4:
    // 0x1bf3d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bf3d8:
    // 0x1bf3d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bf3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bf3dc:
    // 0x1bf3dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bf3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bf3e0:
    // 0x1bf3e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bf3e4:
    // 0x1bf3e4: 0xc06fda6  jal         func_1BF698
label_1bf3e8:
    if (ctx->pc == 0x1BF3E8u) {
        ctx->pc = 0x1BF3E8u;
            // 0x1bf3e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3ECu;
        goto label_1bf3ec;
    }
    ctx->pc = 0x1BF3E4u;
    SET_GPR_U32(ctx, 31, 0x1BF3ECu);
    ctx->pc = 0x1BF3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3E4u;
            // 0x1bf3e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF698u;
    if (runtime->hasFunction(0x1BF698u)) {
        auto targetFn = runtime->lookupFunction(0x1BF698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3ECu; }
        if (ctx->pc != 0x1BF3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF698_0x1bf698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF3ECu; }
        if (ctx->pc != 0x1BF3ECu) { return; }
    }
    ctx->pc = 0x1BF3ECu;
label_1bf3ec:
    // 0x1bf3ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf3f0:
    // 0x1bf3f0: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_1bf3f4:
    if (ctx->pc == 0x1BF3F4u) {
        ctx->pc = 0x1BF3F4u;
            // 0x1bf3f4: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1BF3F8u;
        goto label_1bf3f8;
    }
    ctx->pc = 0x1BF3F0u;
    {
        const bool branch_taken_0x1bf3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bf3f0) {
            ctx->pc = 0x1BF3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF3F0u;
            // 0x1bf3f4: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BF440u;
            goto label_1bf440;
        }
    }
    ctx->pc = 0x1BF3F8u;
label_1bf3f8:
    // 0x1bf3f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf3fc:
    // 0x1bf3fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf400:
    // 0x1bf400: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bf400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf404:
    // 0x1bf404: 0x0  nop
    ctx->pc = 0x1bf404u;
    // NOP
label_1bf408:
    // 0x1bf408: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bf408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bf40c:
    // 0x1bf40c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1bf40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1bf410:
    // 0x1bf410: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bf410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1bf414:
    // 0x1bf414: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x1bf414u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
label_1bf418:
    // 0x1bf418: 0x28830100  slti        $v1, $a0, 0x100
    ctx->pc = 0x1bf418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
label_1bf41c:
    // 0x1bf41c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1bf41cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_1bf420:
    // 0x1bf420: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1bf424:
    if (ctx->pc == 0x1BF424u) {
        ctx->pc = 0x1BF424u;
            // 0x1bf424: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1BF428u;
        goto label_1bf428;
    }
    ctx->pc = 0x1BF420u;
    {
        const bool branch_taken_0x1bf420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF420u;
            // 0x1bf424: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf420) {
            ctx->pc = 0x1BF408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf408;
        }
    }
    ctx->pc = 0x1BF428u;
label_1bf428:
    // 0x1bf428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf42c:
    // 0x1bf42c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf42cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bf430:
    // 0x1bf430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf434:
    // 0x1bf434: 0x3e00008  jr          $ra
label_1bf438:
    if (ctx->pc == 0x1BF438u) {
        ctx->pc = 0x1BF438u;
            // 0x1bf438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BF43Cu;
        goto label_1bf43c;
    }
    ctx->pc = 0x1BF434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF434u;
            // 0x1bf438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF43Cu;
label_1bf43c:
    // 0x1bf43c: 0x0  nop
    ctx->pc = 0x1bf43cu;
    // NOP
label_1bf440:
    // 0x1bf440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf444:
    // 0x1bf444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bf448:
    // 0x1bf448: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bf448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf44c:
    // 0x1bf44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf450:
    // 0x1bf450: 0x24c6b640  addiu       $a2, $a2, -0x49C0
    ctx->pc = 0x1bf450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948416));
label_1bf454:
    // 0x1bf454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf458:
    // 0x1bf458: 0x806f9cc  j           func_1BE730
label_1bf45c:
    if (ctx->pc == 0x1BF45Cu) {
        ctx->pc = 0x1BF45Cu;
            // 0x1bf45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BF460u;
        goto label_1bf460;
    }
    ctx->pc = 0x1BF458u;
    ctx->pc = 0x1BF45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF458u;
            // 0x1bf45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE730_0x1be730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BF460u;
label_1bf460:
    // 0x1bf460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bf464:
    // 0x1bf464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bf468:
    // 0x1bf468: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bf468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bf46c:
    // 0x1bf46c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bf46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bf470:
    // 0x1bf470: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bf470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bf474:
    // 0x1bf474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bf478:
    // 0x1bf478: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1bf478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1bf47c:
    // 0x1bf47c: 0xc06fda6  jal         func_1BF698
label_1bf480:
    if (ctx->pc == 0x1BF480u) {
        ctx->pc = 0x1BF480u;
            // 0x1bf480: 0xc4940040  lwc1        $f20, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x1BF484u;
        goto label_1bf484;
    }
    ctx->pc = 0x1BF47Cu;
    SET_GPR_U32(ctx, 31, 0x1BF484u);
    ctx->pc = 0x1BF480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF47Cu;
            // 0x1bf480: 0xc4940040  lwc1        $f20, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF698u;
    if (runtime->hasFunction(0x1BF698u)) {
        auto targetFn = runtime->lookupFunction(0x1BF698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF484u; }
        if (ctx->pc != 0x1BF484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF698_0x1bf698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF484u; }
        if (ctx->pc != 0x1BF484u) { return; }
    }
    ctx->pc = 0x1BF484u;
label_1bf484:
    // 0x1bf484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf488:
    // 0x1bf488: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_1bf48c:
    if (ctx->pc == 0x1BF48Cu) {
        ctx->pc = 0x1BF48Cu;
            // 0x1bf48c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF490u;
        goto label_1bf490;
    }
    ctx->pc = 0x1BF488u;
    {
        const bool branch_taken_0x1bf488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BF48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF488u;
            // 0x1bf48c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf488) {
            ctx->pc = 0x1BF4C8u;
            goto label_1bf4c8;
        }
    }
    ctx->pc = 0x1BF490u;
label_1bf490:
    // 0x1bf490: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x1bf490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
label_1bf494:
    // 0x1bf494: 0x34e7ff80  ori         $a3, $a3, 0xFF80
    ctx->pc = 0x1bf494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65408);
label_1bf498:
    // 0x1bf498: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1bf498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1bf49c:
    // 0x1bf49c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bf49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1bf4a0:
    // 0x1bf4a0: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1bf4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1bf4a4:
    // 0x1bf4a4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1bf4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1bf4a8:
    // 0x1bf4a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bf4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bf4ac:
    // 0x1bf4ac: 0x28c50100  slti        $a1, $a2, 0x100
    ctx->pc = 0x1bf4acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
label_1bf4b0:
    // 0x1bf4b0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1bf4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1bf4b4:
    // 0x1bf4b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bf4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1bf4b8:
    // 0x1bf4b8: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
label_1bf4bc:
    if (ctx->pc == 0x1BF4BCu) {
        ctx->pc = 0x1BF4BCu;
            // 0x1bf4bc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1BF4C0u;
        goto label_1bf4c0;
    }
    ctx->pc = 0x1BF4B8u;
    {
        const bool branch_taken_0x1bf4b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4B8u;
            // 0x1bf4bc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4b8) {
            ctx->pc = 0x1BF498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf498;
        }
    }
    ctx->pc = 0x1BF4C0u;
label_1bf4c0:
    // 0x1bf4c0: 0x10000033  b           . + 4 + (0x33 << 2)
label_1bf4c4:
    if (ctx->pc == 0x1BF4C4u) {
        ctx->pc = 0x1BF4C4u;
            // 0x1bf4c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BF4C8u;
        goto label_1bf4c8;
    }
    ctx->pc = 0x1BF4C0u;
    {
        const bool branch_taken_0x1bf4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4C0u;
            // 0x1bf4c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4c0) {
            ctx->pc = 0x1BF590u;
            goto label_1bf590;
        }
    }
    ctx->pc = 0x1BF4C8u;
label_1bf4c8:
    // 0x1bf4c8: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x1bf4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_1bf4cc:
    // 0x1bf4cc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1bf4ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_1bf4d0:
    // 0x1bf4d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bf4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1bf4d4:
    // 0x1bf4d4: 0x3c014b7f  lui         $at, 0x4B7F
    ctx->pc = 0x1bf4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19327 << 16));
label_1bf4d8:
    // 0x1bf4d8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1bf4d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_1bf4dc:
    // 0x1bf4dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf4dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bf4e0:
    // 0x1bf4e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bf4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf4e4:
    // 0x1bf4e4: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1bf4e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_1bf4e8:
    // 0x1bf4e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1bf4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1bf4ec:
    // 0x1bf4ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bf4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1bf4f0:
    // 0x1bf4f0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1bf4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1bf4f4:
    // 0x1bf4f4: 0x28c70100  slti        $a3, $a2, 0x100
    ctx->pc = 0x1bf4f4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
label_1bf4f8:
    // 0x1bf4f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bf4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bf4fc:
    // 0x1bf4fc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1bf500:
    if (ctx->pc == 0x1BF500u) {
        ctx->pc = 0x1BF500u;
            // 0x1bf500: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x1BF504u;
        goto label_1bf504;
    }
    ctx->pc = 0x1BF4FCu;
    {
        const bool branch_taken_0x1bf4fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF4FCu;
            // 0x1bf500: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4fc) {
            ctx->pc = 0x1BF50Cu;
            goto label_1bf50c;
        }
    }
    ctx->pc = 0x1BF504u;
label_1bf504:
    // 0x1bf504: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1bf504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_1bf508:
    // 0x1bf508: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1bf508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1bf50c:
    // 0x1bf50c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1bf510:
    if (ctx->pc == 0x1BF510u) {
        ctx->pc = 0x1BF510u;
            // 0x1bf510: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x1BF514u;
        goto label_1bf514;
    }
    ctx->pc = 0x1BF50Cu;
    {
        const bool branch_taken_0x1bf50c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1BF510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF50Cu;
            // 0x1bf510: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf50c) {
            ctx->pc = 0x1BF528u;
            goto label_1bf528;
        }
    }
    ctx->pc = 0x1BF514u;
label_1bf514:
    // 0x1bf514: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bf514u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf518:
    // 0x1bf518: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bf51c:
    // 0x1bf51c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bf520:
    if (ctx->pc == 0x1BF520u) {
        ctx->pc = 0x1BF520u;
            // 0x1bf520: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1BF524u;
        goto label_1bf524;
    }
    ctx->pc = 0x1BF51Cu;
    {
        const bool branch_taken_0x1bf51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF51Cu;
            // 0x1bf520: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf51c) {
            ctx->pc = 0x1BF540u;
            goto label_1bf540;
        }
    }
    ctx->pc = 0x1BF524u;
label_1bf524:
    // 0x1bf524: 0x0  nop
    ctx->pc = 0x1bf524u;
    // NOP
label_1bf528:
    // 0x1bf528: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1bf528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1bf52c:
    // 0x1bf52c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bf52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1bf530:
    // 0x1bf530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bf530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf534:
    // 0x1bf534: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bf538:
    // 0x1bf538: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bf538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bf53c:
    // 0x1bf53c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1bf53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1bf540:
    // 0x1bf540: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1bf540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_1bf544:
    // 0x1bf544: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf548:
    // 0x1bf548: 0x0  nop
    ctx->pc = 0x1bf548u;
    // NOP
label_1bf54c:
    // 0x1bf54c: 0x0  nop
    ctx->pc = 0x1bf54cu;
    // NOP
label_1bf550:
    // 0x1bf550: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1bf550u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_1bf554:
    // 0x1bf554: 0x0  nop
    ctx->pc = 0x1bf554u;
    // NOP
label_1bf558:
    // 0x1bf558: 0x0  nop
    ctx->pc = 0x1bf558u;
    // NOP
label_1bf55c:
    // 0x1bf55c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1bf55cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1bf560:
    // 0x1bf560: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bf560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bf564:
    // 0x1bf564: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bf564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_1bf568:
    // 0x1bf568: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x1bf568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1bf56c:
    // 0x1bf56c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1bf570:
    if (ctx->pc == 0x1BF570u) {
        ctx->pc = 0x1BF574u;
        goto label_1bf574;
    }
    ctx->pc = 0x1BF56Cu;
    {
        const bool branch_taken_0x1bf56c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bf56c) {
            ctx->pc = 0x1BF584u;
            goto label_1bf584;
        }
    }
    ctx->pc = 0x1BF574u;
label_1bf574:
    // 0x1bf574: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bf574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bf578:
    // 0x1bf578: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bf578u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1bf57c:
    // 0x1bf57c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1bf57cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1bf580:
    // 0x1bf580: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1bf580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_1bf584:
    // 0x1bf584: 0x14e0ffd8  bnez        $a3, . + 4 + (-0x28 << 2)
label_1bf588:
    if (ctx->pc == 0x1BF588u) {
        ctx->pc = 0x1BF588u;
            // 0x1bf588: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1BF58Cu;
        goto label_1bf58c;
    }
    ctx->pc = 0x1BF584u;
    {
        const bool branch_taken_0x1bf584 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF584u;
            // 0x1bf588: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf584) {
            ctx->pc = 0x1BF4E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf4e8;
        }
    }
    ctx->pc = 0x1BF58Cu;
label_1bf58c:
    // 0x1bf58c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf590:
    // 0x1bf590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bf594:
    // 0x1bf594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf598:
    // 0x1bf598: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1bf598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bf59c:
    // 0x1bf59c: 0x3e00008  jr          $ra
label_1bf5a0:
    if (ctx->pc == 0x1BF5A0u) {
        ctx->pc = 0x1BF5A0u;
            // 0x1bf5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BF5A4u;
        goto label_1bf5a4;
    }
    ctx->pc = 0x1BF59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF59Cu;
            // 0x1bf5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF5A4u;
label_1bf5a4:
    // 0x1bf5a4: 0x0  nop
    ctx->pc = 0x1bf5a4u;
    // NOP
label_1bf5a8:
    // 0x1bf5a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bf5ac:
    // 0x1bf5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bf5b0:
    // 0x1bf5b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5b4:
    // 0x1bf5b4: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1bf5b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1bf5b8:
    // 0x1bf5b8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1bf5b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1bf5bc:
    // 0x1bf5bc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1bf5bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1bf5c0:
    // 0x1bf5c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bf5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1bf5c4:
    // 0x1bf5c4: 0xc06fd84  jal         func_1BF610
label_1bf5c8:
    if (ctx->pc == 0x1BF5C8u) {
        ctx->pc = 0x1BF5C8u;
            // 0x1bf5c8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1BF5CCu;
        goto label_1bf5cc;
    }
    ctx->pc = 0x1BF5C4u;
    SET_GPR_U32(ctx, 31, 0x1BF5CCu);
    ctx->pc = 0x1BF5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF5C4u;
            // 0x1bf5c8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF610u;
    if (runtime->hasFunction(0x1BF610u)) {
        auto targetFn = runtime->lookupFunction(0x1BF610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF5CCu; }
        if (ctx->pc != 0x1BF5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF610_0x1bf610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF5CCu; }
        if (ctx->pc != 0x1BF5CCu) { return; }
    }
    ctx->pc = 0x1BF5CCu;
label_1bf5cc:
    // 0x1bf5cc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1bf5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1bf5d0:
    // 0x1bf5d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf5d4:
    // 0x1bf5d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bf5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5d8:
    // 0x1bf5d8: 0x24c6b680  addiu       $a2, $a2, -0x4980
    ctx->pc = 0x1bf5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948480));
label_1bf5dc:
    // 0x1bf5dc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1bf5e0:
    if (ctx->pc == 0x1BF5E0u) {
        ctx->pc = 0x1BF5E0u;
            // 0x1bf5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF5E4u;
        goto label_1bf5e4;
    }
    ctx->pc = 0x1BF5DCu;
    {
        const bool branch_taken_0x1bf5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BF5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF5DCu;
            // 0x1bf5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf5dc) {
            ctx->pc = 0x1BF5ECu;
            goto label_1bf5ec;
        }
    }
    ctx->pc = 0x1BF5E4u;
label_1bf5e4:
    // 0x1bf5e4: 0xc06f9cc  jal         func_1BE730
label_1bf5e8:
    if (ctx->pc == 0x1BF5E8u) {
        ctx->pc = 0x1BF5ECu;
        goto label_1bf5ec;
    }
    ctx->pc = 0x1BF5E4u;
    SET_GPR_U32(ctx, 31, 0x1BF5ECu);
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF5ECu; }
        if (ctx->pc != 0x1BF5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE730_0x1be730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF5ECu; }
        if (ctx->pc != 0x1BF5ECu) { return; }
    }
    ctx->pc = 0x1BF5ECu;
label_1bf5ec:
    // 0x1bf5ec: 0xe6140040  swc1        $f20, 0x40($s0)
    ctx->pc = 0x1bf5ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_1bf5f0:
    // 0x1bf5f0: 0xe615003c  swc1        $f21, 0x3C($s0)
    ctx->pc = 0x1bf5f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_1bf5f4:
    // 0x1bf5f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bf5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bf5f8:
    // 0x1bf5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf5fc:
    // 0x1bf5fc: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1bf5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1bf600:
    // 0x1bf600: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1bf600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bf604:
    // 0x1bf604: 0x3e00008  jr          $ra
label_1bf608:
    if (ctx->pc == 0x1BF608u) {
        ctx->pc = 0x1BF608u;
            // 0x1bf608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BF60Cu;
        goto label_1bf60c;
    }
    ctx->pc = 0x1BF604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF604u;
            // 0x1bf608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF60Cu;
label_1bf60c:
    // 0x1bf60c: 0x0  nop
    ctx->pc = 0x1bf60cu;
    // NOP
}
