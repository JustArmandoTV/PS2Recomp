#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038E4F0
// Address: 0x38e4f0 - 0x38e6d0
void sub_0038E4F0_0x38e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E4F0_0x38e4f0");
#endif

    switch (ctx->pc) {
        case 0x38e4f0u: goto label_38e4f0;
        case 0x38e4f4u: goto label_38e4f4;
        case 0x38e4f8u: goto label_38e4f8;
        case 0x38e4fcu: goto label_38e4fc;
        case 0x38e500u: goto label_38e500;
        case 0x38e504u: goto label_38e504;
        case 0x38e508u: goto label_38e508;
        case 0x38e50cu: goto label_38e50c;
        case 0x38e510u: goto label_38e510;
        case 0x38e514u: goto label_38e514;
        case 0x38e518u: goto label_38e518;
        case 0x38e51cu: goto label_38e51c;
        case 0x38e520u: goto label_38e520;
        case 0x38e524u: goto label_38e524;
        case 0x38e528u: goto label_38e528;
        case 0x38e52cu: goto label_38e52c;
        case 0x38e530u: goto label_38e530;
        case 0x38e534u: goto label_38e534;
        case 0x38e538u: goto label_38e538;
        case 0x38e53cu: goto label_38e53c;
        case 0x38e540u: goto label_38e540;
        case 0x38e544u: goto label_38e544;
        case 0x38e548u: goto label_38e548;
        case 0x38e54cu: goto label_38e54c;
        case 0x38e550u: goto label_38e550;
        case 0x38e554u: goto label_38e554;
        case 0x38e558u: goto label_38e558;
        case 0x38e55cu: goto label_38e55c;
        case 0x38e560u: goto label_38e560;
        case 0x38e564u: goto label_38e564;
        case 0x38e568u: goto label_38e568;
        case 0x38e56cu: goto label_38e56c;
        case 0x38e570u: goto label_38e570;
        case 0x38e574u: goto label_38e574;
        case 0x38e578u: goto label_38e578;
        case 0x38e57cu: goto label_38e57c;
        case 0x38e580u: goto label_38e580;
        case 0x38e584u: goto label_38e584;
        case 0x38e588u: goto label_38e588;
        case 0x38e58cu: goto label_38e58c;
        case 0x38e590u: goto label_38e590;
        case 0x38e594u: goto label_38e594;
        case 0x38e598u: goto label_38e598;
        case 0x38e59cu: goto label_38e59c;
        case 0x38e5a0u: goto label_38e5a0;
        case 0x38e5a4u: goto label_38e5a4;
        case 0x38e5a8u: goto label_38e5a8;
        case 0x38e5acu: goto label_38e5ac;
        case 0x38e5b0u: goto label_38e5b0;
        case 0x38e5b4u: goto label_38e5b4;
        case 0x38e5b8u: goto label_38e5b8;
        case 0x38e5bcu: goto label_38e5bc;
        case 0x38e5c0u: goto label_38e5c0;
        case 0x38e5c4u: goto label_38e5c4;
        case 0x38e5c8u: goto label_38e5c8;
        case 0x38e5ccu: goto label_38e5cc;
        case 0x38e5d0u: goto label_38e5d0;
        case 0x38e5d4u: goto label_38e5d4;
        case 0x38e5d8u: goto label_38e5d8;
        case 0x38e5dcu: goto label_38e5dc;
        case 0x38e5e0u: goto label_38e5e0;
        case 0x38e5e4u: goto label_38e5e4;
        case 0x38e5e8u: goto label_38e5e8;
        case 0x38e5ecu: goto label_38e5ec;
        case 0x38e5f0u: goto label_38e5f0;
        case 0x38e5f4u: goto label_38e5f4;
        case 0x38e5f8u: goto label_38e5f8;
        case 0x38e5fcu: goto label_38e5fc;
        case 0x38e600u: goto label_38e600;
        case 0x38e604u: goto label_38e604;
        case 0x38e608u: goto label_38e608;
        case 0x38e60cu: goto label_38e60c;
        case 0x38e610u: goto label_38e610;
        case 0x38e614u: goto label_38e614;
        case 0x38e618u: goto label_38e618;
        case 0x38e61cu: goto label_38e61c;
        case 0x38e620u: goto label_38e620;
        case 0x38e624u: goto label_38e624;
        case 0x38e628u: goto label_38e628;
        case 0x38e62cu: goto label_38e62c;
        case 0x38e630u: goto label_38e630;
        case 0x38e634u: goto label_38e634;
        case 0x38e638u: goto label_38e638;
        case 0x38e63cu: goto label_38e63c;
        case 0x38e640u: goto label_38e640;
        case 0x38e644u: goto label_38e644;
        case 0x38e648u: goto label_38e648;
        case 0x38e64cu: goto label_38e64c;
        case 0x38e650u: goto label_38e650;
        case 0x38e654u: goto label_38e654;
        case 0x38e658u: goto label_38e658;
        case 0x38e65cu: goto label_38e65c;
        case 0x38e660u: goto label_38e660;
        case 0x38e664u: goto label_38e664;
        case 0x38e668u: goto label_38e668;
        case 0x38e66cu: goto label_38e66c;
        case 0x38e670u: goto label_38e670;
        case 0x38e674u: goto label_38e674;
        case 0x38e678u: goto label_38e678;
        case 0x38e67cu: goto label_38e67c;
        case 0x38e680u: goto label_38e680;
        case 0x38e684u: goto label_38e684;
        case 0x38e688u: goto label_38e688;
        case 0x38e68cu: goto label_38e68c;
        case 0x38e690u: goto label_38e690;
        case 0x38e694u: goto label_38e694;
        case 0x38e698u: goto label_38e698;
        case 0x38e69cu: goto label_38e69c;
        case 0x38e6a0u: goto label_38e6a0;
        case 0x38e6a4u: goto label_38e6a4;
        case 0x38e6a8u: goto label_38e6a8;
        case 0x38e6acu: goto label_38e6ac;
        case 0x38e6b0u: goto label_38e6b0;
        case 0x38e6b4u: goto label_38e6b4;
        case 0x38e6b8u: goto label_38e6b8;
        case 0x38e6bcu: goto label_38e6bc;
        case 0x38e6c0u: goto label_38e6c0;
        case 0x38e6c4u: goto label_38e6c4;
        case 0x38e6c8u: goto label_38e6c8;
        case 0x38e6ccu: goto label_38e6cc;
        default: break;
    }

    ctx->pc = 0x38e4f0u;

