#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B63C0
// Address: 0x4b63c0 - 0x4b6530
void sub_004B63C0_0x4b63c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B63C0_0x4b63c0");
#endif

    switch (ctx->pc) {
        case 0x4b63c0u: goto label_4b63c0;
        case 0x4b63c4u: goto label_4b63c4;
        case 0x4b63c8u: goto label_4b63c8;
        case 0x4b63ccu: goto label_4b63cc;
        case 0x4b63d0u: goto label_4b63d0;
        case 0x4b63d4u: goto label_4b63d4;
        case 0x4b63d8u: goto label_4b63d8;
        case 0x4b63dcu: goto label_4b63dc;
        case 0x4b63e0u: goto label_4b63e0;
        case 0x4b63e4u: goto label_4b63e4;
        case 0x4b63e8u: goto label_4b63e8;
        case 0x4b63ecu: goto label_4b63ec;
        case 0x4b63f0u: goto label_4b63f0;
        case 0x4b63f4u: goto label_4b63f4;
        case 0x4b63f8u: goto label_4b63f8;
        case 0x4b63fcu: goto label_4b63fc;
        case 0x4b6400u: goto label_4b6400;
        case 0x4b6404u: goto label_4b6404;
        case 0x4b6408u: goto label_4b6408;
        case 0x4b640cu: goto label_4b640c;
        case 0x4b6410u: goto label_4b6410;
        case 0x4b6414u: goto label_4b6414;
        case 0x4b6418u: goto label_4b6418;
        case 0x4b641cu: goto label_4b641c;
        case 0x4b6420u: goto label_4b6420;
        case 0x4b6424u: goto label_4b6424;
        case 0x4b6428u: goto label_4b6428;
        case 0x4b642cu: goto label_4b642c;
        case 0x4b6430u: goto label_4b6430;
        case 0x4b6434u: goto label_4b6434;
        case 0x4b6438u: goto label_4b6438;
        case 0x4b643cu: goto label_4b643c;
        case 0x4b6440u: goto label_4b6440;
        case 0x4b6444u: goto label_4b6444;
        case 0x4b6448u: goto label_4b6448;
        case 0x4b644cu: goto label_4b644c;
        case 0x4b6450u: goto label_4b6450;
        case 0x4b6454u: goto label_4b6454;
        case 0x4b6458u: goto label_4b6458;
        case 0x4b645cu: goto label_4b645c;
        case 0x4b6460u: goto label_4b6460;
        case 0x4b6464u: goto label_4b6464;
        case 0x4b6468u: goto label_4b6468;
        case 0x4b646cu: goto label_4b646c;
        case 0x4b6470u: goto label_4b6470;
        case 0x4b6474u: goto label_4b6474;
        case 0x4b6478u: goto label_4b6478;
        case 0x4b647cu: goto label_4b647c;
        case 0x4b6480u: goto label_4b6480;
        case 0x4b6484u: goto label_4b6484;
        case 0x4b6488u: goto label_4b6488;
        case 0x4b648cu: goto label_4b648c;
        case 0x4b6490u: goto label_4b6490;
        case 0x4b6494u: goto label_4b6494;
        case 0x4b6498u: goto label_4b6498;
        case 0x4b649cu: goto label_4b649c;
        case 0x4b64a0u: goto label_4b64a0;
        case 0x4b64a4u: goto label_4b64a4;
        case 0x4b64a8u: goto label_4b64a8;
        case 0x4b64acu: goto label_4b64ac;
        case 0x4b64b0u: goto label_4b64b0;
        case 0x4b64b4u: goto label_4b64b4;
        case 0x4b64b8u: goto label_4b64b8;
        case 0x4b64bcu: goto label_4b64bc;
        case 0x4b64c0u: goto label_4b64c0;
        case 0x4b64c4u: goto label_4b64c4;
        case 0x4b64c8u: goto label_4b64c8;
        case 0x4b64ccu: goto label_4b64cc;
        case 0x4b64d0u: goto label_4b64d0;
        case 0x4b64d4u: goto label_4b64d4;
        case 0x4b64d8u: goto label_4b64d8;
        case 0x4b64dcu: goto label_4b64dc;
        case 0x4b64e0u: goto label_4b64e0;
        case 0x4b64e4u: goto label_4b64e4;
        case 0x4b64e8u: goto label_4b64e8;
        case 0x4b64ecu: goto label_4b64ec;
        case 0x4b64f0u: goto label_4b64f0;
        case 0x4b64f4u: goto label_4b64f4;
        case 0x4b64f8u: goto label_4b64f8;
        case 0x4b64fcu: goto label_4b64fc;
        case 0x4b6500u: goto label_4b6500;
        case 0x4b6504u: goto label_4b6504;
        case 0x4b6508u: goto label_4b6508;
        case 0x4b650cu: goto label_4b650c;
        case 0x4b6510u: goto label_4b6510;
        case 0x4b6514u: goto label_4b6514;
        case 0x4b6518u: goto label_4b6518;
        case 0x4b651cu: goto label_4b651c;
        case 0x4b6520u: goto label_4b6520;
        case 0x4b6524u: goto label_4b6524;
        case 0x4b6528u: goto label_4b6528;
        case 0x4b652cu: goto label_4b652c;
        default: break;
    }

    ctx->pc = 0x4b63c0u;

