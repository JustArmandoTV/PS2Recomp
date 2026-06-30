#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF280
// Address: 0x2bf280 - 0x2bf560
void sub_002BF280_0x2bf280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF280_0x2bf280");
#endif

    switch (ctx->pc) {
        case 0x2bf280u: goto label_2bf280;
        case 0x2bf284u: goto label_2bf284;
        case 0x2bf288u: goto label_2bf288;
        case 0x2bf28cu: goto label_2bf28c;
        case 0x2bf290u: goto label_2bf290;
        case 0x2bf294u: goto label_2bf294;
        case 0x2bf298u: goto label_2bf298;
        case 0x2bf29cu: goto label_2bf29c;
        case 0x2bf2a0u: goto label_2bf2a0;
        case 0x2bf2a4u: goto label_2bf2a4;
        case 0x2bf2a8u: goto label_2bf2a8;
        case 0x2bf2acu: goto label_2bf2ac;
        case 0x2bf2b0u: goto label_2bf2b0;
        case 0x2bf2b4u: goto label_2bf2b4;
        case 0x2bf2b8u: goto label_2bf2b8;
        case 0x2bf2bcu: goto label_2bf2bc;
        case 0x2bf2c0u: goto label_2bf2c0;
        case 0x2bf2c4u: goto label_2bf2c4;
        case 0x2bf2c8u: goto label_2bf2c8;
        case 0x2bf2ccu: goto label_2bf2cc;
        case 0x2bf2d0u: goto label_2bf2d0;
        case 0x2bf2d4u: goto label_2bf2d4;
        case 0x2bf2d8u: goto label_2bf2d8;
        case 0x2bf2dcu: goto label_2bf2dc;
        case 0x2bf2e0u: goto label_2bf2e0;
        case 0x2bf2e4u: goto label_2bf2e4;
        case 0x2bf2e8u: goto label_2bf2e8;
        case 0x2bf2ecu: goto label_2bf2ec;
        case 0x2bf2f0u: goto label_2bf2f0;
        case 0x2bf2f4u: goto label_2bf2f4;
        case 0x2bf2f8u: goto label_2bf2f8;
        case 0x2bf2fcu: goto label_2bf2fc;
        case 0x2bf300u: goto label_2bf300;
        case 0x2bf304u: goto label_2bf304;
        case 0x2bf308u: goto label_2bf308;
        case 0x2bf30cu: goto label_2bf30c;
        case 0x2bf310u: goto label_2bf310;
        case 0x2bf314u: goto label_2bf314;
        case 0x2bf318u: goto label_2bf318;
        case 0x2bf31cu: goto label_2bf31c;
        case 0x2bf320u: goto label_2bf320;
        case 0x2bf324u: goto label_2bf324;
        case 0x2bf328u: goto label_2bf328;
        case 0x2bf32cu: goto label_2bf32c;
        case 0x2bf330u: goto label_2bf330;
        case 0x2bf334u: goto label_2bf334;
        case 0x2bf338u: goto label_2bf338;
        case 0x2bf33cu: goto label_2bf33c;
        case 0x2bf340u: goto label_2bf340;
        case 0x2bf344u: goto label_2bf344;
        case 0x2bf348u: goto label_2bf348;
        case 0x2bf34cu: goto label_2bf34c;
        case 0x2bf350u: goto label_2bf350;
        case 0x2bf354u: goto label_2bf354;
        case 0x2bf358u: goto label_2bf358;
        case 0x2bf35cu: goto label_2bf35c;
        case 0x2bf360u: goto label_2bf360;
        case 0x2bf364u: goto label_2bf364;
        case 0x2bf368u: goto label_2bf368;
        case 0x2bf36cu: goto label_2bf36c;
        case 0x2bf370u: goto label_2bf370;
        case 0x2bf374u: goto label_2bf374;
        case 0x2bf378u: goto label_2bf378;
        case 0x2bf37cu: goto label_2bf37c;
        case 0x2bf380u: goto label_2bf380;
        case 0x2bf384u: goto label_2bf384;
        case 0x2bf388u: goto label_2bf388;
        case 0x2bf38cu: goto label_2bf38c;
        case 0x2bf390u: goto label_2bf390;
        case 0x2bf394u: goto label_2bf394;
        case 0x2bf398u: goto label_2bf398;
        case 0x2bf39cu: goto label_2bf39c;
        case 0x2bf3a0u: goto label_2bf3a0;
        case 0x2bf3a4u: goto label_2bf3a4;
        case 0x2bf3a8u: goto label_2bf3a8;
        case 0x2bf3acu: goto label_2bf3ac;
        case 0x2bf3b0u: goto label_2bf3b0;
        case 0x2bf3b4u: goto label_2bf3b4;
        case 0x2bf3b8u: goto label_2bf3b8;
        case 0x2bf3bcu: goto label_2bf3bc;
        case 0x2bf3c0u: goto label_2bf3c0;
        case 0x2bf3c4u: goto label_2bf3c4;
        case 0x2bf3c8u: goto label_2bf3c8;
        case 0x2bf3ccu: goto label_2bf3cc;
        case 0x2bf3d0u: goto label_2bf3d0;
        case 0x2bf3d4u: goto label_2bf3d4;
        case 0x2bf3d8u: goto label_2bf3d8;
        case 0x2bf3dcu: goto label_2bf3dc;
        case 0x2bf3e0u: goto label_2bf3e0;
        case 0x2bf3e4u: goto label_2bf3e4;
        case 0x2bf3e8u: goto label_2bf3e8;
        case 0x2bf3ecu: goto label_2bf3ec;
        case 0x2bf3f0u: goto label_2bf3f0;
        case 0x2bf3f4u: goto label_2bf3f4;
        case 0x2bf3f8u: goto label_2bf3f8;
        case 0x2bf3fcu: goto label_2bf3fc;
        case 0x2bf400u: goto label_2bf400;
        case 0x2bf404u: goto label_2bf404;
        case 0x2bf408u: goto label_2bf408;
        case 0x2bf40cu: goto label_2bf40c;
        case 0x2bf410u: goto label_2bf410;
        case 0x2bf414u: goto label_2bf414;
        case 0x2bf418u: goto label_2bf418;
        case 0x2bf41cu: goto label_2bf41c;
        case 0x2bf420u: goto label_2bf420;
        case 0x2bf424u: goto label_2bf424;
        case 0x2bf428u: goto label_2bf428;
        case 0x2bf42cu: goto label_2bf42c;
        case 0x2bf430u: goto label_2bf430;
        case 0x2bf434u: goto label_2bf434;
        case 0x2bf438u: goto label_2bf438;
        case 0x2bf43cu: goto label_2bf43c;
        case 0x2bf440u: goto label_2bf440;
        case 0x2bf444u: goto label_2bf444;
        case 0x2bf448u: goto label_2bf448;
        case 0x2bf44cu: goto label_2bf44c;
        case 0x2bf450u: goto label_2bf450;
        case 0x2bf454u: goto label_2bf454;
        case 0x2bf458u: goto label_2bf458;
        case 0x2bf45cu: goto label_2bf45c;
        case 0x2bf460u: goto label_2bf460;
        case 0x2bf464u: goto label_2bf464;
        case 0x2bf468u: goto label_2bf468;
        case 0x2bf46cu: goto label_2bf46c;
        case 0x2bf470u: goto label_2bf470;
        case 0x2bf474u: goto label_2bf474;
        case 0x2bf478u: goto label_2bf478;
        case 0x2bf47cu: goto label_2bf47c;
        case 0x2bf480u: goto label_2bf480;
        case 0x2bf484u: goto label_2bf484;
        case 0x2bf488u: goto label_2bf488;
        case 0x2bf48cu: goto label_2bf48c;
        case 0x2bf490u: goto label_2bf490;
        case 0x2bf494u: goto label_2bf494;
        case 0x2bf498u: goto label_2bf498;
        case 0x2bf49cu: goto label_2bf49c;
        case 0x2bf4a0u: goto label_2bf4a0;
        case 0x2bf4a4u: goto label_2bf4a4;
        case 0x2bf4a8u: goto label_2bf4a8;
        case 0x2bf4acu: goto label_2bf4ac;
        case 0x2bf4b0u: goto label_2bf4b0;
        case 0x2bf4b4u: goto label_2bf4b4;
        case 0x2bf4b8u: goto label_2bf4b8;
        case 0x2bf4bcu: goto label_2bf4bc;
        case 0x2bf4c0u: goto label_2bf4c0;
        case 0x2bf4c4u: goto label_2bf4c4;
        case 0x2bf4c8u: goto label_2bf4c8;
        case 0x2bf4ccu: goto label_2bf4cc;
        case 0x2bf4d0u: goto label_2bf4d0;
        case 0x2bf4d4u: goto label_2bf4d4;
        case 0x2bf4d8u: goto label_2bf4d8;
        case 0x2bf4dcu: goto label_2bf4dc;
        case 0x2bf4e0u: goto label_2bf4e0;
        case 0x2bf4e4u: goto label_2bf4e4;
        case 0x2bf4e8u: goto label_2bf4e8;
        case 0x2bf4ecu: goto label_2bf4ec;
        case 0x2bf4f0u: goto label_2bf4f0;
        case 0x2bf4f4u: goto label_2bf4f4;
        case 0x2bf4f8u: goto label_2bf4f8;
        case 0x2bf4fcu: goto label_2bf4fc;
        case 0x2bf500u: goto label_2bf500;
        case 0x2bf504u: goto label_2bf504;
        case 0x2bf508u: goto label_2bf508;
        case 0x2bf50cu: goto label_2bf50c;
        case 0x2bf510u: goto label_2bf510;
        case 0x2bf514u: goto label_2bf514;
        case 0x2bf518u: goto label_2bf518;
        case 0x2bf51cu: goto label_2bf51c;
        case 0x2bf520u: goto label_2bf520;
        case 0x2bf524u: goto label_2bf524;
        case 0x2bf528u: goto label_2bf528;
        case 0x2bf52cu: goto label_2bf52c;
        case 0x2bf530u: goto label_2bf530;
        case 0x2bf534u: goto label_2bf534;
        case 0x2bf538u: goto label_2bf538;
        case 0x2bf53cu: goto label_2bf53c;
        case 0x2bf540u: goto label_2bf540;
        case 0x2bf544u: goto label_2bf544;
        case 0x2bf548u: goto label_2bf548;
        case 0x2bf54cu: goto label_2bf54c;
        case 0x2bf550u: goto label_2bf550;
        case 0x2bf554u: goto label_2bf554;
        case 0x2bf558u: goto label_2bf558;
        case 0x2bf55cu: goto label_2bf55c;
        default: break;
    }

    ctx->pc = 0x2bf280u;

