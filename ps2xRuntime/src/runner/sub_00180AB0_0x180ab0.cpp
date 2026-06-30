#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180AB0
// Address: 0x180ab0 - 0x180b18
void sub_00180AB0_0x180ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180AB0_0x180ab0");
#endif

    ctx->pc = 0x180ab0u;

    // 0x180ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180ab4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x180ab4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ab8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180AB8u;
    {
        const bool branch_taken_0x180ab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x180ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180AB8u;
            // 0x180abc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ab8) {
            ctx->pc = 0x180AD8u;
            goto label_180ad8;
        }
    }
    ctx->pc = 0x180AC0u;
    // 0x180ac0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180ac8: 0x24846a50  addiu       $a0, $a0, 0x6A50
    ctx->pc = 0x180ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27216));
    // 0x180acc: 0x8060334  j           func_180CD0
    ctx->pc = 0x180ACCu;
    ctx->pc = 0x180AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180ACCu;
            // 0x180ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180CD0_0x180cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180AD4u;
    // 0x180ad4: 0x0  nop
    ctx->pc = 0x180ad4u;
    // NOP
label_180ad8:
    // 0x180ad8: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x180AD8u;
    {
        const bool branch_taken_0x180ad8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x180ad8) {
            ctx->pc = 0x180ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180AD8u;
            // 0x180adc: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180AF4u;
            goto label_180af4;
        }
    }
    ctx->pc = 0x180AE0u;
    // 0x180ae0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x180ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x180ae4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x180ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x180ae8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180AE8u;
    {
        const bool branch_taken_0x180ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180AE8u;
            // 0x180aec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ae8) {
            ctx->pc = 0x180B08u;
            goto label_180b08;
        }
    }
    ctx->pc = 0x180AF0u;
    // 0x180af0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_180af4:
    // 0x180af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180af8: 0x24846a80  addiu       $a0, $a0, 0x6A80
    ctx->pc = 0x180af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27264));
    // 0x180afc: 0x8060334  j           func_180CD0
    ctx->pc = 0x180AFCu;
    ctx->pc = 0x180B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180AFCu;
            // 0x180b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180CD0_0x180cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180B04u;
    // 0x180b04: 0x0  nop
    ctx->pc = 0x180b04u;
    // NOP
label_180b08:
    // 0x180b08: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x180b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x180b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x180B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B0Cu;
            // 0x180b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180B14u;
    // 0x180b14: 0x0  nop
    ctx->pc = 0x180b14u;
    // NOP
}
