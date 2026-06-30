#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004493E0
// Address: 0x4493e0 - 0x449500
void sub_004493E0_0x4493e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004493E0_0x4493e0");
#endif

    switch (ctx->pc) {
        case 0x4493e0u: goto label_4493e0;
        case 0x4493e4u: goto label_4493e4;
        case 0x4493e8u: goto label_4493e8;
        case 0x4493ecu: goto label_4493ec;
        case 0x4493f0u: goto label_4493f0;
        case 0x4493f4u: goto label_4493f4;
        case 0x4493f8u: goto label_4493f8;
        case 0x4493fcu: goto label_4493fc;
        case 0x449400u: goto label_449400;
        case 0x449404u: goto label_449404;
        case 0x449408u: goto label_449408;
        case 0x44940cu: goto label_44940c;
        case 0x449410u: goto label_449410;
        case 0x449414u: goto label_449414;
        case 0x449418u: goto label_449418;
        case 0x44941cu: goto label_44941c;
        case 0x449420u: goto label_449420;
        case 0x449424u: goto label_449424;
        case 0x449428u: goto label_449428;
        case 0x44942cu: goto label_44942c;
        case 0x449430u: goto label_449430;
        case 0x449434u: goto label_449434;
        case 0x449438u: goto label_449438;
        case 0x44943cu: goto label_44943c;
        case 0x449440u: goto label_449440;
        case 0x449444u: goto label_449444;
        case 0x449448u: goto label_449448;
        case 0x44944cu: goto label_44944c;
        case 0x449450u: goto label_449450;
        case 0x449454u: goto label_449454;
        case 0x449458u: goto label_449458;
        case 0x44945cu: goto label_44945c;
        case 0x449460u: goto label_449460;
        case 0x449464u: goto label_449464;
        case 0x449468u: goto label_449468;
        case 0x44946cu: goto label_44946c;
        case 0x449470u: goto label_449470;
        case 0x449474u: goto label_449474;
        case 0x449478u: goto label_449478;
        case 0x44947cu: goto label_44947c;
        case 0x449480u: goto label_449480;
        case 0x449484u: goto label_449484;
        case 0x449488u: goto label_449488;
        case 0x44948cu: goto label_44948c;
        case 0x449490u: goto label_449490;
        case 0x449494u: goto label_449494;
        case 0x449498u: goto label_449498;
        case 0x44949cu: goto label_44949c;
        case 0x4494a0u: goto label_4494a0;
        case 0x4494a4u: goto label_4494a4;
        case 0x4494a8u: goto label_4494a8;
        case 0x4494acu: goto label_4494ac;
        case 0x4494b0u: goto label_4494b0;
        case 0x4494b4u: goto label_4494b4;
        case 0x4494b8u: goto label_4494b8;
        case 0x4494bcu: goto label_4494bc;
        case 0x4494c0u: goto label_4494c0;
        case 0x4494c4u: goto label_4494c4;
        case 0x4494c8u: goto label_4494c8;
        case 0x4494ccu: goto label_4494cc;
        case 0x4494d0u: goto label_4494d0;
        case 0x4494d4u: goto label_4494d4;
        case 0x4494d8u: goto label_4494d8;
        case 0x4494dcu: goto label_4494dc;
        case 0x4494e0u: goto label_4494e0;
        case 0x4494e4u: goto label_4494e4;
        case 0x4494e8u: goto label_4494e8;
        case 0x4494ecu: goto label_4494ec;
        case 0x4494f0u: goto label_4494f0;
        case 0x4494f4u: goto label_4494f4;
        case 0x4494f8u: goto label_4494f8;
        case 0x4494fcu: goto label_4494fc;
        default: break;
    }

    ctx->pc = 0x4493e0u;

label_4493e0:
    // 0x4493e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4493e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4493e4:
    // 0x4493e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4493e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4493e8:
    // 0x4493e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4493e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4493ec:
    // 0x4493ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4493ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4493f0:
    // 0x4493f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4493f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4493f4:
    // 0x4493f4: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x4493f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4493f8:
    // 0x4493f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4493f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4493fc:
    // 0x4493fc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4493fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_449400:
    // 0x449400: 0x320f809  jalr        $t9