label_38e4f0:
    // 0x38e4f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x38e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_38e4f4:
    // 0x38e4f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38e4f8:
    // 0x38e4f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38e4fc:
    // 0x38e4fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38e500:
    // 0x38e500: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38e500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e504:
    // 0x38e504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38e508:
    // 0x38e508: 0xc0d8760  jal         func_361D80
label_38e50c:
    if (ctx->pc == 0x38E50Cu) {
        ctx->pc = 0x38E50Cu;
            // 0x38e50c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x38E510u;
        goto label_38e510;
    }
    ctx->pc = 0x38E508u;
    SET_GPR_U32(ctx, 31, 0x38E510u);
    ctx->pc = 0x38E50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E508u;
            // 0x38e50c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361D80u;
    if (runtime->hasFunction(0x361D80u)) {
        auto targetFn = runtime->lookupFunction(0x361D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E510u; }
        if (ctx->pc != 0x38E510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361D80_0x361d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E510u; }
        if (ctx->pc != 0x38E510u) { return; }
    }
    ctx->pc = 0x38E510u;
label_38e510:
    // 0x38e510: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x38e510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38e514:
    // 0x38e514: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x38e514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_38e518:
    // 0x38e518: 0x320f809  jalr        $t9
label_38e51c:
    if (ctx->pc == 0x38E51Cu) {
        ctx->pc = 0x38E51Cu;
            // 0x38e51c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E520u;
        goto label_38e520;
    }
    ctx->pc = 0x38E518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E520u);
        ctx->pc = 0x38E51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E518u;
            // 0x38e51c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E520u; }
            if (ctx->pc != 0x38E520u) { return; }
        }
        }
    }
    ctx->pc = 0x38E520u;
