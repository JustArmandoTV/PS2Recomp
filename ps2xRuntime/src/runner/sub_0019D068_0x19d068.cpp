#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D068
// Address: 0x19d068 - 0x19d0d0
void sub_0019D068_0x19d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D068_0x19d068");
#endif

    switch (ctx->pc) {
        case 0x19d080u: goto label_19d080;
        case 0x19d098u: goto label_19d098;
        case 0x19d0a8u: goto label_19d0a8;
        case 0x19d0b4u: goto label_19d0b4;
        default: break;
    }

    ctx->pc = 0x19d068u;

    // 0x19d068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d06c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d078: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D078u;
    SET_GPR_U32(ctx, 31, 0x19D080u);
    ctx->pc = 0x19D07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D078u;
            // 0x19d07c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D080u; }
        if (ctx->pc != 0x19D080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D080u; }
        if (ctx->pc != 0x19D080u) { return; }
    }
    ctx->pc = 0x19D080u;
label_19d080:
    // 0x19d080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d084: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D084u;
    {
        const bool branch_taken_0x19d084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D084u;
            // 0x19d088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d084) {
            ctx->pc = 0x19D0A0u;
            goto label_19d0a0;
        }
    }
    ctx->pc = 0x19D08Cu;
    // 0x19d08c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d090: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19D090u;
    SET_GPR_U32(ctx, 31, 0x19D098u);
    ctx->pc = 0x19D094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D090u;
            // 0x19d094: 0x248497c0  addiu       $a0, $a0, -0x6840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D098u; }
        if (ctx->pc != 0x19D098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D098u; }
        if (ctx->pc != 0x19D098u) { return; }
    }
    ctx->pc = 0x19D098u;
label_19d098:
    // 0x19d098: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19D098u;
    {
        const bool branch_taken_0x19d098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D098u;
            // 0x19d09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d098) {
            ctx->pc = 0x19D0B8u;
            goto label_19d0b8;
        }
    }
    ctx->pc = 0x19D0A0u;
label_19d0a0:
    // 0x19d0a0: 0xc067434  jal         func_19D0D0
    ctx->pc = 0x19D0A0u;
    SET_GPR_U32(ctx, 31, 0x19D0A8u);
    ctx->pc = 0x19D0D0u;
    if (runtime->hasFunction(0x19D0D0u)) {
        auto targetFn = runtime->lookupFunction(0x19D0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0A8u; }
        if (ctx->pc != 0x19D0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D0D0_0x19d0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0A8u; }
        if (ctx->pc != 0x19D0A8u) { return; }
    }
    ctx->pc = 0x19D0A8u;
label_19d0a8:
    // 0x19d0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0ac: 0xc066922  jal         func_19A488
    ctx->pc = 0x19D0ACu;
    SET_GPR_U32(ctx, 31, 0x19D0B4u);
    ctx->pc = 0x19D0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0ACu;
            // 0x19d0b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A488u;
    if (runtime->hasFunction(0x19A488u)) {
        auto targetFn = runtime->lookupFunction(0x19A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0B4u; }
        if (ctx->pc != 0x19D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A488_0x19a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0B4u; }
        if (ctx->pc != 0x19D0B4u) { return; }
    }
    ctx->pc = 0x19D0B4u;
label_19d0b4:
    // 0x19d0b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19d0b8:
    // 0x19d0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d0bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x19D0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0C4u;
            // 0x19d0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D0CCu;
    // 0x19d0cc: 0x0  nop
    ctx->pc = 0x19d0ccu;
    // NOP
}
