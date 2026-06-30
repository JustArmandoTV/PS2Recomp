#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CD330
// Address: 0x3cd330 - 0x3cd570
void sub_003CD330_0x3cd330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD330_0x3cd330");
#endif

    switch (ctx->pc) {
        case 0x3cd330u: goto label_3cd330;
        case 0x3cd334u: goto label_3cd334;
        case 0x3cd338u: goto label_3cd338;
        case 0x3cd33cu: goto label_3cd33c;
        case 0x3cd340u: goto label_3cd340;
        case 0x3cd344u: goto label_3cd344;
        case 0x3cd348u: goto label_3cd348;
        case 0x3cd34cu: goto label_3cd34c;
        case 0x3cd350u: goto label_3cd350;
        case 0x3cd354u: goto label_3cd354;
        case 0x3cd358u: goto label_3cd358;
        case 0x3cd35cu: goto label_3cd35c;
        case 0x3cd360u: goto label_3cd360;
        case 0x3cd364u: goto label_3cd364;
        case 0x3cd368u: goto label_3cd368;
        case 0x3cd36cu: goto label_3cd36c;
        case 0x3cd370u: goto label_3cd370;
        case 0x3cd374u: goto label_3cd374;
        case 0x3cd378u: goto label_3cd378;
        case 0x3cd37cu: goto label_3cd37c;
        case 0x3cd380u: goto label_3cd380;
        case 0x3cd384u: goto label_3cd384;
        case 0x3cd388u: goto label_3cd388;
        case 0x3cd38cu: goto label_3cd38c;
        case 0x3cd390u: goto label_3cd390;
        case 0x3cd394u: goto label_3cd394;
        case 0x3cd398u: goto label_3cd398;
        case 0x3cd39cu: goto label_3cd39c;
        case 0x3cd3a0u: goto label_3cd3a0;
        case 0x3cd3a4u: goto label_3cd3a4;
        case 0x3cd3a8u: goto label_3cd3a8;
        case 0x3cd3acu: goto label_3cd3ac;
        case 0x3cd3b0u: goto label_3cd3b0;
        case 0x3cd3b4u: goto label_3cd3b4;
        case 0x3cd3b8u: goto label_3cd3b8;
        case 0x3cd3bcu: goto label_3cd3bc;
        case 0x3cd3c0u: goto label_3cd3c0;
        case 0x3cd3c4u: goto label_3cd3c4;
        case 0x3cd3c8u: goto label_3cd3c8;
        case 0x3cd3ccu: goto label_3cd3cc;
        case 0x3cd3d0u: goto label_3cd3d0;
        case 0x3cd3d4u: goto label_3cd3d4;
        case 0x3cd3d8u: goto label_3cd3d8;
        case 0x3cd3dcu: goto label_3cd3dc;
        case 0x3cd3e0u: goto label_3cd3e0;
        case 0x3cd3e4u: goto label_3cd3e4;
        case 0x3cd3e8u: goto label_3cd3e8;
        case 0x3cd3ecu: goto label_3cd3ec;
        case 0x3cd3f0u: goto label_3cd3f0;
        case 0x3cd3f4u: goto label_3cd3f4;
        case 0x3cd3f8u: goto label_3cd3f8;
        case 0x3cd3fcu: goto label_3cd3fc;
        case 0x3cd400u: goto label_3cd400;
        case 0x3cd404u: goto label_3cd404;
        case 0x3cd408u: goto label_3cd408;
        case 0x3cd40cu: goto label_3cd40c;
        case 0x3cd410u: goto label_3cd410;
        case 0x3cd414u: goto label_3cd414;
        case 0x3cd418u: goto label_3cd418;
        case 0x3cd41cu: goto label_3cd41c;
        case 0x3cd420u: goto label_3cd420;
        case 0x3cd424u: goto label_3cd424;
        case 0x3cd428u: goto label_3cd428;
        case 0x3cd42cu: goto label_3cd42c;
        case 0x3cd430u: goto label_3cd430;
        case 0x3cd434u: goto label_3cd434;
        case 0x3cd438u: goto label_3cd438;
        case 0x3cd43cu: goto label_3cd43c;
        case 0x3cd440u: goto label_3cd440;
        case 0x3cd444u: goto label_3cd444;
        case 0x3cd448u: goto label_3cd448;
        case 0x3cd44cu: goto label_3cd44c;
        case 0x3cd450u: goto label_3cd450;
        case 0x3cd454u: goto label_3cd454;
        case 0x3cd458u: goto label_3cd458;
        case 0x3cd45cu: goto label_3cd45c;
        case 0x3cd460u: goto label_3cd460;
        case 0x3cd464u: goto label_3cd464;
        case 0x3cd468u: goto label_3cd468;
        case 0x3cd46cu: goto label_3cd46c;
        case 0x3cd470u: goto label_3cd470;
        case 0x3cd474u: goto label_3cd474;
        case 0x3cd478u: goto label_3cd478;
        case 0x3cd47cu: goto label_3cd47c;
        case 0x3cd480u: goto label_3cd480;
        case 0x3cd484u: goto label_3cd484;
        case 0x3cd488u: goto label_3cd488;
        case 0x3cd48cu: goto label_3cd48c;
        case 0x3cd490u: goto label_3cd490;
        case 0x3cd494u: goto label_3cd494;
        case 0x3cd498u: goto label_3cd498;
        case 0x3cd49cu: goto label_3cd49c;
        case 0x3cd4a0u: goto label_3cd4a0;
        case 0x3cd4a4u: goto label_3cd4a4;
        case 0x3cd4a8u: goto label_3cd4a8;
        case 0x3cd4acu: goto label_3cd4ac;
        case 0x3cd4b0u: goto label_3cd4b0;
        case 0x3cd4b4u: goto label_3cd4b4;
        case 0x3cd4b8u: goto label_3cd4b8;
        case 0x3cd4bcu: goto label_3cd4bc;
        case 0x3cd4c0u: goto label_3cd4c0;
        case 0x3cd4c4u: goto label_3cd4c4;
        case 0x3cd4c8u: goto label_3cd4c8;
        case 0x3cd4ccu: goto label_3cd4cc;
        case 0x3cd4d0u: goto label_3cd4d0;
        case 0x3cd4d4u: goto label_3cd4d4;
        case 0x3cd4d8u: goto label_3cd4d8;
        case 0x3cd4dcu: goto label_3cd4dc;
        case 0x3cd4e0u: goto label_3cd4e0;
        case 0x3cd4e4u: goto label_3cd4e4;
        case 0x3cd4e8u: goto label_3cd4e8;
        case 0x3cd4ecu: goto label_3cd4ec;
        case 0x3cd4f0u: goto label_3cd4f0;
        case 0x3cd4f4u: goto label_3cd4f4;
        case 0x3cd4f8u: goto label_3cd4f8;
        case 0x3cd4fcu: goto label_3cd4fc;
        case 0x3cd500u: goto label_3cd500;
        case 0x3cd504u: goto label_3cd504;
        case 0x3cd508u: goto label_3cd508;
        case 0x3cd50cu: goto label_3cd50c;
        case 0x3cd510u: goto label_3cd510;
        case 0x3cd514u: goto label_3cd514;
        case 0x3cd518u: goto label_3cd518;
        case 0x3cd51cu: goto label_3cd51c;
        case 0x3cd520u: goto label_3cd520;
        case 0x3cd524u: goto label_3cd524;
        case 0x3cd528u: goto label_3cd528;
        case 0x3cd52cu: goto label_3cd52c;
        case 0x3cd530u: goto label_3cd530;
        case 0x3cd534u: goto label_3cd534;
        case 0x3cd538u: goto label_3cd538;
        case 0x3cd53cu: goto label_3cd53c;
        case 0x3cd540u: goto label_3cd540;
        case 0x3cd544u: goto label_3cd544;
        case 0x3cd548u: goto label_3cd548;
        case 0x3cd54cu: goto label_3cd54c;
        case 0x3cd550u: goto label_3cd550;
        case 0x3cd554u: goto label_3cd554;
        case 0x3cd558u: goto label_3cd558;
        case 0x3cd55cu: goto label_3cd55c;
        case 0x3cd560u: goto label_3cd560;
        case 0x3cd564u: goto label_3cd564;
        case 0x3cd568u: goto label_3cd568;
        case 0x3cd56cu: goto label_3cd56c;
        default: break;
    }

    ctx->pc = 0x3cd330u;

