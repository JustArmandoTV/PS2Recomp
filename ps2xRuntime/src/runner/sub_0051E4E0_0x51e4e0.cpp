#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051E4E0
// Address: 0x51e4e0 - 0x51e940
void sub_0051E4E0_0x51e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051E4E0_0x51e4e0");
#endif

    switch (ctx->pc) {
        case 0x51e528u: goto label_51e528;
        case 0x51e534u: goto label_51e534;
        case 0x51e56cu: goto label_51e56c;
        case 0x51e580u: goto label_51e580;
        case 0x51e588u: goto label_51e588;
        case 0x51e5a0u: goto label_51e5a0;
        case 0x51e5a8u: goto label_51e5a8;
        case 0x51e5b8u: goto label_51e5b8;
        case 0x51e5d0u: goto label_51e5d0;
        case 0x51e5e8u: goto label_51e5e8;
        case 0x51e5f0u: goto label_51e5f0;
        case 0x51e600u: goto label_51e600;
        case 0x51e60cu: goto label_51e60c;
        case 0x51e618u: goto label_51e618;
        case 0x51e624u: goto label_51e624;
        case 0x51e634u: goto label_51e634;
        case 0x51e63cu: goto label_51e63c;
        case 0x51e654u: goto label_51e654;
        case 0x51e670u: goto label_51e670;
        case 0x51e684u: goto label_51e684;
        case 0x51e694u: goto label_51e694;
        case 0x51e6a8u: goto label_51e6a8;
        case 0x51e6b4u: goto label_51e6b4;
        case 0x51e6c0u: goto label_51e6c0;
        case 0x51e6ccu: goto label_51e6cc;
        case 0x51e6dcu: goto label_51e6dc;
        case 0x51e6e8u: goto label_51e6e8;
        case 0x51e700u: goto label_51e700;
        case 0x51e720u: goto label_51e720;
        case 0x51e72cu: goto label_51e72c;
        case 0x51e738u: goto label_51e738;
        case 0x51e748u: goto label_51e748;
        case 0x51e750u: goto label_51e750;
        case 0x51e758u: goto label_51e758;
        case 0x51e770u: goto label_51e770;
        case 0x51e778u: goto label_51e778;
        case 0x51e794u: goto label_51e794;
        case 0x51e7acu: goto label_51e7ac;
        case 0x51e7b8u: goto label_51e7b8;
        case 0x51e7c0u: goto label_51e7c0;
        case 0x51e7dcu: goto label_51e7dc;
        case 0x51e7e8u: goto label_51e7e8;
        case 0x51e7f0u: goto label_51e7f0;
        case 0x51e7fcu: goto label_51e7fc;
        case 0x51e804u: goto label_51e804;
        case 0x51e810u: goto label_51e810;
        case 0x51e818u: goto label_51e818;
        case 0x51e82cu: goto label_51e82c;
        case 0x51e8bcu: goto label_51e8bc;
        case 0x51e8c8u: goto label_51e8c8;
        case 0x51e8d8u: goto label_51e8d8;
        case 0x51e8e0u: goto label_51e8e0;
        case 0x51e8e8u: goto label_51e8e8;
        case 0x51e8fcu: goto label_51e8fc;
        case 0x51e91cu: goto label_51e91c;
        default: break;
    }

    ctx->pc = 0x51e4e0u;

    // 0x51e4e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x51e4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x51e4e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51e4e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51e4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x51e4ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51e4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x51e4f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51e4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51e4f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x51e4f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51e4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51e500: 0x8c8401c0  lw          $a0, 0x1C0($a0)
    ctx->pc = 0x51e500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x51e504: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x51E504u;
    {
        const bool branch_taken_0x51e504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x51e504) {
            ctx->pc = 0x51E508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E504u;
            // 0x51e508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E520u;
            goto label_51e520;
        }
    }
    ctx->pc = 0x51E50Cu;
    // 0x51e50c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x51E50Cu;
    {
        const bool branch_taken_0x51e50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e50c) {
            ctx->pc = 0x51E510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E50Cu;
            // 0x51e510: 0xae6301c0  sw          $v1, 0x1C0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E51Cu;
            goto label_51e51c;
        }
    }
    ctx->pc = 0x51E514u;
    // 0x51e514: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x51E514u;
    {
        const bool branch_taken_0x51e514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E514u;
            // 0x51e518: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e514) {
            ctx->pc = 0x51E920u;
            goto label_51e920;
        }
    }
    ctx->pc = 0x51E51Cu;
label_51e51c:
    // 0x51e51c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51e520:
    // 0x51e520: 0xc11f12c  jal         func_47C4B0
    ctx->pc = 0x51E520u;
    SET_GPR_U32(ctx, 31, 0x51E528u);
    ctx->pc = 0x47C4B0u;
    if (runtime->hasFunction(0x47C4B0u)) {
        auto targetFn = runtime->lookupFunction(0x47C4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E528u; }
        if (ctx->pc != 0x51E528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C4B0_0x47c4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E528u; }
        if (ctx->pc != 0x51E528u) { return; }
    }
    ctx->pc = 0x51E528u;
label_51e528:
    // 0x51e528: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x51e528u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x51e52c: 0xc147a88  jal         func_51EA20
    ctx->pc = 0x51E52Cu;
    SET_GPR_U32(ctx, 31, 0x51E534u);
    ctx->pc = 0x51E530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E52Cu;
            // 0x51e530: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA20u;
    if (runtime->hasFunction(0x51EA20u)) {
        auto targetFn = runtime->lookupFunction(0x51EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E534u; }
        if (ctx->pc != 0x51E534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA20_0x51ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E534u; }
        if (ctx->pc != 0x51E534u) { return; }
    }
    ctx->pc = 0x51E534u;
