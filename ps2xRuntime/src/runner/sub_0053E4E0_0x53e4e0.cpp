#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053E4E0
// Address: 0x53e4e0 - 0x53e680
void sub_0053E4E0_0x53e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053E4E0_0x53e4e0");
#endif

    switch (ctx->pc) {
        case 0x53e4e0u: goto label_53e4e0;
        case 0x53e4e4u: goto label_53e4e4;
        case 0x53e4e8u: goto label_53e4e8;
        case 0x53e4ecu: goto label_53e4ec;
        case 0x53e4f0u: goto label_53e4f0;
        case 0x53e4f4u: goto label_53e4f4;
        case 0x53e4f8u: goto label_53e4f8;
        case 0x53e4fcu: goto label_53e4fc;
        case 0x53e500u: goto label_53e500;
        case 0x53e504u: goto label_53e504;
        case 0x53e508u: goto label_53e508;
        case 0x53e50cu: goto label_53e50c;
        case 0x53e510u: goto label_53e510;
        case 0x53e514u: goto label_53e514;
        case 0x53e518u: goto label_53e518;
        case 0x53e51cu: goto label_53e51c;
        case 0x53e520u: goto label_53e520;
        case 0x53e524u: goto label_53e524;
        case 0x53e528u: goto label_53e528;
        case 0x53e52cu: goto label_53e52c;
        case 0x53e530u: goto label_53e530;
        case 0x53e534u: goto label_53e534;
        case 0x53e538u: goto label_53e538;
        case 0x53e53cu: goto label_53e53c;
        case 0x53e540u: goto label_53e540;
        case 0x53e544u: goto label_53e544;
        case 0x53e548u: goto label_53e548;
        case 0x53e54cu: goto label_53e54c;
        case 0x53e550u: goto label_53e550;
        case 0x53e554u: goto label_53e554;
        case 0x53e558u: goto label_53e558;
        case 0x53e55cu: goto label_53e55c;
        case 0x53e560u: goto label_53e560;
        case 0x53e564u: goto label_53e564;
        case 0x53e568u: goto label_53e568;
        case 0x53e56cu: goto label_53e56c;
        case 0x53e570u: goto label_53e570;
        case 0x53e574u: goto label_53e574;
        case 0x53e578u: goto label_53e578;
        case 0x53e57cu: goto label_53e57c;
        case 0x53e580u: goto label_53e580;
        case 0x53e584u: goto label_53e584;
        case 0x53e588u: goto label_53e588;
        case 0x53e58cu: goto label_53e58c;
        case 0x53e590u: goto label_53e590;
        case 0x53e594u: goto label_53e594;
        case 0x53e598u: goto label_53e598;
        case 0x53e59cu: goto label_53e59c;
        case 0x53e5a0u: goto label_53e5a0;
        case 0x53e5a4u: goto label_53e5a4;
        case 0x53e5a8u: goto label_53e5a8;
        case 0x53e5acu: goto label_53e5ac;
        case 0x53e5b0u: goto label_53e5b0;
        case 0x53e5b4u: goto label_53e5b4;
        case 0x53e5b8u: goto label_53e5b8;
        case 0x53e5bcu: goto label_53e5bc;
        case 0x53e5c0u: goto label_53e5c0;
        case 0x53e5c4u: goto label_53e5c4;
        case 0x53e5c8u: goto label_53e5c8;
        case 0x53e5ccu: goto label_53e5cc;
        case 0x53e5d0u: goto label_53e5d0;
        case 0x53e5d4u: goto label_53e5d4;
        case 0x53e5d8u: goto label_53e5d8;
        case 0x53e5dcu: goto label_53e5dc;
        case 0x53e5e0u: goto label_53e5e0;
        case 0x53e5e4u: goto label_53e5e4;
        case 0x53e5e8u: goto label_53e5e8;
        case 0x53e5ecu: goto label_53e5ec;
        case 0x53e5f0u: goto label_53e5f0;
        case 0x53e5f4u: goto label_53e5f4;
        case 0x53e5f8u: goto label_53e5f8;
        case 0x53e5fcu: goto label_53e5fc;
        case 0x53e600u: goto label_53e600;
        case 0x53e604u: goto label_53e604;
        case 0x53e608u: goto label_53e608;
        case 0x53e60cu: goto label_53e60c;
        case 0x53e610u: goto label_53e610;
        case 0x53e614u: goto label_53e614;
        case 0x53e618u: goto label_53e618;
        case 0x53e61cu: goto label_53e61c;
        case 0x53e620u: goto label_53e620;
        case 0x53e624u: goto label_53e624;
        case 0x53e628u: goto label_53e628;
        case 0x53e62cu: goto label_53e62c;
        case 0x53e630u: goto label_53e630;
        case 0x53e634u: goto label_53e634;
        case 0x53e638u: goto label_53e638;
        case 0x53e63cu: goto label_53e63c;
        case 0x53e640u: goto label_53e640;
        case 0x53e644u: goto label_53e644;
        case 0x53e648u: goto label_53e648;
        case 0x53e64cu: goto label_53e64c;
        case 0x53e650u: goto label_53e650;
        case 0x53e654u: goto label_53e654;
        case 0x53e658u: goto label_53e658;
        case 0x53e65cu: goto label_53e65c;
        case 0x53e660u: goto label_53e660;
        case 0x53e664u: goto label_53e664;
        case 0x53e668u: goto label_53e668;
        case 0x53e66cu: goto label_53e66c;
        case 0x53e670u: goto label_53e670;
        case 0x53e674u: goto label_53e674;
        case 0x53e678u: goto label_53e678;
        case 0x53e67cu: goto label_53e67c;
        default: break;
    }

    ctx->pc = 0x53e4e0u;

