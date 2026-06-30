#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183E68
// Address: 0x183e68 - 0x183f00
void sub_00183E68_0x183e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183E68_0x183e68");
#endif

    switch (ctx->pc) {
        case 0x183ec8u: goto label_183ec8;
        case 0x183ed8u: goto label_183ed8;
        default: break;
    }

    ctx->pc = 0x183e68u;

    // 0x183e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183e6c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183e70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x183e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x183e74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x183e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183e7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183e80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x183e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x183e84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x183e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x183e88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x183e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x183e8c: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
    // 0x183e90: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x183E90u;
    {
        const bool branch_taken_0x183e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x183E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E90u;
            // 0x183e94: 0x82440052  lb          $a0, 0x52($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e90) {
            ctx->pc = 0x183EA8u;
            goto label_183ea8;
        }
    }
    ctx->pc = 0x183E98u;
    // 0x183e98: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183e9c: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
    // 0x183ea0: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x183EA0u;
    {
        const bool branch_taken_0x183ea0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x183EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183EA0u;
            // 0x183ea4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ea0) {
            ctx->pc = 0x183EE8u;
            goto label_183ee8;
        }
    }
    ctx->pc = 0x183EA8u;
label_183ea8:
    // 0x183ea8: 0x10a6000e  beq         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x183EA8u;
    {
        const bool branch_taken_0x183ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x183EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183EA8u;
            // 0x183eac: 0xa2450058  sb          $a1, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ea8) {
            ctx->pc = 0x183EE4u;
            goto label_183ee4;
        }
    }
    ctx->pc = 0x183EB0u;
    // 0x183eb0: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x183EB0u;
    {
        const bool branch_taken_0x183eb0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x183EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183EB0u;
            // 0x183eb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183eb0) {
            ctx->pc = 0x183EE8u;
            goto label_183ee8;
        }
    }
    ctx->pc = 0x183EB8u;
    // 0x183eb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ebc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x183ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183ec0: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x183ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x183ec4: 0x0  nop
    ctx->pc = 0x183ec4u;
    // NOP
label_183ec8:
    // 0x183ec8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183ecc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x183eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x183ed0: 0xc05efc2  jal         func_17BF08
    ctx->pc = 0x183ED0u;
    SET_GPR_U32(ctx, 31, 0x183ED8u);
    ctx->pc = 0x183ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183ED0u;
            // 0x183ed4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BF08u;
    if (runtime->hasFunction(0x17BF08u)) {
        auto targetFn = runtime->lookupFunction(0x17BF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183ED8u; }
        if (ctx->pc != 0x183ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BF08_0x17bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183ED8u; }
        if (ctx->pc != 0x183ED8u) { return; }
    }
    ctx->pc = 0x183ED8u;
label_183ed8:
    // 0x183ed8: 0xa2530059  sb          $s3, 0x59($s2)
    ctx->pc = 0x183ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 19));
    // 0x183edc: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183EDCu;
    {
        const bool branch_taken_0x183edc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x183EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183EDCu;
            // 0x183ee0: 0xa2400058  sb          $zero, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183edc) {
            ctx->pc = 0x183EC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183ec8;
        }
    }
    ctx->pc = 0x183EE4u;
label_183ee4:
    // 0x183ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_183ee8:
    // 0x183ee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183eec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x183eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183ef0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x183ef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183ef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x183EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183EF8u;
            // 0x183efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183F00u;
}
