#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185858
// Address: 0x185858 - 0x1858d0
void sub_00185858_0x185858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185858_0x185858");
#endif

    switch (ctx->pc) {
        case 0x1858b4u: goto label_1858b4;
        case 0x1858bcu: goto label_1858bc;
        default: break;
    }

    ctx->pc = 0x185858u;

    // 0x185858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18585c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18585Cu;
    {
        const bool branch_taken_0x18585c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x185860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18585Cu;
            // 0x185860: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18585c) {
            ctx->pc = 0x18586Cu;
            goto label_18586c;
        }
    }
    ctx->pc = 0x185864u;
    // 0x185864: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x185864u;
    {
        const bool branch_taken_0x185864 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x185868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185864u;
            // 0x185868: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185864) {
            ctx->pc = 0x185888u;
            goto label_185888;
        }
    }
    ctx->pc = 0x18586Cu;
label_18586c:
    // 0x18586c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18586cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x185870: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x185874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185878: 0x24847b38  addiu       $a0, $a0, 0x7B38
    ctx->pc = 0x185878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31544));
    // 0x18587c: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8
    ctx->pc = 0x18587cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
    // 0x185880: 0x806151c  j           func_185470
    ctx->pc = 0x185880u;
    ctx->pc = 0x185884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185880u;
            // 0x185884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185888u;
label_185888:
    // 0x185888: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x185888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x18588c: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x18588cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x185890: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x185890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x185894: 0x3e00008  jr          $ra
    ctx->pc = 0x185894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185894u;
            // 0x185898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18589Cu;
    // 0x18589c: 0x0  nop
    ctx->pc = 0x18589cu;
    // NOP
    // 0x1858a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1858a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1858a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1858a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1858a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1858a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1858ac: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x1858ACu;
    SET_GPR_U32(ctx, 31, 0x1858B4u);
    ctx->pc = 0x1858B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1858ACu;
            // 0x1858b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1858B4u; }
        if (ctx->pc != 0x1858B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1858B4u; }
        if (ctx->pc != 0x1858B4u) { return; }
    }
    ctx->pc = 0x1858B4u;
label_1858b4:
    // 0x1858b4: 0xc061634  jal         func_1858D0
    ctx->pc = 0x1858B4u;
    SET_GPR_U32(ctx, 31, 0x1858BCu);
    ctx->pc = 0x1858B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1858B4u;
            // 0x1858b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1858D0u;
    if (runtime->hasFunction(0x1858D0u)) {
        auto targetFn = runtime->lookupFunction(0x1858D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1858BCu; }
        if (ctx->pc != 0x1858BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001858D0_0x1858d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1858BCu; }
        if (ctx->pc != 0x1858BCu) { return; }
    }
    ctx->pc = 0x1858BCu;
label_1858bc:
    // 0x1858bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1858bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1858c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1858c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1858c4: 0x8061282  j           func_184A08
    ctx->pc = 0x1858C4u;
    ctx->pc = 0x1858C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1858C4u;
            // 0x1858c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1858CCu;
    // 0x1858cc: 0x0  nop
    ctx->pc = 0x1858ccu;
    // NOP
}
