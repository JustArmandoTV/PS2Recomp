#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F63F0
// Address: 0x2f63f0 - 0x2f6630
void sub_002F63F0_0x2f63f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F63F0_0x2f63f0");
#endif

    switch (ctx->pc) {
        case 0x2f63f0u: goto label_2f63f0;
        case 0x2f63f4u: goto label_2f63f4;
        case 0x2f63f8u: goto label_2f63f8;
        case 0x2f63fcu: goto label_2f63fc;
        case 0x2f6400u: goto label_2f6400;
        case 0x2f6404u: goto label_2f6404;
        case 0x2f6408u: goto label_2f6408;
        case 0x2f640cu: goto label_2f640c;
        case 0x2f6410u: goto label_2f6410;
        case 0x2f6414u: goto label_2f6414;
        case 0x2f6418u: goto label_2f6418;
        case 0x2f641cu: goto label_2f641c;
        case 0x2f6420u: goto label_2f6420;
        case 0x2f6424u: goto label_2f6424;
        case 0x2f6428u: goto label_2f6428;
        case 0x2f642cu: goto label_2f642c;
        case 0x2f6430u: goto label_2f6430;
        case 0x2f6434u: goto label_2f6434;
        case 0x2f6438u: goto label_2f6438;
        case 0x2f643cu: goto label_2f643c;
        case 0x2f6440u: goto label_2f6440;
        case 0x2f6444u: goto label_2f6444;
        case 0x2f6448u: goto label_2f6448;
        case 0x2f644cu: goto label_2f644c;
        case 0x2f6450u: goto label_2f6450;
        case 0x2f6454u: goto label_2f6454;
        case 0x2f6458u: goto label_2f6458;
        case 0x2f645cu: goto label_2f645c;
        case 0x2f6460u: goto label_2f6460;
        case 0x2f6464u: goto label_2f6464;
        case 0x2f6468u: goto label_2f6468;
        case 0x2f646cu: goto label_2f646c;
        case 0x2f6470u: goto label_2f6470;
        case 0x2f6474u: goto label_2f6474;
        case 0x2f6478u: goto label_2f6478;
        case 0x2f647cu: goto label_2f647c;
        case 0x2f6480u: goto label_2f6480;
        case 0x2f6484u: goto label_2f6484;
        case 0x2f6488u: goto label_2f6488;
        case 0x2f648cu: goto label_2f648c;
        case 0x2f6490u: goto label_2f6490;
        case 0x2f6494u: goto label_2f6494;
        case 0x2f6498u: goto label_2f6498;
        case 0x2f649cu: goto label_2f649c;
        case 0x2f64a0u: goto label_2f64a0;
        case 0x2f64a4u: goto label_2f64a4;
        case 0x2f64a8u: goto label_2f64a8;
        case 0x2f64acu: goto label_2f64ac;
        case 0x2f64b0u: goto label_2f64b0;
        case 0x2f64b4u: goto label_2f64b4;
        case 0x2f64b8u: goto label_2f64b8;
        case 0x2f64bcu: goto label_2f64bc;
        case 0x2f64c0u: goto label_2f64c0;
        case 0x2f64c4u: goto label_2f64c4;
        case 0x2f64c8u: goto label_2f64c8;
        case 0x2f64ccu: goto label_2f64cc;
        case 0x2f64d0u: goto label_2f64d0;
        case 0x2f64d4u: goto label_2f64d4;
        case 0x2f64d8u: goto label_2f64d8;
        case 0x2f64dcu: goto label_2f64dc;
        case 0x2f64e0u: goto label_2f64e0;
        case 0x2f64e4u: goto label_2f64e4;
        case 0x2f64e8u: goto label_2f64e8;
        case 0x2f64ecu: goto label_2f64ec;
        case 0x2f64f0u: goto label_2f64f0;
        case 0x2f64f4u: goto label_2f64f4;
        case 0x2f64f8u: goto label_2f64f8;
        case 0x2f64fcu: goto label_2f64fc;
        case 0x2f6500u: goto label_2f6500;
        case 0x2f6504u: goto label_2f6504;
        case 0x2f6508u: goto label_2f6508;
        case 0x2f650cu: goto label_2f650c;
        case 0x2f6510u: goto label_2f6510;
        case 0x2f6514u: goto label_2f6514;
        case 0x2f6518u: goto label_2f6518;
        case 0x2f651cu: goto label_2f651c;
        case 0x2f6520u: goto label_2f6520;
        case 0x2f6524u: goto label_2f6524;
        case 0x2f6528u: goto label_2f6528;
        case 0x2f652cu: goto label_2f652c;
        case 0x2f6530u: goto label_2f6530;
        case 0x2f6534u: goto label_2f6534;
        case 0x2f6538u: goto label_2f6538;
        case 0x2f653cu: goto label_2f653c;
        case 0x2f6540u: goto label_2f6540;
        case 0x2f6544u: goto label_2f6544;
        case 0x2f6548u: goto label_2f6548;
        case 0x2f654cu: goto label_2f654c;
        case 0x2f6550u: goto label_2f6550;
        case 0x2f6554u: goto label_2f6554;
        case 0x2f6558u: goto label_2f6558;
        case 0x2f655cu: goto label_2f655c;
        case 0x2f6560u: goto label_2f6560;
        case 0x2f6564u: goto label_2f6564;
        case 0x2f6568u: goto label_2f6568;
        case 0x2f656cu: goto label_2f656c;
        case 0x2f6570u: goto label_2f6570;
        case 0x2f6574u: goto label_2f6574;
        case 0x2f6578u: goto label_2f6578;
        case 0x2f657cu: goto label_2f657c;
        case 0x2f6580u: goto label_2f6580;
        case 0x2f6584u: goto label_2f6584;
        case 0x2f6588u: goto label_2f6588;
        case 0x2f658cu: goto label_2f658c;
        case 0x2f6590u: goto label_2f6590;
        case 0x2f6594u: goto label_2f6594;
        case 0x2f6598u: goto label_2f6598;
        case 0x2f659cu: goto label_2f659c;
        case 0x2f65a0u: goto label_2f65a0;
        case 0x2f65a4u: goto label_2f65a4;
        case 0x2f65a8u: goto label_2f65a8;
        case 0x2f65acu: goto label_2f65ac;
        case 0x2f65b0u: goto label_2f65b0;
        case 0x2f65b4u: goto label_2f65b4;
        case 0x2f65b8u: goto label_2f65b8;
        case 0x2f65bcu: goto label_2f65bc;
        case 0x2f65c0u: goto label_2f65c0;
        case 0x2f65c4u: goto label_2f65c4;
        case 0x2f65c8u: goto label_2f65c8;
        case 0x2f65ccu: goto label_2f65cc;
        case 0x2f65d0u: goto label_2f65d0;
        case 0x2f65d4u: goto label_2f65d4;
        case 0x2f65d8u: goto label_2f65d8;
        case 0x2f65dcu: goto label_2f65dc;
        case 0x2f65e0u: goto label_2f65e0;
        case 0x2f65e4u: goto label_2f65e4;
        case 0x2f65e8u: goto label_2f65e8;
        case 0x2f65ecu: goto label_2f65ec;
        case 0x2f65f0u: goto label_2f65f0;
        case 0x2f65f4u: goto label_2f65f4;
        case 0x2f65f8u: goto label_2f65f8;
        case 0x2f65fcu: goto label_2f65fc;
        case 0x2f6600u: goto label_2f6600;
        case 0x2f6604u: goto label_2f6604;
        case 0x2f6608u: goto label_2f6608;
        case 0x2f660cu: goto label_2f660c;
        case 0x2f6610u: goto label_2f6610;
        case 0x2f6614u: goto label_2f6614;
        case 0x2f6618u: goto label_2f6618;
        case 0x2f661cu: goto label_2f661c;
        case 0x2f6620u: goto label_2f6620;
        case 0x2f6624u: goto label_2f6624;
        case 0x2f6628u: goto label_2f6628;
        case 0x2f662cu: goto label_2f662c;
        default: break;
    }

    ctx->pc = 0x2f63f0u;

