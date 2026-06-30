#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003763E0
// Address: 0x3763e0 - 0x376740
void sub_003763E0_0x3763e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003763E0_0x3763e0");
#endif

    switch (ctx->pc) {
        case 0x3763e0u: goto label_3763e0;
        case 0x3763e4u: goto label_3763e4;
        case 0x3763e8u: goto label_3763e8;
        case 0x3763ecu: goto label_3763ec;
        case 0x3763f0u: goto label_3763f0;
        case 0x3763f4u: goto label_3763f4;
        case 0x3763f8u: goto label_3763f8;
        case 0x3763fcu: goto label_3763fc;
        case 0x376400u: goto label_376400;
        case 0x376404u: goto label_376404;
        case 0x376408u: goto label_376408;
        case 0x37640cu: goto label_37640c;
        case 0x376410u: goto label_376410;
        case 0x376414u: goto label_376414;
        case 0x376418u: goto label_376418;
        case 0x37641cu: goto label_37641c;
        case 0x376420u: goto label_376420;
        case 0x376424u: goto label_376424;
        case 0x376428u: goto label_376428;
        case 0x37642cu: goto label_37642c;
        case 0x376430u: goto label_376430;
        case 0x376434u: goto label_376434;
        case 0x376438u: goto label_376438;
        case 0x37643cu: goto label_37643c;
        case 0x376440u: goto label_376440;
        case 0x376444u: goto label_376444;
        case 0x376448u: goto label_376448;
        case 0x37644cu: goto label_37644c;
        case 0x376450u: goto label_376450;
        case 0x376454u: goto label_376454;
        case 0x376458u: goto label_376458;
        case 0x37645cu: goto label_37645c;
        case 0x376460u: goto label_376460;
        case 0x376464u: goto label_376464;
        case 0x376468u: goto label_376468;
        case 0x37646cu: goto label_37646c;
        case 0x376470u: goto label_376470;
        case 0x376474u: goto label_376474;
        case 0x376478u: goto label_376478;
        case 0x37647cu: goto label_37647c;
        case 0x376480u: goto label_376480;
        case 0x376484u: goto label_376484;
        case 0x376488u: goto label_376488;
        case 0x37648cu: goto label_37648c;
        case 0x376490u: goto label_376490;
        case 0x376494u: goto label_376494;
        case 0x376498u: goto label_376498;
        case 0x37649cu: goto label_37649c;
        case 0x3764a0u: goto label_3764a0;
        case 0x3764a4u: goto label_3764a4;
        case 0x3764a8u: goto label_3764a8;
        case 0x3764acu: goto label_3764ac;
        case 0x3764b0u: goto label_3764b0;
        case 0x3764b4u: goto label_3764b4;
        case 0x3764b8u: goto label_3764b8;
        case 0x3764bcu: goto label_3764bc;
        case 0x3764c0u: goto label_3764c0;
        case 0x3764c4u: goto label_3764c4;
        case 0x3764c8u: goto label_3764c8;
        case 0x3764ccu: goto label_3764cc;
        case 0x3764d0u: goto label_3764d0;
        case 0x3764d4u: goto label_3764d4;
        case 0x3764d8u: goto label_3764d8;
        case 0x3764dcu: goto label_3764dc;
        case 0x3764e0u: goto label_3764e0;
        case 0x3764e4u: goto label_3764e4;
        case 0x3764e8u: goto label_3764e8;
        case 0x3764ecu: goto label_3764ec;
        case 0x3764f0u: goto label_3764f0;
        case 0x3764f4u: goto label_3764f4;
        case 0x3764f8u: goto label_3764f8;
        case 0x3764fcu: goto label_3764fc;
        case 0x376500u: goto label_376500;
        case 0x376504u: goto label_376504;
        case 0x376508u: goto label_376508;
        case 0x37650cu: goto label_37650c;
        case 0x376510u: goto label_376510;
        case 0x376514u: goto label_376514;
        case 0x376518u: goto label_376518;
        case 0x37651cu: goto label_37651c;
        case 0x376520u: goto label_376520;
        case 0x376524u: goto label_376524;
        case 0x376528u: goto label_376528;
        case 0x37652cu: goto label_37652c;
        case 0x376530u: goto label_376530;
        case 0x376534u: goto label_376534;
        case 0x376538u: goto label_376538;
        case 0x37653cu: goto label_37653c;
        case 0x376540u: goto label_376540;
        case 0x376544u: goto label_376544;
        case 0x376548u: goto label_376548;
        case 0x37654cu: goto label_37654c;
        case 0x376550u: goto label_376550;
        case 0x376554u: goto label_376554;
        case 0x376558u: goto label_376558;
        case 0x37655cu: goto label_37655c;
        case 0x376560u: goto label_376560;
        case 0x376564u: goto label_376564;
        case 0x376568u: goto label_376568;
        case 0x37656cu: goto label_37656c;
        case 0x376570u: goto label_376570;
        case 0x376574u: goto label_376574;
        case 0x376578u: goto label_376578;
        case 0x37657cu: goto label_37657c;
        case 0x376580u: goto label_376580;
        case 0x376584u: goto label_376584;
        case 0x376588u: goto label_376588;
        case 0x37658cu: goto label_37658c;
        case 0x376590u: goto label_376590;
        case 0x376594u: goto label_376594;
        case 0x376598u: goto label_376598;
        case 0x37659cu: goto label_37659c;
        case 0x3765a0u: goto label_3765a0;
        case 0x3765a4u: goto label_3765a4;
        case 0x3765a8u: goto label_3765a8;
        case 0x3765acu: goto label_3765ac;
        case 0x3765b0u: goto label_3765b0;
        case 0x3765b4u: goto label_3765b4;
        case 0x3765b8u: goto label_3765b8;
        case 0x3765bcu: goto label_3765bc;
        case 0x3765c0u: goto label_3765c0;
        case 0x3765c4u: goto label_3765c4;
        case 0x3765c8u: goto label_3765c8;
        case 0x3765ccu: goto label_3765cc;
        case 0x3765d0u: goto label_3765d0;
        case 0x3765d4u: goto label_3765d4;
        case 0x3765d8u: goto label_3765d8;
        case 0x3765dcu: goto label_3765dc;
        case 0x3765e0u: goto label_3765e0;
        case 0x3765e4u: goto label_3765e4;
        case 0x3765e8u: goto label_3765e8;
        case 0x3765ecu: goto label_3765ec;
        case 0x3765f0u: goto label_3765f0;
        case 0x3765f4u: goto label_3765f4;
        case 0x3765f8u: goto label_3765f8;
        case 0x3765fcu: goto label_3765fc;
        case 0x376600u: goto label_376600;
        case 0x376604u: goto label_376604;
        case 0x376608u: goto label_376608;
        case 0x37660cu: goto label_37660c;
        case 0x376610u: goto label_376610;
        case 0x376614u: goto label_376614;
        case 0x376618u: goto label_376618;
        case 0x37661cu: goto label_37661c;
        case 0x376620u: goto label_376620;
        case 0x376624u: goto label_376624;
        case 0x376628u: goto label_376628;
        case 0x37662cu: goto label_37662c;
        case 0x376630u: goto label_376630;
        case 0x376634u: goto label_376634;
        case 0x376638u: goto label_376638;
        case 0x37663cu: goto label_37663c;
        case 0x376640u: goto label_376640;
        case 0x376644u: goto label_376644;
        case 0x376648u: goto label_376648;
        case 0x37664cu: goto label_37664c;
        case 0x376650u: goto label_376650;
        case 0x376654u: goto label_376654;
        case 0x376658u: goto label_376658;
        case 0x37665cu: goto label_37665c;
        case 0x376660u: goto label_376660;
        case 0x376664u: goto label_376664;
        case 0x376668u: goto label_376668;
        case 0x37666cu: goto label_37666c;
        case 0x376670u: goto label_376670;
        case 0x376674u: goto label_376674;
        case 0x376678u: goto label_376678;
        case 0x37667cu: goto label_37667c;
        case 0x376680u: goto label_376680;
        case 0x376684u: goto label_376684;
        case 0x376688u: goto label_376688;
        case 0x37668cu: goto label_37668c;
        case 0x376690u: goto label_376690;
        case 0x376694u: goto label_376694;
        case 0x376698u: goto label_376698;
        case 0x37669cu: goto label_37669c;
        case 0x3766a0u: goto label_3766a0;
        case 0x3766a4u: goto label_3766a4;
        case 0x3766a8u: goto label_3766a8;
        case 0x3766acu: goto label_3766ac;
        case 0x3766b0u: goto label_3766b0;
        case 0x3766b4u: goto label_3766b4;
        case 0x3766b8u: goto label_3766b8;
        case 0x3766bcu: goto label_3766bc;
        case 0x3766c0u: goto label_3766c0;
        case 0x3766c4u: goto label_3766c4;
        case 0x3766c8u: goto label_3766c8;
        case 0x3766ccu: goto label_3766cc;
        case 0x3766d0u: goto label_3766d0;
        case 0x3766d4u: goto label_3766d4;
        case 0x3766d8u: goto label_3766d8;
        case 0x3766dcu: goto label_3766dc;
        case 0x3766e0u: goto label_3766e0;
        case 0x3766e4u: goto label_3766e4;
        case 0x3766e8u: goto label_3766e8;
        case 0x3766ecu: goto label_3766ec;
        case 0x3766f0u: goto label_3766f0;
        case 0x3766f4u: goto label_3766f4;
        case 0x3766f8u: goto label_3766f8;
        case 0x3766fcu: goto label_3766fc;
        case 0x376700u: goto label_376700;
        case 0x376704u: goto label_376704;
        case 0x376708u: goto label_376708;
        case 0x37670cu: goto label_37670c;
        case 0x376710u: goto label_376710;
        case 0x376714u: goto label_376714;
        case 0x376718u: goto label_376718;
        case 0x37671cu: goto label_37671c;
        case 0x376720u: goto label_376720;
        case 0x376724u: goto label_376724;
        case 0x376728u: goto label_376728;
        case 0x37672cu: goto label_37672c;
        case 0x376730u: goto label_376730;
        case 0x376734u: goto label_376734;
        case 0x376738u: goto label_376738;
        case 0x37673cu: goto label_37673c;
        default: break;
    }

    ctx->pc = 0x3763e0u;

