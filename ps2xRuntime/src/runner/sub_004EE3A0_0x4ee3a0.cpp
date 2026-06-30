#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EE3A0
// Address: 0x4ee3a0 - 0x4ee630
void sub_004EE3A0_0x4ee3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE3A0_0x4ee3a0");
#endif

    switch (ctx->pc) {
        case 0x4ee3a0u: goto label_4ee3a0;
        case 0x4ee3a4u: goto label_4ee3a4;
        case 0x4ee3a8u: goto label_4ee3a8;
        case 0x4ee3acu: goto label_4ee3ac;
        case 0x4ee3b0u: goto label_4ee3b0;
        case 0x4ee3b4u: goto label_4ee3b4;
        case 0x4ee3b8u: goto label_4ee3b8;
        case 0x4ee3bcu: goto label_4ee3bc;
        case 0x4ee3c0u: goto label_4ee3c0;
        case 0x4ee3c4u: goto label_4ee3c4;
        case 0x4ee3c8u: goto label_4ee3c8;
        case 0x4ee3ccu: goto label_4ee3cc;
        case 0x4ee3d0u: goto label_4ee3d0;
        case 0x4ee3d4u: goto label_4ee3d4;
        case 0x4ee3d8u: goto label_4ee3d8;
        case 0x4ee3dcu: goto label_4ee3dc;
        case 0x4ee3e0u: goto label_4ee3e0;
        case 0x4ee3e4u: goto label_4ee3e4;
        case 0x4ee3e8u: goto label_4ee3e8;
        case 0x4ee3ecu: goto label_4ee3ec;
        case 0x4ee3f0u: goto label_4ee3f0;
        case 0x4ee3f4u: goto label_4ee3f4;
        case 0x4ee3f8u: goto label_4ee3f8;
        case 0x4ee3fcu: goto label_4ee3fc;
        case 0x4ee400u: goto label_4ee400;
        case 0x4ee404u: goto label_4ee404;
        case 0x4ee408u: goto label_4ee408;
        case 0x4ee40cu: goto label_4ee40c;
        case 0x4ee410u: goto label_4ee410;
        case 0x4ee414u: goto label_4ee414;
        case 0x4ee418u: goto label_4ee418;
        case 0x4ee41cu: goto label_4ee41c;
        case 0x4ee420u: goto label_4ee420;
        case 0x4ee424u: goto label_4ee424;
        case 0x4ee428u: goto label_4ee428;
        case 0x4ee42cu: goto label_4ee42c;
        case 0x4ee430u: goto label_4ee430;
        case 0x4ee434u: goto label_4ee434;
        case 0x4ee438u: goto label_4ee438;
        case 0x4ee43cu: goto label_4ee43c;
        case 0x4ee440u: goto label_4ee440;
        case 0x4ee444u: goto label_4ee444;
        case 0x4ee448u: goto label_4ee448;
        case 0x4ee44cu: goto label_4ee44c;
        case 0x4ee450u: goto label_4ee450;
        case 0x4ee454u: goto label_4ee454;
        case 0x4ee458u: goto label_4ee458;
        case 0x4ee45cu: goto label_4ee45c;
        case 0x4ee460u: goto label_4ee460;
        case 0x4ee464u: goto label_4ee464;
        case 0x4ee468u: goto label_4ee468;
        case 0x4ee46cu: goto label_4ee46c;
        case 0x4ee470u: goto label_4ee470;
        case 0x4ee474u: goto label_4ee474;
        case 0x4ee478u: goto label_4ee478;
        case 0x4ee47cu: goto label_4ee47c;
        case 0x4ee480u: goto label_4ee480;
        case 0x4ee484u: goto label_4ee484;
        case 0x4ee488u: goto label_4ee488;
        case 0x4ee48cu: goto label_4ee48c;
        case 0x4ee490u: goto label_4ee490;
        case 0x4ee494u: goto label_4ee494;
        case 0x4ee498u: goto label_4ee498;
        case 0x4ee49cu: goto label_4ee49c;
        case 0x4ee4a0u: goto label_4ee4a0;
        case 0x4ee4a4u: goto label_4ee4a4;
        case 0x4ee4a8u: goto label_4ee4a8;
        case 0x4ee4acu: goto label_4ee4ac;
        case 0x4ee4b0u: goto label_4ee4b0;
        case 0x4ee4b4u: goto label_4ee4b4;
        case 0x4ee4b8u: goto label_4ee4b8;
        case 0x4ee4bcu: goto label_4ee4bc;
        case 0x4ee4c0u: goto label_4ee4c0;
        case 0x4ee4c4u: goto label_4ee4c4;
        case 0x4ee4c8u: goto label_4ee4c8;
        case 0x4ee4ccu: goto label_4ee4cc;
        case 0x4ee4d0u: goto label_4ee4d0;
        case 0x4ee4d4u: goto label_4ee4d4;
        case 0x4ee4d8u: goto label_4ee4d8;
        case 0x4ee4dcu: goto label_4ee4dc;
        case 0x4ee4e0u: goto label_4ee4e0;
        case 0x4ee4e4u: goto label_4ee4e4;
        case 0x4ee4e8u: goto label_4ee4e8;
        case 0x4ee4ecu: goto label_4ee4ec;
        case 0x4ee4f0u: goto label_4ee4f0;
        case 0x4ee4f4u: goto label_4ee4f4;
        case 0x4ee4f8u: goto label_4ee4f8;
        case 0x4ee4fcu: goto label_4ee4fc;
        case 0x4ee500u: goto label_4ee500;
        case 0x4ee504u: goto label_4ee504;
        case 0x4ee508u: goto label_4ee508;
        case 0x4ee50cu: goto label_4ee50c;
        case 0x4ee510u: goto label_4ee510;
        case 0x4ee514u: goto label_4ee514;
        case 0x4ee518u: goto label_4ee518;
        case 0x4ee51cu: goto label_4ee51c;
        case 0x4ee520u: goto label_4ee520;
        case 0x4ee524u: goto label_4ee524;
        case 0x4ee528u: goto label_4ee528;
        case 0x4ee52cu: goto label_4ee52c;
        case 0x4ee530u: goto label_4ee530;
        case 0x4ee534u: goto label_4ee534;
        case 0x4ee538u: goto label_4ee538;
        case 0x4ee53cu: goto label_4ee53c;
        case 0x4ee540u: goto label_4ee540;
        case 0x4ee544u: goto label_4ee544;
        case 0x4ee548u: goto label_4ee548;
        case 0x4ee54cu: goto label_4ee54c;
        case 0x4ee550u: goto label_4ee550;
        case 0x4ee554u: goto label_4ee554;
        case 0x4ee558u: goto label_4ee558;
        case 0x4ee55cu: goto label_4ee55c;
        case 0x4ee560u: goto label_4ee560;
        case 0x4ee564u: goto label_4ee564;
        case 0x4ee568u: goto label_4ee568;
        case 0x4ee56cu: goto label_4ee56c;
        case 0x4ee570u: goto label_4ee570;
        case 0x4ee574u: goto label_4ee574;
        case 0x4ee578u: goto label_4ee578;
        case 0x4ee57cu: goto label_4ee57c;
        case 0x4ee580u: goto label_4ee580;
        case 0x4ee584u: goto label_4ee584;
        case 0x4ee588u: goto label_4ee588;
        case 0x4ee58cu: goto label_4ee58c;
        case 0x4ee590u: goto label_4ee590;
        case 0x4ee594u: goto label_4ee594;
        case 0x4ee598u: goto label_4ee598;
        case 0x4ee59cu: goto label_4ee59c;
        case 0x4ee5a0u: goto label_4ee5a0;
        case 0x4ee5a4u: goto label_4ee5a4;
        case 0x4ee5a8u: goto label_4ee5a8;
        case 0x4ee5acu: goto label_4ee5ac;
        case 0x4ee5b0u: goto label_4ee5b0;
        case 0x4ee5b4u: goto label_4ee5b4;
        case 0x4ee5b8u: goto label_4ee5b8;
        case 0x4ee5bcu: goto label_4ee5bc;
        case 0x4ee5c0u: goto label_4ee5c0;
        case 0x4ee5c4u: goto label_4ee5c4;
        case 0x4ee5c8u: goto label_4ee5c8;
        case 0x4ee5ccu: goto label_4ee5cc;
        case 0x4ee5d0u: goto label_4ee5d0;
        case 0x4ee5d4u: goto label_4ee5d4;
        case 0x4ee5d8u: goto label_4ee5d8;
        case 0x4ee5dcu: goto label_4ee5dc;
        case 0x4ee5e0u: goto label_4ee5e0;
        case 0x4ee5e4u: goto label_4ee5e4;
        case 0x4ee5e8u: goto label_4ee5e8;
        case 0x4ee5ecu: goto label_4ee5ec;
        case 0x4ee5f0u: goto label_4ee5f0;
        case 0x4ee5f4u: goto label_4ee5f4;
        case 0x4ee5f8u: goto label_4ee5f8;
        case 0x4ee5fcu: goto label_4ee5fc;
        case 0x4ee600u: goto label_4ee600;
        case 0x4ee604u: goto label_4ee604;
        case 0x4ee608u: goto label_4ee608;
        case 0x4ee60cu: goto label_4ee60c;
        case 0x4ee610u: goto label_4ee610;
        case 0x4ee614u: goto label_4ee614;
        case 0x4ee618u: goto label_4ee618;
        case 0x4ee61cu: goto label_4ee61c;
        case 0x4ee620u: goto label_4ee620;
        case 0x4ee624u: goto label_4ee624;
        case 0x4ee628u: goto label_4ee628;
        case 0x4ee62cu: goto label_4ee62c;
        default: break;
    }

    ctx->pc = 0x4ee3a0u;

