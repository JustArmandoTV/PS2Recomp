#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1D50
// Address: 0x1d1d50 - 0x1d1e30
void sub_001D1D50_0x1d1d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1D50_0x1d1d50");
#endif

    switch (ctx->pc) {
        case 0x1d1d78u: goto label_1d1d78;
        case 0x1d1e14u: goto label_1d1e14;
        default: break;
    }

    ctx->pc = 0x1d1d50u;

    // 0x1d1d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d1d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d68: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x1d1d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x1d1d6c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d1d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1d1d70: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1D1D70u;
    SET_GPR_U32(ctx, 31, 0x1D1D78u);
    ctx->pc = 0x1D1D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D70u;
            // 0x1d1d74: 0x2484c4a8  addiu       $a0, $a0, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D78u; }
        if (ctx->pc != 0x1D1D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1D78u; }
        if (ctx->pc != 0x1D1D78u) { return; }
    }
    ctx->pc = 0x1D1D78u;
label_1d1d78:
    // 0x1d1d78: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1d1d7c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1d1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1d1d80: 0x2484c4a8  addiu       $a0, $a0, -0x3B58
    ctx->pc = 0x1d1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952104));
    // 0x1d1d84: 0x8c66c4a8  lw          $a2, -0x3B58($v1)
    ctx->pc = 0x1d1d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952104)));
    // 0x1d1d88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d1d8c: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x1d1d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1d1d90: 0x24040e87  addiu       $a0, $zero, 0xE87
    ctx->pc = 0x1d1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3719));
    // 0x1d1d94: 0x24030743  addiu       $v1, $zero, 0x743
    ctx->pc = 0x1d1d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1859));
    // 0x1d1d98: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1d1d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d1d9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1da0: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x1d1da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x1d1da4: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x1d1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x1d1da8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1d1da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1d1dac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1db8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DB8u;
            // 0x1d1dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1DC0u;
    // 0x1d1dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1dd0: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1DD0u;
    {
        const bool branch_taken_0x1d1dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1dd0) {
            ctx->pc = 0x1D1DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DD0u;
            // 0x1d1dd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1E18u;
            goto label_1d1e18;
        }
    }
    ctx->pc = 0x1D1DD8u;
    // 0x1d1dd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d1ddc: 0x2442cda0  addiu       $v0, $v0, -0x3260
    ctx->pc = 0x1d1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954400));
    // 0x1d1de0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1DE0u;
    {
        const bool branch_taken_0x1d1de0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DE0u;
            // 0x1d1de4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1de0) {
            ctx->pc = 0x1D1DFCu;
            goto label_1d1dfc;
        }
    }
    ctx->pc = 0x1D1DE8u;
    // 0x1d1de8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d1dec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d1decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d1df0: 0x2463cdb0  addiu       $v1, $v1, -0x3250
    ctx->pc = 0x1d1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954416));
    // 0x1d1df4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d1df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d1df8: 0xac40a2e0  sw          $zero, -0x5D20($v0)
    ctx->pc = 0x1d1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943456), GPR_U32(ctx, 0));
label_1d1dfc:
    // 0x1d1dfc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1d1dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1d1e00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d1e00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d1e04: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1E04u;
    {
        const bool branch_taken_0x1d1e04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d1e04) {
            ctx->pc = 0x1D1E14u;
            goto label_1d1e14;
        }
    }
    ctx->pc = 0x1D1E0Cu;
    // 0x1d1e0c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1D1E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D1E14u);
    ctx->pc = 0x1D1E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E0Cu;
            // 0x1d1e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E14u; }
        if (ctx->pc != 0x1D1E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1E14u; }
        if (ctx->pc != 0x1D1E14u) { return; }
    }
    ctx->pc = 0x1D1E14u;
label_1d1e14:
    // 0x1d1e14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e18:
    // 0x1d1e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1e20: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E20u;
            // 0x1d1e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1E28u;
    // 0x1d1e28: 0x0  nop
    ctx->pc = 0x1d1e28u;
    // NOP
    // 0x1d1e2c: 0x0  nop
    ctx->pc = 0x1d1e2cu;
    // NOP
}