label_51e534:
    // 0x51e534: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x51e534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x51e538: 0x502000f1  beql        $at, $zero, . + 4 + (0xF1 << 2)
    ctx->pc = 0x51E538u;
    {
        const bool branch_taken_0x51e538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e538) {
            ctx->pc = 0x51E53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E538u;
            // 0x51e53c: 0x8e6401c4  lw          $a0, 0x1C4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E900u;
            goto label_51e900;
        }
    }
    ctx->pc = 0x51E540u;
    // 0x51e540: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x51e540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x51e544: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x51e544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x51e548: 0x2484c580  addiu       $a0, $a0, -0x3A80
    ctx->pc = 0x51e548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952320));
    // 0x51e54c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x51e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x51e550: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x51e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x51e554: 0x600008  jr          $v1
    ctx->pc = 0x51E554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x51E55Cu: goto label_51e55c;
            case 0x51E5C0u: goto label_51e5c0;
            case 0x51E65Cu: goto label_51e65c;
            case 0x51E68Cu: goto label_51e68c;
            case 0x51E6D4u: goto label_51e6d4;
            case 0x51E8D0u: goto label_51e8d0;
            case 0x51E8FCu: goto label_51e8fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x51E55Cu;
label_51e55c:
    // 0x51e55c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x51e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x51e560: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51e560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51e564: 0xc147a8c  jal         func_51EA30
    ctx->pc = 0x51E564u;
    SET_GPR_U32(ctx, 31, 0x51E56Cu);
    ctx->pc = 0x51E568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E564u;
            // 0x51e568: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA30u;
    if (runtime->hasFunction(0x51EA30u)) {
        auto targetFn = runtime->lookupFunction(0x51EA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E56Cu; }
        if (ctx->pc != 0x51E56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA30_0x51ea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E56Cu; }
        if (ctx->pc != 0x51E56Cu) { return; }
    }
    ctx->pc = 0x51E56Cu;
label_51e56c:
    // 0x51e56c: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x51E56Cu;
    {
        const bool branch_taken_0x51e56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e56c) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E574u;
    // 0x51e574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e578: 0xc147a84  jal         func_51EA10
    ctx->pc = 0x51E578u;
    SET_GPR_U32(ctx, 31, 0x51E580u);
    ctx->pc = 0x51E57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E578u;
            // 0x51e57c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA10u;
    if (runtime->hasFunction(0x51EA10u)) {
        auto targetFn = runtime->lookupFunction(0x51EA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E580u; }
        if (ctx->pc != 0x51E580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA10_0x51ea10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E580u; }
        if (ctx->pc != 0x51E580u) { return; }
    }
    ctx->pc = 0x51E580u;
label_51e580:
    // 0x51e580: 0xc0f7b70  jal         func_3DEDC0
    ctx->pc = 0x51E580u;
    SET_GPR_U32(ctx, 31, 0x51E588u);
    ctx->pc = 0x51E584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E580u;
            // 0x51e584: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEDC0u;
    if (runtime->hasFunction(0x3DEDC0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E588u; }
        if (ctx->pc != 0x51E588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEDC0_0x3dedc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E588u; }
        if (ctx->pc != 0x51E588u) { return; }
    }
    ctx->pc = 0x51E588u;
label_51e588:
    // 0x51e588: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x51e588u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x51e58c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x51e58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e590: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e594: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x51e594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x51e598: 0xc122c1c  jal         func_48B070
    ctx->pc = 0x51E598u;
    SET_GPR_U32(ctx, 31, 0x51E5A0u);
    ctx->pc = 0x51E59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E598u;
            // 0x51e59c: 0x24e7c490  addiu       $a3, $a3, -0x3B70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B070u;
    if (runtime->hasFunction(0x48B070u)) {
        auto targetFn = runtime->lookupFunction(0x48B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5A0u; }
        if (ctx->pc != 0x51E5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B070_0x48b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5A0u; }
        if (ctx->pc != 0x51E5A0u) { return; }
    }
    ctx->pc = 0x51E5A0u;
label_51e5a0:
    // 0x51e5a0: 0xc07724c  jal         func_1DC930
    ctx->pc = 0x51E5A0u;
    SET_GPR_U32(ctx, 31, 0x51E5A8u);
    ctx->pc = 0x51E5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E5A0u;
            // 0x51e5a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5A8u; }
        if (ctx->pc != 0x51E5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5A8u; }
        if (ctx->pc != 0x51E5A8u) { return; }
    }
    ctx->pc = 0x51E5A8u;
label_51e5a8:
    // 0x51e5a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x51e5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51e5ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e5b0: 0xc147a80  jal         func_51EA00
    ctx->pc = 0x51E5B0u;
    SET_GPR_U32(ctx, 31, 0x51E5B8u);
    ctx->pc = 0x51E5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E5B0u;
            // 0x51e5b4: 0xa2650220  sb          $a1, 0x220($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 544), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA00u;
    if (runtime->hasFunction(0x51EA00u)) {
        auto targetFn = runtime->lookupFunction(0x51EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5B8u; }
        if (ctx->pc != 0x51E5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA00_0x51ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5B8u; }
        if (ctx->pc != 0x51E5B8u) { return; }
    }
    ctx->pc = 0x51E5B8u;
label_51e5b8:
    // 0x51e5b8: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x51E5B8u;
    {
        const bool branch_taken_0x51e5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e5b8) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E5C0u;