label_4ee3a0:
    // 0x4ee3a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ee3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ee3a4:
    // 0x4ee3a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ee3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4ee3a8:
    // 0x4ee3a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ee3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ee3ac:
    // 0x4ee3ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ee3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ee3b0:
    // 0x4ee3b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ee3b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ee3b4:
    // 0x4ee3b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ee3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ee3b8:
    // 0x4ee3b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ee3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ee3bc:
    // 0x4ee3bc: 0x8ca40da0  lw          $a0, 0xDA0($a1)
    ctx->pc = 0x4ee3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_4ee3c0:
    // 0x4ee3c0: 0x30832200  andi        $v1, $a0, 0x2200
    ctx->pc = 0x4ee3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8704);
label_4ee3c4:
    // 0x4ee3c4: 0x14600092  bnez        $v1, . + 4 + (0x92 << 2)
label_4ee3c8:
    if (ctx->pc == 0x4EE3C8u) {
        ctx->pc = 0x4EE3C8u;
            // 0x4ee3c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE3CCu;
        goto label_4ee3cc;
    }
    ctx->pc = 0x4EE3C4u;
    {
        const bool branch_taken_0x4ee3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE3C4u;
            // 0x4ee3c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee3c4) {
            ctx->pc = 0x4EE610u;
            goto label_4ee610;
        }
    }
    ctx->pc = 0x4EE3CCu;