label_449404:
    if (ctx->pc == 0x449404u) {
        ctx->pc = 0x449404u;
            // 0x449404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449408u;
        goto label_449408;
    }
    ctx->pc = 0x449400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x449408u);
        ctx->pc = 0x449404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449400u;
            // 0x449404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x449408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x449408u; }
            if (ctx->pc != 0x449408u) { return; }
        }
        }
    }
    ctx->pc = 0x449408u;
label_449408:
    // 0x449408: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x449408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_44940c:
    // 0x44940c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x44940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_449410:
    // 0x449410: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x449410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_449414:
    // 0x449414: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x449414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_449418:
    // 0x449418: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x449418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_44941c:
    // 0x44941c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_449420:
    // 0x449420: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x449420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_449424:
    // 0x449424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x449424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_449428:
    // 0x449428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x449428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44942c:
    // 0x44942c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44942cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_449430:
    // 0x449430: 0x3e00008  jr          $ra
label_449434:
    if (ctx->pc == 0x449434u) {
        ctx->pc = 0x449434u;
            // 0x449434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x449438u;
        goto label_449438;
    }
    ctx->pc = 0x449430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449430u;
            // 0x449434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449438u;
label_449438:
    // 0x449438: 0x0  nop
    ctx->pc = 0x449438u;
    // NOP
label_44943c:
    // 0x44943c: 0x0  nop
    ctx->pc = 0x44943cu;
    // NOP
label_449440:
    // 0x449440: 0x8111a78  j           func_4469E0
label_449444:
    if (ctx->pc == 0x449444u) {
        ctx->pc = 0x449444u;
            // 0x449444: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x449448u;
        goto label_449448;
    }
    ctx->pc = 0x449440u;
    ctx->pc = 0x449444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449440u;
            // 0x449444: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4469E0u;
    {
        auto targetFn = runtime->lookupFunction(0x4469E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x449448u;
label_449448:
    // 0x449448: 0x0  nop
    ctx->pc = 0x449448u;
    // NOP
label_44944c:
    // 0x44944c: 0x0  nop
    ctx->pc = 0x44944cu;
    // NOP
label_449450:
    // 0x449450: 0x8111ee0  j           func_447B80
label_449454:
    if (ctx->pc == 0x449454u) {
        ctx->pc = 0x449454u;
            // 0x449454: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x449458u;
        goto label_449458;
    }
    ctx->pc = 0x449450u;
    ctx->pc = 0x449454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449450u;
            // 0x449454: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x447B80u;
    {
        auto targetFn = runtime->lookupFunction(0x447B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x449458u;
label_449458:
    // 0x449458: 0x0  nop
    ctx->pc = 0x449458u;
    // NOP
label_44945c:
    // 0x44945c: 0x0  nop
    ctx->pc = 0x44945cu;
    // NOP
label_449460:
    // 0x449460: 0x81119f4  j           func_4467D0
label_449464:
    if (ctx->pc == 0x449464u) {
        ctx->pc = 0x449464u;
            // 0x449464: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x449468u;
        goto label_449468;
    }
    ctx->pc = 0x449460u;
    ctx->pc = 0x449464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449460u;
            // 0x449464: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4467D0u;
    {
        auto targetFn = runtime->lookupFunction(0x4467D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x449468u;
label_449468:
    // 0x449468: 0x0  nop
    ctx->pc = 0x449468u;
    // NOP
label_44946c:
    // 0x44946c: 0x0  nop
    ctx->pc = 0x44946cu;
    // NOP
label_449470:
    // 0x449470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x449470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_449474:
    // 0x449474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x449474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_449478:
    // 0x449478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x449478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44947c:
    // 0x44947c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44947cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_449480:
    // 0x449480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x449480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449484:
    // 0x449484: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_449488:
    if (ctx->pc == 0x449488u) {
        ctx->pc = 0x449488u;
            // 0x449488: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44948Cu;
        goto label_44948c;
    }
    ctx->pc = 0x449484u;
    {
        const bool branch_taken_0x449484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x449488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449484u;
            // 0x449488: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449484) {
            ctx->pc = 0x4494E0u;
            goto label_4494e0;
        }
    }
    ctx->pc = 0x44948Cu;
label_44948c:
    // 0x44948c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44948cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_449490:
    // 0x449490: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x449490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_449494:
    // 0x449494: 0x2463d6d0  addiu       $v1, $v1, -0x2930
    ctx->pc = 0x449494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956752));
label_449498:
    // 0x449498: 0x2442d708  addiu       $v0, $v0, -0x28F8
    ctx->pc = 0x449498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956808));
label_44949c:
    // 0x44949c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44949cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4494a0:
    // 0x4494a0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4494a4:
    if (ctx->pc == 0x4494A4u) {
        ctx->pc = 0x4494A4u;
            // 0x4494a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4494A8u;
        goto label_4494a8;
    }
    ctx->pc = 0x4494A0u;
    {
        const bool branch_taken_0x4494a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4494A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4494A0u;
            // 0x4494a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4494a0) {
            ctx->pc = 0x4494C8u;
            goto label_4494c8;
        }
    }
    ctx->pc = 0x4494A8u;