label_2f63f0:
    // 0x2f63f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f63f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2f63f4:
    // 0x2f63f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f63f8:
    // 0x2f63f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2f63f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2f63fc:
    // 0x2f63fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2f63fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2f6400:
    // 0x2f6400: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x2f6400u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f6404:
    // 0x2f6404: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f6404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2f6408:
    // 0x2f6408: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2f6408u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f640c:
    // 0x2f640c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f6410:
    // 0x2f6410: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2f6410u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f6414:
    // 0x2f6414: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f6414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f6418:
    // 0x2f6418: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f6418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f641c:
    // 0x2f641c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f6420:
    // 0x2f6420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f6420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f6424:
    // 0x2f6424: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f6428:
    // 0x2f6428: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x2f6428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_2f642c:
    // 0x2f642c: 0x908300d8  lbu         $v1, 0xD8($a0)
    ctx->pc = 0x2f642cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
label_2f6430:
    // 0x2f6430: 0x8c500e00  lw          $s0, 0xE00($v0)
    ctx->pc = 0x2f6430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3584)));
label_2f6434:
    // 0x2f6434: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2f6434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2f6438:
    // 0x2f6438: 0x1a40006b  blez        $s2, . + 4 + (0x6B << 2)
label_2f643c:
    if (ctx->pc == 0x2F643Cu) {
        ctx->pc = 0x2F643Cu;
            // 0x2f643c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6440u;
        goto label_2f6440;
    }
    ctx->pc = 0x2F6438u;
    {
        const bool branch_taken_0x2f6438 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2F643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6438u;
            // 0x2f643c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6438) {
            ctx->pc = 0x2F65E8u;
            goto label_2f65e8;
        }
    }
    ctx->pc = 0x2F6440u;
