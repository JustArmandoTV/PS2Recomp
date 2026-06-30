#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038D2C0
// Address: 0x38d2c0 - 0x38d600
void sub_0038D2C0_0x38d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D2C0_0x38d2c0");
#endif

    switch (ctx->pc) {
        case 0x38d2c0u: goto label_38d2c0;
        case 0x38d2c4u: goto label_38d2c4;
        case 0x38d2c8u: goto label_38d2c8;
        case 0x38d2ccu: goto label_38d2cc;
        case 0x38d2d0u: goto label_38d2d0;
        case 0x38d2d4u: goto label_38d2d4;
        case 0x38d2d8u: goto label_38d2d8;
        case 0x38d2dcu: goto label_38d2dc;
        case 0x38d2e0u: goto label_38d2e0;
        case 0x38d2e4u: goto label_38d2e4;
        case 0x38d2e8u: goto label_38d2e8;
        case 0x38d2ecu: goto label_38d2ec;
        case 0x38d2f0u: goto label_38d2f0;
        case 0x38d2f4u: goto label_38d2f4;
        case 0x38d2f8u: goto label_38d2f8;
        case 0x38d2fcu: goto label_38d2fc;
        case 0x38d300u: goto label_38d300;
        case 0x38d304u: goto label_38d304;
        case 0x38d308u: goto label_38d308;
        case 0x38d30cu: goto label_38d30c;
        case 0x38d310u: goto label_38d310;
        case 0x38d314u: goto label_38d314;
        case 0x38d318u: goto label_38d318;
        case 0x38d31cu: goto label_38d31c;
        case 0x38d320u: goto label_38d320;
        case 0x38d324u: goto label_38d324;
        case 0x38d328u: goto label_38d328;
        case 0x38d32cu: goto label_38d32c;
        case 0x38d330u: goto label_38d330;
        case 0x38d334u: goto label_38d334;
        case 0x38d338u: goto label_38d338;
        case 0x38d33cu: goto label_38d33c;
        case 0x38d340u: goto label_38d340;
        case 0x38d344u: goto label_38d344;
        case 0x38d348u: goto label_38d348;
        case 0x38d34cu: goto label_38d34c;
        case 0x38d350u: goto label_38d350;
        case 0x38d354u: goto label_38d354;
        case 0x38d358u: goto label_38d358;
        case 0x38d35cu: goto label_38d35c;
        case 0x38d360u: goto label_38d360;
        case 0x38d364u: goto label_38d364;
        case 0x38d368u: goto label_38d368;
        case 0x38d36cu: goto label_38d36c;
        case 0x38d370u: goto label_38d370;
        case 0x38d374u: goto label_38d374;
        case 0x38d378u: goto label_38d378;
        case 0x38d37cu: goto label_38d37c;
        case 0x38d380u: goto label_38d380;
        case 0x38d384u: goto label_38d384;
        case 0x38d388u: goto label_38d388;
        case 0x38d38cu: goto label_38d38c;
        case 0x38d390u: goto label_38d390;
        case 0x38d394u: goto label_38d394;
        case 0x38d398u: goto label_38d398;
        case 0x38d39cu: goto label_38d39c;
        case 0x38d3a0u: goto label_38d3a0;
        case 0x38d3a4u: goto label_38d3a4;
        case 0x38d3a8u: goto label_38d3a8;
        case 0x38d3acu: goto label_38d3ac;
        case 0x38d3b0u: goto label_38d3b0;
        case 0x38d3b4u: goto label_38d3b4;
        case 0x38d3b8u: goto label_38d3b8;
        case 0x38d3bcu: goto label_38d3bc;
        case 0x38d3c0u: goto label_38d3c0;
        case 0x38d3c4u: goto label_38d3c4;
        case 0x38d3c8u: goto label_38d3c8;
        case 0x38d3ccu: goto label_38d3cc;
        case 0x38d3d0u: goto label_38d3d0;
        case 0x38d3d4u: goto label_38d3d4;
        case 0x38d3d8u: goto label_38d3d8;
        case 0x38d3dcu: goto label_38d3dc;
        case 0x38d3e0u: goto label_38d3e0;
        case 0x38d3e4u: goto label_38d3e4;
        case 0x38d3e8u: goto label_38d3e8;
        case 0x38d3ecu: goto label_38d3ec;
        case 0x38d3f0u: goto label_38d3f0;
        case 0x38d3f4u: goto label_38d3f4;
        case 0x38d3f8u: goto label_38d3f8;
        case 0x38d3fcu: goto label_38d3fc;
        case 0x38d400u: goto label_38d400;
        case 0x38d404u: goto label_38d404;
        case 0x38d408u: goto label_38d408;
        case 0x38d40cu: goto label_38d40c;
        case 0x38d410u: goto label_38d410;
        case 0x38d414u: goto label_38d414;
        case 0x38d418u: goto label_38d418;
        case 0x38d41cu: goto label_38d41c;
        case 0x38d420u: goto label_38d420;
        case 0x38d424u: goto label_38d424;
        case 0x38d428u: goto label_38d428;
        case 0x38d42cu: goto label_38d42c;
        case 0x38d430u: goto label_38d430;
        case 0x38d434u: goto label_38d434;
        case 0x38d438u: goto label_38d438;
        case 0x38d43cu: goto label_38d43c;
        case 0x38d440u: goto label_38d440;
        case 0x38d444u: goto label_38d444;
        case 0x38d448u: goto label_38d448;
        case 0x38d44cu: goto label_38d44c;
        case 0x38d450u: goto label_38d450;
        case 0x38d454u: goto label_38d454;
        case 0x38d458u: goto label_38d458;
        case 0x38d45cu: goto label_38d45c;
        case 0x38d460u: goto label_38d460;
        case 0x38d464u: goto label_38d464;
        case 0x38d468u: goto label_38d468;
        case 0x38d46cu: goto label_38d46c;
        case 0x38d470u: goto label_38d470;
        case 0x38d474u: goto label_38d474;
        case 0x38d478u: goto label_38d478;
        case 0x38d47cu: goto label_38d47c;
        case 0x38d480u: goto label_38d480;
        case 0x38d484u: goto label_38d484;
        case 0x38d488u: goto label_38d488;
        case 0x38d48cu: goto label_38d48c;
        case 0x38d490u: goto label_38d490;
        case 0x38d494u: goto label_38d494;
        case 0x38d498u: goto label_38d498;
        case 0x38d49cu: goto label_38d49c;
        case 0x38d4a0u: goto label_38d4a0;
        case 0x38d4a4u: goto label_38d4a4;
        case 0x38d4a8u: goto label_38d4a8;
        case 0x38d4acu: goto label_38d4ac;
        case 0x38d4b0u: goto label_38d4b0;
        case 0x38d4b4u: goto label_38d4b4;
        case 0x38d4b8u: goto label_38d4b8;
        case 0x38d4bcu: goto label_38d4bc;
        case 0x38d4c0u: goto label_38d4c0;
        case 0x38d4c4u: goto label_38d4c4;
        case 0x38d4c8u: goto label_38d4c8;
        case 0x38d4ccu: goto label_38d4cc;
        case 0x38d4d0u: goto label_38d4d0;
        case 0x38d4d4u: goto label_38d4d4;
        case 0x38d4d8u: goto label_38d4d8;
        case 0x38d4dcu: goto label_38d4dc;
        case 0x38d4e0u: goto label_38d4e0;
        case 0x38d4e4u: goto label_38d4e4;
        case 0x38d4e8u: goto label_38d4e8;
        case 0x38d4ecu: goto label_38d4ec;
        case 0x38d4f0u: goto label_38d4f0;
        case 0x38d4f4u: goto label_38d4f4;
        case 0x38d4f8u: goto label_38d4f8;
        case 0x38d4fcu: goto label_38d4fc;
        case 0x38d500u: goto label_38d500;
        case 0x38d504u: goto label_38d504;
        case 0x38d508u: goto label_38d508;
        case 0x38d50cu: goto label_38d50c;
        case 0x38d510u: goto label_38d510;
        case 0x38d514u: goto label_38d514;
        case 0x38d518u: goto label_38d518;
        case 0x38d51cu: goto label_38d51c;
        case 0x38d520u: goto label_38d520;
        case 0x38d524u: goto label_38d524;
        case 0x38d528u: goto label_38d528;
        case 0x38d52cu: goto label_38d52c;
        case 0x38d530u: goto label_38d530;
        case 0x38d534u: goto label_38d534;
        case 0x38d538u: goto label_38d538;
        case 0x38d53cu: goto label_38d53c;
        case 0x38d540u: goto label_38d540;
        case 0x38d544u: goto label_38d544;
        case 0x38d548u: goto label_38d548;
        case 0x38d54cu: goto label_38d54c;
        case 0x38d550u: goto label_38d550;
        case 0x38d554u: goto label_38d554;
        case 0x38d558u: goto label_38d558;
        case 0x38d55cu: goto label_38d55c;
        case 0x38d560u: goto label_38d560;
        case 0x38d564u: goto label_38d564;
        case 0x38d568u: goto label_38d568;
        case 0x38d56cu: goto label_38d56c;
        case 0x38d570u: goto label_38d570;
        case 0x38d574u: goto label_38d574;
        case 0x38d578u: goto label_38d578;
        case 0x38d57cu: goto label_38d57c;
        case 0x38d580u: goto label_38d580;
        case 0x38d584u: goto label_38d584;
        case 0x38d588u: goto label_38d588;
        case 0x38d58cu: goto label_38d58c;
        case 0x38d590u: goto label_38d590;
        case 0x38d594u: goto label_38d594;
        case 0x38d598u: goto label_38d598;
        case 0x38d59cu: goto label_38d59c;
        case 0x38d5a0u: goto label_38d5a0;
        case 0x38d5a4u: goto label_38d5a4;
        case 0x38d5a8u: goto label_38d5a8;
        case 0x38d5acu: goto label_38d5ac;
        case 0x38d5b0u: goto label_38d5b0;
        case 0x38d5b4u: goto label_38d5b4;
        case 0x38d5b8u: goto label_38d5b8;
        case 0x38d5bcu: goto label_38d5bc;
        case 0x38d5c0u: goto label_38d5c0;
        case 0x38d5c4u: goto label_38d5c4;
        case 0x38d5c8u: goto label_38d5c8;
        case 0x38d5ccu: goto label_38d5cc;
        case 0x38d5d0u: goto label_38d5d0;
        case 0x38d5d4u: goto label_38d5d4;
        case 0x38d5d8u: goto label_38d5d8;
        case 0x38d5dcu: goto label_38d5dc;
        case 0x38d5e0u: goto label_38d5e0;
        case 0x38d5e4u: goto label_38d5e4;
        case 0x38d5e8u: goto label_38d5e8;
        case 0x38d5ecu: goto label_38d5ec;
        case 0x38d5f0u: goto label_38d5f0;
        case 0x38d5f4u: goto label_38d5f4;
        case 0x38d5f8u: goto label_38d5f8;
        case 0x38d5fcu: goto label_38d5fc;
        default: break;
    }

    ctx->pc = 0x38d2c0u;

