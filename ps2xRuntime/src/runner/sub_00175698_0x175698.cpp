#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175698
// Address: 0x175698 - 0x1756e8
void sub_00175698_0x175698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175698_0x175698");
#endif

    switch (ctx->pc) {
        case 0x1756bcu: goto label_1756bc;
        case 0x1756c8u: goto label_1756c8;
        case 0x1756d0u: goto label_1756d0;
        default: break;
    }

    ctx->pc = 0x175698u;

    // 0x175698: 0x3e00008  jr          $ra
    ctx->pc = 0x175698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175698u;
            // 0x17569c: 0xac850088  sw          $a1, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1756A0u;
    // 0x1756a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1756a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1756a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1756a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1756a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1756a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1756acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1756b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1756b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1756b4: 0xc0599de  jal         func_166778
    ctx->pc = 0x1756B4u;
    SET_GPR_U32(ctx, 31, 0x1756BCu);
    ctx->pc = 0x1756B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756B4u;
            // 0x1756b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756BCu; }
        if (ctx->pc != 0x1756BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756BCu; }
        if (ctx->pc != 0x1756BCu) { return; }
    }
    ctx->pc = 0x1756BCu;
label_1756bc:
    // 0x1756bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1756bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756c0: 0xc05d5ba  jal         func_1756E8
    ctx->pc = 0x1756C0u;
    SET_GPR_U32(ctx, 31, 0x1756C8u);
    ctx->pc = 0x1756C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756C0u;
            // 0x1756c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1756E8u;
    if (runtime->hasFunction(0x1756E8u)) {
        auto targetFn = runtime->lookupFunction(0x1756E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756C8u; }
        if (ctx->pc != 0x1756C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001756E8_0x1756e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756C8u; }
        if (ctx->pc != 0x1756C8u) { return; }
    }
    ctx->pc = 0x1756C8u;
label_1756c8:
    // 0x1756c8: 0xc0599e0  jal         func_166780
    ctx->pc = 0x1756C8u;
    SET_GPR_U32(ctx, 31, 0x1756D0u);
    ctx->pc = 0x1756CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756C8u;
            // 0x1756cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756D0u; }
        if (ctx->pc != 0x1756D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756D0u; }
        if (ctx->pc != 0x1756D0u) { return; }
    }
    ctx->pc = 0x1756D0u;
label_1756d0:
    // 0x1756d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1756d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1756d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1756d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1756d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1756dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1756dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1756e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1756E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1756E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1756E0u;
            // 0x1756e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1756E8u;
}
