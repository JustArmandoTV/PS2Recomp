#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E4B8
// Address: 0x11e4b8 - 0x11e630
void sub_0011E4B8_0x11e4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E4B8_0x11e4b8");
#endif

    switch (ctx->pc) {
        case 0x11e4b8u: goto label_11e4b8;
        case 0x11e4bcu: goto label_11e4bc;
        case 0x11e4c0u: goto label_11e4c0;
        case 0x11e4c4u: goto label_11e4c4;
        case 0x11e4c8u: goto label_11e4c8;
        case 0x11e4ccu: goto label_11e4cc;
        case 0x11e4d0u: goto label_11e4d0;
        case 0x11e4d4u: goto label_11e4d4;
        case 0x11e4d8u: goto label_11e4d8;
        case 0x11e4dcu: goto label_11e4dc;
        case 0x11e4e0u: goto label_11e4e0;
        case 0x11e4e4u: goto label_11e4e4;
        case 0x11e4e8u: goto label_11e4e8;
        case 0x11e4ecu: goto label_11e4ec;
        case 0x11e4f0u: goto label_11e4f0;
        case 0x11e4f4u: goto label_11e4f4;
        case 0x11e4f8u: goto label_11e4f8;
        case 0x11e4fcu: goto label_11e4fc;
        case 0x11e500u: goto label_11e500;
        case 0x11e504u: goto label_11e504;
        case 0x11e508u: goto label_11e508;
        case 0x11e50cu: goto label_11e50c;
        case 0x11e510u: goto label_11e510;
        case 0x11e514u: goto label_11e514;
        case 0x11e518u: goto label_11e518;
        case 0x11e51cu: goto label_11e51c;
        case 0x11e520u: goto label_11e520;
        case 0x11e524u: goto label_11e524;
        case 0x11e528u: goto label_11e528;
        case 0x11e52cu: goto label_11e52c;
        case 0x11e530u: goto label_11e530;
        case 0x11e534u: goto label_11e534;
        case 0x11e538u: goto label_11e538;
        case 0x11e53cu: goto label_11e53c;
        case 0x11e540u: goto label_11e540;
        case 0x11e544u: goto label_11e544;
        case 0x11e548u: goto label_11e548;
        case 0x11e54cu: goto label_11e54c;
        case 0x11e550u: goto label_11e550;
        case 0x11e554u: goto label_11e554;
        case 0x11e558u: goto label_11e558;
        case 0x11e55cu: goto label_11e55c;
        case 0x11e560u: goto label_11e560;
        case 0x11e564u: goto label_11e564;
        case 0x11e568u: goto label_11e568;
        case 0x11e56cu: goto label_11e56c;
        case 0x11e570u: goto label_11e570;
        case 0x11e574u: goto label_11e574;
        case 0x11e578u: goto label_11e578;
        case 0x11e57cu: goto label_11e57c;
        case 0x11e580u: goto label_11e580;
        case 0x11e584u: goto label_11e584;
        case 0x11e588u: goto label_11e588;
        case 0x11e58cu: goto label_11e58c;
        case 0x11e590u: goto label_11e590;
        case 0x11e594u: goto label_11e594;
        case 0x11e598u: goto label_11e598;
        case 0x11e59cu: goto label_11e59c;
        case 0x11e5a0u: goto label_11e5a0;
        case 0x11e5a4u: goto label_11e5a4;
        case 0x11e5a8u: goto label_11e5a8;
        case 0x11e5acu: goto label_11e5ac;
        case 0x11e5b0u: goto label_11e5b0;
        case 0x11e5b4u: goto label_11e5b4;
        case 0x11e5b8u: goto label_11e5b8;
        case 0x11e5bcu: goto label_11e5bc;
        case 0x11e5c0u: goto label_11e5c0;
        case 0x11e5c4u: goto label_11e5c4;
        case 0x11e5c8u: goto label_11e5c8;
        case 0x11e5ccu: goto label_11e5cc;
        case 0x11e5d0u: goto label_11e5d0;
        case 0x11e5d4u: goto label_11e5d4;
        case 0x11e5d8u: goto label_11e5d8;
        case 0x11e5dcu: goto label_11e5dc;
        case 0x11e5e0u: goto label_11e5e0;
        case 0x11e5e4u: goto label_11e5e4;
        case 0x11e5e8u: goto label_11e5e8;
        case 0x11e5ecu: goto label_11e5ec;
        case 0x11e5f0u: goto label_11e5f0;
        case 0x11e5f4u: goto label_11e5f4;
        case 0x11e5f8u: goto label_11e5f8;
        case 0x11e5fcu: goto label_11e5fc;
        case 0x11e600u: goto label_11e600;
        case 0x11e604u: goto label_11e604;
        case 0x11e608u: goto label_11e608;
        case 0x11e60cu: goto label_11e60c;
        case 0x11e610u: goto label_11e610;
        case 0x11e614u: goto label_11e614;
        case 0x11e618u: goto label_11e618;
        case 0x11e61cu: goto label_11e61c;
        case 0x11e620u: goto label_11e620;
        case 0x11e624u: goto label_11e624;
        case 0x11e628u: goto label_11e628;
        case 0x11e62cu: goto label_11e62c;
        default: break;
    }

    ctx->pc = 0x11e4b8u;