label_3763e0:
    // 0x3763e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3763e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3763e4:
    // 0x3763e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3763e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3763e8:
    // 0x3763e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3763e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3763ec:
    // 0x3763ec: 0x27a300dc  addiu       $v1, $sp, 0xDC
    ctx->pc = 0x3763ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_3763f0:
    // 0x3763f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3763f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3763f4:
    // 0x3763f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3763f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3763f8:
    // 0x3763f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3763f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3763fc:
    // 0x3763fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3763fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_376400:
    // 0x376400: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x376400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_376404:
    // 0x376404: 0x267101b0  addiu       $s1, $s3, 0x1B0
    ctx->pc = 0x376404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 432));
label_376408:
    // 0x376408: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x376408u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37640c:
    // 0x37640c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37640cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_376410:
    // 0x376410: 0x84920204  lh          $s2, 0x204($a0)
    ctx->pc = 0x376410u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 516)));
label_376414:
    // 0x376414: 0x8c440c78  lw          $a0, 0xC78($v0)
    ctx->pc = 0x376414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_376418:
    // 0x376418: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x376418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_37641c:
    // 0x37641c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_376420:
    if (ctx->pc == 0x376420u) {
        ctx->pc = 0x376420u;
            // 0x376420: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x376424u;
        goto label_376424;
    }
    ctx->pc = 0x37641Cu;
    {
        const bool branch_taken_0x37641c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x376420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37641Cu;
            // 0x376420: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37641c) {
            ctx->pc = 0x376440u;
            goto label_376440;
        }
    }
    ctx->pc = 0x376424u;