label_3cd330:
    // 0x3cd330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cd330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3cd334:
    // 0x3cd334: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3cd334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3cd338:
    // 0x3cd338: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cd338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3cd33c:
    // 0x3cd33c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cd33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3cd340:
    // 0x3cd340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cd340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3cd344:
    // 0x3cd344: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cd344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cd348:
    // 0x3cd348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cd348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cd34c:
    // 0x3cd34c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cd34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cd350:
    // 0x3cd350: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3cd350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cd354:
    // 0x3cd354: 0x3445aece  ori         $a1, $v0, 0xAECE
    ctx->pc = 0x3cd354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44750);
label_3cd358:
    // 0x3cd358: 0xc0ee760  jal         func_3B9D80
label_3cd35c:
    if (ctx->pc == 0x3CD35Cu) {
        ctx->pc = 0x3CD35Cu;
            // 0x3cd35c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD360u;
        goto label_3cd360;
    }
    ctx->pc = 0x3CD358u;
    SET_GPR_U32(ctx, 31, 0x3CD360u);
    ctx->pc = 0x3CD35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD358u;
            // 0x3cd35c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD360u; }
        if (ctx->pc != 0x3CD360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD360u; }
        if (ctx->pc != 0x3CD360u) { return; }
    }
    ctx->pc = 0x3CD360u;
