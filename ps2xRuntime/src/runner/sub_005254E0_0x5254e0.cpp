#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005254E0
// Address: 0x5254e0 - 0x525550
void sub_005254E0_0x5254e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005254E0_0x5254e0");
#endif

    switch (ctx->pc) {
        case 0x5254e0u: goto label_5254e0;
        case 0x5254e4u: goto label_5254e4;
        case 0x5254e8u: goto label_5254e8;
        case 0x5254ecu: goto label_5254ec;
        case 0x5254f0u: goto label_5254f0;
        case 0x5254f4u: goto label_5254f4;
        case 0x5254f8u: goto label_5254f8;
        case 0x5254fcu: goto label_5254fc;
        case 0x525500u: goto label_525500;
        case 0x525504u: goto label_525504;
        case 0x525508u: goto label_525508;
        case 0x52550cu: goto label_52550c;
        case 0x525510u: goto label_525510;
        case 0x525514u: goto label_525514;
        case 0x525518u: goto label_525518;
        case 0x52551cu: goto label_52551c;
        case 0x525520u: goto label_525520;
        case 0x525524u: goto label_525524;
        case 0x525528u: goto label_525528;
        case 0x52552cu: goto label_52552c;
        case 0x525530u: goto label_525530;
        case 0x525534u: goto label_525534;
        case 0x525538u: goto label_525538;
        case 0x52553cu: goto label_52553c;
        case 0x525540u: goto label_525540;
        case 0x525544u: goto label_525544;
        case 0x525548u: goto label_525548;
        case 0x52554cu: goto label_52554c;
        default: break;
    }

    ctx->pc = 0x5254e0u;

label_5254e0:
    // 0x5254e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5254e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5254e4:
    // 0x5254e4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x5254e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_5254e8:
    // 0x5254e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x5254e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5254ec:
    // 0x5254ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5254ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5254f0:
    // 0x5254f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5254f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5254f4:
    // 0x5254f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5254f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5254f8:
    // 0x5254f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x5254f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_5254fc:
    // 0x5254fc: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x5254fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_525500:
    // 0x525500: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_525504:
    if (ctx->pc == 0x525504u) {
        ctx->pc = 0x525504u;
            // 0x525504: 0x24700090  addiu       $s0, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->pc = 0x525508u;
        goto label_525508;
    }
    ctx->pc = 0x525500u;
    {
        const bool branch_taken_0x525500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x525504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525500u;
            // 0x525504: 0x24700090  addiu       $s0, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525500) {
            ctx->pc = 0x52551Cu;
            goto label_52551c;
        }
    }
    ctx->pc = 0x525508u;
label_525508:
    // 0x525508: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x525508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52550c:
    // 0x52550c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x52550cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_525510:
    // 0x525510: 0x320f809  jalr        $t9
label_525514:
    if (ctx->pc == 0x525514u) {
        ctx->pc = 0x525514u;
            // 0x525514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525518u;
        goto label_525518;
    }
    ctx->pc = 0x525510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x525518u);
        ctx->pc = 0x525514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525510u;
            // 0x525514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x525518u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x525518u; }
            if (ctx->pc != 0x525518u) { return; }
        }
        }
    }
    ctx->pc = 0x525518u;
label_525518:
    // 0x525518: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x525518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_52551c:
    // 0x52551c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x52551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_525520:
    // 0x525520: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_525524:
    if (ctx->pc == 0x525524u) {
        ctx->pc = 0x525524u;
            // 0x525524: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x525528u;
        goto label_525528;
    }
    ctx->pc = 0x525520u;
    {
        const bool branch_taken_0x525520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x525520) {
            ctx->pc = 0x525524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525520u;
            // 0x525524: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525540u;
            goto label_525540;
        }
    }
    ctx->pc = 0x525528u;
label_525528:
    // 0x525528: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x525528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52552c:
    // 0x52552c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x52552cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_525530:
    // 0x525530: 0x320f809  jalr        $t9
label_525534:
    if (ctx->pc == 0x525534u) {
        ctx->pc = 0x525534u;
            // 0x525534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525538u;
        goto label_525538;
    }
    ctx->pc = 0x525530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x525538u);
        ctx->pc = 0x525534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525530u;
            // 0x525534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x525538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x525538u; }
            if (ctx->pc != 0x525538u) { return; }
        }
        }
    }
    ctx->pc = 0x525538u;
label_525538:
    // 0x525538: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x525538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_52553c:
    // 0x52553c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52553cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_525540:
    // 0x525540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x525540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_525544:
    // 0x525544: 0x3e00008  jr          $ra
label_525548:
    if (ctx->pc == 0x525548u) {
        ctx->pc = 0x525548u;
            // 0x525548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52554Cu;
        goto label_52554c;
    }
    ctx->pc = 0x525544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x525548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525544u;
            // 0x525548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52554Cu;
label_52554c:
    // 0x52554c: 0x0  nop
    ctx->pc = 0x52554cu;
    // NOP
}