label_4494a8:
    // 0x4494a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4494a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4494ac:
    // 0x4494ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4494acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4494b0:
    // 0x4494b0: 0x2463d820  addiu       $v1, $v1, -0x27E0
    ctx->pc = 0x4494b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957088));
label_4494b4:
    // 0x4494b4: 0x2442d858  addiu       $v0, $v0, -0x27A8
    ctx->pc = 0x4494b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957144));
label_4494b8:
    // 0x4494b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4494b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4494bc:
    // 0x4494bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4494bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4494c0:
    // 0x4494c0: 0xc112540  jal         func_449500
label_4494c4:
    if (ctx->pc == 0x4494C4u) {
        ctx->pc = 0x4494C4u;
            // 0x4494c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4494C8u;
        goto label_4494c8;
    }
    ctx->pc = 0x4494C0u;
    SET_GPR_U32(ctx, 31, 0x4494C8u);
    ctx->pc = 0x4494C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4494C0u;
            // 0x4494c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449500u;
    if (runtime->hasFunction(0x449500u)) {
        auto targetFn = runtime->lookupFunction(0x449500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4494C8u; }
        if (ctx->pc != 0x4494C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00449500_0x449500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4494C8u; }
        if (ctx->pc != 0x4494C8u) { return; }
    }
    ctx->pc = 0x4494C8u;
label_4494c8:
    // 0x4494c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4494c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4494cc:
    // 0x4494cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4494ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4494d0:
    // 0x4494d0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4494d4:
    if (ctx->pc == 0x4494D4u) {
        ctx->pc = 0x4494D4u;
            // 0x4494d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4494D8u;
        goto label_4494d8;
    }
    ctx->pc = 0x4494D0u;
    {
        const bool branch_taken_0x4494d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4494d0) {
            ctx->pc = 0x4494D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4494D0u;
            // 0x4494d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4494E4u;
            goto label_4494e4;
        }
    }
    ctx->pc = 0x4494D8u;
label_4494d8:
    // 0x4494d8: 0xc0400a8  jal         func_1002A0
label_4494dc:
    if (ctx->pc == 0x4494DCu) {
        ctx->pc = 0x4494DCu;
            // 0x4494dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4494E0u;
        goto label_4494e0;
    }
    ctx->pc = 0x4494D8u;
    SET_GPR_U32(ctx, 31, 0x4494E0u);
    ctx->pc = 0x4494DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4494D8u;
            // 0x4494dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4494E0u; }
        if (ctx->pc != 0x4494E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4494E0u; }
        if (ctx->pc != 0x4494E0u) { return; }
    }
    ctx->pc = 0x4494E0u;
label_4494e0:
    // 0x4494e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4494e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4494e4:
    // 0x4494e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4494e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4494e8:
    // 0x4494e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4494e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4494ec:
    // 0x4494ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4494ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4494f0:
    // 0x4494f0: 0x3e00008  jr          $ra
label_4494f4:
    if (ctx->pc == 0x4494F4u) {
        ctx->pc = 0x4494F4u;
            // 0x4494f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4494F8u;
        goto label_4494f8;
    }
    ctx->pc = 0x4494F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4494F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4494F0u;
            // 0x4494f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4494F8u;
label_4494f8:
    // 0x4494f8: 0x0  nop
    ctx->pc = 0x4494f8u;
    // NOP
label_4494fc:
    // 0x4494fc: 0x0  nop
    ctx->pc = 0x4494fcu;
    // NOP
}
