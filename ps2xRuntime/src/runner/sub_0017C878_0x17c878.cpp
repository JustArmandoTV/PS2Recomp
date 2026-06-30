#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C878
// Address: 0x17c878 - 0x17c908
void sub_0017C878_0x17c878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C878_0x17c878");
#endif

    switch (ctx->pc) {
        case 0x17c898u: goto label_17c898;
        case 0x17c8a0u: goto label_17c8a0;
        case 0x17c8b4u: goto label_17c8b4;
        case 0x17c8f4u: goto label_17c8f4;
        default: break;
    }

    ctx->pc = 0x17c878u;

    // 0x17c878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c87c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c884: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x17c884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17c888: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17c88c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17c88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17c890: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x17C890u;
    SET_GPR_U32(ctx, 31, 0x17C898u);
    ctx->pc = 0x17C894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C890u;
            // 0x17c894: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C898u; }
        if (ctx->pc != 0x17C898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C898u; }
        if (ctx->pc != 0x17C898u) { return; }
    }
    ctx->pc = 0x17C898u;
label_17c898:
    // 0x17c898: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17c89c: 0x24504c40  addiu       $s0, $v0, 0x4C40
    ctx->pc = 0x17c89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19520));
label_17c8a0:
    // 0x17c8a0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x17c8a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c8a4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C8A4u;
    {
        const bool branch_taken_0x17c8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17c8a4) {
            ctx->pc = 0x17C8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C8A4u;
            // 0x17c8a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C8B8u;
            goto label_17c8b8;
        }
    }
    ctx->pc = 0x17C8ACu;
    // 0x17c8ac: 0xc05f126  jal         func_17C498
    ctx->pc = 0x17C8ACu;
    SET_GPR_U32(ctx, 31, 0x17C8B4u);
    ctx->pc = 0x17C8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C8ACu;
            // 0x17c8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C498u;
    if (runtime->hasFunction(0x17C498u)) {
        auto targetFn = runtime->lookupFunction(0x17C498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8B4u; }
        if (ctx->pc != 0x17C8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C498_0x17c498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8B4u; }
        if (ctx->pc != 0x17C8B4u) { return; }
    }
    ctx->pc = 0x17C8B4u;
label_17c8b4:
    // 0x17c8b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17c8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_17c8b8:
    // 0x17c8b8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17C8B8u;
    {
        const bool branch_taken_0x17c8b8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17C8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C8B8u;
            // 0x17c8bc: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8b8) {
            ctx->pc = 0x17C8A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c8a0;
        }
    }
    ctx->pc = 0x17C8C0u;
    // 0x17c8c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c8c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c8c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c8c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c8c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17c8c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c8cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17c8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c8d0: 0x8061282  j           func_184A08
    ctx->pc = 0x17C8D0u;
    ctx->pc = 0x17C8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C8D0u;
            // 0x17c8d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17C8D8u;
    // 0x17c8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c8dc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17c8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c8e4: 0x24425850  addiu       $v0, $v0, 0x5850
    ctx->pc = 0x17c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22608));
    // 0x17c8e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8ec: 0xc05f876  jal         func_17E1D8
    ctx->pc = 0x17C8ECu;
    SET_GPR_U32(ctx, 31, 0x17C8F4u);
    ctx->pc = 0x17C8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C8ECu;
            // 0x17c8f0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D8u;
    if (runtime->hasFunction(0x17E1D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8F4u; }
        if (ctx->pc != 0x17C8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E1D8_0x17e1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C8F4u; }
        if (ctx->pc != 0x17C8F4u) { return; }
    }
    ctx->pc = 0x17C8F4u;
label_17c8f4:
    // 0x17c8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c8f8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17c8fc: 0x24425868  addiu       $v0, $v0, 0x5868
    ctx->pc = 0x17c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22632));
    // 0x17c900: 0x3e00008  jr          $ra
    ctx->pc = 0x17C900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C900u;
            // 0x17c904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C908u;
}