label_38d2c0:
    // 0x38d2c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_38d2c4:
    // 0x38d2c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38d2c8:
    // 0x38d2c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38d2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38d2cc:
    // 0x38d2cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38d2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38d2d0:
    // 0x38d2d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38d2d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d2d4:
    // 0x38d2d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38d2d8:
    // 0x38d2d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38d2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38d2dc:
    // 0x38d2dc: 0xac8600a4  sw          $a2, 0xA4($a0)
    ctx->pc = 0x38d2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 6));
label_38d2e0:
    // 0x38d2e0: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x38d2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_38d2e4:
    // 0x38d2e4: 0x38a30002  xori        $v1, $a1, 0x2
    ctx->pc = 0x38d2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
label_38d2e8:
    // 0x38d2e8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x38d2e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38d2ec:
    // 0x38d2ec: 0x146000aa  bnez        $v1, . + 4 + (0xAA << 2)
label_38d2f0:
    if (ctx->pc == 0x38D2F0u) {
        ctx->pc = 0x38D2F0u;
            // 0x38d2f0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D2F4u;
        goto label_38d2f4;
    }
    ctx->pc = 0x38D2ECu;
    {
        const bool branch_taken_0x38d2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D2ECu;
            // 0x38d2f0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d2ec) {
            ctx->pc = 0x38D598u;
            goto label_38d598;
        }
    }
    ctx->pc = 0x38D2F4u;
