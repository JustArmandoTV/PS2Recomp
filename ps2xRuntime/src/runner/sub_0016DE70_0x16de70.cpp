#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016DE70
// Address: 0x16de70 - 0x16def0
void sub_0016DE70_0x16de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DE70_0x16de70");
#endif

    switch (ctx->pc) {
        case 0x16dea8u: goto label_16dea8;
        case 0x16deccu: goto label_16decc;
        default: break;
    }

    ctx->pc = 0x16de70u;

    // 0x16de70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16de70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16de74: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16de74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16de78: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x16de78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16de7c: 0x2451aa8c  addiu       $s1, $v0, -0x5574
    ctx->pc = 0x16de7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945420));
    // 0x16de80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16de84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16de88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16de88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16de8c: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16DE8Cu;
    {
        const bool branch_taken_0x16de8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x16DE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE8Cu;
            // 0x16de90: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de8c) {
            ctx->pc = 0x16DED8u;
            goto label_16ded8;
        }
    }
    ctx->pc = 0x16DE94u;
    // 0x16de94: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16de94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16de98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16de98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de9c: 0x2450aad8  addiu       $s0, $v0, -0x5528
    ctx->pc = 0x16de9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945496));
    // 0x16dea0: 0xc043098  jal         func_10C260
    ctx->pc = 0x16DEA0u;
    SET_GPR_U32(ctx, 31, 0x16DEA8u);
    ctx->pc = 0x16DEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEA0u;
            // 0x16dea4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C260u;
    if (runtime->hasFunction(0x10C260u)) {
        auto targetFn = runtime->lookupFunction(0x10C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEA8u; }
        if (ctx->pc != 0x16DEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C260_0x10c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEA8u; }
        if (ctx->pc != 0x16DEA8u) { return; }
    }
    ctx->pc = 0x16DEA8u;
label_16dea8:
    // 0x16dea8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16deac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16deacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16deb0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DEB0u;
    {
        const bool branch_taken_0x16deb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16DEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEB0u;
            // 0x16deb4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16deb0) {
            ctx->pc = 0x16DEC0u;
            goto label_16dec0;
        }
    }
    ctx->pc = 0x16DEB8u;
    // 0x16deb8: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16DEB8u;
    {
        const bool branch_taken_0x16deb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16deb8) {
            ctx->pc = 0x16DEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEB8u;
            // 0x16debc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DEDCu;
            goto label_16dedc;
        }
    }
    ctx->pc = 0x16DEC0u;
label_16dec0:
    // 0x16dec0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16dec4: 0xc0430a4  jal         func_10C290
    ctx->pc = 0x16DEC4u;
    SET_GPR_U32(ctx, 31, 0x16DECCu);
    ctx->pc = 0x10C290u;
    if (runtime->hasFunction(0x10C290u)) {
        auto targetFn = runtime->lookupFunction(0x10C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DECCu; }
        if (ctx->pc != 0x16DECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C290_0x10c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DECCu; }
        if (ctx->pc != 0x16DECCu) { return; }
    }
    ctx->pc = 0x16DECCu;
label_16decc:
    // 0x16decc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16deccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16ded0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x16DED0u;
    {
        const bool branch_taken_0x16ded0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ded0) {
            ctx->pc = 0x16DED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DED0u;
            // 0x16ded4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DED8u;
            goto label_16ded8;
        }
    }
    ctx->pc = 0x16DED8u;
label_16ded8:
    // 0x16ded8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16ded8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16dedc:
    // 0x16dedc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x16dedcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16dee0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16dee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dee4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEE4u;
            // 0x16dee8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DEECu;
    // 0x16deec: 0x0  nop
    ctx->pc = 0x16deecu;
    // NOP
}