label_11e4b8:
    // 0x11e4b8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_11e4bc:
    // 0x11e4bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e4bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11e4c0:
    // 0x11e4c0: 0x8c43fad4  lw          $v1, -0x52C($v0)
    ctx->pc = 0x11e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965972)));
label_11e4c4:
    // 0x11e4c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11e4c8:
    // 0x11e4c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_11e4cc:
    if (ctx->pc == 0x11E4CCu) {
        ctx->pc = 0x11E4CCu;
            // 0x11e4cc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x11E4D0u;
        goto label_11e4d0;
    }
    ctx->pc = 0x11E4C8u;
    {
        const bool branch_taken_0x11e4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4C8u;
            // 0x11e4cc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4c8) {
            ctx->pc = 0x11E4F0u;
            goto label_11e4f0;
        }
    }
    ctx->pc = 0x11E4D0u;
label_11e4d0:
    // 0x11e4d0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x11e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_11e4d4:
    // 0x11e4d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11e4d8:
    // 0x11e4d8: 0xac62fb20  sw          $v0, -0x4E0($v1)
    ctx->pc = 0x11e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966048), GPR_U32(ctx, 2));
label_11e4dc:
    // 0x11e4dc: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x11e4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
label_11e4e0:
    // 0x11e4e0: 0xc0430e0  jal         func_10C380
label_11e4e4:
    if (ctx->pc == 0x11E4E4u) {
        ctx->pc = 0x11E4E4u;
            // 0x11e4e4: 0x8e04fae0  lw          $a0, -0x520($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965984)));
        ctx->pc = 0x11E4E8u;
        goto label_11e4e8;
    }
    ctx->pc = 0x11E4E0u;
    SET_GPR_U32(ctx, 31, 0x11E4E8u);
    ctx->pc = 0x11E4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4E0u;
            // 0x11e4e4: 0x8e04fae0  lw          $a0, -0x520($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965984)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E4E8u; }
        if (ctx->pc != 0x11E4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E4E8u; }
        if (ctx->pc != 0x11E4E8u) { return; }
    }
    ctx->pc = 0x11E4E8u;
label_11e4e8:
    // 0x11e4e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_11e4ec:
    if (ctx->pc == 0x11E4ECu) {
        ctx->pc = 0x11E4ECu;
            // 0x11e4ec: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->pc = 0x11E4F0u;
        goto label_11e4f0;
    }
    ctx->pc = 0x11E4E8u;
    {
        const bool branch_taken_0x11e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4E8u;
            // 0x11e4ec: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4e8) {
            ctx->pc = 0x11E4F8u;
            goto label_11e4f8;
        }
    }
    ctx->pc = 0x11E4F0u;
label_11e4f0:
    // 0x11e4f0: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x11e4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
label_11e4f4:
    // 0x11e4f4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_11e4f8:
    // 0x11e4f8: 0xc0430dc  jal         func_10C370
label_11e4fc:
    if (ctx->pc == 0x11E4FCu) {
        ctx->pc = 0x11E4FCu;
            // 0x11e4fc: 0x8c44fae8  lw          $a0, -0x518($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965992)));
        ctx->pc = 0x11E500u;
        goto label_11e500;
    }
    ctx->pc = 0x11E4F8u;
    SET_GPR_U32(ctx, 31, 0x11E500u);
    ctx->pc = 0x11E4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4F8u;
            // 0x11e4fc: 0x8c44fae8  lw          $a0, -0x518($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E500u; }
        if (ctx->pc != 0x11E500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E500u; }
        if (ctx->pc != 0x11E500u) { return; }
    }
    ctx->pc = 0x11E500u;