label_376424:
    // 0x376424: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x376424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_376428:
    // 0x376428: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x376428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_37642c:
    // 0x37642c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37642cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_376430:
    // 0x376430: 0x0  nop
    ctx->pc = 0x376430u;
    // NOP
label_376434:
    // 0x376434: 0x0  nop
    ctx->pc = 0x376434u;
    // NOP
label_376438:
    // 0x376438: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_37643c:
    if (ctx->pc == 0x37643Cu) {
        ctx->pc = 0x376440u;
        goto label_376440;
    }
    ctx->pc = 0x376438u;
    {
        const bool branch_taken_0x376438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x376438) {
            ctx->pc = 0x376424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_376424;
        }
    }
    ctx->pc = 0x376440u;
label_376440:
    // 0x376440: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x376440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_376444:
    // 0x376444: 0x26620100  addiu       $v0, $s3, 0x100
    ctx->pc = 0x376444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_376448:
    // 0x376448: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x376448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_37644c:
    // 0x37644c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x37644cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_376450:
    // 0x376450: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x376450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_376454:
    // 0x376454: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x376454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_376458:
    // 0x376458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37645c:
    // 0x37645c: 0xa3a300dc  sb          $v1, 0xDC($sp)
    ctx->pc = 0x37645cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 220), (uint8_t)GPR_U32(ctx, 3));
