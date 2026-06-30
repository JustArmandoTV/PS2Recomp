#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052FC70
// Address: 0x52fc70 - 0x52fd30
void sub_0052FC70_0x52fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052FC70_0x52fc70");
#endif

    switch (ctx->pc) {
        case 0x52fce4u: goto label_52fce4;
        case 0x52fcf4u: goto label_52fcf4;
        case 0x52fd04u: goto label_52fd04;
        case 0x52fd14u: goto label_52fd14;
        case 0x52fd24u: goto label_52fd24;
        default: break;
    }

    ctx->pc = 0x52fc70u;

    // 0x52fc70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x52fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x52fc74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x52fc78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x52fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x52fc7c: 0x8c86005c  lw          $a2, 0x5C($a0)
    ctx->pc = 0x52fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x52fc80: 0x50c30004  beql        $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x52FC80u;
    {
        const bool branch_taken_0x52fc80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x52fc80) {
            ctx->pc = 0x52FC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52FC80u;
            // 0x52fc84: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FC94u;
            goto label_52fc94;
        }
    }
    ctx->pc = 0x52FC88u;
    // 0x52fc88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x52fc8c: 0x50c30001  beql        $a2, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x52FC8Cu;
    {
        const bool branch_taken_0x52fc8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x52fc8c) {
            ctx->pc = 0x52FC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52FC8Cu;
            // 0x52fc90: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FC94u;
            goto label_52fc94;
        }
    }
    ctx->pc = 0x52FC94u;
label_52fc94:
    // 0x52fc94: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x52fc94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x52fc98: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x52fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x52fc9c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x52fc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x52fca0: 0x1107001e  beq         $t0, $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x52FCA0u;
    {
        const bool branch_taken_0x52fca0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x52FCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FCA0u;
            // 0x52fca4: 0x8c640e80  lw          $a0, 0xE80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52fca0) {
            ctx->pc = 0x52FD1Cu;
            goto label_52fd1c;
        }
    }
    ctx->pc = 0x52FCA8u;
    // 0x52fca8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x52fcac: 0x11030017  beq         $t0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x52FCACu;
    {
        const bool branch_taken_0x52fcac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x52fcac) {
            ctx->pc = 0x52FD0Cu;
            goto label_52fd0c;
        }
    }
    ctx->pc = 0x52FCB4u;
    // 0x52fcb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x52fcb8: 0x11030010  beq         $t0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x52FCB8u;
    {
        const bool branch_taken_0x52fcb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x52fcb8) {
            ctx->pc = 0x52FCFCu;
            goto label_52fcfc;
        }
    }
    ctx->pc = 0x52FCC0u;
    // 0x52fcc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x52fcc4: 0x11030009  beq         $t0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x52FCC4u;
    {
        const bool branch_taken_0x52fcc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x52fcc4) {
            ctx->pc = 0x52FCECu;
            goto label_52fcec;
        }
    }
    ctx->pc = 0x52FCCCu;
    // 0x52fccc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x52FCCCu;
    {
        const bool branch_taken_0x52fccc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fccc) {
            ctx->pc = 0x52FCDCu;
            goto label_52fcdc;
        }
    }
    ctx->pc = 0x52FCD4u;
    // 0x52fcd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x52FCD4u;
    {
        const bool branch_taken_0x52fcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52FCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FCD4u;
            // 0x52fcd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52fcd4) {
            ctx->pc = 0x52FD28u;
            goto label_52fd28;
        }
    }
    ctx->pc = 0x52FCDCu;
label_52fcdc:
    // 0x52fcdc: 0xc13b8e8  jal         func_4EE3A0
    ctx->pc = 0x52FCDCu;
    SET_GPR_U32(ctx, 31, 0x52FCE4u);
    ctx->pc = 0x4EE3A0u;
    if (runtime->hasFunction(0x4EE3A0u)) {
        auto targetFn = runtime->lookupFunction(0x4EE3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FCE4u; }
        if (ctx->pc != 0x52FCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EE3A0_0x4ee3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FCE4u; }
        if (ctx->pc != 0x52FCE4u) { return; }
    }
    ctx->pc = 0x52FCE4u;