label_11e500:
    // 0x11e500: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x11e500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_11e504:
    // 0x11e504: 0xc0430dc  jal         func_10C370
label_11e508:
    if (ctx->pc == 0x11E508u) {
        ctx->pc = 0x11E508u;
            // 0x11e508: 0x8c64faec  lw          $a0, -0x514($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965996)));
        ctx->pc = 0x11E50Cu;
        goto label_11e50c;
    }
    ctx->pc = 0x11E504u;
    SET_GPR_U32(ctx, 31, 0x11E50Cu);
    ctx->pc = 0x11E508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E504u;
            // 0x11e508: 0x8c64faec  lw          $a0, -0x514($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965996)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E50Cu; }
        if (ctx->pc != 0x11E50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E50Cu; }
        if (ctx->pc != 0x11E50Cu) { return; }
    }
    ctx->pc = 0x11E50Cu;
label_11e50c:
    // 0x11e50c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x11e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_11e510:
    // 0x11e510: 0xc0430dc  jal         func_10C370
label_11e514:
    if (ctx->pc == 0x11E514u) {
        ctx->pc = 0x11E514u;
            // 0x11e514: 0x8c64faf0  lw          $a0, -0x510($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966000)));
        ctx->pc = 0x11E518u;
        goto label_11e518;
    }
    ctx->pc = 0x11E510u;
    SET_GPR_U32(ctx, 31, 0x11E518u);
    ctx->pc = 0x11E514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E510u;
            // 0x11e514: 0x8c64faf0  lw          $a0, -0x510($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E518u; }
        if (ctx->pc != 0x11E518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E518u; }
        if (ctx->pc != 0x11E518u) { return; }
    }
    ctx->pc = 0x11E518u;
label_11e518:
    // 0x11e518: 0xc0430dc  jal         func_10C370
label_11e51c:
    if (ctx->pc == 0x11E51Cu) {
        ctx->pc = 0x11E51Cu;
            // 0x11e51c: 0x8e04fae0  lw          $a0, -0x520($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965984)));
        ctx->pc = 0x11E520u;
        goto label_11e520;
    }
    ctx->pc = 0x11E518u;
    SET_GPR_U32(ctx, 31, 0x11E520u);
    ctx->pc = 0x11E51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E518u;
            // 0x11e51c: 0x8e04fae0  lw          $a0, -0x520($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965984)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E520u; }
        if (ctx->pc != 0x11E520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E520u; }
        if (ctx->pc != 0x11E520u) { return; }
    }
    ctx->pc = 0x11E520u;
label_11e520:
    // 0x11e520: 0xc045968  jal         func_1165A0
label_11e524:
    if (ctx->pc == 0x11E524u) {
        ctx->pc = 0x11E528u;
        goto label_11e528;
    }
    ctx->pc = 0x11E520u;
    SET_GPR_U32(ctx, 31, 0x11E528u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E528u; }
        if (ctx->pc != 0x11E528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E528u; }
        if (ctx->pc != 0x11E528u) { return; }
    }
    ctx->pc = 0x11E528u;
label_11e528:
    // 0x11e528: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11e528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_11e52c:
    // 0x11e52c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e530:
    // 0x11e530: 0xc043daa  jal         func_10F6A8
label_11e534:
    if (ctx->pc == 0x11E534u) {
        ctx->pc = 0x11E534u;
            // 0x11e534: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
        ctx->pc = 0x11E538u;
        goto label_11e538;
    }
    ctx->pc = 0x11E530u;
    SET_GPR_U32(ctx, 31, 0x11E538u);
    ctx->pc = 0x11E534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E530u;
            // 0x11e534: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F6A8u;
    if (runtime->hasFunction(0x10F6A8u)) {
        auto targetFn = runtime->lookupFunction(0x10F6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E538u; }
        if (ctx->pc != 0x11E538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F6A8_0x10f6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E538u; }
        if (ctx->pc != 0x11E538u) { return; }
    }
    ctx->pc = 0x11E538u;
label_11e538:
    // 0x11e538: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_11e53c:
    if (ctx->pc == 0x11E53Cu) {
        ctx->pc = 0x11E53Cu;
            // 0x11e53c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x11E540u;
        goto label_11e540;
    }
    ctx->pc = 0x11E538u;
    {
        const bool branch_taken_0x11e538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E538u;
            // 0x11e53c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e538) {
            ctx->pc = 0x11E54Cu;
            goto label_11e54c;
        }
    }
    ctx->pc = 0x11E540u;
