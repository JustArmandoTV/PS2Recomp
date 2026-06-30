#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186F38
// Address: 0x186f38 - 0x187000
void sub_00186F38_0x186f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186F38_0x186f38");
#endif

    switch (ctx->pc) {
        case 0x186f7cu: goto label_186f7c;
        case 0x186f98u: goto label_186f98;
        case 0x186fdcu: goto label_186fdc;
        case 0x186fe4u: goto label_186fe4;
        case 0x186fecu: goto label_186fec;
        default: break;
    }

    ctx->pc = 0x186f38u;

    // 0x186f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186f3c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186F3Cu;
    {
        const bool branch_taken_0x186f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F3Cu;
            // 0x186f40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f3c) {
            ctx->pc = 0x186F58u;
            goto label_186f58;
        }
    }
    ctx->pc = 0x186F44u;
    // 0x186f44: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x186f48: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x186f4c: 0x24847de0  addiu       $a0, $a0, 0x7DE0
    ctx->pc = 0x186f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32224));
    // 0x186f50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186F50u;
    {
        const bool branch_taken_0x186f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F50u;
            // 0x186f54: 0x24a57c90  addiu       $a1, $a1, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f50) {
            ctx->pc = 0x186F74u;
            goto label_186f74;
        }
    }
    ctx->pc = 0x186F58u;
label_186f58:
    // 0x186f58: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x186f58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x186f5c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x186F5Cu;
    {
        const bool branch_taken_0x186f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186f5c) {
            ctx->pc = 0x186F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186F5Cu;
            // 0x186f60: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186F88u;
            goto label_186f88;
        }
    }
    ctx->pc = 0x186F64u;
    // 0x186f64: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x186f68: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x186f6c: 0x24847df0  addiu       $a0, $a0, 0x7DF0
    ctx->pc = 0x186f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32240));
    // 0x186f70: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x186f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
label_186f74:
    // 0x186f74: 0xc0618a8  jal         func_1862A0
    ctx->pc = 0x186F74u;
    SET_GPR_U32(ctx, 31, 0x186F7Cu);
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F7Cu; }
        if (ctx->pc != 0x186F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001862A0_0x1862a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F7Cu; }
        if (ctx->pc != 0x186F7Cu) { return; }
    }
    ctx->pc = 0x186F7Cu;
label_186f7c:
    // 0x186f7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x186F7Cu;
    {
        const bool branch_taken_0x186f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F7Cu;
            // 0x186f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f7c) {
            ctx->pc = 0x186FB8u;
            goto label_186fb8;
        }
    }
    ctx->pc = 0x186F84u;
    // 0x186f84: 0x0  nop
    ctx->pc = 0x186f84u;
    // NOP
label_186f88:
    // 0x186f88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x186f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x186f8c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x186f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x186f90: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x186F90u;
    {
        const bool branch_taken_0x186f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F90u;
            // 0x186f94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f90) {
            ctx->pc = 0x186FB4u;
            goto label_186fb4;
        }
    }
    ctx->pc = 0x186F98u;
label_186f98:
    // 0x186f98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x186f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186f9c: 0x0  nop
    ctx->pc = 0x186f9cu;
    // NOP
    // 0x186fa0: 0x0  nop
    ctx->pc = 0x186fa0u;
    // NOP
    // 0x186fa4: 0x0  nop
    ctx->pc = 0x186fa4u;
    // NOP
    // 0x186fa8: 0x0  nop
    ctx->pc = 0x186fa8u;
    // NOP
    // 0x186fac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186FACu;
    {
        const bool branch_taken_0x186fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186FACu;
            // 0x186fb0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fac) {
            ctx->pc = 0x186F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_186f98;
        }
    }
    ctx->pc = 0x186FB4u;
label_186fb4:
    // 0x186fb4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x186fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_186fb8:
    // 0x186fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x186FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186FBCu;
            // 0x186fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186FC4u;
    // 0x186fc4: 0x0  nop
    ctx->pc = 0x186fc4u;
    // NOP
    // 0x186fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186fd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x186fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x186fd4: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x186FD4u;
    SET_GPR_U32(ctx, 31, 0x186FDCu);
    ctx->pc = 0x186FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186FD4u;
            // 0x186fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FDCu; }
        if (ctx->pc != 0x186FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FDCu; }
        if (ctx->pc != 0x186FDCu) { return; }
    }
    ctx->pc = 0x186FDCu;
label_186fdc:
    // 0x186fdc: 0xc061c00  jal         func_187000
    ctx->pc = 0x186FDCu;
    SET_GPR_U32(ctx, 31, 0x186FE4u);
    ctx->pc = 0x186FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186FDCu;
            // 0x186fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187000u;
    if (runtime->hasFunction(0x187000u)) {
        auto targetFn = runtime->lookupFunction(0x187000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FE4u; }
        if (ctx->pc != 0x186FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187000_0x187000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FE4u; }
        if (ctx->pc != 0x186FE4u) { return; }
    }
    ctx->pc = 0x186FE4u;
label_186fe4:
    // 0x186fe4: 0xc061282  jal         func_184A08
    ctx->pc = 0x186FE4u;
    SET_GPR_U32(ctx, 31, 0x186FECu);
    ctx->pc = 0x186FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186FE4u;
            // 0x186fe8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FECu; }
        if (ctx->pc != 0x186FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FECu; }
        if (ctx->pc != 0x186FECu) { return; }
    }
    ctx->pc = 0x186FECu;
label_186fec:
    // 0x186fec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186ff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x186FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186FF8u;
            // 0x186ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187000u;
}