label_2bf280:
    // 0x2bf280: 0x80788fc  j           func_1E23F0
label_2bf284:
    if (ctx->pc == 0x2BF284u) {
        ctx->pc = 0x2BF288u;
        goto label_2bf288;
    }
    ctx->pc = 0x2BF280u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2BF288u;
label_2bf288:
    // 0x2bf288: 0x0  nop
    ctx->pc = 0x2bf288u;
    // NOP
label_2bf28c:
    // 0x2bf28c: 0x0  nop
    ctx->pc = 0x2bf28cu;
    // NOP
label_2bf290:
    // 0x2bf290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bf294:
    // 0x2bf294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bf294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bf298:
    // 0x2bf298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bf29c:
    // 0x2bf29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bf2a0:
    // 0x2bf2a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bf2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf2a4:
    // 0x2bf2a4: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2bf2a8:
    if (ctx->pc == 0x2BF2A8u) {
        ctx->pc = 0x2BF2A8u;
            // 0x2bf2a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2ACu;
        goto label_2bf2ac;
    }
    ctx->pc = 0x2BF2A4u;
    {
        const bool branch_taken_0x2bf2a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2A4u;
            // 0x2bf2a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2a4) {
            ctx->pc = 0x2BF3ECu;
            goto label_2bf3ec;
        }
    }
    ctx->pc = 0x2BF2ACu;