label_3cd360:
    // 0x3cd360: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3cd360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3cd364:
    // 0x3cd364: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3cd364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3cd368:
    // 0x3cd368: 0x244290b0  addiu       $v0, $v0, -0x6F50
    ctx->pc = 0x3cd368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938800));
label_3cd36c:
    // 0x3cd36c: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x3cd36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_3cd370:
    // 0x3cd370: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3cd370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3cd374:
    // 0x3cd374: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3cd374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_3cd378:
    // 0x3cd378: 0xae510058  sw          $s1, 0x58($s2)
    ctx->pc = 0x3cd378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 17));
label_3cd37c:
    // 0x3cd37c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cd380:
    // 0x3cd380: 0xae50005c  sw          $s0, 0x5C($s2)
    ctx->pc = 0x3cd380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 16));
label_3cd384:
    // 0x3cd384: 0xa2440060  sb          $a0, 0x60($s2)
    ctx->pc = 0x3cd384u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 4));
label_3cd388:
    // 0x3cd388: 0x8e460058  lw          $a2, 0x58($s2)
    ctx->pc = 0x3cd388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3cd38c:
    // 0x3cd38c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3cd38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3cd390:
    // 0x3cd390: 0x8c490eac  lw          $t1, 0xEAC($v0)
    ctx->pc = 0x3cd390u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3cd394:
    // 0x3cd394: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3cd394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3cd398:
    // 0x3cd398: 0x1264021  addu        $t0, $t1, $a2
    ctx->pc = 0x3cd398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_3cd39c:
    // 0x3cd39c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3cd39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cd3a0:
    // 0x3cd3a0: 0x8d070094  lw          $a3, 0x94($t0)
    ctx->pc = 0x3cd3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
label_3cd3a4:
    // 0x3cd3a4: 0x8d06009c  lw          $a2, 0x9C($t0)
    ctx->pc = 0x3cd3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 156)));
label_3cd3a8:
    // 0x3cd3a8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3cd3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3cd3ac:
    // 0x3cd3ac: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x3cd3acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_3cd3b0:
    // 0x3cd3b0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3cd3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3cd3b4:
    // 0x3cd3b4: 0xae46006c  sw          $a2, 0x6C($s2)
    ctx->pc = 0x3cd3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 6));
label_3cd3b8:
    // 0x3cd3b8: 0x8d070098  lw          $a3, 0x98($t0)
    ctx->pc = 0x3cd3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 152)));