label_51e5c0:
    // 0x51e5c0: 0x3c024339  lui         $v0, 0x4339
    ctx->pc = 0x51e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17209 << 16));
    // 0x51e5c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51e5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51e5c8: 0xc147a8c  jal         func_51EA30
    ctx->pc = 0x51E5C8u;
    SET_GPR_U32(ctx, 31, 0x51E5D0u);
    ctx->pc = 0x51E5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E5C8u;
            // 0x51e5cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA30u;
    if (runtime->hasFunction(0x51EA30u)) {
        auto targetFn = runtime->lookupFunction(0x51EA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5D0u; }
        if (ctx->pc != 0x51E5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA30_0x51ea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5D0u; }
        if (ctx->pc != 0x51E5D0u) { return; }
    }
    ctx->pc = 0x51E5D0u;
label_51e5d0:
    // 0x51e5d0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x51E5D0u;
    {
        const bool branch_taken_0x51e5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e5d0) {
            ctx->pc = 0x51E5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E5D0u;
            // 0x51e5d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E62Cu;
            goto label_51e62c;
        }
    }
    ctx->pc = 0x51E5D8u;
    // 0x51e5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51e5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e5dc: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x51e5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x51e5e0: 0xc0c05cc  jal         func_301730
    ctx->pc = 0x51E5E0u;
    SET_GPR_U32(ctx, 31, 0x51E5E8u);
    ctx->pc = 0x51E5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E5E0u;
            // 0x51e5e4: 0xa2600220  sb          $zero, 0x220($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 544), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5E8u; }
        if (ctx->pc != 0x51E5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5E8u; }
        if (ctx->pc != 0x51E5E8u) { return; }
    }
    ctx->pc = 0x51E5E8u;
label_51e5e8:
    // 0x51e5e8: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x51E5E8u;
    SET_GPR_U32(ctx, 31, 0x51E5F0u);
    ctx->pc = 0x51E5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E5E8u;
            // 0x51e5ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5F0u; }
        if (ctx->pc != 0x51E5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E5F0u; }
        if (ctx->pc != 0x51E5F0u) { return; }
    }
    ctx->pc = 0x51E5F0u;
label_51e5f0:
    // 0x51e5f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51e5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e5f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51e5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e5f8: 0xc0e1218  jal         func_384860
    ctx->pc = 0x51E5F8u;
    SET_GPR_U32(ctx, 31, 0x51E600u);
    ctx->pc = 0x51E5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E5F8u;
            // 0x51e5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384860u;
    if (runtime->hasFunction(0x384860u)) {
        auto targetFn = runtime->lookupFunction(0x384860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E600u; }
        if (ctx->pc != 0x51E600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384860_0x384860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E600u; }
        if (ctx->pc != 0x51E600u) { return; }
    }
    ctx->pc = 0x51E600u;
label_51e600:
    // 0x51e600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51e600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e604: 0xc0ab808  jal         func_2AE020
    ctx->pc = 0x51E604u;
    SET_GPR_U32(ctx, 31, 0x51E60Cu);
    ctx->pc = 0x51E608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E604u;
            // 0x51e608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E60Cu; }
        if (ctx->pc != 0x51E60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E60Cu; }
        if (ctx->pc != 0x51E60Cu) { return; }
    }
    ctx->pc = 0x51E60Cu;
label_51e60c:
    // 0x51e60c: 0x8e6401c8  lw          $a0, 0x1C8($s3)
    ctx->pc = 0x51e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
    // 0x51e610: 0xc147694  jal         func_51DA50
    ctx->pc = 0x51E610u;
    SET_GPR_U32(ctx, 31, 0x51E618u);
    ctx->pc = 0x51E614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E610u;
            // 0x51e614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51DA50u;
    if (runtime->hasFunction(0x51DA50u)) {
        auto targetFn = runtime->lookupFunction(0x51DA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E618u; }
        if (ctx->pc != 0x51E618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051DA50_0x51da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E618u; }
        if (ctx->pc != 0x51E618u) { return; }
    }
    ctx->pc = 0x51E618u;
label_51e618:
    // 0x51e618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e61c: 0xc147a80  jal         func_51EA00
    ctx->pc = 0x51E61Cu;
    SET_GPR_U32(ctx, 31, 0x51E624u);
    ctx->pc = 0x51E620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E61Cu;
            // 0x51e620: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA00u;
    if (runtime->hasFunction(0x51EA00u)) {
        auto targetFn = runtime->lookupFunction(0x51EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E624u; }
        if (ctx->pc != 0x51E624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA00_0x51ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E624u; }
        if (ctx->pc != 0x51E624u) { return; }
    }
    ctx->pc = 0x51E624u;
label_51e624:
    // 0x51e624: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x51E624u;
    {
        const bool branch_taken_0x51e624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e624) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E62Cu;
label_51e62c:
    // 0x51e62c: 0xc147a84  jal         func_51EA10
    ctx->pc = 0x51E62Cu;
    SET_GPR_U32(ctx, 31, 0x51E634u);
    ctx->pc = 0x51E630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E62Cu;
            // 0x51e630: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA10u;
    if (runtime->hasFunction(0x51EA10u)) {
        auto targetFn = runtime->lookupFunction(0x51EA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E634u; }
        if (ctx->pc != 0x51E634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA10_0x51ea10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E634u; }
        if (ctx->pc != 0x51E634u) { return; }
    }
    ctx->pc = 0x51E634u;
label_51e634:
    // 0x51e634: 0xc0f7b70  jal         func_3DEDC0
    ctx->pc = 0x51E634u;
    SET_GPR_U32(ctx, 31, 0x51E63Cu);
    ctx->pc = 0x51E638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E634u;
            // 0x51e638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEDC0u;
    if (runtime->hasFunction(0x3DEDC0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E63Cu; }
        if (ctx->pc != 0x51E63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEDC0_0x3dedc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E63Cu; }
        if (ctx->pc != 0x51E63Cu) { return; }
    }
    ctx->pc = 0x51E63Cu;