label_2bf2ac:
    // 0x2bf2ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bf2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bf2b0:
    // 0x2bf2b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf2b4:
    // 0x2bf2b4: 0x24631a80  addiu       $v1, $v1, 0x1A80
    ctx->pc = 0x2bf2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_2bf2b8:
    // 0x2bf2b8: 0x24421ac0  addiu       $v0, $v0, 0x1AC0
    ctx->pc = 0x2bf2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
label_2bf2bc:
    // 0x2bf2bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bf2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bf2c0:
    // 0x2bf2c0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bf2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bf2c4:
    // 0x2bf2c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf2c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf2c8:
    // 0x2bf2c8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2bf2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2bf2cc:
    // 0x2bf2cc: 0x320f809  jalr        $t9
label_2bf2d0:
    if (ctx->pc == 0x2BF2D0u) {
        ctx->pc = 0x2BF2D4u;
        goto label_2bf2d4;
    }
    ctx->pc = 0x2BF2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF2D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF2D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2D4u; }
            if (ctx->pc != 0x2BF2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF2D4u;
label_2bf2d4:
    // 0x2bf2d4: 0x2622008c  addiu       $v0, $s1, 0x8C
    ctx->pc = 0x2bf2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
label_2bf2d8:
    // 0x2bf2d8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2bf2dc:
    if (ctx->pc == 0x2BF2DCu) {
        ctx->pc = 0x2BF2DCu;
            // 0x2bf2dc: 0x2622007c  addiu       $v0, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->pc = 0x2BF2E0u;
        goto label_2bf2e0;
    }
    ctx->pc = 0x2BF2D8u;
    {
        const bool branch_taken_0x2bf2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf2d8) {
            ctx->pc = 0x2BF2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2D8u;
            // 0x2bf2dc: 0x2622007c  addiu       $v0, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF318u;
            goto label_2bf318;
        }
    }
    ctx->pc = 0x2BF2E0u;