label_38e520:
    // 0x38e520: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x38e520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_38e524:
    // 0x38e524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38e524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e528:
    // 0x38e528: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x38e528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_38e52c:
    // 0x38e52c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x38e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_38e530:
    // 0x38e530: 0xa2630090  sb          $v1, 0x90($s3)
    ctx->pc = 0x38e530u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 144), (uint8_t)GPR_U32(ctx, 3));
label_38e534:
    // 0x38e534: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x38e534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
label_38e538:
    // 0x38e538: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x38e538u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_38e53c:
    // 0x38e53c: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x38e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
label_38e540:
    // 0x38e540: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x38e540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_38e544:
    // 0x38e544: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x38e544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_38e548:
    // 0x38e548: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x38e548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_38e54c:
    // 0x38e54c: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x38e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_38e550:
    // 0x38e550: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_38e554:
    if (ctx->pc == 0x38E554u) {
        ctx->pc = 0x38E554u;
            // 0x38e554: 0x8e70009c  lw          $s0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->pc = 0x38E558u;
        goto label_38e558;
    }
    ctx->pc = 0x38E550u;
    {
        const bool branch_taken_0x38e550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e550) {
            ctx->pc = 0x38E554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E550u;
            // 0x38e554: 0x8e70009c  lw          $s0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E56Cu;
            goto label_38e56c;
        }
    }
    ctx->pc = 0x38E558u;
label_38e558:
    // 0x38e558: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x38e558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_38e55c:
    // 0x38e55c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x38e55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_38e560:
    // 0x38e560: 0x320f809  jalr        $t9
label_38e564:
    if (ctx->pc == 0x38E564u) {
        ctx->pc = 0x38E568u;
        goto label_38e568;
    }
    ctx->pc = 0x38E560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E568u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E568u; }
            if (ctx->pc != 0x38E568u) { return; }
        }
        }
    }
    ctx->pc = 0x38E568u;
label_38e568:
    // 0x38e568: 0x8e70009c  lw          $s0, 0x9C($s3)
    ctx->pc = 0x38e568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_38e56c:
    // 0x38e56c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_38e570:
    if (ctx->pc == 0x38E570u) {
        ctx->pc = 0x38E574u;
        goto label_38e574;
    }
    ctx->pc = 0x38E56Cu;
    {
        const bool branch_taken_0x38e56c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e56c) {
            ctx->pc = 0x38E5C0u;
            goto label_38e5c0;
        }
    }
    ctx->pc = 0x38E574u;
label_38e574:
    // 0x38e574: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x38e574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
label_38e578:
    // 0x38e578: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e57c:
    // 0x38e57c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_38e580:
    if (ctx->pc == 0x38E580u) {
        ctx->pc = 0x38E584u;
        goto label_38e584;
    }
    ctx->pc = 0x38E57Cu;
    {
        const bool branch_taken_0x38e57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e57c) {
            ctx->pc = 0x38E5C0u;
            goto label_38e5c0;
        }
    }
    ctx->pc = 0x38E584u;
label_38e584:
    // 0x38e584: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38e584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e588:
    // 0x38e588: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38e588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e58c:
    // 0x38e58c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e590:
    // 0x38e590: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x38e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_38e594:
    // 0x38e594: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38e594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38e598:
    // 0x38e598: 0x8c990024  lw          $t9, 0x24($a0)
    ctx->pc = 0x38e598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38e59c:
    // 0x38e59c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38e59cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38e5a0:
    // 0x38e5a0: 0x320f809  jalr        $t9
label_38e5a4:
    if (ctx->pc == 0x38E5A4u) {
        ctx->pc = 0x38E5A8u;
        goto label_38e5a8;
    }
    ctx->pc = 0x38E5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E5A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E5A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E5A8u; }
            if (ctx->pc != 0x38E5A8u) { return; }
        }
        }
    }
    ctx->pc = 0x38E5A8u;
