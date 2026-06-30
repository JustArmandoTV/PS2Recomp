#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00115E78
// Address: 0x115e78 - 0x115f60
void sub_00115E78_0x115e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115E78_0x115e78");
#endif

    switch (ctx->pc) {
        case 0x115ea8u: goto label_115ea8;
        case 0x115ec0u: goto label_115ec0;
        case 0x115ec8u: goto label_115ec8;
        case 0x115ed0u: goto label_115ed0;
        case 0x115edcu: goto label_115edc;
        case 0x115ee8u: goto label_115ee8;
        case 0x115ef0u: goto label_115ef0;
        case 0x115ef8u: goto label_115ef8;
        case 0x115f08u: goto label_115f08;
        case 0x115f1cu: goto label_115f1c;
        default: break;
    }

    ctx->pc = 0x115e78u;

    // 0x115e78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x115e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x115e7c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x115e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x115e80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x115e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x115e84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x115e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115e88: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x115e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115e90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x115e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x115e94: 0x2450e7e8  addiu       $s0, $v0, -0x1818
    ctx->pc = 0x115e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961128));
    // 0x115e98: 0x8c44e7e8  lw          $a0, -0x1818($v0)
    ctx->pc = 0x115e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961128)));
    // 0x115e9c: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x115e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x115ea0: 0xc04579a  jal         func_115E68
    ctx->pc = 0x115EA0u;
    SET_GPR_U32(ctx, 31, 0x115EA8u);
    ctx->pc = 0x115EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115EA0u;
            // 0x115ea4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115E68u;
    if (runtime->hasFunction(0x115E68u)) {
        auto targetFn = runtime->lookupFunction(0x115E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EA8u; }
        if (ctx->pc != 0x115EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115E68_0x115e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EA8u; }
        if (ctx->pc != 0x115EA8u) { return; }
    }
    ctx->pc = 0x115EA8u;
label_115ea8:
    // 0x115ea8: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x115ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x115eac: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x115eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x115eb0: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x115eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x115eb4: 0x24a5e468  addiu       $a1, $a1, -0x1B98
    ctx->pc = 0x115eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960232));
    // 0x115eb8: 0xc045784  jal         func_115E10
    ctx->pc = 0x115EB8u;
    SET_GPR_U32(ctx, 31, 0x115EC0u);
    ctx->pc = 0x115EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115EB8u;
            // 0x115ebc: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
        ctx->in_delay_slot = false;
    ctx->pc = 0x115E10u;
    if (runtime->hasFunction(0x115E10u)) {
        auto targetFn = runtime->lookupFunction(0x115E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EC0u; }
        if (ctx->pc != 0x115EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115E10_0x115e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EC0u; }
        if (ctx->pc != 0x115EC0u) { return; }
    }
    ctx->pc = 0x115EC0u;
label_115ec0:
    // 0x115ec0: 0xc043178  jal         func_10C5E0
    ctx->pc = 0x115EC0u;
    SET_GPR_U32(ctx, 31, 0x115EC8u);
    ctx->pc = 0x115EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115EC0u;
            // 0x115ec4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EC8u; }
        if (ctx->pc != 0x115EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EC8u; }
        if (ctx->pc != 0x115EC8u) { return; }
    }
    ctx->pc = 0x115EC8u;
label_115ec8:
    // 0x115ec8: 0xc043178  jal         func_10C5E0
    ctx->pc = 0x115EC8u;
    SET_GPR_U32(ctx, 31, 0x115ED0u);
    ctx->pc = 0x115ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115EC8u;
            // 0x115ecc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115ED0u; }
        if (ctx->pc != 0x115ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115ED0u; }
        if (ctx->pc != 0x115ED0u) { return; }
    }
    ctx->pc = 0x115ED0u;
label_115ed0:
    // 0x115ed0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x115ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x115ed4: 0xc04579a  jal         func_115E68
    ctx->pc = 0x115ED4u;
    SET_GPR_U32(ctx, 31, 0x115EDCu);
    ctx->pc = 0x115ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115ED4u;
            // 0x115ed8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115E68u;
    if (runtime->hasFunction(0x115E68u)) {
        auto targetFn = runtime->lookupFunction(0x115E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EDCu; }
        if (ctx->pc != 0x115EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115E68_0x115e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EDCu; }
        if (ctx->pc != 0x115EDCu) { return; }
    }
    ctx->pc = 0x115EDCu;
