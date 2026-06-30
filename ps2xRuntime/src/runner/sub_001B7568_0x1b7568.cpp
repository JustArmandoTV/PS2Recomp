#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7568
// Address: 0x1b7568 - 0x1b75e8
void sub_001B7568_0x1b7568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7568_0x1b7568");
#endif

    switch (ctx->pc) {
        case 0x1b758cu: goto label_1b758c;
        case 0x1b75b8u: goto label_1b75b8;
        default: break;
    }

    ctx->pc = 0x1b7568u;

    // 0x1b7568: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b756c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b7570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7574: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b7574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7578: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1b7578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b757c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b757cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b7580: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7584: 0xc06dbdc  jal         func_1B6F70
    ctx->pc = 0x1B7584u;
    SET_GPR_U32(ctx, 31, 0x1B758Cu);
    ctx->pc = 0x1B7588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7584u;
            // 0x1b7588: 0x26300d88  addiu       $s0, $s1, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F70u;
    if (runtime->hasFunction(0x1B6F70u)) {
        auto targetFn = runtime->lookupFunction(0x1B6F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B758Cu; }
        if (ctx->pc != 0x1B758Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6F70_0x1b6f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B758Cu; }
        if (ctx->pc != 0x1B758Cu) { return; }
    }
    ctx->pc = 0x1B758Cu;
label_1b758c:
    // 0x1b758c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7594: 0x8e03028c  lw          $v1, 0x28C($s0)
    ctx->pc = 0x1b7594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x1b7598: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7598u;
    {
        const bool branch_taken_0x1b7598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B759Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7598u;
            // 0x1b759c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7598) {
            ctx->pc = 0x1B75B0u;
            goto label_1b75b0;
        }
    }
    ctx->pc = 0x1B75A0u;
    // 0x1b75a0: 0x8e030290  lw          $v1, 0x290($s0)
    ctx->pc = 0x1b75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x1b75a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b75a8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B75A8u;
    {
        const bool branch_taken_0x1b75a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B75A8u;
            // 0x1b75ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75a8) {
            ctx->pc = 0x1B75CCu;
            goto label_1b75cc;
        }
    }
    ctx->pc = 0x1B75B0u;
label_1b75b0:
    // 0x1b75b0: 0xc06daaa  jal         func_1B6AA8
    ctx->pc = 0x1B75B0u;
    SET_GPR_U32(ctx, 31, 0x1B75B8u);
    ctx->pc = 0x1B6AA8u;
    if (runtime->hasFunction(0x1B6AA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B75B8u; }
        if (ctx->pc != 0x1B75B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6AA8_0x1b6aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B75B8u; }
        if (ctx->pc != 0x1B75B8u) { return; }
    }
    ctx->pc = 0x1B75B8u;
label_1b75b8:
    // 0x1b75b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b75bc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b75c0: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x1b75c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    // 0x1b75c4: 0xae030290  sw          $v1, 0x290($s0)
    ctx->pc = 0x1b75c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 3));
    // 0x1b75c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b75cc:
    // 0x1b75cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b75ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b75d0: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1b75d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1b75d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b75d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b75d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b75d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b75dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B75DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B75E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B75DCu;
            // 0x1b75e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B75E4u;
    // 0x1b75e4: 0x0  nop
    ctx->pc = 0x1b75e4u;
    // NOP
}
