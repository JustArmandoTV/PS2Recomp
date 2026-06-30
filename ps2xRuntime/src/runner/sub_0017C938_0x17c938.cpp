#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C938
// Address: 0x17c938 - 0x17c9e0
void sub_0017C938_0x17c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C938_0x17c938");
#endif

    switch (ctx->pc) {
        case 0x17c958u: goto label_17c958;
        case 0x17c96cu: goto label_17c96c;
        case 0x17c978u: goto label_17c978;
        case 0x17c9a8u: goto label_17c9a8;
        default: break;
    }

    ctx->pc = 0x17c938u;

    // 0x17c938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c93c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c944: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x17c944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17c948: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c94c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c950: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17C950u;
    SET_GPR_U32(ctx, 31, 0x17C958u);
    ctx->pc = 0x17C954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C950u;
            // 0x17c954: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C958u; }
        if (ctx->pc != 0x17C958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C958u; }
        if (ctx->pc != 0x17C958u) { return; }
    }
    ctx->pc = 0x17C958u;
label_17c958:
    // 0x17c958: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17c95c: 0x8c46585c  lw          $a2, 0x585C($v0)
    ctx->pc = 0x17c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22620)));
    // 0x17c960: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c964: 0xc0479aa  jal         func_11E6A8
    ctx->pc = 0x17C964u;
    SET_GPR_U32(ctx, 31, 0x17C96Cu);
    ctx->pc = 0x17C968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C964u;
            // 0x17c968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E6A8u;
    if (runtime->hasFunction(0x11E6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11E6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C96Cu; }
        if (ctx->pc != 0x17C96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E6A8_0x11e6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C96Cu; }
        if (ctx->pc != 0x17C96Cu) { return; }
    }
    ctx->pc = 0x17C96Cu;
label_17c96c:
    // 0x17c96c: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x17c96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x17c970: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17C970u;
    SET_GPR_U32(ctx, 31, 0x17C978u);
    ctx->pc = 0x17C974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C970u;
            // 0x17c974: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C978u; }
        if (ctx->pc != 0x17C978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C978u; }
        if (ctx->pc != 0x17C978u) { return; }
    }
    ctx->pc = 0x17C978u;
label_17c978:
    // 0x17c978: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c97c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17c97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c988: 0x3e00008  jr          $ra
    ctx->pc = 0x17C988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C988u;
            // 0x17c98c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C990u;
    // 0x17c990: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17c994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c998: 0x244458d0  addiu       $a0, $v0, 0x58D0
    ctx->pc = 0x17c998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22736));
    // 0x17c99c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17c99cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c9a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17c9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c9a4: 0x0  nop
    ctx->pc = 0x17c9a4u;
    // NOP
label_17c9a8:
    // 0x17c9a8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17c9a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c9ac: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C9ACu;
    {
        const bool branch_taken_0x17c9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x17c9ac) {
            ctx->pc = 0x17C9B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C9ACu;
            // 0x17c9b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C9C4u;
            goto label_17c9c4;
        }
    }
    ctx->pc = 0x17C9B4u;
    // 0x17c9b4: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x17c9b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17c9b8: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C9B8u;
    {
        const bool branch_taken_0x17c9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x17C9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C9B8u;
            // 0x17c9bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9b8) {
            ctx->pc = 0x17C9D8u;
            goto label_17c9d8;
        }
    }
    ctx->pc = 0x17C9C0u;
    // 0x17c9c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17c9c4:
    // 0x17c9c4: 0x28a20028  slti        $v0, $a1, 0x28
    ctx->pc = 0x17c9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x17c9c8: 0x0  nop
    ctx->pc = 0x17c9c8u;
    // NOP
    // 0x17c9cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17C9CCu;
    {
        const bool branch_taken_0x17c9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C9CCu;
            // 0x17c9d0: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9cc) {
            ctx->pc = 0x17C9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c9a8;
        }
    }
    ctx->pc = 0x17C9D4u;
    // 0x17c9d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17c9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c9d8:
    // 0x17c9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17C9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C9E0u;
}