label_51e63c:
    // 0x51e63c: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x51e63cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x51e640: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e644: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x51e644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x51e648: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x51e648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e64c: 0xc122c1c  jal         func_48B070
    ctx->pc = 0x51E64Cu;
    SET_GPR_U32(ctx, 31, 0x51E654u);
    ctx->pc = 0x51E650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E64Cu;
            // 0x51e650: 0x24e7c490  addiu       $a3, $a3, -0x3B70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B070u;
    if (runtime->hasFunction(0x48B070u)) {
        auto targetFn = runtime->lookupFunction(0x48B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E654u; }
        if (ctx->pc != 0x51E654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B070_0x48b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E654u; }
        if (ctx->pc != 0x51E654u) { return; }
    }
    ctx->pc = 0x51E654u;
label_51e654:
    // 0x51e654: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x51E654u;
    {
        const bool branch_taken_0x51e654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e654) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E65Cu;
label_51e65c:
    // 0x51e65c: 0x3c024395  lui         $v0, 0x4395
    ctx->pc = 0x51e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17301 << 16));
    // 0x51e660: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x51e660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x51e664: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51e664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51e668: 0xc147a8c  jal         func_51EA30
    ctx->pc = 0x51E668u;
    SET_GPR_U32(ctx, 31, 0x51E670u);
    ctx->pc = 0x51E66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E668u;
            // 0x51e66c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA30u;
    if (runtime->hasFunction(0x51EA30u)) {
        auto targetFn = runtime->lookupFunction(0x51EA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E670u; }
        if (ctx->pc != 0x51E670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA30_0x51ea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E670u; }
        if (ctx->pc != 0x51E670u) { return; }
    }
    ctx->pc = 0x51E670u;
label_51e670:
    // 0x51e670: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x51E670u;
    {
        const bool branch_taken_0x51e670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e670) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E678u;
    // 0x51e678: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e67c: 0xc147a80  jal         func_51EA00
    ctx->pc = 0x51E67Cu;
    SET_GPR_U32(ctx, 31, 0x51E684u);
    ctx->pc = 0x51E680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E67Cu;
            // 0x51e680: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA00u;
    if (runtime->hasFunction(0x51EA00u)) {
        auto targetFn = runtime->lookupFunction(0x51EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E684u; }
        if (ctx->pc != 0x51E684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA00_0x51ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E684u; }
        if (ctx->pc != 0x51E684u) { return; }
    }
    ctx->pc = 0x51E684u;
label_51e684:
    // 0x51e684: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x51E684u;
    {
        const bool branch_taken_0x51e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e684) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E68Cu;
label_51e68c:
    // 0x51e68c: 0xc077588  jal         func_1DD620
    ctx->pc = 0x51E68Cu;
    SET_GPR_U32(ctx, 31, 0x51E694u);
    ctx->pc = 0x51E690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E68Cu;
            // 0x51e690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD620u;
    if (runtime->hasFunction(0x1DD620u)) {
        auto targetFn = runtime->lookupFunction(0x1DD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E694u; }
        if (ctx->pc != 0x51E694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD620_0x1dd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E694u; }
        if (ctx->pc != 0x51E694u) { return; }
    }
    ctx->pc = 0x51E694u;
label_51e694:
    // 0x51e694: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x51e694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x51e698: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x51E698u;
    {
        const bool branch_taken_0x51e698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e698) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E6A0u;
    // 0x51e6a0: 0xc07731c  jal         func_1DCC70
    ctx->pc = 0x51E6A0u;
    SET_GPR_U32(ctx, 31, 0x51E6A8u);
    ctx->pc = 0x51E6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E6A0u;
            // 0x51e6a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6A8u; }
        if (ctx->pc != 0x51E6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6A8u; }
        if (ctx->pc != 0x51E6A8u) { return; }
    }
    ctx->pc = 0x51E6A8u;
label_51e6a8:
    // 0x51e6a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51e6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e6ac: 0xc0e11bc  jal         func_3846F0
    ctx->pc = 0x51E6ACu;
    SET_GPR_U32(ctx, 31, 0x51E6B4u);
    ctx->pc = 0x51E6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E6ACu;
            // 0x51e6b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3846F0u;
    if (runtime->hasFunction(0x3846F0u)) {
        auto targetFn = runtime->lookupFunction(0x3846F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6B4u; }
        if (ctx->pc != 0x51E6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003846F0_0x3846f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6B4u; }
        if (ctx->pc != 0x51E6B4u) { return; }
    }
    ctx->pc = 0x51E6B4u;
label_51e6b4:
    // 0x51e6b4: 0x8e6401c8  lw          $a0, 0x1C8($s3)
    ctx->pc = 0x51e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
    // 0x51e6b8: 0xc147670  jal         func_51D9C0
    ctx->pc = 0x51E6B8u;
    SET_GPR_U32(ctx, 31, 0x51E6C0u);
    ctx->pc = 0x51E6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E6B8u;
            // 0x51e6bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51D9C0u;
    if (runtime->hasFunction(0x51D9C0u)) {
        auto targetFn = runtime->lookupFunction(0x51D9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6C0u; }
        if (ctx->pc != 0x51E6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051D9C0_0x51d9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6C0u; }
        if (ctx->pc != 0x51E6C0u) { return; }
    }
    ctx->pc = 0x51E6C0u;