label_376460:
    // 0x376460: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x376460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_376464:
    // 0x376464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x376464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_376468:
    // 0x376468: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x376468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37646c:
    // 0x37646c: 0x27a900dc  addiu       $t1, $sp, 0xDC
    ctx->pc = 0x37646cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_376470:
    // 0x376470: 0xc0b8704  jal         func_2E1C10
label_376474:
    if (ctx->pc == 0x376474u) {
        ctx->pc = 0x376474u;
            // 0x376474: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376478u;
        goto label_376478;
    }
    ctx->pc = 0x376470u;
    SET_GPR_U32(ctx, 31, 0x376478u);
    ctx->pc = 0x376474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376470u;
            // 0x376474: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376478u; }
        if (ctx->pc != 0x376478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376478u; }
        if (ctx->pc != 0x376478u) { return; }
    }
    ctx->pc = 0x376478u;
label_376478:
    // 0x376478: 0x96220050  lhu         $v0, 0x50($s1)
    ctx->pc = 0x376478u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
label_37647c:
    // 0x37647c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_376480:
    if (ctx->pc == 0x376480u) {
        ctx->pc = 0x376480u;
            // 0x376480: 0x26620100  addiu       $v0, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->pc = 0x376484u;
        goto label_376484;
    }
    ctx->pc = 0x37647Cu;
    {
        const bool branch_taken_0x37647c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37647c) {
            ctx->pc = 0x376480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37647Cu;
            // 0x376480: 0x26620100  addiu       $v0, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37649Cu;
            goto label_37649c;
        }
    }
    ctx->pc = 0x376484u;
label_376484:
    // 0x376484: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x376484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_376488:
    // 0x376488: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x376488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37648c:
    // 0x37648c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37648cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_376490:
    // 0x376490: 0xc0b89e4  jal         func_2E2790
label_376494:
    if (ctx->pc == 0x376494u) {
        ctx->pc = 0x376494u;
            // 0x376494: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x376498u;
        goto label_376498;
    }
    ctx->pc = 0x376490u;
    SET_GPR_U32(ctx, 31, 0x376498u);
    ctx->pc = 0x376494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376490u;
            // 0x376494: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376498u; }
        if (ctx->pc != 0x376498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376498u; }
        if (ctx->pc != 0x376498u) { return; }
    }
    ctx->pc = 0x376498u;
label_376498:
    // 0x376498: 0x26620100  addiu       $v0, $s3, 0x100
    ctx->pc = 0x376498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_37649c:
    // 0x37649c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x37649cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3764a0:
    // 0x3764a0: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x3764a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_3764a4:
    // 0x3764a4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3764a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_3764a8:
    // 0x3764a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3764a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3764ac:
    // 0x3764ac: 0xc0b82c4  jal         func_2E0B10
label_3764b0:
    if (ctx->pc == 0x3764B0u) {
        ctx->pc = 0x3764B0u;
            // 0x3764b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3764B4u;
        goto label_3764b4;
    }
    ctx->pc = 0x3764ACu;
    SET_GPR_U32(ctx, 31, 0x3764B4u);
    ctx->pc = 0x3764B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3764ACu;
            // 0x3764b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3764B4u; }
        if (ctx->pc != 0x3764B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3764B4u; }
        if (ctx->pc != 0x3764B4u) { return; }
    }
    ctx->pc = 0x3764B4u;
label_3764b4:
    // 0x3764b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3764b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3764b8:
    // 0x3764b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3764b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3764bc:
    // 0x3764bc: 0xa6230050  sh          $v1, 0x50($s1)
    ctx->pc = 0x3764bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 3));
label_3764c0:
    // 0x3764c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3764c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3764c4:
    // 0x3764c4: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x3764c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3764c8:
    // 0x3764c8: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x3764c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_3764cc:
    // 0x3764cc: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x3764ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3764d0:
    // 0x3764d0: 0x3462097b  ori         $v0, $v1, 0x97B
    ctx->pc = 0x3764d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_3764d4:
    // 0x3764d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3764d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3764d8:
    // 0x3764d8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3764d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3764dc:
    // 0x3764dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3764dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3764e0:
    // 0x3764e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3764e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3764e4:
    // 0x3764e4: 0xc0b8160  jal         func_2E0580
