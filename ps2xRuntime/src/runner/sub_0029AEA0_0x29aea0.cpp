#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029AEA0
// Address: 0x29aea0 - 0x29af10
void sub_0029AEA0_0x29aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AEA0_0x29aea0");
#endif

    switch (ctx->pc) {
        case 0x29aea0u: goto label_29aea0;
        case 0x29aea4u: goto label_29aea4;
        case 0x29aea8u: goto label_29aea8;
        case 0x29aeacu: goto label_29aeac;
        case 0x29aeb0u: goto label_29aeb0;
        case 0x29aeb4u: goto label_29aeb4;
        case 0x29aeb8u: goto label_29aeb8;
        case 0x29aebcu: goto label_29aebc;
        case 0x29aec0u: goto label_29aec0;
        case 0x29aec4u: goto label_29aec4;
        case 0x29aec8u: goto label_29aec8;
        case 0x29aeccu: goto label_29aecc;
        case 0x29aed0u: goto label_29aed0;
        case 0x29aed4u: goto label_29aed4;
        case 0x29aed8u: goto label_29aed8;
        case 0x29aedcu: goto label_29aedc;
        case 0x29aee0u: goto label_29aee0;
        case 0x29aee4u: goto label_29aee4;
        case 0x29aee8u: goto label_29aee8;
        case 0x29aeecu: goto label_29aeec;
        case 0x29aef0u: goto label_29aef0;
        case 0x29aef4u: goto label_29aef4;
        case 0x29aef8u: goto label_29aef8;
        case 0x29aefcu: goto label_29aefc;
        case 0x29af00u: goto label_29af00;
        case 0x29af04u: goto label_29af04;
        case 0x29af08u: goto label_29af08;
        case 0x29af0cu: goto label_29af0c;
        default: break;
    }

    ctx->pc = 0x29aea0u;

label_29aea0:
    // 0x29aea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29aea4:
    // 0x29aea4: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x29aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_29aea8:
    // 0x29aea8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_29aeac:
    if (ctx->pc == 0x29AEACu) {
        ctx->pc = 0x29AEACu;
            // 0x29aeac: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x29AEB0u;
        goto label_29aeb0;
    }
    ctx->pc = 0x29AEA8u;
    {
        const bool branch_taken_0x29aea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aea8) {
            ctx->pc = 0x29AEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEA8u;
            // 0x29aeac: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29AED4u;
            goto label_29aed4;
        }
    }
    ctx->pc = 0x29AEB0u;
label_29aeb0:
    // 0x29aeb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29aeb4:
    // 0x29aeb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29aeb8:
    // 0x29aeb8: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29aebc:
    // 0x29aebc: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x29aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_29aec0:
    // 0x29aec0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x29aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_29aec4:
    // 0x29aec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29aec8:
    // 0x29aec8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x29aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_29aecc:
    // 0x29aecc: 0xa7a2000e  sh          $v0, 0xE($sp)
    ctx->pc = 0x29aeccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 2));
label_29aed0:
    // 0x29aed0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x29aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_29aed4:
    // 0x29aed4: 0x3e00008  jr          $ra
label_29aed8:
    if (ctx->pc == 0x29AED8u) {
        ctx->pc = 0x29AED8u;
            // 0x29aed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29AEDCu;
        goto label_29aedc;
    }
    ctx->pc = 0x29AED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AED4u;
            // 0x29aed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AEDCu;
label_29aedc:
    // 0x29aedc: 0x0  nop
    ctx->pc = 0x29aedcu;
    // NOP
label_29aee0:
    // 0x29aee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29aee4:
    // 0x29aee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29aee8:
    // 0x29aee8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29aee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29aeec:
    // 0x29aeec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29aeecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29aef0:
    // 0x29aef0: 0x320f809  jalr        $t9
label_29aef4:
    if (ctx->pc == 0x29AEF4u) {
        ctx->pc = 0x29AEF4u;
            // 0x29aef4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29AEF8u;
        goto label_29aef8;
    }
    ctx->pc = 0x29AEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29AEF8u);
        ctx->pc = 0x29AEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEF0u;
            // 0x29aef4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29AEF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29AEF8u; }
            if (ctx->pc != 0x29AEF8u) { return; }
        }
        }
    }
    ctx->pc = 0x29AEF8u;
label_29aef8:
    // 0x29aef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29aef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29aefc:
    // 0x29aefc: 0x3e00008  jr          $ra
label_29af00:
    if (ctx->pc == 0x29AF00u) {
        ctx->pc = 0x29AF00u;
            // 0x29af00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29AF04u;
        goto label_29af04;
    }
    ctx->pc = 0x29AEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEFCu;
            // 0x29af00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AF04u;
label_29af04:
    // 0x29af04: 0x0  nop
    ctx->pc = 0x29af04u;
    // NOP
label_29af08:
    // 0x29af08: 0x0  nop
    ctx->pc = 0x29af08u;
    // NOP
label_29af0c:
    // 0x29af0c: 0x0  nop
    ctx->pc = 0x29af0cu;
    // NOP
}