label_51e6c0:
    // 0x51e6c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e6c4: 0xc147a80  jal         func_51EA00
    ctx->pc = 0x51E6C4u;
    SET_GPR_U32(ctx, 31, 0x51E6CCu);
    ctx->pc = 0x51E6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E6C4u;
            // 0x51e6c8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA00u;
    if (runtime->hasFunction(0x51EA00u)) {
        auto targetFn = runtime->lookupFunction(0x51EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6CCu; }
        if (ctx->pc != 0x51E6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA00_0x51ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6CCu; }
        if (ctx->pc != 0x51E6CCu) { return; }
    }
    ctx->pc = 0x51E6CCu;
label_51e6cc:
    // 0x51e6cc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x51E6CCu;
    {
        const bool branch_taken_0x51e6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e6cc) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E6D4u;
label_51e6d4:
    // 0x51e6d4: 0xc07724c  jal         func_1DC930
    ctx->pc = 0x51E6D4u;
    SET_GPR_U32(ctx, 31, 0x51E6DCu);
    ctx->pc = 0x51E6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E6D4u;
            // 0x51e6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6DCu; }
        if (ctx->pc != 0x51E6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6DCu; }
        if (ctx->pc != 0x51E6DCu) { return; }
    }
    ctx->pc = 0x51E6DCu;
label_51e6dc:
    // 0x51e6dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x51e6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e6e0: 0xc0783b8  jal         func_1E0EE0
    ctx->pc = 0x51E6E0u;
    SET_GPR_U32(ctx, 31, 0x51E6E8u);
    ctx->pc = 0x51E6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E6E0u;
            // 0x51e6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EE0u;
    if (runtime->hasFunction(0x1E0EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6E8u; }
        if (ctx->pc != 0x51E6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EE0_0x1e0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E6E8u; }
        if (ctx->pc != 0x51E6E8u) { return; }
    }
    ctx->pc = 0x51E6E8u;
label_51e6e8:
    // 0x51e6e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x51e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x51e6ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51e6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e6f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e6f4: 0x2463038e  addiu       $v1, $v1, 0x38E
    ctx->pc = 0x51e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 910));
    // 0x51e6f8: 0xc077574  jal         func_1DD5D0
    ctx->pc = 0x51E6F8u;
    SET_GPR_U32(ctx, 31, 0x51E700u);
    ctx->pc = 0x51E6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E6F8u;
            // 0x51e6fc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E700u; }
        if (ctx->pc != 0x51E700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E700u; }
        if (ctx->pc != 0x51E700u) { return; }
    }
    ctx->pc = 0x51E700u;
label_51e700:
    // 0x51e700: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x51e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x51e704: 0x1043007d  beq         $v0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x51E704u;
    {
        const bool branch_taken_0x51e704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x51e704) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E70Cu;
    // 0x51e70c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x51e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x51e710: 0x26640218  addiu       $a0, $s3, 0x218
    ctx->pc = 0x51e710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 536));
    // 0x51e714: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51e714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51e718: 0xc147a7c  jal         func_51E9F0
    ctx->pc = 0x51E718u;
    SET_GPR_U32(ctx, 31, 0x51E720u);
    ctx->pc = 0x51E71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E718u;
            // 0x51e71c: 0xa2600220  sb          $zero, 0x220($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 544), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51E9F0u;
    if (runtime->hasFunction(0x51E9F0u)) {
        auto targetFn = runtime->lookupFunction(0x51E9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E720u; }
        if (ctx->pc != 0x51E720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051E9F0_0x51e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E720u; }
        if (ctx->pc != 0x51E720u) { return; }
    }
    ctx->pc = 0x51E720u;
label_51e720:
    // 0x51e720: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x51e720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x51e724: 0xc0783b4  jal         func_1E0ED0
    ctx->pc = 0x51E724u;
    SET_GPR_U32(ctx, 31, 0x51E72Cu);
    ctx->pc = 0x51E728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E724u;
            // 0x51e728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0ED0u;
    if (runtime->hasFunction(0x1E0ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E72Cu; }
        if (ctx->pc != 0x51E72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0ED0_0x1e0ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E72Cu; }
        if (ctx->pc != 0x51E72Cu) { return; }
    }
    ctx->pc = 0x51E72Cu;
label_51e72c:
    // 0x51e72c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x51e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x51e730: 0xc0775d8  jal         func_1DD760
    ctx->pc = 0x51E730u;
    SET_GPR_U32(ctx, 31, 0x51E738u);
    ctx->pc = 0x51E734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E730u;
            // 0x51e734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E738u; }
        if (ctx->pc != 0x51E738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E738u; }
        if (ctx->pc != 0x51E738u) { return; }
    }
    ctx->pc = 0x51E738u;
label_51e738:
    // 0x51e738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e73c: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x51e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
    // 0x51e740: 0xc0cef60  jal         func_33BD80
    ctx->pc = 0x51E740u;
    SET_GPR_U32(ctx, 31, 0x51E748u);
    ctx->pc = 0x51E744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E740u;
            // 0x51e744: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BD80u;
    if (runtime->hasFunction(0x33BD80u)) {
        auto targetFn = runtime->lookupFunction(0x33BD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E748u; }
        if (ctx->pc != 0x51E748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BD80_0x33bd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E748u; }
        if (ctx->pc != 0x51E748u) { return; }
    }
    ctx->pc = 0x51E748u;
label_51e748:
    // 0x51e748: 0xc077290  jal         func_1DCA40
    ctx->pc = 0x51E748u;
    SET_GPR_U32(ctx, 31, 0x51E750u);
    ctx->pc = 0x51E74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E748u;
            // 0x51e74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E750u; }
        if (ctx->pc != 0x51E750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E750u; }
        if (ctx->pc != 0x51E750u) { return; }
    }
    ctx->pc = 0x51E750u;