label_2bf2e0:
    // 0x2bf2e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2bf2e4:
    if (ctx->pc == 0x2BF2E4u) {
        ctx->pc = 0x2BF2E8u;
        goto label_2bf2e8;
    }
    ctx->pc = 0x2BF2E0u;
    {
        const bool branch_taken_0x2bf2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf2e0) {
            ctx->pc = 0x2BF314u;
            goto label_2bf314;
        }
    }
    ctx->pc = 0x2BF2E8u;
label_2bf2e8:
    // 0x2bf2e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2bf2ec:
    if (ctx->pc == 0x2BF2ECu) {
        ctx->pc = 0x2BF2F0u;
        goto label_2bf2f0;
    }
    ctx->pc = 0x2BF2E8u;
    {
        const bool branch_taken_0x2bf2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf2e8) {
            ctx->pc = 0x2BF314u;
            goto label_2bf314;
        }
    }
    ctx->pc = 0x2BF2F0u;
label_2bf2f0:
    // 0x2bf2f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bf2f4:
    if (ctx->pc == 0x2BF2F4u) {
        ctx->pc = 0x2BF2F8u;
        goto label_2bf2f8;
    }
    ctx->pc = 0x2BF2F0u;
    {
        const bool branch_taken_0x2bf2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf2f0) {
            ctx->pc = 0x2BF314u;
            goto label_2bf314;
        }
    }
    ctx->pc = 0x2BF2F8u;
label_2bf2f8:
    // 0x2bf2f8: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x2bf2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_2bf2fc:
    // 0x2bf2fc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2bf300:
    if (ctx->pc == 0x2BF300u) {
        ctx->pc = 0x2BF304u;
        goto label_2bf304;
    }
    ctx->pc = 0x2BF2FCu;
    {
        const bool branch_taken_0x2bf2fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf2fc) {
            ctx->pc = 0x2BF314u;
            goto label_2bf314;
        }
    }
    ctx->pc = 0x2BF304u;
label_2bf304:
    // 0x2bf304: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2bf308:
    if (ctx->pc == 0x2BF308u) {
        ctx->pc = 0x2BF30Cu;
        goto label_2bf30c;
    }
    ctx->pc = 0x2BF304u;
    {
        const bool branch_taken_0x2bf304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf304) {
            ctx->pc = 0x2BF314u;
            goto label_2bf314;
        }
    }
    ctx->pc = 0x2BF30Cu;
label_2bf30c:
    // 0x2bf30c: 0xc0fe48c  jal         func_3F9230
label_2bf310:
    if (ctx->pc == 0x2BF310u) {
        ctx->pc = 0x2BF310u;
            // 0x2bf310: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2BF314u;
        goto label_2bf314;
    }
    ctx->pc = 0x2BF30Cu;
    SET_GPR_U32(ctx, 31, 0x2BF314u);
    ctx->pc = 0x2BF310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF30Cu;
            // 0x2bf310: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF314u; }
        if (ctx->pc != 0x2BF314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF314u; }
        if (ctx->pc != 0x2BF314u) { return; }
    }
    ctx->pc = 0x2BF314u;
label_2bf314:
    // 0x2bf314: 0x2622007c  addiu       $v0, $s1, 0x7C
    ctx->pc = 0x2bf314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_2bf318:
    // 0x2bf318: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2bf31c:
    if (ctx->pc == 0x2BF31Cu) {
        ctx->pc = 0x2BF320u;
        goto label_2bf320;
    }
    ctx->pc = 0x2BF318u;
    {
        const bool branch_taken_0x2bf318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf318) {
            ctx->pc = 0x2BF354u;
            goto label_2bf354;
        }
    }
    ctx->pc = 0x2BF320u;
label_2bf320:
    // 0x2bf320: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2bf324:
    if (ctx->pc == 0x2BF324u) {
        ctx->pc = 0x2BF328u;
        goto label_2bf328;
    }
    ctx->pc = 0x2BF320u;
    {
        const bool branch_taken_0x2bf320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf320) {
            ctx->pc = 0x2BF354u;
            goto label_2bf354;
        }
    }
    ctx->pc = 0x2BF328u;
label_2bf328:
    // 0x2bf328: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2bf32c:
    if (ctx->pc == 0x2BF32Cu) {
        ctx->pc = 0x2BF330u;
        goto label_2bf330;
    }
    ctx->pc = 0x2BF328u;
    {
        const bool branch_taken_0x2bf328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf328) {
            ctx->pc = 0x2BF354u;
            goto label_2bf354;
        }
    }
    ctx->pc = 0x2BF330u;
