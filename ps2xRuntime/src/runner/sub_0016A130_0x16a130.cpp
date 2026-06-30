#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A130
// Address: 0x16a130 - 0x16a190
void sub_0016A130_0x16a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A130_0x16a130");
#endif

    switch (ctx->pc) {
        case 0x16a158u: goto label_16a158;
        case 0x16a16cu: goto label_16a16c;
        default: break;
    }

    ctx->pc = 0x16a130u;

    // 0x16a130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a134: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16a134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16a138: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16a138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16a13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a140: 0x24507370  addiu       $s0, $v0, 0x7370
    ctx->pc = 0x16a140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29552));
    // 0x16a144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a148: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x16a148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16a14c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a150: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16a150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a154: 0x0  nop
    ctx->pc = 0x16a154u;
    // NOP
label_16a158:
    // 0x16a158: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x16a158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a15c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A15Cu;
    {
        const bool branch_taken_0x16a15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x16a15c) {
            ctx->pc = 0x16A160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A15Cu;
            // 0x16a160: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A170u;
            goto label_16a170;
        }
    }
    ctx->pc = 0x16A164u;
    // 0x16a164: 0xc05a810  jal         func_16A040
    ctx->pc = 0x16A164u;
    SET_GPR_U32(ctx, 31, 0x16A16Cu);
    ctx->pc = 0x16A168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A164u;
            // 0x16a168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (runtime->hasFunction(0x16A040u)) {
        auto targetFn = runtime->lookupFunction(0x16A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A16Cu; }
        if (ctx->pc != 0x16A16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A040_0x16a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A16Cu; }
        if (ctx->pc != 0x16A16Cu) { return; }
    }
    ctx->pc = 0x16A16Cu;
label_16a16c:
    // 0x16a16c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x16a16cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_16a170:
    // 0x16a170: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16A170u;
    {
        const bool branch_taken_0x16a170 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x16A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A170u;
            // 0x16a174: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a170) {
            ctx->pc = 0x16A158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a158;
        }
    }
    ctx->pc = 0x16A178u;
    // 0x16a178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a17c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a180: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a184: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16a184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a188: 0x3e00008  jr          $ra
    ctx->pc = 0x16A188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A188u;
            // 0x16a18c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A190u;
}
