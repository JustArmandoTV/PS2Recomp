#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012ADF0
// Address: 0x12adf0 - 0x12ae50
void sub_0012ADF0_0x12adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ADF0_0x12adf0");
#endif

    switch (ctx->pc) {
        case 0x12ae1cu: goto label_12ae1c;
        default: break;
    }

    ctx->pc = 0x12adf0u;

    // 0x12adf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12adf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12adf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12adf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12adfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12adfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ae04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae08: 0x3c1000be  lui         $s0, 0xBE
    ctx->pc = 0x12ae08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)190 << 16));
    // 0x12ae0c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12ae0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae10: 0xae00b880  sw          $zero, -0x4780($s0)
    ctx->pc = 0x12ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948992), GPR_U32(ctx, 0));
    // 0x12ae14: 0xc04326a  jal         func_10C9A8
    ctx->pc = 0x12AE14u;
    SET_GPR_U32(ctx, 31, 0x12AE1Cu);
    ctx->pc = 0x12AE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE14u;
            // 0x12ae18: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C9A8u;
    if (runtime->hasFunction(0x10C9A8u)) {
        auto targetFn = runtime->lookupFunction(0x10C9A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE1Cu; }
        if (ctx->pc != 0x12AE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C9A8_0x10c9a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE1Cu; }
        if (ctx->pc != 0x12AE1Cu) { return; }
    }
    ctx->pc = 0x12AE1Cu;
label_12ae1c:
    // 0x12ae1c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x12ae1cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae20: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12ae20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ae24: 0x15ee0004  bne         $t7, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AE24u;
    {
        const bool branch_taken_0x12ae24 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x12AE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE24u;
            // 0x12ae28: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae24) {
            ctx->pc = 0x12AE38u;
            goto label_12ae38;
        }
    }
    ctx->pc = 0x12AE2Cu;
    // 0x12ae2c: 0x8e0fb880  lw          $t7, -0x4780($s0)
    ctx->pc = 0x12ae2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948992)));
    // 0x12ae30: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12AE30u;
    {
        const bool branch_taken_0x12ae30 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ae30) {
            ctx->pc = 0x12AE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE30u;
            // 0x12ae34: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AE38u;
            goto label_12ae38;
        }
    }
    ctx->pc = 0x12AE38u;
label_12ae38:
    // 0x12ae38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ae38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ae3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ae3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ae40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12ae40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ae44: 0x3e00008  jr          $ra
    ctx->pc = 0x12AE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE44u;
            // 0x12ae48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12AE4Cu;
    // 0x12ae4c: 0x0  nop
    ctx->pc = 0x12ae4cu;
    // NOP
}