label_3cd3bc:
    // 0x3cd3bc: 0x8d0600a0  lw          $a2, 0xA0($t0)
    ctx->pc = 0x3cd3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 160)));
label_3cd3c0:
    // 0x3cd3c0: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3cd3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3cd3c4:
    // 0x3cd3c4: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x3cd3c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_3cd3c8:
    // 0x3cd3c8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3cd3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3cd3cc:
    // 0x3cd3cc: 0xae460070  sw          $a2, 0x70($s2)
    ctx->pc = 0x3cd3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 6));
label_3cd3d0:
    // 0x3cd3d0: 0xae450088  sw          $a1, 0x88($s2)
    ctx->pc = 0x3cd3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 5));
label_3cd3d4:
    // 0x3cd3d4: 0xae43008c  sw          $v1, 0x8C($s2)
    ctx->pc = 0x3cd3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
label_3cd3d8:
    // 0x3cd3d8: 0xae440064  sw          $a0, 0x64($s2)
    ctx->pc = 0x3cd3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
label_3cd3dc:
    // 0x3cd3dc: 0xae440068  sw          $a0, 0x68($s2)
    ctx->pc = 0x3cd3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 4));
label_3cd3e0:
    // 0x3cd3e0: 0x8d230110  lw          $v1, 0x110($t1)
    ctx->pc = 0x3cd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 272)));
label_3cd3e4:
    // 0x3cd3e4: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
label_3cd3e8:
    if (ctx->pc == 0x3CD3E8u) {
        ctx->pc = 0x3CD3E8u;
            // 0x3cd3e8: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x3CD3ECu;
        goto label_3cd3ec;
    }
    ctx->pc = 0x3CD3E4u;
    {
        const bool branch_taken_0x3cd3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cd3e4) {
            ctx->pc = 0x3CD3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD3E4u;
            // 0x3cd3e8: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD460u;
            goto label_3cd460;
        }
    }
    ctx->pc = 0x3CD3ECu;
label_3cd3ec:
    // 0x3cd3ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3cd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cd3f0:
    // 0x3cd3f0: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_3cd3f4:
    if (ctx->pc == 0x3CD3F4u) {
        ctx->pc = 0x3CD3F8u;
        goto label_3cd3f8;
    }
    ctx->pc = 0x3CD3F0u;
    {
        const bool branch_taken_0x3cd3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cd3f0) {
            ctx->pc = 0x3CD45Cu;
            goto label_3cd45c;
        }
    }
    ctx->pc = 0x3CD3F8u;
label_3cd3f8:
    // 0x3cd3f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cd3fc:
    // 0x3cd3fc: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_3cd400:
    if (ctx->pc == 0x3CD400u) {
        ctx->pc = 0x3CD400u;
            // 0x3cd400: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x3CD404u;
        goto label_3cd404;
    }
    ctx->pc = 0x3CD3FCu;
    {
        const bool branch_taken_0x3cd3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cd3fc) {
            ctx->pc = 0x3CD400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD3FCu;
            // 0x3cd400: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD438u;
            goto label_3cd438;
        }
    }
    ctx->pc = 0x3CD404u;
label_3cd404:
    // 0x3cd404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cd404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cd408:
    // 0x3cd408: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_3cd40c:
    if (ctx->pc == 0x3CD40Cu) {
        ctx->pc = 0x3CD40Cu;
            // 0x3cd40c: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x3CD410u;
        goto label_3cd410;
    }
    ctx->pc = 0x3CD408u;
    {
        const bool branch_taken_0x3cd408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3cd408) {
            ctx->pc = 0x3CD40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD408u;
            // 0x3cd40c: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD418u;
            goto label_3cd418;
        }
    }
    ctx->pc = 0x3CD410u;
label_3cd410:
    // 0x3cd410: 0x10000028  b           . + 4 + (0x28 << 2)
