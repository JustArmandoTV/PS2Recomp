#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7B08
// Address: 0x1a7b08 - 0x1a7b60
void sub_001A7B08_0x1a7b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7B08_0x1a7b08");
#endif

    switch (ctx->pc) {
        case 0x1a7b1cu: goto label_1a7b1c;
        case 0x1a7b34u: goto label_1a7b34;
        case 0x1a7b48u: goto label_1a7b48;
        default: break;
    }

    ctx->pc = 0x1a7b08u;

    // 0x1a7b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7b0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a7b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a7b10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a7b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a7b14: 0xc06e8e4  jal         func_1BA390
    ctx->pc = 0x1A7B14u;
    SET_GPR_U32(ctx, 31, 0x1A7B1Cu);
    ctx->pc = 0x1BA390u;
    if (runtime->hasFunction(0x1BA390u)) {
        auto targetFn = runtime->lookupFunction(0x1BA390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B1Cu; }
        if (ctx->pc != 0x1A7B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA390_0x1ba390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B1Cu; }
        if (ctx->pc != 0x1A7B1Cu) { return; }
    }
    ctx->pc = 0x1A7B1Cu;
label_1a7b1c:
    // 0x1a7b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a7b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b24: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7B24u;
    {
        const bool branch_taken_0x1a7b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B24u;
            // 0x1a7b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b24) {
            ctx->pc = 0x1A7B4Cu;
            goto label_1a7b4c;
        }
    }
    ctx->pc = 0x1A7B2Cu;
    // 0x1a7b2c: 0xc06e920  jal         func_1BA480
    ctx->pc = 0x1A7B2Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B34u);
    ctx->pc = 0x1BA480u;
    if (runtime->hasFunction(0x1BA480u)) {
        auto targetFn = runtime->lookupFunction(0x1BA480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B34u; }
        if (ctx->pc != 0x1A7B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA480_0x1ba480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B34u; }
        if (ctx->pc != 0x1A7B34u) { return; }
    }
    ctx->pc = 0x1A7B34u;
label_1a7b34:
    // 0x1a7b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7b3c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1a7b3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1a7b40: 0xc06e914  jal         func_1BA450
    ctx->pc = 0x1A7B40u;
    SET_GPR_U32(ctx, 31, 0x1A7B48u);
    ctx->pc = 0x1A7B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B40u;
            // 0x1a7b44: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA450u;
    if (runtime->hasFunction(0x1BA450u)) {
        auto targetFn = runtime->lookupFunction(0x1BA450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B48u; }
        if (ctx->pc != 0x1A7B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA450_0x1ba450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B48u; }
        if (ctx->pc != 0x1A7B48u) { return; }
    }
    ctx->pc = 0x1A7B48u;
label_1a7b48:
    // 0x1a7b48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7b4c:
    // 0x1a7b4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a7b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7b50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a7b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7b54: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B54u;
            // 0x1a7b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7B5Cu;
    // 0x1a7b5c: 0x0  nop
    ctx->pc = 0x1a7b5cu;
    // NOP
}