label_53e4e0:
    // 0x53e4e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x53e4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_53e4e4:
    // 0x53e4e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x53e4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53e4e8:
    // 0x53e4e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x53e4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_53e4ec:
    // 0x53e4ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x53e4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_53e4f0:
    // 0x53e4f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x53e4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_53e4f4:
    // 0x53e4f4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x53e4f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53e4f8:
    // 0x53e4f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_53e4fc:
    // 0x53e4fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53e500:
    // 0x53e500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53e500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53e504:
    // 0x53e504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53e504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53e508:
    // 0x53e508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53e50c:
    // 0x53e50c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53e50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53e510:
    // 0x53e510: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x53e510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_53e514:
    // 0x53e514: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x53e514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_53e518:
    // 0x53e518: 0xc12a7a0  jal         func_4A9E80
label_53e51c:
    if (ctx->pc == 0x53E51Cu) {
        ctx->pc = 0x53E51Cu;
            // 0x53e51c: 0x262500a8  addiu       $a1, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->pc = 0x53E520u;
        goto label_53e520;
    }
    ctx->pc = 0x53E518u;
    SET_GPR_U32(ctx, 31, 0x53E520u);
    ctx->pc = 0x53E51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E518u;
            // 0x53e51c: 0x262500a8  addiu       $a1, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E520u; }
        if (ctx->pc != 0x53E520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E520u; }
        if (ctx->pc != 0x53E520u) { return; }
    }
    ctx->pc = 0x53E520u;
label_53e520:
    // 0x53e520: 0x8e2600c4  lw          $a2, 0xC4($s1)
    ctx->pc = 0x53e520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_53e524:
    // 0x53e524: 0x262500a8  addiu       $a1, $s1, 0xA8
    ctx->pc = 0x53e524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_53e528:
    // 0x53e528: 0x8fb300a0  lw          $s3, 0xA0($sp)
    ctx->pc = 0x53e528u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_53e52c:
    // 0x53e52c: 0x8fb200a4  lw          $s2, 0xA4($sp)
    ctx->pc = 0x53e52cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_53e530:
    // 0x53e530: 0x8fb100ac  lw          $s1, 0xAC($sp)
    ctx->pc = 0x53e530u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_53e534:
    // 0x53e534: 0x8fb400b0  lw          $s4, 0xB0($sp)
    ctx->pc = 0x53e534u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_53e538:
    // 0x53e538: 0x8fb500b4  lw          $s5, 0xB4($sp)
    ctx->pc = 0x53e538u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_53e53c:
    // 0x53e53c: 0xc12a7a0  jal         func_4A9E80
