#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BAEF8
// Address: 0x1baef8 - 0x1baf50
void sub_001BAEF8_0x1baef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAEF8_0x1baef8");
#endif

    switch (ctx->pc) {
        case 0x1baf30u: goto label_1baf30;
        case 0x1baf40u: goto label_1baf40;
        default: break;
    }

    ctx->pc = 0x1baef8u;

    // 0x1baef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baefc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1baefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1baf00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baf04: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1baf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1baf08: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1baf08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1baf0c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAF0Cu;
    {
        const bool branch_taken_0x1baf0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF0Cu;
            // 0x1baf10: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf0c) {
            ctx->pc = 0x1BAF28u;
            goto label_1baf28;
        }
    }
    ctx->pc = 0x1BAF14u;
    // 0x1baf14: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1baf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1baf18: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAF18u;
    {
        const bool branch_taken_0x1baf18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF18u;
            // 0x1baf1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf18) {
            ctx->pc = 0x1BAF38u;
            goto label_1baf38;
        }
    }
    ctx->pc = 0x1BAF20u;
    // 0x1baf20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAF20u;
    {
        const bool branch_taken_0x1baf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF20u;
            // 0x1baf24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf20) {
            ctx->pc = 0x1BAF44u;
            goto label_1baf44;
        }
    }
    ctx->pc = 0x1BAF28u;
label_1baf28:
    // 0x1baf28: 0xc06efbc  jal         func_1BBEF0
    ctx->pc = 0x1BAF28u;
    SET_GPR_U32(ctx, 31, 0x1BAF30u);
    ctx->pc = 0x1BBEF0u;
    if (runtime->hasFunction(0x1BBEF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF30u; }
        if (ctx->pc != 0x1BAF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBEF0_0x1bbef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF30u; }
        if (ctx->pc != 0x1BAF30u) { return; }
    }
    ctx->pc = 0x1BAF30u;
label_1baf30:
    // 0x1baf30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAF30u;
    {
        const bool branch_taken_0x1baf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF30u;
            // 0x1baf34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf30) {
            ctx->pc = 0x1BAF44u;
            goto label_1baf44;
        }
    }
    ctx->pc = 0x1BAF38u;
label_1baf38:
    // 0x1baf38: 0xc06f32a  jal         func_1BCCA8
    ctx->pc = 0x1BAF38u;
    SET_GPR_U32(ctx, 31, 0x1BAF40u);
    ctx->pc = 0x1BAF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF38u;
            // 0x1baf3c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCCA8u;
    if (runtime->hasFunction(0x1BCCA8u)) {
        auto targetFn = runtime->lookupFunction(0x1BCCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF40u; }
        if (ctx->pc != 0x1BAF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCCA8_0x1bcca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF40u; }
        if (ctx->pc != 0x1BAF40u) { return; }
    }
    ctx->pc = 0x1BAF40u;
label_1baf40:
    // 0x1baf40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1baf44:
    // 0x1baf44: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF44u;
            // 0x1baf48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAF4Cu;
    // 0x1baf4c: 0x0  nop
    ctx->pc = 0x1baf4cu;
    // NOP
}