label_2bf330:
    // 0x2bf330: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bf334:
    if (ctx->pc == 0x2BF334u) {
        ctx->pc = 0x2BF338u;
        goto label_2bf338;
    }
    ctx->pc = 0x2BF330u;
    {
        const bool branch_taken_0x2bf330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf330) {
            ctx->pc = 0x2BF354u;
            goto label_2bf354;
        }
    }
    ctx->pc = 0x2BF338u;
label_2bf338:
    // 0x2bf338: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x2bf338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2bf33c:
    // 0x2bf33c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2bf340:
    if (ctx->pc == 0x2BF340u) {
        ctx->pc = 0x2BF344u;
        goto label_2bf344;
    }
    ctx->pc = 0x2BF33Cu;
    {
        const bool branch_taken_0x2bf33c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf33c) {
            ctx->pc = 0x2BF354u;
            goto label_2bf354;
        }
    }
    ctx->pc = 0x2BF344u;
label_2bf344:
    // 0x2bf344: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2bf348:
    if (ctx->pc == 0x2BF348u) {
        ctx->pc = 0x2BF34Cu;
        goto label_2bf34c;
    }
    ctx->pc = 0x2BF344u;
    {
        const bool branch_taken_0x2bf344 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf344) {
            ctx->pc = 0x2BF354u;
            goto label_2bf354;
        }
    }
    ctx->pc = 0x2BF34Cu;
label_2bf34c:
    // 0x2bf34c: 0xc0fe48c  jal         func_3F9230
label_2bf350:
    if (ctx->pc == 0x2BF350u) {
        ctx->pc = 0x2BF350u;
            // 0x2bf350: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2BF354u;
        goto label_2bf354;
    }
    ctx->pc = 0x2BF34Cu;
    SET_GPR_U32(ctx, 31, 0x2BF354u);
    ctx->pc = 0x2BF350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF34Cu;
            // 0x2bf350: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF354u; }
        if (ctx->pc != 0x2BF354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF354u; }
        if (ctx->pc != 0x2BF354u) { return; }
    }
    ctx->pc = 0x2BF354u;
label_2bf354:
    // 0x2bf354: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2bf358:
    if (ctx->pc == 0x2BF358u) {
        ctx->pc = 0x2BF358u;
            // 0x2bf358: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BF35Cu;
        goto label_2bf35c;
    }
    ctx->pc = 0x2BF354u;
    {
        const bool branch_taken_0x2bf354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf354) {
            ctx->pc = 0x2BF358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF354u;
            // 0x2bf358: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF3D8u;
            goto label_2bf3d8;
        }
    }
    ctx->pc = 0x2BF35Cu;
label_2bf35c:
    // 0x2bf35c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf360:
    // 0x2bf360: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bf360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bf364:
    // 0x2bf364: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2bf364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2bf368:
    // 0x2bf368: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2bf368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2bf36c:
    // 0x2bf36c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bf36cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bf370:
    // 0x2bf370: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2bf370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2bf374:
    // 0x2bf374: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2bf378:
    if (ctx->pc == 0x2BF378u) {
        ctx->pc = 0x2BF378u;
            // 0x2bf378: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2BF37Cu;
        goto label_2bf37c;
    }
    ctx->pc = 0x2BF374u;
    {
        const bool branch_taken_0x2bf374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF374u;
            // 0x2bf378: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf374) {
            ctx->pc = 0x2BF3B0u;
            goto label_2bf3b0;
        }
    }
    ctx->pc = 0x2BF37Cu;
label_2bf37c:
    // 0x2bf37c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf380:
    // 0x2bf380: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2bf380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2bf384:
    // 0x2bf384: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bf384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bf388:
    // 0x2bf388: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2bf388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2bf38c:
    // 0x2bf38c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2bf390:
    if (ctx->pc == 0x2BF390u) {
        ctx->pc = 0x2BF394u;
        goto label_2bf394;
    }
    ctx->pc = 0x2BF38Cu;
    {
        const bool branch_taken_0x2bf38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf38c) {
            ctx->pc = 0x2BF3B0u;
            goto label_2bf3b0;
        }
    }
    ctx->pc = 0x2BF394u;
label_2bf394:
    // 0x2bf394: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bf398:
    if (ctx->pc == 0x2BF398u) {
        ctx->pc = 0x2BF398u;
            // 0x2bf398: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2BF39Cu;
        goto label_2bf39c;
    }
    ctx->pc = 0x2BF394u;
    {
        const bool branch_taken_0x2bf394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf394) {
            ctx->pc = 0x2BF398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF394u;
            // 0x2bf398: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF3B0u;
            goto label_2bf3b0;
        }
    }
    ctx->pc = 0x2BF39Cu;