label_4ee3cc:
    // 0x4ee3cc: 0x52300091  beql        $s1, $s0, . + 4 + (0x91 << 2)
label_4ee3d0:
    if (ctx->pc == 0x4EE3D0u) {
        ctx->pc = 0x4EE3D0u;
            // 0x4ee3d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4EE3D4u;
        goto label_4ee3d4;
    }
    ctx->pc = 0x4EE3CCu;
    {
        const bool branch_taken_0x4ee3cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x4ee3cc) {
            ctx->pc = 0x4EE3D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE3CCu;
            // 0x4ee3d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE614u;
            goto label_4ee614;
        }
    }
    ctx->pc = 0x4EE3D4u;
label_4ee3d4:
    // 0x4ee3d4: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x4ee3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_4ee3d8:
    // 0x4ee3d8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4ee3dc:
    if (ctx->pc == 0x4EE3DCu) {
        ctx->pc = 0x4EE3DCu;
            // 0x4ee3dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE3E0u;
        goto label_4ee3e0;
    }
    ctx->pc = 0x4EE3D8u;
    {
        const bool branch_taken_0x4ee3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee3d8) {
            ctx->pc = 0x4EE3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE3D8u;
            // 0x4ee3dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE3F8u;
            goto label_4ee3f8;
        }
    }
    ctx->pc = 0x4EE3E0u;
label_4ee3e0:
    // 0x4ee3e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ee3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ee3e4:
    // 0x4ee3e4: 0xc14b7d4  jal         func_52DF50
label_4ee3e8:
    if (ctx->pc == 0x4EE3E8u) {
        ctx->pc = 0x4EE3E8u;
            // 0x4ee3e8: 0x8c443fe8  lw          $a0, 0x3FE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
        ctx->pc = 0x4EE3ECu;
        goto label_4ee3ec;
    }
    ctx->pc = 0x4EE3E4u;
    SET_GPR_U32(ctx, 31, 0x4EE3ECu);
    ctx->pc = 0x4EE3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE3E4u;
            // 0x4ee3e8: 0x8c443fe8  lw          $a0, 0x3FE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52DF50u;
    if (runtime->hasFunction(0x52DF50u)) {
        auto targetFn = runtime->lookupFunction(0x52DF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE3ECu; }
        if (ctx->pc != 0x4EE3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052DF50_0x52df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE3ECu; }
        if (ctx->pc != 0x4EE3ECu) { return; }
    }
    ctx->pc = 0x4EE3ECu;