label_3cd414:
    if (ctx->pc == 0x3CD414u) {
        ctx->pc = 0x3CD414u;
            // 0x3cd414: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD418u;
        goto label_3cd418;
    }
    ctx->pc = 0x3CD410u;
    {
        const bool branch_taken_0x3cd410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD410u;
            // 0x3cd414: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd410) {
            ctx->pc = 0x3CD4B4u;
            goto label_3cd4b4;
        }
    }
    ctx->pc = 0x3CD418u;
label_3cd418:
    // 0x3cd418: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x3cd418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
label_3cd41c:
    // 0x3cd41c: 0xae420074  sw          $v0, 0x74($s2)
    ctx->pc = 0x3cd41cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
label_3cd420:
    // 0x3cd420: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x3cd420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_3cd424:
    // 0x3cd424: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x3cd424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
label_3cd428:
    // 0x3cd428: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x3cd428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_3cd42c:
    // 0x3cd42c: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x3cd42cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_3cd430:
    // 0x3cd430: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3cd434:
    if (ctx->pc == 0x3CD434u) {
        ctx->pc = 0x3CD434u;
            // 0x3cd434: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x3CD438u;
        goto label_3cd438;
    }
    ctx->pc = 0x3CD430u;
    {
        const bool branch_taken_0x3cd430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD430u;
            // 0x3cd434: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd430) {
            ctx->pc = 0x3CD4B0u;
            goto label_3cd4b0;
        }
    }
    ctx->pc = 0x3CD438u;
label_3cd438:
    // 0x3cd438: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3cd438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3cd43c:
    // 0x3cd43c: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x3cd43cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
label_3cd440:
    // 0x3cd440: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x3cd440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
label_3cd444:
    // 0x3cd444: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3cd444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3cd448:
    // 0x3cd448: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x3cd448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_3cd44c:
    // 0x3cd44c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x3cd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_3cd450:
    // 0x3cd450: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x3cd450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_3cd454:
    // 0x3cd454: 0x10000016  b           . + 4 + (0x16 << 2)
label_3cd458:
    if (ctx->pc == 0x3CD458u) {
        ctx->pc = 0x3CD458u;
            // 0x3cd458: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x3CD45Cu;
        goto label_3cd45c;
    }
    ctx->pc = 0x3CD454u;
    {
        const bool branch_taken_0x3cd454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD454u;
            // 0x3cd458: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd454) {
            ctx->pc = 0x3CD4B0u;
            goto label_3cd4b0;
        }
    }
    ctx->pc = 0x3CD45Cu;
label_3cd45c:
    // 0x3cd45c: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x3cd45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_3cd460:
    // 0x3cd460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cd460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cd464:
    // 0x3cd464: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3cd464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3cd468:
    // 0x3cd468: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x3cd468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_3cd46c:
    // 0x3cd46c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3cd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cd470:
    // 0x3cd470: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x3cd470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3cd474:
    // 0x3cd474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cd474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd478:
    // 0x3cd478: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x3cd478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_3cd47c:
    // 0x3cd47c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3cd47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3cd480:
    // 0x3cd480: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x3cd480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
label_3cd484:
    // 0x3cd484: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cd484u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd488:
    // 0x3cd488: 0x0  nop
    ctx->pc = 0x3cd488u;
    // NOP
label_3cd48c:
    // 0x3cd48c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cd48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3cd490:
    // 0x3cd490: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cd490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cd494:
    // 0x3cd494: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3cd494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cd498:
    // 0x3cd498: 0x0  nop
    ctx->pc = 0x3cd498u;
    // NOP
label_3cd49c:
    // 0x3cd49c: 0xae450074  sw          $a1, 0x74($s2)
    ctx->pc = 0x3cd49cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 5));
label_3cd4a0:
    // 0x3cd4a0: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x3cd4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_3cd4a4:
    // 0x3cd4a4: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x3cd4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_3cd4a8:
    // 0x3cd4a8: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x3cd4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_3cd4ac:
    // 0x3cd4ac: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x3cd4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_3cd4b0:
    // 0x3cd4b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3cd4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cd4b4:
    // 0x3cd4b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cd4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cd4b8:
    // 0x3cd4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cd4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cd4bc:
    // 0x3cd4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cd4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cd4c0:
    // 0x3cd4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cd4c4:
    // 0x3cd4c4: 0x3e00008  jr          $ra
