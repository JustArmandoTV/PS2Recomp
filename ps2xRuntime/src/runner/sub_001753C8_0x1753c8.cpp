#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001753C8
// Address: 0x1753c8 - 0x175450
void sub_001753C8_0x1753c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001753C8_0x1753c8");
#endif

    switch (ctx->pc) {
        case 0x17542cu: goto label_17542c;
        case 0x175434u: goto label_175434;
        case 0x17543cu: goto label_17543c;
        default: break;
    }

    ctx->pc = 0x1753c8u;

    // 0x1753c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1753c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1753cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1753CCu;
    {
        const bool branch_taken_0x1753cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1753D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1753CCu;
            // 0x1753d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1753cc) {
            ctx->pc = 0x1753E8u;
            goto label_1753e8;
        }
    }
    ctx->pc = 0x1753D4u;
    // 0x1753d4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1753d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1753d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1753d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1753dc: 0x248447c8  addiu       $a0, $a0, 0x47C8
    ctx->pc = 0x1753dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18376));
    // 0x1753e0: 0x8059f4e  j           func_167D38
    ctx->pc = 0x1753E0u;
    ctx->pc = 0x1753E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753E0u;
            // 0x1753e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1753E8u;
label_1753e8:
    // 0x1753e8: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1753E8u;
    {
        const bool branch_taken_0x1753e8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1753ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1753E8u;
            // 0x1753ec: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1753e8) {
            ctx->pc = 0x1753FCu;
            goto label_1753fc;
        }
    }
    ctx->pc = 0x1753F0u;
    // 0x1753f0: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1753F0u;
    {
        const bool branch_taken_0x1753f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1753F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1753F0u;
            // 0x1753f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1753f0) {
            ctx->pc = 0x175410u;
            goto label_175410;
        }
    }
    ctx->pc = 0x1753F8u;
    // 0x1753f8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1753f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1753fc:
    // 0x1753fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1753fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175400: 0x248447f0  addiu       $a0, $a0, 0x47F0
    ctx->pc = 0x175400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18416));
    // 0x175404: 0x8059f4e  j           func_167D38
    ctx->pc = 0x175404u;
    ctx->pc = 0x175408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175404u;
            // 0x175408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17540Cu;
    // 0x17540c: 0x0  nop
    ctx->pc = 0x17540cu;
    // NOP
label_175410:
    // 0x175410: 0x3e00008  jr          $ra
    ctx->pc = 0x175410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175410u;
            // 0x175414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175418u;
    // 0x175418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17541c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175420: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175424: 0xc0599de  jal         func_166778
    ctx->pc = 0x175424u;
    SET_GPR_U32(ctx, 31, 0x17542Cu);
    ctx->pc = 0x175428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175424u;
            // 0x175428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17542Cu; }
        if (ctx->pc != 0x17542Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17542Cu; }
        if (ctx->pc != 0x17542Cu) { return; }
    }
    ctx->pc = 0x17542Cu;
label_17542c:
    // 0x17542c: 0xc05d514  jal         func_175450
    ctx->pc = 0x17542Cu;
    SET_GPR_U32(ctx, 31, 0x175434u);
    ctx->pc = 0x175430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17542Cu;
            // 0x175430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175450u;
    if (runtime->hasFunction(0x175450u)) {
        auto targetFn = runtime->lookupFunction(0x175450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175434u; }
        if (ctx->pc != 0x175434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175450_0x175450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175434u; }
        if (ctx->pc != 0x175434u) { return; }
    }
    ctx->pc = 0x175434u;
label_175434:
    // 0x175434: 0xc0599e0  jal         func_166780
    ctx->pc = 0x175434u;
    SET_GPR_U32(ctx, 31, 0x17543Cu);
    ctx->pc = 0x175438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175434u;
            // 0x175438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17543Cu; }
        if (ctx->pc != 0x17543Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17543Cu; }
        if (ctx->pc != 0x17543Cu) { return; }
    }
    ctx->pc = 0x17543Cu;
label_17543c:
    // 0x17543c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17543cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175448: 0x3e00008  jr          $ra
    ctx->pc = 0x175448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175448u;
            // 0x17544c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175450u;
}
