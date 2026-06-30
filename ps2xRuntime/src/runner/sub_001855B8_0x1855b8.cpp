#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001855B8
// Address: 0x1855b8 - 0x185610
void sub_001855B8_0x1855b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001855B8_0x1855b8");
#endif

    switch (ctx->pc) {
        case 0x1855dcu: goto label_1855dc;
        case 0x1855ecu: goto label_1855ec;
        case 0x1855f4u: goto label_1855f4;
        default: break;
    }

    ctx->pc = 0x1855b8u;

    // 0x1855b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1855b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1855bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1855bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1855c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1855c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1855c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1855c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1855c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1855ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1855d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1855d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1855d4: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x1855D4u;
    SET_GPR_U32(ctx, 31, 0x1855DCu);
    ctx->pc = 0x1855D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1855D4u;
            // 0x1855d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855DCu; }
        if (ctx->pc != 0x1855DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855DCu; }
        if (ctx->pc != 0x1855DCu) { return; }
    }
    ctx->pc = 0x1855DCu;
label_1855dc:
    // 0x1855dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1855dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1855e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855e4: 0xc061584  jal         func_185610
    ctx->pc = 0x1855E4u;
    SET_GPR_U32(ctx, 31, 0x1855ECu);
    ctx->pc = 0x1855E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1855E4u;
            // 0x1855e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185610u;
    if (runtime->hasFunction(0x185610u)) {
        auto targetFn = runtime->lookupFunction(0x185610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855ECu; }
        if (ctx->pc != 0x1855ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185610_0x185610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855ECu; }
        if (ctx->pc != 0x1855ECu) { return; }
    }
    ctx->pc = 0x1855ECu;
label_1855ec:
    // 0x1855ec: 0xc061282  jal         func_184A08
    ctx->pc = 0x1855ECu;
    SET_GPR_U32(ctx, 31, 0x1855F4u);
    ctx->pc = 0x1855F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1855ECu;
            // 0x1855f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855F4u; }
        if (ctx->pc != 0x1855F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855F4u; }
        if (ctx->pc != 0x1855F4u) { return; }
    }
    ctx->pc = 0x1855F4u;
label_1855f4:
    // 0x1855f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1855f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1855f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1855f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1855fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185604: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x185604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x185608: 0x3e00008  jr          $ra
    ctx->pc = 0x185608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185608u;
            // 0x18560c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185610u;
}
