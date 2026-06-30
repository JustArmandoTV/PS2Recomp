#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFB30
// Address: 0x1bfb30 - 0x1bfb90
void sub_001BFB30_0x1bfb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFB30_0x1bfb30");
#endif

    switch (ctx->pc) {
        case 0x1bfb7cu: goto label_1bfb7c;
        default: break;
    }

    ctx->pc = 0x1bfb30u;

    // 0x1bfb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfb34: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1bfb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bfb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfb3c: 0x2c850011  sltiu       $a1, $a0, 0x11
    ctx->pc = 0x1bfb3cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1bfb40: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BFB40u;
    {
        const bool branch_taken_0x1bfb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB40u;
            // 0x1bfb44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb40) {
            ctx->pc = 0x1BFB80u;
            goto label_1bfb80;
        }
    }
    ctx->pc = 0x1BFB48u;
    // 0x1bfb48: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BFB48u;
    {
        const bool branch_taken_0x1bfb48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB48u;
            // 0x1bfb4c: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb48) {
            ctx->pc = 0x1BFB6Cu;
            goto label_1bfb6c;
        }
    }
    ctx->pc = 0x1BFB50u;
    // 0x1bfb50: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1bfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bfb54: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BFB54u;
    {
        const bool branch_taken_0x1bfb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB54u;
            // 0x1bfb58: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb54) {
            ctx->pc = 0x1BFB80u;
            goto label_1bfb80;
        }
    }
    ctx->pc = 0x1BFB5Cu;
    // 0x1bfb5c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1bfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bfb60: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFB60u;
    {
        const bool branch_taken_0x1bfb60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB60u;
            // 0x1bfb64: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb60) {
            ctx->pc = 0x1BFB80u;
            goto label_1bfb80;
        }
    }
    ctx->pc = 0x1BFB68u;
    // 0x1bfb68: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1bfb68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1bfb6c:
    // 0x1bfb6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bfb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb70: 0x24c6b720  addiu       $a2, $a2, -0x48E0
    ctx->pc = 0x1bfb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948640));
    // 0x1bfb74: 0xc06f9cc  jal         func_1BE730
    ctx->pc = 0x1BFB74u;
    SET_GPR_U32(ctx, 31, 0x1BFB7Cu);
    ctx->pc = 0x1BFB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB74u;
            // 0x1bfb78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB7Cu; }
        if (ctx->pc != 0x1BFB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE730_0x1be730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB7Cu; }
        if (ctx->pc != 0x1BFB7Cu) { return; }
    }
    ctx->pc = 0x1BFB7Cu;
label_1bfb7c:
    // 0x1bfb7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bfb7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb80:
    // 0x1bfb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfb84: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bfb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb88: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB88u;
            // 0x1bfb8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFB90u;
}
