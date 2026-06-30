#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017CAA8
// Address: 0x17caa8 - 0x17cb38
void sub_0017CAA8_0x17caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CAA8_0x17caa8");
#endif

    switch (ctx->pc) {
        case 0x17caccu: goto label_17cacc;
        case 0x17cae0u: goto label_17cae0;
        case 0x17caf4u: goto label_17caf4;
        default: break;
    }

    ctx->pc = 0x17caa8u;

    // 0x17caa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17caa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17caac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17caacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17cab0: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x17cab0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x17cab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17cabc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17cabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17cac0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17cac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17cac4: 0xc06229a  jal         func_188A68
    ctx->pc = 0x17CAC4u;
    SET_GPR_U32(ctx, 31, 0x17CACCu);
    ctx->pc = 0x17CAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CAC4u;
            // 0x17cac8: 0x26645860  addiu       $a0, $s3, 0x5860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188A68u;
    if (runtime->hasFunction(0x188A68u)) {
        auto targetFn = runtime->lookupFunction(0x188A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CACCu; }
        if (ctx->pc != 0x17CACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188A68_0x188a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CACCu; }
        if (ctx->pc != 0x17CACCu) { return; }
    }
    ctx->pc = 0x17CACCu;
label_17cacc:
    // 0x17cacc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17CACCu;
    {
        const bool branch_taken_0x17cacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CACCu;
            // 0x17cad0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cacc) {
            ctx->pc = 0x17CB04u;
            goto label_17cb04;
        }
    }
    ctx->pc = 0x17CAD4u;
    // 0x17cad4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17cad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cad8: 0x245058d0  addiu       $s0, $v0, 0x58D0
    ctx->pc = 0x17cad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22736));
    // 0x17cadc: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x17cadcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_17cae0:
    // 0x17cae0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x17cae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17cae4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CAE4u;
    {
        const bool branch_taken_0x17cae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17cae4) {
            ctx->pc = 0x17CAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17CAE4u;
            // 0x17cae8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17CAF8u;
            goto label_17caf8;
        }
    }
    ctx->pc = 0x17CAECu;
    // 0x17caec: 0xc05f278  jal         func_17C9E0
    ctx->pc = 0x17CAECu;
    SET_GPR_U32(ctx, 31, 0x17CAF4u);
    ctx->pc = 0x17CAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CAECu;
            // 0x17caf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C9E0u;
    if (runtime->hasFunction(0x17C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x17C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAF4u; }
        if (ctx->pc != 0x17CAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C9E0_0x17c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAF4u; }
        if (ctx->pc != 0x17CAF4u) { return; }
    }
    ctx->pc = 0x17CAF4u;
label_17caf4:
    // 0x17caf4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17caf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_17caf8:
    // 0x17caf8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17CAF8u;
    {
        const bool branch_taken_0x17caf8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17CAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CAF8u;
            // 0x17cafc: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17caf8) {
            ctx->pc = 0x17CAE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17cae0;
        }
    }
    ctx->pc = 0x17CB00u;
    // 0x17cb00: 0xae605860  sw          $zero, 0x5860($s3)
    ctx->pc = 0x17cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 22624), GPR_U32(ctx, 0));
label_17cb04:
    // 0x17cb04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cb04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17cb08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cb0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17cb0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cb10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17cb10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17cb14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17cb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb18: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CB18u;
            // 0x17cb1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CB20u;
    // 0x17cb20: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17cb24: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17cb28: 0xac445854  sw          $a0, 0x5854($v0)
    ctx->pc = 0x17cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 4));
    // 0x17cb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CB2Cu;
            // 0x17cb30: 0xac655858  sw          $a1, 0x5858($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22616), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CB34u;
    // 0x17cb34: 0x0  nop
    ctx->pc = 0x17cb34u;
    // NOP
}