label_4ee3ec:
    // 0x4ee3ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_4ee3f0:
    if (ctx->pc == 0x4EE3F0u) {
        ctx->pc = 0x4EE3F0u;
            // 0x4ee3f0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4EE3F4u;
        goto label_4ee3f4;
    }
    ctx->pc = 0x4EE3ECu;
    {
        const bool branch_taken_0x4ee3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE3ECu;
            // 0x4ee3f0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee3ec) {
            ctx->pc = 0x4EE3F8u;
            goto label_4ee3f8;
        }
    }
    ctx->pc = 0x4EE3F4u;
label_4ee3f4:
    // 0x4ee3f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4ee3f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee3f8:
    // 0x4ee3f8: 0x14600085  bnez        $v1, . + 4 + (0x85 << 2)
label_4ee3fc:
    if (ctx->pc == 0x4EE3FCu) {
        ctx->pc = 0x4EE400u;
        goto label_4ee400;
    }
    ctx->pc = 0x4EE3F8u;
    {
        const bool branch_taken_0x4ee3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee3f8) {
            ctx->pc = 0x4EE610u;
            goto label_4ee610;
        }
    }
    ctx->pc = 0x4EE400u;
label_4ee400:
    // 0x4ee400: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x4ee400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_4ee404:
    // 0x4ee404: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4ee404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4ee408:
    // 0x4ee408: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_4ee40c:
    if (ctx->pc == 0x4EE40Cu) {
        ctx->pc = 0x4EE40Cu;
            // 0x4ee40c: 0x8e240d98  lw          $a0, 0xD98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
        ctx->pc = 0x4EE410u;
        goto label_4ee410;
    }
    ctx->pc = 0x4EE408u;
    {
        const bool branch_taken_0x4ee408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ee408) {
            ctx->pc = 0x4EE40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE408u;
            // 0x4ee40c: 0x8e240d98  lw          $a0, 0xD98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE41Cu;
            goto label_4ee41c;
        }
    }
    ctx->pc = 0x4EE410u;
label_4ee410:
    // 0x4ee410: 0x1000007f  b           . + 4 + (0x7F << 2)
label_4ee414:
    if (ctx->pc == 0x4EE414u) {
        ctx->pc = 0x4EE418u;
        goto label_4ee418;
    }
    ctx->pc = 0x4EE410u;
    {
        const bool branch_taken_0x4ee410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee410) {
            ctx->pc = 0x4EE610u;
            goto label_4ee610;
        }
    }
    ctx->pc = 0x4EE418u;
label_4ee418:
    // 0x4ee418: 0x8e240d98  lw          $a0, 0xD98($s1)
    ctx->pc = 0x4ee418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_4ee41c:
    // 0x4ee41c: 0x8e420cbc  lw          $v0, 0xCBC($s2)
    ctx->pc = 0x4ee41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3260)));
label_4ee420:
    // 0x4ee420: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4ee420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4ee424:
    // 0x4ee424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ee424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ee428:
    // 0x4ee428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ee428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ee42c:
    // 0x4ee42c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4ee42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ee430:
    // 0x4ee430: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ee430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ee434:
    // 0x4ee434: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ee434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ee438:
    // 0x4ee438: 0x320f809  jalr        $t9
label_4ee43c:
    if (ctx->pc == 0x4EE43Cu) {
        ctx->pc = 0x4EE440u;
        goto label_4ee440;
    }
    ctx->pc = 0x4EE438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE440u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE440u; }
            if (ctx->pc != 0x4EE440u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE440u;
label_4ee440:
    // 0x4ee440: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x4ee440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4ee444:
    // 0x4ee444: 0x8e420cbc  lw          $v0, 0xCBC($s2)
    ctx->pc = 0x4ee444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3260)));
label_4ee448:
    // 0x4ee448: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4ee448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4ee44c:
    // 0x4ee44c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ee44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ee450:
    // 0x4ee450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ee450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ee454:
    // 0x4ee454: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4ee454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ee458:
    // 0x4ee458: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ee458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ee45c:
    // 0x4ee45c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x4ee45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_4ee460:
    // 0x4ee460: 0x320f809  jalr        $t9