label_38d2f4:
    // 0x38d2f4: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x38d2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_38d2f8:
    // 0x38d2f8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x38d2f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38d2fc:
    // 0x38d2fc: 0x546000a7  bnel        $v1, $zero, . + 4 + (0xA7 << 2)
label_38d300:
    if (ctx->pc == 0x38D300u) {
        ctx->pc = 0x38D300u;
            // 0x38d300: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x38D304u;
        goto label_38d304;
    }
    ctx->pc = 0x38D2FCu;
    {
        const bool branch_taken_0x38d2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d2fc) {
            ctx->pc = 0x38D300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D2FCu;
            // 0x38d300: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D59Cu;
            goto label_38d59c;
        }
    }
    ctx->pc = 0x38D304u;
label_38d304:
    // 0x38d304: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x38d304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d308:
    // 0x38d308: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x38d308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_38d30c:
    // 0x38d30c: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
label_38d310:
    if (ctx->pc == 0x38D310u) {
        ctx->pc = 0x38D314u;
        goto label_38d314;
    }
    ctx->pc = 0x38D30Cu;
    {
        const bool branch_taken_0x38d30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d30c) {
            ctx->pc = 0x38D598u;
            goto label_38d598;
        }
    }
    ctx->pc = 0x38D314u;
label_38d314:
    // 0x38d314: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x38d314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_38d318:
    // 0x38d318: 0x50600043  beql        $v1, $zero, . + 4 + (0x43 << 2)
label_38d31c:
    if (ctx->pc == 0x38D31Cu) {
        ctx->pc = 0x38D31Cu;
            // 0x38d31c: 0x8e460050  lw          $a2, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x38D320u;
        goto label_38d320;
    }
    ctx->pc = 0x38D318u;
    {
        const bool branch_taken_0x38d318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d318) {
            ctx->pc = 0x38D31Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D318u;
            // 0x38d31c: 0x8e460050  lw          $a2, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D428u;
            goto label_38d428;
        }
    }
    ctx->pc = 0x38D320u;
label_38d320:
    // 0x38d320: 0x8e020a6c  lw          $v0, 0xA6C($s0)
    ctx->pc = 0x38d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2668)));
label_38d324:
    // 0x38d324: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_38d328:
    if (ctx->pc == 0x38D328u) {
        ctx->pc = 0x38D32Cu;
        goto label_38d32c;
    }
    ctx->pc = 0x38D324u;
    {
        const bool branch_taken_0x38d324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d324) {
            ctx->pc = 0x38D424u;
            goto label_38d424;
        }
    }
    ctx->pc = 0x38D32Cu;
label_38d32c:
    // 0x38d32c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x38d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_38d330:
    // 0x38d330: 0x1450003c  bne         $v0, $s0, . + 4 + (0x3C << 2)
label_38d334:
    if (ctx->pc == 0x38D334u) {
        ctx->pc = 0x38D338u;
        goto label_38d338;
    }
    ctx->pc = 0x38D330u;
    {
        const bool branch_taken_0x38d330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x38d330) {
            ctx->pc = 0x38D424u;
            goto label_38d424;
        }
    }
    ctx->pc = 0x38D338u;
label_38d338:
    // 0x38d338: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x38d338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_38d33c:
    // 0x38d33c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x38d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38d340:
    // 0x38d340: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x38d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_38d344:
    // 0x38d344: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x38d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_38d348:
    // 0x38d348: 0x10430036  beq         $v0, $v1, . + 4 + (0x36 << 2)
label_38d34c:
    if (ctx->pc == 0x38D34Cu) {
        ctx->pc = 0x38D350u;
        goto label_38d350;
    }
    ctx->pc = 0x38D348u;
    {
        const bool branch_taken_0x38d348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x38d348) {
            ctx->pc = 0x38D424u;
            goto label_38d424;
        }
    }
    ctx->pc = 0x38D350u;
label_38d350:
    // 0x38d350: 0xc0e32a4  jal         func_38CA90
label_38d354:
    if (ctx->pc == 0x38D354u) {
        ctx->pc = 0x38D354u;
            // 0x38d354: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38D358u;
        goto label_38d358;
    }
    ctx->pc = 0x38D350u;
    SET_GPR_U32(ctx, 31, 0x38D358u);
    ctx->pc = 0x38D354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D350u;
            // 0x38d354: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D358u; }
        if (ctx->pc != 0x38D358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D358u; }
        if (ctx->pc != 0x38D358u) { return; }
    }
    ctx->pc = 0x38D358u;
label_38d358:
    // 0x38d358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d35c:
    // 0x38d35c: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x38d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_38d360:
    // 0x38d360: 0xc0e082c  jal         func_3820B0