label_52fce4:
    // 0x52fce4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x52FCE4u;
    {
        const bool branch_taken_0x52fce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fce4) {
            ctx->pc = 0x52FD24u;
            goto label_52fd24;
        }
    }
    ctx->pc = 0x52FCECu;
label_52fcec:
    // 0x52fcec: 0xc13b83c  jal         func_4EE0F0
    ctx->pc = 0x52FCECu;
    SET_GPR_U32(ctx, 31, 0x52FCF4u);
    ctx->pc = 0x4EE0F0u;
    if (runtime->hasFunction(0x4EE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x4EE0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FCF4u; }
        if (ctx->pc != 0x52FCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EE0F0_0x4ee0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FCF4u; }
        if (ctx->pc != 0x52FCF4u) { return; }
    }
    ctx->pc = 0x52FCF4u;
label_52fcf4:
    // 0x52fcf4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x52FCF4u;
    {
        const bool branch_taken_0x52fcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fcf4) {
            ctx->pc = 0x52FD24u;
            goto label_52fd24;
        }
    }
    ctx->pc = 0x52FCFCu;
label_52fcfc:
    // 0x52fcfc: 0xc13b800  jal         func_4EE000
    ctx->pc = 0x52FCFCu;
    SET_GPR_U32(ctx, 31, 0x52FD04u);
    ctx->pc = 0x4EE000u;
    if (runtime->hasFunction(0x4EE000u)) {
        auto targetFn = runtime->lookupFunction(0x4EE000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FD04u; }
        if (ctx->pc != 0x52FD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EE000_0x4ee000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FD04u; }
        if (ctx->pc != 0x52FD04u) { return; }
    }
    ctx->pc = 0x52FD04u;
label_52fd04:
    // 0x52fd04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x52FD04u;
    {
        const bool branch_taken_0x52fd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fd04) {
            ctx->pc = 0x52FD24u;
            goto label_52fd24;
        }
    }
    ctx->pc = 0x52FD0Cu;
label_52fd0c:
    // 0x52fd0c: 0xc13b750  jal         func_4EDD40
    ctx->pc = 0x52FD0Cu;
    SET_GPR_U32(ctx, 31, 0x52FD14u);
    ctx->pc = 0x4EDD40u;
    if (runtime->hasFunction(0x4EDD40u)) {
        auto targetFn = runtime->lookupFunction(0x4EDD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FD14u; }
        if (ctx->pc != 0x52FD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EDD40_0x4edd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FD14u; }
        if (ctx->pc != 0x52FD14u) { return; }
    }
    ctx->pc = 0x52FD14u;
label_52fd14:
    // 0x52fd14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x52FD14u;
    {
        const bool branch_taken_0x52fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fd14) {
            ctx->pc = 0x52FD24u;
            goto label_52fd24;
        }
    }
    ctx->pc = 0x52FD1Cu;
label_52fd1c:
    // 0x52fd1c: 0xc13b730  jal         func_4EDCC0
    ctx->pc = 0x52FD1Cu;
    SET_GPR_U32(ctx, 31, 0x52FD24u);
    ctx->pc = 0x4EDCC0u;
    if (runtime->hasFunction(0x4EDCC0u)) {
        auto targetFn = runtime->lookupFunction(0x4EDCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FD24u; }
        if (ctx->pc != 0x52FD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EDCC0_0x4edcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FD24u; }
        if (ctx->pc != 0x52FD24u) { return; }
    }
    ctx->pc = 0x52FD24u;
label_52fd24:
    // 0x52fd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x52fd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_52fd28:
    // 0x52fd28: 0x3e00008  jr          $ra
    ctx->pc = 0x52FD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52FD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FD28u;
            // 0x52fd2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52FD30u;
}