label_4ee464:
    if (ctx->pc == 0x4EE464u) {
        ctx->pc = 0x4EE468u;
        goto label_4ee468;
    }
    ctx->pc = 0x4EE460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE468u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE468u; }
            if (ctx->pc != 0x4EE468u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE468u;
label_4ee468:
    // 0x4ee468: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x4ee468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_4ee46c:
    // 0x4ee46c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4ee46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4ee470:
    // 0x4ee470: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ee470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ee474:
    // 0x4ee474: 0x320f809  jalr        $t9
label_4ee478:
    if (ctx->pc == 0x4EE478u) {
        ctx->pc = 0x4EE478u;
            // 0x4ee478: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4EE47Cu;
        goto label_4ee47c;
    }
    ctx->pc = 0x4EE474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE47Cu);
        ctx->pc = 0x4EE478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE474u;
            // 0x4ee478: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE47Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE47Cu; }
            if (ctx->pc != 0x4EE47Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4EE47Cu;
label_4ee47c:
    // 0x4ee47c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x4ee47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_4ee480:
    // 0x4ee480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ee480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ee484:
    // 0x4ee484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ee484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ee488:
    // 0x4ee488: 0xc078534  jal         func_1E14D0
label_4ee48c:
    if (ctx->pc == 0x4EE48Cu) {
        ctx->pc = 0x4EE48Cu;
            // 0x4ee48c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4EE490u;
        goto label_4ee490;
    }
    ctx->pc = 0x4EE488u;
    SET_GPR_U32(ctx, 31, 0x4EE490u);
    ctx->pc = 0x4EE48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE488u;
            // 0x4ee48c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E14D0u;
    if (runtime->hasFunction(0x1E14D0u)) {
        auto targetFn = runtime->lookupFunction(0x1E14D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE490u; }
        if (ctx->pc != 0x4EE490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E14D0_0x1e14d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE490u; }
        if (ctx->pc != 0x4EE490u) { return; }
    }
    ctx->pc = 0x4EE490u;
label_4ee490:
    // 0x4ee490: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x4ee490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4ee494:
    // 0x4ee494: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x4ee494u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4ee498:
    // 0x4ee498: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4ee49c:
    if (ctx->pc == 0x4EE49Cu) {
        ctx->pc = 0x4EE49Cu;
            // 0x4ee49c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE4A0u;
        goto label_4ee4a0;
    }
    ctx->pc = 0x4EE498u;
    {
        const bool branch_taken_0x4ee498 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4EE49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE498u;
            // 0x4ee49c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee498) {
            ctx->pc = 0x4EE4B0u;
            goto label_4ee4b0;
        }
    }
    ctx->pc = 0x4EE4A0u;
label_4ee4a0:
    // 0x4ee4a0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4ee4a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4ee4a4:
    // 0x4ee4a4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ee4a8:
    if (ctx->pc == 0x4EE4A8u) {
        ctx->pc = 0x4EE4ACu;
        goto label_4ee4ac;
    }
    ctx->pc = 0x4EE4A4u;
    {
        const bool branch_taken_0x4ee4a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee4a4) {
            ctx->pc = 0x4EE4B0u;
            goto label_4ee4b0;
        }
    }
    ctx->pc = 0x4EE4ACu;
label_4ee4ac:
    // 0x4ee4ac: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x4ee4acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ee4b0:
    // 0x4ee4b0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4ee4b4:
    if (ctx->pc == 0x4EE4B4u) {
        ctx->pc = 0x4EE4B8u;
        goto label_4ee4b8;
    }
    ctx->pc = 0x4EE4B0u;
    {
        const bool branch_taken_0x4ee4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee4b0) {
            ctx->pc = 0x4EE4CCu;
            goto label_4ee4cc;
        }
    }
    ctx->pc = 0x4EE4B8u;
label_4ee4b8:
    // 0x4ee4b8: 0xc075eb4  jal         func_1D7AD0
label_4ee4bc:
    if (ctx->pc == 0x4EE4BCu) {
        ctx->pc = 0x4EE4BCu;
            // 0x4ee4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE4C0u;
        goto label_4ee4c0;
    }
    ctx->pc = 0x4EE4B8u;
    SET_GPR_U32(ctx, 31, 0x4EE4C0u);
    ctx->pc = 0x4EE4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE4B8u;
            // 0x4ee4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE4C0u; }
        if (ctx->pc != 0x4EE4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE4C0u; }
        if (ctx->pc != 0x4EE4C0u) { return; }
    }
    ctx->pc = 0x4EE4C0u;
label_4ee4c0:
    // 0x4ee4c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4ee4c4:
    if (ctx->pc == 0x4EE4C4u) {
        ctx->pc = 0x4EE4C8u;
        goto label_4ee4c8;
    }
    ctx->pc = 0x4EE4C0u;
    {
        const bool branch_taken_0x4ee4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee4c0) {
            ctx->pc = 0x4EE4CCu;
            goto label_4ee4cc;
        }
    }
    ctx->pc = 0x4EE4C8u;
label_4ee4c8:
    // 0x4ee4c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ee4c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee4cc:
    // 0x4ee4cc: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