label_53e540:
    if (ctx->pc == 0x53E540u) {
        ctx->pc = 0x53E540u;
            // 0x53e540: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x53E544u;
        goto label_53e544;
    }
    ctx->pc = 0x53E53Cu;
    SET_GPR_U32(ctx, 31, 0x53E544u);
    ctx->pc = 0x53E540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E53Cu;
            // 0x53e540: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E544u; }
        if (ctx->pc != 0x53E544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E544u; }
        if (ctx->pc != 0x53E544u) { return; }
    }
    ctx->pc = 0x53E544u;
label_53e544:
    // 0x53e544: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x53e544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_53e548:
    // 0x53e548: 0x12840011  beq         $s4, $a0, . + 4 + (0x11 << 2)
label_53e54c:
    if (ctx->pc == 0x53E54Cu) {
        ctx->pc = 0x53E550u;
        goto label_53e550;
    }
    ctx->pc = 0x53E548u;
    {
        const bool branch_taken_0x53e548 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x53e548) {
            ctx->pc = 0x53E590u;
            goto label_53e590;
        }
    }
    ctx->pc = 0x53E550u;
label_53e550:
    // 0x53e550: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x53e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53e554:
    // 0x53e554: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x53e554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_53e558:
    // 0x53e558: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
label_53e55c:
    if (ctx->pc == 0x53E55Cu) {
        ctx->pc = 0x53E55Cu;
            // 0x53e55c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x53E560u;
        goto label_53e560;
    }
    ctx->pc = 0x53E558u;
    {
        const bool branch_taken_0x53e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x53e558) {
            ctx->pc = 0x53E55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E558u;
            // 0x53e55c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E568u;
            goto label_53e568;
        }
    }
    ctx->pc = 0x53E560u;
label_53e560:
    // 0x53e560: 0x1000000b  b           . + 4 + (0xB << 2)
label_53e564:
    if (ctx->pc == 0x53E564u) {
        ctx->pc = 0x53E564u;
            // 0x53e564: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53E568u;
        goto label_53e568;
    }
    ctx->pc = 0x53E560u;
    {
        const bool branch_taken_0x53e560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E560u;
            // 0x53e564: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e560) {
            ctx->pc = 0x53E590u;
            goto label_53e590;
        }
    }
    ctx->pc = 0x53E568u;
label_53e568:
    // 0x53e568: 0x16950007  bne         $s4, $s5, . + 4 + (0x7 << 2)
label_53e56c:
    if (ctx->pc == 0x53E56Cu) {
        ctx->pc = 0x53E570u;
        goto label_53e570;
    }
    ctx->pc = 0x53E568u;
    {
        const bool branch_taken_0x53e568 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        if (branch_taken_0x53e568) {
            ctx->pc = 0x53E588u;
            goto label_53e588;
        }
    }
    ctx->pc = 0x53E570u;
label_53e570:
    // 0x53e570: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x53e570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_53e574:
    // 0x53e574: 0x16710002  bne         $s3, $s1, . + 4 + (0x2 << 2)
label_53e578:
    if (ctx->pc == 0x53E578u) {
        ctx->pc = 0x53E57Cu;
        goto label_53e57c;
    }
    ctx->pc = 0x53E574u;
    {
        const bool branch_taken_0x53e574 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        if (branch_taken_0x53e574) {
            ctx->pc = 0x53E580u;
            goto label_53e580;
        }
    }
    ctx->pc = 0x53E57Cu;
label_53e57c:
    // 0x53e57c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x53e57cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_53e580:
    // 0x53e580: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x53e580u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_53e584:
    // 0x53e584: 0x26950200  addiu       $s5, $s4, 0x200
    ctx->pc = 0x53e584u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
