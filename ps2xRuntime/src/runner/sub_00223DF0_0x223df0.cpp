#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223DF0
// Address: 0x223df0 - 0x223e60
void sub_00223DF0_0x223df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223DF0_0x223df0");
#endif

    switch (ctx->pc) {
        case 0x223e20u: goto label_223e20;
        case 0x223e48u: goto label_223e48;
        default: break;
    }

    ctx->pc = 0x223df0u;

    // 0x223df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x223df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x223df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e04: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x223E04u;
    {
        const bool branch_taken_0x223e04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E04u;
            // 0x223e08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e04) {
            ctx->pc = 0x223E48u;
            goto label_223e48;
        }
    }
    ctx->pc = 0x223E0Cu;
    // 0x223e0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x223e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e14: 0x2442ebf0  addiu       $v0, $v0, -0x1410
    ctx->pc = 0x223e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962160));
    // 0x223e18: 0xc0889e0  jal         func_222780
    ctx->pc = 0x223E18u;
    SET_GPR_U32(ctx, 31, 0x223E20u);
    ctx->pc = 0x223E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E18u;
            // 0x223e1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222780u;
    if (runtime->hasFunction(0x222780u)) {
        auto targetFn = runtime->lookupFunction(0x222780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E20u; }
        if (ctx->pc != 0x223E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222780_0x222780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E20u; }
        if (ctx->pc != 0x223E20u) { return; }
    }
    ctx->pc = 0x223E20u;
label_223e20:
    // 0x223e20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x223e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x223e24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x223e24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x223e28: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223E28u;
    {
        const bool branch_taken_0x223e28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x223e28) {
            ctx->pc = 0x223E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223E28u;
            // 0x223e2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223E4Cu;
            goto label_223e4c;
        }
    }
    ctx->pc = 0x223E30u;
    // 0x223e30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x223e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x223e34: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x223e34u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x223e38: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x223e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x223e3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e40: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x223E40u;
    SET_GPR_U32(ctx, 31, 0x223E48u);
    ctx->pc = 0x223E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E40u;
            // 0x223e44: 0x2407002b  addiu       $a3, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E48u; }
        if (ctx->pc != 0x223E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E48u; }
        if (ctx->pc != 0x223E48u) { return; }
    }
    ctx->pc = 0x223E48u;
label_223e48:
    // 0x223e48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x223e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223e4c:
    // 0x223e4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223e50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223e58: 0x3e00008  jr          $ra
    ctx->pc = 0x223E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E58u;
            // 0x223e5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223E60u;
}