label_2f6440:
    // 0x2f6440: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2f6440u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2f6444:
    // 0x2f6444: 0x291a821  addu        $s5, $s4, $s1
    ctx->pc = 0x2f6444u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_2f6448:
    // 0x2f6448: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x2f6448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2f644c:
    // 0x2f644c: 0x8eb30004  lw          $s3, 0x4($s5)
    ctx->pc = 0x2f644cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f6450:
    // 0x2f6450: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2f6454:
    if (ctx->pc == 0x2F6454u) {
        ctx->pc = 0x2F6454u;
            // 0x2f6454: 0x26830030  addiu       $v1, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->pc = 0x2F6458u;
        goto label_2f6458;
    }
    ctx->pc = 0x2F6450u;
    {
        const bool branch_taken_0x2f6450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6450u;
            // 0x2f6454: 0x26830030  addiu       $v1, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6450) {
            ctx->pc = 0x2F6488u;
            goto label_2f6488;
        }
    }
    ctx->pc = 0x2F6458u;
label_2f6458:
    // 0x2f6458: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
label_2f645c:
    if (ctx->pc == 0x2F645Cu) {
        ctx->pc = 0x2F6460u;
        goto label_2f6460;
    }
    ctx->pc = 0x2F6458u;
    {
        const bool branch_taken_0x2f6458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f6458) {
            ctx->pc = 0x2F6478u;
            goto label_2f6478;
        }
    }
    ctx->pc = 0x2F6460u;
label_2f6460:
    // 0x2f6460: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f6460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f6464:
    // 0x2f6464: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f6464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f6468:
    // 0x2f6468: 0x320f809  jalr        $t9
label_2f646c:
    if (ctx->pc == 0x2F646Cu) {
        ctx->pc = 0x2F646Cu;
            // 0x2f646c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6470u;
        goto label_2f6470;
    }
    ctx->pc = 0x2F6468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6470u);
        ctx->pc = 0x2F646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6468u;
            // 0x2f646c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6470u; }
            if (ctx->pc != 0x2F6470u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6470u;
label_2f6470:
    // 0x2f6470: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f6474:
    if (ctx->pc == 0x2F6474u) {
        ctx->pc = 0x2F6474u;
            // 0x2f6474: 0x2e2b825  or          $s7, $s7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
        ctx->pc = 0x2F6478u;
        goto label_2f6478;
    }
    ctx->pc = 0x2F6470u;
    {
        const bool branch_taken_0x2f6470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6470u;
            // 0x2f6474: 0x2e2b825  or          $s7, $s7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6470) {
            ctx->pc = 0x2F6488u;
            goto label_2f6488;
        }
    }
    ctx->pc = 0x2F6478u;