label_53e588:
    // 0x53e588: 0x5684fff2  bnel        $s4, $a0, . + 4 + (-0xE << 2)
label_53e58c:
    if (ctx->pc == 0x53E58Cu) {
        ctx->pc = 0x53E58Cu;
            // 0x53e58c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x53E590u;
        goto label_53e590;
    }
    ctx->pc = 0x53E588u;
    {
        const bool branch_taken_0x53e588 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        if (branch_taken_0x53e588) {
            ctx->pc = 0x53E58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E588u;
            // 0x53e58c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E554u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53e554;
        }
    }
    ctx->pc = 0x53E590u;
label_53e590:
    // 0x53e590: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x53e590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_53e594:
    // 0x53e594: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x53e594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_53e598:
    // 0x53e598: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x53e598u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_53e59c:
    // 0x53e59c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x53e59cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_53e5a0:
    // 0x53e5a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53e5a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53e5a4:
    // 0x53e5a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53e5a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53e5a8:
    // 0x53e5a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53e5a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53e5ac:
    // 0x53e5ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53e5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53e5b0:
    // 0x53e5b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53e5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53e5b4:
    // 0x53e5b4: 0x3e00008  jr          $ra
label_53e5b8:
    if (ctx->pc == 0x53E5B8u) {
        ctx->pc = 0x53E5B8u;
            // 0x53e5b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x53E5BCu;
        goto label_53e5bc;
    }
    ctx->pc = 0x53E5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53E5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E5B4u;
            // 0x53e5b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53E5BCu;
label_53e5bc:
    // 0x53e5bc: 0x0  nop
    ctx->pc = 0x53e5bcu;
    // NOP
label_53e5c0:
    // 0x53e5c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x53e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_53e5c4:
    // 0x53e5c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x53e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_53e5c8:
    // 0x53e5c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53e5cc:
    // 0x53e5cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53e5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53e5d0:
    // 0x53e5d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x53e5d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53e5d4:
    // 0x53e5d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53e5d8:
    // 0x53e5d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x53e5d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53e5dc:
    // 0x53e5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53e5e0:
    // 0x53e5e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53e5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53e5e4:
    // 0x53e5e4: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x53e5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_53e5e8:
    // 0x53e5e8: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x53e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_53e5ec:
    // 0x53e5ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x53e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_53e5f0:
    // 0x53e5f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x53e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53e5f4:
    // 0x53e5f4: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x53e5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_53e5f8:
    // 0x53e5f8: 0xa0800064  sb          $zero, 0x64($a0)
    ctx->pc = 0x53e5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 0));
label_53e5fc:
    // 0x53e5fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53e5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53e600:
    // 0x53e600: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x53e600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_53e604:
    // 0x53e604: 0x320f809  jalr        $t9
label_53e608:
    if (ctx->pc == 0x53E608u) {
        ctx->pc = 0x53E60Cu;
        goto label_53e60c;
    }
    ctx->pc = 0x53E604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53E60Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53E60Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53E60Cu; }
            if (ctx->pc != 0x53E60Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53E60Cu;
label_53e60c:
    // 0x53e60c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x53e60cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_53e610:
    // 0x53e610: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x53e610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_53e614:
    // 0x53e614: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_53e618:
    if (ctx->pc == 0x53E618u) {
        ctx->pc = 0x53E618u;
            // 0x53e618: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x53E61Cu;
        goto label_53e61c;
    }
    ctx->pc = 0x53E614u;
    {
        const bool branch_taken_0x53e614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x53E618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E614u;
            // 0x53e618: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e614) {
            ctx->pc = 0x53E5E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53e5e8;
        }
    }
    ctx->pc = 0x53E61Cu;
label_53e61c:
    // 0x53e61c: 0xc0b64ec  jal         func_2D93B0
