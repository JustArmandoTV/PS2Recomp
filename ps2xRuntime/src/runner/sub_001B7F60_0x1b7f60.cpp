#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7F60
// Address: 0x1b7f60 - 0x1b7fd0
void sub_001B7F60_0x1b7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7F60_0x1b7f60");
#endif

    switch (ctx->pc) {
        case 0x1b7fa4u: goto label_1b7fa4;
        default: break;
    }

    ctx->pc = 0x1b7f60u;

    // 0x1b7f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7f64: 0x24830d88  addiu       $v1, $a0, 0xD88
    ctx->pc = 0x1b7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x1b7f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7f6c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b7f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7f74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b7f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b7f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f7c: 0x8c6202cc  lw          $v0, 0x2CC($v1)
    ctx->pc = 0x1b7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
    // 0x1b7f80: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7F80u;
    {
        const bool branch_taken_0x1b7f80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B7F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F80u;
            // 0x1b7f84: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f80) {
            ctx->pc = 0x1B7F98u;
            goto label_1b7f98;
        }
    }
    ctx->pc = 0x1B7F88u;
    // 0x1b7f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7f8c: 0xac6002cc  sw          $zero, 0x2CC($v1)
    ctx->pc = 0x1b7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 716), GPR_U32(ctx, 0));
    // 0x1b7f90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B7F90u;
    {
        const bool branch_taken_0x1b7f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F90u;
            // 0x1b7f94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f90) {
            ctx->pc = 0x1B7FBCu;
            goto label_1b7fbc;
        }
    }
    ctx->pc = 0x1B7F98u;
label_1b7f98:
    // 0x1b7f98: 0x8c6602cc  lw          $a2, 0x2CC($v1)
    ctx->pc = 0x1b7f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
    // 0x1b7f9c: 0xc062890  jal         func_18A240
    ctx->pc = 0x1B7F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7FA4u);
    ctx->pc = 0x1B7FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F9Cu;
            // 0x1b7fa0: 0x8c479b3c  lw          $a3, -0x64C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FA4u; }
        if (ctx->pc != 0x1B7FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FA4u; }
        if (ctx->pc != 0x1B7FA4u) { return; }
    }
    ctx->pc = 0x1B7FA4u;
label_1b7fa4:
    // 0x1b7fa4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7FA4u;
    {
        const bool branch_taken_0x1b7fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FA4u;
            // 0x1b7fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fa4) {
            ctx->pc = 0x1B7FB8u;
            goto label_1b7fb8;
        }
    }
    ctx->pc = 0x1B7FACu;
    // 0x1b7fac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7FACu;
    {
        const bool branch_taken_0x1b7fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FACu;
            // 0x1b7fb0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fac) {
            ctx->pc = 0x1B7FBCu;
            goto label_1b7fbc;
        }
    }
    ctx->pc = 0x1B7FB4u;
    // 0x1b7fb4: 0x0  nop
    ctx->pc = 0x1b7fb4u;
    // NOP
label_1b7fb8:
    // 0x1b7fb8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b7fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b7fbc:
    // 0x1b7fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7fc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FC4u;
            // 0x1b7fc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7FCCu;
    // 0x1b7fcc: 0x0  nop
    ctx->pc = 0x1b7fccu;
    // NOP
}
