#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001453E0
// Address: 0x1453e0 - 0x145450
void sub_001453E0_0x1453e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001453E0_0x1453e0");
#endif

    switch (ctx->pc) {
        case 0x145428u: goto label_145428;
        case 0x145438u: goto label_145438;
        default: break;
    }

    ctx->pc = 0x1453e0u;

    // 0x1453e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1453e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1453e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1453e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1453e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1453e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1453ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1453ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1453f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1453f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1453f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1453f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1453f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453fc: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1453FCu;
    {
        const bool branch_taken_0x1453fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x145400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1453FCu;
            // 0x145400: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453fc) {
            ctx->pc = 0x14540Cu;
            goto label_14540c;
        }
    }
    ctx->pc = 0x145404u;
    // 0x145404: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145404u;
    {
        const bool branch_taken_0x145404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145404u;
            // 0x145408: 0xaf8782e0  sw          $a3, -0x7D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145404) {
            ctx->pc = 0x145418u;
            goto label_145418;
        }
    }
    ctx->pc = 0x14540Cu;
label_14540c:
    // 0x14540c: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x14540cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x145410: 0x24e71230  addiu       $a3, $a3, 0x1230
    ctx->pc = 0x145410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4656));
    // 0x145414: 0xaf8782e0  sw          $a3, -0x7D20($gp)
    ctx->pc = 0x145414u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 7));
label_145418:
    // 0x145418: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x145418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x14541c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145420: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x145420u;
    SET_GPR_U32(ctx, 31, 0x145428u);
    ctx->pc = 0x145424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145420u;
            // 0x145424: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145428u; }
        if (ctx->pc != 0x145428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145428u; }
        if (ctx->pc != 0x145428u) { return; }
    }
    ctx->pc = 0x145428u;
label_145428:
    // 0x145428: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14542c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14542cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145430: 0xc05147c  jal         func_1451F0
    ctx->pc = 0x145430u;
    SET_GPR_U32(ctx, 31, 0x145438u);
    ctx->pc = 0x145434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145430u;
            // 0x145434: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1451F0u;
    if (runtime->hasFunction(0x1451F0u)) {
        auto targetFn = runtime->lookupFunction(0x1451F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145438u; }
        if (ctx->pc != 0x145438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001451F0_0x1451f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145438u; }
        if (ctx->pc != 0x145438u) { return; }
    }
    ctx->pc = 0x145438u;
label_145438:
    // 0x145438: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x145438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14543c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14543cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145448: 0x3e00008  jr          $ra
    ctx->pc = 0x145448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145448u;
            // 0x14544c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145450u;
}