label_3cd4c8:
    if (ctx->pc == 0x3CD4C8u) {
        ctx->pc = 0x3CD4C8u;
            // 0x3cd4c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3CD4CCu;
        goto label_3cd4cc;
    }
    ctx->pc = 0x3CD4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD4C4u;
            // 0x3cd4c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CD4CCu;
label_3cd4cc:
    // 0x3cd4cc: 0x0  nop
    ctx->pc = 0x3cd4ccu;
    // NOP
label_3cd4d0:
    // 0x3cd4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cd4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3cd4d4:
    // 0x3cd4d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3cd4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cd4d8:
    // 0x3cd4d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cd4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3cd4dc:
    // 0x3cd4dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cd4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cd4e0:
    // 0x3cd4e0: 0x9088005c  lbu         $t0, 0x5C($a0)
    ctx->pc = 0x3cd4e0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
label_3cd4e4:
    // 0x3cd4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cd4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cd4e8:
    // 0x3cd4e8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3cd4e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3cd4ec:
    // 0x3cd4ec: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3cd4f0:
    if (ctx->pc == 0x3CD4F0u) {
        ctx->pc = 0x3CD4F4u;
        goto label_3cd4f4;
    }
    ctx->pc = 0x3CD4ECu;
    {
        const bool branch_taken_0x3cd4ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cd4ec) {
            ctx->pc = 0x3CD508u;
            goto label_3cd508;
        }
    }
    ctx->pc = 0x3CD4F4u;
label_3cd4f4:
    // 0x3cd4f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cd4f8:
    // 0x3cd4f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3cd4fc:
    if (ctx->pc == 0x3CD4FCu) {
        ctx->pc = 0x3CD500u;
        goto label_3cd500;
    }
    ctx->pc = 0x3CD4F8u;
    {
        const bool branch_taken_0x3cd4f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cd4f8) {
            ctx->pc = 0x3CD508u;
            goto label_3cd508;
        }
    }
    ctx->pc = 0x3CD500u;
label_3cd500:
    // 0x3cd500: 0x10000018  b           . + 4 + (0x18 << 2)
label_3cd504:
    if (ctx->pc == 0x3CD504u) {
        ctx->pc = 0x3CD504u;
            // 0x3cd504: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3CD508u;
        goto label_3cd508;
    }
    ctx->pc = 0x3CD500u;
    {
        const bool branch_taken_0x3cd500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD500u;
            // 0x3cd504: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd500) {
            ctx->pc = 0x3CD564u;
            goto label_3cd564;
        }
    }
    ctx->pc = 0x3CD508u;
label_3cd508:
    // 0x3cd508: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cd508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cd50c:
    // 0x3cd50c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cd510:
    // 0x3cd510: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cd510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cd514:
    // 0x3cd514: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cd514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cd518:
    // 0x3cd518: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3cd51c:
    if (ctx->pc == 0x3CD51Cu) {
        ctx->pc = 0x3CD51Cu;
            // 0x3cd51c: 0x8604005e  lh          $a0, 0x5E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
        ctx->pc = 0x3CD520u;
        goto label_3cd520;
    }
    ctx->pc = 0x3CD518u;
    {
        const bool branch_taken_0x3cd518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd518) {
            ctx->pc = 0x3CD51Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD518u;
            // 0x3cd51c: 0x8604005e  lh          $a0, 0x5E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD53Cu;
            goto label_3cd53c;
        }
    }
    ctx->pc = 0x3CD520u;
label_3cd520:
    // 0x3cd520: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3cd520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cd524:
    // 0x3cd524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cd524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd528:
    // 0x3cd528: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cd528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cd52c:
    // 0x3cd52c: 0x320f809  jalr        $t9
label_3cd530:
    if (ctx->pc == 0x3CD530u) {
        ctx->pc = 0x3CD530u;
            // 0x3cd530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD534u;
        goto label_3cd534;
    }
    ctx->pc = 0x3CD52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CD534u);
        ctx->pc = 0x3CD530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD52Cu;
            // 0x3cd530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CD534u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CD534u; }
            if (ctx->pc != 0x3CD534u) { return; }
        }
        }
    }
    ctx->pc = 0x3CD534u;