label_4b63c0:
    // 0x4b63c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b63c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b63c4:
    // 0x4b63c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b63c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b63c8:
    // 0x4b63c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b63c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b63cc:
    // 0x4b63cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b63ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b63d0:
    // 0x4b63d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b63d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b63d4:
    // 0x4b63d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4b63d8:
    if (ctx->pc == 0x4B63D8u) {
        ctx->pc = 0x4B63D8u;
            // 0x4b63d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B63DCu;
        goto label_4b63dc;
    }
    ctx->pc = 0x4B63D4u;
    {
        const bool branch_taken_0x4b63d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B63D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B63D4u;
            // 0x4b63d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b63d4) {
            ctx->pc = 0x4B6418u;
            goto label_4b6418;
        }
    }
    ctx->pc = 0x4B63DCu;
label_4b63dc:
    // 0x4b63dc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_4b63e0:
    if (ctx->pc == 0x4B63E0u) {
        ctx->pc = 0x4B63E0u;
            // 0x4b63e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4B63E4u;
        goto label_4b63e4;
    }
    ctx->pc = 0x4B63DCu;
    {
        const bool branch_taken_0x4b63dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b63dc) {
            ctx->pc = 0x4B63E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B63DCu;
            // 0x4b63e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6404u;
            goto label_4b6404;
        }
    }
    ctx->pc = 0x4B63E4u;
label_4b63e4:
    // 0x4b63e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4b63e8:
    if (ctx->pc == 0x4B63E8u) {
        ctx->pc = 0x4B63ECu;
        goto label_4b63ec;
    }
    ctx->pc = 0x4B63E4u;
    {
        const bool branch_taken_0x4b63e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b63e4) {
            ctx->pc = 0x4B6400u;
            goto label_4b6400;
        }
    }
    ctx->pc = 0x4B63ECu;
label_4b63ec:
    // 0x4b63ec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4b63ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4b63f0:
    // 0x4b63f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4b63f4:
    if (ctx->pc == 0x4B63F4u) {
        ctx->pc = 0x4B63F8u;
        goto label_4b63f8;
    }
    ctx->pc = 0x4B63F0u;
    {
        const bool branch_taken_0x4b63f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b63f0) {
            ctx->pc = 0x4B6400u;
            goto label_4b6400;
        }
    }
    ctx->pc = 0x4B63F8u;
label_4b63f8:
    // 0x4b63f8: 0xc0400a8  jal         func_1002A0
label_4b63fc:
    if (ctx->pc == 0x4B63FCu) {
        ctx->pc = 0x4B6400u;
        goto label_4b6400;
    }
    ctx->pc = 0x4B63F8u;
    SET_GPR_U32(ctx, 31, 0x4B6400u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6400u; }
        if (ctx->pc != 0x4B6400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6400u; }
        if (ctx->pc != 0x4B6400u) { return; }
    }
    ctx->pc = 0x4B6400u;
label_4b6400:
    // 0x4b6400: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b6400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b6404:
    // 0x4b6404: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b6404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b6408:
    // 0x4b6408: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b640c:
    if (ctx->pc == 0x4B640Cu) {
        ctx->pc = 0x4B640Cu;
            // 0x4b640c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6410u;
        goto label_4b6410;
    }
    ctx->pc = 0x4B6408u;
    {
        const bool branch_taken_0x4b6408 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b6408) {
            ctx->pc = 0x4B640Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6408u;
            // 0x4b640c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B641Cu;
            goto label_4b641c;
        }
    }
    ctx->pc = 0x4B6410u;
label_4b6410:
    // 0x4b6410: 0xc0400a8  jal         func_1002A0
label_4b6414:
    if (ctx->pc == 0x4B6414u) {
        ctx->pc = 0x4B6414u;
            // 0x4b6414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6418u;
        goto label_4b6418;
    }
    ctx->pc = 0x4B6410u;
    SET_GPR_U32(ctx, 31, 0x4B6418u);
    ctx->pc = 0x4B6414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6410u;
            // 0x4b6414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6418u; }
        if (ctx->pc != 0x4B6418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6418u; }
        if (ctx->pc != 0x4B6418u) { return; }
    }
    ctx->pc = 0x4B6418u;
