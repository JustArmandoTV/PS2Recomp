#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173EA8
// Address: 0x173ea8 - 0x173f28
void sub_00173EA8_0x173ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173EA8_0x173ea8");
#endif

    switch (ctx->pc) {
        case 0x173ec4u: goto label_173ec4;
        case 0x173f04u: goto label_173f04;
        case 0x173f10u: goto label_173f10;
        default: break;
    }

    ctx->pc = 0x173ea8u;

    // 0x173ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173eac: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x173eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x173eb0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x173EB0u;
    {
        const bool branch_taken_0x173eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173EB0u;
            // 0x173eb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173eb0) {
            ctx->pc = 0x173ED0u;
            goto label_173ed0;
        }
    }
    ctx->pc = 0x173EB8u;
    // 0x173eb8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x173ebc: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x173EBCu;
    SET_GPR_U32(ctx, 31, 0x173EC4u);
    ctx->pc = 0x173EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173EBCu;
            // 0x173ec0: 0x24844368  addiu       $a0, $a0, 0x4368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173EC4u; }
        if (ctx->pc != 0x173EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173EC4u; }
        if (ctx->pc != 0x173EC4u) { return; }
    }
    ctx->pc = 0x173EC4u;
label_173ec4:
    // 0x173ec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173EC4u;
    {
        const bool branch_taken_0x173ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173EC4u;
            // 0x173ec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ec4) {
            ctx->pc = 0x173ED8u;
            goto label_173ed8;
        }
    }
    ctx->pc = 0x173ECCu;
    // 0x173ecc: 0x0  nop
    ctx->pc = 0x173eccu;
    // NOP
label_173ed0:
    // 0x173ed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x173ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173ed4: 0x84620042  lh          $v0, 0x42($v1)
    ctx->pc = 0x173ed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
label_173ed8:
    // 0x173ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173edc: 0x3e00008  jr          $ra
    ctx->pc = 0x173EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173EDCu;
            // 0x173ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173EE4u;
    // 0x173ee4: 0x0  nop
    ctx->pc = 0x173ee4u;
    // NOP
    // 0x173ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173ef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173efc: 0xc0599de  jal         func_166778
    ctx->pc = 0x173EFCu;
    SET_GPR_U32(ctx, 31, 0x173F04u);
    ctx->pc = 0x173F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173EFCu;
            // 0x173f00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F04u; }
        if (ctx->pc != 0x173F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F04u; }
        if (ctx->pc != 0x173F04u) { return; }
    }
    ctx->pc = 0x173F04u;
label_173f04:
    // 0x173f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f08: 0xc05cfca  jal         func_173F28
    ctx->pc = 0x173F08u;
    SET_GPR_U32(ctx, 31, 0x173F10u);
    ctx->pc = 0x173F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F08u;
            // 0x173f0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173F28u;
    if (runtime->hasFunction(0x173F28u)) {
        auto targetFn = runtime->lookupFunction(0x173F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F10u; }
        if (ctx->pc != 0x173F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173F28_0x173f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F10u; }
        if (ctx->pc != 0x173F10u) { return; }
    }
    ctx->pc = 0x173F10u;
label_173f10:
    // 0x173f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173f14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173f1c: 0x80599e0  j           func_166780
    ctx->pc = 0x173F1Cu;
    ctx->pc = 0x173F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F1Cu;
            // 0x173f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173F24u;
    // 0x173f24: 0x0  nop
    ctx->pc = 0x173f24u;
    // NOP
}