label_2f6478:
    // 0x2f6478: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2f6478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2f647c:
    // 0x2f647c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f6480:
    // 0x2f6480: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2f6484:
    if (ctx->pc == 0x2F6484u) {
        ctx->pc = 0x2F6488u;
        goto label_2f6488;
    }
    ctx->pc = 0x2F6480u;
    {
        const bool branch_taken_0x2f6480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6480) {
            ctx->pc = 0x2F6458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6458;
        }
    }
    ctx->pc = 0x2F6488u;
label_2f6488:
    // 0x2f6488: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x2f6488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_2f648c:
    // 0x2f648c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2f648cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2f6490:
    // 0x2f6490: 0x24634df0  addiu       $v1, $v1, 0x4DF0
    ctx->pc = 0x2f6490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19952));
label_2f6494:
    // 0x2f6494: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2f6494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2f6498:
    // 0x2f6498: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2f6498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2f649c:
    // 0x2f649c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f649cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f64a0:
    // 0x2f64a0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2f64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2f64a4:
    // 0x2f64a4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2f64a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2f64a8:
    // 0x2f64a8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2f64a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f64ac:
    // 0x2f64ac: 0x5460004a  bnel        $v1, $zero, . + 4 + (0x4A << 2)
label_2f64b0:
    if (ctx->pc == 0x2F64B0u) {
        ctx->pc = 0x2F64B0u;
            // 0x2f64b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x2F64B4u;
        goto label_2f64b4;
    }
    ctx->pc = 0x2F64ACu;
    {
        const bool branch_taken_0x2f64ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f64ac) {
            ctx->pc = 0x2F64B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F64ACu;
            // 0x2f64b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F65D8u;
            goto label_2f65d8;
        }
    }
    ctx->pc = 0x2F64B4u;
label_2f64b4:
    // 0x2f64b4: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x2f64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2f64b8:
    // 0x2f64b8: 0x90630018  lbu         $v1, 0x18($v1)
    ctx->pc = 0x2f64b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2f64bc:
    // 0x2f64bc: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
label_2f64c0:
    if (ctx->pc == 0x2F64C0u) {
        ctx->pc = 0x2F64C4u;
        goto label_2f64c4;
    }
    ctx->pc = 0x2F64BCu;
    {
        const bool branch_taken_0x2f64bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f64bc) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F64C4u;
label_2f64c4:
    // 0x2f64c4: 0x2ec10006  sltiu       $at, $s6, 0x6
    ctx->pc = 0x2f64c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2f64c8:
    // 0x2f64c8: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_2f64cc:
    if (ctx->pc == 0x2F64CCu) {
        ctx->pc = 0x2F64D0u;
        goto label_2f64d0;
    }
    ctx->pc = 0x2F64C8u;
    {
        const bool branch_taken_0x2f64c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f64c8) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F64D0u;
label_2f64d0:
    // 0x2f64d0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2f64d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2f64d4:
    // 0x2f64d4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x2f64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_2f64d8:
    // 0x2f64d8: 0x24842310  addiu       $a0, $a0, 0x2310
    ctx->pc = 0x2f64d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8976));
label_2f64dc:
    // 0x2f64dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f64e0:
    // 0x2f64e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f64e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f64e4:
    // 0x2f64e4: 0x600008  jr          $v1
label_2f64e8:
    if (ctx->pc == 0x2F64E8u) {
        ctx->pc = 0x2F64ECu;
        goto label_2f64ec;
    }
    ctx->pc = 0x2F64E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F64F0u: goto label_2f64f0;
            case 0x2F6520u: goto label_2f6520;
            case 0x2F6550u: goto label_2f6550;
            case 0x2F6580u: goto label_2f6580;
            case 0x2F659Cu: goto label_2f659c;
            case 0x2F65B8u: goto label_2f65b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F64ECu;