label_11e540:
    // 0x11e540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e544:
    // 0x11e544: 0x804597c  j           func_1165F0
label_11e548:
    if (ctx->pc == 0x11E548u) {
        ctx->pc = 0x11E548u;
            // 0x11e548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x11E54Cu;
        goto label_11e54c;
    }
    ctx->pc = 0x11E544u;
    ctx->pc = 0x11E548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E544u;
            // 0x11e548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11E54Cu;
label_11e54c:
    // 0x11e54c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e550:
    // 0x11e550: 0x3e00008  jr          $ra
label_11e554:
    if (ctx->pc == 0x11E554u) {
        ctx->pc = 0x11E554u;
            // 0x11e554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x11E558u;
        goto label_11e558;
    }
    ctx->pc = 0x11E550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E550u;
            // 0x11e554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E558u;
label_11e558:
    // 0x11e558: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11e55c:
    // 0x11e55c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_11e560:
    // 0x11e560: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11e564:
    // 0x11e564: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11e568:
    // 0x11e568: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11e568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11e56c:
    // 0x11e56c: 0x8c43fb08  lw          $v1, -0x4F8($v0)
    ctx->pc = 0x11e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966024)));
label_11e570:
    // 0x11e570: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11e570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11e574:
    // 0x11e574: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11e574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_11e578:
    // 0x11e578: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_11e57c:
    if (ctx->pc == 0x11E57Cu) {
        ctx->pc = 0x11E57Cu;
            // 0x11e57c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x11E580u;
        goto label_11e580;
    }
    ctx->pc = 0x11E578u;
    {
        const bool branch_taken_0x11e578 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11E57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E578u;
            // 0x11e57c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e578) {
            ctx->pc = 0x11E588u;
            goto label_11e588;
        }
    }
    ctx->pc = 0x11E580u;
label_11e580:
    // 0x11e580: 0xc04798c  jal         func_11E630
label_11e584:
    if (ctx->pc == 0x11E584u) {
        ctx->pc = 0x11E588u;
        goto label_11e588;
    }
    ctx->pc = 0x11E580u;
    SET_GPR_U32(ctx, 31, 0x11E588u);
    ctx->pc = 0x11E630u;
    if (runtime->hasFunction(0x11E630u)) {
        auto targetFn = runtime->lookupFunction(0x11E630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E588u; }
        if (ctx->pc != 0x11E588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E630_0x11e630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E588u; }
        if (ctx->pc != 0x11E588u) { return; }
    }
    ctx->pc = 0x11E588u;
label_11e588:
    // 0x11e588: 0xc045968  jal         func_1165A0
label_11e58c:
    if (ctx->pc == 0x11E58Cu) {
        ctx->pc = 0x11E590u;
        goto label_11e590;
    }
    ctx->pc = 0x11E588u;
    SET_GPR_U32(ctx, 31, 0x11E590u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E590u; }
        if (ctx->pc != 0x11E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E590u; }
        if (ctx->pc != 0x11E590u) { return; }
    }
    ctx->pc = 0x11E590u;
label_11e590:
    // 0x11e590: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x11e590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_11e594:
    // 0x11e594: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x11e594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_11e598:
    // 0x11e598: 0x8cb10a08  lw          $s1, 0xA08($a1)
    ctx->pc = 0x11e598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2568)));
label_11e59c:
    // 0x11e59c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x11e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_11e5a0:
    // 0x11e5a0: 0xac900a10  sw          $s0, 0xA10($a0)
    ctx->pc = 0x11e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2576), GPR_U32(ctx, 16));
label_11e5a4:
    // 0x11e5a4: 0xacb20a08  sw          $s2, 0xA08($a1)
    ctx->pc = 0x11e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2568), GPR_U32(ctx, 18));
label_11e5a8:
    // 0x11e5a8: 0xac7c0a0c  sw          $gp, 0xA0C($v1)
    ctx->pc = 0x11e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2572), GPR_U32(ctx, 28));
label_11e5ac:
    // 0x11e5ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11e5b0:
    if (ctx->pc == 0x11E5B0u) {
        ctx->pc = 0x11E5B0u;
            // 0x11e5b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11E5B4u;
        goto label_11e5b4;
    }
    ctx->pc = 0x11E5ACu;
    {
        const bool branch_taken_0x11e5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5ACu;
            // 0x11e5b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5ac) {
            ctx->pc = 0x11E5C0u;
            goto label_11e5c0;
        }
    }
    ctx->pc = 0x11E5B4u;