label_3cd534:
    // 0x3cd534: 0x1000000a  b           . + 4 + (0xA << 2)
label_3cd538:
    if (ctx->pc == 0x3CD538u) {
        ctx->pc = 0x3CD53Cu;
        goto label_3cd53c;
    }
    ctx->pc = 0x3CD534u;
    {
        const bool branch_taken_0x3cd534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd534) {
            ctx->pc = 0x3CD560u;
            goto label_3cd560;
        }
    }
    ctx->pc = 0x3CD53Cu;
label_3cd53c:
    // 0x3cd53c: 0x86050060  lh          $a1, 0x60($s0)
    ctx->pc = 0x3cd53cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_3cd540:
    // 0x3cd540: 0x86060062  lh          $a2, 0x62($s0)
    ctx->pc = 0x3cd540u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
label_3cd544:
    // 0x3cd544: 0x86070064  lh          $a3, 0x64($s0)
    ctx->pc = 0x3cd544u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_3cd548:
    // 0x3cd548: 0xc0bc760  jal         func_2F1D80
label_3cd54c:
    if (ctx->pc == 0x3CD54Cu) {
        ctx->pc = 0x3CD54Cu;
            // 0x3cd54c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD550u;
        goto label_3cd550;
    }
    ctx->pc = 0x3CD548u;
    SET_GPR_U32(ctx, 31, 0x3CD550u);
    ctx->pc = 0x3CD54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD548u;
            // 0x3cd54c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD550u; }
        if (ctx->pc != 0x3CD550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD550u; }
        if (ctx->pc != 0x3CD550u) { return; }
    }
    ctx->pc = 0x3CD550u;
label_3cd550:
    // 0x3cd550: 0xc0f381c  jal         func_3CE070
label_3cd554:
    if (ctx->pc == 0x3CD554u) {
        ctx->pc = 0x3CD554u;
            // 0x3cd554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD558u;
        goto label_3cd558;
    }
    ctx->pc = 0x3CD550u;
    SET_GPR_U32(ctx, 31, 0x3CD558u);
    ctx->pc = 0x3CD554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD550u;
            // 0x3cd554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CE070u;
    if (runtime->hasFunction(0x3CE070u)) {
        auto targetFn = runtime->lookupFunction(0x3CE070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD558u; }
        if (ctx->pc != 0x3CD558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CE070_0x3ce070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD558u; }
        if (ctx->pc != 0x3CD558u) { return; }
    }
    ctx->pc = 0x3CD558u;
label_3cd558:
    // 0x3cd558: 0xc0f355c  jal         func_3CD570
label_3cd55c:
    if (ctx->pc == 0x3CD55Cu) {
        ctx->pc = 0x3CD55Cu;
            // 0x3cd55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD560u;
        goto label_3cd560;
    }
    ctx->pc = 0x3CD558u;
    SET_GPR_U32(ctx, 31, 0x3CD560u);
    ctx->pc = 0x3CD55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD558u;
            // 0x3cd55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CD570u;
    if (runtime->hasFunction(0x3CD570u)) {
        auto targetFn = runtime->lookupFunction(0x3CD570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD560u; }
        if (ctx->pc != 0x3CD560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CD570_0x3cd570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD560u; }
        if (ctx->pc != 0x3CD560u) { return; }
    }
    ctx->pc = 0x3CD560u;
label_3cd560:
    // 0x3cd560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cd560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3cd564:
    // 0x3cd564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cd568:
    // 0x3cd568: 0x3e00008  jr          $ra
label_3cd56c:
    if (ctx->pc == 0x3CD56Cu) {
        ctx->pc = 0x3CD56Cu;
            // 0x3cd56c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3CD570u;
        goto label_fallthrough_0x3cd568;
    }
    ctx->pc = 0x3CD568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD568u;
            // 0x3cd56c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3cd568:
    ctx->pc = 0x3CD570u;
}