label_38e5a8:
    // 0x38e5a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x38e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_38e5ac:
    // 0x38e5ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38e5acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38e5b0:
    // 0x38e5b0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x38e5b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_38e5b4:
    // 0x38e5b4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_38e5b8:
    if (ctx->pc == 0x38E5B8u) {
        ctx->pc = 0x38E5B8u;
            // 0x38e5b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38E5BCu;
        goto label_38e5bc;
    }
    ctx->pc = 0x38E5B4u;
    {
        const bool branch_taken_0x38e5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E5B4u;
            // 0x38e5b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e5b4) {
            ctx->pc = 0x38E58Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38e58c;
        }
    }
    ctx->pc = 0x38E5BCu;
label_38e5bc:
    // 0x38e5bc: 0x0  nop
    ctx->pc = 0x38e5bcu;
    // NOP
label_38e5c0:
    // 0x38e5c0: 0xae6000b4  sw          $zero, 0xB4($s3)
    ctx->pc = 0x38e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 0));
label_38e5c4:
    // 0x38e5c4: 0xae6000ac  sw          $zero, 0xAC($s3)
    ctx->pc = 0x38e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 0));
label_38e5c8:
    // 0x38e5c8: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x38e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_38e5cc:
    // 0x38e5cc: 0xae6000a8  sw          $zero, 0xA8($s3)
    ctx->pc = 0x38e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 0));
label_38e5d0:
    // 0x38e5d0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x38e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_38e5d4:
    // 0x38e5d4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x38e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_38e5d8:
    // 0x38e5d8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x38e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_38e5dc:
    // 0x38e5dc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x38e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_38e5e0:
    // 0x38e5e0: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x38e5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_38e5e4:
    // 0x38e5e4: 0xc088b74  jal         func_222DD0
label_38e5e8:
    if (ctx->pc == 0x38E5E8u) {
        ctx->pc = 0x38E5E8u;
            // 0x38e5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E5ECu;
        goto label_38e5ec;
    }
    ctx->pc = 0x38E5E4u;
    SET_GPR_U32(ctx, 31, 0x38E5ECu);
    ctx->pc = 0x38E5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E5E4u;
            // 0x38e5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E5ECu; }
        if (ctx->pc != 0x38E5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E5ECu; }
        if (ctx->pc != 0x38E5ECu) { return; }
    }
    ctx->pc = 0x38E5ECu;
label_38e5ec:
    // 0x38e5ec: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x38e5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_38e5f0:
    // 0x38e5f0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x38e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_38e5f4:
    // 0x38e5f4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x38e5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38e5f8:
    // 0x38e5f8: 0x320f809  jalr        $t9
label_38e5fc:
    if (ctx->pc == 0x38E5FCu) {
        ctx->pc = 0x38E5FCu;
            // 0x38e5fc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38E600u;
        goto label_38e600;
    }
    ctx->pc = 0x38E5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E600u);
        ctx->pc = 0x38E5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E5F8u;
            // 0x38e5fc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E600u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E600u; }
            if (ctx->pc != 0x38E600u) { return; }
        }
        }
    }
    ctx->pc = 0x38E600u;
label_38e600:
    // 0x38e600: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x38e600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_38e604:
    // 0x38e604: 0xc088b74  jal         func_222DD0
label_38e608:
    if (ctx->pc == 0x38E608u) {
        ctx->pc = 0x38E608u;
            // 0x38e608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E60Cu;
        goto label_38e60c;
    }
    ctx->pc = 0x38E604u;
    SET_GPR_U32(ctx, 31, 0x38E60Cu);
    ctx->pc = 0x38E608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E604u;
            // 0x38e608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E60Cu; }
        if (ctx->pc != 0x38E60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E60Cu; }
        if (ctx->pc != 0x38E60Cu) { return; }
    }
    ctx->pc = 0x38E60Cu;
label_38e60c:
    // 0x38e60c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x38e60cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_38e610:
    // 0x38e610: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x38e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_38e614:
    // 0x38e614: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x38e614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_38e618:
    // 0x38e618: 0x320f809  jalr        $t9
label_38e61c:
    if (ctx->pc == 0x38E61Cu) {
        ctx->pc = 0x38E61Cu;
            // 0x38e61c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38E620u;
        goto label_38e620;
    }
    ctx->pc = 0x38E618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E620u);
        ctx->pc = 0x38E61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E618u;
            // 0x38e61c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E620u; }
            if (ctx->pc != 0x38E620u) { return; }
        }
        }
    }
    ctx->pc = 0x38E620u;