label_3764e8:
    if (ctx->pc == 0x3764E8u) {
        ctx->pc = 0x3764E8u;
            // 0x3764e8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3764ECu;
        goto label_3764ec;
    }
    ctx->pc = 0x3764E4u;
    SET_GPR_U32(ctx, 31, 0x3764ECu);
    ctx->pc = 0x3764E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3764E4u;
            // 0x3764e8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3764ECu; }
        if (ctx->pc != 0x3764ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3764ECu; }
        if (ctx->pc != 0x3764ECu) { return; }
    }
    ctx->pc = 0x3764ECu;
label_3764ec:
    // 0x3764ec: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x3764ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3764f0:
    // 0x3764f0: 0xc04cc04  jal         func_133010
label_3764f4:
    if (ctx->pc == 0x3764F4u) {
        ctx->pc = 0x3764F4u;
            // 0x3764f4: 0x266402a0  addiu       $a0, $s3, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
        ctx->pc = 0x3764F8u;
        goto label_3764f8;
    }
    ctx->pc = 0x3764F0u;
    SET_GPR_U32(ctx, 31, 0x3764F8u);
    ctx->pc = 0x3764F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3764F0u;
            // 0x3764f4: 0x266402a0  addiu       $a0, $s3, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3764F8u; }
        if (ctx->pc != 0x3764F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3764F8u; }
        if (ctx->pc != 0x3764F8u) { return; }
    }
    ctx->pc = 0x3764F8u;
label_3764f8:
    // 0x3764f8: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x3764f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_3764fc:
    // 0x3764fc: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x3764fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_376500:
    // 0x376500: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x376500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_376504:
    // 0x376504: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x376504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_376508:
    // 0x376508: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x376508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37650c:
    // 0x37650c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x37650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376510:
    // 0x376510: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x376510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_376514:
    // 0x376514: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x376514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_376518:
    // 0x376518: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x376518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_37651c:
    // 0x37651c: 0xc0892a0  jal         func_224A80
label_376520:
    if (ctx->pc == 0x376520u) {
        ctx->pc = 0x376520u;
            // 0x376520: 0xe7a300bc  swc1        $f3, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->pc = 0x376524u;
        goto label_376524;
    }
    ctx->pc = 0x37651Cu;
    SET_GPR_U32(ctx, 31, 0x376524u);
    ctx->pc = 0x376520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37651Cu;
            // 0x376520: 0xe7a300bc  swc1        $f3, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376524u; }
        if (ctx->pc != 0x376524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376524u; }
        if (ctx->pc != 0x376524u) { return; }
    }
    ctx->pc = 0x376524u;
label_376524:
    // 0x376524: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x376524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_376528:
    // 0x376528: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x376528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_37652c:
    // 0x37652c: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x37652cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_376530:
    // 0x376530: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x376530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_376534:
    // 0x376534: 0xae620210  sw          $v0, 0x210($s3)
    ctx->pc = 0x376534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 2));
label_376538:
    // 0x376538: 0xc04cc90  jal         func_133240
label_37653c:
    if (ctx->pc == 0x37653Cu) {
        ctx->pc = 0x37653Cu;
            // 0x37653c: 0x266502a0  addiu       $a1, $s3, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
        ctx->pc = 0x376540u;
        goto label_376540;
    }
    ctx->pc = 0x376538u;
    SET_GPR_U32(ctx, 31, 0x376540u);
    ctx->pc = 0x37653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376538u;
            // 0x37653c: 0x266502a0  addiu       $a1, $s3, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376540u; }
        if (ctx->pc != 0x376540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376540u; }
        if (ctx->pc != 0x376540u) { return; }
    }
    ctx->pc = 0x376540u;
label_376540:
    // 0x376540: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x376540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_376544:
    // 0x376544: 0xc04cc44  jal         func_133110
label_376548:
    if (ctx->pc == 0x376548u) {
        ctx->pc = 0x376548u;
            // 0x376548: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37654Cu;
        goto label_37654c;
    }
    ctx->pc = 0x376544u;
    SET_GPR_U32(ctx, 31, 0x37654Cu);
    ctx->pc = 0x376548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376544u;
            // 0x376548: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37654Cu; }
        if (ctx->pc != 0x37654Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37654Cu; }
        if (ctx->pc != 0x37654Cu) { return; }
    }
    ctx->pc = 0x37654Cu;