label_115edc:
    // 0x115edc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x115edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x115ee0: 0xc04579a  jal         func_115E68
    ctx->pc = 0x115EE0u;
    SET_GPR_U32(ctx, 31, 0x115EE8u);
    ctx->pc = 0x115EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115EE0u;
            // 0x115ee4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115E68u;
    if (runtime->hasFunction(0x115E68u)) {
        auto targetFn = runtime->lookupFunction(0x115E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EE8u; }
        if (ctx->pc != 0x115EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115E68_0x115e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EE8u; }
        if (ctx->pc != 0x115EE8u) { return; }
    }
    ctx->pc = 0x115EE8u;
label_115ee8:
    // 0x115ee8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x115ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115eec: 0x0  nop
    ctx->pc = 0x115eecu;
    // NOP
label_115ef0:
    // 0x115ef0: 0xc045796  jal         func_115E58
    ctx->pc = 0x115EF0u;
    SET_GPR_U32(ctx, 31, 0x115EF8u);
    ctx->pc = 0x115EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115EF0u;
            // 0x115ef4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115E58u;
    if (runtime->hasFunction(0x115E58u)) {
        auto targetFn = runtime->lookupFunction(0x115E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EF8u; }
        if (ctx->pc != 0x115EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115E58_0x115e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115EF8u; }
        if (ctx->pc != 0x115EF8u) { return; }
    }
    ctx->pc = 0x115EF8u;
label_115ef8:
    // 0x115ef8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x115ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f00: 0xc04579a  jal         func_115E68
    ctx->pc = 0x115F00u;
    SET_GPR_U32(ctx, 31, 0x115F08u);
    ctx->pc = 0x115F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115F00u;
            // 0x115f04: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115E68u;
    if (runtime->hasFunction(0x115E68u)) {
        auto targetFn = runtime->lookupFunction(0x115E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115F08u; }
        if (ctx->pc != 0x115F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115E68_0x115e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115F08u; }
        if (ctx->pc != 0x115F08u) { return; }
    }
    ctx->pc = 0x115F08u;
label_115f08:
    // 0x115f08: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x115f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x115f0c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x115F0Cu;
    {
        const bool branch_taken_0x115f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115f0c) {
            ctx->pc = 0x115F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115F0Cu;
            // 0x115f10: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x115EF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_115ef0;
        }
    }
    ctx->pc = 0x115F14u;
    // 0x115f14: 0xc045796  jal         func_115E58
    ctx->pc = 0x115F14u;
    SET_GPR_U32(ctx, 31, 0x115F1Cu);
    ctx->pc = 0x115F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115F14u;
            // 0x115f18: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115E58u;
    if (runtime->hasFunction(0x115E58u)) {
        auto targetFn = runtime->lookupFunction(0x115E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115F1Cu; }
        if (ctx->pc != 0x115F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115E58_0x115e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115F1Cu; }
        if (ctx->pc != 0x115F1Cu) { return; }
    }
    ctx->pc = 0x115F1Cu;
label_115f1c:
    // 0x115f1c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x115f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x115f20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x115f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115f24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x115f24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115f28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x115f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115f30: 0xac62e7e0  sw          $v0, -0x1820($v1)
    ctx->pc = 0x115f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961120), GPR_U32(ctx, 2));
    // 0x115f34: 0x3e00008  jr          $ra
    ctx->pc = 0x115F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115F34u;
            // 0x115f38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115F3Cu;
    // 0x115f3c: 0x0  nop
    ctx->pc = 0x115f3cu;
    // NOP
    // 0x115f40: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x115f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x115f44: 0xc  syscall     0
    ctx->pc = 0x115f44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115f48: 0x3e00008  jr          $ra
    ctx->pc = 0x115F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115F50u;
    // 0x115f50: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x115f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x115f54: 0xc  syscall     0
    ctx->pc = 0x115f54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115f58: 0x3e00008  jr          $ra
    ctx->pc = 0x115F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115F60u;
}