label_4ee4d0:
    if (ctx->pc == 0x4EE4D0u) {
        ctx->pc = 0x4EE4D0u;
            // 0x4ee4d0: 0x8e220e34  lw          $v0, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->pc = 0x4EE4D4u;
        goto label_4ee4d4;
    }
    ctx->pc = 0x4EE4CCu;
    {
        const bool branch_taken_0x4ee4cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee4cc) {
            ctx->pc = 0x4EE4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE4CCu;
            // 0x4ee4d0: 0x8e220e34  lw          $v0, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE4FCu;
            goto label_4ee4fc;
        }
    }
    ctx->pc = 0x4EE4D4u;
label_4ee4d4:
    // 0x4ee4d4: 0xc040180  jal         func_100600
label_4ee4d8:
    if (ctx->pc == 0x4EE4D8u) {
        ctx->pc = 0x4EE4D8u;
            // 0x4ee4d8: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x4EE4DCu;
        goto label_4ee4dc;
    }
    ctx->pc = 0x4EE4D4u;
    SET_GPR_U32(ctx, 31, 0x4EE4DCu);
    ctx->pc = 0x4EE4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE4D4u;
            // 0x4ee4d8: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE4DCu; }
        if (ctx->pc != 0x4EE4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE4DCu; }
        if (ctx->pc != 0x4EE4DCu) { return; }
    }
    ctx->pc = 0x4EE4DCu;
label_4ee4dc:
    // 0x4ee4dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4ee4e0:
    if (ctx->pc == 0x4EE4E0u) {
        ctx->pc = 0x4EE4E4u;
        goto label_4ee4e4;
    }
    ctx->pc = 0x4EE4DCu;
    {
        const bool branch_taken_0x4ee4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee4dc) {
            ctx->pc = 0x4EE4F8u;
            goto label_4ee4f8;
        }
    }
    ctx->pc = 0x4EE4E4u;
label_4ee4e4:
    // 0x4ee4e4: 0x820511aa  lb          $a1, 0x11AA($s0)
    ctx->pc = 0x4ee4e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_4ee4e8:
    // 0x4ee4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ee4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ee4ec:
    // 0x4ee4ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ee4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee4f0:
    // 0x4ee4f0: 0xc151b50  jal         func_546D40
label_4ee4f4:
    if (ctx->pc == 0x4EE4F4u) {
        ctx->pc = 0x4EE4F4u;
            // 0x4ee4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE4F8u;
        goto label_4ee4f8;
    }
    ctx->pc = 0x4EE4F0u;
    SET_GPR_U32(ctx, 31, 0x4EE4F8u);
    ctx->pc = 0x4EE4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE4F0u;
            // 0x4ee4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x546D40u;
    if (runtime->hasFunction(0x546D40u)) {
        auto targetFn = runtime->lookupFunction(0x546D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE4F8u; }
        if (ctx->pc != 0x4EE4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00546D40_0x546d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE4F8u; }
        if (ctx->pc != 0x4EE4F8u) { return; }
    }
    ctx->pc = 0x4EE4F8u;
label_4ee4f8:
    // 0x4ee4f8: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x4ee4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_4ee4fc:
    // 0x4ee4fc: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4ee4fcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4ee500:
    // 0x4ee500: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4ee504:
    if (ctx->pc == 0x4EE504u) {
        ctx->pc = 0x4EE504u;
            // 0x4ee504: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE508u;
        goto label_4ee508;
    }
    ctx->pc = 0x4EE500u;
    {
        const bool branch_taken_0x4ee500 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4EE504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE500u;
            // 0x4ee504: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee500) {
            ctx->pc = 0x4EE518u;
            goto label_4ee518;
        }
    }
    ctx->pc = 0x4EE508u;
label_4ee508:
    // 0x4ee508: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4ee508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4ee50c:
    // 0x4ee50c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ee510:
    if (ctx->pc == 0x4EE510u) {
        ctx->pc = 0x4EE514u;
        goto label_4ee514;
    }
    ctx->pc = 0x4EE50Cu;
    {
        const bool branch_taken_0x4ee50c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee50c) {
            ctx->pc = 0x4EE518u;
            goto label_4ee518;
        }
    }
    ctx->pc = 0x4EE514u;
label_4ee514:
    // 0x4ee514: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4ee514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ee518:
    // 0x4ee518: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4ee51c:
    if (ctx->pc == 0x4EE51Cu) {
        ctx->pc = 0x4EE520u;
        goto label_4ee520;
    }
    ctx->pc = 0x4EE518u;
    {
        const bool branch_taken_0x4ee518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee518) {
            ctx->pc = 0x4EE534u;
            goto label_4ee534;
        }
    }
    ctx->pc = 0x4EE520u;
