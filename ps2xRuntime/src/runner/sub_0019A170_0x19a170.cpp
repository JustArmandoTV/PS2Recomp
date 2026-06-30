#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A170
// Address: 0x19a170 - 0x19a1d8
void sub_0019A170_0x19a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A170_0x19a170");
#endif

    switch (ctx->pc) {
        case 0x19a1c4u: goto label_19a1c4;
        default: break;
    }

    ctx->pc = 0x19a170u;

    // 0x19a170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a17c: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x19a17cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19a180: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19A180u;
    {
        const bool branch_taken_0x19a180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A180u;
            // 0x19a184: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a180) {
            ctx->pc = 0x19A1C8u;
            goto label_19a1c8;
        }
    }
    ctx->pc = 0x19A188u;
    // 0x19a188: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A188u;
    {
        const bool branch_taken_0x19a188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a188) {
            ctx->pc = 0x19A18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A188u;
            // 0x19a18c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A1A0u;
            goto label_19a1a0;
        }
    }
    ctx->pc = 0x19A190u;
    // 0x19a190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a194: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A194u;
    {
        const bool branch_taken_0x19a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A194u;
            // 0x19a198: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a194) {
            ctx->pc = 0x19A1B0u;
            goto label_19a1b0;
        }
    }
    ctx->pc = 0x19A19Cu;
    // 0x19a19c: 0x0  nop
    ctx->pc = 0x19a19cu;
    // NOP
label_19a1a0:
    // 0x19a1a0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A1A0u;
    {
        const bool branch_taken_0x19a1a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A1A0u;
            // 0x19a1a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1a0) {
            ctx->pc = 0x19A1C8u;
            goto label_19a1c8;
        }
    }
    ctx->pc = 0x19A1A8u;
    // 0x19a1a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a1ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19a1b0:
    // 0x19a1b0: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A1B0u;
    {
        const bool branch_taken_0x19a1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A1B0u;
            // 0x19a1b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1b0) {
            ctx->pc = 0x19A1CCu;
            goto label_19a1cc;
        }
    }
    ctx->pc = 0x19A1B8u;
    // 0x19a1b8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19a1bc: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19A1BCu;
    SET_GPR_U32(ctx, 31, 0x19A1C4u);
    ctx->pc = 0x19A1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A1BCu;
            // 0x19a1c0: 0x24848ce0  addiu       $a0, $a0, -0x7320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A1C4u; }
        if (ctx->pc != 0x19A1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A1C4u; }
        if (ctx->pc != 0x19A1C4u) { return; }
    }
    ctx->pc = 0x19A1C4u;
label_19a1c4:
    // 0x19a1c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a1c8:
    // 0x19a1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a1cc:
    // 0x19a1cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19a1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19A1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A1D0u;
            // 0x19a1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A1D8u;
}
