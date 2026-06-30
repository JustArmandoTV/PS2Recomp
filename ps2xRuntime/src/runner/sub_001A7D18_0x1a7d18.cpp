#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7D18
// Address: 0x1a7d18 - 0x1a7d80
void sub_001A7D18_0x1a7d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7D18_0x1a7d18");
#endif

    switch (ctx->pc) {
        case 0x1a7d34u: goto label_1a7d34;
        case 0x1a7d48u: goto label_1a7d48;
        case 0x1a7d50u: goto label_1a7d50;
        default: break;
    }

    ctx->pc = 0x1a7d18u;

    // 0x1a7d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7d1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7d20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7d2c: 0xc069f60  jal         func_1A7D80
    ctx->pc = 0x1A7D2Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D34u);
    ctx->pc = 0x1A7D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D2Cu;
            // 0x1a7d30: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7D80u;
    if (runtime->hasFunction(0x1A7D80u)) {
        auto targetFn = runtime->lookupFunction(0x1A7D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D34u; }
        if (ctx->pc != 0x1A7D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7D80_0x1a7d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D34u; }
        if (ctx->pc != 0x1A7D34u) { return; }
    }
    ctx->pc = 0x1A7D34u;
label_1a7d34:
    // 0x1a7d34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a7d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7D38u;
    {
        const bool branch_taken_0x1a7d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D38u;
            // 0x1a7d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d38) {
            ctx->pc = 0x1A7D68u;
            goto label_1a7d68;
        }
    }
    ctx->pc = 0x1A7D40u;
    // 0x1a7d40: 0xc069f12  jal         func_1A7C48
    ctx->pc = 0x1A7D40u;
    SET_GPR_U32(ctx, 31, 0x1A7D48u);
    ctx->pc = 0x1A7C48u;
    if (runtime->hasFunction(0x1A7C48u)) {
        auto targetFn = runtime->lookupFunction(0x1A7C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D48u; }
        if (ctx->pc != 0x1A7D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7C48_0x1a7c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D48u; }
        if (ctx->pc != 0x1A7D48u) { return; }
    }
    ctx->pc = 0x1A7D48u;
label_1a7d48:
    // 0x1a7d48: 0xc069f74  jal         func_1A7DD0
    ctx->pc = 0x1A7D48u;
    SET_GPR_U32(ctx, 31, 0x1A7D50u);
    ctx->pc = 0x1A7D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D48u;
            // 0x1a7d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7DD0u;
    if (runtime->hasFunction(0x1A7DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A7DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D50u; }
        if (ctx->pc != 0x1A7D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7DD0_0x1a7dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D50u; }
        if (ctx->pc != 0x1A7D50u) { return; }
    }
    ctx->pc = 0x1A7D50u;
label_1a7d50:
    // 0x1a7d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7d60: 0x806a0fc  j           func_1A83F0
    ctx->pc = 0x1A7D60u;
    ctx->pc = 0x1A7D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D60u;
            // 0x1a7d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83F0u;
    if (runtime->hasFunction(0x1A83F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A83F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A83F0_0x1a83f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A7D68u;
label_1a7d68:
    // 0x1a7d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7d6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7d74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D74u;
            // 0x1a7d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7D7Cu;
    // 0x1a7d7c: 0x0  nop
    ctx->pc = 0x1a7d7cu;
    // NOP
}
