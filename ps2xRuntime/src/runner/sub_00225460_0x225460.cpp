#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225460
// Address: 0x225460 - 0x225570
void sub_00225460_0x225460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225460_0x225460");
#endif

    switch (ctx->pc) {
        case 0x225460u: goto label_225460;
        case 0x225464u: goto label_225464;
        case 0x225468u: goto label_225468;
        case 0x22546cu: goto label_22546c;
        case 0x225470u: goto label_225470;
        case 0x225474u: goto label_225474;
        case 0x225478u: goto label_225478;
        case 0x22547cu: goto label_22547c;
        case 0x225480u: goto label_225480;
        case 0x225484u: goto label_225484;
        case 0x225488u: goto label_225488;
        case 0x22548cu: goto label_22548c;
        case 0x225490u: goto label_225490;
        case 0x225494u: goto label_225494;
        case 0x225498u: goto label_225498;
        case 0x22549cu: goto label_22549c;
        case 0x2254a0u: goto label_2254a0;
        case 0x2254a4u: goto label_2254a4;
        case 0x2254a8u: goto label_2254a8;
        case 0x2254acu: goto label_2254ac;
        case 0x2254b0u: goto label_2254b0;
        case 0x2254b4u: goto label_2254b4;
        case 0x2254b8u: goto label_2254b8;
        case 0x2254bcu: goto label_2254bc;
        case 0x2254c0u: goto label_2254c0;
        case 0x2254c4u: goto label_2254c4;
        case 0x2254c8u: goto label_2254c8;
        case 0x2254ccu: goto label_2254cc;
        case 0x2254d0u: goto label_2254d0;
        case 0x2254d4u: goto label_2254d4;
        case 0x2254d8u: goto label_2254d8;
        case 0x2254dcu: goto label_2254dc;
        case 0x2254e0u: goto label_2254e0;
        case 0x2254e4u: goto label_2254e4;
        case 0x2254e8u: goto label_2254e8;
        case 0x2254ecu: goto label_2254ec;
        case 0x2254f0u: goto label_2254f0;
        case 0x2254f4u: goto label_2254f4;
        case 0x2254f8u: goto label_2254f8;
        case 0x2254fcu: goto label_2254fc;
        case 0x225500u: goto label_225500;
        case 0x225504u: goto label_225504;
        case 0x225508u: goto label_225508;
        case 0x22550cu: goto label_22550c;
        case 0x225510u: goto label_225510;
        case 0x225514u: goto label_225514;
        case 0x225518u: goto label_225518;
        case 0x22551cu: goto label_22551c;
        case 0x225520u: goto label_225520;
        case 0x225524u: goto label_225524;
        case 0x225528u: goto label_225528;
        case 0x22552cu: goto label_22552c;
        case 0x225530u: goto label_225530;
        case 0x225534u: goto label_225534;
        case 0x225538u: goto label_225538;
        case 0x22553cu: goto label_22553c;
        case 0x225540u: goto label_225540;
        case 0x225544u: goto label_225544;
        case 0x225548u: goto label_225548;
        case 0x22554cu: goto label_22554c;
        case 0x225550u: goto label_225550;
        case 0x225554u: goto label_225554;
        case 0x225558u: goto label_225558;
        case 0x22555cu: goto label_22555c;
        case 0x225560u: goto label_225560;
        case 0x225564u: goto label_225564;
        case 0x225568u: goto label_225568;
        case 0x22556cu: goto label_22556c;
        default: break;
    }

    ctx->pc = 0x225460u;

label_225460:
    // 0x225460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_225464:
    // 0x225464: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x225464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_225468:
    // 0x225468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x225468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22546c:
    // 0x22546c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_225470:
    // 0x225470: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x225470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225474:
    // 0x225474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_225478:
    // 0x225478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22547c:
    // 0x22547c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x22547cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_225480:
    // 0x225480: 0x948301d4  lhu         $v1, 0x1D4($a0)
    ctx->pc = 0x225480u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 468)));
label_225484:
    // 0x225484: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x225484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_225488:
    // 0x225488: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
label_22548c:
    if (ctx->pc == 0x22548Cu) {
        ctx->pc = 0x22548Cu;
            // 0x22548c: 0x249001d0  addiu       $s0, $a0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
        ctx->pc = 0x225490u;
        goto label_225490;
    }
    ctx->pc = 0x225488u;
    {
        const bool branch_taken_0x225488 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225488u;
            // 0x22548c: 0x249001d0  addiu       $s0, $a0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225488) {
            ctx->pc = 0x2254C8u;
            goto label_2254c8;
        }
    }
    ctx->pc = 0x225490u;
label_225490:
    // 0x225490: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x225490u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_225494:
    // 0x225494: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x225494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225498:
    // 0x225498: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x225498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22549c:
    // 0x22549c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22549cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2254a0:
    // 0x2254a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2254a4:
    if (ctx->pc == 0x2254A4u) {
        ctx->pc = 0x2254A8u;
        goto label_2254a8;
    }
    ctx->pc = 0x2254A0u;
    {
        const bool branch_taken_0x2254a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2254a0) {
            ctx->pc = 0x2254B8u;
            goto label_2254b8;
        }
    }
    ctx->pc = 0x2254A8u;
label_2254a8:
    // 0x2254a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2254a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2254ac:
    // 0x2254ac: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2254acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2254b0:
    // 0x2254b0: 0x320f809  jalr        $t9
