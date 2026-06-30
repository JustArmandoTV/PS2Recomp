#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001805C8
// Address: 0x1805c8 - 0x180628
void sub_001805C8_0x1805c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001805C8_0x1805c8");
#endif

    switch (ctx->pc) {
        case 0x1805f0u: goto label_1805f0;
        case 0x180604u: goto label_180604;
        default: break;
    }

    ctx->pc = 0x1805c8u;

    // 0x1805c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1805c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1805cc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1805ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1805d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1805d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1805d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1805d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1805d8: 0x24506d80  addiu       $s0, $v0, 0x6D80
    ctx->pc = 0x1805d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28032));
    // 0x1805dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1805dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1805e0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1805e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1805e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1805e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1805e8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1805ec: 0x0  nop
    ctx->pc = 0x1805ecu;
    // NOP
label_1805f0:
    // 0x1805f0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1805f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1805f4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1805F4u;
    {
        const bool branch_taken_0x1805f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1805f4) {
            ctx->pc = 0x1805F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1805F4u;
            // 0x1805f8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180608u;
            goto label_180608;
        }
    }
    ctx->pc = 0x1805FCu;
    // 0x1805fc: 0xc06046c  jal         func_1811B0
    ctx->pc = 0x1805FCu;
    SET_GPR_U32(ctx, 31, 0x180604u);
    ctx->pc = 0x180600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1805FCu;
            // 0x180600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1811B0u;
    if (runtime->hasFunction(0x1811B0u)) {
        auto targetFn = runtime->lookupFunction(0x1811B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180604u; }
        if (ctx->pc != 0x180604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001811B0_0x1811b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180604u; }
        if (ctx->pc != 0x180604u) { return; }
    }
    ctx->pc = 0x180604u;
label_180604:
    // 0x180604: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x180604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_180608:
    // 0x180608: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x180608u;
    {
        const bool branch_taken_0x180608 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x18060Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180608u;
            // 0x18060c: 0x26100238  addiu       $s0, $s0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180608) {
            ctx->pc = 0x1805F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1805f0;
        }
    }
    ctx->pc = 0x180610u;
    // 0x180610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180614: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180618: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x180618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18061c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18061cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180620: 0x3e00008  jr          $ra
    ctx->pc = 0x180620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180620u;
            // 0x180624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180628u;
}