label_11e5b4:
    // 0x11e5b4: 0xc04597c  jal         func_1165F0
label_11e5b8:
    if (ctx->pc == 0x11E5B8u) {
        ctx->pc = 0x11E5BCu;
        goto label_11e5bc;
    }
    ctx->pc = 0x11E5B4u;
    SET_GPR_U32(ctx, 31, 0x11E5BCu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E5BCu; }
        if (ctx->pc != 0x11E5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E5BCu; }
        if (ctx->pc != 0x11E5BCu) { return; }
    }
    ctx->pc = 0x11E5BCu;
label_11e5bc:
    // 0x11e5bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11e5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e5c0:
    // 0x11e5c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11e5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11e5c4:
    // 0x11e5c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11e5c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11e5c8:
    // 0x11e5c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11e5c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11e5cc:
    // 0x11e5cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e5d0:
    // 0x11e5d0: 0x3e00008  jr          $ra
label_11e5d4:
    if (ctx->pc == 0x11E5D4u) {
        ctx->pc = 0x11E5D4u;
            // 0x11e5d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x11E5D8u;
        goto label_11e5d8;
    }
    ctx->pc = 0x11E5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5D0u;
            // 0x11e5d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E5D8u;
label_11e5d8:
    // 0x11e5d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x11e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_11e5dc:
    // 0x11e5dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e5dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11e5e0:
    // 0x11e5e0: 0x8c450a08  lw          $a1, 0xA08($v0)
    ctx->pc = 0x11e5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2568)));
label_11e5e4:
    // 0x11e5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11e5e8:
    // 0x11e5e8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_11e5ec:
    if (ctx->pc == 0x11E5ECu) {
        ctx->pc = 0x11E5ECu;
            // 0x11e5ec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x11E5F0u;
        goto label_11e5f0;
    }
    ctx->pc = 0x11E5E8u;
    {
        const bool branch_taken_0x11e5e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5E8u;
            // 0x11e5ec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5e8) {
            ctx->pc = 0x11E61Cu;
            goto label_11e61c;
        }
    }
    ctx->pc = 0x11E5F0u;
label_11e5f0:
    // 0x11e5f0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_11e5f4:
    // 0x11e5f4: 0x8c43fae4  lw          $v1, -0x51C($v0)
    ctx->pc = 0x11e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965988)));
label_11e5f8:
    // 0x11e5f8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_11e5fc:
    if (ctx->pc == 0x11E5FCu) {
        ctx->pc = 0x11E5FCu;
            // 0x11e5fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x11E600u;
        goto label_11e600;
    }
    ctx->pc = 0x11E5F8u;
    {
        const bool branch_taken_0x11e5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5F8u;
            // 0x11e5fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5f8) {
            ctx->pc = 0x11E620u;
            goto label_11e620;
        }
    }
    ctx->pc = 0x11E600u;
label_11e600:
    // 0x11e600: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x11e600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_11e604:
    // 0x11e604: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x11e604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11e608:
    // 0x11e608: 0x8c5c0a0c  lw          $gp, 0xA0C($v0)
    ctx->pc = 0x11e608u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2572)));
label_11e60c:
    // 0x11e60c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x11e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_11e610:
    // 0x11e610: 0xa0f809  jalr        $a1
label_11e614:
    if (ctx->pc == 0x11E614u) {
        ctx->pc = 0x11E614u;
            // 0x11e614: 0x8c640a10  lw          $a0, 0xA10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
        ctx->pc = 0x11E618u;
        goto label_11e618;
    }
    ctx->pc = 0x11E610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11E618u);
        ctx->pc = 0x11E614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E610u;
            // 0x11e614: 0x8c640a10  lw          $a0, 0xA10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11E618u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11E618u; }
            if (ctx->pc != 0x11E618u) { return; }
        }
        }
    }
    ctx->pc = 0x11E618u;
label_11e618:
    // 0x11e618: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x11e618u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e61c:
    // 0x11e61c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11e620:
    // 0x11e620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e624:
    // 0x11e624: 0x3e00008  jr          $ra
label_11e628:
    if (ctx->pc == 0x11E628u) {
        ctx->pc = 0x11E628u;
            // 0x11e628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x11E62Cu;
        goto label_11e62c;
    }
    ctx->pc = 0x11E624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E624u;
            // 0x11e628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E62Cu;
label_11e62c:
    // 0x11e62c: 0x0  nop
    ctx->pc = 0x11e62cu;
    // NOP
}
