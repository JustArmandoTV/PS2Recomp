#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D10D0
// Address: 0x1d10d0 - 0x1d1140
void sub_001D10D0_0x1d10d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D10D0_0x1d10d0");
#endif

    switch (ctx->pc) {
        case 0x1d1114u: goto label_1d1114;
        case 0x1d1128u: goto label_1d1128;
        default: break;
    }

    ctx->pc = 0x1d10d0u;

    // 0x1d10d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d10d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d10d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d10d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d10d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d10dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d10e0: 0x2450a1c0  addiu       $s0, $v0, -0x5E40
    ctx->pc = 0x1d10e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x1d10e4: 0xac44a1c0  sw          $a0, -0x5E40($v0)
    ctx->pc = 0x1d10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943168), GPR_U32(ctx, 4));
    // 0x1d10e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d10e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d10ec: 0x2464a180  addiu       $a0, $v1, -0x5E80
    ctx->pc = 0x1d10ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943104));
    // 0x1d10f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d10f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d10f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d10f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d10f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d10fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1100: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1d1100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1104: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1d1104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1108: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d1108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d110c: 0xc04410c  jal         func_110430
    ctx->pc = 0x1D110Cu;
    SET_GPR_U32(ctx, 31, 0x1D1114u);
    ctx->pc = 0x1D1110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D110Cu;
            // 0x1d1110: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1114u; }
        if (ctx->pc != 0x1D1114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1114u; }
        if (ctx->pc != 0x1D1114u) { return; }
    }
    ctx->pc = 0x1D1114u;
label_1d1114:
    // 0x1d1114: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1114u;
    {
        const bool branch_taken_0x1d1114 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d1114) {
            ctx->pc = 0x1D1118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1114u;
            // 0x1d1118: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D112Cu;
            goto label_1d112c;
        }
    }
    ctx->pc = 0x1D111Cu;
    // 0x1d111c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d111cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1d1120: 0xc0743ca  jal         func_1D0F28
    ctx->pc = 0x1D1120u;
    SET_GPR_U32(ctx, 31, 0x1D1128u);
    ctx->pc = 0x1D1124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1120u;
            // 0x1d1124: 0x2484c3d0  addiu       $a0, $a0, -0x3C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F28u;
    if (runtime->hasFunction(0x1D0F28u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1128u; }
        if (ctx->pc != 0x1D1128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F28_0x1d0f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1128u; }
        if (ctx->pc != 0x1D1128u) { return; }
    }
    ctx->pc = 0x1D1128u;
label_1d1128:
    // 0x1d1128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d112c:
    // 0x1d112c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1130: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d1130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1134: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1134u;
            // 0x1d1138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D113Cu;
    // 0x1d113c: 0x0  nop
    ctx->pc = 0x1d113cu;
    // NOP
}