label_51e750:
    // 0x51e750: 0xc077224  jal         func_1DC890
    ctx->pc = 0x51E750u;
    SET_GPR_U32(ctx, 31, 0x51E758u);
    ctx->pc = 0x51E754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E750u;
            // 0x51e754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E758u; }
        if (ctx->pc != 0x51E758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E758u; }
        if (ctx->pc != 0x51E758u) { return; }
    }
    ctx->pc = 0x51E758u;
label_51e758:
    // 0x51e758: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x51e758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x51e75c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x51e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x51e760: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x51E760u;
    {
        const bool branch_taken_0x51e760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x51e760) {
            ctx->pc = 0x51E764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E760u;
            // 0x51e764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E78Cu;
            goto label_51e78c;
        }
    }
    ctx->pc = 0x51E768u;
    // 0x51e768: 0xc077290  jal         func_1DCA40
    ctx->pc = 0x51E768u;
    SET_GPR_U32(ctx, 31, 0x51E770u);
    ctx->pc = 0x51E76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E768u;
            // 0x51e76c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E770u; }
        if (ctx->pc != 0x51E770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E770u; }
        if (ctx->pc != 0x51E770u) { return; }
    }
    ctx->pc = 0x51E770u;
label_51e770:
    // 0x51e770: 0xc077224  jal         func_1DC890
    ctx->pc = 0x51E770u;
    SET_GPR_U32(ctx, 31, 0x51E778u);
    ctx->pc = 0x51E774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E770u;
            // 0x51e774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E778u; }
        if (ctx->pc != 0x51E778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E778u; }
        if (ctx->pc != 0x51E778u) { return; }
    }
    ctx->pc = 0x51E778u;
label_51e778:
    // 0x51e778: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x51e778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x51e77c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x51e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x51e780: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x51E780u;
    {
        const bool branch_taken_0x51e780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x51e780) {
            ctx->pc = 0x51E784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E780u;
            // 0x51e784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E7B0u;
            goto label_51e7b0;
        }
    }
    ctx->pc = 0x51E788u;
    // 0x51e788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51e788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51e78c:
    // 0x51e78c: 0xc0772f0  jal         func_1DCBC0
    ctx->pc = 0x51E78Cu;
    SET_GPR_U32(ctx, 31, 0x51E794u);
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E794u; }
        if (ctx->pc != 0x51E794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E794u; }
        if (ctx->pc != 0x51E794u) { return; }
    }
    ctx->pc = 0x51E794u;
label_51e794:
    // 0x51e794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51e794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x51e798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51e79c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x51e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x51e7a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51e7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51e7a4: 0xc0bdf94  jal         func_2F7E50
    ctx->pc = 0x51E7A4u;
    SET_GPR_U32(ctx, 31, 0x51E7ACu);
    ctx->pc = 0x51E7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E7A4u;
            // 0x51e7a8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7ACu; }
        if (ctx->pc != 0x51E7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7ACu; }
        if (ctx->pc != 0x51E7ACu) { return; }
    }
    ctx->pc = 0x51E7ACu;
label_51e7ac:
    // 0x51e7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51e7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51e7b0:
    // 0x51e7b0: 0xc07724c  jal         func_1DC930
    ctx->pc = 0x51E7B0u;
    SET_GPR_U32(ctx, 31, 0x51E7B8u);
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7B8u; }
        if (ctx->pc != 0x51E7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7B8u; }
        if (ctx->pc != 0x51E7B8u) { return; }
    }
    ctx->pc = 0x51E7B8u;
label_51e7b8:
    // 0x51e7b8: 0xc147a78  jal         func_51E9E0
    ctx->pc = 0x51E7B8u;
    SET_GPR_U32(ctx, 31, 0x51E7C0u);
    ctx->pc = 0x51E7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E7B8u;
            // 0x51e7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51E9E0u;
    if (runtime->hasFunction(0x51E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x51E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7C0u; }
        if (ctx->pc != 0x51E7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051E9E0_0x51e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7C0u; }
        if (ctx->pc != 0x51E7C0u) { return; }
    }
    ctx->pc = 0x51E7C0u;
label_51e7c0:
    // 0x51e7c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51e7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e7c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x51e7c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51e7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51e7cc: 0x0  nop
    ctx->pc = 0x51e7ccu;
    // NOP
    // 0x51e7d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x51e7d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x51e7d4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x51E7D4u;
    SET_GPR_U32(ctx, 31, 0x51E7DCu);
    ctx->pc = 0x51E7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E7D4u;
            // 0x51e7d8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7DCu; }
        if (ctx->pc != 0x51E7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7DCu; }
        if (ctx->pc != 0x51E7DCu) { return; }
    }
    ctx->pc = 0x51E7DCu;
label_51e7dc:
    // 0x51e7dc: 0x8e6401c8  lw          $a0, 0x1C8($s3)
    ctx->pc = 0x51e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
    // 0x51e7e0: 0xc14764c  jal         func_51D930
    ctx->pc = 0x51E7E0u;
    SET_GPR_U32(ctx, 31, 0x51E7E8u);
    ctx->pc = 0x51E7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E7E0u;
            // 0x51e7e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51D930u;
    if (runtime->hasFunction(0x51D930u)) {
        auto targetFn = runtime->lookupFunction(0x51D930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7E8u; }
        if (ctx->pc != 0x51E7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051D930_0x51d930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7E8u; }
        if (ctx->pc != 0x51E7E8u) { return; }
    }
    ctx->pc = 0x51E7E8u;