label_4b6418:
    // 0x4b6418: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b6418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b641c:
    // 0x4b641c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b641cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b6420:
    // 0x4b6420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b6420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6424:
    // 0x4b6424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b6428:
    // 0x4b6428: 0x3e00008  jr          $ra
label_4b642c:
    if (ctx->pc == 0x4B642Cu) {
        ctx->pc = 0x4B642Cu;
            // 0x4b642c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B6430u;
        goto label_4b6430;
    }
    ctx->pc = 0x4B6428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B642Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6428u;
            // 0x4b642c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B6430u;
label_4b6430:
    // 0x4b6430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b6430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b6434:
    // 0x4b6434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b6434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b6438:
    // 0x4b6438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b6438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b643c:
    // 0x4b643c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b643cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b6440:
    // 0x4b6440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b6440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b6444:
    // 0x4b6444: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_4b6448:
    if (ctx->pc == 0x4B6448u) {
        ctx->pc = 0x4B6448u;
            // 0x4b6448: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B644Cu;
        goto label_4b644c;
    }
    ctx->pc = 0x4B6444u;
    {
        const bool branch_taken_0x4b6444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6444u;
            // 0x4b6448: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6444) {
            ctx->pc = 0x4B650Cu;
            goto label_4b650c;
        }
    }
    ctx->pc = 0x4B644Cu;
label_4b644c:
    // 0x4b644c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b644cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b6450:
    // 0x4b6450: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b6450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b6454:
    // 0x4b6454: 0x24630b20  addiu       $v1, $v1, 0xB20
    ctx->pc = 0x4b6454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2848));
label_4b6458:
    // 0x4b6458: 0x24420b60  addiu       $v0, $v0, 0xB60
    ctx->pc = 0x4b6458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2912));
label_4b645c:
    // 0x4b645c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b645cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4b6460:
    // 0x4b6460: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4b6460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4b6464:
    // 0x4b6464: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b6464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b6468:
    // 0x4b6468: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4b6468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4b646c:
    // 0x4b646c: 0x320f809  jalr        $t9
label_4b6470:
    if (ctx->pc == 0x4B6470u) {
        ctx->pc = 0x4B6474u;
        goto label_4b6474;
    }
    ctx->pc = 0x4B646Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B6474u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B6474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B6474u; }
            if (ctx->pc != 0x4B6474u) { return; }
        }
        }
    }
    ctx->pc = 0x4B6474u;
label_4b6474:
    // 0x4b6474: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_4b6478:
    if (ctx->pc == 0x4B6478u) {
        ctx->pc = 0x4B6478u;
            // 0x4b6478: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4B647Cu;
        goto label_4b647c;
    }
    ctx->pc = 0x4B6474u;
    {
        const bool branch_taken_0x4b6474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6474) {
            ctx->pc = 0x4B6478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6474u;
            // 0x4b6478: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B64F8u;
            goto label_4b64f8;
        }
    }
    ctx->pc = 0x4B647Cu;
label_4b647c:
    // 0x4b647c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b647cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b6480:
    // 0x4b6480: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b6480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b6484:
    // 0x4b6484: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x4b6484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_4b6488:
    // 0x4b6488: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x4b6488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_4b648c:
    // 0x4b648c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b648cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4b6490:
    // 0x4b6490: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x4b6490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_4b6494:
    // 0x4b6494: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4b6498:
    if (ctx->pc == 0x4B6498u) {
        ctx->pc = 0x4B6498u;
            // 0x4b6498: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x4B649Cu;
        goto label_4b649c;
    }
    ctx->pc = 0x4B6494u;
    {
        const bool branch_taken_0x4b6494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6494u;
            // 0x4b6498: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6494) {
            ctx->pc = 0x4B64D0u;
            goto label_4b64d0;
        }
    }
    ctx->pc = 0x4B649Cu;
label_4b649c:
    // 0x4b649c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b649cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b64a0:
    // 0x4b64a0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x4b64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_4b64a4:
    // 0x4b64a4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4b64a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4b64a8:
    // 0x4b64a8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4b64a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4b64ac:
    // 0x4b64ac: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_4b64b0:
    if (ctx->pc == 0x4B64B0u) {
        ctx->pc = 0x4B64B4u;
        goto label_4b64b4;
    }
    ctx->pc = 0x4B64ACu;
    {
        const bool branch_taken_0x4b64ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b64ac) {
            ctx->pc = 0x4B64D0u;
            goto label_4b64d0;
        }
    }
    ctx->pc = 0x4B64B4u;