label_38d364:
    if (ctx->pc == 0x38D364u) {
        ctx->pc = 0x38D364u;
            // 0x38d364: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x38D368u;
        goto label_38d368;
    }
    ctx->pc = 0x38D360u;
    SET_GPR_U32(ctx, 31, 0x38D368u);
    ctx->pc = 0x38D364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D360u;
            // 0x38d364: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D368u; }
        if (ctx->pc != 0x38D368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D368u; }
        if (ctx->pc != 0x38D368u) { return; }
    }
    ctx->pc = 0x38D368u;
label_38d368:
    // 0x38d368: 0xc0e0828  jal         func_3820A0
label_38d36c:
    if (ctx->pc == 0x38D36Cu) {
        ctx->pc = 0x38D36Cu;
            // 0x38d36c: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x38D370u;
        goto label_38d370;
    }
    ctx->pc = 0x38D368u;
    SET_GPR_U32(ctx, 31, 0x38D370u);
    ctx->pc = 0x38D36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D368u;
            // 0x38d36c: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D370u; }
        if (ctx->pc != 0x38D370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D370u; }
        if (ctx->pc != 0x38D370u) { return; }
    }
    ctx->pc = 0x38D370u;
label_38d370:
    // 0x38d370: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x38d370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_38d374:
    // 0x38d374: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_38d378:
    if (ctx->pc == 0x38D378u) {
        ctx->pc = 0x38D378u;
            // 0x38d378: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x38D37Cu;
        goto label_38d37c;
    }
    ctx->pc = 0x38D374u;
    {
        const bool branch_taken_0x38d374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d374) {
            ctx->pc = 0x38D378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D374u;
            // 0x38d378: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D3ACu;
            goto label_38d3ac;
        }
    }
    ctx->pc = 0x38D37Cu;
label_38d37c:
    // 0x38d37c: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x38d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d380:
    // 0x38d380: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38d380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38d384:
    // 0x38d384: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38d388:
    if (ctx->pc == 0x38D388u) {
        ctx->pc = 0x38D38Cu;
        goto label_38d38c;
    }
    ctx->pc = 0x38D384u;
    {
        const bool branch_taken_0x38d384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d384) {
            ctx->pc = 0x38D3A8u;
            goto label_38d3a8;
        }
    }
    ctx->pc = 0x38D38Cu;
label_38d38c:
    // 0x38d38c: 0xc0dc408  jal         func_371020
label_38d390:
    if (ctx->pc == 0x38D390u) {
        ctx->pc = 0x38D390u;
            // 0x38d390: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x38D394u;
        goto label_38d394;
    }
    ctx->pc = 0x38D38Cu;
    SET_GPR_U32(ctx, 31, 0x38D394u);
    ctx->pc = 0x38D390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D38Cu;
            // 0x38d390: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D394u; }
        if (ctx->pc != 0x38D394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D394u; }
        if (ctx->pc != 0x38D394u) { return; }
    }
    ctx->pc = 0x38D394u;
label_38d394:
    // 0x38d394: 0xc0e0824  jal         func_382090
label_38d398:
    if (ctx->pc == 0x38D398u) {
        ctx->pc = 0x38D398u;
            // 0x38d398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D39Cu;
        goto label_38d39c;
    }
    ctx->pc = 0x38D394u;
    SET_GPR_U32(ctx, 31, 0x38D39Cu);
    ctx->pc = 0x38D398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D394u;
            // 0x38d398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D39Cu; }
        if (ctx->pc != 0x38D39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D39Cu; }
        if (ctx->pc != 0x38D39Cu) { return; }
    }
    ctx->pc = 0x38D39Cu;
label_38d39c:
    // 0x38d39c: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x38d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_38d3a0:
    // 0x38d3a0: 0xc0e081c  jal         func_382070
label_38d3a4:
    if (ctx->pc == 0x38D3A4u) {
        ctx->pc = 0x38D3A4u;
            // 0x38d3a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D3A8u;
        goto label_38d3a8;
    }
    ctx->pc = 0x38D3A0u;
    SET_GPR_U32(ctx, 31, 0x38D3A8u);
    ctx->pc = 0x38D3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D3A0u;
            // 0x38d3a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3A8u; }
        if (ctx->pc != 0x38D3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3A8u; }
        if (ctx->pc != 0x38D3A8u) { return; }
    }
    ctx->pc = 0x38D3A8u;
label_38d3a8:
    // 0x38d3a8: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x38d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d3ac:
    // 0x38d3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38d3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d3b0:
    // 0x38d3b0: 0xc0e080c  jal         func_382030
label_38d3b4:
    if (ctx->pc == 0x38D3B4u) {
        ctx->pc = 0x38D3B4u;
            // 0x38d3b4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x38D3B8u;
        goto label_38d3b8;
    }
    ctx->pc = 0x38D3B0u;
    SET_GPR_U32(ctx, 31, 0x38D3B8u);
    ctx->pc = 0x38D3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D3B0u;
            // 0x38d3b4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3B8u; }
        if (ctx->pc != 0x38D3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3B8u; }
        if (ctx->pc != 0x38D3B8u) { return; }
    }
    ctx->pc = 0x38D3B8u;
label_38d3b8:
    // 0x38d3b8: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x38d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d3bc:
    // 0x38d3bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38d3c0:
    // 0x38d3c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38d3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d3c4:
    // 0x38d3c4: 0xc08914c  jal         func_224530
label_38d3c8:
    if (ctx->pc == 0x38D3C8u) {
        ctx->pc = 0x38D3C8u;
            // 0x38d3c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D3CCu;
        goto label_38d3cc;
    }
    ctx->pc = 0x38D3C4u;
    SET_GPR_U32(ctx, 31, 0x38D3CCu);
    ctx->pc = 0x38D3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D3C4u;
            // 0x38d3c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3CCu; }
        if (ctx->pc != 0x38D3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3CCu; }
        if (ctx->pc != 0x38D3CCu) { return; }
    }
    ctx->pc = 0x38D3CCu;