label_37654c:
    // 0x37654c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x37654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376550:
    // 0x376550: 0x26700100  addiu       $s0, $s3, 0x100
    ctx->pc = 0x376550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_376554:
    // 0x376554: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x376554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376558:
    // 0x376558: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x376558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37655c:
    // 0x37655c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x37655cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_376560:
    // 0x376560: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x376560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_376564:
    // 0x376564: 0x46000344  c1          0x344
    ctx->pc = 0x376564u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_376568:
    // 0x376568: 0x0  nop
    ctx->pc = 0x376568u;
    // NOP
label_37656c:
    // 0x37656c: 0x0  nop
    ctx->pc = 0x37656cu;
    // NOP
label_376570:
    // 0x376570: 0xc04780a  jal         func_11E028
label_376574:
    if (ctx->pc == 0x376574u) {
        ctx->pc = 0x376578u;
        goto label_376578;
    }
    ctx->pc = 0x376570u;
    SET_GPR_U32(ctx, 31, 0x376578u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376578u; }
        if (ctx->pc != 0x376578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376578u; }
        if (ctx->pc != 0x376578u) { return; }
    }
    ctx->pc = 0x376578u;
label_376578:
    // 0x376578: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x376578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37657c:
    // 0x37657c: 0xc7ad00c8  lwc1        $f13, 0xC8($sp)
    ctx->pc = 0x37657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_376580:
    // 0x376580: 0xc04780a  jal         func_11E028
label_376584:
    if (ctx->pc == 0x376584u) {
        ctx->pc = 0x376584u;
            // 0x376584: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x376588u;
        goto label_376588;
    }
    ctx->pc = 0x376580u;
    SET_GPR_U32(ctx, 31, 0x376588u);
    ctx->pc = 0x376584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376580u;
            // 0x376584: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376588u; }
        if (ctx->pc != 0x376588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376588u; }
        if (ctx->pc != 0x376588u) { return; }
    }
    ctx->pc = 0x376588u;
label_376588:
    // 0x376588: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x376588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_37658c:
    // 0x37658c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x37658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_376590:
    // 0x376590: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x376590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_376594:
    // 0x376594: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x376594u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_376598:
    // 0x376598: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x376598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_37659c:
    // 0x37659c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37659cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3765a0:
    // 0x3765a0: 0x0  nop
    ctx->pc = 0x3765a0u;
    // NOP
label_3765a4:
    // 0x3765a4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3765a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3765a8:
    // 0x3765a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3765a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3765ac:
    // 0x3765ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3765acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3765b0:
    // 0x3765b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3765b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3765b4:
    // 0x3765b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3765b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3765b8:
    // 0x3765b8: 0xc04c970  jal         func_1325C0
label_3765bc:
    if (ctx->pc == 0x3765BCu) {
        ctx->pc = 0x3765BCu;
            // 0x3765bc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x3765C0u;
        goto label_3765c0;
    }
    ctx->pc = 0x3765B8u;
    SET_GPR_U32(ctx, 31, 0x3765C0u);
    ctx->pc = 0x3765BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3765B8u;
            // 0x3765bc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3765C0u; }
        if (ctx->pc != 0x3765C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3765C0u; }
        if (ctx->pc != 0x3765C0u) { return; }
    }
    ctx->pc = 0x3765C0u;
label_3765c0:
    // 0x3765c0: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x3765c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_3765c4:
    // 0x3765c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3765c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3765c8:
    // 0x3765c8: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x3765c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_3765cc:
    // 0x3765cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3765ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3765d0:
    // 0x3765d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3765d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3765d4:
    // 0x3765d4: 0x0  nop
    ctx->pc = 0x3765d4u;
    // NOP
label_3765d8:
    // 0x3765d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3765d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3765dc:
    // 0x3765dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3765dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3765e0:
    // 0x3765e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3765e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3765e4:
    // 0x3765e4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3765e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3765e8:
    // 0x3765e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3765e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3765ec:
    // 0x3765ec: 0xc04c970  jal         func_1325C0
label_3765f0:
    if (ctx->pc == 0x3765F0u) {
        ctx->pc = 0x3765F0u;
            // 0x3765f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3765F4u;
        goto label_3765f4;
    }
    ctx->pc = 0x3765ECu;
    SET_GPR_U32(ctx, 31, 0x3765F4u);
    ctx->pc = 0x3765F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3765ECu;
            // 0x3765f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3765F4u; }
        if (ctx->pc != 0x3765F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3765F4u; }
        if (ctx->pc != 0x3765F4u) { return; }
    }
    ctx->pc = 0x3765F4u;
