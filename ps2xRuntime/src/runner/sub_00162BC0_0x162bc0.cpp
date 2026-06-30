#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162BC0
// Address: 0x162bc0 - 0x162c50
void sub_00162BC0_0x162bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162BC0_0x162bc0");
#endif

    switch (ctx->pc) {
        case 0x162c10u: goto label_162c10;
        case 0x162c24u: goto label_162c24;
        default: break;
    }

    ctx->pc = 0x162bc0u;

label_162bc0:
    // 0x162bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162bc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162bcc: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x162bccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x162bd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162BD0u;
    {
        const bool branch_taken_0x162bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x162BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162BD0u;
            // 0x162bd4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162bd0) {
            ctx->pc = 0x162BE0u;
            goto label_162be0;
        }
    }
    ctx->pc = 0x162BD8u;
    // 0x162bd8: 0x8058a4c  j           func_162930
    ctx->pc = 0x162BD8u;
    ctx->pc = 0x162BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162BD8u;
            // 0x162bdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162930u;
    {
        auto targetFn = runtime->lookupFunction(0x162930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x162BE0u;
label_162be0:
    // 0x162be0: 0x3e00008  jr          $ra
    ctx->pc = 0x162BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162BE0u;
            // 0x162be4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162BE8u;
    // 0x162be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162bec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x162becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x162bf0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x162bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x162bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162bf8: 0x24505cb8  addiu       $s0, $v0, 0x5CB8
    ctx->pc = 0x162bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23736));
    // 0x162bfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162c00: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x162c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x162c04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x162c08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x162c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162c0c: 0x0  nop
    ctx->pc = 0x162c0cu;
    // NOP
label_162c10:
    // 0x162c10: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x162c10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x162c14: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x162C14u;
    {
        const bool branch_taken_0x162c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x162c14) {
            ctx->pc = 0x162C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162C14u;
            // 0x162c18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162C28u;
            goto label_162c28;
        }
    }
    ctx->pc = 0x162C1Cu;
    // 0x162c1c: 0xc058af0  jal         func_162BC0
    ctx->pc = 0x162C1Cu;
    SET_GPR_U32(ctx, 31, 0x162C24u);
    ctx->pc = 0x162C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C1Cu;
            // 0x162c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162BC0u;
    goto label_162bc0;
    ctx->pc = 0x162C24u;
label_162c24:
    // 0x162c24: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x162c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_162c28:
    // 0x162c28: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x162C28u;
    {
        const bool branch_taken_0x162c28 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x162C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C28u;
            // 0x162c2c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c28) {
            ctx->pc = 0x162C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162c10;
        }
    }
    ctx->pc = 0x162C30u;
    // 0x162c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162c38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162c3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x162c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162c40: 0x3e00008  jr          $ra
    ctx->pc = 0x162C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C40u;
            // 0x162c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C48u;
    // 0x162c48: 0x3e00008  jr          $ra
    ctx->pc = 0x162C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C48u;
            // 0x162c4c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C50u;
}