label_38d3cc:
    // 0x38d3cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38d3ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38d3d0:
    // 0x38d3d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x38d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38d3d4:
    // 0x38d3d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x38d3d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_38d3d8:
    // 0x38d3d8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x38d3d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_38d3dc:
    // 0x38d3dc: 0xc0b6df0  jal         func_2DB7C0
label_38d3e0:
    if (ctx->pc == 0x38D3E0u) {
        ctx->pc = 0x38D3E0u;
            // 0x38d3e0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38D3E4u;
        goto label_38d3e4;
    }
    ctx->pc = 0x38D3DCu;
    SET_GPR_U32(ctx, 31, 0x38D3E4u);
    ctx->pc = 0x38D3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D3DCu;
            // 0x38d3e0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3E4u; }
        if (ctx->pc != 0x38D3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3E4u; }
        if (ctx->pc != 0x38D3E4u) { return; }
    }
    ctx->pc = 0x38D3E4u;
label_38d3e4:
    // 0x38d3e4: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x38d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d3e8:
    // 0x38d3e8: 0xc0e07f8  jal         func_381FE0
label_38d3ec:
    if (ctx->pc == 0x38D3ECu) {
        ctx->pc = 0x38D3ECu;
            // 0x38d3ec: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38D3F0u;
        goto label_38d3f0;
    }
    ctx->pc = 0x38D3E8u;
    SET_GPR_U32(ctx, 31, 0x38D3F0u);
    ctx->pc = 0x38D3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D3E8u;
            // 0x38d3ec: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3F0u; }
        if (ctx->pc != 0x38D3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3F0u; }
        if (ctx->pc != 0x38D3F0u) { return; }
    }
    ctx->pc = 0x38D3F0u;
label_38d3f0:
    // 0x38d3f0: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x38d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d3f4:
    // 0x38d3f4: 0xc0dc3f4  jal         func_370FD0
label_38d3f8:
    if (ctx->pc == 0x38D3F8u) {
        ctx->pc = 0x38D3F8u;
            // 0x38d3f8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38D3FCu;
        goto label_38d3fc;
    }
    ctx->pc = 0x38D3F4u;
    SET_GPR_U32(ctx, 31, 0x38D3FCu);
    ctx->pc = 0x38D3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D3F4u;
            // 0x38d3f8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3FCu; }
        if (ctx->pc != 0x38D3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D3FCu; }
        if (ctx->pc != 0x38D3FCu) { return; }
    }
    ctx->pc = 0x38D3FCu;
label_38d3fc:
    // 0x38d3fc: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x38d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d400:
    // 0x38d400: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x38d400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_38d404:
    // 0x38d404: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
label_38d408:
    if (ctx->pc == 0x38D408u) {
        ctx->pc = 0x38D40Cu;
        goto label_38d40c;
    }
    ctx->pc = 0x38D404u;
    {
        const bool branch_taken_0x38d404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d404) {
            ctx->pc = 0x38D598u;
            goto label_38d598;
        }
    }
    ctx->pc = 0x38D40Cu;
label_38d40c:
    // 0x38d40c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x38d40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38d410:
    // 0x38d410: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x38d410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_38d414:
    // 0x38d414: 0x320f809  jalr        $t9
label_38d418:
    if (ctx->pc == 0x38D418u) {
        ctx->pc = 0x38D418u;
            // 0x38d418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D41Cu;
        goto label_38d41c;
    }
    ctx->pc = 0x38D414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D41Cu);
        ctx->pc = 0x38D418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D414u;
            // 0x38d418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D41Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D41Cu; }
            if (ctx->pc != 0x38D41Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38D41Cu;
label_38d41c:
    // 0x38d41c: 0x1000005e  b           . + 4 + (0x5E << 2)
label_38d420:
    if (ctx->pc == 0x38D420u) {
        ctx->pc = 0x38D424u;
        goto label_38d424;
    }
    ctx->pc = 0x38D41Cu;
    {
        const bool branch_taken_0x38d41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d41c) {
            ctx->pc = 0x38D598u;
            goto label_38d598;
        }
    }
    ctx->pc = 0x38D424u;
label_38d424:
    // 0x38d424: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x38d424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d428:
    // 0x38d428: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x38d428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
label_38d42c:
    // 0x38d42c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38d42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38d430:
    // 0x38d430: 0xc0e2b50  jal         func_38AD40
label_38d434:
    if (ctx->pc == 0x38D434u) {
        ctx->pc = 0x38D434u;
            // 0x38d434: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D438u;
        goto label_38d438;
    }
    ctx->pc = 0x38D430u;
    SET_GPR_U32(ctx, 31, 0x38D438u);
    ctx->pc = 0x38D434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D430u;
            // 0x38d434: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38AD40u;
    if (runtime->hasFunction(0x38AD40u)) {
        auto targetFn = runtime->lookupFunction(0x38AD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D438u; }
        if (ctx->pc != 0x38D438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038AD40_0x38ad40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D438u; }
        if (ctx->pc != 0x38D438u) { return; }
    }
    ctx->pc = 0x38D438u;
label_38d438:
    // 0x38d438: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x38d438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_38d43c:
    // 0x38d43c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d440:
    // 0x38d440: 0x5483001f  bnel        $a0, $v1, . + 4 + (0x1F << 2)
label_38d444:
    if (ctx->pc == 0x38D444u) {
        ctx->pc = 0x38D444u;
            // 0x38d444: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x38D448u;
        goto label_38d448;
    }
    ctx->pc = 0x38D440u;
    {
        const bool branch_taken_0x38d440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38d440) {
            ctx->pc = 0x38D444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D440u;
            // 0x38d444: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D4C0u;
            goto label_38d4c0;
        }
    }
    ctx->pc = 0x38D448u;
label_38d448:
    // 0x38d448: 0xae430084  sw          $v1, 0x84($s2)
    ctx->pc = 0x38d448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
