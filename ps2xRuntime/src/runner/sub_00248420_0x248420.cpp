#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00248420
// Address: 0x248420 - 0x248530
void sub_00248420_0x248420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248420_0x248420");
#endif

    switch (ctx->pc) {
        case 0x248420u: goto label_248420;
        case 0x248424u: goto label_248424;
        case 0x248428u: goto label_248428;
        case 0x24842cu: goto label_24842c;
        case 0x248430u: goto label_248430;
        case 0x248434u: goto label_248434;
        case 0x248438u: goto label_248438;
        case 0x24843cu: goto label_24843c;
        case 0x248440u: goto label_248440;
        case 0x248444u: goto label_248444;
        case 0x248448u: goto label_248448;
        case 0x24844cu: goto label_24844c;
        case 0x248450u: goto label_248450;
        case 0x248454u: goto label_248454;
        case 0x248458u: goto label_248458;
        case 0x24845cu: goto label_24845c;
        case 0x248460u: goto label_248460;
        case 0x248464u: goto label_248464;
        case 0x248468u: goto label_248468;
        case 0x24846cu: goto label_24846c;
        case 0x248470u: goto label_248470;
        case 0x248474u: goto label_248474;
        case 0x248478u: goto label_248478;
        case 0x24847cu: goto label_24847c;
        case 0x248480u: goto label_248480;
        case 0x248484u: goto label_248484;
        case 0x248488u: goto label_248488;
        case 0x24848cu: goto label_24848c;
        case 0x248490u: goto label_248490;
        case 0x248494u: goto label_248494;
        case 0x248498u: goto label_248498;
        case 0x24849cu: goto label_24849c;
        case 0x2484a0u: goto label_2484a0;
        case 0x2484a4u: goto label_2484a4;
        case 0x2484a8u: goto label_2484a8;
        case 0x2484acu: goto label_2484ac;
        case 0x2484b0u: goto label_2484b0;
        case 0x2484b4u: goto label_2484b4;
        case 0x2484b8u: goto label_2484b8;
        case 0x2484bcu: goto label_2484bc;
        case 0x2484c0u: goto label_2484c0;
        case 0x2484c4u: goto label_2484c4;
        case 0x2484c8u: goto label_2484c8;
        case 0x2484ccu: goto label_2484cc;
        case 0x2484d0u: goto label_2484d0;
        case 0x2484d4u: goto label_2484d4;
        case 0x2484d8u: goto label_2484d8;
        case 0x2484dcu: goto label_2484dc;
        case 0x2484e0u: goto label_2484e0;
        case 0x2484e4u: goto label_2484e4;
        case 0x2484e8u: goto label_2484e8;
        case 0x2484ecu: goto label_2484ec;
        case 0x2484f0u: goto label_2484f0;
        case 0x2484f4u: goto label_2484f4;
        case 0x2484f8u: goto label_2484f8;
        case 0x2484fcu: goto label_2484fc;
        case 0x248500u: goto label_248500;
        case 0x248504u: goto label_248504;
        case 0x248508u: goto label_248508;
        case 0x24850cu: goto label_24850c;
        case 0x248510u: goto label_248510;
        case 0x248514u: goto label_248514;
        case 0x248518u: goto label_248518;
        case 0x24851cu: goto label_24851c;
        case 0x248520u: goto label_248520;
        case 0x248524u: goto label_248524;
        case 0x248528u: goto label_248528;
        case 0x24852cu: goto label_24852c;
        default: break;
    }

    ctx->pc = 0x248420u;

label_248420:
    // 0x248420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x248420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_248424:
    // 0x248424: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x248424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_248428:
    // 0x248428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x248428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24842c:
    // 0x24842c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_248430:
    // 0x248430: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x248430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248434:
    // 0x248434: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x248434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_248438:
    // 0x248438: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x248438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24843c:
    // 0x24843c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_248440:
    // 0x248440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_248444:
    // 0x248444: 0x10000020  b           . + 4 + (0x20 << 2)
label_248448:
    if (ctx->pc == 0x248448u) {
        ctx->pc = 0x248448u;
            // 0x248448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24844Cu;
        goto label_24844c;
    }
    ctx->pc = 0x248444u;
    {
        const bool branch_taken_0x248444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248444u;
            // 0x248448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248444) {
            ctx->pc = 0x2484C8u;
            goto label_2484c8;
        }
    }
    ctx->pc = 0x24844Cu;
label_24844c:
    // 0x24844c: 0x0  nop
    ctx->pc = 0x24844cu;
    // NOP
label_248450:
    // 0x248450: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x248450u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_248454:
    // 0x248454: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x248454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_248458:
    // 0x248458: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_24845c:
    if (ctx->pc == 0x24845Cu) {
        ctx->pc = 0x24845Cu;
            // 0x24845c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x248460u;
        goto label_248460;
    }
    ctx->pc = 0x248458u;
    {
        const bool branch_taken_0x248458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24845Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248458u;
            // 0x24845c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248458) {
            ctx->pc = 0x2484B0u;
            goto label_2484b0;
        }
    }
    ctx->pc = 0x248460u;
label_248460:
    // 0x248460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x248460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_248464:
    // 0x248464: 0x2484f840  addiu       $a0, $a0, -0x7C0
    ctx->pc = 0x248464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965312));