label_2254b4:
    if (ctx->pc == 0x2254B4u) {
        ctx->pc = 0x2254B4u;
            // 0x2254b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2254B8u;
        goto label_2254b8;
    }
    ctx->pc = 0x2254B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2254B8u);
        ctx->pc = 0x2254B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2254B0u;
            // 0x2254b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2254B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2254B8u; }
            if (ctx->pc != 0x2254B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2254B8u;
label_2254b8:
    // 0x2254b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2254b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2254bc:
    // 0x2254bc: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_2254c0:
    if (ctx->pc == 0x2254C0u) {
        ctx->pc = 0x2254C0u;
            // 0x2254c0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2254C4u;
        goto label_2254c4;
    }
    ctx->pc = 0x2254BCu;
    {
        const bool branch_taken_0x2254bc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2254C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2254BCu;
            // 0x2254c0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254bc) {
            ctx->pc = 0x225494u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225494;
        }
    }
    ctx->pc = 0x2254C4u;
label_2254c4:
    // 0x2254c4: 0x0  nop
    ctx->pc = 0x2254c4u;
    // NOP
label_2254c8:
    // 0x2254c8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x2254c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2254cc:
    // 0x2254cc: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2254ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2254d0:
    // 0x2254d0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_2254d4:
    if (ctx->pc == 0x2254D4u) {
        ctx->pc = 0x2254D8u;
        goto label_2254d8;
    }
    ctx->pc = 0x2254D0u;
    {
        const bool branch_taken_0x2254d0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2254d0) {
            ctx->pc = 0x225548u;
            goto label_225548;
        }
    }
    ctx->pc = 0x2254D8u;
label_2254d8:
    // 0x2254d8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2254d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2254dc:
    // 0x2254dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2254dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2254e0:
    // 0x2254e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2254e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2254e4:
    // 0x2254e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2254e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2254e8:
    // 0x2254e8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_2254ec:
    if (ctx->pc == 0x2254ECu) {
        ctx->pc = 0x2254F0u;
        goto label_2254f0;
    }
    ctx->pc = 0x2254E8u;
    {
        const bool branch_taken_0x2254e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2254e8) {
            ctx->pc = 0x225538u;
            goto label_225538;
        }
    }
    ctx->pc = 0x2254F0u;
label_2254f0:
    // 0x2254f0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x2254f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2254f4:
    // 0x2254f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2254f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2254f8:
    // 0x2254f8: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x2254f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_2254fc:
    // 0x2254fc: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x2254fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_225500:
    // 0x225500: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x225500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225504:
    // 0x225504: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_225508:
    if (ctx->pc == 0x225508u) {
        ctx->pc = 0x225508u;
            // 0x225508: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22550Cu;
        goto label_22550c;
    }
    ctx->pc = 0x225504u;
    {
        const bool branch_taken_0x225504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x225508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225504u;
            // 0x225508: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225504) {
            ctx->pc = 0x225538u;
            goto label_225538;
        }
    }
    ctx->pc = 0x22550Cu;
label_22550c:
    // 0x22550c: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x22550cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_225510:
    // 0x225510: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x225510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225514:
    // 0x225514: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x225514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_225518:
    // 0x225518: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x225518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22551c:
    // 0x22551c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_225520:
    // 0x225520: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x225520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_225524:
    // 0x225524: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x225524u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_225528:
    // 0x225528: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x225528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22552c:
    // 0x22552c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_225530:
    if (ctx->pc == 0x225530u) {
        ctx->pc = 0x225530u;
            // 0x225530: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x225534u;
        goto label_225534;
    }
    ctx->pc = 0x22552Cu;
    {
        const bool branch_taken_0x22552c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22552Cu;
            // 0x225530: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22552c) {
            ctx->pc = 0x225510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225510;
        }
    }
    ctx->pc = 0x225534u;
label_225534:
    // 0x225534: 0x0  nop
    ctx->pc = 0x225534u;
    // NOP
label_225538:
    // 0x225538: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x225538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_22553c:
    // 0x22553c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_225540:
    if (ctx->pc == 0x225540u) {
        ctx->pc = 0x225540u;
            // 0x225540: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x225544u;
        goto label_225544;
    }
    ctx->pc = 0x22553Cu;
    {
        const bool branch_taken_0x22553c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x225540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22553Cu;
            // 0x225540: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22553c) {
            ctx->pc = 0x2254DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2254dc;
        }
    }
    ctx->pc = 0x225544u;
label_225544:
    // 0x225544: 0x0  nop
    ctx->pc = 0x225544u;
    // NOP
label_225548:
    // 0x225548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22554c:
    // 0x22554c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22554cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_225550:
    // 0x225550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225554:
    // 0x225554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225558:
    // 0x225558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22555c:
    // 0x22555c: 0x3e00008  jr          $ra
label_225560:
    if (ctx->pc == 0x225560u) {
        ctx->pc = 0x225560u;
            // 0x225560: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x225564u;
        goto label_225564;
    }
    ctx->pc = 0x22555Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22555Cu;
            // 0x225560: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225564u;
label_225564:
    // 0x225564: 0x0  nop
    ctx->pc = 0x225564u;
    // NOP
label_225568:
    // 0x225568: 0x0  nop
    ctx->pc = 0x225568u;
    // NOP
label_22556c:
    // 0x22556c: 0x0  nop
    ctx->pc = 0x22556cu;
    // NOP
}