label_38d44c:
    // 0x38d44c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38d450:
    // 0x38d450: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x38d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d454:
    // 0x38d454: 0xe6400074  swc1        $f0, 0x74($s2)
    ctx->pc = 0x38d454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
label_38d458:
    // 0x38d458: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x38d458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
label_38d45c:
    // 0x38d45c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x38d45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38d460:
    // 0x38d460: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x38d460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_38d464:
    // 0x38d464: 0x320f809  jalr        $t9
label_38d468:
    if (ctx->pc == 0x38D468u) {
        ctx->pc = 0x38D468u;
            // 0x38d468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D46Cu;
        goto label_38d46c;
    }
    ctx->pc = 0x38D464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D46Cu);
        ctx->pc = 0x38D468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D464u;
            // 0x38d468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D46Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D46Cu; }
            if (ctx->pc != 0x38D46Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38D46Cu;
label_38d46c:
    // 0x38d46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d470:
    // 0x38d470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38d470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d474:
    // 0x38d474: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x38d474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_38d478:
    // 0x38d478: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x38d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_38d47c:
    // 0x38d47c: 0xa242004c  sb          $v0, 0x4C($s2)
    ctx->pc = 0x38d47cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 2));
label_38d480:
    // 0x38d480: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x38d480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38d484:
    // 0x38d484: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x38d484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_38d488:
    // 0x38d488: 0x320f809  jalr        $t9
label_38d48c:
    if (ctx->pc == 0x38D48Cu) {
        ctx->pc = 0x38D48Cu;
            // 0x38d48c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D490u;
        goto label_38d490;
    }
    ctx->pc = 0x38D488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D490u);
        ctx->pc = 0x38D48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D488u;
            // 0x38d48c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D490u; }
            if (ctx->pc != 0x38D490u) { return; }
        }
        }
    }
    ctx->pc = 0x38D490u;
label_38d490:
    // 0x38d490: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x38d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d494:
    // 0x38d494: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x38d494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_38d498:
    // 0x38d498: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_38d49c:
    if (ctx->pc == 0x38D49Cu) {
        ctx->pc = 0x38D4A0u;
        goto label_38d4a0;
    }
    ctx->pc = 0x38D498u;
    {
        const bool branch_taken_0x38d498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d498) {
            ctx->pc = 0x38D598u;
            goto label_38d598;
        }
    }
    ctx->pc = 0x38D4A0u;
label_38d4a0:
    // 0x38d4a0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x38d4a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38d4a4:
    // 0x38d4a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38d4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38d4a8:
    // 0x38d4a8: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x38d4a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_38d4ac:
    // 0x38d4ac: 0x320f809  jalr        $t9
label_38d4b0:
    if (ctx->pc == 0x38D4B0u) {
        ctx->pc = 0x38D4B0u;
            // 0x38d4b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D4B4u;
        goto label_38d4b4;
    }
    ctx->pc = 0x38D4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D4B4u);
        ctx->pc = 0x38D4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D4ACu;
            // 0x38d4b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D4B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D4B4u; }
            if (ctx->pc != 0x38D4B4u) { return; }
        }
        }
    }
    ctx->pc = 0x38D4B4u;
label_38d4b4:
    // 0x38d4b4: 0x10000038  b           . + 4 + (0x38 << 2)
label_38d4b8:
    if (ctx->pc == 0x38D4B8u) {
        ctx->pc = 0x38D4BCu;
        goto label_38d4bc;
    }
    ctx->pc = 0x38D4B4u;
    {
        const bool branch_taken_0x38d4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d4b4) {
            ctx->pc = 0x38D598u;
            goto label_38d598;
        }
    }
    ctx->pc = 0x38D4BCu;
label_38d4bc:
    // 0x38d4bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38d4c0:
    // 0x38d4c0: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
label_38d4c4:
    if (ctx->pc == 0x38D4C4u) {
        ctx->pc = 0x38D4C8u;
        goto label_38d4c8;
    }
    ctx->pc = 0x38D4C0u;
    {
        const bool branch_taken_0x38d4c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38d4c0) {
            ctx->pc = 0x38D598u;
            goto label_38d598;
        }
    }
    ctx->pc = 0x38D4C8u;
label_38d4c8:
    // 0x38d4c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38d4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38d4cc:
    // 0x38d4cc: 0xc0e32a4  jal         func_38CA90
label_38d4d0:
    if (ctx->pc == 0x38D4D0u) {
        ctx->pc = 0x38D4D0u;
            // 0x38d4d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38D4D4u;
        goto label_38d4d4;
    }
    ctx->pc = 0x38D4CCu;
    SET_GPR_U32(ctx, 31, 0x38D4D4u);
    ctx->pc = 0x38D4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D4CCu;
            // 0x38d4d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D4D4u; }
        if (ctx->pc != 0x38D4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D4D4u; }
        if (ctx->pc != 0x38D4D4u) { return; }
    }
    ctx->pc = 0x38D4D4u;
label_38d4d4:
    // 0x38d4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d4d8:
    // 0x38d4d8: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x38d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_38d4dc:
    // 0x38d4dc: 0xc0e082c  jal         func_3820B0
label_38d4e0:
    if (ctx->pc == 0x38D4E0u) {
        ctx->pc = 0x38D4E0u;
            // 0x38d4e0: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x38D4E4u;
        goto label_38d4e4;
    }
    ctx->pc = 0x38D4DCu;
    SET_GPR_U32(ctx, 31, 0x38D4E4u);
    ctx->pc = 0x38D4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D4DCu;
            // 0x38d4e0: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D4E4u; }
        if (ctx->pc != 0x38D4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D4E4u; }
        if (ctx->pc != 0x38D4E4u) { return; }
    }
    ctx->pc = 0x38D4E4u;
label_38d4e4:
    // 0x38d4e4: 0xc0e0828  jal         func_3820A0