label_2f64ec:
    // 0x2f64ec: 0x0  nop
    ctx->pc = 0x2f64ecu;
    // NOP
label_2f64f0:
    // 0x2f64f0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f64f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f64f4:
    // 0x2f64f4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f64f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f64f8:
    // 0x2f64f8: 0x320f809  jalr        $t9
label_2f64fc:
    if (ctx->pc == 0x2F64FCu) {
        ctx->pc = 0x2F64FCu;
            // 0x2f64fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6500u;
        goto label_2f6500;
    }
    ctx->pc = 0x2F64F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6500u);
        ctx->pc = 0x2F64FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F64F8u;
            // 0x2f64fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6500u; }
            if (ctx->pc != 0x2F6500u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6500u;
label_2f6500:
    // 0x2f6500: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f6500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f6504:
    // 0x2f6504: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2f6508:
    if (ctx->pc == 0x2F6508u) {
        ctx->pc = 0x2F650Cu;
        goto label_2f650c;
    }
    ctx->pc = 0x2F6504u;
    {
        const bool branch_taken_0x2f6504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6504) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F650Cu;
label_2f650c:
    // 0x2f650c: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2f650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_2f6510:
    // 0x2f6510: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_2f6514:
    if (ctx->pc == 0x2F6514u) {
        ctx->pc = 0x2F6518u;
        goto label_2f6518;
    }
    ctx->pc = 0x2F6510u;
    {
        const bool branch_taken_0x2f6510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6510) {
            ctx->pc = 0x2F65E8u;
            goto label_2f65e8;
        }
    }
    ctx->pc = 0x2F6518u;
label_2f6518:
    // 0x2f6518: 0x10000033  b           . + 4 + (0x33 << 2)
label_2f651c:
    if (ctx->pc == 0x2F651Cu) {
        ctx->pc = 0x2F651Cu;
            // 0x2f651c: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6520u;
        goto label_2f6520;
    }
    ctx->pc = 0x2F6518u;
    {
        const bool branch_taken_0x2f6518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6518u;
            // 0x2f651c: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6518) {
            ctx->pc = 0x2F65E8u;
            goto label_2f65e8;
        }
    }
    ctx->pc = 0x2F6520u;
label_2f6520:
    // 0x2f6520: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f6520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f6524:
    // 0x2f6524: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f6524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f6528:
    // 0x2f6528: 0x320f809  jalr        $t9
label_2f652c:
    if (ctx->pc == 0x2F652Cu) {
        ctx->pc = 0x2F652Cu;
            // 0x2f652c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6530u;
        goto label_2f6530;
    }
    ctx->pc = 0x2F6528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6530u);
        ctx->pc = 0x2F652Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6528u;
            // 0x2f652c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6530u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6530u; }
            if (ctx->pc != 0x2F6530u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6530u;
label_2f6530:
    // 0x2f6530: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f6530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2f6534:
    // 0x2f6534: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2f6538:
    if (ctx->pc == 0x2F6538u) {
        ctx->pc = 0x2F653Cu;
        goto label_2f653c;
    }
    ctx->pc = 0x2F6534u;
    {
        const bool branch_taken_0x2f6534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6534) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F653Cu;
label_2f653c:
    // 0x2f653c: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x2f653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
label_2f6540:
    // 0x2f6540: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_2f6544:
    if (ctx->pc == 0x2F6544u) {
        ctx->pc = 0x2F6548u;
        goto label_2f6548;
    }
    ctx->pc = 0x2F6540u;
    {
        const bool branch_taken_0x2f6540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6540) {
            ctx->pc = 0x2F65E8u;
            goto label_2f65e8;
        }
    }
    ctx->pc = 0x2F6548u;
label_2f6548:
    // 0x2f6548: 0x10000027  b           . + 4 + (0x27 << 2)
