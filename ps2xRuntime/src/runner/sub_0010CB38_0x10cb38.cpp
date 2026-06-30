#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CB38
// Address: 0x10cb38 - 0x10cbb0
void sub_0010CB38_0x10cb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CB38_0x10cb38");
#endif

    switch (ctx->pc) {
        case 0x10cb50u: goto label_10cb50;
        case 0x10cb70u: goto label_10cb70;
        case 0x10cb98u: goto label_10cb98;
        default: break;
    }

    ctx->pc = 0x10cb38u;

    // 0x10cb38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10cb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10cb3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cb40: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CB40u;
    {
        const bool branch_taken_0x10cb40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10CB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CB40u;
            // 0x10cb44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb40) {
            ctx->pc = 0x10CB50u;
            goto label_10cb50;
        }
    }
    ctx->pc = 0x10CB48u;
    // 0x10cb48: 0xc045b16  jal         func_116C58
    ctx->pc = 0x10CB48u;
    SET_GPR_U32(ctx, 31, 0x10CB50u);
    ctx->pc = 0x10CB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CB48u;
            // 0x10cb4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116C58u;
    if (runtime->hasFunction(0x116C58u)) {
        auto targetFn = runtime->lookupFunction(0x116C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CB50u; }
        if (ctx->pc != 0x10CB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116C58_0x116c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CB50u; }
        if (ctx->pc != 0x10CB50u) { return; }
    }
    ctx->pc = 0x10CB50u;
label_10cb50:
    // 0x10cb50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cb54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10cb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb58: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CB58u;
            // 0x10cb5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CB60u;
    // 0x10cb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10cb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cb68: 0xc049d8e  jal         func_127638
    ctx->pc = 0x10CB68u;
    SET_GPR_U32(ctx, 31, 0x10CB70u);
    ctx->pc = 0x127638u;
    if (runtime->hasFunction(0x127638u)) {
        auto targetFn = runtime->lookupFunction(0x127638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CB70u; }
        if (ctx->pc != 0x10CB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127638_0x127638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CB70u; }
        if (ctx->pc != 0x10CB70u) { return; }
    }
    ctx->pc = 0x10CB70u;
label_10cb70:
    // 0x10cb70: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10cb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cb78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10cb7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cb80: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CB80u;
            // 0x10cb84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CB88u;
    // 0x10cb88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10cb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10cb8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cb90: 0xc049d8e  jal         func_127638
    ctx->pc = 0x10CB90u;
    SET_GPR_U32(ctx, 31, 0x10CB98u);
    ctx->pc = 0x127638u;
    if (runtime->hasFunction(0x127638u)) {
        auto targetFn = runtime->lookupFunction(0x127638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CB98u; }
        if (ctx->pc != 0x10CB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127638_0x127638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CB98u; }
        if (ctx->pc != 0x10CB98u) { return; }
    }
    ctx->pc = 0x10CB98u;
label_10cb98:
    // 0x10cb98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10cb9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cba0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10cba4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cba8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CBA8u;
            // 0x10cbac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CBB0u;
}