label_38d4e8:
    if (ctx->pc == 0x38D4E8u) {
        ctx->pc = 0x38D4E8u;
            // 0x38d4e8: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x38D4ECu;
        goto label_38d4ec;
    }
    ctx->pc = 0x38D4E4u;
    SET_GPR_U32(ctx, 31, 0x38D4ECu);
    ctx->pc = 0x38D4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D4E4u;
            // 0x38d4e8: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D4ECu; }
        if (ctx->pc != 0x38D4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D4ECu; }
        if (ctx->pc != 0x38D4ECu) { return; }
    }
    ctx->pc = 0x38D4ECu;
label_38d4ec:
    // 0x38d4ec: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x38d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_38d4f0:
    // 0x38d4f0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_38d4f4:
    if (ctx->pc == 0x38D4F4u) {
        ctx->pc = 0x38D4F4u;
            // 0x38d4f4: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x38D4F8u;
        goto label_38d4f8;
    }
    ctx->pc = 0x38D4F0u;
    {
        const bool branch_taken_0x38d4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d4f0) {
            ctx->pc = 0x38D4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D4F0u;
            // 0x38d4f4: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D528u;
            goto label_38d528;
        }
    }
    ctx->pc = 0x38D4F8u;
label_38d4f8:
    // 0x38d4f8: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x38d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d4fc:
    // 0x38d4fc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38d500:
    // 0x38d500: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38d504:
    if (ctx->pc == 0x38D504u) {
        ctx->pc = 0x38D508u;
        goto label_38d508;
    }
    ctx->pc = 0x38D500u;
    {
        const bool branch_taken_0x38d500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d500) {
            ctx->pc = 0x38D524u;
            goto label_38d524;
        }
    }
    ctx->pc = 0x38D508u;
label_38d508:
    // 0x38d508: 0xc0dc408  jal         func_371020
label_38d50c:
    if (ctx->pc == 0x38D50Cu) {
        ctx->pc = 0x38D50Cu;
            // 0x38d50c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x38D510u;
        goto label_38d510;
    }
    ctx->pc = 0x38D508u;
    SET_GPR_U32(ctx, 31, 0x38D510u);
    ctx->pc = 0x38D50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D508u;
            // 0x38d50c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D510u; }
        if (ctx->pc != 0x38D510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D510u; }
        if (ctx->pc != 0x38D510u) { return; }
    }
    ctx->pc = 0x38D510u;
label_38d510:
    // 0x38d510: 0xc0e0824  jal         func_382090
label_38d514:
    if (ctx->pc == 0x38D514u) {
        ctx->pc = 0x38D514u;
            // 0x38d514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D518u;
        goto label_38d518;
    }
    ctx->pc = 0x38D510u;
    SET_GPR_U32(ctx, 31, 0x38D518u);
    ctx->pc = 0x38D514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D510u;
            // 0x38d514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D518u; }
        if (ctx->pc != 0x38D518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D518u; }
        if (ctx->pc != 0x38D518u) { return; }
    }
    ctx->pc = 0x38D518u;
label_38d518:
    // 0x38d518: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x38d518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_38d51c:
    // 0x38d51c: 0xc0e081c  jal         func_382070
label_38d520:
    if (ctx->pc == 0x38D520u) {
        ctx->pc = 0x38D520u;
            // 0x38d520: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D524u;
        goto label_38d524;
    }
    ctx->pc = 0x38D51Cu;
    SET_GPR_U32(ctx, 31, 0x38D524u);
    ctx->pc = 0x38D520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D51Cu;
            // 0x38d520: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D524u; }
        if (ctx->pc != 0x38D524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D524u; }
        if (ctx->pc != 0x38D524u) { return; }
    }
    ctx->pc = 0x38D524u;
label_38d524:
    // 0x38d524: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x38d524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d528:
    // 0x38d528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38d528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d52c:
    // 0x38d52c: 0xc0e080c  jal         func_382030
label_38d530:
    if (ctx->pc == 0x38D530u) {
        ctx->pc = 0x38D530u;
            // 0x38d530: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x38D534u;
        goto label_38d534;
    }
    ctx->pc = 0x38D52Cu;
    SET_GPR_U32(ctx, 31, 0x38D534u);
    ctx->pc = 0x38D530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D52Cu;
            // 0x38d530: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D534u; }
        if (ctx->pc != 0x38D534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D534u; }
        if (ctx->pc != 0x38D534u) { return; }
    }
    ctx->pc = 0x38D534u;
label_38d534:
    // 0x38d534: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x38d534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d538:
    // 0x38d538: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38d538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38d53c:
    // 0x38d53c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38d53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d540:
    // 0x38d540: 0xc08914c  jal         func_224530
label_38d544:
    if (ctx->pc == 0x38D544u) {
        ctx->pc = 0x38D544u;
            // 0x38d544: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D548u;
        goto label_38d548;
    }
    ctx->pc = 0x38D540u;
    SET_GPR_U32(ctx, 31, 0x38D548u);
    ctx->pc = 0x38D544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D540u;
            // 0x38d544: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D548u; }
        if (ctx->pc != 0x38D548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D548u; }
        if (ctx->pc != 0x38D548u) { return; }
    }
    ctx->pc = 0x38D548u;
label_38d548:
    // 0x38d548: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38d548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38d54c:
    // 0x38d54c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x38d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_38d550:
    // 0x38d550: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x38d550u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_38d554:
    // 0x38d554: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x38d554u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_38d558:
    // 0x38d558: 0xc0b6df0  jal         func_2DB7C0
label_38d55c:
    if (ctx->pc == 0x38D55Cu) {
        ctx->pc = 0x38D55Cu;
            // 0x38d55c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38D560u;
        goto label_38d560;
    }
    ctx->pc = 0x38D558u;
    SET_GPR_U32(ctx, 31, 0x38D560u);
    ctx->pc = 0x38D55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D558u;
            // 0x38d55c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D560u; }
        if (ctx->pc != 0x38D560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D560u; }
        if (ctx->pc != 0x38D560u) { return; }
    }
    ctx->pc = 0x38D560u;