label_2f654c:
    if (ctx->pc == 0x2F654Cu) {
        ctx->pc = 0x2F654Cu;
            // 0x2f654c: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6550u;
        goto label_2f6550;
    }
    ctx->pc = 0x2F6548u;
    {
        const bool branch_taken_0x2f6548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6548u;
            // 0x2f654c: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6548) {
            ctx->pc = 0x2F65E8u;
            goto label_2f65e8;
        }
    }
    ctx->pc = 0x2F6550u;
label_2f6550:
    // 0x2f6550: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2f6550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f6554:
    // 0x2f6554: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f6554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f6558:
    // 0x2f6558: 0x320f809  jalr        $t9
label_2f655c:
    if (ctx->pc == 0x2F655Cu) {
        ctx->pc = 0x2F655Cu;
            // 0x2f655c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6560u;
        goto label_2f6560;
    }
    ctx->pc = 0x2F6558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6560u);
        ctx->pc = 0x2F655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6558u;
            // 0x2f655c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6560u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6560u; }
            if (ctx->pc != 0x2F6560u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6560u;
label_2f6560:
    // 0x2f6560: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f6560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2f6564:
    // 0x2f6564: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f6568:
    if (ctx->pc == 0x2F6568u) {
        ctx->pc = 0x2F656Cu;
        goto label_2f656c;
    }
    ctx->pc = 0x2F6564u;
    {
        const bool branch_taken_0x2f6564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6564) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F656Cu;
label_2f656c:
    // 0x2f656c: 0x32e20004  andi        $v0, $s7, 0x4
    ctx->pc = 0x2f656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
label_2f6570:
    // 0x2f6570: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_2f6574:
    if (ctx->pc == 0x2F6574u) {
        ctx->pc = 0x2F6578u;
        goto label_2f6578;
    }
    ctx->pc = 0x2F6570u;
    {
        const bool branch_taken_0x2f6570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6570) {
            ctx->pc = 0x2F65E8u;
            goto label_2f65e8;
        }
    }
    ctx->pc = 0x2F6578u;
label_2f6578:
    // 0x2f6578: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2f657c:
    if (ctx->pc == 0x2F657Cu) {
        ctx->pc = 0x2F657Cu;
            // 0x2f657c: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6580u;
        goto label_2f6580;
    }
    ctx->pc = 0x2F6578u;
    {
        const bool branch_taken_0x2f6578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F657Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6578u;
            // 0x2f657c: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6578) {
            ctx->pc = 0x2F65E8u;
            goto label_2f65e8;
        }
    }
    ctx->pc = 0x2F6580u;
label_2f6580:
    // 0x2f6580: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f6580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f6584:
    // 0x2f6584: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f6584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f6588:
    // 0x2f6588: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2f6588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f658c:
    // 0x2f658c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_2f6590:
    if (ctx->pc == 0x2F6590u) {
        ctx->pc = 0x2F6594u;
        goto label_2f6594;
    }
    ctx->pc = 0x2F658Cu;
    {
        const bool branch_taken_0x2f658c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f658c) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F6594u;
label_2f6594:
    // 0x2f6594: 0x10000014  b           . + 4 + (0x14 << 2)
label_2f6598:
    if (ctx->pc == 0x2F6598u) {
        ctx->pc = 0x2F6598u;
            // 0x2f6598: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F659Cu;
        goto label_2f659c;
    }
    ctx->pc = 0x2F6594u;
    {
        const bool branch_taken_0x2f6594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6594u;
            // 0x2f6598: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6594) {
            ctx->pc = 0x2F65E8u;
            goto label_2f65e8;
        }
    }
    ctx->pc = 0x2F659Cu;
label_2f659c:
    // 0x2f659c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f659cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f65a0:
    // 0x2f65a0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f65a4:
    // 0x2f65a4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2f65a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2f65a8:
    // 0x2f65a8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_2f65ac:
    if (ctx->pc == 0x2F65ACu) {
        ctx->pc = 0x2F65B0u;
        goto label_2f65b0;
    }
    ctx->pc = 0x2F65A8u;
    {
        const bool branch_taken_0x2f65a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f65a8) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F65B0u;