label_2bf39c:
    // 0x2bf39c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf3a0:
    // 0x2bf3a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bf3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bf3a4:
    // 0x2bf3a4: 0x320f809  jalr        $t9
label_2bf3a8:
    if (ctx->pc == 0x2BF3A8u) {
        ctx->pc = 0x2BF3A8u;
            // 0x2bf3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF3ACu;
        goto label_2bf3ac;
    }
    ctx->pc = 0x2BF3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF3ACu);
        ctx->pc = 0x2BF3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF3A4u;
            // 0x2bf3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF3ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3ACu; }
            if (ctx->pc != 0x2BF3ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2BF3ACu;
label_2bf3ac:
    // 0x2bf3ac: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2bf3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2bf3b0:
    // 0x2bf3b0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2bf3b4:
    if (ctx->pc == 0x2BF3B4u) {
        ctx->pc = 0x2BF3B8u;
        goto label_2bf3b8;
    }
    ctx->pc = 0x2BF3B0u;
    {
        const bool branch_taken_0x2bf3b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf3b0) {
            ctx->pc = 0x2BF3D4u;
            goto label_2bf3d4;
        }
    }
    ctx->pc = 0x2BF3B8u;
label_2bf3b8:
    // 0x2bf3b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf3bc:
    // 0x2bf3bc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2bf3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2bf3c0:
    // 0x2bf3c0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2bf3c4:
    if (ctx->pc == 0x2BF3C4u) {
        ctx->pc = 0x2BF3C4u;
            // 0x2bf3c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BF3C8u;
        goto label_2bf3c8;
    }
    ctx->pc = 0x2BF3C0u;
    {
        const bool branch_taken_0x2bf3c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF3C0u;
            // 0x2bf3c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3c0) {
            ctx->pc = 0x2BF3D4u;
            goto label_2bf3d4;
        }
    }
    ctx->pc = 0x2BF3C8u;
label_2bf3c8:
    // 0x2bf3c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf3cc:
    // 0x2bf3cc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bf3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2bf3d0:
    // 0x2bf3d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bf3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bf3d4:
    // 0x2bf3d4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bf3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bf3d8:
    // 0x2bf3d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bf3d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bf3dc:
    // 0x2bf3dc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bf3e0:
    if (ctx->pc == 0x2BF3E0u) {
        ctx->pc = 0x2BF3E0u;
            // 0x2bf3e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3E4u;
        goto label_2bf3e4;
    }
    ctx->pc = 0x2BF3DCu;
    {
        const bool branch_taken_0x2bf3dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bf3dc) {
            ctx->pc = 0x2BF3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF3DCu;
            // 0x2bf3e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BF3F0u;
            goto label_2bf3f0;
        }
    }
    ctx->pc = 0x2BF3E4u;
label_2bf3e4:
    // 0x2bf3e4: 0xc0400a8  jal         func_1002A0
label_2bf3e8:
    if (ctx->pc == 0x2BF3E8u) {
        ctx->pc = 0x2BF3E8u;
            // 0x2bf3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3ECu;
        goto label_2bf3ec;
    }
    ctx->pc = 0x2BF3E4u;
    SET_GPR_U32(ctx, 31, 0x2BF3ECu);
    ctx->pc = 0x2BF3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF3E4u;
            // 0x2bf3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3ECu; }
        if (ctx->pc != 0x2BF3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF3ECu; }
        if (ctx->pc != 0x2BF3ECu) { return; }
    }
    ctx->pc = 0x2BF3ECu;
label_2bf3ec:
    // 0x2bf3ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bf3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf3f0:
    // 0x2bf3f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bf3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bf3f4:
    // 0x2bf3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf3f8:
    // 0x2bf3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf3fc:
    // 0x2bf3fc: 0x3e00008  jr          $ra
label_2bf400:
    if (ctx->pc == 0x2BF400u) {
        ctx->pc = 0x2BF400u;
            // 0x2bf400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BF404u;
        goto label_2bf404;
    }
    ctx->pc = 0x2BF3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF3FCu;
            // 0x2bf400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF404u;
label_2bf404:
    // 0x2bf404: 0x0  nop
    ctx->pc = 0x2bf404u;
    // NOP
label_2bf408:
    // 0x2bf408: 0x0  nop
    ctx->pc = 0x2bf408u;
    // NOP
label_2bf40c:
    // 0x2bf40c: 0x0  nop
    ctx->pc = 0x2bf40cu;
    // NOP