label_4b64b4:
    // 0x4b64b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b64b8:
    if (ctx->pc == 0x4B64B8u) {
        ctx->pc = 0x4B64B8u;
            // 0x4b64b8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4B64BCu;
        goto label_4b64bc;
    }
    ctx->pc = 0x4B64B4u;
    {
        const bool branch_taken_0x4b64b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b64b4) {
            ctx->pc = 0x4B64B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B64B4u;
            // 0x4b64b8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B64D0u;
            goto label_4b64d0;
        }
    }
    ctx->pc = 0x4B64BCu;
label_4b64bc:
    // 0x4b64bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b64bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b64c0:
    // 0x4b64c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b64c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b64c4:
    // 0x4b64c4: 0x320f809  jalr        $t9
label_4b64c8:
    if (ctx->pc == 0x4B64C8u) {
        ctx->pc = 0x4B64C8u;
            // 0x4b64c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B64CCu;
        goto label_4b64cc;
    }
    ctx->pc = 0x4B64C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B64CCu);
        ctx->pc = 0x4B64C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B64C4u;
            // 0x4b64c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B64CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B64CCu; }
            if (ctx->pc != 0x4B64CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4B64CCu;
label_4b64cc:
    // 0x4b64cc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4b64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4b64d0:
    // 0x4b64d0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_4b64d4:
    if (ctx->pc == 0x4B64D4u) {
        ctx->pc = 0x4B64D8u;
        goto label_4b64d8;
    }
    ctx->pc = 0x4B64D0u;
    {
        const bool branch_taken_0x4b64d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b64d0) {
            ctx->pc = 0x4B64F4u;
            goto label_4b64f4;
        }
    }
    ctx->pc = 0x4B64D8u;
label_4b64d8:
    // 0x4b64d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b64dc:
    // 0x4b64dc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4b64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4b64e0:
    // 0x4b64e0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4b64e4:
    if (ctx->pc == 0x4B64E4u) {
        ctx->pc = 0x4B64E4u;
            // 0x4b64e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4B64E8u;
        goto label_4b64e8;
    }
    ctx->pc = 0x4B64E0u;
    {
        const bool branch_taken_0x4b64e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B64E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B64E0u;
            // 0x4b64e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b64e0) {
            ctx->pc = 0x4B64F4u;
            goto label_4b64f4;
        }
    }
    ctx->pc = 0x4B64E8u;
label_4b64e8:
    // 0x4b64e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b64ec:
    // 0x4b64ec: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4b64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4b64f0:
    // 0x4b64f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4b64f4:
    // 0x4b64f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b64f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b64f8:
    // 0x4b64f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b64f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b64fc:
    // 0x4b64fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b6500:
    if (ctx->pc == 0x4B6500u) {
        ctx->pc = 0x4B6500u;
            // 0x4b6500: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6504u;
        goto label_4b6504;
    }
    ctx->pc = 0x4B64FCu;
    {
        const bool branch_taken_0x4b64fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b64fc) {
            ctx->pc = 0x4B6500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B64FCu;
            // 0x4b6500: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6510u;
            goto label_4b6510;
        }
    }
    ctx->pc = 0x4B6504u;
label_4b6504:
    // 0x4b6504: 0xc0400a8  jal         func_1002A0
label_4b6508:
    if (ctx->pc == 0x4B6508u) {
        ctx->pc = 0x4B6508u;
            // 0x4b6508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B650Cu;
        goto label_4b650c;
    }
    ctx->pc = 0x4B6504u;
    SET_GPR_U32(ctx, 31, 0x4B650Cu);
    ctx->pc = 0x4B6508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6504u;
            // 0x4b6508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B650Cu; }
        if (ctx->pc != 0x4B650Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B650Cu; }
        if (ctx->pc != 0x4B650Cu) { return; }
    }
    ctx->pc = 0x4B650Cu;
label_4b650c:
    // 0x4b650c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b650cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b6510:
    // 0x4b6510: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b6510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b6514:
    // 0x4b6514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b6514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6518:
    // 0x4b6518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b651c:
    // 0x4b651c: 0x3e00008  jr          $ra
label_4b6520:
    if (ctx->pc == 0x4B6520u) {
        ctx->pc = 0x4B6520u;
            // 0x4b6520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B6524u;
        goto label_4b6524;
    }
    ctx->pc = 0x4B651Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B651Cu;
            // 0x4b6520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B6524u;
label_4b6524:
    // 0x4b6524: 0x0  nop
    ctx->pc = 0x4b6524u;
    // NOP
label_4b6528:
    // 0x4b6528: 0x0  nop
    ctx->pc = 0x4b6528u;
    // NOP
label_4b652c:
    // 0x4b652c: 0x0  nop
    ctx->pc = 0x4b652cu;
    // NOP
}