label_2f65b0:
    // 0x2f65b0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2f65b4:
    if (ctx->pc == 0x2F65B4u) {
        ctx->pc = 0x2F65B4u;
            // 0x2f65b4: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F65B8u;
        goto label_2f65b8;
    }
    ctx->pc = 0x2F65B0u;
    {
        const bool branch_taken_0x2f65b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F65B0u;
            // 0x2f65b4: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65b0) {
            ctx->pc = 0x2F65E8u;
            goto label_2f65e8;
        }
    }
    ctx->pc = 0x2F65B8u;
label_2f65b8:
    // 0x2f65b8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2f65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f65bc:
    // 0x2f65bc: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2f65bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f65c0:
    // 0x2f65c0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2f65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2f65c4:
    // 0x2f65c4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2f65c8:
    if (ctx->pc == 0x2F65C8u) {
        ctx->pc = 0x2F65CCu;
        goto label_2f65cc;
    }
    ctx->pc = 0x2F65C4u;
    {
        const bool branch_taken_0x2f65c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f65c4) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F65CCu;
label_2f65cc:
    // 0x2f65cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f65d0:
    if (ctx->pc == 0x2F65D0u) {
        ctx->pc = 0x2F65D0u;
            // 0x2f65d0: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F65D4u;
        goto label_2f65d4;
    }
    ctx->pc = 0x2F65CCu;
    {
        const bool branch_taken_0x2f65cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F65CCu;
            // 0x2f65d0: 0x240f02d  daddu       $fp, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65cc) {
            ctx->pc = 0x2F65E8u;
            goto label_2f65e8;
        }
    }
    ctx->pc = 0x2F65D4u;
label_2f65d4:
    // 0x2f65d4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2f65d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2f65d8:
    // 0x2f65d8: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x2f65d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
label_2f65dc:
    // 0x2f65dc: 0x1e40ff9a  bgtz        $s2, . + 4 + (-0x66 << 2)
label_2f65e0:
    if (ctx->pc == 0x2F65E0u) {
        ctx->pc = 0x2F65E0u;
            // 0x2f65e0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2F65E4u;
        goto label_2f65e4;
    }
    ctx->pc = 0x2F65DCu;
    {
        const bool branch_taken_0x2f65dc = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2F65E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F65DCu;
            // 0x2f65e0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65dc) {
            ctx->pc = 0x2F6448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6448;
        }
    }
    ctx->pc = 0x2F65E4u;
label_2f65e4:
    // 0x2f65e4: 0x0  nop
    ctx->pc = 0x2f65e4u;
    // NOP
label_2f65e8:
    // 0x2f65e8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2f65e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f65ec:
    // 0x2f65ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f65ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f65f0:
    // 0x2f65f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2f65f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f65f4:
    // 0x2f65f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f65f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f65f8:
    // 0x2f65f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f65f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f65fc:
    // 0x2f65fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f65fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f6600:
    // 0x2f6600: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f6600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f6604:
    // 0x2f6604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f6604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f6608:
    // 0x2f6608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f6608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f660c:
    // 0x2f660c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f660cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f6610:
    // 0x2f6610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f6614:
    // 0x2f6614: 0x3e00008  jr          $ra
label_2f6618:
    if (ctx->pc == 0x2F6618u) {
        ctx->pc = 0x2F6618u;
            // 0x2f6618: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2F661Cu;
        goto label_2f661c;
    }
    ctx->pc = 0x2F6614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6614u;
            // 0x2f6618: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F661Cu;
label_2f661c:
    // 0x2f661c: 0x0  nop
    ctx->pc = 0x2f661cu;
    // NOP
label_2f6620:
    // 0x2f6620: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2f6620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2f6624:
    // 0x2f6624: 0x3e00008  jr          $ra
label_2f6628:
    if (ctx->pc == 0x2F6628u) {
        ctx->pc = 0x2F6628u;
            // 0x2f6628: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x2F662Cu;
        goto label_2f662c;
    }
    ctx->pc = 0x2F6624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6624u;
            // 0x2f6628: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F662Cu;
label_2f662c:
    // 0x2f662c: 0x0  nop
    ctx->pc = 0x2f662cu;
    // NOP
}