label_51e7e8:
    // 0x51e7e8: 0xc0daef4  jal         func_36BBD0
    ctx->pc = 0x51E7E8u;
    SET_GPR_U32(ctx, 31, 0x51E7F0u);
    ctx->pc = 0x51E7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E7E8u;
            // 0x51e7ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBD0u;
    if (runtime->hasFunction(0x36BBD0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7F0u; }
        if (ctx->pc != 0x51E7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBD0_0x36bbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7F0u; }
        if (ctx->pc != 0x51E7F0u) { return; }
    }
    ctx->pc = 0x51E7F0u;
label_51e7f0:
    // 0x51e7f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x51e7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e7f4: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x51E7F4u;
    SET_GPR_U32(ctx, 31, 0x51E7FCu);
    ctx->pc = 0x51E7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E7F4u;
            // 0x51e7f8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7FCu; }
        if (ctx->pc != 0x51E7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E7FCu; }
        if (ctx->pc != 0x51E7FCu) { return; }
    }
    ctx->pc = 0x51E7FCu;
label_51e7fc:
    // 0x51e7fc: 0xc07753c  jal         func_1DD4F0
    ctx->pc = 0x51E7FCu;
    SET_GPR_U32(ctx, 31, 0x51E804u);
    ctx->pc = 0x51E800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E7FCu;
            // 0x51e800: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E804u; }
        if (ctx->pc != 0x51E804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E804u; }
        if (ctx->pc != 0x51E804u) { return; }
    }
    ctx->pc = 0x51E804u;
label_51e804:
    // 0x51e804: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x51e804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e808: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x51E808u;
    SET_GPR_U32(ctx, 31, 0x51E810u);
    ctx->pc = 0x51E80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E808u;
            // 0x51e80c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E810u; }
        if (ctx->pc != 0x51E810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E810u; }
        if (ctx->pc != 0x51E810u) { return; }
    }
    ctx->pc = 0x51E810u;
label_51e810:
    // 0x51e810: 0xc0efc54  jal         func_3BF150
    ctx->pc = 0x51E810u;
    SET_GPR_U32(ctx, 31, 0x51E818u);
    ctx->pc = 0x51E814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E810u;
            // 0x51e814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF150u;
    if (runtime->hasFunction(0x3BF150u)) {
        auto targetFn = runtime->lookupFunction(0x3BF150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E818u; }
        if (ctx->pc != 0x51E818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF150_0x3bf150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E818u; }
        if (ctx->pc != 0x51E818u) { return; }
    }
    ctx->pc = 0x51E818u;
label_51e818:
    // 0x51e818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x51e818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e81c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x51e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x51e820: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51e820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x51e824: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x51E824u;
    SET_GPR_U32(ctx, 31, 0x51E82Cu);
    ctx->pc = 0x51E828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E824u;
            // 0x51e828: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E82Cu; }
        if (ctx->pc != 0x51E82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E82Cu; }
        if (ctx->pc != 0x51E82Cu) { return; }
    }
    ctx->pc = 0x51E82Cu;
label_51e82c:
    // 0x51e82c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x51e82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51e830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51e830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x51e834: 0x0  nop
    ctx->pc = 0x51e834u;
    // NOP
    // 0x51e838: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x51e838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x51e83c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x51E83Cu;
    {
        const bool branch_taken_0x51e83c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x51E840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E83Cu;
            // 0x51e840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e83c) {
            ctx->pc = 0x51E848u;
            goto label_51e848;
        }
    }
    ctx->pc = 0x51E844u;
    // 0x51e844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x51e844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51e848:
    // 0x51e848: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51E848u;
    {
        const bool branch_taken_0x51e848 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x51e848) {
            ctx->pc = 0x51E84Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51E848u;
            // 0x51e84c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51E85Cu;
            goto label_51e85c;
        }
    }
    ctx->pc = 0x51E850u;
    // 0x51e850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51e850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x51e854: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x51E854u;
    {
        const bool branch_taken_0x51e854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51E858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E854u;
            // 0x51e858: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e854) {
            ctx->pc = 0x51E874u;
            goto label_51e874;
        }
    }
    ctx->pc = 0x51E85Cu;
label_51e85c:
    // 0x51e85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x51e85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x51e860: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x51e860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x51e864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51e864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x51e868: 0x0  nop
    ctx->pc = 0x51e868u;
    // NOP
    // 0x51e86c: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x51e86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x51e870: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x51e870u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_51e874:
    // 0x51e874: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x51e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x51e878: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x51e878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x51e87c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x51e87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x51e880: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x51e880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x51e884: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x51e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x51e888: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x51e888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x51e88c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x51e88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x51e890: 0x0  nop
    ctx->pc = 0x51e890u;
    // NOP
    // 0x51e894: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x51e894u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x51e898: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x51e898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x51e89c: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x51e89cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x51e8a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x51e8a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x51e8a4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x51e8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x51e8a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x51e8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x51e8ac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x51e8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x51e8b0: 0x8e640210  lw          $a0, 0x210($s3)
    ctx->pc = 0x51e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x51e8b4: 0xc0e3160  jal         func_38C580
    ctx->pc = 0x51E8B4u;
    SET_GPR_U32(ctx, 31, 0x51E8BCu);
    ctx->pc = 0x51E8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E8B4u;
            // 0x51e8b8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C580u;
    if (runtime->hasFunction(0x38C580u)) {
        auto targetFn = runtime->lookupFunction(0x38C580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8BCu; }
        if (ctx->pc != 0x51E8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C580_0x38c580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8BCu; }
        if (ctx->pc != 0x51E8BCu) { return; }
    }
    ctx->pc = 0x51E8BCu;