label_3765f4:
    // 0x3765f4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3765f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_3765f8:
    // 0x3765f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3765f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3765fc:
    // 0x3765fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3765fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_376600:
    // 0x376600: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x376600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_376604:
    // 0x376604: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x376604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_376608:
    // 0x376608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x376608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37660c:
    // 0x37660c: 0xc04c970  jal         func_1325C0
label_376610:
    if (ctx->pc == 0x376610u) {
        ctx->pc = 0x376610u;
            // 0x376610: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x376614u;
        goto label_376614;
    }
    ctx->pc = 0x37660Cu;
    SET_GPR_U32(ctx, 31, 0x376614u);
    ctx->pc = 0x376610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37660Cu;
            // 0x376610: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376614u; }
        if (ctx->pc != 0x376614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376614u; }
        if (ctx->pc != 0x376614u) { return; }
    }
    ctx->pc = 0x376614u;
label_376614:
    // 0x376614: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x376614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_376618:
    // 0x376618: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x376618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_37661c:
    // 0x37661c: 0xc04c72c  jal         func_131CB0
label_376620:
    if (ctx->pc == 0x376620u) {
        ctx->pc = 0x376620u;
            // 0x376620: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x376624u;
        goto label_376624;
    }
    ctx->pc = 0x37661Cu;
    SET_GPR_U32(ctx, 31, 0x376624u);
    ctx->pc = 0x376620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37661Cu;
            // 0x376620: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376624u; }
        if (ctx->pc != 0x376624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376624u; }
        if (ctx->pc != 0x376624u) { return; }
    }
    ctx->pc = 0x376624u;
label_376624:
    // 0x376624: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x376624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_376628:
    // 0x376628: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x376628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_37662c:
    // 0x37662c: 0xc04c72c  jal         func_131CB0
label_376630:
    if (ctx->pc == 0x376630u) {
        ctx->pc = 0x376630u;
            // 0x376630: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376634u;
        goto label_376634;
    }
    ctx->pc = 0x37662Cu;
    SET_GPR_U32(ctx, 31, 0x376634u);
    ctx->pc = 0x376630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37662Cu;
            // 0x376630: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376634u; }
        if (ctx->pc != 0x376634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376634u; }
        if (ctx->pc != 0x376634u) { return; }
    }
    ctx->pc = 0x376634u;
label_376634:
    // 0x376634: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x376634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_376638:
    // 0x376638: 0xc04c74c  jal         func_131D30
label_37663c:
    if (ctx->pc == 0x37663Cu) {
        ctx->pc = 0x37663Cu;
            // 0x37663c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x376640u;
        goto label_376640;
    }
    ctx->pc = 0x376638u;
    SET_GPR_U32(ctx, 31, 0x376640u);
    ctx->pc = 0x37663Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376638u;
            // 0x37663c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376640u; }
        if (ctx->pc != 0x376640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376640u; }
        if (ctx->pc != 0x376640u) { return; }
    }
    ctx->pc = 0x376640u;
label_376640:
    // 0x376640: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x376640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_376644:
    // 0x376644: 0xc04c74c  jal         func_131D30
label_376648:
    if (ctx->pc == 0x376648u) {
        ctx->pc = 0x376648u;
            // 0x376648: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x37664Cu;
        goto label_37664c;
    }
    ctx->pc = 0x376644u;
    SET_GPR_U32(ctx, 31, 0x37664Cu);
    ctx->pc = 0x376648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376644u;
            // 0x376648: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37664Cu; }
        if (ctx->pc != 0x37664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37664Cu; }
        if (ctx->pc != 0x37664Cu) { return; }
    }
    ctx->pc = 0x37664Cu;