label_248468:
    // 0x248468: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24846c:
    // 0x24846c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24846cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_248470:
    // 0x248470: 0x600008  jr          $v1
label_248474:
    if (ctx->pc == 0x248474u) {
        ctx->pc = 0x248478u;
        goto label_248478;
    }
    ctx->pc = 0x248470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x248478u: goto label_248478;
            case 0x2484A8u: goto label_2484a8;
            case 0x248510u: goto label_248510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x248478u;
label_248478:
    // 0x248478: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x248478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24847c:
    // 0x24847c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x24847cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_248480:
    // 0x248480: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x248480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_248484:
    // 0x248484: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x248484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248488:
    // 0x248488: 0x24a5cf30  addiu       $a1, $a1, -0x30D0
    ctx->pc = 0x248488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
label_24848c:
    // 0x24848c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x24848cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_248490:
    // 0x248490: 0x320f809  jalr        $t9
label_248494:
    if (ctx->pc == 0x248494u) {
        ctx->pc = 0x248494u;
            // 0x248494: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x248498u;
        goto label_248498;
    }
    ctx->pc = 0x248490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248498u);
        ctx->pc = 0x248494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248490u;
            // 0x248494: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x248498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x248498u; }
            if (ctx->pc != 0x248498u) { return; }
        }
        }
    }
    ctx->pc = 0x248498u;
label_248498:
    // 0x248498: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x248498u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_24849c:
    // 0x24849c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2484a0:
    if (ctx->pc == 0x2484A0u) {
        ctx->pc = 0x2484A0u;
            // 0x2484a0: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x2484A4u;
        goto label_2484a4;
    }
    ctx->pc = 0x24849Cu;
    {
        const bool branch_taken_0x24849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24849Cu;
            // 0x2484a0: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24849c) {
            ctx->pc = 0x2484B0u;
            goto label_2484b0;
        }
    }
    ctx->pc = 0x2484A4u;
label_2484a4:
    // 0x2484a4: 0x0  nop
    ctx->pc = 0x2484a4u;
    // NOP
label_2484a8:
    // 0x2484a8: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x2484a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_2484ac:
    // 0x2484ac: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2484acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2484b0:
    // 0x2484b0: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x2484b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2484b4:
    // 0x2484b4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2484b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2484b8:
    // 0x2484b8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2484b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2484bc:
    // 0x2484bc: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_2484c0:
    if (ctx->pc == 0x2484C0u) {
        ctx->pc = 0x2484C4u;
        goto label_2484c4;
    }
    ctx->pc = 0x2484BCu;
    {
        const bool branch_taken_0x2484bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2484bc) {
            ctx->pc = 0x248450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248450;
        }
    }
    ctx->pc = 0x2484C4u;
label_2484c4:
    // 0x2484c4: 0x0  nop
    ctx->pc = 0x2484c4u;
    // NOP
label_2484c8:
    // 0x2484c8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2484c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2484cc:
    // 0x2484cc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2484ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2484d0:
    // 0x2484d0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2484d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2484d4:
    // 0x2484d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2484d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2484d8:
    // 0x2484d8: 0x24a5cf38  addiu       $a1, $a1, -0x30C8
    ctx->pc = 0x2484d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954808));
label_2484dc:
    // 0x2484dc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2484dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2484e0:
    // 0x2484e0: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x2484e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2484e4:
    // 0x2484e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2484e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2484e8:
    // 0x2484e8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2484e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2484ec:
    // 0x2484ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2484ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2484f0:
    // 0x2484f0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2484f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2484f4:
    // 0x2484f4: 0x24f20010  addiu       $s2, $a3, 0x10
    ctx->pc = 0x2484f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_2484f8:
    // 0x2484f8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x2484f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2484fc:
    // 0x2484fc: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x2484fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_248500:
    // 0x248500: 0x320f809  jalr        $t9
label_248504:
    if (ctx->pc == 0x248504u) {
        ctx->pc = 0x248504u;
            // 0x248504: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x248508u;
        goto label_248508;
    }
    ctx->pc = 0x248500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248508u);
        ctx->pc = 0x248504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248500u;
            // 0x248504: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x248508u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x248508u; }
            if (ctx->pc != 0x248508u) { return; }
        }
        }
    }
    ctx->pc = 0x248508u;
label_248508:
    // 0x248508: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
label_24850c:
    if (ctx->pc == 0x24850Cu) {
        ctx->pc = 0x24850Cu;
            // 0x24850c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x248510u;
        goto label_248510;
    }
    ctx->pc = 0x248508u;
    {
        const bool branch_taken_0x248508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248508u;
            // 0x24850c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248508) {
            ctx->pc = 0x248450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248450;
        }
    }
    ctx->pc = 0x248510u;
label_248510:
    // 0x248510: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x248510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_248514:
    // 0x248514: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x248514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_248518:
    // 0x248518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x248518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24851c:
    // 0x24851c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24851cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248520:
    // 0x248520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x248520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248524:
    // 0x248524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x248524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_248528:
    // 0x248528: 0x3e00008  jr          $ra
label_24852c:
    if (ctx->pc == 0x24852Cu) {
        ctx->pc = 0x24852Cu;
            // 0x24852c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x248530u;
        goto label_fallthrough_0x248528;
    }
    ctx->pc = 0x248528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248528u;
            // 0x24852c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x248528:
    ctx->pc = 0x248530u;
}
