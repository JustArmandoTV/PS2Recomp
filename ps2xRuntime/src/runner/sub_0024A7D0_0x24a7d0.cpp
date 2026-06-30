#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A7D0
// Address: 0x24a7d0 - 0x24a840
void sub_0024A7D0_0x24a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A7D0_0x24a7d0");
#endif

    switch (ctx->pc) {
        case 0x24a7f8u: goto label_24a7f8;
        case 0x24a80cu: goto label_24a80c;
        default: break;
    }

    ctx->pc = 0x24a7d0u;

    // 0x24a7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a7d4: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x24a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x24a7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a7dc: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x24a7dcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x24a7e0: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x24a7e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x24a7e4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x24A7E4u;
    {
        const bool branch_taken_0x24a7e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A7E4u;
            // 0x24a7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a7e4) {
            ctx->pc = 0x24A828u;
            goto label_24a828;
        }
    }
    ctx->pc = 0x24A7ECu;
    // 0x24a7ec: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x24a7ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x24a7f0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x24a7f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7f4: 0x0  nop
    ctx->pc = 0x24a7f4u;
    // NOP
label_24a7f8:
    // 0x24a7f8: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x24a7f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x24a7fc: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A7FCu;
    {
        const bool branch_taken_0x24a7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x24a7fc) {
            ctx->pc = 0x24A818u;
            goto label_24a818;
        }
    }
    ctx->pc = 0x24A804u;
    // 0x24a804: 0xc097f24  jal         func_25FC90
    ctx->pc = 0x24A804u;
    SET_GPR_U32(ctx, 31, 0x24A80Cu);
    ctx->pc = 0x25FC90u;
    if (runtime->hasFunction(0x25FC90u)) {
        auto targetFn = runtime->lookupFunction(0x25FC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A80Cu; }
        if (ctx->pc != 0x24A80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FC90_0x25fc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A80Cu; }
        if (ctx->pc != 0x24A80Cu) { return; }
    }
    ctx->pc = 0x24A80Cu;
label_24a80c:
    // 0x24a80c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A80Cu;
    {
        const bool branch_taken_0x24a80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a80c) {
            ctx->pc = 0x24A828u;
            goto label_24a828;
        }
    }
    ctx->pc = 0x24A814u;
    // 0x24a814: 0x0  nop
    ctx->pc = 0x24a814u;
    // NOP
label_24a818:
    // 0x24a818: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24a818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24a81c: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x24a81cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x24a820: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x24A820u;
    {
        const bool branch_taken_0x24a820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A820u;
            // 0x24a824: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a820) {
            ctx->pc = 0x24A7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a7f8;
        }
    }
    ctx->pc = 0x24A828u;
label_24a828:
    // 0x24a828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a82c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A82Cu;
            // 0x24a830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A834u;
    // 0x24a834: 0x0  nop
    ctx->pc = 0x24a834u;
    // NOP
    // 0x24a838: 0x0  nop
    ctx->pc = 0x24a838u;
    // NOP
    // 0x24a83c: 0x0  nop
    ctx->pc = 0x24a83cu;
    // NOP
}