label_53e620:
    if (ctx->pc == 0x53E620u) {
        ctx->pc = 0x53E620u;
            // 0x53e620: 0x266400a8  addiu       $a0, $s3, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
        ctx->pc = 0x53E624u;
        goto label_53e624;
    }
    ctx->pc = 0x53E61Cu;
    SET_GPR_U32(ctx, 31, 0x53E624u);
    ctx->pc = 0x53E620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E61Cu;
            // 0x53e620: 0x266400a8  addiu       $a0, $s3, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D93B0u;
    if (runtime->hasFunction(0x2D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E624u; }
        if (ctx->pc != 0x53E624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D93B0_0x2d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E624u; }
        if (ctx->pc != 0x53E624u) { return; }
    }
    ctx->pc = 0x53E624u;
label_53e624:
    // 0x53e624: 0xc0b64ec  jal         func_2D93B0
label_53e628:
    if (ctx->pc == 0x53E628u) {
        ctx->pc = 0x53E628u;
            // 0x53e628: 0x266400c8  addiu       $a0, $s3, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 200));
        ctx->pc = 0x53E62Cu;
        goto label_53e62c;
    }
    ctx->pc = 0x53E624u;
    SET_GPR_U32(ctx, 31, 0x53E62Cu);
    ctx->pc = 0x53E628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E624u;
            // 0x53e628: 0x266400c8  addiu       $a0, $s3, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D93B0u;
    if (runtime->hasFunction(0x2D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E62Cu; }
        if (ctx->pc != 0x53E62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D93B0_0x2d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E62Cu; }
        if (ctx->pc != 0x53E62Cu) { return; }
    }
    ctx->pc = 0x53E62Cu;
label_53e62c:
    // 0x53e62c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53e62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53e630:
    // 0x53e630: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x53e630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53e634:
    // 0x53e634: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x53e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_53e638:
    // 0x53e638: 0x266400c8  addiu       $a0, $s3, 0xC8
    ctx->pc = 0x53e638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 200));
label_53e63c:
    // 0x53e63c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x53e63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_53e640:
    // 0x53e640: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x53e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_53e644:
    // 0x53e644: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x53e644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53e648:
    // 0x53e648: 0xc12a70c  jal         func_4A9C30
label_53e64c:
    if (ctx->pc == 0x53E64Cu) {
        ctx->pc = 0x53E64Cu;
            // 0x53e64c: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x53E650u;
        goto label_53e650;
    }
    ctx->pc = 0x53E648u;
    SET_GPR_U32(ctx, 31, 0x53E650u);
    ctx->pc = 0x53E64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E648u;
            // 0x53e64c: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C30u;
    if (runtime->hasFunction(0x4A9C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A9C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E650u; }
        if (ctx->pc != 0x53E650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9C30_0x4a9c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E650u; }
        if (ctx->pc != 0x53E650u) { return; }
    }
    ctx->pc = 0x53E650u;
label_53e650:
    // 0x53e650: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x53e650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_53e654:
    // 0x53e654: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x53e654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_53e658:
    // 0x53e658: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_53e65c:
    if (ctx->pc == 0x53E65Cu) {
        ctx->pc = 0x53E65Cu;
            // 0x53e65c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x53E660u;
        goto label_53e660;
    }
    ctx->pc = 0x53E658u;
    {
        const bool branch_taken_0x53e658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x53E65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E658u;
            // 0x53e65c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e658) {
            ctx->pc = 0x53E634u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53e634;
        }
    }
    ctx->pc = 0x53E660u;
label_53e660:
    // 0x53e660: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x53e660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_53e664:
    // 0x53e664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53e664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53e668:
    // 0x53e668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53e668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53e66c:
    // 0x53e66c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53e66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53e670:
    // 0x53e670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53e670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53e674:
    // 0x53e674: 0x3e00008  jr          $ra
label_53e678:
    if (ctx->pc == 0x53E678u) {
        ctx->pc = 0x53E678u;
            // 0x53e678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53E67Cu;
        goto label_53e67c;
    }
    ctx->pc = 0x53E674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53E678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E674u;
            // 0x53e678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53E67Cu;
label_53e67c:
    // 0x53e67c: 0x0  nop
    ctx->pc = 0x53e67cu;
    // NOP
}