label_38d560:
    // 0x38d560: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x38d560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d564:
    // 0x38d564: 0xc0e07f8  jal         func_381FE0
label_38d568:
    if (ctx->pc == 0x38D568u) {
        ctx->pc = 0x38D568u;
            // 0x38d568: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x38D56Cu;
        goto label_38d56c;
    }
    ctx->pc = 0x38D564u;
    SET_GPR_U32(ctx, 31, 0x38D56Cu);
    ctx->pc = 0x38D568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D564u;
            // 0x38d568: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D56Cu; }
        if (ctx->pc != 0x38D56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D56Cu; }
        if (ctx->pc != 0x38D56Cu) { return; }
    }
    ctx->pc = 0x38D56Cu;
label_38d56c:
    // 0x38d56c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x38d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d570:
    // 0x38d570: 0xc0dc3f4  jal         func_370FD0
label_38d574:
    if (ctx->pc == 0x38D574u) {
        ctx->pc = 0x38D574u;
            // 0x38d574: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x38D578u;
        goto label_38d578;
    }
    ctx->pc = 0x38D570u;
    SET_GPR_U32(ctx, 31, 0x38D578u);
    ctx->pc = 0x38D574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D570u;
            // 0x38d574: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D578u; }
        if (ctx->pc != 0x38D578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D578u; }
        if (ctx->pc != 0x38D578u) { return; }
    }
    ctx->pc = 0x38D578u;
label_38d578:
    // 0x38d578: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x38d578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d57c:
    // 0x38d57c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x38d57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_38d580:
    // 0x38d580: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_38d584:
    if (ctx->pc == 0x38D584u) {
        ctx->pc = 0x38D588u;
        goto label_38d588;
    }
    ctx->pc = 0x38D580u;
    {
        const bool branch_taken_0x38d580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d580) {
            ctx->pc = 0x38D598u;
            goto label_38d598;
        }
    }
    ctx->pc = 0x38D588u;
label_38d588:
    // 0x38d588: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x38d588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38d58c:
    // 0x38d58c: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x38d58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_38d590:
    // 0x38d590: 0x320f809  jalr        $t9
label_38d594:
    if (ctx->pc == 0x38D594u) {
        ctx->pc = 0x38D594u;
            // 0x38d594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D598u;
        goto label_38d598;
    }
    ctx->pc = 0x38D590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D598u);
        ctx->pc = 0x38D594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D590u;
            // 0x38d594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D598u; }
            if (ctx->pc != 0x38D598u) { return; }
        }
        }
    }
    ctx->pc = 0x38D598u;
label_38d598:
    // 0x38d598: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38d598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38d59c:
    // 0x38d59c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38d59cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38d5a0:
    // 0x38d5a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38d5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38d5a4:
    // 0x38d5a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38d5a8:
    // 0x38d5a8: 0x3e00008  jr          $ra
label_38d5ac:
    if (ctx->pc == 0x38D5ACu) {
        ctx->pc = 0x38D5ACu;
            // 0x38d5ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x38D5B0u;
        goto label_38d5b0;
    }
    ctx->pc = 0x38D5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D5A8u;
            // 0x38d5ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38D5B0u;
label_38d5b0:
    // 0x38d5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38d5b4:
    // 0x38d5b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38d5b8:
    // 0x38d5b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38d5bc:
    // 0x38d5bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38d5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d5c0:
    // 0x38d5c0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x38d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38d5c4:
    // 0x38d5c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_38d5c8:
    if (ctx->pc == 0x38D5C8u) {
        ctx->pc = 0x38D5C8u;
            // 0x38d5c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x38D5CCu;
        goto label_38d5cc;
    }
    ctx->pc = 0x38D5C4u;
    {
        const bool branch_taken_0x38d5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d5c4) {
            ctx->pc = 0x38D5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D5C4u;
            // 0x38d5c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D5E0u;
            goto label_38d5e0;
        }
    }
    ctx->pc = 0x38D5CCu;
label_38d5cc:
    // 0x38d5cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38d5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38d5d0:
    // 0x38d5d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x38d5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_38d5d4:
    // 0x38d5d4: 0x320f809  jalr        $t9
label_38d5d8:
    if (ctx->pc == 0x38D5D8u) {
        ctx->pc = 0x38D5D8u;
            // 0x38d5d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38D5DCu;
        goto label_38d5dc;
    }
    ctx->pc = 0x38D5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D5DCu);
        ctx->pc = 0x38D5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D5D4u;
            // 0x38d5d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D5DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D5DCu; }
            if (ctx->pc != 0x38D5DCu) { return; }
        }
        }
    }
    ctx->pc = 0x38D5DCu;
label_38d5dc:
    // 0x38d5dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x38d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_38d5e0:
    // 0x38d5e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38d5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38d5e4:
    // 0x38d5e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38d5e8:
    // 0x38d5e8: 0x3e00008  jr          $ra
label_38d5ec:
    if (ctx->pc == 0x38D5ECu) {
        ctx->pc = 0x38D5ECu;
            // 0x38d5ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x38D5F0u;
        goto label_38d5f0;
    }
    ctx->pc = 0x38D5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D5E8u;
            // 0x38d5ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38D5F0u;
label_38d5f0:
    // 0x38d5f0: 0x3e00008  jr          $ra
label_38d5f4:
    if (ctx->pc == 0x38D5F4u) {
        ctx->pc = 0x38D5F8u;
        goto label_38d5f8;
    }
    ctx->pc = 0x38D5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38D5F8u;
label_38d5f8:
    // 0x38d5f8: 0x0  nop
    ctx->pc = 0x38d5f8u;
    // NOP
label_38d5fc:
    // 0x38d5fc: 0x0  nop
    ctx->pc = 0x38d5fcu;
    // NOP
}