label_4ee520:
    // 0x4ee520: 0xc075eb4  jal         func_1D7AD0
label_4ee524:
    if (ctx->pc == 0x4EE524u) {
        ctx->pc = 0x4EE524u;
            // 0x4ee524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE528u;
        goto label_4ee528;
    }
    ctx->pc = 0x4EE520u;
    SET_GPR_U32(ctx, 31, 0x4EE528u);
    ctx->pc = 0x4EE524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE520u;
            // 0x4ee524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE528u; }
        if (ctx->pc != 0x4EE528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE528u; }
        if (ctx->pc != 0x4EE528u) { return; }
    }
    ctx->pc = 0x4EE528u;
label_4ee528:
    // 0x4ee528: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4ee52c:
    if (ctx->pc == 0x4EE52Cu) {
        ctx->pc = 0x4EE530u;
        goto label_4ee530;
    }
    ctx->pc = 0x4EE528u;
    {
        const bool branch_taken_0x4ee528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee528) {
            ctx->pc = 0x4EE534u;
            goto label_4ee534;
        }
    }
    ctx->pc = 0x4EE530u;
label_4ee530:
    // 0x4ee530: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4ee530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee534:
    // 0x4ee534: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_4ee538:
    if (ctx->pc == 0x4EE538u) {
        ctx->pc = 0x4EE538u;
            // 0x4ee538: 0x8e220a68  lw          $v0, 0xA68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
        ctx->pc = 0x4EE53Cu;
        goto label_4ee53c;
    }
    ctx->pc = 0x4EE534u;
    {
        const bool branch_taken_0x4ee534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee534) {
            ctx->pc = 0x4EE538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE534u;
            // 0x4ee538: 0x8e220a68  lw          $v0, 0xA68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE5D0u;
            goto label_4ee5d0;
        }
    }
    ctx->pc = 0x4EE53Cu;
label_4ee53c:
    // 0x4ee53c: 0xc040180  jal         func_100600
label_4ee540:
    if (ctx->pc == 0x4EE540u) {
        ctx->pc = 0x4EE540u;
            // 0x4ee540: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x4EE544u;
        goto label_4ee544;
    }
    ctx->pc = 0x4EE53Cu;
    SET_GPR_U32(ctx, 31, 0x4EE544u);
    ctx->pc = 0x4EE540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE53Cu;
            // 0x4ee540: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE544u; }
        if (ctx->pc != 0x4EE544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE544u; }
        if (ctx->pc != 0x4EE544u) { return; }
    }
    ctx->pc = 0x4EE544u;
label_4ee544:
    // 0x4ee544: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4ee548:
    if (ctx->pc == 0x4EE548u) {
        ctx->pc = 0x4EE548u;
            // 0x4ee548: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE54Cu;
        goto label_4ee54c;
    }
    ctx->pc = 0x4EE544u;
    {
        const bool branch_taken_0x4ee544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE544u;
            // 0x4ee548: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee544) {
            ctx->pc = 0x4EE5CCu;
            goto label_4ee5cc;
        }
    }
    ctx->pc = 0x4EE54Cu;
label_4ee54c:
    // 0x4ee54c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4ee54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4ee550:
    // 0x4ee550: 0x823211aa  lb          $s2, 0x11AA($s1)
    ctx->pc = 0x4ee550u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_4ee554:
    // 0x4ee554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ee558:
    // 0x4ee558: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4ee558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4ee55c:
    // 0x4ee55c: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x4ee55cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_4ee560:
    // 0x4ee560: 0xc10ca68  jal         func_4329A0
label_4ee564:
    if (ctx->pc == 0x4EE564u) {
        ctx->pc = 0x4EE564u;
            // 0x4ee564: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4EE568u;
        goto label_4ee568;
    }
    ctx->pc = 0x4EE560u;
    SET_GPR_U32(ctx, 31, 0x4EE568u);
    ctx->pc = 0x4EE564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE560u;
            // 0x4ee564: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE568u; }
        if (ctx->pc != 0x4EE568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE568u; }
        if (ctx->pc != 0x4EE568u) { return; }
    }
    ctx->pc = 0x4EE568u;
label_4ee568:
    // 0x4ee568: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ee568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4ee56c:
    // 0x4ee56c: 0x12163c  dsll32      $v0, $s2, 24
    ctx->pc = 0x4ee56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 24));