label_37664c:
    // 0x37664c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x37664cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_376650:
    // 0x376650: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x376650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_376654:
    // 0x376654: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x376654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_376658:
    // 0x376658: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x376658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_37665c:
    // 0x37665c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x37665cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_376660:
    // 0x376660: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x376660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_376664:
    // 0x376664: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x376664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_376668:
    // 0x376668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37666c:
    // 0x37666c: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x37666cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_376670:
    // 0x376670: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x376670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_376674:
    // 0x376674: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x376674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_376678:
    // 0x376678: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x376678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_37667c:
    // 0x37667c: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x37667cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_376680:
    // 0x376680: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x376680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_376684:
    // 0x376684: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x376684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_376688:
    // 0x376688: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x376688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37668c:
    // 0x37668c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x37668cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_376690:
    // 0x376690: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x376690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_376694:
    // 0x376694: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x376694u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_376698:
    // 0x376698: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x376698u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_37669c:
    // 0x37669c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x37669cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3766a0:
    // 0x3766a0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3766a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3766a4:
    // 0x3766a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3766a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3766a8:
    // 0x3766a8: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x3766a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3766ac:
    // 0x3766ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3766acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3766b0:
    // 0x3766b0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3766b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3766b4:
    // 0x3766b4: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3766b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3766b8:
    // 0x3766b8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3766b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3766bc:
    // 0x3766bc: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3766bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3766c0:
    // 0x3766c0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3766c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3766c4:
    // 0x3766c4: 0x46022842  mul.s       $f1, $f5, $f2
    ctx->pc = 0x3766c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3766c8:
    // 0x3766c8: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x3766c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3766cc:
    // 0x3766cc: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x3766ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3766d0:
    // 0x3766d0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3766d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3766d4:
    // 0x3766d4: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x3766d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_3766d8:
    // 0x3766d8: 0xc088b74  jal         func_222DD0
label_3766dc:
    if (ctx->pc == 0x3766DCu) {
        ctx->pc = 0x3766DCu;
            // 0x3766dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3766E0u;
        goto label_3766e0;
    }
    ctx->pc = 0x3766D8u;
    SET_GPR_U32(ctx, 31, 0x3766E0u);
    ctx->pc = 0x3766DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3766D8u;
            // 0x3766dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3766E0u; }
        if (ctx->pc != 0x3766E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3766E0u; }
        if (ctx->pc != 0x3766E0u) { return; }
    }
    ctx->pc = 0x3766E0u;
label_3766e0:
    // 0x3766e0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3766e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3766e4:
    // 0x3766e4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3766e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3766e8:
    // 0x3766e8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3766e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3766ec:
    // 0x3766ec: 0x320f809  jalr        $t9
label_3766f0:
    if (ctx->pc == 0x3766F0u) {
        ctx->pc = 0x3766F0u;
            // 0x3766f0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3766F4u;
        goto label_3766f4;
    }
    ctx->pc = 0x3766ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3766F4u);
        ctx->pc = 0x3766F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3766ECu;
            // 0x3766f0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3766F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3766F4u; }
            if (ctx->pc != 0x3766F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3766F4u;
label_3766f4:
    // 0x3766f4: 0xae600270  sw          $zero, 0x270($s3)
    ctx->pc = 0x3766f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 624), GPR_U32(ctx, 0));
label_3766f8:
    // 0x3766f8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3766f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3766fc:
    // 0x3766fc: 0xae600268  sw          $zero, 0x268($s3)
    ctx->pc = 0x3766fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 616), GPR_U32(ctx, 0));
label_376700:
    // 0x376700: 0x26630274  addiu       $v1, $s3, 0x274
    ctx->pc = 0x376700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 628));
label_376704:
    // 0x376704: 0xae600264  sw          $zero, 0x264($s3)
    ctx->pc = 0x376704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 612), GPR_U32(ctx, 0));
label_376708:
    // 0x376708: 0xae600260  sw          $zero, 0x260($s3)
    ctx->pc = 0x376708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 608), GPR_U32(ctx, 0));
label_37670c:
    // 0x37670c: 0xae64026c  sw          $a0, 0x26C($s3)
    ctx->pc = 0x37670cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 620), GPR_U32(ctx, 4));
label_376710:
    // 0x376710: 0xb0600007  sdl         $zero, 0x7($v1)
    ctx->pc = 0x376710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_376714:
    // 0x376714: 0xb4600000  sdr         $zero, 0x0($v1)
    ctx->pc = 0x376714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_376718:
    // 0x376718: 0xae60027c  sw          $zero, 0x27C($s3)
    ctx->pc = 0x376718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 636), GPR_U32(ctx, 0));
label_37671c:
    // 0x37671c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_376720:
    // 0x376720: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x376720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_376724:
    // 0x376724: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x376724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_376728:
    // 0x376728: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x376728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37672c:
    // 0x37672c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37672cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_376730:
    // 0x376730: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x376730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_376734:
    // 0x376734: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x376734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_376738:
    // 0x376738: 0x3e00008  jr          $ra
label_37673c:
    if (ctx->pc == 0x37673Cu) {
        ctx->pc = 0x37673Cu;
            // 0x37673c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x376740u;
        goto label_fallthrough_0x376738;
    }
    ctx->pc = 0x376738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37673Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376738u;
            // 0x37673c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x376738:
    ctx->pc = 0x376740u;
}