label_2bf410:
    // 0x2bf410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bf414:
    // 0x2bf414: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf418:
    // 0x2bf418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bf418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bf41c:
    // 0x2bf41c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bf41cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bf420:
    // 0x2bf420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bf424:
    // 0x2bf424: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bf424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2bf428:
    // 0x2bf428: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bf428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bf42c:
    // 0x2bf42c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2bf42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2bf430:
    // 0x2bf430: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2bf430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2bf434:
    // 0x2bf434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf438:
    // 0x2bf438: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bf438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2bf43c:
    // 0x2bf43c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bf43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf440:
    // 0x2bf440: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2bf440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2bf444:
    // 0x2bf444: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bf444u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2bf448:
    // 0x2bf448: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2bf448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2bf44c:
    // 0x2bf44c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2bf44cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2bf450:
    // 0x2bf450: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2bf450u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2bf454:
    // 0x2bf454: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2bf454u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2bf458:
    // 0x2bf458: 0xc04cbd8  jal         func_132F60
label_2bf45c:
    if (ctx->pc == 0x2BF45Cu) {
        ctx->pc = 0x2BF45Cu;
            // 0x2bf45c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2BF460u;
        goto label_2bf460;
    }
    ctx->pc = 0x2BF458u;
    SET_GPR_U32(ctx, 31, 0x2BF460u);
    ctx->pc = 0x2BF45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF458u;
            // 0x2bf45c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF460u; }
        if (ctx->pc != 0x2BF460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF460u; }
        if (ctx->pc != 0x2BF460u) { return; }
    }
    ctx->pc = 0x2BF460u;
label_2bf460:
    // 0x2bf460: 0xc04c968  jal         func_1325A0
label_2bf464:
    if (ctx->pc == 0x2BF464u) {
        ctx->pc = 0x2BF464u;
            // 0x2bf464: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2BF468u;
        goto label_2bf468;
    }
    ctx->pc = 0x2BF460u;
    SET_GPR_U32(ctx, 31, 0x2BF468u);
    ctx->pc = 0x2BF464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF460u;
            // 0x2bf464: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF468u; }
        if (ctx->pc != 0x2BF468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF468u; }
        if (ctx->pc != 0x2BF468u) { return; }
    }
    ctx->pc = 0x2BF468u;
label_2bf468:
    // 0x2bf468: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bf468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bf46c:
    // 0x2bf46c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2bf46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2bf470:
    // 0x2bf470: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2bf470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2bf474:
    // 0x2bf474: 0x3c0c006a  lui         $t4, 0x6A
    ctx->pc = 0x2bf474u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)106 << 16));
label_2bf478:
    // 0x2bf478: 0x3c0b006a  lui         $t3, 0x6A
    ctx->pc = 0x2bf478u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)106 << 16));
label_2bf47c:
    // 0x2bf47c: 0x3c0a006a  lui         $t2, 0x6A
    ctx->pc = 0x2bf47cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)106 << 16));
label_2bf480:
    // 0x2bf480: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x2bf480u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_2bf484:
    // 0x2bf484: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2bf484u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_2bf488:
    // 0x2bf488: 0x8c4d0788  lw          $t5, 0x788($v0)
    ctx->pc = 0x2bf488u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_2bf48c:
    // 0x2bf48c: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x2bf48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
label_2bf490:
    // 0x2bf490: 0x258c2660  addiu       $t4, $t4, 0x2660
    ctx->pc = 0x2bf490u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 9824));
label_2bf494:
    // 0x2bf494: 0x256b2670  addiu       $t3, $t3, 0x2670
    ctx->pc = 0x2bf494u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9840));
label_2bf498:
    // 0x2bf498: 0x254a26b0  addiu       $t2, $t2, 0x26B0
    ctx->pc = 0x2bf498u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9904));
label_2bf49c:
    // 0x2bf49c: 0x25291a80  addiu       $t1, $t1, 0x1A80
    ctx->pc = 0x2bf49cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6784));
label_2bf4a0:
    // 0x2bf4a0: 0xad6821  addu        $t5, $a1, $t5
    ctx->pc = 0x2bf4a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_2bf4a4:
    // 0x2bf4a4: 0x25081ac0  addiu       $t0, $t0, 0x1AC0
    ctx->pc = 0x2bf4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6848));
label_2bf4a8:
    // 0x2bf4a8: 0x91ad0000  lbu         $t5, 0x0($t5)
    ctx->pc = 0x2bf4a8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_2bf4ac:
    // 0x2bf4ac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2bf4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2bf4b0:
    // 0x2bf4b0: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x2bf4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_2bf4b4:
    // 0x2bf4b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2bf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2bf4b8:
    // 0x2bf4b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2bf4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2bf4bc:
    // 0x2bf4bc: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x2bf4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_2bf4c0:
    // 0x2bf4c0: 0xa20d004d  sb          $t5, 0x4D($s0)
    ctx->pc = 0x2bf4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 13));