label_4ee570:
    // 0x4ee570: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4ee570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4ee574:
    // 0x4ee574: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4ee574u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4ee578:
    // 0x4ee578: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ee578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ee57c:
    // 0x4ee57c: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x4ee57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_4ee580:
    // 0x4ee580: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4ee580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ee584:
    // 0x4ee584: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ee584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ee588:
    // 0x4ee588: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x4ee588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_4ee58c:
    // 0x4ee58c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ee58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ee590:
    // 0x4ee590: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x4ee590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_4ee594:
    // 0x4ee594: 0x3c02e014  lui         $v0, 0xE014
    ctx->pc = 0x4ee594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57364 << 16));
label_4ee598:
    // 0x4ee598: 0x344414ff  ori         $a0, $v0, 0x14FF
    ctx->pc = 0x4ee598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5375);
label_4ee59c:
    // 0x4ee59c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4ee59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4ee5a0:
    // 0x4ee5a0: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x4ee5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_4ee5a4:
    // 0x4ee5a4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4ee5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4ee5a8:
    // 0x4ee5a8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x4ee5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_4ee5ac:
    // 0x4ee5ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4ee5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ee5b0:
    // 0x4ee5b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ee5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ee5b4:
    // 0x4ee5b4: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x4ee5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_4ee5b8:
    // 0x4ee5b8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4ee5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4ee5bc:
    // 0x4ee5bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4ee5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ee5c0:
    // 0x4ee5c0: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x4ee5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_4ee5c4:
    // 0x4ee5c4: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x4ee5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_4ee5c8:
    // 0x4ee5c8: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x4ee5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_4ee5cc:
    // 0x4ee5cc: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x4ee5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
label_4ee5d0:
    // 0x4ee5d0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4ee5d4:
    if (ctx->pc == 0x4EE5D4u) {
        ctx->pc = 0x4EE5D4u;
            // 0x4ee5d4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4EE5D8u;
        goto label_4ee5d8;
    }
    ctx->pc = 0x4EE5D0u;
    {
        const bool branch_taken_0x4ee5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee5d0) {
            ctx->pc = 0x4EE5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE5D0u;
            // 0x4ee5d4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE600u;
            goto label_4ee600;
        }
    }
    ctx->pc = 0x4EE5D8u;
label_4ee5d8:
    // 0x4ee5d8: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x4ee5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
label_4ee5dc:
    // 0x4ee5dc: 0x26230a50  addiu       $v1, $s1, 0xA50
    ctx->pc = 0x4ee5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_4ee5e0:
    // 0x4ee5e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ee5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ee5e4:
    // 0x4ee5e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ee5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ee5e8:
    // 0x4ee5e8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4ee5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4ee5ec:
    // 0x4ee5ec: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x4ee5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4ee5f0:
    // 0x4ee5f0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ee5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ee5f4:
    // 0x4ee5f4: 0x320f809  jalr        $t9
label_4ee5f8:
    if (ctx->pc == 0x4EE5F8u) {
        ctx->pc = 0x4EE5FCu;
        goto label_4ee5fc;
    }
    ctx->pc = 0x4EE5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE5FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE5FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE5FCu; }
            if (ctx->pc != 0x4EE5FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4EE5FCu;
label_4ee5fc:
    // 0x4ee5fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ee5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ee600:
    // 0x4ee600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ee600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ee604:
    // 0x4ee604: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4ee604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4ee608:
    // 0x4ee608: 0x320f809  jalr        $t9
label_4ee60c:
    if (ctx->pc == 0x4EE60Cu) {
        ctx->pc = 0x4EE60Cu;
            // 0x4ee60c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EE610u;
        goto label_4ee610;
    }
    ctx->pc = 0x4EE608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE610u);
        ctx->pc = 0x4EE60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE608u;
            // 0x4ee60c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE610u; }
            if (ctx->pc != 0x4EE610u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE610u;
label_4ee610:
    // 0x4ee610: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ee610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ee614:
    // 0x4ee614: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ee614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ee618:
    // 0x4ee618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ee618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ee61c:
    // 0x4ee61c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ee61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ee620:
    // 0x4ee620: 0x3e00008  jr          $ra
label_4ee624:
    if (ctx->pc == 0x4EE624u) {
        ctx->pc = 0x4EE624u;
            // 0x4ee624: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4EE628u;
        goto label_4ee628;
    }
    ctx->pc = 0x4EE620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE620u;
            // 0x4ee624: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EE628u;
label_4ee628:
    // 0x4ee628: 0x0  nop
    ctx->pc = 0x4ee628u;
    // NOP
label_4ee62c:
    // 0x4ee62c: 0x0  nop
    ctx->pc = 0x4ee62cu;
    // NOP
}
