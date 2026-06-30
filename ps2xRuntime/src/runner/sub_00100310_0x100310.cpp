#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100310
// Address: 0x100310 - 0x1003b0
void sub_00100310_0x100310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100310_0x100310");
#endif

    switch (ctx->pc) {
        case 0x100344u: goto label_100344;
        case 0x10035cu: goto label_10035c;
        case 0x100384u: goto label_100384;
        default: break;
    }

    ctx->pc = 0x100310u;

    // 0x100310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x100310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x100314: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x100314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x100318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10031c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x100320: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x100320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100324: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x100324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10032c: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x10032cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x100330: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x100330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    // 0x100334: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x100334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x100338: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x100338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x10033c: 0xc04010c  jal         func_100430
    ctx->pc = 0x10033Cu;
    SET_GPR_U32(ctx, 31, 0x100344u);
    ctx->pc = 0x100340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10033Cu;
            // 0x100340: 0x24a5e090  addiu       $a1, $a1, -0x1F70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100430u;
    if (runtime->hasFunction(0x100430u)) {
        auto targetFn = runtime->lookupFunction(0x100430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100344u; }
        if (ctx->pc != 0x100344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100430_0x100430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100344u; }
        if (ctx->pc != 0x100344u) { return; }
    }
    ctx->pc = 0x100344u;
label_100344:
    // 0x100344: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x100344u;
    {
        const bool branch_taken_0x100344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100344) {
            ctx->pc = 0x100348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100344u;
            // 0x100348: 0x2e210015  sltiu       $at, $s1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x100364u;
            goto label_100364;
        }
    }
    ctx->pc = 0x10034Cu;
    // 0x10034c: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x10034cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x100350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100354: 0xc0400ec  jal         func_1003B0
    ctx->pc = 0x100354u;
    SET_GPR_U32(ctx, 31, 0x10035Cu);
    ctx->pc = 0x100358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100354u;
            // 0x100358: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1003B0u;
    if (runtime->hasFunction(0x1003B0u)) {
        auto targetFn = runtime->lookupFunction(0x1003B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10035Cu; }
        if (ctx->pc != 0x10035Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001003B0_0x1003b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10035Cu; }
        if (ctx->pc != 0x10035Cu) { return; }
    }
    ctx->pc = 0x10035Cu;
label_10035c:
    // 0x10035c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10035Cu;
    {
        const bool branch_taken_0x10035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10035Cu;
            // 0x100360: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10035c) {
            ctx->pc = 0x100398u;
            goto label_100398;
        }
    }
    ctx->pc = 0x100364u;
label_100364:
    // 0x100364: 0x54200002  bnel        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x100364u;
    {
        const bool branch_taken_0x100364 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x100364) {
            ctx->pc = 0x100368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100364u;
            // 0x100368: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100370u;
            goto label_100370;
        }
    }
    ctx->pc = 0x10036Cu;
    // 0x10036c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x10036cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_100370:
    // 0x100370: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x100370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x100374: 0x2642fff0  addiu       $v0, $s2, -0x10
    ctx->pc = 0x100374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x100378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x100378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10037c: 0xc0400ec  jal         func_1003B0
    ctx->pc = 0x10037Cu;
    SET_GPR_U32(ctx, 31, 0x100384u);
    ctx->pc = 0x100380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10037Cu;
            // 0x100380: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1003B0u;
    if (runtime->hasFunction(0x1003B0u)) {
        auto targetFn = runtime->lookupFunction(0x1003B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100384u; }
        if (ctx->pc != 0x100384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001003B0_0x1003b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100384u; }
        if (ctx->pc != 0x100384u) { return; }
    }
    ctx->pc = 0x100384u;
label_100384:
    // 0x100384: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x100384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x100388: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x100388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10038c: 0xac62fffc  sw          $v0, -0x4($v1)
    ctx->pc = 0x10038cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
    // 0x100390: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x100390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x100394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_100398:
    // 0x100398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10039c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10039cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1003a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1003a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1003a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1003A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1003A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1003A4u;
            // 0x1003a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1003ACu;
    // 0x1003ac: 0x0  nop
    ctx->pc = 0x1003acu;
    // NOP
}