label_38e620:
    // 0x38e620: 0x8e660050  lw          $a2, 0x50($s3)
    ctx->pc = 0x38e620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_38e624:
    // 0x38e624: 0x3c074348  lui         $a3, 0x4348
    ctx->pc = 0x38e624u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17224 << 16));
label_38e628:
    // 0x38e628: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x38e628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_38e62c:
    // 0x38e62c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x38e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_38e630:
    // 0x38e630: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x38e630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_38e634:
    // 0x38e634: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x38e634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_38e638:
    // 0x38e638: 0xacc70154  sw          $a3, 0x154($a2)
    ctx->pc = 0x38e638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 7));
label_38e63c:
    // 0x38e63c: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x38e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_38e640:
    // 0x38e640: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x38e640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38e644:
    // 0x38e644: 0xac670158  sw          $a3, 0x158($v1)
    ctx->pc = 0x38e644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 7));
label_38e648:
    // 0x38e648: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x38e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_38e64c:
    // 0x38e64c: 0xac60015c  sw          $zero, 0x15C($v1)
    ctx->pc = 0x38e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 0));
label_38e650:
    // 0x38e650: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x38e650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_38e654:
    // 0x38e654: 0xac640160  sw          $a0, 0x160($v1)
    ctx->pc = 0x38e654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 4));
label_38e658:
    // 0x38e658: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x38e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_38e65c:
    // 0x38e65c: 0x8c830214  lw          $v1, 0x214($a0)
    ctx->pc = 0x38e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_38e660:
    // 0x38e660: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x38e660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_38e664:
    // 0x38e664: 0xac820214  sw          $v0, 0x214($a0)
    ctx->pc = 0x38e664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 2));
label_38e668:
    // 0x38e668: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x38e668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_38e66c:
    // 0x38e66c: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x38e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38e670:
    // 0x38e670: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x38e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38e674:
    // 0x38e674: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x38e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38e678:
    // 0x38e678: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x38e678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_38e67c:
    // 0x38e67c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x38e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_38e680:
    // 0x38e680: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x38e680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_38e684:
    // 0x38e684: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x38e684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_38e688:
    // 0x38e688: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x38e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38e68c:
    // 0x38e68c: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x38e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38e690:
    // 0x38e690: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x38e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38e694:
    // 0x38e694: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x38e694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38e698:
    // 0x38e698: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x38e698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_38e69c:
    // 0x38e69c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x38e69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_38e6a0:
    // 0x38e6a0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x38e6a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_38e6a4:
    // 0x38e6a4: 0xc0892b0  jal         func_224AC0
label_38e6a8:
    if (ctx->pc == 0x38E6A8u) {
        ctx->pc = 0x38E6A8u;
            // 0x38e6a8: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x38E6ACu;
        goto label_38e6ac;
    }
    ctx->pc = 0x38E6A4u;
    SET_GPR_U32(ctx, 31, 0x38E6ACu);
    ctx->pc = 0x38E6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E6A4u;
            // 0x38e6a8: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E6ACu; }
        if (ctx->pc != 0x38E6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E6ACu; }
        if (ctx->pc != 0x38E6ACu) { return; }
    }
    ctx->pc = 0x38E6ACu;
label_38e6ac:
    // 0x38e6ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38e6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38e6b0:
    // 0x38e6b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38e6b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38e6b4:
    // 0x38e6b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38e6b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e6b8:
    // 0x38e6b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e6bc:
    // 0x38e6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38e6c0:
    // 0x38e6c0: 0x3e00008  jr          $ra
label_38e6c4:
    if (ctx->pc == 0x38E6C4u) {
        ctx->pc = 0x38E6C4u;
            // 0x38e6c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x38E6C8u;
        goto label_38e6c8;
    }
    ctx->pc = 0x38E6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E6C0u;
            // 0x38e6c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38E6C8u;
label_38e6c8:
    // 0x38e6c8: 0x0  nop
    ctx->pc = 0x38e6c8u;
    // NOP
label_38e6cc:
    // 0x38e6cc: 0x0  nop
    ctx->pc = 0x38e6ccu;
    // NOP
}
