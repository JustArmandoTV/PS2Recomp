#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00382F20
// Address: 0x382f20 - 0x382fd0
void sub_00382F20_0x382f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382F20_0x382f20");
#endif

    switch (ctx->pc) {
        case 0x382f48u: goto label_382f48;
        case 0x382fb0u: goto label_382fb0;
        default: break;
    }

    ctx->pc = 0x382f20u;

    // 0x382f20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x382f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x382f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x382f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f28: 0x24427860  addiu       $v0, $v0, 0x7860
    ctx->pc = 0x382f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30816));
    // 0x382f2c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x382f2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f30: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x382f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x382f34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x382f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x382f38: 0xac443e60  sw          $a0, 0x3E60($v0)
    ctx->pc = 0x382f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15968), GPR_U32(ctx, 4));
    // 0x382f3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x382f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x382f40: 0x24427850  addiu       $v0, $v0, 0x7850
    ctx->pc = 0x382f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30800));
    // 0x382f44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x382f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_382f48:
    // 0x382f48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x382f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x382f4c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x382f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x382f50: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x382f50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x382f54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x382f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x382f58: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x382f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x382f5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x382F5Cu;
    {
        const bool branch_taken_0x382f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382F5Cu;
            // 0x382f60: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f5c) {
            ctx->pc = 0x382F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_382f48;
        }
    }
    ctx->pc = 0x382F64u;
    // 0x382f64: 0x3e00008  jr          $ra
    ctx->pc = 0x382F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382F64u;
            // 0x382f68: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382F6Cu;
    // 0x382f6c: 0x0  nop
    ctx->pc = 0x382f6cu;
    // NOP
    // 0x382f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x382f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x382f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x382f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x382f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x382f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x382f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f80: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x382F80u;
    {
        const bool branch_taken_0x382f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x382f80) {
            ctx->pc = 0x382F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382F80u;
            // 0x382f84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382FB4u;
            goto label_382fb4;
        }
    }
    ctx->pc = 0x382F88u;
    // 0x382f88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x382f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x382f8c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x382f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x382f90: 0x24427860  addiu       $v0, $v0, 0x7860
    ctx->pc = 0x382f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30816));
    // 0x382f94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x382f94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x382f98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x382f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x382f9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x382f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x382fa0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x382FA0u;
    {
        const bool branch_taken_0x382fa0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x382FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382FA0u;
            // 0x382fa4: 0xac403e60  sw          $zero, 0x3E60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fa0) {
            ctx->pc = 0x382FB0u;
            goto label_382fb0;
        }
    }
    ctx->pc = 0x382FA8u;
    // 0x382fa8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x382FA8u;
    SET_GPR_U32(ctx, 31, 0x382FB0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382FB0u; }
        if (ctx->pc != 0x382FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382FB0u; }
        if (ctx->pc != 0x382FB0u) { return; }
    }
    ctx->pc = 0x382FB0u;
label_382fb0:
    // 0x382fb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x382fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_382fb4:
    // 0x382fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x382fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x382FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382FBCu;
            // 0x382fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382FC4u;
    // 0x382fc4: 0x0  nop
    ctx->pc = 0x382fc4u;
    // NOP
    // 0x382fc8: 0x0  nop
    ctx->pc = 0x382fc8u;
    // NOP
    // 0x382fcc: 0x0  nop
    ctx->pc = 0x382fccu;
    // NOP
}