label_2bf4c4:
    // 0x2bf4c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2bf4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2bf4c8:
    // 0x2bf4c8: 0xae0c0054  sw          $t4, 0x54($s0)
    ctx->pc = 0x2bf4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 12));
label_2bf4cc:
    // 0x2bf4cc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2bf4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2bf4d0:
    // 0x2bf4d0: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x2bf4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
label_2bf4d4:
    // 0x2bf4d4: 0xae0a0054  sw          $t2, 0x54($s0)
    ctx->pc = 0x2bf4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 10));
label_2bf4d8:
    // 0x2bf4d8: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x2bf4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
label_2bf4dc:
    // 0x2bf4dc: 0xae080054  sw          $t0, 0x54($s0)
    ctx->pc = 0x2bf4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 8));
label_2bf4e0:
    // 0x2bf4e0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2bf4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2bf4e4:
    // 0x2bf4e4: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x2bf4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_2bf4e8:
    // 0x2bf4e8: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2bf4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_2bf4ec:
    // 0x2bf4ec: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2bf4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_2bf4f0:
    // 0x2bf4f0: 0x8cc68a08  lw          $a2, -0x75F8($a2)
    ctx->pc = 0x2bf4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937096)));
label_2bf4f4:
    // 0x2bf4f4: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2bf4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bf4f8:
    // 0x2bf4f8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2bf4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_2bf4fc:
    // 0x2bf4fc: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2bf4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_2bf500:
    // 0x2bf500: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2bf500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_2bf504:
    // 0x2bf504: 0x8c6389c8  lw          $v1, -0x7638($v1)
    ctx->pc = 0x2bf504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937032)));
label_2bf508:
    // 0x2bf508: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2bf508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2bf50c:
    // 0x2bf50c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x2bf50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_2bf510:
    // 0x2bf510: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2bf510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2bf514:
    // 0x2bf514: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2bf514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_2bf518:
    // 0x2bf518: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2bf518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_2bf51c:
    // 0x2bf51c: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x2bf51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
label_2bf520:
    // 0x2bf520: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bf520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2bf524:
    // 0x2bf524: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2bf524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_2bf528:
    // 0x2bf528: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2bf528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_2bf52c:
    // 0x2bf52c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2bf52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_2bf530:
    // 0x2bf530: 0xc0b4a18  jal         func_2D2860
label_2bf534:
    if (ctx->pc == 0x2BF534u) {
        ctx->pc = 0x2BF534u;
            // 0x2bf534: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
        ctx->pc = 0x2BF538u;
        goto label_2bf538;
    }
    ctx->pc = 0x2BF530u;
    SET_GPR_U32(ctx, 31, 0x2BF538u);
    ctx->pc = 0x2BF534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF530u;
            // 0x2bf534: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF538u; }
        if (ctx->pc != 0x2BF538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF538u; }
        if (ctx->pc != 0x2BF538u) { return; }
    }
    ctx->pc = 0x2BF538u;
label_2bf538:
    // 0x2bf538: 0x2604008c  addiu       $a0, $s0, 0x8C
    ctx->pc = 0x2bf538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
label_2bf53c:
    // 0x2bf53c: 0xc0b4a18  jal         func_2D2860
label_2bf540:
    if (ctx->pc == 0x2BF540u) {
        ctx->pc = 0x2BF540u;
            // 0x2bf540: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2BF544u;
        goto label_2bf544;
    }
    ctx->pc = 0x2BF53Cu;
    SET_GPR_U32(ctx, 31, 0x2BF544u);
    ctx->pc = 0x2BF540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF53Cu;
            // 0x2bf540: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF544u; }
        if (ctx->pc != 0x2BF544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2860_0x2d2860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF544u; }
        if (ctx->pc != 0x2BF544u) { return; }
    }
    ctx->pc = 0x2BF544u;
label_2bf544:
    // 0x2bf544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bf544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf548:
    // 0x2bf548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bf548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf54c:
    // 0x2bf54c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf550:
    // 0x2bf550: 0x3e00008  jr          $ra
label_2bf554:
    if (ctx->pc == 0x2BF554u) {
        ctx->pc = 0x2BF554u;
            // 0x2bf554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2BF558u;
        goto label_2bf558;
    }
    ctx->pc = 0x2BF550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF550u;
            // 0x2bf554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF558u;
label_2bf558:
    // 0x2bf558: 0x0  nop
    ctx->pc = 0x2bf558u;
    // NOP
label_2bf55c:
    // 0x2bf55c: 0x0  nop
    ctx->pc = 0x2bf55cu;
    // NOP
}
