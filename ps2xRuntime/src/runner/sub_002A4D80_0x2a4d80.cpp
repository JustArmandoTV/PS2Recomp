#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4D80
// Address: 0x2a4d80 - 0x2a4e20
void sub_002A4D80_0x2a4d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4D80_0x2a4d80");
#endif

    switch (ctx->pc) {
        case 0x2a4dccu: goto label_2a4dcc;
        case 0x2a4decu: goto label_2a4dec;
        default: break;
    }

    ctx->pc = 0x2a4d80u;

    // 0x2a4d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4d84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a4d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a4d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a4d8c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a4d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a4d90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a4d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a4d94: 0x2442fb10  addiu       $v0, $v0, -0x4F0
    ctx->pc = 0x2a4d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966032));
    // 0x2a4d98: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a4d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a4d9c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2a4d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2a4da0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a4da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a4da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4da8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a4dac: 0x24a55a60  addiu       $a1, $a1, 0x5A60
    ctx->pc = 0x2a4dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23136));
    // 0x2a4db0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2a4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2a4db4: 0x24c65a00  addiu       $a2, $a2, 0x5A00
    ctx->pc = 0x2a4db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23040));
    // 0x2a4db8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a4db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2a4dbc: 0x240702a0  addiu       $a3, $zero, 0x2A0
    ctx->pc = 0x2a4dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x2a4dc0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4dc4: 0xc040804  jal         func_102010
    ctx->pc = 0x2A4DC4u;
    SET_GPR_U32(ctx, 31, 0x2A4DCCu);
    ctx->pc = 0x2A4DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4DC4u;
            // 0x2a4dc8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4DCCu; }
        if (ctx->pc != 0x2A4DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4DCCu; }
        if (ctx->pc != 0x2A4DCCu) { return; }
    }
    ctx->pc = 0x2A4DCCu;
label_2a4dcc:
    // 0x2a4dcc: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x2a4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x2a4dd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4dd4: 0xa2000564  sb          $zero, 0x564($s0)
    ctx->pc = 0x2a4dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1380), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4dd8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2a4dd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ddc: 0xa2000565  sb          $zero, 0x565($s0)
    ctx->pc = 0x2a4ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1381), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4de0: 0xa2000566  sb          $zero, 0x566($s0)
    ctx->pc = 0x2a4de0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1382), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4de4: 0xae000568  sw          $zero, 0x568($s0)
    ctx->pc = 0x2a4de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 0));
    // 0x2a4de8: 0xae00056c  sw          $zero, 0x56C($s0)
    ctx->pc = 0x2a4de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 0));
label_2a4dec:
    // 0x2a4dec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a4decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a4df0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2a4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2a4df4: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2a4df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a4df8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a4df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a4dfc: 0x0  nop
    ctx->pc = 0x2a4dfcu;
    // NOP
    // 0x2a4e00: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A4E00u;
    {
        const bool branch_taken_0x2a4e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4e00) {
            ctx->pc = 0x2A4DECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4dec;
        }
    }
    ctx->pc = 0x2A4E08u;
    // 0x2a4e08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a4e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a4e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4e14: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4E14u;
            // 0x2a4e18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4E1Cu;
    // 0x2a4e1c: 0x0  nop
    ctx->pc = 0x2a4e1cu;
    // NOP
}