label_51e8bc:
    // 0x51e8bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e8c0: 0xc147a80  jal         func_51EA00
    ctx->pc = 0x51E8C0u;
    SET_GPR_U32(ctx, 31, 0x51E8C8u);
    ctx->pc = 0x51E8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E8C0u;
            // 0x51e8c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA00u;
    if (runtime->hasFunction(0x51EA00u)) {
        auto targetFn = runtime->lookupFunction(0x51EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8C8u; }
        if (ctx->pc != 0x51E8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA00_0x51ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8C8u; }
        if (ctx->pc != 0x51E8C8u) { return; }
    }
    ctx->pc = 0x51E8C8u;
label_51e8c8:
    // 0x51e8c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x51E8C8u;
    {
        const bool branch_taken_0x51e8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e8c8) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E8D0u;
label_51e8d0:
    // 0x51e8d0: 0xc0e328c  jal         func_38CA30
    ctx->pc = 0x51E8D0u;
    SET_GPR_U32(ctx, 31, 0x51E8D8u);
    ctx->pc = 0x51E8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E8D0u;
            // 0x51e8d4: 0x8e640210  lw          $a0, 0x210($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA30u;
    if (runtime->hasFunction(0x38CA30u)) {
        auto targetFn = runtime->lookupFunction(0x38CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8D8u; }
        if (ctx->pc != 0x51E8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA30_0x38ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8D8u; }
        if (ctx->pc != 0x51E8D8u) { return; }
    }
    ctx->pc = 0x51E8D8u;
label_51e8d8:
    // 0x51e8d8: 0xc147a60  jal         func_51E980
    ctx->pc = 0x51E8D8u;
    SET_GPR_U32(ctx, 31, 0x51E8E0u);
    ctx->pc = 0x51E8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E8D8u;
            // 0x51e8dc: 0x26640218  addiu       $a0, $s3, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51E980u;
    if (runtime->hasFunction(0x51E980u)) {
        auto targetFn = runtime->lookupFunction(0x51E980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8E0u; }
        if (ctx->pc != 0x51E8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051E980_0x51e980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8E0u; }
        if (ctx->pc != 0x51E8E0u) { return; }
    }
    ctx->pc = 0x51E8E0u;
label_51e8e0:
    // 0x51e8e0: 0xc147a50  jal         func_51E940
    ctx->pc = 0x51E8E0u;
    SET_GPR_U32(ctx, 31, 0x51E8E8u);
    ctx->pc = 0x51E8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E8E0u;
            // 0x51e8e4: 0x26640218  addiu       $a0, $s3, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51E940u;
    if (runtime->hasFunction(0x51E940u)) {
        auto targetFn = runtime->lookupFunction(0x51E940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8E8u; }
        if (ctx->pc != 0x51E8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051E940_0x51e940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8E8u; }
        if (ctx->pc != 0x51E8E8u) { return; }
    }
    ctx->pc = 0x51E8E8u;
label_51e8e8:
    // 0x51e8e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51E8E8u;
    {
        const bool branch_taken_0x51e8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51e8e8) {
            ctx->pc = 0x51E8FCu;
            goto label_51e8fc;
        }
    }
    ctx->pc = 0x51E8F0u;
    // 0x51e8f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51e8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e8f4: 0xc147a80  jal         func_51EA00
    ctx->pc = 0x51E8F4u;
    SET_GPR_U32(ctx, 31, 0x51E8FCu);
    ctx->pc = 0x51E8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E8F4u;
            // 0x51e8f8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EA00u;
    if (runtime->hasFunction(0x51EA00u)) {
        auto targetFn = runtime->lookupFunction(0x51EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8FCu; }
        if (ctx->pc != 0x51E8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EA00_0x51ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E8FCu; }
        if (ctx->pc != 0x51E8FCu) { return; }
    }
    ctx->pc = 0x51E8FCu;
label_51e8fc:
    // 0x51e8fc: 0x8e6401c4  lw          $a0, 0x1C4($s3)
    ctx->pc = 0x51e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
label_51e900:
    // 0x51e900: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x51e900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x51e904: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x51E904u;
    {
        const bool branch_taken_0x51e904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x51e904) {
            ctx->pc = 0x51E91Cu;
            goto label_51e91c;
        }
    }
    ctx->pc = 0x51E90Cu;
    // 0x51e90c: 0x8e6201c8  lw          $v0, 0x1C8($s3)
    ctx->pc = 0x51e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
    // 0x51e910: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x51e910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51e914: 0xc147c5c  jal         func_51F170
    ctx->pc = 0x51E914u;
    SET_GPR_U32(ctx, 31, 0x51E91Cu);
    ctx->pc = 0x51E918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E914u;
            // 0x51e918: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51F170u;
    if (runtime->hasFunction(0x51F170u)) {
        auto targetFn = runtime->lookupFunction(0x51F170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E91Cu; }
        if (ctx->pc != 0x51E91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051F170_0x51f170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E91Cu; }
        if (ctx->pc != 0x51E91Cu) { return; }
    }
    ctx->pc = 0x51E91Cu;
label_51e91c:
    // 0x51e91c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51e91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51e920:
    // 0x51e920: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51e920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51e924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51e924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51e928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51e928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51e92c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51e92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51e930: 0x3e00008  jr          $ra
    ctx->pc = 0x51E930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51E934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E930u;
            // 0x51e934: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51E938u;
    // 0x51e938: 0x0  nop
    ctx->pc = 0x51e938u;
    // NOP
    // 0x51e93c: 0x0  nop
    ctx->pc = 0x51e93cu;
    // NOP
}
